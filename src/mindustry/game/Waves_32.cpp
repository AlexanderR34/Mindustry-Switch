#include "mindustry/game/Waves_32.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/Object.h"
#include "arc/math/Rand.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/game/Waves_32.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/SpawnGroup.h"

extern "C" {


void mark_mindustry_game_Waves$32(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Waves$32 *) object;
	if (self->F_val$rand)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$rand)->clazz)->markFunction)((jobject) self->F_val$rand, mark, depth + 1);
}

void clinit_mindustry_game_Waves$32(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_SpawnGroup(ctx);
}

void init_mindustry_game_Waves$32_mindustry_type_UnitType_int_arc_math_Rand_int_float(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jint param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves$32:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Waves$32(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(383);
	((mindustry_game_Waves$32 *) NULL_CHECK((frame[0].o)))->F_val$bossWave = (frame[2].i);
	((mindustry_game_Waves$32 *) NULL_CHECK((frame[0].o)))->F_val$rand = (jref) (frame[3].o);
	((mindustry_game_Waves$32 *) NULL_CHECK((frame[0].o)))->F_val$bossSpacing = (frame[4].i);
	((mindustry_game_Waves$32 *) NULL_CHECK((frame[0].o)))->F_val$shieldsPerWave = (frame[5].f);
	init_mindustry_game_SpawnGroup_mindustry_type_UnitType(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(384);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitAmount = (jint(1));
	LINE_NUMBER(385);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((mindustry_game_Waves$32 *) NULL_CHECK((frame[0].o)))->F_val$bossWave;
	sp[1].o = (jobject)((mindustry_game_Waves$32 *) NULL_CHECK((frame[0].o)))->F_val$rand;
	jint temp1 = (jint)((func_arc_math_Rand_random_int_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_Rand_random_int_int_R_int])(ctx, sp[1].o, (jint(3)), (jint(5)));
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_begin = (temp0 + (temp1 * ((jint)((mindustry_game_Waves$32 *) NULL_CHECK((frame[0].o)))->F_val$bossSpacing)));
	LINE_NUMBER(386);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing = ((jint)((mindustry_game_Waves$32 *) NULL_CHECK((frame[0].o)))->F_val$bossSpacing);
	LINE_NUMBER(387);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_end = (jint(2147483647));
	LINE_NUMBER(388);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_max = (16);
	LINE_NUMBER(389);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitScaling = (jfloat(((jint)((mindustry_game_Waves$32 *) NULL_CHECK((frame[0].o)))->F_val$bossSpacing)));
	LINE_NUMBER(390);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shieldScaling = ((jfloat)((mindustry_game_Waves$32 *) NULL_CHECK((frame[0].o)))->F_val$shieldsPerWave);
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_boss;
	((mindustry_game_SpawnGroup *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Waves$32[] {
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
	{ "val$bossWave", &class_int, offsetof(mindustry_game_Waves$32, F_val$bossWave), "I", 4112 },
	{ "val$rand", &class_arc_math_Rand, offsetof(mindustry_game_Waves$32, F_val$rand), "Larc/math/Rand;", 4112 },
	{ "val$bossSpacing", &class_int, offsetof(mindustry_game_Waves$32, F_val$bossSpacing), "I", 4112 },
	{ "val$shieldsPerWave", &class_float, offsetof(mindustry_game_Waves$32, F_val$shieldsPerWave), "F", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Waves$32_mindustry_type_UnitType_int_arc_math_Rand_int_float, 0, "(Lmindustry/type/UnitType;ILarc/math/Rand;IF)V", 0 },
};

Class class_mindustry_game_Waves$32{
		.nativeName = (intptr_t) "mindustry/game/Waves$32",
		.parentClass = (intptr_t) &class_mindustry_game_SpawnGroup,
		.size = sizeof(mindustry_game_Waves$32),
		.classVtable = (intptr_t) vtable_mindustry_game_Waves$32,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Waves$32,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Waves$32,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_game_Waves$32 = registerClass(&class_mindustry_game_Waves$32);

}

