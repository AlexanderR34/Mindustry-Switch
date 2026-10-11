#include "mindustry/logic/LUnitControl.h"
#include "mindustry/logic/LUnitControl.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_logic_LUnitControl_idle;
jobject SF_mindustry_logic_LUnitControl_stop;
jobject SF_mindustry_logic_LUnitControl_move;
jobject SF_mindustry_logic_LUnitControl_approach;
jobject SF_mindustry_logic_LUnitControl_pathfind;
jobject SF_mindustry_logic_LUnitControl_autoPathfind;
jobject SF_mindustry_logic_LUnitControl_boost;
jobject SF_mindustry_logic_LUnitControl_target;
jobject SF_mindustry_logic_LUnitControl_targetp;
jobject SF_mindustry_logic_LUnitControl_itemDrop;
jobject SF_mindustry_logic_LUnitControl_itemTake;
jobject SF_mindustry_logic_LUnitControl_payDrop;
jobject SF_mindustry_logic_LUnitControl_payTake;
jobject SF_mindustry_logic_LUnitControl_payEnter;
jobject SF_mindustry_logic_LUnitControl_mine;
jobject SF_mindustry_logic_LUnitControl_flag;
jobject SF_mindustry_logic_LUnitControl_build;
jobject SF_mindustry_logic_LUnitControl_deconstruct;
jobject SF_mindustry_logic_LUnitControl_getBlock;
jobject SF_mindustry_logic_LUnitControl_within;
jobject SF_mindustry_logic_LUnitControl_unbind;
jobject SF_mindustry_logic_LUnitControl_all;
jobject SF_mindustry_logic_LUnitControl_$VALUES;

void mark_mindustry_logic_LUnitControl(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_LUnitControl_idle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_idle)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_idle, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_stop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_stop)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_stop, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_move)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_move)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_move, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_approach)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_approach)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_approach, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_pathfind)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_pathfind)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_pathfind, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_autoPathfind)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_autoPathfind)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_autoPathfind, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_boost)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_boost)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_boost, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_target)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_target)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_target, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_targetp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_targetp)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_targetp, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_itemDrop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_itemDrop)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_itemDrop, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_itemTake)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_itemTake)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_itemTake, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_payDrop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_payDrop)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_payDrop, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_payTake)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_payTake)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_payTake, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_payEnter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_payEnter)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_payEnter, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_mine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_mine)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_mine, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_flag)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_flag)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_flag, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_build)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_build)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_build, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_deconstruct)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_deconstruct)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_deconstruct, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_getBlock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_getBlock)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_getBlock, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_within)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_within)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_within, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_unbind)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_unbind)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_unbind, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_all)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_all, mark, depth + 1);
		if (SF_mindustry_logic_LUnitControl_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_LUnitControl_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_logic_LUnitControl_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_logic_LUnitControl *) object;
	if (self->F_params)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_params)->clazz)->markFunction)((jobject) self->F_params, mark, depth + 1);
}

