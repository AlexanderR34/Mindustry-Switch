#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_3.h"
#include "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_3.h"
#include "java/lang/Object.h"
#include "arc/func/Intc2.h"
#include "mindustry/world/Block.h"
#include "mindustry/maps/generators/BasicGenerator.h"

extern "C" {


void mark_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field4)->clazz)->markFunction)((jobject) self->F_field4, mark, depth + 1);
}

void clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3_get_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_3:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3 *) self;
	((func_mindustry_maps_generators_BasicGenerator_lambda$ore$0_mindustry_world_Block_float_float_mindustry_world_Block_int_int) ((void **) NULL_CHECK((jobject)proxy->F_field0)->vtable)[VTABLE_mindustry_maps_generators_BasicGenerator_lambda$ore$0_mindustry_world_Block_float_float_mindustry_world_Block_int_int])(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, proxy->F_field2, proxy->F_field3, (jobject) proxy->F_field4, param0, param1);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3[] {
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
	(void *) M_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3_get_int_int,
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
	{ "get", "(II)V" },
};

static jclass interfaces[] { &class_arc_func_Intc2, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_maps_generators_BasicGenerator, offsetof(mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3, F_field0), "Lmindustry/maps/generators/BasicGenerator;", 0 },
	{ "field1", &class_mindustry_world_Block, offsetof(mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3, F_field1), "Lmindustry/world/Block;", 0 },
	{ "field2", &class_float, offsetof(mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3, F_field2), "F", 0 },
	{ "field3", &class_float, offsetof(mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3, F_field3), "F", 0 },
	{ "field4", &class_mindustry_world_Block, offsetof(mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3, F_field4), "Lmindustry/world/Block;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3_get_int_int, VTABLE_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3_get_int_int, "(II)V", 0 },
};

Class class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3{
		.nativeName = (intptr_t) "mindustry/maps/generators/BasicGenerator_invoke_arc_func_Intc2_3",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3),
		.classVtable = (intptr_t) vtable_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3 = registerClass(&class_mindustry_maps_generators_BasicGenerator_invoke_arc_func_Intc2_3);

}
