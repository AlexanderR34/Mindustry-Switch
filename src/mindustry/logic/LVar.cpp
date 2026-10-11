#include "mindustry/logic/LVar.h"
#include "java/lang/Math.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/logic/LVar.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Building.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/World.h"
#include "java/lang/Double.h"

extern "C" {


void mark_mindustry_logic_LVar(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LVar *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_objval)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_objval)->clazz)->markFunction)((jobject) self->F_objval, mark, depth + 1);
}

void clinit_mindustry_logic_LVar(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_logic_LVar_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LVar(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	init_mindustry_logic_LVar_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (jint(-1)));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LVar_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LVar(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(25);
	init_mindustry_logic_LVar_java_lang_String_int_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LVar_java_lang_String_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LVar(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(30);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_id = (frame[2].i);
	LINE_NUMBER(31);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_constant = (frame[3].i);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LVar_building_R_mindustry_gen_Building(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:building", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_gen_Building)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_gen_Building, (frame[2].o)));
	sp[0].o = frame[1].o;
	sp += 1;
	goto label_3;
	}
label_1:;
	INST_ACONST_NULL();
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LVar_obj_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:obj", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LVar_team_R_mindustry_game_Team(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:team", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(43);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj) == 0) goto label_1;
	}
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_game_Team)) == 0) goto label_3;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_game_Team, (frame[2].o)));
	sp[0].o = frame[1].o;
	sp += 1;
	goto label_5;
	}
label_3:;
	INST_ACONST_NULL();
label_5:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(46);
	frame[1].i = (jint(((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_numval)));
	LINE_NUMBER(47);
	if ((frame[1].i) < 0) goto label_7;
	}
	{
	jint temp0 = frame[1].i;
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_8;
	}
label_7:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(48);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LVar_bool_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:bool", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
	goto label_3;
label_1:;
	{
	jdouble temp0 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_numval));
	if ((doubleCompare(temp0, (jdouble(1,000000e-05)), -1)) < 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_3;
label_4:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_logic_LVar_num_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:num", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_DCONST(1);
	goto label_3;
label_2:;
	INST_DCONST(0);
	goto label_3;
label_1:;
	{
	jint temp0 = (jint)SM_mindustry_logic_LVar_invalid_double_R_boolean(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_numval));
	if (temp0 == 0) goto label_4;
	}
	INST_DCONST(0);
	goto label_3;
label_4:;
	INST_ALOAD(0);
	sp[-1].d = ((mindustry_logic_LVar *) NULL_CHECK(sp[-1].o))->F_numval;
label_3:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jdouble M_mindustry_logic_LVar_numOrNan_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:numOrNan", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(62);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_DCONST(1);
	goto label_3;
label_2:;
	(sp++)->d = jdouble(std::numeric_limits<double>::quiet_NaN());
	goto label_3;
label_1:;
	{
	jint temp0 = (jint)SM_mindustry_logic_LVar_invalid_double_R_boolean(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_numval));
	if (temp0 == 0) goto label_4;
	}
	INST_DCONST(0);
	goto label_3;
label_4:;
	INST_ALOAD(0);
	sp[-1].d = ((mindustry_logic_LVar *) NULL_CHECK(sp[-1].o))->F_numval;
label_3:;
	popStackFrame(ctx);
	INST_DRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_logic_LVar_numf_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:numf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_FCONST(1);
	goto label_3;
label_2:;
	INST_FCONST(0);
	goto label_3;
label_1:;
	{
	jint temp0 = (jint)SM_mindustry_logic_LVar_invalid_double_R_boolean(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_numval));
	if (temp0 == 0) goto label_4;
	}
	INST_FCONST(0);
	goto label_3;
