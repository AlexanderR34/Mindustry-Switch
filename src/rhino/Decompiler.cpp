#include "rhino/Decompiler.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "rhino/Kit.h"
#include "rhino/UintMap.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "rhino/Token.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Double.h"
#include "rhino/Decompiler.h"
#include "java/lang/System.h"

extern "C" {

jint SF_rhino_Decompiler_ONLY_BODY_FLAG;
jint SF_rhino_Decompiler_TO_SOURCE_FLAG;
jint SF_rhino_Decompiler_INITIAL_INDENT_PROP;
jint SF_rhino_Decompiler_INDENT_GAP_PROP;
jint SF_rhino_Decompiler_CASE_GAP_PROP;
jint SF_rhino_Decompiler_FUNCTION_END;
jbool SF_rhino_Decompiler_printSource;

void mark_rhino_Decompiler(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_Decompiler *) object;
	if (self->F_sourceBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sourceBuffer)->clazz)->markFunction)((jobject) self->F_sourceBuffer, mark, depth + 1);
}

void clinit_rhino_Decompiler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_Decompiler_ONLY_BODY_FLAG = jint(1);
	SF_rhino_Decompiler_TO_SOURCE_FLAG = jint(2);
	SF_rhino_Decompiler_INITIAL_INDENT_PROP = jint(1);
	SF_rhino_Decompiler_INDENT_GAP_PROP = jint(2);
	SF_rhino_Decompiler_CASE_GAP_PROP = jint(3);
	SF_rhino_Decompiler_FUNCTION_END = jint(168);
	SF_rhino_Decompiler_printSource = jint(0);
}

void init_rhino_Decompiler(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Decompiler(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(848);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (128));
	((rhino_Decompiler *) NULL_CHECK(sp[0].o))->F_sourceBuffer = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Decompiler_getEncodedSource_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:getEncodedSource", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)M_rhino_Decompiler_sourceToString_int_R_java_lang_String(ctx, (frame[0].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_Decompiler_getCurrentOffset_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:getCurrentOffset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return ((jint)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceTop);
	}

	popStackFrame(ctx);
}

jint M_rhino_Decompiler_markFunctionStart_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:markFunctionStart", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(78);
	jint temp0 = (jint)((func_rhino_Decompiler_getCurrentOffset_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Decompiler_getCurrentOffset_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(79);
	if ((frame[1].i) == (jint(4))) goto label_2;
	}
	{
	LINE_NUMBER(80);
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, (frame[0].o), (110));
	LINE_NUMBER(81);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (jchar((frame[1].i))));
	}
label_2:;
	{
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_Decompiler_markFunctionEnd_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:markFunctionEnd", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(87);
	jint temp0 = (jint)((func_rhino_Decompiler_getCurrentOffset_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Decompiler_getCurrentOffset_R_int])(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(88);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (168));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_rhino_Decompiler_addToken_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:addToken", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(93);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) <= (167)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(94);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(96);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (jchar((frame[1].i))));
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Decompiler_addEOL_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:addEOL", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(100);
	if ((jint(0)) > (frame[1].i)) goto label_1;
	}
	{
	if ((frame[1].i) <= (167)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(101);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(103);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (jchar((frame[1].i))));
	LINE_NUMBER(104);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Decompiler_addName_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:addName", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(108);
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, (frame[0].o), (39));
	LINE_NUMBER(109);
	M_rhino_Decompiler_appendString_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Decompiler_addString_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:addString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, (frame[0].o), (41));
	LINE_NUMBER(114);
	M_rhino_Decompiler_appendString_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Decompiler_addRegexp_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:addRegexp", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(118);
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, (frame[0].o), (48));
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (47));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (47));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	M_rhino_Decompiler_appendString_java_lang_String(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Decompiler_addNumber_double(jcontext ctx, jobject self, jdouble param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:addNumber", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].d = param0;
	{
	LINE_NUMBER(123);
	((func_rhino_Decompiler_addToken_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Decompiler_addToken_int])(ctx, (frame[0].o), (40));
	LINE_NUMBER(142);
	frame[3].l = (jlong((frame[1].d)));
	LINE_NUMBER(143);
	if ((doubleCompare((jdouble((frame[3].l))), (frame[1].d), -1)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(146);
	jlong temp0 = (jlong)SM_java_lang_Double_doubleToLongBits_double_R_long(ctx, (frame[1].d));
	frame[3].l = temp0;
	LINE_NUMBER(147);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (68));
	LINE_NUMBER(148);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (jchar((jint(((frame[3].l) >> (48)))))));
	LINE_NUMBER(149);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (jchar((jint(((frame[3].l) >> (32)))))));
	LINE_NUMBER(150);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (jchar((jint(((frame[3].l) >> (16)))))));
	LINE_NUMBER(151);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (jchar((jint((frame[3].l))))));
	goto label_10;
	}
label_3:;
	{
	LINE_NUMBER(155);
	if ((longCompare((frame[3].l), (jlong(0)))) >= 0) goto label_11;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_11:;
	{
	LINE_NUMBER(159);
	if ((longCompare((frame[3].l), (jlong(65535ll)))) > 0) goto label_12;
	}
	{
	LINE_NUMBER(160);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (83));
	LINE_NUMBER(161);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (jchar((jint((frame[3].l))))));
	goto label_10;
	}
label_12:;
	{
	LINE_NUMBER(163);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (74));
	LINE_NUMBER(164);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (jchar((jint(((frame[3].l) >> (48)))))));
	LINE_NUMBER(165);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (jchar((jint(((frame[3].l) >> (32)))))));
	LINE_NUMBER(166);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (jchar((jint(((frame[3].l) >> (16)))))));
	LINE_NUMBER(167);
	M_rhino_Decompiler_append_char(ctx, (frame[0].o), (jchar((jint((frame[3].l))))));
	}
label_10:;
	LINE_NUMBER(170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_Decompiler_appendString_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:appendString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(173);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(174);
	frame[3].i = (jint(1));
	LINE_NUMBER(175);
	if ((frame[2].i) < (jint(32768))) goto label_3;
	}
	{
	LINE_NUMBER(176);
	frame[3].i = (jint(2));
	}
