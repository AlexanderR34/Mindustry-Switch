#include "mindustry/game/AttackIndicators.h"
#include "java/lang/Object.h"
#include "arc/struct/LongSeq.h"
#include "mindustry/gen/Indicator.h"
#include "arc/math/geom/Point2.h"
#include "arc/util/Time.h"
#include "mindustry/game/AttackIndicators.h"
#include "mindustry/game/AttackIndicators_IndicatorStruct.h"
#include "arc/struct/IntIntMap.h"

extern "C" {

jfloat SF_mindustry_game_AttackIndicators_duration;

void mark_mindustry_game_AttackIndicators(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_AttackIndicators *) object;
	if (self->F_indicators)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_indicators)->clazz)->markFunction)((jobject) self->F_indicators, mark, depth + 1);
	if (self->F_posToIndex)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_posToIndex)->clazz)->markFunction)((jobject) self->F_posToIndex, mark, depth + 1);
}

void clinit_mindustry_game_AttackIndicators(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_game_AttackIndicators_duration = jfloat(900.0f);
}

void init_mindustry_game_AttackIndicators(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/AttackIndicators:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_AttackIndicators(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	sp[0].o = frame[0].o;
	clinit_arc_struct_LongSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongSeq);
	init_arc_struct_LongSeq_boolean_int(ctx, sp[1].o, (jint(0)), (16));
	((mindustry_game_AttackIndicators *) NULL_CHECK(sp[0].o))->F_indicators = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntIntMap);
	init_arc_struct_IntIntMap(ctx, sp[1].o);
	((mindustry_game_AttackIndicators *) NULL_CHECK(sp[0].o))->F_posToIndex = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_AttackIndicators_list_R_arc_struct_LongSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/AttackIndicators:list", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_indicators;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_AttackIndicators_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/AttackIndicators:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	sp[0].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_indicators;
	((func_arc_struct_LongSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_posToIndex;
	((func_arc_struct_IntIntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_AttackIndicators_add_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/AttackIndicators:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(26);
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[1].i), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_posToIndex;
	jint temp1 = (jint)((func_arc_struct_IntIntMap_get_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_get_int_int_R_int])(ctx, sp[0].o, (frame[3].i), (jint(-1)));
	frame[4].i = temp1;
	LINE_NUMBER(30);
	if ((frame[4].i) == (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_indicators;
	sp[0].o = (jobject)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_indicators;
	sp[1].o = (jobject)((arc_struct_LongSeq *) NULL_CHECK(sp[1].o))->F_items;
	jlong temp1 = (jlong)SM_mindustry_gen_Indicator_time_long_float_R_long(ctx, ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (frame[4].i))), (jfloat(0)));
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp1;
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_indicators;
	jlong temp0 = (jlong)SM_mindustry_gen_Indicator_get_int_float_R_long(ctx, (frame[3].i), (jfloat(0)));
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, temp0);
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_posToIndex;
	jint temp1 = frame[3].i;
	sp[1].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_indicators;
	((func_arc_struct_IntIntMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_put_int_int])(ctx, sp[0].o, temp1, (((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	}
label_5:;
	LINE_NUMBER(38);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_AttackIndicators_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/AttackIndicators:update", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_indicators;
	sp[0].o = (jobject)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(42);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_indicators;
	if (temp0 >= ((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(43);
	frame[3].l = ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i)));
	LINE_NUMBER(44);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	jlong temp1 = frame[3].l;
	jfloat temp2 = (jfloat)SM_mindustry_gen_Indicator_time_long_R_float(ctx, (frame[3].l));
	jlong temp3 = (jlong)SM_mindustry_gen_Indicator_time_long_float_R_long(ctx, temp1, (temp2 + (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta)));
	frame[3].l = temp3;
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp3;
	LINE_NUMBER(46);
	jfloat temp6 = (jfloat)SM_mindustry_gen_Indicator_time_long_R_float(ctx, (frame[3].l));
	if ((floatCompare(temp6, (jfloat(900.0f)), -1)) < 0) goto label_7;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_indicators;
	jlong temp0 = (jlong)((func_arc_struct_LongSeq_removeIndex_int_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_removeIndex_int_R_long])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_posToIndex;
	jint temp1 = (jint)SM_mindustry_gen_Indicator_pos_long_R_int(ctx, (frame[3].l));
	jint temp2 = (jint)((func_arc_struct_IntIntMap_remove_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_remove_int_R_int])(ctx, sp[0].o, temp1);
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_indicators;
	if (((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_game_AttackIndicators *) NULL_CHECK((frame[0].o)))->F_posToIndex;
	jint temp0 = (jint)SM_mindustry_gen_Indicator_pos_long_R_int(ctx, ((jlong)ARRAY_ACCESS(jlong, (frame[1].o), (frame[2].i))));
	((func_arc_struct_IntIntMap_put_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntIntMap_put_int_int])(ctx, sp[0].o, temp0, (frame[2].i));
	}
label_11:;
	LINE_NUMBER(56);
	INST_IINC(2, -1);
label_7:;
	{
	LINE_NUMBER(42);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_game_AttackIndicators[] {
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
	(void *) M_mindustry_game_AttackIndicators_list_R_arc_struct_LongSeq,
	(void *) M_mindustry_game_AttackIndicators_clear,
	(void *) M_mindustry_game_AttackIndicators_add_int_int,
	(void *) M_mindustry_game_AttackIndicators_update,
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
	{ "list", "()Larc/struct/LongSeq;" },
	{ "clear", "()V" },
	{ "add", "(II)V" },
	{ "update", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_game_AttackIndicators$IndicatorStruct,
};

static FieldMetadata fields[] {
	{ "duration", &class_float, (intptr_t) &SF_mindustry_game_AttackIndicators_duration, "F", 26 },
	{ "indicators", &class_arc_struct_LongSeq, offsetof(mindustry_game_AttackIndicators, F_indicators), "Larc/struct/LongSeq;", 2 },
	{ "posToIndex", &class_arc_struct_IntIntMap, offsetof(mindustry_game_AttackIndicators, F_posToIndex), "Larc/struct/IntIntMap;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_AttackIndicators, 0, "()V", 1 },
	{ "list", (intptr_t) M_mindustry_game_AttackIndicators_list_R_arc_struct_LongSeq, VTABLE_mindustry_game_AttackIndicators_list_R_arc_struct_LongSeq, "()Larc/struct/LongSeq;", 1 },
	{ "clear", (intptr_t) M_mindustry_game_AttackIndicators_clear, VTABLE_mindustry_game_AttackIndicators_clear, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_game_AttackIndicators_add_int_int, VTABLE_mindustry_game_AttackIndicators_add_int_int, "(II)V", 1 },
	{ "update", (intptr_t) M_mindustry_game_AttackIndicators_update, VTABLE_mindustry_game_AttackIndicators_update, "()V", 1 },
};

Class class_mindustry_game_AttackIndicators{
		.nativeName = (intptr_t) "mindustry/game/AttackIndicators",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_AttackIndicators),
		.classVtable = (intptr_t) vtable_mindustry_game_AttackIndicators,
		.staticInitializer = (intptr_t) clinit_mindustry_game_AttackIndicators,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_AttackIndicators,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_AttackIndicators = registerClass(&class_mindustry_game_AttackIndicators);

}
