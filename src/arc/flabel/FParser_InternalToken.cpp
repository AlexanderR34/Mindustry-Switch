#include "arc/flabel/FParser_InternalToken.h"
#include "arc/flabel/FParser_InternalToken.h"
#include "java/lang/Object.h"
#include "arc/flabel/FParser.h"
#include "java/lang/String.h"
#include "arc/flabel/FParser_TokenCategory.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_flabel_FParser$InternalToken_wait;
jobject SF_arc_flabel_FParser$InternalToken_speed;
jobject SF_arc_flabel_FParser$InternalToken_slower;
jobject SF_arc_flabel_FParser$InternalToken_slow;
jobject SF_arc_flabel_FParser$InternalToken_normal;
jobject SF_arc_flabel_FParser$InternalToken_fast;
jobject SF_arc_flabel_FParser$InternalToken_faster;
jobject SF_arc_flabel_FParser$InternalToken_color;
jobject SF_arc_flabel_FParser$InternalToken_clearcolor;
jobject SF_arc_flabel_FParser$InternalToken_endcolor;
jobject SF_arc_flabel_FParser$InternalToken_var;
jobject SF_arc_flabel_FParser$InternalToken_event;
jobject SF_arc_flabel_FParser$InternalToken_reset;
jobject SF_arc_flabel_FParser$InternalToken_skip;
jobject SF_arc_flabel_FParser$InternalToken_all;
jobject SF_arc_flabel_FParser$InternalToken_$VALUES;

void mark_arc_flabel_FParser$InternalToken(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_flabel_FParser$InternalToken_wait)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_wait)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_wait, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_speed)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_speed)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_speed, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_slower)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_slower)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_slower, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_slow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_slow)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_slow, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_normal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_normal)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_normal, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_fast)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_fast)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_fast, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_faster)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_faster)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_faster, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_color)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_color)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_color, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_clearcolor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_clearcolor)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_clearcolor, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_endcolor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_endcolor)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_endcolor, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_var)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_var)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_var, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_event)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_event)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_event, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_reset)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_reset)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_reset, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_skip)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_skip)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_skip, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_all)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_all, mark, depth + 1);
		if (SF_arc_flabel_FParser$InternalToken_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser$InternalToken_$VALUES)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser$InternalToken_$VALUES, mark, depth + 1);
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
	auto self = (arc_flabel_FParser$InternalToken *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_category)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_category)->clazz)->markFunction)((jobject) self->F_category, mark, depth + 1);
}

