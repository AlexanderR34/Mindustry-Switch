#include "mindustry/entities/Damage_invoke_arc_func_Cons_17.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Bullet.h"
#include "mindustry/entities/Damage_invoke_arc_func_Cons_17.h"
#include "mindustry/entities/Damage.h"
#include "mindustry/game/Team.h"

extern "C" {


void mark_mindustry_entities_Damage_invoke_arc_func_Cons_17(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_Damage_invoke_arc_func_Cons_17 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field9)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field9)->clazz)->markFunction)((jobject) self->F_field9, mark, depth + 1);
}

void clinit_mindustry_entities_Damage_invoke_arc_func_Cons_17(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_entities_Damage_invoke_arc_func_Cons_17_get_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/entities/Damage_invoke_arc_func_Cons_17:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_entities_Damage_invoke_arc_func_Cons_17 *) self;
	SM_mindustry_entities_Damage_lambda$damage$0_mindustry_game_Team_boolean_boolean_float_float_float_boolean_float_float_mindustry_gen_Bullet_boolean_mindustry_gen_Unit(ctx, (jobject) proxy->F_field0, proxy->F_field1, proxy->F_field2, proxy->F_field3, proxy->F_field4, proxy->F_field5, proxy->F_field6, proxy->F_field7, proxy->F_field8, (jobject) proxy->F_field9, proxy->F_field10, param0);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_Damage_invoke_arc_func_Cons_17[] {
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
	(void *) M_mindustry_entities_Damage_invoke_arc_func_Cons_17_get_java_lang_Object,
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
	{ "field0", &class_mindustry_game_Team, offsetof(mindustry_entities_Damage_invoke_arc_func_Cons_17, F_field0), "Lmindustry/game/Team;", 0 },
	{ "field1", &class_boolean, offsetof(mindustry_entities_Damage_invoke_arc_func_Cons_17, F_field1), "Z", 0 },
	{ "field2", &class_boolean, offsetof(mindustry_entities_Damage_invoke_arc_func_Cons_17, F_field2), "Z", 0 },
	{ "field3", &class_float, offsetof(mindustry_entities_Damage_invoke_arc_func_Cons_17, F_field3), "F", 0 },
	{ "field4", &class_float, offsetof(mindustry_entities_Damage_invoke_arc_func_Cons_17, F_field4), "F", 0 },
	{ "field5", &class_float, offsetof(mindustry_entities_Damage_invoke_arc_func_Cons_17, F_field5), "F", 0 },
	{ "field6", &class_boolean, offsetof(mindustry_entities_Damage_invoke_arc_func_Cons_17, F_field6), "Z", 0 },
	{ "field7", &class_float, offsetof(mindustry_entities_Damage_invoke_arc_func_Cons_17, F_field7), "F", 0 },
	{ "field8", &class_float, offsetof(mindustry_entities_Damage_invoke_arc_func_Cons_17, F_field8), "F", 0 },
	{ "field9", &class_mindustry_gen_Bullet, offsetof(mindustry_entities_Damage_invoke_arc_func_Cons_17, F_field9), "Lmindustry/gen/Bullet;", 0 },
	{ "field10", &class_boolean, offsetof(mindustry_entities_Damage_invoke_arc_func_Cons_17, F_field10), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_entities_Damage_invoke_arc_func_Cons_17_get_java_lang_Object, VTABLE_mindustry_entities_Damage_invoke_arc_func_Cons_17_get_java_lang_Object, "(Ljava/lang/Object;)V", 0 },
};

Class class_mindustry_entities_Damage_invoke_arc_func_Cons_17{
		.nativeName = (intptr_t) "mindustry/entities/Damage_invoke_arc_func_Cons_17",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_Damage_invoke_arc_func_Cons_17),
		.classVtable = (intptr_t) vtable_mindustry_entities_Damage_invoke_arc_func_Cons_17,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_Damage_invoke_arc_func_Cons_17,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_Damage_invoke_arc_func_Cons_17,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_Damage_invoke_arc_func_Cons_17 = registerClass(&class_mindustry_entities_Damage_invoke_arc_func_Cons_17);

}