label_3:;
	{
	LINE_NUMBER(178);
	frame[4].i = ((((jint)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceTop) + (frame[3].i)) + (frame[2].i));
	LINE_NUMBER(179);
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	if (temp0 <= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_6;
	}
	{
	LINE_NUMBER(180);
	M_rhino_Decompiler_increaseSourceCapacity_int(ctx, (frame[0].o), (frame[4].i));
	}
label_6:;
	{
	LINE_NUMBER(182);
	if ((frame[2].i) < (jint(32768))) goto label_8;
	}
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	ARRAY_ACCESS(jchar, sp[0].o, ((jint)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceTop)) = (jchar(((jint(32768)) | (bit_cast<jint>(bit_cast<uint32_t>((frame[2].i)) >> (16))))));
	LINE_NUMBER(186);
	sp[0].o = frame[0].o;
	((rhino_Decompiler *) NULL_CHECK(sp[0].o))->F_sourceTop = (((jint)((rhino_Decompiler *) NULL_CHECK(sp[0].o))->F_sourceTop) + (jint(1)));
	}
label_8:;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	ARRAY_ACCESS(jchar, sp[0].o, ((jint)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceTop)) = (jchar((frame[2].i)));
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	((rhino_Decompiler *) NULL_CHECK(sp[0].o))->F_sourceTop = (((jint)((rhino_Decompiler *) NULL_CHECK(sp[0].o))->F_sourceTop) + (jint(1)));
	LINE_NUMBER(190);
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	((func_java_lang_String_getChars_int_int_Array1_char_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_getChars_int_int_Array1_char_int])(ctx, sp[0].o, temp0, temp1, sp[1].o, ((jint)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceTop));
	LINE_NUMBER(191);
	((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceTop = (frame[4].i);
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Decompiler_append_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:append", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(195);
	jint temp0 = (jint)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceTop;
	sp[0].o = (jobject)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(196);
	M_rhino_Decompiler_increaseSourceCapacity_int(ctx, (frame[0].o), (((jint)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceTop) + (jint(1))));
	}
label_1:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	ARRAY_ACCESS(jchar, sp[0].o, ((jint)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceTop)) = (frame[1].i);
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	((rhino_Decompiler *) NULL_CHECK(sp[0].o))->F_sourceTop = (((jint)((rhino_Decompiler *) NULL_CHECK(sp[0].o))->F_sourceTop) + (jint(1)));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_Decompiler_increaseSourceCapacity_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:increaseSourceCapacity", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(204);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	if (temp0 > (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	frame[2].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2)));
	LINE_NUMBER(206);
	if ((frame[2].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(207);
	frame[2].i = (frame[1].i);
	}
label_3:;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject) createArray(ctx, &class_char, (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(210);
	sp[0].o = (jobject)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[3].o), (jint(0)), ((jint)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceTop));
	LINE_NUMBER(211);
	((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceBuffer = (jref) (frame[3].o);
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Decompiler_sourceToString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:sourceToString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(215);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if (((jint)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceTop) >= (frame[1].i)) goto label_2;
	}
label_1:;
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(216);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (frame[1].i), (((jint)((rhino_Decompiler *) NULL_CHECK((frame[0].o)))->F_sourceTop) - (frame[1].i)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_Decompiler_decompile_java_lang_String_int_rhino_UintMap_R_java_lang_String(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[23];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:decompile", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Decompiler(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(233);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[3].i = temp0;
	LINE_NUMBER(234);
	if ((frame[3].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_2:;
	{
	LINE_NUMBER(238);
	jint temp0 = (jint)((func_rhino_UintMap_getInt_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_UintMap_getInt_int_int_R_int])(ctx, (frame[2].o), (jint(1)), (jint(0)));
	frame[4].i = temp0;
	LINE_NUMBER(239);
	if ((frame[4].i) >= 0) goto label_5;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(240);
	jint temp0 = (jint)((func_rhino_UintMap_getInt_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_UintMap_getInt_int_int_R_int])(ctx, (frame[2].o), (jint(2)), (jint(4)));
	frame[5].i = temp0;
	LINE_NUMBER(241);
	if ((frame[5].i) >= 0) goto label_7;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(242);
	jint temp0 = (jint)((func_rhino_UintMap_getInt_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_rhino_UintMap_getInt_int_int_R_int])(ctx, (frame[2].o), (jint(3)), (jint(2)));
	frame[6].i = temp0;
	LINE_NUMBER(243);
	if ((frame[6].i) >= 0) goto label_9;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(245);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(246);
	if ((jint(0)) == ((frame[1].i) & (jint(1)))) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(247);
	if ((jint(0)) == ((frame[1].i) & (jint(2)))) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(276);
	frame[10].i = (jint(0));
	LINE_NUMBER(277);
	frame[11].i = (jint(0));
	LINE_NUMBER(278);
	frame[12].i = (jint(0));
	LINE_NUMBER(280);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[12].i));
	if (temp0 != (137)) goto label_20;
	}
	{
	LINE_NUMBER(281);
	INST_IINC(12, 1);
	LINE_NUMBER(282);
	frame[13].i = (jint(-1));
	goto label_24;
	}
label_20:;
	{
	LINE_NUMBER(284);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[12].i) + (jint(1))));
	frame[13].i = temp0;
	}
label_24:;
	{
	LINE_NUMBER(287);
	if ((frame[9].i) != 0) goto label_25;
	}
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (10));
	LINE_NUMBER(290);
	frame[14].i = (jint(0));
	}
label_28:;
	{
	if ((frame[14].i) >= (frame[4].i)) goto label_29;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (32));
	LINE_NUMBER(290);
	INST_IINC(14, 1);
	goto label_28;
	}
label_29:;
	goto label_32;
label_25:;
	{
	LINE_NUMBER(293);
	if ((frame[13].i) != (jint(2))) goto label_32;
	}
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (40));
	}
