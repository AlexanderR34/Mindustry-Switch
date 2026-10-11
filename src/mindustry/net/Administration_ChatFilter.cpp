#include "mindustry/net/Administration_ChatFilter.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "mindustry/gen/Player.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/net/Administration.h"
#include "arc/util/Nullable.h"
#include "mindustry/net/Administration_ChatFilter.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_net_Administration$ChatFilter(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_Administration$ChatFilter *) object;
}

void clinit_mindustry_net_Administration$ChatFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_net_Administration$ChatFilter;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Method filter
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}
}

void *vtable_mindustry_net_Administration$ChatFilter[] {
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
	(void *) nullptr,
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
	{ "filter", "(Lmindustry/gen/Player;Ljava/lang/String;)Ljava/lang/String;" },
};

static MethodMetadata methods[] {
	{ "filter", 0, INDEX_mindustry_net_Administration$ChatFilter_filter_mindustry_gen_Player_java_lang_String_R_java_lang_String, "(Lmindustry/gen/Player;Ljava/lang/String;)Ljava/lang/String;", 1025 },
};

Class class_mindustry_net_Administration$ChatFilter{
		.nativeName = (intptr_t) "mindustry/net/Administration$ChatFilter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_Administration$ChatFilter),
		.classVtable = (intptr_t) vtable_mindustry_net_Administration$ChatFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Administration$ChatFilter,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_net_Administration$ChatFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Administration,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1545,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Administration$ChatFilter = registerClass(&class_mindustry_net_Administration$ChatFilter);

}

