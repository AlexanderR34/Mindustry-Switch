#include "mindustry/game/Waves_invoke_arc_func_Intc_1.h"
#include "arc/func/Intc.h"
#include "mindustry/game/Waves_invoke_arc_func_Intc_1.h"
#include "java/lang/Object.h"
#include "arc/math/Rand.h"
#include "mindustry/game/Waves.h"
#include "arc/struct/Seq.h"
#include "mindustry/type/UnitType.h"

extern "C" {


void mark_mindustry_game_Waves_invoke_arc_func_Intc_1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Waves_invoke_arc_func_Intc_1 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field6)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field6)->clazz)->markFunction)((jobject) self->F_field6, mark, depth + 1);
	if (self->F_field7)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field7)->clazz)->markFunction)((jobject) self->F_field7, mark, depth + 1);
}

void clinit_mindustry_game_Waves_invoke_arc_func_Intc_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_game_Waves_invoke_arc_func_Intc_1_get_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/game/Waves_invoke_arc_func_Intc_1:get", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_game_Waves_invoke_arc_func_Intc_1 *) self;
	SM_mindustry_game_Waves_lambda$generate$3_arc_math_Rand_Array2_mindustry_type_UnitType_int_float_float_float_arc_struct_Seq_Array1_float_int(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, proxy->F_field2, proxy->F_field3, proxy->F_field4, proxy->F_field5, (jobject) proxy->F_field6, (jobject) proxy->F_field7, param0);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Waves_invoke_arc_func_Intc_1[] {
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
	(void *) M_mindustry_game_Waves_invoke_arc_func_Intc_1_get_int,
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
	{ "get", "(I)V" },
};

static jclass interfaces[] { &class_arc_func_Intc, };

static FieldMetadata fields[] {
	{ "field0", &class_arc_math_Rand, offsetof(mindustry_game_Waves_invoke_arc_func_Intc_1, F_field0), "Larc/math/Rand;", 0 },
	{ "field1", getArrayClass(&class_mindustry_type_UnitType, 2), offsetof(mindustry_game_Waves_invoke_arc_func_Intc_1, F_field1), "[[Lmindustry/type/UnitType;", 0 },
	{ "field2", &class_int, offsetof(mindustry_game_Waves_invoke_arc_func_Intc_1, F_field2), "I", 0 },
	{ "field3", &class_float, offsetof(mindustry_game_Waves_invoke_arc_func_Intc_1, F_field3), "F", 0 },
	{ "field4", &class_float, offsetof(mindustry_game_Waves_invoke_arc_func_Intc_1, F_field4), "F", 0 },
	{ "field5", &class_float, offsetof(mindustry_game_Waves_invoke_arc_func_Intc_1, F_field5), "F", 0 },
	{ "field6", &class_arc_struct_Seq, offsetof(mindustry_game_Waves_invoke_arc_func_Intc_1, F_field6), "Larc/struct/Seq;", 0 },
	{ "field7", getArrayClass(&class_float, 1), offsetof(mindustry_game_Waves_invoke_arc_func_Intc_1, F_field7), "[F", 0 },
};

static MethodMetadata methods[] {
	{ "get", (intptr_t) M_mindustry_game_Waves_invoke_arc_func_Intc_1_get_int, VTABLE_mindustry_game_Waves_invoke_arc_func_Intc_1_get_int, "(I)V", 0 },
};

Class class_mindustry_game_Waves_invoke_arc_func_Intc_1{
		.nativeName = (intptr_t) "mindustry/game/Waves_invoke_arc_func_Intc_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Waves_invoke_arc_func_Intc_1),
		.classVtable = (intptr_t) vtable_mindustry_game_Waves_invoke_arc_func_Intc_1,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Waves_invoke_arc_func_Intc_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Waves_invoke_arc_func_Intc_1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Waves_invoke_arc_func_Intc_1 = registerClass(&class_mindustry_game_Waves_invoke_arc_func_Intc_1);

}