label_32:;
	{
	LINE_NUMBER(298);
	if ((frame[12].i) >= (frame[3].i)) goto label_34;
	}
	{
	LINE_NUMBER(299);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[12].i));
	switch(temp0) {
		case 1: goto label_36;
		case 2: goto label_37;
		case 3: goto label_37;
		case 4: goto label_38;
		case 5: goto label_37;
		case 6: goto label_37;
		case 7: goto label_37;
		case 8: goto label_37;
		case 9: goto label_39;
		case 10: goto label_40;
		case 11: goto label_41;
		case 12: goto label_42;
		case 13: goto label_43;
		case 14: goto label_44;
		case 15: goto label_45;
		case 16: goto label_46;
		case 17: goto label_47;
		case 18: goto label_48;
		case 19: goto label_49;
		case 20: goto label_50;
		case 21: goto label_51;
		case 22: goto label_52;
		case 23: goto label_53;
		case 24: goto label_54;
		case 25: goto label_55;
		case 26: goto label_56;
		case 27: goto label_57;
		case 28: goto label_58;
		case 29: goto label_59;
		case 30: goto label_60;
		case 31: goto label_61;
		case 32: goto label_62;
		case 33: goto label_37;
		case 34: goto label_37;
		case 35: goto label_37;
		case 36: goto label_37;
		case 37: goto label_37;
		case 38: goto label_37;
		case 39: goto label_63;
		case 40: goto label_64;
		case 41: goto label_65;
		case 42: goto label_66;
		case 43: goto label_67;
		case 44: goto label_68;
		case 45: goto label_69;
		case 46: goto label_70;
		case 47: goto label_71;
		case 48: goto label_63;
		case 49: goto label_37;
		case 50: goto label_72;
		case 51: goto label_37;
		case 52: goto label_73;
		case 53: goto label_74;
		case 54: goto label_37;
		case 55: goto label_37;
		case 56: goto label_37;
		case 57: goto label_37;
		case 58: goto label_37;
		case 59: goto label_37;
		case 60: goto label_37;
		case 61: goto label_37;
		case 62: goto label_37;
		case 63: goto label_37;
		case 64: goto label_37;
		case 65: goto label_37;
		case 66: goto label_37;
		case 67: goto label_75;
		case 68: goto label_37;
		case 69: goto label_37;
		case 70: goto label_37;
		case 71: goto label_37;
		case 72: goto label_37;
		case 73: goto label_76;
		case 74: goto label_37;
		case 75: goto label_37;
		case 76: goto label_37;
		case 77: goto label_37;
		case 78: goto label_37;
		case 79: goto label_37;
		case 80: goto label_37;
		case 81: goto label_37;
		case 82: goto label_77;
		case 83: goto label_78;
		case 84: goto label_79;
		case 85: goto label_80;
		case 86: goto label_81;
		case 87: goto label_82;
		case 88: goto label_83;
		case 89: goto label_84;
		case 90: goto label_85;
		case 91: goto label_86;
		case 92: goto label_87;
		case 93: goto label_88;
		case 94: goto label_89;
		case 95: goto label_90;
		case 96: goto label_91;
		case 97: goto label_92;
		case 98: goto label_93;
		case 99: goto label_94;
		case 100: goto label_95;
		case 101: goto label_96;
		case 102: goto label_97;
		case 103: goto label_98;
		case 104: goto label_99;
		case 105: goto label_100;
		case 106: goto label_101;
		case 107: goto label_102;
		case 108: goto label_103;
		case 109: goto label_104;
		case 110: goto label_105;
		case 111: goto label_37;
		case 112: goto label_37;
		case 113: goto label_106;
		case 114: goto label_107;
		case 115: goto label_108;
		case 116: goto label_109;
		case 117: goto label_110;
		case 118: goto label_111;
		case 119: goto label_112;
		case 120: goto label_113;
		case 121: goto label_114;
		case 122: goto label_115;
		case 123: goto label_116;
		case 124: goto label_117;
		case 125: goto label_118;
		case 126: goto label_119;
		case 127: goto label_120;
		case 128: goto label_37;
		case 129: goto label_37;
		case 130: goto label_37;
		case 131: goto label_37;
		case 132: goto label_37;
		case 133: goto label_37;
		case 134: goto label_37;
		case 135: goto label_37;
		case 136: goto label_37;
		case 137: goto label_37;
		case 138: goto label_37;
		case 139: goto label_37;
		case 140: goto label_37;
		case 141: goto label_37;
		case 142: goto label_37;
		case 143: goto label_37;
		case 144: goto label_37;
		case 145: goto label_37;
		case 146: goto label_37;
		case 147: goto label_37;
		case 148: goto label_37;
		case 149: goto label_37;
		case 150: goto label_37;
		case 151: goto label_37;
		case 152: goto label_121;
		case 153: goto label_121;
		case 154: goto label_122;
		case 155: goto label_123;
		case 156: goto label_37;
		case 157: goto label_37;
		case 158: goto label_37;
		case 159: goto label_37;
		case 160: goto label_37;
		case 161: goto label_124;
		case 162: goto label_37;
		case 163: goto label_37;
		case 164: goto label_121;
		case 165: goto label_125;
		case 166: goto label_126;
		case 167: goto label_37;
		case 168: goto label_127;
		default: goto label_37;
	}
	}
label_121:;
	{
	LINE_NUMBER(303);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[12].i));
	if (temp0 != (152)) goto label_128;
	}
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"get "_j))));
	goto label_130;
	}
label_128:;
	{
	LINE_NUMBER(305);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[12].i));
	if (temp0 != (153)) goto label_130;
	}
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"set "_j))));
	}
label_130:;
	{
	LINE_NUMBER(308);
	INST_IINC(12, 1);
	LINE_NUMBER(309);
	jint temp0 = (jint)SM_rhino_Decompiler_printSourceString_java_lang_String_int_boolean_java_lang_StringBuilder_R_int(ctx, (frame[0].o), ((frame[12].i) + (jint(1))), (jint(0)), (frame[7].o));
	frame[12].i = temp0;
	LINE_NUMBER(311);
	INST_IINC(12, 1);
	LINE_NUMBER(312);
	goto label_135;
	}
