#include "mindustry/game/Difficulty.h"
#include "mindustry/game/Difficulty.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_game_Difficulty_casual;
jobject SF_mindustry_game_Difficulty_easy;
jobject SF_mindustry_game_Difficulty_normal;
jobject SF_mindustry_game_Difficulty_hard;
jobject SF_mindustry_game_Difficulty_eradication;
jobject SF_mindustry_game_Difficulty_all;
jobject SF_mindustry_game_Difficulty_$VALUES;

void mark_mindustry_game_Difficulty(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_game_Difficulty_casual)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Difficulty_casual)->clazz)->markFunction)((jobject) SF_mindustry_game_Difficulty_casual, mark, depth + 1);
		if (SF_mindustry_game_Difficulty_easy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Difficulty_easy)->clazz)->markFunction)((jobject) SF_mindustry_game_Difficulty_easy, mark, depth + 1);
		if (SF_mindustry_game_Difficulty_normal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Difficulty_normal)->clazz)->markFunction)((jobject) SF_mindustry_game_Difficulty_normal, mark, depth + 1);
		if (SF_mindustry_game_Difficulty_hard)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Difficulty_hard)->clazz)->markFunction)((jobject) SF_mindustry_game_Difficulty_hard, mark, depth + 1);
		if (SF_mindustry_game_Difficulty_eradication)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Difficulty_eradication)->clazz)->markFunction)((jobject) SF_mindustry_game_Difficulty_eradication, mark, depth + 1);
		if (SF_mindustry_game_Difficulty_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Difficulty_all)->clazz)->markFunction)((jobject) SF_mindustry_game_Difficulty_all, mark, depth + 1);
		if (SF_mindustry_game_Difficulty_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Difficulty_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_game_Difficulty_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_Difficulty *) object;
}

