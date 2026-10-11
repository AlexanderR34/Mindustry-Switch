#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatp_0.h"
#include "java/lang/Object.h"
#include "mindustry/maps/filters/RiverNoiseFilter.h"
#include "arc/func/Floatp.h"
#include "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatp_0.h"

extern "C" {


void mark_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jfloat M_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0_get_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatp_0:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0 *) self;
	auto object = ((func_mindustry_maps_filters_RiverNoiseFilter_lambda$options$0_R_float) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_maps_filters_RiverNoiseFilter_lambda$options$0_R_float])(ctx, (jobject) proxy->F_field0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0[] {
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
	(void *) M_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0_get_R_float,
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
	{ "get", "()F" },
};

static jclass interfaces[] { &class_arc_func_Floatp, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_maps_filters_RiverNoiseFilter, offsetof(mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0, F_field0), "Lmindustry/maps/filters/RiverNoiseFilter;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0_get_R_float, VTABLE_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0_get_R_float, "()F", 0 },
};

Class class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0{
		.nativeName = (intptr_t) "mindustry/maps/filters/RiverNoiseFilter_invoke_arc_func_Floatp_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0 = registerClass(&class_mindustry_maps_filters_RiverNoiseFilter_invoke_arc_func_Floatp_0);

}