label_63:;
	{
	LINE_NUMBER(316);
	jint temp0 = (jint)SM_rhino_Decompiler_printSourceString_java_lang_String_int_boolean_java_lang_StringBuilder_R_int(ctx, (frame[0].o), ((frame[12].i) + (jint(1))), (jint(0)), (frame[7].o));
	frame[12].i = temp0;
	LINE_NUMBER(317);
	goto label_32;
	}
label_65:;
	{
	LINE_NUMBER(320);
	jint temp0 = (jint)SM_rhino_Decompiler_printSourceString_java_lang_String_int_boolean_java_lang_StringBuilder_R_int(ctx, (frame[0].o), ((frame[12].i) + (jint(1))), (jint(1)), (frame[7].o));
	frame[12].i = temp0;
	LINE_NUMBER(321);
	goto label_32;
	}
label_64:;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)SM_rhino_Decompiler_printSourceNumber_java_lang_String_int_java_lang_StringBuilder_R_int(ctx, (frame[0].o), ((frame[12].i) + (jint(1))), (frame[7].o));
	frame[12].i = temp0;
	LINE_NUMBER(325);
	goto label_32;
	}
label_69:;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	LINE_NUMBER(329);
	goto label_135;
	}
label_68:;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	LINE_NUMBER(333);
	goto label_135;
	}
label_66:;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	LINE_NUMBER(337);
	goto label_135;
	}
label_67:;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"this"_j))));
	LINE_NUMBER(341);
	goto label_135;
	}
label_105:;
	{
	LINE_NUMBER(344);
	INST_IINC(12, 1);
	LINE_NUMBER(345);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"function "_j))));
	LINE_NUMBER(346);
	goto label_135;
	}
label_127:;
	LINE_NUMBER(350);
	goto label_135;
label_85:;
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(354);
	goto label_135;
	}
label_81:;
	{
	LINE_NUMBER(357);
	INST_IINC(10, 1);
	LINE_NUMBER(358);
	jint temp0 = jint(1);
	jint temp1 = (jint)SM_rhino_Decompiler_getNext_java_lang_String_int_int_R_int(ctx, (frame[0].o), (frame[3].i), (frame[12].i));
	if (temp0 != temp1) goto label_147;
	}
	{
	LINE_NUMBER(359);
	frame[4].i = ((frame[4].i) + (frame[5].i));
	}
label_147:;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (123));
	LINE_NUMBER(361);
	goto label_135;
	}
label_82:;
	{
	LINE_NUMBER(364);
	INST_IINC(10, -1);
	LINE_NUMBER(369);
	if ((frame[8].i) == 0) goto label_151;
	}
	INST_ILOAD(10);
	if ((--sp)->i != 0) goto label_151;
	LINE_NUMBER(370);
	goto label_135;
label_151:;
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (125));
	LINE_NUMBER(373);
	jint temp0 = (jint)SM_rhino_Decompiler_getNext_java_lang_String_int_int_R_int(ctx, (frame[0].o), (frame[3].i), (frame[12].i));
	switch(temp0) {
		case 1: goto label_154;
		case 114: goto label_155;
		case 118: goto label_155;
		case 168: goto label_154;
		default: goto label_156;
	}
	}
label_154:;
	{
	LINE_NUMBER(376);
	frame[4].i = ((frame[4].i) - (frame[5].i));
	LINE_NUMBER(377);
	goto label_156;
	}
label_155:;
	{
	LINE_NUMBER(380);
	frame[4].i = ((frame[4].i) - (frame[5].i));
	LINE_NUMBER(381);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (32));
	}
label_156:;
	LINE_NUMBER(384);
	goto label_135;
label_83:;
	{
	LINE_NUMBER(387);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (40));
	LINE_NUMBER(388);
	goto label_135;
	}
label_84:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (41));
	LINE_NUMBER(392);
	jint temp0 = 86;
	jint temp1 = (jint)SM_rhino_Decompiler_getNext_java_lang_String_int_int_R_int(ctx, (frame[0].o), (frame[3].i), (frame[12].i));
	if (temp0 != temp1) goto label_135;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (32));
	goto label_135;
	}
label_79:;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (91));
	LINE_NUMBER(398);
	goto label_135;
	}
label_80:;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (93));
	LINE_NUMBER(402);
	goto label_135;
	}
label_36:;
	{
	LINE_NUMBER(405);
	if ((frame[9].i) == 0) goto label_164;
	}
	goto label_135;
label_164:;
	{
	LINE_NUMBER(406);
	frame[14].i = (jint(1));
	LINE_NUMBER(407);
	if ((frame[11].i) != 0) goto label_166;
	}
	{
	LINE_NUMBER(408);
	frame[11].i = (jint(1));
	LINE_NUMBER(409);
	if ((frame[8].i) == 0) goto label_166;
	}
	{
	LINE_NUMBER(413);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[7].o), (jint(0)));
	LINE_NUMBER(414);
	frame[4].i = ((frame[4].i) - (frame[5].i));
	LINE_NUMBER(415);
	frame[14].i = (jint(0));
	}
label_166:;
	{
	LINE_NUMBER(418);
	if ((frame[14].i) == 0) goto label_172;
	}
	{
	LINE_NUMBER(419);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (10));
	}
label_172:;
	{
	LINE_NUMBER(426);
	if (((frame[12].i) + (jint(1))) >= (frame[3].i)) goto label_135;
	}
	{
	LINE_NUMBER(427);
	frame[15].i = (jint(0));
	LINE_NUMBER(428);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[12].i) + (jint(1))));
	frame[16].i = temp0;
	LINE_NUMBER(429);
	if ((frame[16].i) == (116)) goto label_177;
	}
	{
	if ((frame[16].i) != (117)) goto label_178;
	}
label_177:;
	{
	LINE_NUMBER(431);
	frame[15].i = ((frame[5].i) - (frame[6].i));
	goto label_179;
	}
