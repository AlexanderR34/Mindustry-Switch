#include "mindustry/async/AvoidanceProcess.h"
#include "mindustry/async/AsyncProcess.h"
#include "mindustry/async/AvoidanceProcess.h"
#include "arc/math/geom/Point2.h"
#include "java/lang/Float.h"
#include "arc/struct/IntSeq.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/gen/Unitc.h"
#include "java/util/Arrays.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/Rules_TeamRule.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/game/Teams.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/core/GameState.h"

extern "C" {

jint SF_mindustry_async_AvoidanceProcess_wwidth;
jint SF_mindustry_async_AvoidanceProcess_wheight;

void mark_mindustry_async_AvoidanceProcess(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_async_AvoidanceProcess *) object;
	if (self->F_buffer1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer1)->clazz)->markFunction)((jobject) self->F_buffer1, mark, depth + 1);
	if (self->F_buffer2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_buffer2)->clazz)->markFunction)((jobject) self->F_buffer2, mark, depth + 1);
	if (self->F_requests)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requests)->clazz)->markFunction)((jobject) self->F_requests, mark, depth + 1);
	if (self->F_avoidance)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_avoidance)->clazz)->markFunction)((jobject) self->F_avoidance, mark, depth + 1);
}

void clinit_mindustry_async_AvoidanceProcess(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_async_AvoidanceProcess(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AvoidanceProcess:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_async_AvoidanceProcess(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((mindustry_async_AvoidanceProcess *) NULL_CHECK(sp[0].o))->F_requests = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_async_AvoidanceProcess_getAvoidance_R_Array1_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AvoidanceProcess:getAvoidance", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	if (((jint)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_1;
	}
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((clinit_mindustry_async_AvoidanceProcess(ctx), (jint)SF_mindustry_async_AvoidanceProcess_wwidth) * (clinit_mindustry_async_AvoidanceProcess(ctx), (jint)SF_mindustry_async_AvoidanceProcess_wheight)));
	((mindustry_async_AvoidanceProcess *) NULL_CHECK(sp[0].o))->F_buffer1 = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, ((clinit_mindustry_async_AvoidanceProcess(ctx), (jint)SF_mindustry_async_AvoidanceProcess_wwidth) * (clinit_mindustry_async_AvoidanceProcess(ctx), (jint)SF_mindustry_async_AvoidanceProcess_wheight)));
	((mindustry_async_AvoidanceProcess *) NULL_CHECK(sp[0].o))->F_buffer2 = (jref) sp[1].o;
	LINE_NUMBER(31);
	((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_active = (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_avoidance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_async_AvoidanceProcess_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AvoidanceProcess:init", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_async_AvoidanceProcess(ctx);
	SF_mindustry_async_AvoidanceProcess_wwidth = temp0;
	LINE_NUMBER(39);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	clinit_mindustry_async_AvoidanceProcess(ctx);
	SF_mindustry_async_AvoidanceProcess_wheight = temp1;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_async_AvoidanceProcess_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AvoidanceProcess:reset", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = jobject(nullptr);
	((mindustry_async_AvoidanceProcess *) NULL_CHECK(sp[2].o))->F_avoidance = (jref) sp[3].o;
	((mindustry_async_AvoidanceProcess *) NULL_CHECK(sp[1].o))->F_buffer2 = (jref) sp[3].o;
	((mindustry_async_AvoidanceProcess *) NULL_CHECK(sp[0].o))->F_buffer1 = (jref) sp[3].o;
	LINE_NUMBER(45);
	((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_swap = (jint(0));
	LINE_NUMBER(46);
	((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_modified = (jint(0));
	LINE_NUMBER(47);
	((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_active = (jint(0));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_requests;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_async_AvoidanceProcess_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AvoidanceProcess:begin", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	if (((jint)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_active) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_requests;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_swap) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_buffer1;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_async_AvoidanceProcess *) NULL_CHECK(sp[-1].o))->F_buffer2;
label_4:;
	{
	sp -= 2;
	((mindustry_async_AvoidanceProcess *) NULL_CHECK(sp[0].o))->F_avoidance = (jref) sp[1].o;
	LINE_NUMBER(59);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_rules_R_mindustry_game_Rules$TeamRule])(ctx, sp[0].o);
	if (((jint)((mindustry_game_Rules$TeamRule *) NULL_CHECK(sp[0].o))->F_rtsAi) != 0) goto label_9;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(63);
	jint temp0 = (jint)((func_mindustry_gen_Unit_collisionLayer_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_collisionLayer_R_int])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_13;
	}
	{
	LINE_NUMBER(65);
	frame[5].f = (jfloat(2));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_requests;
	jint temp0 = (jint)((func_mindustry_gen_Unit_tileX_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_tileX_R_int])(ctx, (frame[4].o));
	jint temp1 = (jint)((func_mindustry_gen_Unit_tileY_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Unit_tileY_R_int])(ctx, (frame[4].o));
	jint temp2 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, temp0, temp1);
	jint temp3 = (jint)SM_java_lang_Float_floatToRawIntBits_float_R_int(ctx, (((((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_hitSize) * (jfloat(0.6f))) / (jfloat(8.0f))) * (frame[5].f)));
	((func_arc_struct_IntSeq_add_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int_int_int])(ctx, sp[0].o, temp2, temp3, ((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[4].o)))->F_id));
	}
label_13:;
	LINE_NUMBER(68);
	goto label_11;
label_9:;
	LINE_NUMBER(70);
	goto label_6;
label_7:;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_async_AvoidanceProcess_process(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AvoidanceProcess:process", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	if (((jint)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_swap) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_buffer1;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_async_AvoidanceProcess *) NULL_CHECK(sp[-1].o))->F_buffer2;
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_swap) != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 2;
	((mindustry_async_AvoidanceProcess *) NULL_CHECK(sp[0].o))->F_swap = sp[1].i;
	LINE_NUMBER(79);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(81);
	if (((jint)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_modified) == 0) goto label_8;
	}
	{
	LINE_NUMBER(82);
	SM_java_util_Arrays_fill_Array1_int_int(ctx, (frame[1].o), (jint(0)));
	}
label_8:;
	{
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_requests;
	sp += 1;
	if (((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_10;
	}
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	((mindustry_async_AvoidanceProcess *) NULL_CHECK(sp[0].o))->F_modified = sp[1].i;
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_requests;
	frame[2].i = ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_requests;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(89);
	frame[4].i = (jint(0));
	}
label_15:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_16;
	}
	{
	LINE_NUMBER(90);
	frame[5].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), (frame[4].i)));
	frame[6].i = ((jint)ARRAY_ACCESS(jint, (frame[3].o), ((frame[4].i) + (jint(2)))));
	LINE_NUMBER(91);
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[5].i));
	frame[7].i = temp0;
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[5].i));
	frame[8].i = temp1;
	LINE_NUMBER(92);
	jfloat temp2 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, ((jint)ARRAY_ACCESS(jint, (frame[3].o), ((frame[4].i) + (jint(1))))));
	frame[9].f = temp2;
	LINE_NUMBER(93);
	frame[10].f = ((frame[9].f) * (frame[9].f));
	LINE_NUMBER(95);
	jint temp3 = jint(1);
	jint temp4 = (jint)SM_arc_math_Mathf_ceil_float_R_int(ctx, (frame[9].f));
	jint temp5 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp3, temp4, (20));
	frame[11].i = temp5;
	LINE_NUMBER(97);
	frame[12].i = (-(frame[11].i));
	}