jobject SM_arc_flabel_FParser$InternalToken_values_R_Array1_arc_flabel_FParser$InternalToken(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$InternalToken:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser$InternalToken(ctx);
	{
	LINE_NUMBER(242);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FParser$InternalToken_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_flabel_FParser$InternalToken, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_flabel_FParser$InternalToken_valueOf_java_lang_String_R_arc_flabel_FParser$InternalToken(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$InternalToken:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser$InternalToken(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_flabel_FParser$InternalToken)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_flabel_FParser$InternalToken, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$InternalToken:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser$InternalToken(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(263);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(264);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_flabel_FParser$InternalToken_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FParser$InternalToken_name_R_java_lang_String])(ctx, (frame[0].o));
	((arc_flabel_FParser$InternalToken *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(265);
	((arc_flabel_FParser$InternalToken *) NULL_CHECK((frame[0].o)))->F_category = (jref) (frame[3].o);
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_flabel_FParser$InternalToken_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$InternalToken:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_flabel_FParser$InternalToken *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_flabel_FParser$InternalToken_fromName_java_lang_String_R_arc_flabel_FParser$InternalToken(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$InternalToken:fromName", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser$InternalToken(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(274);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(275);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FParser$InternalToken_all;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_1;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(276);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_flabel_FParser$InternalToken *) NULL_CHECK((frame[4].o)))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return (frame[4].o);
	}
label_5:;
	{
	LINE_NUMBER(275);
	INST_IINC(3, 1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_arc_flabel_FParser$InternalToken_$values_R_Array1_arc_flabel_FParser$InternalToken(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$InternalToken:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser$InternalToken(ctx);
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)createArray(ctx, &class_arc_flabel_FParser$InternalToken, (14));
	jint temp0 = jint(0);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_wait;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_speed;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_slower;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_slow;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_normal;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_fast;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_faster;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_color;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_clearcolor;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_endcolor;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_var;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_event;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_reset;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$InternalToken_skip;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_flabel_FParser$InternalToken(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser$InternalToken:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser$InternalToken(ctx);
	{
	LINE_NUMBER(243);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"wait"_j));
	jint temp0 = jint(0);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_wait;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_wait = sp[0].o;
	LINE_NUMBER(244);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"speed"_j));
	jint temp1 = jint(1);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_speed;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_speed = sp[0].o;
	LINE_NUMBER(245);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"slower"_j));
	jint temp2 = jint(2);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_speed;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_slower = sp[0].o;
	LINE_NUMBER(246);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"slow"_j));
	jint temp3 = jint(3);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_speed;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_slow = sp[0].o;
	LINE_NUMBER(247);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"normal"_j));
	jint temp4 = jint(4);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_speed;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp4, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_normal = sp[0].o;
	LINE_NUMBER(248);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fast"_j));
	jint temp5 = jint(5);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_speed;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp5, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_fast = sp[0].o;
	LINE_NUMBER(249);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"faster"_j));
	jint temp6 = 6;
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_speed;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp6, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_faster = sp[0].o;
	LINE_NUMBER(250);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"color"_j));
	jint temp7 = 7;
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_color;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp7, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_color = sp[0].o;
	LINE_NUMBER(251);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"clearcolor"_j));
	jint temp8 = 8;
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_color;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp8, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_clearcolor = sp[0].o;
	LINE_NUMBER(252);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"endcolor"_j));
	jint temp9 = 9;
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_color;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp9, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_endcolor = sp[0].o;
	LINE_NUMBER(253);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"var"_j));
	jint temp10 = 10;
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_variable;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp10, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_var = sp[0].o;
	LINE_NUMBER(254);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"event"_j));
	jint temp11 = 11;
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_event;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp11, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_event = sp[0].o;
	LINE_NUMBER(255);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"reset"_j));
	jint temp12 = 12;
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_reset;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp12, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_reset = sp[0].o;
	LINE_NUMBER(256);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$InternalToken);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"skip"_j));
	jint temp13 = 13;
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FParser$TokenCategory_skip;
	init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory(ctx, sp[0].o, sp[1].o, temp13, sp[2].o);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_skip = sp[0].o;
	LINE_NUMBER(242);
	sp[0].o = (jobject)SM_arc_flabel_FParser$InternalToken_$values_R_Array1_arc_flabel_FParser$InternalToken(ctx);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_$VALUES = sp[0].o;
	LINE_NUMBER(261);
	sp[0].o = (jobject)SM_arc_flabel_FParser$InternalToken_values_R_Array1_arc_flabel_FParser$InternalToken(ctx);
	clinit_arc_flabel_FParser$InternalToken(ctx);
	SF_arc_flabel_FParser$InternalToken_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_FParser$InternalToken[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_flabel_FParser$InternalToken_toString_R_java_lang_String,
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
	{ "wait", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_wait, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "speed", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_speed, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "slower", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_slower, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "slow", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_slow, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "normal", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_normal, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "fast", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_fast, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "faster", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_faster, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "color", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_color, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "clearcolor", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_clearcolor, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "endcolor", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_endcolor, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "var", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_var, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "event", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_event, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "reset", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_reset, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "skip", &class_arc_flabel_FParser$InternalToken, (intptr_t) &SF_arc_flabel_FParser$InternalToken_skip, "Larc/flabel/FParser$InternalToken;", 16409 },
	{ "name", &class_java_lang_String, offsetof(arc_flabel_FParser$InternalToken, F_name), "Ljava/lang/String;", 16 },
	{ "category", &class_arc_flabel_FParser$TokenCategory, offsetof(arc_flabel_FParser$InternalToken, F_category), "Larc/flabel/FParser$TokenCategory;", 16 },
	{ "all", getArrayClass(&class_arc_flabel_FParser$InternalToken, 1), (intptr_t) &SF_arc_flabel_FParser$InternalToken_all, "[Larc/flabel/FParser$InternalToken;", 24 },
	{ "$VALUES", getArrayClass(&class_arc_flabel_FParser$InternalToken, 1), (intptr_t) &SF_arc_flabel_FParser$InternalToken_$VALUES, "[Larc/flabel/FParser$InternalToken;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_flabel_FParser$InternalToken_values_R_Array1_arc_flabel_FParser$InternalToken, 0, "()[Larc/flabel/FParser$InternalToken;", 9 },
	{ "valueOf", (intptr_t) SM_arc_flabel_FParser$InternalToken_valueOf_java_lang_String_R_arc_flabel_FParser$InternalToken, 0, "(Ljava/lang/String;)Larc/flabel/FParser$InternalToken;", 9 },
	{ "<init>", (intptr_t) init_arc_flabel_FParser$InternalToken_java_lang_String_int_arc_flabel_FParser$TokenCategory, 0, "(Ljava/lang/String;ILarc/flabel/FParser$TokenCategory;)V", 2 },
	{ "toString", (intptr_t) M_arc_flabel_FParser$InternalToken_toString_R_java_lang_String, VTABLE_arc_flabel_FParser$InternalToken_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "fromName", (intptr_t) SM_arc_flabel_FParser$InternalToken_fromName_java_lang_String_R_arc_flabel_FParser$InternalToken, 0, "(Ljava/lang/String;)Larc/flabel/FParser$InternalToken;", 8 },
	{ "$values", (intptr_t) SM_arc_flabel_FParser$InternalToken_$values_R_Array1_arc_flabel_FParser$InternalToken, 0, "()[Larc/flabel/FParser$InternalToken;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_flabel_FParser$InternalToken, 0, "()V", 8 },
};

Class class_arc_flabel_FParser$InternalToken{
		.nativeName = (intptr_t) "arc/flabel/FParser$InternalToken",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_flabel_FParser$InternalToken),
		.classVtable = (intptr_t) vtable_arc_flabel_FParser$InternalToken,
		.staticInitializer = (intptr_t) clinit_arc_flabel_FParser$InternalToken,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_FParser$InternalToken,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_flabel_FParser,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 18,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_flabel_FParser$InternalToken = registerClass(&class_arc_flabel_FParser$InternalToken);

}