label_178:;
	{
	LINE_NUMBER(432);
	if ((frame[16].i) != (87)) goto label_180;
	}
	{
	LINE_NUMBER(433);
	frame[15].i = (frame[5].i);
	goto label_179;
	}
label_180:;
	{
	LINE_NUMBER(439);
	if ((frame[16].i) != (39)) goto label_179;
	}
	{
	LINE_NUMBER(440);
	jint temp0 = (jint)SM_rhino_Decompiler_getSourceStringEnd_java_lang_String_int_R_int(ctx, (frame[0].o), ((frame[12].i) + (jint(2))));
	frame[17].i = temp0;
	LINE_NUMBER(441);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[17].i));
	if (temp1 != (104)) goto label_179;
	}
	{
	LINE_NUMBER(442);
	frame[15].i = (frame[5].i);
	}
label_179:;
	{
	LINE_NUMBER(445);
	if ((frame[15].i) >= (frame[4].i)) goto label_185;
	}
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (32));
	LINE_NUMBER(445);
	INST_IINC(15, 1);
	goto label_179;
	}
label_185:;
	LINE_NUMBER(447);
	goto label_135;
label_104:;
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (46));
	LINE_NUMBER(452);
	goto label_135;
	}
label_60:;
	{
	LINE_NUMBER(455);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"new "_j))));
	LINE_NUMBER(456);
	goto label_135;
	}
label_61:;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"delete "_j))));
	LINE_NUMBER(460);
	goto label_135;
	}
label_106:;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"if "_j))));
	LINE_NUMBER(464);
	goto label_135;
	}
label_107:;
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"else "_j))));
	LINE_NUMBER(468);
	goto label_135;
	}
label_113:;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"for "_j))));
	LINE_NUMBER(472);
	goto label_135;
	}
label_73:;
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" in "_j))));
	LINE_NUMBER(476);
	goto label_135;
	}
label_117:;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"with "_j))));
	LINE_NUMBER(480);
	goto label_135;
	}
label_111:;
	{
	LINE_NUMBER(483);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"while "_j))));
	LINE_NUMBER(484);
	goto label_135;
	}
label_112:;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"do "_j))));
	LINE_NUMBER(488);
	goto label_135;
	}
label_77:;
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"try "_j))));
	LINE_NUMBER(492);
	goto label_135;
	}
label_118:;
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"catch "_j))));
	LINE_NUMBER(496);
	goto label_135;
	}
label_119:;
	{
	LINE_NUMBER(499);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"finally "_j))));
	LINE_NUMBER(500);
	goto label_135;
	}
label_72:;
	{
	LINE_NUMBER(503);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"throw "_j))));
	LINE_NUMBER(504);
	goto label_135;
	}
label_108:;
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"switch "_j))));
	LINE_NUMBER(508);
	goto label_135;
	}
label_114:;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"break"_j))));
	LINE_NUMBER(512);
	jint temp0 = 39;
	jint temp1 = (jint)SM_rhino_Decompiler_getNext_java_lang_String_int_int_R_int(ctx, (frame[0].o), (frame[3].i), (frame[12].i));
	if (temp0 != temp1) goto label_135;
	}
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (32));
	goto label_135;
	}
label_115:;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"continue"_j))));
	LINE_NUMBER(518);
	jint temp0 = 39;
	jint temp1 = (jint)SM_rhino_Decompiler_getNext_java_lang_String_int_int_R_int(ctx, (frame[0].o), (frame[3].i), (frame[12].i));
	if (temp0 != temp1) goto label_135;
	}
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (32));
	goto label_135;
	}
label_109:;
	{
	LINE_NUMBER(523);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"case "_j))));
	LINE_NUMBER(524);
	goto label_135;
	}
label_110:;
	{
	LINE_NUMBER(527);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"default"_j))));
	LINE_NUMBER(528);
	goto label_135;
	}
label_38:;
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"return"_j))));
	LINE_NUMBER(532);
	jint temp0 = 83;
	jint temp1 = (jint)SM_rhino_Decompiler_getNext_java_lang_String_int_int_R_int(ctx, (frame[0].o), (frame[3].i), (frame[12].i));
	if (temp0 == temp1) goto label_135;
	}
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (32));
	goto label_135;
	}
label_116:;
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"var "_j))));
	LINE_NUMBER(538);
	goto label_135;
	}
label_122:;
	{
	LINE_NUMBER(541);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"let "_j))));
	LINE_NUMBER(542);
	goto label_135;
	}
label_78:;
	{
	LINE_NUMBER(545);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (59));
	LINE_NUMBER(546);
	jint temp0 = jint(1);
	jint temp1 = (jint)SM_rhino_Decompiler_getNext_java_lang_String_int_int_R_int(ctx, (frame[0].o), (frame[3].i), (frame[12].i));
	if (temp0 == temp1) goto label_135;
	}
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (32));
	goto label_135;
	}
label_86:;
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" = "_j))));
	LINE_NUMBER(554);
	goto label_135;
	}
label_93:;
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" += "_j))));
	LINE_NUMBER(558);
	goto label_135;
	}
label_94:;
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" -= "_j))));
	LINE_NUMBER(562);
	goto label_135;
	}
label_95:;
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" *= "_j))));
	LINE_NUMBER(566);
	goto label_135;
	}
label_96:;
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" /= "_j))));
	LINE_NUMBER(570);
	goto label_135;
	}
label_97:;
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" %= "_j))));
	LINE_NUMBER(574);
	goto label_135;
	}
label_87:;
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" |= "_j))));
	LINE_NUMBER(578);
	goto label_135;
	}
label_88:;
	{
	LINE_NUMBER(581);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" ^= "_j))));
	LINE_NUMBER(582);
	goto label_135;
	}
label_89:;
	{
	LINE_NUMBER(585);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" &= "_j))));
	LINE_NUMBER(586);
	goto label_135;
	}
label_90:;
	{
	LINE_NUMBER(589);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" <<= "_j))));
	LINE_NUMBER(590);
	goto label_135;
	}
label_91:;
	{
	LINE_NUMBER(593);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" >>= "_j))));
	LINE_NUMBER(594);
	goto label_135;
	}
