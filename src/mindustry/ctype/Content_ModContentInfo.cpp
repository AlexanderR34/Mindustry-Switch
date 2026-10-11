#include "mindustry/ctype/Content_ModContentInfo.h"
#include "mindustry/mod/data/ContentAsset.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/Nullable.h"
#include "arc/files/Fi.h"
#include "java/lang/Throwable.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_ctype_Content$ModContentInfo(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ctype_Content$ModContentInfo *) object;
	if (self->F_mod)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mod)->clazz)->markFunction)((jobject) self->F_mod, mark, depth + 1);
	if (self->F_sourceFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sourceFile)->clazz)->markFunction)((jobject) self->F_sourceFile, mark, depth + 1);
	if (self->F_error)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_error)->clazz)->markFunction)((jobject) self->F_error, mark, depth + 1);
	if (self->F_baseError)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_baseError)->clazz)->markFunction)((jobject) self->F_baseError, mark, depth + 1);
	if (self->F_asset)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_asset)->clazz)->markFunction)((jobject) self->F_asset, mark, depth + 1);
}

void clinit_mindustry_ctype_Content$ModContentInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ctype_Content$ModContentInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ctype/Content$ModContentInfo:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ctype_Content$ModContentInfo(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(83);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ctype_Content$ModContentInfo;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field mod
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field sourceFile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field error
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field baseError
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field asset
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_ctype_Content$ModContentInfo[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
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
};

static FieldMetadata fields[] {
	{ "mod", &class_mindustry_mod_Mods$LoadedMod, offsetof(mindustry_ctype_Content$ModContentInfo, F_mod), "Lmindustry/mod/Mods$LoadedMod;", 1 },
	{ "sourceFile", &class_arc_files_Fi, offsetof(mindustry_ctype_Content$ModContentInfo, F_sourceFile), "Larc/files/Fi;", 1 },
	{ "error", &class_java_lang_String, offsetof(mindustry_ctype_Content$ModContentInfo, F_error), "Ljava/lang/String;", 1 },
	{ "baseError", &class_java_lang_Throwable, offsetof(mindustry_ctype_Content$ModContentInfo, F_baseError), "Ljava/lang/Throwable;", 1 },
	{ "asset", &class_mindustry_mod_data_ContentAsset, offsetof(mindustry_ctype_Content$ModContentInfo, F_asset), "Lmindustry/mod/data/ContentAsset;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ctype_Content$ModContentInfo, 0, "()V", 1 },
};

Class class_mindustry_ctype_Content$ModContentInfo{
		.nativeName = (intptr_t) "mindustry/ctype/Content$ModContentInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ctype_Content$ModContentInfo),
		.classVtable = (intptr_t) vtable_mindustry_ctype_Content$ModContentInfo,
		.staticInitializer = (intptr_t) clinit_mindustry_ctype_Content$ModContentInfo,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ctype_Content$ModContentInfo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ctype_Content,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ctype_Content$ModContentInfo = registerClass(&class_mindustry_ctype_Content$ModContentInfo);

}