label_25:;
	{
	if ((frame[12].i) > (frame[11].i)) goto label_26;
	}
	{
	LINE_NUMBER(98);
	frame[13].i = (-(frame[11].i));
	}
label_28:;
	{
	if ((frame[13].i) > (frame[11].i)) goto label_29;
	}
	{
	LINE_NUMBER(99);
	frame[14].i = ((frame[12].i) + (frame[7].i));
	frame[15].i = ((frame[13].i) + (frame[8].i));
	LINE_NUMBER(100);
	if ((frame[14].i) < 0) goto label_33;
	}
	INST_ILOAD(15);
	if ((--sp)->i < 0) goto label_33;
	{
	if ((frame[14].i) >= (clinit_mindustry_async_AvoidanceProcess(ctx), (jint)SF_mindustry_async_AvoidanceProcess_wwidth)) goto label_33;
	}
	{
	if ((frame[15].i) >= (clinit_mindustry_async_AvoidanceProcess(ctx), (jint)SF_mindustry_async_AvoidanceProcess_wheight)) goto label_33;
	}
	{
	if ((floatCompare((jfloat((((frame[12].i) * (frame[12].i)) + ((frame[13].i) * (frame[13].i))))), (frame[10].f), 1)) > 0) goto label_33;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = frame[1].o;
	jint temp0 = (frame[14].i) + ((frame[15].i) * (clinit_mindustry_async_AvoidanceProcess(ctx), (jint)SF_mindustry_async_AvoidanceProcess_wwidth));
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)ARRAY_ACCESS(jint, (frame[1].o), ((frame[14].i) + ((frame[15].i) * (clinit_mindustry_async_AvoidanceProcess(ctx), (jint)SF_mindustry_async_AvoidanceProcess_wwidth))))), ((jint(2147483647)) - (frame[6].i)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	}
label_33:;
	{
	LINE_NUMBER(98);
	INST_IINC(13, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(97);
	INST_IINC(12, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(89);
	INST_IINC(4, 3);
	goto label_15;
	}
label_16:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_async_AvoidanceProcess_shouldProcess_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/async/AvoidanceProcess:shouldProcess", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return ((jint)((mindustry_async_AvoidanceProcess *) NULL_CHECK((frame[0].o)))->F_active);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_async_AvoidanceProcess;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field buffer1
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field buffer2
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field avoidance
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getAvoidance
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_async_AvoidanceProcess[] {
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
	(void *) M_mindustry_async_AvoidanceProcess_init,
	(void *) M_mindustry_async_AvoidanceProcess_reset,
	(void *) M_mindustry_async_AvoidanceProcess_begin,
	(void *) M_mindustry_async_AvoidanceProcess_process,
	(void *) M_mindustry_async_AsyncProcess_end,
	(void *) M_mindustry_async_AvoidanceProcess_shouldProcess_R_boolean,
	(void *) M_mindustry_async_AvoidanceProcess_getAvoidance_R_Array1_int,
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
	{ "init", "()V" },
	{ "reset", "()V" },
	{ "begin", "()V" },
	{ "process", "()V" },
	{ "end", "()V" },
	{ "shouldProcess", "()Z" },
	{ "getAvoidance", "()[I" },
};

static jclass interfaces[] { &class_mindustry_async_AsyncProcess, };

static FieldMetadata fields[] {
	{ "wwidth", &class_int, (intptr_t) &SF_mindustry_async_AvoidanceProcess_wwidth, "I", 8 },
	{ "wheight", &class_int, (intptr_t) &SF_mindustry_async_AvoidanceProcess_wheight, "I", 8 },
	{ "buffer1", getArrayClass(&class_int, 1), offsetof(mindustry_async_AvoidanceProcess, F_buffer1), "[I", 0 },
	{ "buffer2", getArrayClass(&class_int, 1), offsetof(mindustry_async_AvoidanceProcess, F_buffer2), "[I", 0 },
	{ "swap", &class_boolean, offsetof(mindustry_async_AvoidanceProcess, F_swap), "Z", 64 },
	{ "requests", &class_arc_struct_IntSeq, offsetof(mindustry_async_AvoidanceProcess, F_requests), "Larc/struct/IntSeq;", 0 },
	{ "avoidance", getArrayClass(&class_int, 1), offsetof(mindustry_async_AvoidanceProcess, F_avoidance), "[I", 0 },
	{ "modified", &class_boolean, offsetof(mindustry_async_AvoidanceProcess, F_modified), "Z", 0 },
	{ "active", &class_boolean, offsetof(mindustry_async_AvoidanceProcess, F_active), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_async_AvoidanceProcess, 0, "()V", 1 },
	{ "getAvoidance", (intptr_t) M_mindustry_async_AvoidanceProcess_getAvoidance_R_Array1_int, VTABLE_mindustry_async_AvoidanceProcess_getAvoidance_R_Array1_int, "()[I", 1 },
	{ "init", (intptr_t) M_mindustry_async_AvoidanceProcess_init, VTABLE_mindustry_async_AvoidanceProcess_init, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_async_AvoidanceProcess_reset, VTABLE_mindustry_async_AvoidanceProcess_reset, "()V", 1 },
	{ "begin", (intptr_t) M_mindustry_async_AvoidanceProcess_begin, VTABLE_mindustry_async_AvoidanceProcess_begin, "()V", 1 },
	{ "process", (intptr_t) M_mindustry_async_AvoidanceProcess_process, VTABLE_mindustry_async_AvoidanceProcess_process, "()V", 1 },
	{ "shouldProcess", (intptr_t) M_mindustry_async_AvoidanceProcess_shouldProcess_R_boolean, VTABLE_mindustry_async_AvoidanceProcess_shouldProcess_R_boolean, "()Z", 1 },
};

Class class_mindustry_async_AvoidanceProcess{
		.nativeName = (intptr_t) "mindustry/async/AvoidanceProcess",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_async_AvoidanceProcess),
		.classVtable = (intptr_t) vtable_mindustry_async_AvoidanceProcess,
		.staticInitializer = (intptr_t) clinit_mindustry_async_AvoidanceProcess,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_async_AvoidanceProcess,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_async_AvoidanceProcess = registerClass(&class_mindustry_async_AvoidanceProcess);

}
