#include "mindustry/game/Rules_TeamRule.h"
#include "java/lang/Object.h"
#include "mindustry/game/Rules.h"
#include "mindustry/game/Team.h"
#include "mindustry/game/Rules_TeamRule.h"

extern "C" {


void mark_mindustry_game_Rules$TeamRule(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Rules$TeamRule *) object;
}

void clinit_mindustry_game_Rules$TeamRule(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_Rules$TeamRule(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules$TeamRule:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Rules$TeamRule(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(407);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(353);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_aiCoreSpawn = (jint(1));
	LINE_NUMBER(355);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_protectCores = (jint(1));
	LINE_NUMBER(357);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_checkPlacement = (jint(1));
	LINE_NUMBER(370);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_buildAiTier = (jfloat(1));
	LINE_NUMBER(375);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsMinSquad = (jint(4));
	LINE_NUMBER(377);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsMaxSquad = (50);
	LINE_NUMBER(379);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsMinWeight = (jfloat(1.2f));
	LINE_NUMBER(382);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitFactoryActivationDelay = (jfloat(0));
	LINE_NUMBER(384);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitBuildSpeedMultiplier = (jfloat(1));
	LINE_NUMBER(386);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitDamageMultiplier = (jfloat(1));
	LINE_NUMBER(388);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitCrashDamageMultiplier = (jfloat(1));
	LINE_NUMBER(390);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitMineSpeedMultiplier = (jfloat(1));
	LINE_NUMBER(392);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitCostMultiplier = (jfloat(1));
	LINE_NUMBER(394);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitHealthMultiplier = (jfloat(1));
	LINE_NUMBER(396);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_blockHealthMultiplier = (jfloat(1));
	LINE_NUMBER(398);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_blockDamageMultiplier = (jfloat(1));
	LINE_NUMBER(400);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier = (jfloat(1));
	LINE_NUMBER(402);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_extraCoreBuildRadius = (jfloat(0));
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_Rules$TeamRule_mindustry_game_Team(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Rules$TeamRule:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Rules$TeamRule(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(410);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(353);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_aiCoreSpawn = (jint(1));
	LINE_NUMBER(355);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_protectCores = (jint(1));
	LINE_NUMBER(357);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_checkPlacement = (jint(1));
	LINE_NUMBER(370);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_buildAiTier = (jfloat(1));
	LINE_NUMBER(375);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsMinSquad = (jint(4));
	LINE_NUMBER(377);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsMaxSquad = (50);
	LINE_NUMBER(379);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_rtsMinWeight = (jfloat(1.2f));
	LINE_NUMBER(382);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitFactoryActivationDelay = (jfloat(0));
	LINE_NUMBER(384);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitBuildSpeedMultiplier = (jfloat(1));
	LINE_NUMBER(386);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitDamageMultiplier = (jfloat(1));
	LINE_NUMBER(388);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitCrashDamageMultiplier = (jfloat(1));
	LINE_NUMBER(390);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitMineSpeedMultiplier = (jfloat(1));
	LINE_NUMBER(392);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitCostMultiplier = (jfloat(1));
	LINE_NUMBER(394);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_unitHealthMultiplier = (jfloat(1));
	LINE_NUMBER(396);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_blockHealthMultiplier = (jfloat(1));
	LINE_NUMBER(398);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_blockDamageMultiplier = (jfloat(1));
	LINE_NUMBER(400);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_buildSpeedMultiplier = (jfloat(1));
	LINE_NUMBER(402);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_extraCoreBuildRadius = (jfloat(0));
	LINE_NUMBER(411);
	sp[0].o = frame[1].o;
	clinit_mindustry_game_Team(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Team_derelict;
	if (sp[0].o != sp[1].o) goto label_20;
	}
	{
	LINE_NUMBER(412);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_protectCores = (jint(0));
	LINE_NUMBER(413);
	((mindustry_game_Rules$TeamRule *) NULL_CHECK((frame[0].o)))->F_checkPlacement = (jint(0));
	}
label_20:;
	LINE_NUMBER(415);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Rules$TeamRule[] {
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
	{ "aiCoreSpawn", &class_boolean, offsetof(mindustry_game_Rules$TeamRule, F_aiCoreSpawn), "Z", 1 },
	{ "protectCores", &class_boolean, offsetof(mindustry_game_Rules$TeamRule, F_protectCores), "Z", 1 },
	{ "checkPlacement", &class_boolean, offsetof(mindustry_game_Rules$TeamRule, F_checkPlacement), "Z", 1 },
	{ "cheat", &class_boolean, offsetof(mindustry_game_Rules$TeamRule, F_cheat), "Z", 1 },
	{ "fillItems", &class_boolean, offsetof(mindustry_game_Rules$TeamRule, F_fillItems), "Z", 1 },
	{ "infiniteResources", &class_boolean, offsetof(mindustry_game_Rules$TeamRule, F_infiniteResources), "Z", 1 },
	{ "prebuildAi", &class_boolean, offsetof(mindustry_game_Rules$TeamRule, F_prebuildAi), "Z", 1 },
	{ "buildAi", &class_boolean, offsetof(mindustry_game_Rules$TeamRule, F_buildAi), "Z", 1 },
	{ "buildAiTier", &class_float, offsetof(mindustry_game_Rules$TeamRule, F_buildAiTier), "F", 1 },
	{ "rtsAi", &class_boolean, offsetof(mindustry_game_Rules$TeamRule, F_rtsAi), "Z", 1 },
	{ "rtsMinSquad", &class_int, offsetof(mindustry_game_Rules$TeamRule, F_rtsMinSquad), "I", 1 },
	{ "rtsMaxSquad", &class_int, offsetof(mindustry_game_Rules$TeamRule, F_rtsMaxSquad), "I", 1 },
	{ "rtsMinWeight", &class_float, offsetof(mindustry_game_Rules$TeamRule, F_rtsMinWeight), "F", 1 },
	{ "unitFactoryActivationDelay", &class_float, offsetof(mindustry_game_Rules$TeamRule, F_unitFactoryActivationDelay), "F", 1 },
	{ "unitBuildSpeedMultiplier", &class_float, offsetof(mindustry_game_Rules$TeamRule, F_unitBuildSpeedMultiplier), "F", 1 },
	{ "unitDamageMultiplier", &class_float, offsetof(mindustry_game_Rules$TeamRule, F_unitDamageMultiplier), "F", 1 },
	{ "unitCrashDamageMultiplier", &class_float, offsetof(mindustry_game_Rules$TeamRule, F_unitCrashDamageMultiplier), "F", 1 },
	{ "unitMineSpeedMultiplier", &class_float, offsetof(mindustry_game_Rules$TeamRule, F_unitMineSpeedMultiplier), "F", 1 },
	{ "unitCostMultiplier", &class_float, offsetof(mindustry_game_Rules$TeamRule, F_unitCostMultiplier), "F", 1 },
	{ "unitHealthMultiplier", &class_float, offsetof(mindustry_game_Rules$TeamRule, F_unitHealthMultiplier), "F", 1 },
	{ "blockHealthMultiplier", &class_float, offsetof(mindustry_game_Rules$TeamRule, F_blockHealthMultiplier), "F", 1 },
	{ "blockDamageMultiplier", &class_float, offsetof(mindustry_game_Rules$TeamRule, F_blockDamageMultiplier), "F", 1 },
	{ "buildSpeedMultiplier", &class_float, offsetof(mindustry_game_Rules$TeamRule, F_buildSpeedMultiplier), "F", 1 },
	{ "extraCoreBuildRadius", &class_float, offsetof(mindustry_game_Rules$TeamRule, F_extraCoreBuildRadius), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Rules$TeamRule, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_Rules$TeamRule_mindustry_game_Team, 0, "(Lmindustry/game/Team;)V", 1 },
};

Class class_mindustry_game_Rules$TeamRule{
		.nativeName = (intptr_t) "mindustry/game/Rules$TeamRule",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Rules$TeamRule),
		.classVtable = (intptr_t) vtable_mindustry_game_Rules$TeamRule,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Rules$TeamRule,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Rules$TeamRule,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_Rules,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Rules$TeamRule = registerClass(&class_mindustry_game_Rules$TeamRule);

}

