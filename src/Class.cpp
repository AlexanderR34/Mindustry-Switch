#include "java/lang/Class.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/ClassNotFoundException.h"
#include "java/lang/annotation/Annotation.h"

#include <cstring>
#include <algorithm>

extern "C" {

void M_java_lang_Class_ensureInitialized(jcontext ctx, jobject selfObj) {
    auto self = (jclass) NULL_CHECK(selfObj);
    if (self->initialized) // Todo: Should be made thread safe
        return;

    auto nameStr = std::string((const char *) self->nativeName);
    std::replace(nameStr.begin(), nameStr.end(), '/', '.');
    self->name = (intptr_t) stringFromNativeEternal(ctx, nameStr.c_str());

    auto interfaces = createArrayEternal(ctx, &class_java_lang_Class, self->interfaceCount);
    self->interfaces = (intptr_t) interfaces;
    for (int i = 0; i < self->interfaceCount; i++)
        ((jclass *) interfaces->data)[i] = ((jclass *) self->nativeInterfaces)[i];

    auto innerClasses = createArrayEternal(ctx, &class_java_lang_Class, self->innerClassCount);
    self->innerClasses = (intptr_t) innerClasses;
    for (int i = 0; i < self->innerClassCount; i++)
        ((jclass *) innerClasses->data)[i] = ((jclass *) self->nativeInnerClasses)[i];

    auto fields = createArrayEternal(ctx, &class_java_lang_reflect_Field, self->fieldCount);
    self->fields = (intptr_t) fields;
    for (int i = 0; i < self->fieldCount; i++) {
        auto &data = ((FieldMetadata *) self->nativeFields)[i];
        auto field = gcAllocEternal(ctx, &class_java_lang_reflect_Field);
        ((jobject *) fields->data)[i] = field;
        auto desc = (jobject) stringFromNativeEternal(ctx, data.desc);
        auto name = (jobject) stringFromNativeEternal(ctx, data.name);
        init_java_lang_reflect_Field_long_java_lang_Class_java_lang_Class_java_lang_String_java_lang_String_int(ctx, field, data.offset, selfObj, (jobject) data.type, desc, name, data.access);
    }

    std::vector<jobject> methodVector;
    std::vector<jobject> constructorVector;
    for (int i = 0; i < self->methodCount; i++) {
        auto &methodData = ((MethodMetadata *) self->nativeMethods)[i];
        auto method = gcAllocEternal(ctx, &class_java_lang_reflect_Method);
        auto desc = (jobject) stringFromNativeEternal(ctx, methodData.desc);
        auto name = (jobject) stringFromNativeEternal(ctx, methodData.name);
        init_java_lang_reflect_Method_long_long_java_lang_Class_java_lang_String_java_lang_String_int(ctx, method, methodData.address, methodData.offset, selfObj, desc, name, methodData.access);
        if (!strcmp("<init>", methodData.name)) {
            auto constructor = gcAllocEternal(ctx, &class_java_lang_reflect_Constructor);
            init_java_lang_reflect_Constructor_java_lang_reflect_Method(ctx, constructor, method);
            constructorVector.push_back(constructor);
        } else
            methodVector.push_back(method);
    }

    auto methods = createArrayEternal(ctx, &class_java_lang_reflect_Method, (int) methodVector.size());
    self->methods = (intptr_t) methods;
    for (int i = 0; i < (int)methodVector.size(); i++)
        ((jobject *) methods->data)[i] = methodVector[i];

    auto constructors = createArrayEternal(ctx, &class_java_lang_reflect_Constructor, (int) constructorVector.size());
    self->constructors = (intptr_t) constructors;
    for (int i = 0; i < (int)constructorVector.size(); i++)
        ((jobject *) constructors->data)[i] = constructorVector[i];

    if (self->annotationInitializer)
        ((init_annotations_ptr) self->annotationInitializer)(ctx);
    else {
        self->annotations = (intptr_t) createArrayEternal(ctx, &class_java_lang_annotation_Annotation, 0);
        for (auto method : methodVector)
            ((java_lang_reflect_Method *) method)->F_annotations = (intptr_t) createArrayEternal(ctx, &class_java_lang_annotation_Annotation, 0);
        for (auto constructor : constructorVector)
            ((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructor)->F_method)->F_annotations = (intptr_t) createArrayEternal(ctx, &class_java_lang_annotation_Annotation, 0);
        for (int i = 0; i < self->fieldCount; i++)
            ((java_lang_reflect_Field **) fields->data)[i]->F_annotations = (intptr_t) createArrayEternal(ctx, &class_java_lang_annotation_Annotation, 0);
    }

    self->initialized = true;
}

jobject SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(jcontext ctx, jobject nameObj) {
    auto name = stringToNative(ctx, (jstring) NULL_CHECK(nameObj));
    { // Scope std::string to prevent leak when throwing ClassNotFoundException
        auto nameStr = std::string(name);
        std::replace(nameStr.begin(), nameStr.end(), '.', '/');
        
        // 1. Direct match
        auto clazz = (jobject) classForName(nameStr.c_str());
        if (clazz) return clazz;
        
        // 2. Try removing "io/anuke/" prefix
        if (nameStr.rfind("io/anuke/", 0) == 0) {
            auto stripped = nameStr.substr(9);
            clazz = (jobject) classForName(stripped.c_str());
            if (clazz) return clazz;
            nameStr = stripped;
        }

        // 3. Try removing GenerateFilters/ or GenerateFilter/ or inner class prefixes
        std::string filterClean = nameStr;
        size_t genPos = filterClean.find("GenerateFilter$");
        if (genPos != std::string::npos) {
            std::string after = filterClean.substr(0, genPos) + filterClean.substr(genPos + 15);
            clazz = (jobject) classForName(after.c_str());
            if (clazz) return clazz;
        }
        genPos = filterClean.find("GenerateFilters$");
        if (genPos != std::string::npos) {
            std::string after = filterClean.substr(0, genPos) + filterClean.substr(genPos + 16);
            clazz = (jobject) classForName(after.c_str());
            if (clazz) return clazz;
        }
        genPos = filterClean.find("GenerateFilter/");
        if (genPos != std::string::npos) {
            std::string after = filterClean.substr(0, genPos) + filterClean.substr(genPos + 15);
            clazz = (jobject) classForName(after.c_str());
            if (clazz) return clazz;
        }
        genPos = filterClean.find("GenerateFilters/");
        if (genPos != std::string::npos) {
            std::string after = filterClean.substr(0, genPos) + filterClean.substr(genPos + 16);
            clazz = (jobject) classForName(after.c_str());
            if (clazz) return clazz;
        }

        // 4. Try replacing '/' with '$' from the end backwards (for inner classes like GenerateFilter$ClearFilter)
        std::string innerCandidate = nameStr;
        size_t slashPos = innerCandidate.rfind('/');
        while (slashPos != std::string::npos && slashPos > 0) {
            innerCandidate[slashPos] = '$';
            clazz = (jobject) classForName(innerCandidate.c_str());
            if (clazz) return clazz;
            slashPos = innerCandidate.rfind('/', slashPos - 1);
        }

        // 5. Try simple name / suffix checks against mindustry packages
        size_t lastDelim = nameStr.find_last_of("/$");
        std::string simpleName = (lastDelim != std::string::npos) ? nameStr.substr(lastDelim + 1) : nameStr;
        
        std::string prefixed = "mindustry/maps/filters/" + simpleName;
        clazz = (jobject) classForName(prefixed.c_str());
        if (clazz) return clazz;

        prefixed = "mindustry/maps/filters/GenerateFilter$" + simpleName;
        clazz = (jobject) classForName(prefixed.c_str());
        if (clazz) return clazz;

        prefixed = "mindustry/world/blocks/" + simpleName;
        clazz = (jobject) classForName(prefixed.c_str());
        if (clazz) return clazz;

        prefixed = "mindustry/entities/bullet/" + simpleName;
        clazz = (jobject) classForName(prefixed.c_str());
        if (clazz) return clazz;
    }
    constructAndThrowMsg<&class_java_lang_ClassNotFoundException, init_java_lang_ClassNotFoundException_java_lang_String>(ctx, name);
    return nullptr;
}

jbool M_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject assignee) {
    return isAssignableFrom(ctx, (jclass) NULL_CHECK(self), (jclass) NULL_CHECK(assignee));
}

jbool M_java_lang_Class_isInstance_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject object) {
    return isAssignableFrom(ctx, (jclass) NULL_CHECK(self), (jclass) NULL_CHECK(object)->clazz);
}

}