label_92:;
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" >>>= "_j))));
	LINE_NUMBER(598);
	goto label_135;
	}
label_98:;
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" ? "_j))));
	LINE_NUMBER(602);
	goto label_135;
	}
label_75:;
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8": "_j))));
	LINE_NUMBER(611);
	goto label_135;
	}
label_99:;
	{
	LINE_NUMBER(614);
	jint temp0 = jint(1);
	jint temp1 = (jint)SM_rhino_Decompiler_getNext_java_lang_String_int_int_R_int(ctx, (frame[0].o), (frame[3].i), (frame[12].i));
	if (temp0 != temp1) goto label_229;
	}
	{
	LINE_NUMBER(616);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (58));
	goto label_135;
	}
label_229:;
	{
	LINE_NUMBER(619);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" : "_j))));
	LINE_NUMBER(620);
	goto label_135;
	}
label_100:;
	{
	LINE_NUMBER(623);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" || "_j))));
	LINE_NUMBER(624);
	goto label_135;
	}
label_101:;
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" && "_j))));
	LINE_NUMBER(628);
	goto label_135;
	}
label_39:;
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" | "_j))));
	LINE_NUMBER(632);
	goto label_135;
	}
label_40:;
	{
	LINE_NUMBER(635);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" ^ "_j))));
	LINE_NUMBER(636);
	goto label_135;
	}
label_41:;
	{
	LINE_NUMBER(639);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" & "_j))));
	LINE_NUMBER(640);
	goto label_135;
	}
label_70:;
	{
	LINE_NUMBER(643);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" === "_j))));
	LINE_NUMBER(644);
	goto label_135;
	}
label_71:;
	{
	LINE_NUMBER(647);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" !== "_j))));
	LINE_NUMBER(648);
	goto label_135;
	}
label_42:;
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" == "_j))));
	LINE_NUMBER(652);
	goto label_135;
	}
label_43:;
	{
	LINE_NUMBER(655);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" != "_j))));
	LINE_NUMBER(656);
	goto label_135;
	}
label_45:;
	{
	LINE_NUMBER(659);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" <= "_j))));
	LINE_NUMBER(660);
	goto label_135;
	}
label_44:;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" < "_j))));
	LINE_NUMBER(664);
	goto label_135;
	}
label_47:;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" >= "_j))));
	LINE_NUMBER(668);
	goto label_135;
	}
label_46:;
	{
	LINE_NUMBER(671);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" > "_j))));
	LINE_NUMBER(672);
	goto label_135;
	}
label_74:;
	{
	LINE_NUMBER(675);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" instanceof "_j))));
	LINE_NUMBER(676);
	goto label_135;
	}
label_48:;
	{
	LINE_NUMBER(679);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" << "_j))));
	LINE_NUMBER(680);
	goto label_135;
	}
label_49:;
	{
	LINE_NUMBER(683);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" >> "_j))));
	LINE_NUMBER(684);
	goto label_135;
	}
label_50:;
	{
	LINE_NUMBER(687);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" >>> "_j))));
	LINE_NUMBER(688);
	goto label_135;
	}
label_62:;
	{
	LINE_NUMBER(691);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"typeof "_j))));
	LINE_NUMBER(692);
	goto label_135;
	}
label_120:;
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"void "_j))));
	LINE_NUMBER(696);
	goto label_135;
	}
label_123:;
	{
	LINE_NUMBER(699);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"const "_j))));
	LINE_NUMBER(700);
	goto label_135;
	}
label_76:;
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"yield "_j))));
	LINE_NUMBER(704);
	goto label_135;
	}
label_126:;
	{
	LINE_NUMBER(707);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"yield *"_j))));
	LINE_NUMBER(708);
	goto label_135;
	}
label_56:;
	{
	LINE_NUMBER(711);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (33));
	LINE_NUMBER(712);
	goto label_135;
	}
label_57:;
	{
	LINE_NUMBER(715);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (126));
	LINE_NUMBER(716);
	goto label_135;
	}
label_58:;
	{
	LINE_NUMBER(719);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (43));
	LINE_NUMBER(720);
	goto label_135;
	}
label_59:;
	{
	LINE_NUMBER(723);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (45));
	LINE_NUMBER(724);
	goto label_135;
	}
label_102:;
	{
	LINE_NUMBER(727);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"++"_j))));
	LINE_NUMBER(728);
	goto label_135;
	}
label_103:;
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"--"_j))));
	LINE_NUMBER(732);
	goto label_135;
	}
label_51:;
	{
	LINE_NUMBER(735);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" + "_j))));
	LINE_NUMBER(736);
	goto label_135;
	}
label_52:;
	{
	LINE_NUMBER(739);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" - "_j))));
	LINE_NUMBER(740);
	goto label_135;
	}
label_53:;
	{
	LINE_NUMBER(743);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" * "_j))));
	LINE_NUMBER(744);
	goto label_135;
	}
label_54:;
	{
	LINE_NUMBER(747);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" / "_j))));
	LINE_NUMBER(748);
	goto label_135;
	}
label_55:;
	{
	LINE_NUMBER(751);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" % "_j))));
	LINE_NUMBER(752);
	goto label_135;
	}
label_124:;
	{
	LINE_NUMBER(755);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"debugger;\n"_j))));
	LINE_NUMBER(756);
	goto label_135;
	}
label_125:;
	{
	LINE_NUMBER(759);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8" => "_j))));
	LINE_NUMBER(760);
	goto label_135;
	}
label_37:;
	{
	LINE_NUMBER(764);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Token: "_j))));
	sp[2].o = frame[0].o;
	jint temp0 = frame[12].i;
	LINE_NUMBER(765);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[2].o, temp0);
	sp[2].o = (jobject)SM_rhino_Token_name_int_R_java_lang_String(ctx, temp1);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_135:;
	{
	LINE_NUMBER(767);
	INST_IINC(12, 1);
	goto label_32;
	}