label_4:;
	{
	jfloat temp0 = jfloat(((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_numval));
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_logic_LVar_numfWorld_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:numfWorld", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	jfloat temp0 = (jfloat)((func_mindustry_logic_LVar_numf_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LVar_numf_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)SM_mindustry_core_World_unconv_float_R_float(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_logic_LVar_numfOrNan_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:numfOrNan", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_FCONST(1);
	goto label_3;
label_2:;
	(sp++)->f = jfloat(std::numeric_limits<float>::quiet_NaN());
	goto label_3;
label_1:;
	{
	jint temp0 = (jint)SM_mindustry_logic_LVar_invalid_double_R_boolean(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_numval));
	if (temp0 == 0) goto label_4;
	}
	INST_FCONST(0);
	goto label_3;
label_4:;
	{
	jfloat temp0 = jfloat(((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_numval));
	sp[0].f = temp0;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_logic_LVar_numi_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:numi", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(80);
	jdouble temp0 = (jdouble)((func_mindustry_logic_LVar_num_R_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LVar_num_R_double])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (jint(temp0));
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LVar_setbool_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:setbool", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	INST_DCONST(1);
	goto label_2;
label_1:;
	INST_DCONST(0);
label_2:;
	{
	sp -= 2;
	((func_mindustry_logic_LVar_setnum_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LVar_setnum_double])(ctx, sp[0].o, sp[1].d);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LVar_setnum_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:setnum", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(88);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_constant) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)SM_mindustry_logic_LVar_invalid_double_R_boolean(ctx, (frame[1].d));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(90);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval = (jref) (jobject(nullptr));
	LINE_NUMBER(91);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj = (jint(1));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(93);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_numval = (frame[1].d);
	LINE_NUMBER(94);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval = (jref) (jobject(nullptr));
	LINE_NUMBER(95);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj = (jint(0));
	}
label_5:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LVar_setobj_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:setobj", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(100);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_constant) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(101);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval = (jref) (frame[1].o);
	LINE_NUMBER(102);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj = (jint(1));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LVar_setconst_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:setconst", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(106);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval = (jref) (frame[1].o);
	LINE_NUMBER(107);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj = (jint(1));
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LVar_setlink_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:setlink", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(111);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj = (jint(1));
	LINE_NUMBER(112);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(113);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval = (jref) (jobject(nullptr));
	LINE_NUMBER(114);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_constant = (jint(0));
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(116);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval = (jref) (frame[1].o);
	LINE_NUMBER(117);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_constant = (jint(1));
	}
label_5:;
	LINE_NUMBER(119);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LVar_set_mindustry_logic_LVar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(122);
	((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj = ((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_isobj);
	LINE_NUMBER(124);
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj) == 0) goto label_2;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_objval;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_objval = (jref) sp[1].o;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_logic_LVar_invalid_double_R_boolean(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[1].o)))->F_numval));
	sp += 1;
	if (temp0 == 0) goto label_5;
	}
	INST_DCONST(0);
	goto label_6;
label_5:;
	INST_ALOAD(1);
	sp[-1].d = ((mindustry_logic_LVar *) NULL_CHECK(sp[-1].o))->F_numval;
label_6:;
	sp -= 2;
	((mindustry_logic_LVar *) NULL_CHECK(sp[0].o))->F_numval = sp[1].d;
label_4:;
	LINE_NUMBER(129);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LVar_invalid_double_R_boolean(jcontext ctx, jdouble param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:invalid", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LVar(ctx);
	frame[0].d = param0;
	{
	LINE_NUMBER(132);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[0].d));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[0].d));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LVar_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LVar:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_name;
	sp += 1;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_isobj) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_objval;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, ((jdouble)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_numval));
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp += 1;
	if (((jint)((mindustry_logic_LVar *) NULL_CHECK((frame[0].o)))->F_constant) == 0) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8" [const]"_j));
	goto label_4;