jobject SM_mindustry_logic_LUnitControl_values_R_Array1_mindustry_logic_LUnitControl(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LUnitControl:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LUnitControl(ctx);
	{
	LINE_NUMBER(3);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LUnitControl_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_logic_LUnitControl, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LUnitControl_valueOf_java_lang_String_R_mindustry_logic_LUnitControl(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LUnitControl:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LUnitControl(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_logic_LUnitControl)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_LUnitControl, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LUnitControl:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LUnitControl(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(29);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(30);
	((mindustry_logic_LUnitControl *) NULL_CHECK((frame[0].o)))->F_params = (jref) (frame[3].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_LUnitControl_$values_R_Array1_mindustry_logic_LUnitControl(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LUnitControl:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LUnitControl(ctx);
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_logic_LUnitControl, (21));
	jint temp0 = jint(0);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_idle;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_stop;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_move;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_approach;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_pathfind;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_autoPathfind;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_boost;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_target;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_targetp;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_itemDrop;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_itemTake;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_payDrop;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_payTake;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_payEnter;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_mine;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_flag;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_build;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_deconstruct;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_getBlock;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_within;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_LUnitControl_unbind;
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_LUnitControl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[8];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LUnitControl:<clinit>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LUnitControl(ctx);
	{
	LINE_NUMBER(4);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"idle"_j));
	jint temp0 = jint(0);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_idle = sp[0].o;
	LINE_NUMBER(5);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"stop"_j));
	jint temp1 = jint(1);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_stop = sp[0].o;
	LINE_NUMBER(6);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"move"_j));
	jint temp2 = jint(2);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_move = sp[0].o;
	LINE_NUMBER(7);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"approach"_j));
	jint temp3 = jint(3);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"radius"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_approach = sp[0].o;
	LINE_NUMBER(8);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pathfind"_j));
	jint temp4 = jint(4);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp4, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_pathfind = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"autoPathfind"_j));
	jint temp5 = jint(5);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp5, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_autoPathfind = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"boost"_j));
	jint temp6 = 6;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"enable"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp6, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_boost = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"target"_j));
	jint temp7 = 7;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"shoot"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp7, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_target = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"targetp"_j));
	jint temp8 = 8;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"unit"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"shoot"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp8, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_targetp = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"itemDrop"_j));
	jint temp9 = 9;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"to"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"amount"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp9, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_itemDrop = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"itemTake"_j));
	jint temp10 = 10;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(3)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"from"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"item"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"amount"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp10, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_itemTake = sp[0].o;
	LINE_NUMBER(15);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"payDrop"_j));
	jint temp11 = 11;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp11, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_payDrop = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"payTake"_j));
	jint temp12 = 12;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"takeUnits"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp12, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_payTake = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"payEnter"_j));
	jint temp13 = 13;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp13, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_payEnter = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mine"_j));
	jint temp14 = 14;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp14, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_mine = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"flag"_j));
	jint temp15 = 15;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"value"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp15, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_flag = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"build"_j));
	jint temp16 = 16;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"block"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"rotation"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"config"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp16, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_build = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"deconstruct"_j));
	jint temp17 = 17;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp17, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_deconstruct = sp[0].o;
	LINE_NUMBER(22);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"getBlock"_j));
	jint temp18 = 18;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"type"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"building"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"floor"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp18, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_getBlock = sp[0].o;
	LINE_NUMBER(23);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"within"_j));
	jint temp19 = 19;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"x"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"y"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"radius"_j)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"result"_j)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp19, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_within = sp[0].o;
	LINE_NUMBER(24);
	clinit_mindustry_logic_LUnitControl(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LUnitControl);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"unbind"_j));
	jint temp20 = 20;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp20, sp[2].o);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_unbind = sp[0].o;
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_mindustry_logic_LUnitControl_$values_R_Array1_mindustry_logic_LUnitControl(ctx);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_$VALUES = sp[0].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)SM_mindustry_logic_LUnitControl_values_R_Array1_mindustry_logic_LUnitControl(ctx);
	clinit_mindustry_logic_LUnitControl(ctx);
	SF_mindustry_logic_LUnitControl_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LUnitControl[] {
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
};

static FieldMetadata fields[] {
	{ "idle", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_idle, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "stop", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_stop, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "move", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_move, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "approach", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_approach, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "pathfind", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_pathfind, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "autoPathfind", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_autoPathfind, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "boost", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_boost, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "target", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_target, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "targetp", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_targetp, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "itemDrop", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_itemDrop, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "itemTake", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_itemTake, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "payDrop", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_payDrop, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "payTake", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_payTake, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "payEnter", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_payEnter, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "mine", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_mine, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "flag", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_flag, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "build", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_build, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "deconstruct", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_deconstruct, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "getBlock", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_getBlock, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "within", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_within, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "unbind", &class_mindustry_logic_LUnitControl, (intptr_t) &SF_mindustry_logic_LUnitControl_unbind, "Lmindustry/logic/LUnitControl;", 16409 },
	{ "params", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_logic_LUnitControl, F_params), "[Ljava/lang/String;", 17 },
	{ "all", getArrayClass(&class_mindustry_logic_LUnitControl, 1), (intptr_t) &SF_mindustry_logic_LUnitControl_all, "[Lmindustry/logic/LUnitControl;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_logic_LUnitControl, 1), (intptr_t) &SF_mindustry_logic_LUnitControl_$VALUES, "[Lmindustry/logic/LUnitControl;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_logic_LUnitControl_values_R_Array1_mindustry_logic_LUnitControl, 0, "()[Lmindustry/logic/LUnitControl;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_logic_LUnitControl_valueOf_java_lang_String_R_mindustry_logic_LUnitControl, 0, "(Ljava/lang/String;)Lmindustry/logic/LUnitControl;", 9 },
	{ "<init>", (intptr_t) init_mindustry_logic_LUnitControl_java_lang_String_int_Array1_java_lang_String, 0, "(Ljava/lang/String;I[Ljava/lang/String;)V", 130 },
	{ "$values", (intptr_t) SM_mindustry_logic_LUnitControl_$values_R_Array1_mindustry_logic_LUnitControl, 0, "()[Lmindustry/logic/LUnitControl;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_LUnitControl, 0, "()V", 8 },
};

Class class_mindustry_logic_LUnitControl{
		.nativeName = (intptr_t) "mindustry/logic/LUnitControl",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_logic_LUnitControl),
		.classVtable = (intptr_t) vtable_mindustry_logic_LUnitControl,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LUnitControl,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LUnitControl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LUnitControl = registerClass(&class_mindustry_logic_LUnitControl);

}