label_34:;
	{
	LINE_NUMBER(770);
	if ((frame[9].i) != 0) goto label_268;
	}
	{
	LINE_NUMBER(772);
	if ((frame[8].i) != 0) goto label_270;
	}
	{
	LINE_NUMBER(773);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (10));
	goto label_270;
	}
label_268:;
	{
	LINE_NUMBER(775);
	if ((frame[13].i) != (jint(2))) goto label_270;
	}
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[7].o), (41));
	}
label_270:;
	{
	LINE_NUMBER(780);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[7].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_rhino_Decompiler_getNext_java_lang_String_int_int_R_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:getNext", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Decompiler(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(784);
	if (((frame[2].i) + (jint(1))) >= (frame[1].i)) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[2].i) + (jint(1))));
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_Decompiler_getSourceStringEnd_java_lang_String_int_R_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:getSourceStringEnd", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Decompiler(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(788);
	jint temp0 = (jint)SM_rhino_Decompiler_printSourceString_java_lang_String_int_boolean_java_lang_StringBuilder_R_int(ctx, (frame[0].o), (frame[1].i), (jint(0)), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_rhino_Decompiler_printSourceString_java_lang_String_int_boolean_java_lang_StringBuilder_R_int(jcontext ctx, jobject param0, jint param1, jbool param2, jobject param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:printSourceString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Decompiler(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(794);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = temp0;
	LINE_NUMBER(795);
	INST_IINC(1, 1);
	LINE_NUMBER(796);
	if (((jint(32768)) & (frame[4].i)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(797);
	jint temp0 = ((32767) & (frame[4].i)) << (16);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[4].i = (temp0 | temp1);
	LINE_NUMBER(798);
	INST_IINC(1, 1);
	}
label_3:;
	{
	LINE_NUMBER(800);
	if ((frame[3].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(801);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[1].i), ((frame[1].i) + (frame[4].i)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(802);
	if ((frame[2].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[5].o));
	goto label_6;
	}
label_9:;
	{
	LINE_NUMBER(805);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (34));
	LINE_NUMBER(806);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_escapeString_java_lang_String_R_java_lang_String(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(807);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (34));
	}
label_6:;
	{
	LINE_NUMBER(810);
	popStackFrame(ctx);
	return ((frame[1].i) + (frame[4].i));
	}

	popStackFrame(ctx);
}

jint SM_rhino_Decompiler_printSourceNumber_java_lang_String_int_java_lang_StringBuilder_R_int(jcontext ctx, jobject param0, jint param1, jobject param2) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Decompiler:printSourceNumber", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Decompiler(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(815);
	frame[3].d = (jdouble(0));
	LINE_NUMBER(816);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[5].i = temp0;
	LINE_NUMBER(817);
	INST_IINC(1, 1);
	LINE_NUMBER(818);
	if ((frame[5].i) != (83)) goto label_4;
	}
	{
	LINE_NUMBER(819);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(820);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[6].i = temp0;
	LINE_NUMBER(821);
	frame[3].d = (jdouble((frame[6].i)));
	}
label_6:;
	{
	LINE_NUMBER(823);
	INST_IINC(1, 1);
	goto label_9;
	}
label_4:;
	{
	LINE_NUMBER(824);
	if ((frame[5].i) == (74)) goto label_10;
	}
	{
	if ((frame[5].i) != (68)) goto label_11;
	}
label_10:;
	{
	LINE_NUMBER(825);
	if ((frame[2].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(827);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[6].l = ((jlong(temp0)) << (48));
	LINE_NUMBER(828);
	jlong temp1 = frame[6].l;
	jint temp2 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	frame[6].l = (temp1 | ((jlong(temp2)) << (32)));
	LINE_NUMBER(829);
	jlong temp3 = frame[6].l;
	jint temp4 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[1].i) + (jint(2))));
	frame[6].l = (temp3 | ((jlong(temp4)) << (16)));
	LINE_NUMBER(830);
	jlong temp5 = frame[6].l;
	jint temp6 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[1].i) + (jint(3))));
	frame[6].l = (temp5 | (jlong(temp6)));
	LINE_NUMBER(831);
	if ((frame[5].i) != (74)) goto label_18;
	}
	{
	LINE_NUMBER(832);
	frame[3].d = (jdouble((frame[6].l)));
	goto label_12;
	}
label_18:;
	{
	LINE_NUMBER(834);
	jdouble temp0 = (jdouble)SM_java_lang_Double_longBitsToDouble_long_R_double(ctx, (frame[6].l));
	frame[3].d = temp0;
	}
label_12:;
	{
	LINE_NUMBER(837);
	INST_IINC(1, 4);
	goto label_9;
	}
