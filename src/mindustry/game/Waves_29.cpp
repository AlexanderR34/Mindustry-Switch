#include "mindustry/game/Waves_29.h"
#include "java/lang/Object.h"
#include "mindustry/game/Waves_29.h"
#include "arc/math/Rand.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/SpawnGroup.h"

extern "C" {


void mark_mindustry_game_Waves$29(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_game_SpawnGroup(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_Waves$29 *) object;
	if (self->F_val$scaling)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$scaling)->clazz)->markFunction)((jobject) self->F_val$scaling, mark, depth + 1);
	if (self->F_val$rand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$rand)->clazz)->markFunction)((jobject) self->F_val$rand, mark, depth + 1);
}

void clinit_mindustry_game_Waves$29(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_SpawnGroup(ctx);
}

void init_mindustry_game_Waves$29_mindustry_type_UnitType_int_int_Array1_float_int_int_int_float_arc_math_Rand_float_float_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jint param4, jint param5, jint param6, jfloat param7, jobject param8, jfloat param9, jfloat param10, jint param11) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves$29:<init>", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Waves$29(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].f = param7;
	frame[9].o = param8;
	frame[10].f = param9;
	frame[11].f = param10;
	frame[12].i = param11;
	{
	LINE_NUMBER(318);
	((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$f = (frame[2].i);
	((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$start = (frame[3].i);
	((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$scaling = (jref) (frame[4].o);
	((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$ctier = (frame[5].i);
	((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$next = (frame[6].i);
	((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$cap = (frame[7].i);
	((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$difficulty = (frame[8].f);
	((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$rand = (jref) (frame[9].o);
	((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$shieldAmount = (frame[10].f);
	((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$shieldsPerWave = (frame[11].f);
	((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$space = (frame[12].i);
	init_mindustry_game_SpawnGroup_mindustry_type_UnitType(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(319);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$f) != ((jint)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$start)) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	{
	jint temp0 = 6;
	sp[0].o = (jobject)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$scaling;
	jint temp1 = temp0 / (jint(((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$ctier)))));
	sp[0].i = temp1;
	sp += 1;
	}
label_3:;
	{
	sp -= 2;
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_unitAmount = sp[1].i;
	LINE_NUMBER(320);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin = ((jint)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$f);
	LINE_NUMBER(321);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((((jint)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$f) + ((jint)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$next)) < ((jint)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$cap)) goto label_6;
	}
	(sp++)->i = jint(2147483647);
	goto label_7;
label_6:;
	{
	jint temp0 = ((jint)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$f) + ((jint)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$next);
	sp[0].i = temp0;
	sp += 1;
	}
label_7:;
	{
	sp -= 2;
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_end = sp[1].i;
	LINE_NUMBER(322);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_max = (13);
	LINE_NUMBER(323);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((floatCompare(((jfloat)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$difficulty), (jfloat(0.4f)), 1)) >= 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(2.5f)), (jfloat(5.0f)));
	sp[0].f = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	sp[0].o = (jobject)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(1)), (jfloat(4.0f)));
	sp[0].f = temp0;
	sp += 1;
	}
label_11:;
	{
	sp -= 2;
	sp[2].o = (jobject)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$scaling;
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_unitScaling = (sp[1].f * ((jfloat)ARRAY_ACCESS(jfloat, sp[2].o, ((jint)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$ctier))));
	LINE_NUMBER(324);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shields = ((jfloat)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$shieldAmount);
	LINE_NUMBER(325);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shieldScaling = ((jfloat)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$shieldsPerWave);
	LINE_NUMBER(326);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing = ((jint)((mindustry_game_Waves$29 *) NULL_CHECK((frame[0].o)))->F_val$space);
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Waves$29[] {
	(void *) M_mindustry_game_SpawnGroup_hashCode_R_int,
	(void *) M_mindustry_game_SpawnGroup_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_SpawnGroup_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_game_SpawnGroup_write_arc_util_serialization_Json,
	(void *) M_mindustry_game_SpawnGroup_read_arc_util_serialization_Json_arc_util_serialization_JsonValue,
	(void *) M_mindustry_game_SpawnGroup_canSpawn_int_R_boolean,
	(void *) M_mindustry_game_SpawnGroup_getSpawned_int_R_int,
	(void *) M_mindustry_game_SpawnGroup_getShield_int_R_float,
	(void *) M_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit,
	(void *) M_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_int_R_mindustry_gen_Unit,
	(void *) M_mindustry_game_SpawnGroup_copy_R_mindustry_game_SpawnGroup,
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
	{ "write", "(Larc/util/serialization/Json;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V" },
	{ "canSpawn", "(I)Z" },
	{ "getSpawned", "(I)I" },
	{ "getShield", "(I)F" },
	{ "createUnit", "(Lmindustry/game/Team;FFFILarc/func/Cons;)Lmindustry/gen/Unit;" },
	{ "createUnit", "(Lmindustry/game/Team;I)Lmindustry/gen/Unit;" },
	{ "copy", "()Lmindustry/game/SpawnGroup;" },
};

static FieldMetadata fields[] {
	{ "val$f", &class_int, offsetof(mindustry_game_Waves$29, F_val$f), "I", 4112 },
	{ "val$start", &class_int, offsetof(mindustry_game_Waves$29, F_val$start), "I", 4112 },
	{ "val$scaling", getArrayClass(&class_float, 1), offsetof(mindustry_game_Waves$29, F_val$scaling), "[F", 4112 },
	{ "val$ctier", &class_int, offsetof(mindustry_game_Waves$29, F_val$ctier), "I", 4112 },
	{ "val$next", &class_int, offsetof(mindustry_game_Waves$29, F_val$next), "I", 4112 },
	{ "val$cap", &class_int, offsetof(mindustry_game_Waves$29, F_val$cap), "I", 4112 },
	{ "val$difficulty", &class_float, offsetof(mindustry_game_Waves$29, F_val$difficulty), "F", 4112 },
	{ "val$rand", &class_arc_math_Rand, offsetof(mindustry_game_Waves$29, F_val$rand), "Larc/math/Rand;", 4112 },
	{ "val$shieldAmount", &class_float, offsetof(mindustry_game_Waves$29, F_val$shieldAmount), "F", 4112 },
	{ "val$shieldsPerWave", &class_float, offsetof(mindustry_game_Waves$29, F_val$shieldsPerWave), "F", 4112 },
	{ "val$space", &class_int, offsetof(mindustry_game_Waves$29, F_val$space), "I", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Waves$29_mindustry_type_UnitType_int_int_Array1_float_int_int_int_float_arc_math_Rand_float_float_int, 0, "(Lmindustry/type/UnitType;II[FIIIFLarc/math/Rand;FFI)V", 0 },
};

Class class_mindustry_game_Waves$29{
		.nativeName = (intptr_t) "mindustry/game/Waves$29",
		.parentClass = (intptr_t) &class_mindustry_game_SpawnGroup,
		.size = sizeof(mindustry_game_Waves$29),
		.classVtable = (intptr_t) vtable_mindustry_game_Waves$29,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Waves$29,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Waves$29,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_game_Waves$29 = registerClass(&class_mindustry_game_Waves$29);

}

