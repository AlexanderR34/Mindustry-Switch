#include "arc/math/geom/Path.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Path.h"

extern "C" {


void mark_arc_math_geom_Path(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_geom_Path *) object;
}

void clinit_arc_math_geom_Path(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_arc_math_geom_Path[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "derivativeAt", "(Ljava/lang/Object;F)Ljava/lang/Object;" },
	{ "valueAt", "(Ljava/lang/Object;F)Ljava/lang/Object;" },
	{ "approximate", "(Ljava/lang/Object;)F" },
	{ "locate", "(Ljava/lang/Object;)F" },
	{ "approxLength", "(I)F" },
};

static MethodMetadata methods[] {
	{ "derivativeAt", 0, INDEX_arc_math_geom_Path_derivativeAt_java_lang_Object_float_R_java_lang_Object, "(Ljava/lang/Object;F)Ljava/lang/Object;", 1025 },
	{ "valueAt", 0, INDEX_arc_math_geom_Path_valueAt_java_lang_Object_float_R_java_lang_Object, "(Ljava/lang/Object;F)Ljava/lang/Object;", 1025 },
	{ "approximate", 0, INDEX_arc_math_geom_Path_approximate_java_lang_Object_R_float, "(Ljava/lang/Object;)F", 1025 },
	{ "locate", 0, INDEX_arc_math_geom_Path_locate_java_lang_Object_R_float, "(Ljava/lang/Object;)F", 1025 },
	{ "approxLength", 0, INDEX_arc_math_geom_Path_approxLength_int_R_float, "(I)F", 1025 },
};

Class class_arc_math_geom_Path{
		.nativeName = (intptr_t) "arc/math/geom/Path",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Path),
		.classVtable = (intptr_t) vtable_arc_math_geom_Path,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Path,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Path,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Path = registerClass(&class_arc_math_geom_Path);

}