label_11:;
	{
	LINE_NUMBER(840);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(842);
	if ((frame[2].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(843);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_rhino_ScriptRuntime_numberToString_double_int_R_java_lang_String(ctx, (frame[3].d), (10));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_20:;
	{
	LINE_NUMBER(845);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Decompiler[] {
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
	(void *) M_rhino_Decompiler_getEncodedSource_R_java_lang_String,
	(void *) M_rhino_Decompiler_getCurrentOffset_R_int,
	(void *) M_rhino_Decompiler_markFunctionStart_int_R_int,
	(void *) M_rhino_Decompiler_markFunctionEnd_int_R_int,
	(void *) M_rhino_Decompiler_addToken_int,
	(void *) M_rhino_Decompiler_addEOL_int,
	(void *) M_rhino_Decompiler_addName_java_lang_String,
	(void *) M_rhino_Decompiler_addString_java_lang_String,
	(void *) M_rhino_Decompiler_addRegexp_java_lang_String_java_lang_String,
	(void *) M_rhino_Decompiler_addNumber_double,
	(void *) M_rhino_Decompiler_appendString_java_lang_String,
	(void *) M_rhino_Decompiler_append_char,
	(void *) M_rhino_Decompiler_increaseSourceCapacity_int,
	(void *) M_rhino_Decompiler_sourceToString_int_R_java_lang_String,
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
	{ "getEncodedSource", "()Ljava/lang/String;" },
	{ "getCurrentOffset", "()I" },
	{ "markFunctionStart", "(I)I" },
	{ "markFunctionEnd", "(I)I" },
	{ "addToken", "(I)V" },
	{ "addEOL", "(I)V" },
	{ "addName", "(Ljava/lang/String;)V" },
	{ "addString", "(Ljava/lang/String;)V" },
	{ "addRegexp", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "addNumber", "(D)V" },
	{ "appendString", "(Ljava/lang/String;)V" },
	{ "append", "(C)V" },
	{ "increaseSourceCapacity", "(I)V" },
	{ "sourceToString", "(I)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "ONLY_BODY_FLAG", &class_int, (intptr_t) &SF_rhino_Decompiler_ONLY_BODY_FLAG, "I", 25 },
	{ "TO_SOURCE_FLAG", &class_int, (intptr_t) &SF_rhino_Decompiler_TO_SOURCE_FLAG, "I", 25 },
	{ "INITIAL_INDENT_PROP", &class_int, (intptr_t) &SF_rhino_Decompiler_INITIAL_INDENT_PROP, "I", 25 },
	{ "INDENT_GAP_PROP", &class_int, (intptr_t) &SF_rhino_Decompiler_INDENT_GAP_PROP, "I", 25 },
	{ "CASE_GAP_PROP", &class_int, (intptr_t) &SF_rhino_Decompiler_CASE_GAP_PROP, "I", 25 },
	{ "FUNCTION_END", &class_int, (intptr_t) &SF_rhino_Decompiler_FUNCTION_END, "I", 26 },
	{ "sourceBuffer", getArrayClass(&class_char, 1), offsetof(rhino_Decompiler, F_sourceBuffer), "[C", 2 },
	{ "sourceTop", &class_int, offsetof(rhino_Decompiler, F_sourceTop), "I", 2 },
	{ "printSource", &class_boolean, (intptr_t) &SF_rhino_Decompiler_printSource, "Z", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Decompiler, 0, "()V", 1 },
	{ "getEncodedSource", (intptr_t) M_rhino_Decompiler_getEncodedSource_R_java_lang_String, VTABLE_rhino_Decompiler_getEncodedSource_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "getCurrentOffset", (intptr_t) M_rhino_Decompiler_getCurrentOffset_R_int, VTABLE_rhino_Decompiler_getCurrentOffset_R_int, "()I", 0 },
	{ "markFunctionStart", (intptr_t) M_rhino_Decompiler_markFunctionStart_int_R_int, VTABLE_rhino_Decompiler_markFunctionStart_int_R_int, "(I)I", 0 },
	{ "markFunctionEnd", (intptr_t) M_rhino_Decompiler_markFunctionEnd_int_R_int, VTABLE_rhino_Decompiler_markFunctionEnd_int_R_int, "(I)I", 0 },
	{ "addToken", (intptr_t) M_rhino_Decompiler_addToken_int, VTABLE_rhino_Decompiler_addToken_int, "(I)V", 0 },
	{ "addEOL", (intptr_t) M_rhino_Decompiler_addEOL_int, VTABLE_rhino_Decompiler_addEOL_int, "(I)V", 0 },
	{ "addName", (intptr_t) M_rhino_Decompiler_addName_java_lang_String, VTABLE_rhino_Decompiler_addName_java_lang_String, "(Ljava/lang/String;)V", 0 },
	{ "addString", (intptr_t) M_rhino_Decompiler_addString_java_lang_String, VTABLE_rhino_Decompiler_addString_java_lang_String, "(Ljava/lang/String;)V", 0 },
	{ "addRegexp", (intptr_t) M_rhino_Decompiler_addRegexp_java_lang_String_java_lang_String, VTABLE_rhino_Decompiler_addRegexp_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 0 },
	{ "addNumber", (intptr_t) M_rhino_Decompiler_addNumber_double, VTABLE_rhino_Decompiler_addNumber_double, "(D)V", 0 },
	{ "appendString", (intptr_t) M_rhino_Decompiler_appendString_java_lang_String, VTABLE_rhino_Decompiler_appendString_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "append", (intptr_t) M_rhino_Decompiler_append_char, VTABLE_rhino_Decompiler_append_char, "(C)V", 2 },
	{ "increaseSourceCapacity", (intptr_t) M_rhino_Decompiler_increaseSourceCapacity_int, VTABLE_rhino_Decompiler_increaseSourceCapacity_int, "(I)V", 2 },
	{ "sourceToString", (intptr_t) M_rhino_Decompiler_sourceToString_int_R_java_lang_String, VTABLE_rhino_Decompiler_sourceToString_int_R_java_lang_String, "(I)Ljava/lang/String;", 2 },
	{ "decompile", (intptr_t) SM_rhino_Decompiler_decompile_java_lang_String_int_rhino_UintMap_R_java_lang_String, 0, "(Ljava/lang/String;ILrhino/UintMap;)Ljava/lang/String;", 9 },
	{ "getNext", (intptr_t) SM_rhino_Decompiler_getNext_java_lang_String_int_int_R_int, 0, "(Ljava/lang/String;II)I", 10 },
	{ "getSourceStringEnd", (intptr_t) SM_rhino_Decompiler_getSourceStringEnd_java_lang_String_int_R_int, 0, "(Ljava/lang/String;I)I", 10 },
	{ "printSourceString", (intptr_t) SM_rhino_Decompiler_printSourceString_java_lang_String_int_boolean_java_lang_StringBuilder_R_int, 0, "(Ljava/lang/String;IZLjava/lang/StringBuilder;)I", 10 },
	{ "printSourceNumber", (intptr_t) SM_rhino_Decompiler_printSourceNumber_java_lang_String_int_java_lang_StringBuilder_R_int, 0, "(Ljava/lang/String;ILjava/lang/StringBuilder;)I", 10 },
};

Class class_rhino_Decompiler{
		.nativeName = (intptr_t) "rhino/Decompiler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Decompiler),
		.classVtable = (intptr_t) vtable_rhino_Decompiler,
		.staticInitializer = (intptr_t) clinit_rhino_Decompiler,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Decompiler,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Decompiler = registerClass(&class_rhino_Decompiler);

}
