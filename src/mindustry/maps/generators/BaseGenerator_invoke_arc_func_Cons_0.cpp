#include "mindustry/maps/generators/BaseGenerator_invoke_arc_func_Cons_0.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "mindustry/maps/generators/BaseGenerator.h"
#include "mindustry/world/Tile.h"
#include "mindustry/game/Team.h"
#include "mindustry/maps/generators/BaseGenerator_invoke_arc_func_Cons_0.h"

extern "C" {


void mark_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0 *) object;
	if (self->F_field4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field4)->clazz)->markFunction)((jobject) self->F_field4, mark, depth + 1);
}

void clinit_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0_get_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/maps/generators/BaseGenerator_invoke_arc_func_Cons_0:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0 *) self;
	SM_mindustry_maps_generators_BaseGenerator_lambda$generate$0_double_double_float_float_mindustry_game_Team_mindustry_world_Tile(ctx, proxy->F_field0, proxy->F_field1, proxy->F_field2, proxy->F_field3, (jobject) proxy->F_field4, param0);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0[] {
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
	(void *) M_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0_get_java_lang_Object,
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
	{ "get", "(Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_arc_func_Cons, };

static FieldMetadata fields[] {
	{ "field0", &class_double, offsetof(mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0, F_field0), "D", 0 },
	{ "field1", &class_double, offsetof(mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0, F_field1), "D", 0 },
	{ "field2", &class_float, offsetof(mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0, F_field2), "F", 0 },
	{ "field3", &class_float, offsetof(mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0, F_field3), "F", 0 },
	{ "field4", &class_mindustry_game_Team, offsetof(mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0, F_field4), "Lmindustry/game/Team;", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0_get_java_lang_Object, VTABLE_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0_get_java_lang_Object, "(Ljava/lang/Object;)V", 0 },
};

Class class_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0{
		.nativeName = (intptr_t) "mindustry/maps/generators/BaseGenerator_invoke_arc_func_Cons_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0),
		.classVtable = (intptr_t) vtable_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0,
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
static bool registered_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0 = registerClass(&class_mindustry_maps_generators_BaseGenerator_invoke_arc_func_Cons_0);

}