jobject SM_mindustry_game_Difficulty_values_R_Array1_mindustry_game_Difficulty(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Difficulty:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Difficulty(ctx);
	{
	LINE_NUMBER(5);
	clinit_mindustry_game_Difficulty(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Difficulty_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_game_Difficulty, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Difficulty_valueOf_java_lang_String_R_mindustry_game_Difficulty(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Difficulty:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Difficulty(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(5);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_game_Difficulty)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_game_Difficulty, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_game_Difficulty_java_lang_String_int_float_float_float(jcontext ctx, jobject self, jobject param0, jint param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Difficulty:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Difficulty(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(17);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(18);
	((mindustry_game_Difficulty *) NULL_CHECK((frame[0].o)))->F_enemySpawnMultiplier = (frame[4].f);
	LINE_NUMBER(19);
	((mindustry_game_Difficulty *) NULL_CHECK((frame[0].o)))->F_waveTimeMultiplier = (frame[5].f);
	LINE_NUMBER(20);
	((mindustry_game_Difficulty *) NULL_CHECK((frame[0].o)))->F_enemyHealthMultiplier = (frame[3].f);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Difficulty_info_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Difficulty:info", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(25);
	if ((floatCompare(((jfloat)((mindustry_game_Difficulty *) NULL_CHECK((frame[0].o)))->F_enemyHealthMultiplier), (jfloat(1)), -1)) != 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"difficulty.enemyHealthMultiplier"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_mindustry_game_Difficulty_percentStat_float_R_java_lang_String(ctx, ((jfloat)((mindustry_game_Difficulty *) NULL_CHECK((frame[0].o)))->F_enemyHealthMultiplier));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\n"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	LINE_NUMBER(26);
	if ((floatCompare(((jfloat)((mindustry_game_Difficulty *) NULL_CHECK((frame[0].o)))->F_enemySpawnMultiplier), (jfloat(1)), -1)) != 0) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_4;
label_3:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"difficulty.enemySpawnMultiplier"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_mindustry_game_Difficulty_percentStat_float_R_java_lang_String(ctx, ((jfloat)((mindustry_game_Difficulty *) NULL_CHECK((frame[0].o)))->F_enemySpawnMultiplier));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\n"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_4:;
	{
	LINE_NUMBER(27);
	if ((floatCompare(((jfloat)((mindustry_game_Difficulty *) NULL_CHECK((frame[0].o)))->F_waveTimeMultiplier), (jfloat(1)), -1)) != 0) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_6;
label_5:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"difficulty.waveTimeMultiplier"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)SM_mindustry_game_Difficulty_percentStatNeg_float_R_java_lang_String(ctx, ((jfloat)((mindustry_game_Difficulty *) NULL_CHECK((frame[0].o)))->F_waveTimeMultiplier));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\n"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_6:;
	{
	sp -= 3;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001\u0001"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(29);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"difficulty.nomodifiers"_j))));
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ALOAD(1);
label_9:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_Difficulty_localized_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Difficulty:localized", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_mindustry_game_Difficulty_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Difficulty_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"difficulty.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Difficulty_percentStat_float_R_java_lang_String(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Difficulty:percentStat", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Difficulty(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(37);
	if ((jint((((frame[0].f) * (jfloat(100.0f))) - (jfloat(100.0f))))) <= 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[negstat]+"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[stat]"_j));
label_2:;
	{
	sp -= 1;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001%[]"_j.string, 2, sp[0].o, boxInteger(ctx, (jint((((frame[0].f) * (jfloat(100.0f))) - (jfloat(100.0f)))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Difficulty_percentStatNeg_float_R_java_lang_String(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Difficulty:percentStatNeg", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Difficulty(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(41);
	if ((jint((((frame[0].f) * (jfloat(100.0f))) - (jfloat(100.0f))))) <= 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[stat]+"_j));
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"[negstat]"_j));
label_2:;
	{
	sp -= 1;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001%[]"_j.string, 2, sp[0].o, boxInteger(ctx, (jint((((frame[0].f) * (jfloat(100.0f))) - (jfloat(100.0f)))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Difficulty_$values_R_Array1_mindustry_game_Difficulty(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Difficulty:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Difficulty(ctx);
	{
	LINE_NUMBER(5);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_game_Difficulty, (jint(5)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Difficulty(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Difficulty_casual;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Difficulty(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Difficulty_easy;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_game_Difficulty(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Difficulty_normal;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_game_Difficulty(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Difficulty_hard;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_game_Difficulty(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Difficulty_eradication;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_game_Difficulty(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Difficulty:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Difficulty(ctx);
	{
	LINE_NUMBER(6);
	clinit_mindustry_game_Difficulty(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Difficulty);
	init_mindustry_game_Difficulty_java_lang_String_int_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"casual"_j))), (jint(0)), (jfloat(0.5f)), (jfloat(0.5f)), (jfloat(2)));
	clinit_mindustry_game_Difficulty(ctx);
	SF_mindustry_game_Difficulty_casual = sp[0].o;
	LINE_NUMBER(7);
	clinit_mindustry_game_Difficulty(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Difficulty);
	init_mindustry_game_Difficulty_java_lang_String_int_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"easy"_j))), (jint(1)), (jfloat(1)), (jfloat(0.75f)), (jfloat(1.5f)));
	clinit_mindustry_game_Difficulty(ctx);
	SF_mindustry_game_Difficulty_easy = sp[0].o;
	LINE_NUMBER(8);
	clinit_mindustry_game_Difficulty(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Difficulty);
	init_mindustry_game_Difficulty_java_lang_String_int_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"normal"_j))), (jint(2)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	clinit_mindustry_game_Difficulty(ctx);
	SF_mindustry_game_Difficulty_normal = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_game_Difficulty(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Difficulty);
	init_mindustry_game_Difficulty_java_lang_String_int_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hard"_j))), (jint(3)), (jfloat(1.25f)), (jfloat(1.5f)), (jfloat(0.8f)));
	clinit_mindustry_game_Difficulty(ctx);
	SF_mindustry_game_Difficulty_hard = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_game_Difficulty(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Difficulty);
	init_mindustry_game_Difficulty_java_lang_String_int_float_float_float(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"eradication"_j))), (jint(4)), (jfloat(1.5f)), (jfloat(2)), (jfloat(0.6f)));
	clinit_mindustry_game_Difficulty(ctx);
	SF_mindustry_game_Difficulty_eradication = sp[0].o;
	LINE_NUMBER(5);
	sp[0].o = (jobject)SM_mindustry_game_Difficulty_$values_R_Array1_mindustry_game_Difficulty(ctx);
	clinit_mindustry_game_Difficulty(ctx);
	SF_mindustry_game_Difficulty_$VALUES = sp[0].o;
	LINE_NUMBER(12);
	sp[0].o = (jobject)SM_mindustry_game_Difficulty_values_R_Array1_mindustry_game_Difficulty(ctx);
	clinit_mindustry_game_Difficulty(ctx);
	SF_mindustry_game_Difficulty_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Difficulty[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_mindustry_game_Difficulty_info_R_java_lang_String,
	(void *) M_mindustry_game_Difficulty_localized_R_java_lang_String,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "info", "()Ljava/lang/String;" },
	{ "localized", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "casual", &class_mindustry_game_Difficulty, (intptr_t) &SF_mindustry_game_Difficulty_casual, "Lmindustry/game/Difficulty;", 16409 },
	{ "easy", &class_mindustry_game_Difficulty, (intptr_t) &SF_mindustry_game_Difficulty_easy, "Lmindustry/game/Difficulty;", 16409 },
	{ "normal", &class_mindustry_game_Difficulty, (intptr_t) &SF_mindustry_game_Difficulty_normal, "Lmindustry/game/Difficulty;", 16409 },
	{ "hard", &class_mindustry_game_Difficulty, (intptr_t) &SF_mindustry_game_Difficulty_hard, "Lmindustry/game/Difficulty;", 16409 },
	{ "eradication", &class_mindustry_game_Difficulty, (intptr_t) &SF_mindustry_game_Difficulty_eradication, "Lmindustry/game/Difficulty;", 16409 },
	{ "all", getArrayClass(&class_mindustry_game_Difficulty, 1), (intptr_t) &SF_mindustry_game_Difficulty_all, "[Lmindustry/game/Difficulty;", 25 },
	{ "enemyHealthMultiplier", &class_float, offsetof(mindustry_game_Difficulty, F_enemyHealthMultiplier), "F", 1 },
	{ "enemySpawnMultiplier", &class_float, offsetof(mindustry_game_Difficulty, F_enemySpawnMultiplier), "F", 1 },
	{ "waveTimeMultiplier", &class_float, offsetof(mindustry_game_Difficulty, F_waveTimeMultiplier), "F", 1 },
	{ "$VALUES", getArrayClass(&class_mindustry_game_Difficulty, 1), (intptr_t) &SF_mindustry_game_Difficulty_$VALUES, "[Lmindustry/game/Difficulty;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_game_Difficulty_values_R_Array1_mindustry_game_Difficulty, 0, "()[Lmindustry/game/Difficulty;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_game_Difficulty_valueOf_java_lang_String_R_mindustry_game_Difficulty, 0, "(Ljava/lang/String;)Lmindustry/game/Difficulty;", 9 },
	{ "<init>", (intptr_t) init_mindustry_game_Difficulty_java_lang_String_int_float_float_float, 0, "(Ljava/lang/String;IFFF)V", 2 },
	{ "info", (intptr_t) M_mindustry_game_Difficulty_info_R_java_lang_String, VTABLE_mindustry_game_Difficulty_info_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "localized", (intptr_t) M_mindustry_game_Difficulty_localized_R_java_lang_String, VTABLE_mindustry_game_Difficulty_localized_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "percentStat", (intptr_t) SM_mindustry_game_Difficulty_percentStat_float_R_java_lang_String, 0, "(F)Ljava/lang/String;", 8 },
	{ "percentStatNeg", (intptr_t) SM_mindustry_game_Difficulty_percentStatNeg_float_R_java_lang_String, 0, "(F)Ljava/lang/String;", 8 },
	{ "$values", (intptr_t) SM_mindustry_game_Difficulty_$values_R_Array1_mindustry_game_Difficulty, 0, "()[Lmindustry/game/Difficulty;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_game_Difficulty, 0, "()V", 8 },
};

Class class_mindustry_game_Difficulty{
		.nativeName = (intptr_t) "mindustry/game/Difficulty",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_game_Difficulty),
		.classVtable = (intptr_t) vtable_mindustry_game_Difficulty,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Difficulty,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Difficulty,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Difficulty = registerClass(&class_mindustry_game_Difficulty);

}