label_3:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_4:;
	POP_N(3); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"\u0001: \u0001\u0001"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_logic_LVar;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method building
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method obj
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method team
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_logic_LVar[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_logic_LVar_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_logic_LVar_building_R_mindustry_gen_Building,
	(void *) M_mindustry_logic_LVar_obj_R_java_lang_Object,
	(void *) M_mindustry_logic_LVar_team_R_mindustry_game_Team,
	(void *) M_mindustry_logic_LVar_bool_R_boolean,
	(void *) M_mindustry_logic_LVar_num_R_double,
	(void *) M_mindustry_logic_LVar_numOrNan_R_double,
	(void *) M_mindustry_logic_LVar_numf_R_float,
	(void *) M_mindustry_logic_LVar_numfWorld_R_float,
	(void *) M_mindustry_logic_LVar_numfOrNan_R_float,
	(void *) M_mindustry_logic_LVar_numi_R_int,
	(void *) M_mindustry_logic_LVar_setbool_boolean,
	(void *) M_mindustry_logic_LVar_setnum_double,
	(void *) M_mindustry_logic_LVar_setobj_java_lang_Object,
	(void *) M_mindustry_logic_LVar_setconst_java_lang_Object,
	(void *) M_mindustry_logic_LVar_setlink_java_lang_Object,
	(void *) M_mindustry_logic_LVar_set_mindustry_logic_LVar,
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
	{ "building", "()Lmindustry/gen/Building;" },
	{ "obj", "()Ljava/lang/Object;" },
	{ "team", "()Lmindustry/game/Team;" },
	{ "bool", "()Z" },
	{ "num", "()D" },
	{ "numOrNan", "()D" },
	{ "numf", "()F" },
	{ "numfWorld", "()F" },
	{ "numfOrNan", "()F" },
	{ "numi", "()I" },
	{ "setbool", "(Z)V" },
	{ "setnum", "(D)V" },
	{ "setobj", "(Ljava/lang/Object;)V" },
	{ "setconst", "(Ljava/lang/Object;)V" },
	{ "setlink", "(Ljava/lang/Object;)V" },
	{ "set", "(Lmindustry/logic/LVar;)V" },
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(mindustry_logic_LVar, F_name), "Ljava/lang/String;", 17 },
	{ "id", &class_int, offsetof(mindustry_logic_LVar, F_id), "I", 1 },
	{ "isobj", &class_boolean, offsetof(mindustry_logic_LVar, F_isobj), "Z", 1 },
	{ "constant", &class_boolean, offsetof(mindustry_logic_LVar, F_constant), "Z", 1 },
	{ "objval", &class_java_lang_Object, offsetof(mindustry_logic_LVar, F_objval), "Ljava/lang/Object;", 1 },
	{ "numval", &class_double, offsetof(mindustry_logic_LVar, F_numval), "D", 1 },
	{ "syncTime", &class_long, offsetof(mindustry_logic_LVar, F_syncTime), "J", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LVar_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LVar_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_logic_LVar_java_lang_String_int_boolean, 0, "(Ljava/lang/String;IZ)V", 1 },
	{ "building", (intptr_t) M_mindustry_logic_LVar_building_R_mindustry_gen_Building, VTABLE_mindustry_logic_LVar_building_R_mindustry_gen_Building, "()Lmindustry/gen/Building;", 1 },
	{ "obj", (intptr_t) M_mindustry_logic_LVar_obj_R_java_lang_Object, VTABLE_mindustry_logic_LVar_obj_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "team", (intptr_t) M_mindustry_logic_LVar_team_R_mindustry_game_Team, VTABLE_mindustry_logic_LVar_team_R_mindustry_game_Team, "()Lmindustry/game/Team;", 1 },
	{ "bool", (intptr_t) M_mindustry_logic_LVar_bool_R_boolean, VTABLE_mindustry_logic_LVar_bool_R_boolean, "()Z", 1 },
	{ "num", (intptr_t) M_mindustry_logic_LVar_num_R_double, VTABLE_mindustry_logic_LVar_num_R_double, "()D", 1 },
	{ "numOrNan", (intptr_t) M_mindustry_logic_LVar_numOrNan_R_double, VTABLE_mindustry_logic_LVar_numOrNan_R_double, "()D", 1 },
	{ "numf", (intptr_t) M_mindustry_logic_LVar_numf_R_float, VTABLE_mindustry_logic_LVar_numf_R_float, "()F", 1 },
	{ "numfWorld", (intptr_t) M_mindustry_logic_LVar_numfWorld_R_float, VTABLE_mindustry_logic_LVar_numfWorld_R_float, "()F", 1 },
	{ "numfOrNan", (intptr_t) M_mindustry_logic_LVar_numfOrNan_R_float, VTABLE_mindustry_logic_LVar_numfOrNan_R_float, "()F", 1 },
	{ "numi", (intptr_t) M_mindustry_logic_LVar_numi_R_int, VTABLE_mindustry_logic_LVar_numi_R_int, "()I", 1 },
	{ "setbool", (intptr_t) M_mindustry_logic_LVar_setbool_boolean, VTABLE_mindustry_logic_LVar_setbool_boolean, "(Z)V", 1 },
	{ "setnum", (intptr_t) M_mindustry_logic_LVar_setnum_double, VTABLE_mindustry_logic_LVar_setnum_double, "(D)V", 1 },
	{ "setobj", (intptr_t) M_mindustry_logic_LVar_setobj_java_lang_Object, VTABLE_mindustry_logic_LVar_setobj_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "setconst", (intptr_t) M_mindustry_logic_LVar_setconst_java_lang_Object, VTABLE_mindustry_logic_LVar_setconst_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "setlink", (intptr_t) M_mindustry_logic_LVar_setlink_java_lang_Object, VTABLE_mindustry_logic_LVar_setlink_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "set", (intptr_t) M_mindustry_logic_LVar_set_mindustry_logic_LVar, VTABLE_mindustry_logic_LVar_set_mindustry_logic_LVar, "(Lmindustry/logic/LVar;)V", 1 },
	{ "invalid", (intptr_t) SM_mindustry_logic_LVar_invalid_double_R_boolean, 0, "(D)Z", 9 },
	{ "toString", (intptr_t) M_mindustry_logic_LVar_toString_R_java_lang_String, VTABLE_mindustry_logic_LVar_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_logic_LVar{
		.nativeName = (intptr_t) "mindustry/logic/LVar",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_logic_LVar),
		.classVtable = (intptr_t) vtable_mindustry_logic_LVar,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LVar,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_logic_LVar,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LVar = registerClass(&class_mindustry_logic_LVar);

}
