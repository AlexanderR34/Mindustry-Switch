#include "mindustry/ctype/MappableContent.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/core/ContentLoader.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/ctype/MappableContent.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/Vars.h"
#include "mindustry/mod/NoPatch.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_ctype_MappableContent(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ctype_Content(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ctype_MappableContent *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void clinit_mindustry_ctype_MappableContent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ctype_Content(ctx);
}

void init_mindustry_ctype_MappableContent_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/MappableContent:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ctype_MappableContent(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	init_mindustry_ctype_Content(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_transformName_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_transformName_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (frame[1].o));
	((mindustry_ctype_MappableContent *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(12);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	((func_mindustry_core_ContentLoader_handleMappableContent_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_handleMappableContent_mindustry_ctype_MappableContent])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ctype_MappableContent_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/MappableContent:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ctype_MappableContent;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Class
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		clazz.annotations = (jref) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_mod_NoPatch);
	}

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ctype_MappableContent[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) nullptr,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_ctype_Content_init,
	(void *) M_mindustry_ctype_Content_postInit,
	(void *) M_mindustry_ctype_Content_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(mindustry_ctype_MappableContent, F_name), "Ljava/lang/String;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ctype_MappableContent_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "toString", (intptr_t) M_mindustry_ctype_MappableContent_toString_R_java_lang_String, VTABLE_mindustry_ctype_MappableContent_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_ctype_MappableContent{
		.nativeName = (intptr_t) "mindustry/ctype/MappableContent",
		.parentClass = (intptr_t) &class_mindustry_ctype_Content,
		.size = sizeof(mindustry_ctype_MappableContent),
		.classVtable = (intptr_t) vtable_mindustry_ctype_MappableContent,
		.staticInitializer = (intptr_t) clinit_mindustry_ctype_MappableContent,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ctype_MappableContent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ctype_MappableContent = registerClass(&class_mindustry_ctype_MappableContent);

}
