#include "rhino/TokenStream.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "rhino/TokenStream.h"
#include "rhino/Token_CommentType.h"
#include "java/lang/Object.h"
#include "rhino/Kit.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/AssertionError.h"
#include "rhino/CompilerEnvirons.h"
#include "rhino/ObjToIntMap.h"
#include "rhino/Parser.h"
#include "java/io/IOException.h"
#include "java/lang/RuntimeException.h"
#include "java/io/Reader.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/lang/System.h"

extern "C" {

jint SF_rhino_TokenStream_EOF_CHAR;
jchar SF_rhino_TokenStream_BYTE_ORDER_MARK;
jbool SF_rhino_TokenStream_$assertionsDisabled;

void mark_rhino_TokenStream(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_TokenStream *) object;
	if (self->F_regExpFlags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regExpFlags)->clazz)->markFunction)((jobject) self->F_regExpFlags, mark, depth + 1);
	if (self->F_string)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_string)->clazz)->markFunction)((jobject) self->F_string, mark, depth + 1);
	if (self->F_stringBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stringBuffer)->clazz)->markFunction)((jobject) self->F_stringBuffer, mark, depth + 1);
	if (self->F_allStrings)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allStrings)->clazz)->markFunction)((jobject) self->F_allStrings, mark, depth + 1);
	if (self->F_ungetBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ungetBuffer)->clazz)->markFunction)((jobject) self->F_ungetBuffer, mark, depth + 1);
	if (self->F_sourceString)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sourceString)->clazz)->markFunction)((jobject) self->F_sourceString, mark, depth + 1);
	if (self->F_sourceReader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sourceReader)->clazz)->markFunction)((jobject) self->F_sourceReader, mark, depth + 1);
	if (self->F_sourceBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sourceBuffer)->clazz)->markFunction)((jobject) self->F_sourceBuffer, mark, depth + 1);
	if (self->F_commentType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_commentType)->clazz)->markFunction)((jobject) self->F_commentType, mark, depth + 1);
	if (self->F_parser)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parser)->clazz)->markFunction)((jobject) self->F_parser, mark, depth + 1);
	if (self->F_commentPrefix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_commentPrefix)->clazz)->markFunction)((jobject) self->F_commentPrefix, mark, depth + 1);
}

void init_rhino_TokenStream_rhino_Parser_java_io_Reader_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TokenStream(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(27);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2195);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_string = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(2205);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (128));
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_stringBuffer = (jref) sp[1].o;
	LINE_NUMBER(2207);
	sp[0].o = frame[0].o;
	clinit_rhino_ObjToIntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ObjToIntMap);
	init_rhino_ObjToIntMap_int(ctx, sp[1].o, (50));
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_allStrings = (jref) sp[1].o;
	LINE_NUMBER(2210);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_ungetBuffer = (jref) sp[1].o;
	LINE_NUMBER(2213);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_hitEOF = (jint(0));
	LINE_NUMBER(2215);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineStart = (jint(0));
	LINE_NUMBER(2216);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineEndChar = (jint(-1));
	LINE_NUMBER(2247);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_commentPrefix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(2248);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_commentCursor = (jint(-1));
	LINE_NUMBER(28);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser = (jref) (frame[1].o);
	LINE_NUMBER(29);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineno = (frame[4].i);
	LINE_NUMBER(30);
	if ((frame[2].o) == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(31);
	if ((frame[3].o) == nullptr) goto label_15;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_15:;
	{
	LINE_NUMBER(32);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceReader = (jref) (frame[2].o);
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_char, (512));
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_sourceBuffer = (jref) sp[1].o;
	LINE_NUMBER(34);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceEnd = (jint(0));
	goto label_18;
	}
label_13:;
	{
	LINE_NUMBER(36);
	if ((frame[3].o) != nullptr) goto label_19;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_19:;
	{
	LINE_NUMBER(37);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceString = (jref) (frame[3].o);
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[3].o));
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_sourceEnd = temp0;
	}
label_18:;
	{
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = jint(0);
	((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_cursor = temp0;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_sourceCursor = temp0;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_TokenStream_tokenToString_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:tokenToString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_TokenStream_isKeyword_java_lang_String_int_boolean_R_boolean(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:isKeyword", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TokenStream(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(67);
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_rhino_TokenStream_stringToKeyword_java_lang_String_int_boolean_R_int(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	if (temp0 == temp1) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint SM_rhino_TokenStream_stringToKeyword_java_lang_String_int_boolean_R_int(jcontext ctx, jobject param0, jint param1, jbool param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:stringToKeyword", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TokenStream(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(71);
	if ((frame[1].i) >= (200)) goto label_1;
	}
	{
	LINE_NUMBER(72);
	jint temp0 = (jint)SM_rhino_TokenStream_stringToKeywordForJS_java_lang_String_R_int(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(74);
	jint temp0 = (jint)SM_rhino_TokenStream_stringToKeywordForES_java_lang_String_boolean_R_int(ctx, (frame[0].o), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_rhino_TokenStream_stringToKeywordForJS_java_lang_String_R_int(jcontext ctx, jobject param0) {
	jtype frame[68];
	auto stack = &frame[66];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:stringToKeywordForJS", 68 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TokenStream(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(84);
	frame[1].i = (121);
	LINE_NUMBER(85);
	frame[2].i = (116);
	LINE_NUMBER(86);
	frame[3].i = (122);
	LINE_NUMBER(87);
	frame[4].i = (117);
	LINE_NUMBER(88);
	frame[5].i = (31);
	LINE_NUMBER(89);
	frame[6].i = (119);
	LINE_NUMBER(90);
	frame[7].i = (114);
	LINE_NUMBER(91);
	frame[8].i = (128);
	LINE_NUMBER(92);
	frame[9].i = (44);
	LINE_NUMBER(93);
	frame[10].i = (120);
	LINE_NUMBER(94);
	frame[11].i = (110);
	LINE_NUMBER(95);
	frame[12].i = (113);
	LINE_NUMBER(96);
	frame[13].i = (52);
	LINE_NUMBER(97);
	frame[14].i = (154);
	LINE_NUMBER(98);
	frame[15].i = (30);
	LINE_NUMBER(99);
	frame[16].i = (42);
	LINE_NUMBER(100);
	frame[17].i = (jint(4));
	LINE_NUMBER(101);
	frame[18].i = (115);
	LINE_NUMBER(102);
	frame[19].i = (43);
	LINE_NUMBER(103);
	frame[20].i = (45);
	LINE_NUMBER(104);
	frame[21].i = (32);
	LINE_NUMBER(105);
	frame[22].i = (123);
	LINE_NUMBER(106);
	frame[23].i = (127);
	LINE_NUMBER(107);
	frame[24].i = (118);
	LINE_NUMBER(108);
	frame[25].i = (124);
	LINE_NUMBER(109);
	frame[26].i = (73);
	LINE_NUMBER(112);
	frame[27].i = (128);
	LINE_NUMBER(113);
	frame[28].i = (128);
	LINE_NUMBER(114);
	frame[29].i = (128);
	LINE_NUMBER(115);
	frame[30].i = (125);
	LINE_NUMBER(116);
	frame[31].i = (128);
	LINE_NUMBER(117);
	frame[32].i = (128);
	LINE_NUMBER(118);
	frame[33].i = (155);
	LINE_NUMBER(119);
	frame[34].i = (161);
	LINE_NUMBER(120);
	frame[35].i = (128);
	LINE_NUMBER(121);
	frame[36].i = (128);
	LINE_NUMBER(122);
	frame[37].i = (128);
	LINE_NUMBER(123);
	frame[38].i = (128);
	LINE_NUMBER(124);
	frame[39].i = (126);
	LINE_NUMBER(125);
	frame[40].i = (128);
	LINE_NUMBER(126);
	frame[41].i = (128);
	LINE_NUMBER(127);
	frame[42].i = (128);
	LINE_NUMBER(128);
	frame[43].i = (128);
	LINE_NUMBER(129);
	frame[44].i = (53);
	LINE_NUMBER(130);
	frame[45].i = (128);
	LINE_NUMBER(131);
	frame[46].i = (128);
	LINE_NUMBER(132);
	frame[47].i = (128);
	LINE_NUMBER(133);
	frame[48].i = (128);
	LINE_NUMBER(134);
	frame[49].i = (128);
	LINE_NUMBER(135);
	frame[50].i = (128);
	LINE_NUMBER(136);
	frame[51].i = (128);
	LINE_NUMBER(137);
	frame[52].i = (128);
	LINE_NUMBER(138);
	frame[53].i = (128);
	LINE_NUMBER(139);
	frame[54].i = (128);
	LINE_NUMBER(140);
	frame[55].i = (128);
	LINE_NUMBER(141);
	frame[56].i = (128);
	LINE_NUMBER(142);
	frame[57].i = (50);
	LINE_NUMBER(143);
	frame[58].i = (128);
	LINE_NUMBER(144);
	frame[59].i = (128);
	LINE_NUMBER(145);
	frame[60].i = (82);
	LINE_NUMBER(146);
	frame[61].i = (128);
	LINE_NUMBER(149);
	frame[63].o = (frame[0].o);
	LINE_NUMBER(153);
	frame[62].i = (jint(0));
	LINE_NUMBER(154);
	frame[64].o = (jobject(nullptr));
	LINE_NUMBER(157);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[63].o));
	switch(temp0) {
		case 2: goto label_65;
		case 3: goto label_66;
		case 4: goto label_67;
		case 5: goto label_68;
		case 6: goto label_69;
		case 7: goto label_70;
		case 8: goto label_71;
		case 9: goto label_72;
		case 10: goto label_73;
		case 11: goto label_74;
		case 12: goto label_75;
		default: goto label_74;
	}
	}
label_65:;
	{
	LINE_NUMBER(159);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	frame[65].i = temp0;
	LINE_NUMBER(160);
	if ((frame[65].i) != (102)) goto label_77;
	}
	{
	LINE_NUMBER(161);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(0)));
	if (temp0 != (105)) goto label_74;
	}
	{
	LINE_NUMBER(162);
	frame[62].i = (113);
	LINE_NUMBER(163);
	goto label_81;
	}
label_77:;
	{
	LINE_NUMBER(165);
	if ((frame[65].i) != (110)) goto label_82;
	}
	{
	LINE_NUMBER(166);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(0)));
	if (temp0 != (105)) goto label_74;
	}
	{
	LINE_NUMBER(167);
	frame[62].i = (52);
	LINE_NUMBER(168);
	goto label_81;
	}
label_82:;
	{
	LINE_NUMBER(170);
	if ((frame[65].i) != (111)) goto label_74;
	}
	{
	LINE_NUMBER(171);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(0)));
	if (temp0 != (100)) goto label_74;
	}
	{
	LINE_NUMBER(172);
	frame[62].i = (119);
	LINE_NUMBER(173);
	goto label_81;
	}
label_66:;
	{
	LINE_NUMBER(178);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(0)));
	switch(temp0) {
		case 102: goto label_89;
		case 103: goto label_90;
		case 104: goto label_90;
		case 105: goto label_91;
		case 106: goto label_90;
		case 107: goto label_90;
		case 108: goto label_92;
		case 109: goto label_90;
		case 110: goto label_93;
		case 111: goto label_90;
		case 112: goto label_90;
		case 113: goto label_90;
		case 114: goto label_90;
		case 115: goto label_90;
		case 116: goto label_94;
		case 117: goto label_90;
		case 118: goto label_95;
		default: goto label_90;
	}
	}
label_89:;
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(2)));
	if (temp0 != (114)) goto label_74;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	if (temp0 != (111)) goto label_74;
	}
	{
	LINE_NUMBER(181);
	frame[62].i = (120);
	LINE_NUMBER(182);
	goto label_81;
	}
label_91:;
	{
	LINE_NUMBER(186);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(2)));
	if (temp0 != (116)) goto label_74;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	if (temp0 != (110)) goto label_74;
	}
	{
	LINE_NUMBER(187);
	frame[62].i = (128);
	LINE_NUMBER(188);
	goto label_81;
	}
label_92:;
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(2)));
	if (temp0 != (116)) goto label_74;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	if (temp0 != (101)) goto label_74;
	}
	{
	LINE_NUMBER(193);
	frame[62].i = (154);
	LINE_NUMBER(194);
	goto label_81;
	}
label_93:;
	{
	LINE_NUMBER(198);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(2)));
	if (temp0 != (119)) goto label_74;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	if (temp0 != (101)) goto label_74;
	}
	{
	LINE_NUMBER(199);
	frame[62].i = (30);
	LINE_NUMBER(200);
	goto label_81;
	}
label_94:;
	{
	LINE_NUMBER(204);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(2)));
	if (temp0 != (121)) goto label_74;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	if (temp0 != (114)) goto label_74;
	}
	{
	LINE_NUMBER(205);
	frame[62].i = (82);
	LINE_NUMBER(206);
	goto label_81;
	}
label_95:;
	{
	LINE_NUMBER(210);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(2)));
	if (temp0 != (114)) goto label_74;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	if (temp0 != (97)) goto label_74;
	}
	{
	LINE_NUMBER(211);
	frame[62].i = (123);
	LINE_NUMBER(212);
	goto label_81;
	}
label_90:;
	LINE_NUMBER(216);
	goto label_74;
label_67:;
	{
	LINE_NUMBER(218);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(0)));
	switch(temp0) {
		case 98: goto label_108;
		case 99: goto label_109;
		case 100: goto label_110;
		case 101: goto label_111;
		case 102: goto label_110;
		case 103: goto label_112;
		case 104: goto label_110;
		case 105: goto label_110;
		case 106: goto label_110;
		case 107: goto label_110;
		case 108: goto label_113;
		case 109: goto label_110;
		case 110: goto label_114;
		case 111: goto label_110;
		case 112: goto label_110;
		case 113: goto label_110;
		case 114: goto label_110;
		case 115: goto label_110;
		case 116: goto label_115;
		case 117: goto label_110;
		case 118: goto label_116;
		case 119: goto label_117;
		default: goto label_110;
	}
	}
label_108:;
	{
	LINE_NUMBER(220);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"byte"_j)));
	LINE_NUMBER(221);
	frame[62].i = (128);
	LINE_NUMBER(222);
	goto label_74;
	}
label_109:;
	{
	LINE_NUMBER(224);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(3)));
	frame[65].i = temp0;
	LINE_NUMBER(225);
	if ((frame[65].i) != (101)) goto label_121;
	}
	{
	LINE_NUMBER(226);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(2)));
	if (temp0 != (115)) goto label_74;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	if (temp0 != (97)) goto label_74;
	}
	{
	LINE_NUMBER(227);
	frame[62].i = (116);
	LINE_NUMBER(228);
	goto label_81;
	}
label_121:;
	{
	LINE_NUMBER(230);
	if ((frame[65].i) != (114)) goto label_74;
	}
	{
	LINE_NUMBER(231);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(2)));
	if (temp0 != (97)) goto label_74;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	if (temp0 != (104)) goto label_74;
	}
	{
	LINE_NUMBER(232);
	frame[62].i = (128);
	LINE_NUMBER(233);
	goto label_81;
	}
label_111:;
	{
	LINE_NUMBER(238);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(3)));
	frame[65].i = temp0;
	LINE_NUMBER(239);
	if ((frame[65].i) != (101)) goto label_129;
	}
	{
	LINE_NUMBER(240);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(2)));
	if (temp0 != (115)) goto label_74;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	if (temp0 != (108)) goto label_74;
	}
	{
	LINE_NUMBER(241);
	frame[62].i = (114);
	LINE_NUMBER(242);
	goto label_81;
	}
label_129:;
	{
	LINE_NUMBER(244);
	if ((frame[65].i) != (109)) goto label_74;
	}
	{
	LINE_NUMBER(245);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(2)));
	if (temp0 != (117)) goto label_74;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	if (temp0 != (110)) goto label_74;
	}
	{
	LINE_NUMBER(246);
	frame[62].i = (128);
	LINE_NUMBER(247);
	goto label_81;
	}
label_112:;
	{
	LINE_NUMBER(252);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"goto"_j)));
	LINE_NUMBER(253);
	frame[62].i = (128);
	LINE_NUMBER(254);
	goto label_74;
	}
label_113:;
	{
	LINE_NUMBER(256);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"long"_j)));
	LINE_NUMBER(257);
	frame[62].i = (128);
	LINE_NUMBER(258);
	goto label_74;
	}
label_114:;
	{
	LINE_NUMBER(260);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"null"_j)));
	LINE_NUMBER(261);
	frame[62].i = (42);
	LINE_NUMBER(262);
	goto label_74;
	}
label_115:;
	{
	LINE_NUMBER(264);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(3)));
	frame[65].i = temp0;
	LINE_NUMBER(265);
	if ((frame[65].i) != (101)) goto label_143;
	}
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(2)));
	if (temp0 != (117)) goto label_74;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	if (temp0 != (114)) goto label_74;
	}
	{
	LINE_NUMBER(267);
	frame[62].i = (45);
	LINE_NUMBER(268);
	goto label_81;
	}
label_143:;
	{
	LINE_NUMBER(270);
	if ((frame[65].i) != (115)) goto label_74;
	}
	{
	LINE_NUMBER(271);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(2)));
	if (temp0 != (105)) goto label_74;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	if (temp0 != (104)) goto label_74;
	}
	{
	LINE_NUMBER(272);
	frame[62].i = (43);
	LINE_NUMBER(273);
	goto label_81;
	}
label_116:;
	{
	LINE_NUMBER(278);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"void"_j)));
	LINE_NUMBER(279);
	frame[62].i = (127);
	LINE_NUMBER(280);
	goto label_74;
	}
label_117:;
	{
	LINE_NUMBER(282);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"with"_j)));
	LINE_NUMBER(283);
	frame[62].i = (124);
	LINE_NUMBER(284);
	goto label_74;
	}
label_110:;
	LINE_NUMBER(286);
	goto label_74;
label_68:;
	{
	LINE_NUMBER(288);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(2)));
	switch(temp0) {
		case 97: goto label_154;
		case 98: goto label_155;
		case 99: goto label_155;
		case 100: goto label_155;
		case 101: goto label_156;
		case 102: goto label_155;
		case 103: goto label_155;
		case 104: goto label_155;
		case 105: goto label_157;
		case 106: goto label_155;
		case 107: goto label_155;
		case 108: goto label_158;
		case 109: goto label_155;
		case 110: goto label_159;
		case 111: goto label_160;
		case 112: goto label_161;
		case 113: goto label_155;
		case 114: goto label_162;
		case 115: goto label_155;
		case 116: goto label_163;
		default: goto label_155;
	}
	}
label_154:;
	{
	LINE_NUMBER(290);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"class"_j)));
	LINE_NUMBER(291);
	frame[62].i = (128);
	LINE_NUMBER(292);
	goto label_74;
	}
label_156:;
	{
	LINE_NUMBER(294);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(0)));
	frame[65].i = temp0;
	LINE_NUMBER(295);
	if ((frame[65].i) != (98)) goto label_167;
	}
	{
	LINE_NUMBER(296);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"break"_j)));
	LINE_NUMBER(297);
	frame[62].i = (121);
	goto label_74;
	}
label_167:;
	{
	LINE_NUMBER(298);
	if ((frame[65].i) != (121)) goto label_74;
	}
	{
	LINE_NUMBER(299);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"yield"_j)));
	LINE_NUMBER(300);
	frame[62].i = (73);
	goto label_74;
	}
label_157:;
	{
	LINE_NUMBER(304);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"while"_j)));
	LINE_NUMBER(305);
	frame[62].i = (118);
	LINE_NUMBER(306);
	goto label_74;
	}
label_158:;
	{
	LINE_NUMBER(308);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"false"_j)));
	LINE_NUMBER(309);
	frame[62].i = (44);
	LINE_NUMBER(310);
	goto label_74;
	}
label_159:;
	{
	LINE_NUMBER(312);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(0)));
	frame[65].i = temp0;
	LINE_NUMBER(313);
	if ((frame[65].i) != (99)) goto label_177;
	}
	{
	LINE_NUMBER(314);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"const"_j)));
	LINE_NUMBER(315);
	frame[62].i = (155);
	goto label_74;
	}
label_177:;
	{
	LINE_NUMBER(316);
	if ((frame[65].i) != (102)) goto label_74;
	}
	{
	LINE_NUMBER(317);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"final"_j)));
	LINE_NUMBER(318);
	frame[62].i = (128);
	goto label_74;
	}
label_160:;
	{
	LINE_NUMBER(322);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(0)));
	frame[65].i = temp0;
	LINE_NUMBER(323);
	if ((frame[65].i) != (102)) goto label_183;
	}
	{
	LINE_NUMBER(324);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"float"_j)));
	LINE_NUMBER(325);
	frame[62].i = (128);
	goto label_74;
	}
label_183:;
	{
	LINE_NUMBER(326);
	if ((frame[65].i) != (115)) goto label_74;
	}
	{
	LINE_NUMBER(327);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"short"_j)));
	LINE_NUMBER(328);
	frame[62].i = (128);
	goto label_74;
	}
label_161:;
	{
	LINE_NUMBER(332);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"super"_j)));
	LINE_NUMBER(333);
	frame[62].i = (128);
	LINE_NUMBER(334);
	goto label_74;
	}
label_162:;
	{
	LINE_NUMBER(336);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"throw"_j)));
	LINE_NUMBER(337);
	frame[62].i = (50);
	LINE_NUMBER(338);
	goto label_74;
	}
label_163:;
	{
	LINE_NUMBER(340);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"catch"_j)));
	LINE_NUMBER(341);
	frame[62].i = (125);
	LINE_NUMBER(342);
	goto label_74;
	}
label_155:;
	LINE_NUMBER(344);
	goto label_74;
label_69:;
	{
	LINE_NUMBER(346);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	switch(temp0) {
		case 97: goto label_194;
		case 98: goto label_195;
		case 99: goto label_195;
		case 100: goto label_195;
		case 101: goto label_196;
		case 102: goto label_195;
		case 103: goto label_195;
		case 104: goto label_197;
		case 105: goto label_195;
		case 106: goto label_195;
		case 107: goto label_195;
		case 108: goto label_195;
		case 109: goto label_198;
		case 110: goto label_195;
		case 111: goto label_199;
		case 112: goto label_195;
		case 113: goto label_195;
		case 114: goto label_195;
		case 115: goto label_195;
		case 116: goto label_200;
		case 117: goto label_201;
		case 118: goto label_195;
		case 119: goto label_202;
		case 120: goto label_203;
		case 121: goto label_204;
		default: goto label_195;
	}
	}
label_194:;
	{
	LINE_NUMBER(348);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"native"_j)));
	LINE_NUMBER(349);
	frame[62].i = (128);
	LINE_NUMBER(350);
	goto label_74;
	}
label_196:;
	{
	LINE_NUMBER(352);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(0)));
	frame[65].i = temp0;
	LINE_NUMBER(353);
	if ((frame[65].i) != (100)) goto label_208;
	}
	{
	LINE_NUMBER(354);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"delete"_j)));
	LINE_NUMBER(355);
	frame[62].i = (31);
	goto label_74;
	}
label_208:;
	{
	LINE_NUMBER(356);
	if ((frame[65].i) != (114)) goto label_74;
	}
	{
	LINE_NUMBER(357);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"return"_j)));
	LINE_NUMBER(358);
	frame[62].i = (jint(4));
	goto label_74;
	}
label_197:;
	{
	LINE_NUMBER(362);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"throws"_j)));
	LINE_NUMBER(363);
	frame[62].i = (128);
	LINE_NUMBER(364);
	goto label_74;
	}
label_198:;
	{
	LINE_NUMBER(366);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"import"_j)));
	LINE_NUMBER(367);
	frame[62].i = (128);
	LINE_NUMBER(368);
	goto label_74;
	}
label_199:;
	{
	LINE_NUMBER(370);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"double"_j)));
	LINE_NUMBER(371);
	frame[62].i = (128);
	LINE_NUMBER(372);
	goto label_74;
	}
label_200:;
	{
	LINE_NUMBER(374);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"static"_j)));
	LINE_NUMBER(375);
	frame[62].i = (128);
	LINE_NUMBER(376);
	goto label_74;
	}
label_201:;
	{
	LINE_NUMBER(378);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"public"_j)));
	LINE_NUMBER(379);
	frame[62].i = (128);
	LINE_NUMBER(380);
	goto label_74;
	}
label_202:;
	{
	LINE_NUMBER(382);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"switch"_j)));
	LINE_NUMBER(383);
	frame[62].i = (115);
	LINE_NUMBER(384);
	goto label_74;
	}
label_203:;
	{
	LINE_NUMBER(386);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"export"_j)));
	LINE_NUMBER(387);
	frame[62].i = (128);
	LINE_NUMBER(388);
	goto label_74;
	}
label_204:;
	{
	LINE_NUMBER(390);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"typeof"_j)));
	LINE_NUMBER(391);
	frame[62].i = (32);
	LINE_NUMBER(392);
	goto label_74;
	}
label_195:;
	LINE_NUMBER(394);
	goto label_74;
label_70:;
	{
	LINE_NUMBER(396);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	switch(temp0) {
		case 97: goto label_229;
		case 101: goto label_230;
		case 105: goto label_231;
		case 111: goto label_232;
		case 114: goto label_233;
		case 120: goto label_234;
		default: goto label_235;
	}
	}
label_229:;
	{
	LINE_NUMBER(398);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"package"_j)));
	LINE_NUMBER(399);
	frame[62].i = (128);
	LINE_NUMBER(400);
	goto label_74;
	}
label_230:;
	{
	LINE_NUMBER(402);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"default"_j)));
	LINE_NUMBER(403);
	frame[62].i = (117);
	LINE_NUMBER(404);
	goto label_74;
	}
label_231:;
	{
	LINE_NUMBER(406);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"finally"_j)));
	LINE_NUMBER(407);
	frame[62].i = (126);
	LINE_NUMBER(408);
	goto label_74;
	}
label_232:;
	{
	LINE_NUMBER(410);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"boolean"_j)));
	LINE_NUMBER(411);
	frame[62].i = (128);
	LINE_NUMBER(412);
	goto label_74;
	}
label_233:;
	{
	LINE_NUMBER(414);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"private"_j)));
	LINE_NUMBER(415);
	frame[62].i = (128);
	LINE_NUMBER(416);
	goto label_74;
	}
label_234:;
	{
	LINE_NUMBER(418);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"extends"_j)));
	LINE_NUMBER(419);
	frame[62].i = (128);
	LINE_NUMBER(420);
	goto label_74;
	}
label_235:;
	LINE_NUMBER(422);
	goto label_74;
label_71:;
	{
	LINE_NUMBER(424);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(0)));
	switch(temp0) {
		case 97: goto label_248;
		case 99: goto label_249;
		case 100: goto label_250;
		case 102: goto label_251;
		case 118: goto label_252;
		default: goto label_253;
	}
	}
label_248:;
	{
	LINE_NUMBER(426);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"abstract"_j)));
	LINE_NUMBER(427);
	frame[62].i = (128);
	LINE_NUMBER(428);
	goto label_74;
	}
label_249:;
	{
	LINE_NUMBER(430);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"continue"_j)));
	LINE_NUMBER(431);
	frame[62].i = (122);
	LINE_NUMBER(432);
	goto label_74;
	}
label_250:;
	{
	LINE_NUMBER(434);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"debugger"_j)));
	LINE_NUMBER(435);
	frame[62].i = (161);
	LINE_NUMBER(436);
	goto label_74;
	}
label_251:;
	{
	LINE_NUMBER(438);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"function"_j)));
	LINE_NUMBER(439);
	frame[62].i = (110);
	LINE_NUMBER(440);
	goto label_74;
	}
label_252:;
	{
	LINE_NUMBER(442);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"volatile"_j)));
	LINE_NUMBER(443);
	frame[62].i = (128);
	LINE_NUMBER(444);
	goto label_74;
	}
label_253:;
	LINE_NUMBER(446);
	goto label_74;
label_72:;
	{
	LINE_NUMBER(448);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(0)));
	frame[65].i = temp0;
	LINE_NUMBER(449);
	if ((frame[65].i) != (105)) goto label_265;
	}
	{
	LINE_NUMBER(450);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"interface"_j)));
	LINE_NUMBER(451);
	frame[62].i = (128);
	goto label_74;
	}
label_265:;
	{
	LINE_NUMBER(452);
	if ((frame[65].i) != (112)) goto label_268;
	}
	{
	LINE_NUMBER(453);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"protected"_j)));
	LINE_NUMBER(454);
	frame[62].i = (128);
	goto label_74;
	}
label_268:;
	{
	LINE_NUMBER(455);
	if ((frame[65].i) != (116)) goto label_74;
	}
	{
	LINE_NUMBER(456);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"transient"_j)));
	LINE_NUMBER(457);
	frame[62].i = (128);
	goto label_74;
	}
label_73:;
	{
	LINE_NUMBER(461);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[63].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[63].o), (jint(1)));
	frame[65].i = temp0;
	LINE_NUMBER(462);
	if ((frame[65].i) != (109)) goto label_274;
	}
	{
	LINE_NUMBER(463);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"implements"_j)));
	LINE_NUMBER(464);
	frame[62].i = (128);
	goto label_74;
	}
label_274:;
	{
	LINE_NUMBER(465);
	if ((frame[65].i) != (110)) goto label_74;
	}
	{
	LINE_NUMBER(466);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"instanceof"_j)));
	LINE_NUMBER(467);
	frame[62].i = (53);
	goto label_74;
	}
label_75:;
	{
	LINE_NUMBER(471);
	frame[64].o = (((jobject) createStringLiteral(ctx, u8"synchronized"_j)));
	LINE_NUMBER(472);
	frame[62].i = (128);
	}
label_74:;
	{
	LINE_NUMBER(475);
	if ((frame[64].o) == nullptr) goto label_81;
	}
	{
	if ((frame[64].o) == (frame[63].o)) goto label_81;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[64].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[64].o), (frame[63].o));
	if (temp0 != 0) goto label_81;
	}
	INST_ICONST(0);
	INST_ISTORE(62);
label_81:;
	{
	LINE_NUMBER(479);
	if ((frame[62].i) != 0) goto label_280;
	}
	{
	LINE_NUMBER(480);
	popStackFrame(ctx);
	return (jint(0));
	}
label_280:;
	{
	LINE_NUMBER(482);
	popStackFrame(ctx);
	return ((frame[62].i) & (255));
	}

	popStackFrame(ctx);
}

jint SM_rhino_TokenStream_stringToKeywordForES_java_lang_String_boolean_R_int(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[54];
	auto stack = &frame[52];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:stringToKeywordForES", 54 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TokenStream(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(493);
	frame[2].i = (121);
	LINE_NUMBER(494);
	frame[3].i = (116);
	LINE_NUMBER(495);
	frame[4].i = (125);
	LINE_NUMBER(496);
	frame[5].i = (128);
	LINE_NUMBER(497);
	frame[6].i = (155);
	LINE_NUMBER(498);
	frame[7].i = (122);
	LINE_NUMBER(499);
	frame[8].i = (161);
	LINE_NUMBER(500);
	frame[9].i = (117);
	LINE_NUMBER(501);
	frame[10].i = (31);
	LINE_NUMBER(502);
	frame[11].i = (119);
	LINE_NUMBER(503);
	frame[12].i = (114);
	LINE_NUMBER(504);
	frame[13].i = (128);
	LINE_NUMBER(505);
	frame[14].i = (128);
	LINE_NUMBER(506);
	frame[15].i = (126);
	LINE_NUMBER(507);
	frame[16].i = (120);
	LINE_NUMBER(508);
	frame[17].i = (110);
	LINE_NUMBER(509);
	frame[18].i = (113);
	LINE_NUMBER(510);
	frame[19].i = (128);
	LINE_NUMBER(511);
	frame[20].i = (52);
	LINE_NUMBER(512);
	frame[21].i = (53);
	LINE_NUMBER(513);
	frame[22].i = (30);
	LINE_NUMBER(514);
	frame[23].i = (jint(4));
	LINE_NUMBER(515);
	frame[24].i = (128);
	LINE_NUMBER(516);
	frame[25].i = (115);
	LINE_NUMBER(517);
	frame[26].i = (43);
	LINE_NUMBER(518);
	frame[27].i = (50);
	LINE_NUMBER(519);
	frame[28].i = (82);
	LINE_NUMBER(520);
	frame[29].i = (32);
	LINE_NUMBER(521);
	frame[30].i = (123);
	LINE_NUMBER(522);
	frame[31].i = (127);
	LINE_NUMBER(523);
	frame[32].i = (118);
	LINE_NUMBER(524);
	frame[33].i = (124);
	LINE_NUMBER(525);
	frame[34].i = (73);
	LINE_NUMBER(528);
	frame[35].i = (128);
	LINE_NUMBER(529);
	frame[36].i = (128);
	LINE_NUMBER(532);
	frame[37].i = (128);
	LINE_NUMBER(533);
	frame[38].i = (128);
	LINE_NUMBER(534);
	frame[39].i = (128);
	LINE_NUMBER(535);
	frame[40].i = (128);
	LINE_NUMBER(536);
	frame[41].i = (128);
	LINE_NUMBER(537);
	frame[42].i = (128);
	LINE_NUMBER(540);
	frame[43].i = (44);
	LINE_NUMBER(541);
	frame[44].i = (42);
	LINE_NUMBER(542);
	frame[45].i = (45);
	LINE_NUMBER(546);
	frame[46].i = (154);
	LINE_NUMBER(547);
	frame[47].i = (128);
	LINE_NUMBER(550);
	frame[49].o = (frame[0].o);
	LINE_NUMBER(554);
	frame[48].i = (jint(0));
	LINE_NUMBER(555);
	frame[50].o = (jobject(nullptr));
	LINE_NUMBER(558);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[49].o));
	switch(temp0) {
		case 2: goto label_50;
		case 3: goto label_51;
		case 4: goto label_52;
		case 5: goto label_53;
		case 6: goto label_54;
		case 7: goto label_55;
		case 8: goto label_56;
		case 9: goto label_57;
		case 10: goto label_58;
		default: goto label_59;
	}
	}
label_50:;
	{
	LINE_NUMBER(560);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	frame[51].i = temp0;
	LINE_NUMBER(561);
	if ((frame[51].i) != (102)) goto label_61;
	}
	{
	LINE_NUMBER(562);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(0)));
	if (temp0 != (105)) goto label_59;
	}
	{
	LINE_NUMBER(563);
	frame[48].i = (113);
	LINE_NUMBER(564);
	goto label_65;
	}
label_61:;
	{
	LINE_NUMBER(566);
	if ((frame[51].i) != (110)) goto label_66;
	}
	{
	LINE_NUMBER(567);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(0)));
	if (temp0 != (105)) goto label_59;
	}
	{
	LINE_NUMBER(568);
	frame[48].i = (52);
	LINE_NUMBER(569);
	goto label_65;
	}
label_66:;
	{
	LINE_NUMBER(571);
	if ((frame[51].i) != (111)) goto label_59;
	}
	{
	LINE_NUMBER(572);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(0)));
	if (temp0 != (100)) goto label_59;
	}
	{
	LINE_NUMBER(573);
	frame[48].i = (119);
	LINE_NUMBER(574);
	goto label_65;
	}
label_51:;
	{
	LINE_NUMBER(579);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(0)));
	switch(temp0) {
		case 102: goto label_73;
		case 108: goto label_74;
		case 110: goto label_75;
		case 116: goto label_76;
		case 118: goto label_77;
		default: goto label_78;
	}
	}
label_73:;
	{
	LINE_NUMBER(581);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(2)));
	if (temp0 != (114)) goto label_59;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	if (temp0 != (111)) goto label_59;
	}
	{
	LINE_NUMBER(582);
	frame[48].i = (120);
	LINE_NUMBER(583);
	goto label_65;
	}
label_74:;
	{
	LINE_NUMBER(587);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(2)));
	if (temp0 != (116)) goto label_59;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	if (temp0 != (101)) goto label_59;
	}
	{
	LINE_NUMBER(588);
	frame[48].i = (154);
	LINE_NUMBER(589);
	goto label_65;
	}
label_75:;
	{
	LINE_NUMBER(593);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(2)));
	if (temp0 != (119)) goto label_59;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	if (temp0 != (101)) goto label_59;
	}
	{
	LINE_NUMBER(594);
	frame[48].i = (30);
	LINE_NUMBER(595);
	goto label_65;
	}
label_76:;
	{
	LINE_NUMBER(599);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(2)));
	if (temp0 != (121)) goto label_59;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	if (temp0 != (114)) goto label_59;
	}
	{
	LINE_NUMBER(600);
	frame[48].i = (82);
	LINE_NUMBER(601);
	goto label_65;
	}
label_77:;
	{
	LINE_NUMBER(605);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(2)));
	if (temp0 != (114)) goto label_59;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	if (temp0 != (97)) goto label_59;
	}
	{
	LINE_NUMBER(606);
	frame[48].i = (123);
	LINE_NUMBER(607);
	goto label_65;
	}
label_78:;
	LINE_NUMBER(611);
	goto label_59;
label_52:;
	{
	LINE_NUMBER(613);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(0)));
	switch(temp0) {
		case 99: goto label_89;
		case 101: goto label_90;
		case 110: goto label_91;
		case 116: goto label_92;
		case 118: goto label_93;
		case 119: goto label_94;
		default: goto label_95;
	}
	}
label_89:;
	{
	LINE_NUMBER(615);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(3)));
	frame[51].i = temp0;
	LINE_NUMBER(616);
	if ((frame[51].i) != (101)) goto label_59;
	}
	{
	LINE_NUMBER(617);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(2)));
	if (temp0 != (115)) goto label_59;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	if (temp0 != (97)) goto label_59;
	}
	{
	LINE_NUMBER(618);
	frame[48].i = (116);
	LINE_NUMBER(619);
	goto label_65;
	}
label_90:;
	{
	LINE_NUMBER(624);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(3)));
	frame[51].i = temp0;
	LINE_NUMBER(625);
	if ((frame[51].i) != (101)) goto label_101;
	}
	{
	LINE_NUMBER(626);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(2)));
	if (temp0 != (115)) goto label_59;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	if (temp0 != (108)) goto label_59;
	}
	{
	LINE_NUMBER(627);
	frame[48].i = (114);
	LINE_NUMBER(628);
	goto label_65;
	}
label_101:;
	{
	LINE_NUMBER(630);
	if ((frame[51].i) != (109)) goto label_59;
	}
	{
	LINE_NUMBER(631);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(2)));
	if (temp0 != (117)) goto label_59;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	if (temp0 != (110)) goto label_59;
	}
	{
	LINE_NUMBER(632);
	frame[48].i = (128);
	LINE_NUMBER(633);
	goto label_65;
	}
label_91:;
	{
	LINE_NUMBER(638);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"null"_j)));
	LINE_NUMBER(639);
	frame[48].i = (42);
	LINE_NUMBER(640);
	goto label_59;
	}
label_92:;
	{
	LINE_NUMBER(642);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(3)));
	frame[51].i = temp0;
	LINE_NUMBER(643);
	if ((frame[51].i) != (101)) goto label_111;
	}
	{
	LINE_NUMBER(644);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(2)));
	if (temp0 != (117)) goto label_59;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	if (temp0 != (114)) goto label_59;
	}
	{
	LINE_NUMBER(645);
	frame[48].i = (45);
	LINE_NUMBER(646);
	goto label_65;
	}
label_111:;
	{
	LINE_NUMBER(648);
	if ((frame[51].i) != (115)) goto label_59;
	}
	{
	LINE_NUMBER(649);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(2)));
	if (temp0 != (105)) goto label_59;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	if (temp0 != (104)) goto label_59;
	}
	{
	LINE_NUMBER(650);
	frame[48].i = (43);
	LINE_NUMBER(651);
	goto label_65;
	}
label_93:;
	{
	LINE_NUMBER(656);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"void"_j)));
	LINE_NUMBER(657);
	frame[48].i = (127);
	LINE_NUMBER(658);
	goto label_59;
	}
label_94:;
	{
	LINE_NUMBER(660);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"with"_j)));
	LINE_NUMBER(661);
	frame[48].i = (124);
	LINE_NUMBER(662);
	goto label_59;
	}
label_95:;
	LINE_NUMBER(664);
	goto label_59;
label_53:;
	{
	LINE_NUMBER(666);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(2)));
	switch(temp0) {
		case 97: goto label_122;
		case 98: goto label_123;
		case 99: goto label_123;
		case 100: goto label_123;
		case 101: goto label_124;
		case 102: goto label_123;
		case 103: goto label_123;
		case 104: goto label_123;
		case 105: goto label_125;
		case 106: goto label_123;
		case 107: goto label_123;
		case 108: goto label_126;
		case 109: goto label_123;
		case 110: goto label_127;
		case 111: goto label_123;
		case 112: goto label_128;
		case 113: goto label_123;
		case 114: goto label_129;
		case 115: goto label_123;
		case 116: goto label_130;
		default: goto label_123;
	}
	}
label_122:;
	{
	LINE_NUMBER(668);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(0)));
	frame[51].i = temp0;
	LINE_NUMBER(669);
	if ((frame[51].i) != (99)) goto label_132;
	}
	{
	LINE_NUMBER(670);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"class"_j)));
	LINE_NUMBER(671);
	frame[48].i = (128);
	goto label_59;
	}
label_132:;
	{
	LINE_NUMBER(672);
	if ((frame[51].i) != (97)) goto label_59;
	}
	{
	LINE_NUMBER(673);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"await"_j)));
	LINE_NUMBER(674);
	frame[48].i = (128);
	goto label_59;
	}
label_124:;
	{
	LINE_NUMBER(678);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(0)));
	frame[51].i = temp0;
	LINE_NUMBER(679);
	if ((frame[51].i) != (98)) goto label_138;
	}
	{
	LINE_NUMBER(680);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"break"_j)));
	LINE_NUMBER(681);
	frame[48].i = (121);
	goto label_59;
	}
label_138:;
	{
	LINE_NUMBER(682);
	if ((frame[51].i) != (121)) goto label_59;
	}
	{
	LINE_NUMBER(683);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"yield"_j)));
	LINE_NUMBER(684);
	frame[48].i = (73);
	goto label_59;
	}
label_125:;
	{
	LINE_NUMBER(688);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"while"_j)));
	LINE_NUMBER(689);
	frame[48].i = (118);
	LINE_NUMBER(690);
	goto label_59;
	}
label_126:;
	{
	LINE_NUMBER(692);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"false"_j)));
	LINE_NUMBER(693);
	frame[48].i = (44);
	LINE_NUMBER(694);
	goto label_59;
	}
label_127:;
	{
	LINE_NUMBER(696);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"const"_j)));
	LINE_NUMBER(697);
	frame[48].i = (155);
	LINE_NUMBER(698);
	goto label_59;
	}
label_128:;
	{
	LINE_NUMBER(700);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"super"_j)));
	LINE_NUMBER(701);
	frame[48].i = (128);
	LINE_NUMBER(702);
	goto label_59;
	}
label_129:;
	{
	LINE_NUMBER(704);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"throw"_j)));
	LINE_NUMBER(705);
	frame[48].i = (50);
	LINE_NUMBER(706);
	goto label_59;
	}
label_130:;
	{
	LINE_NUMBER(708);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"catch"_j)));
	LINE_NUMBER(709);
	frame[48].i = (125);
	LINE_NUMBER(710);
	goto label_59;
	}
label_123:;
	LINE_NUMBER(712);
	goto label_59;
label_54:;
	{
	LINE_NUMBER(714);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	switch(temp0) {
		case 101: goto label_155;
		case 102: goto label_156;
		case 103: goto label_156;
		case 104: goto label_156;
		case 105: goto label_156;
		case 106: goto label_156;
		case 107: goto label_156;
		case 108: goto label_156;
		case 109: goto label_157;
		case 110: goto label_156;
		case 111: goto label_156;
		case 112: goto label_156;
		case 113: goto label_156;
		case 114: goto label_156;
		case 115: goto label_156;
		case 116: goto label_158;
		case 117: goto label_159;
		case 118: goto label_156;
		case 119: goto label_160;
		case 120: goto label_161;
		case 121: goto label_162;
		default: goto label_156;
	}
	}
label_155:;
	{
	LINE_NUMBER(716);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(0)));
	frame[51].i = temp0;
	LINE_NUMBER(717);
	if ((frame[51].i) != (100)) goto label_164;
	}
	{
	LINE_NUMBER(718);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"delete"_j)));
	LINE_NUMBER(719);
	frame[48].i = (31);
	goto label_59;
	}
label_164:;
	{
	LINE_NUMBER(720);
	if ((frame[51].i) != (114)) goto label_59;
	}
	{
	LINE_NUMBER(721);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"return"_j)));
	LINE_NUMBER(722);
	frame[48].i = (jint(4));
	goto label_59;
	}
label_157:;
	{
	LINE_NUMBER(726);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"import"_j)));
	LINE_NUMBER(727);
	frame[48].i = (128);
	LINE_NUMBER(728);
	goto label_59;
	}
label_158:;
	{
	LINE_NUMBER(730);
	if ((frame[1].i) == 0) goto label_159;
	}
	{
	LINE_NUMBER(731);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"static"_j)));
	LINE_NUMBER(732);
	frame[48].i = (128);
	LINE_NUMBER(733);
	goto label_59;
	}
label_159:;
	{
	LINE_NUMBER(737);
	if ((frame[1].i) == 0) goto label_160;
	}
	{
	LINE_NUMBER(738);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"public"_j)));
	LINE_NUMBER(739);
	frame[48].i = (128);
	LINE_NUMBER(740);
	goto label_59;
	}
label_160:;
	{
	LINE_NUMBER(744);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"switch"_j)));
	LINE_NUMBER(745);
	frame[48].i = (115);
	LINE_NUMBER(746);
	goto label_59;
	}
label_161:;
	{
	LINE_NUMBER(748);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"export"_j)));
	LINE_NUMBER(749);
	frame[48].i = (128);
	LINE_NUMBER(750);
	goto label_59;
	}
label_162:;
	{
	LINE_NUMBER(752);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"typeof"_j)));
	LINE_NUMBER(753);
	frame[48].i = (32);
	LINE_NUMBER(754);
	goto label_59;
	}
label_156:;
	LINE_NUMBER(756);
	goto label_59;
label_55:;
	{
	LINE_NUMBER(758);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	switch(temp0) {
		case 97: goto label_183;
		case 101: goto label_184;
		case 105: goto label_185;
		case 114: goto label_186;
		case 120: goto label_187;
		default: goto label_188;
	}
	}
label_183:;
	{
	LINE_NUMBER(760);
	if ((frame[1].i) == 0) goto label_184;
	}
	{
	LINE_NUMBER(761);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"package"_j)));
	LINE_NUMBER(762);
	frame[48].i = (128);
	LINE_NUMBER(763);
	goto label_59;
	}
label_184:;
	{
	LINE_NUMBER(767);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"default"_j)));
	LINE_NUMBER(768);
	frame[48].i = (117);
	LINE_NUMBER(769);
	goto label_59;
	}
label_185:;
	{
	LINE_NUMBER(771);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"finally"_j)));
	LINE_NUMBER(772);
	frame[48].i = (126);
	LINE_NUMBER(773);
	goto label_59;
	}
label_186:;
	{
	LINE_NUMBER(775);
	if ((frame[1].i) == 0) goto label_187;
	}
	{
	LINE_NUMBER(776);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"private"_j)));
	LINE_NUMBER(777);
	frame[48].i = (128);
	LINE_NUMBER(778);
	goto label_59;
	}
label_187:;
	{
	LINE_NUMBER(782);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"extends"_j)));
	LINE_NUMBER(783);
	frame[48].i = (128);
	LINE_NUMBER(784);
	goto label_59;
	}
label_188:;
	LINE_NUMBER(786);
	goto label_59;
label_56:;
	{
	LINE_NUMBER(788);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(0)));
	switch(temp0) {
		case 99: goto label_201;
		case 100: goto label_202;
		case 101: goto label_203;
		case 102: goto label_204;
		default: goto label_203;
	}
	}
label_201:;
	{
	LINE_NUMBER(790);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"continue"_j)));
	LINE_NUMBER(791);
	frame[48].i = (122);
	LINE_NUMBER(792);
	goto label_59;
	}
label_202:;
	{
	LINE_NUMBER(794);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"debugger"_j)));
	LINE_NUMBER(795);
	frame[48].i = (161);
	LINE_NUMBER(796);
	goto label_59;
	}
label_204:;
	{
	LINE_NUMBER(798);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"function"_j)));
	LINE_NUMBER(799);
	frame[48].i = (110);
	LINE_NUMBER(800);
	goto label_59;
	}
label_203:;
	LINE_NUMBER(802);
	goto label_59;
label_57:;
	{
	LINE_NUMBER(804);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(0)));
	frame[51].i = temp0;
	LINE_NUMBER(805);
	if ((frame[51].i) != (105)) goto label_212;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_212;
	{
	LINE_NUMBER(806);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"interface"_j)));
	LINE_NUMBER(807);
	frame[48].i = (128);
	goto label_59;
	}
label_212:;
	{
	LINE_NUMBER(808);
	if ((frame[51].i) != (112)) goto label_59;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_59;
	{
	LINE_NUMBER(809);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"protected"_j)));
	LINE_NUMBER(810);
	frame[48].i = (128);
	goto label_59;
	}
label_58:;
	{
	LINE_NUMBER(814);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[49].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[49].o), (jint(1)));
	frame[51].i = temp0;
	LINE_NUMBER(815);
	if ((frame[51].i) != (109)) goto label_218;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_218;
	{
	LINE_NUMBER(816);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"implements"_j)));
	LINE_NUMBER(817);
	frame[48].i = (128);
	goto label_59;
	}
label_218:;
	{
	LINE_NUMBER(818);
	if ((frame[51].i) != (110)) goto label_59;
	}
	{
	LINE_NUMBER(819);
	frame[50].o = (((jobject) createStringLiteral(ctx, u8"instanceof"_j)));
	LINE_NUMBER(820);
	frame[48].i = (53);
	}
label_59:;
	{
	LINE_NUMBER(824);
	if ((frame[50].o) == nullptr) goto label_65;
	}
	{
	if ((frame[50].o) == (frame[49].o)) goto label_65;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[50].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[50].o), (frame[49].o));
	if (temp0 != 0) goto label_65;
	}
	INST_ICONST(0);
	INST_ISTORE(48);
label_65:;
	{
	LINE_NUMBER(828);
	if ((frame[48].i) != 0) goto label_223;
	}
	{
	LINE_NUMBER(829);
	popStackFrame(ctx);
	return (jint(0));
	}
label_223:;
	{
	LINE_NUMBER(831);
	popStackFrame(ctx);
	return ((frame[48].i) & (255));
	}

	popStackFrame(ctx);
}

jobject M_rhino_TokenStream_getSourceString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getSourceString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(835);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceString;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_getLineno_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getLineno", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(839);
	popStackFrame(ctx);
	return ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineno);
	}

	popStackFrame(ctx);
}

jobject M_rhino_TokenStream_getString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(843);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_string;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar M_rhino_TokenStream_getQuoteChar_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getQuoteChar", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(847);
	popStackFrame(ctx);
	return (jchar(((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_quoteChar)));
	}

	popStackFrame(ctx);
}

jdouble M_rhino_TokenStream_getNumber_R_double(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getNumber", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(851);
	popStackFrame(ctx);
	return ((jdouble)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_number);
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_isNumberBinary_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:isNumberBinary", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(855);
	popStackFrame(ctx);
	return ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_isBinary);
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_isNumberOldOctal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:isNumberOldOctal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(859);
	popStackFrame(ctx);
	return ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_isOldOctal);
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_isNumberOctal_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:isNumberOctal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(863);
	popStackFrame(ctx);
	return ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_isOctal);
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_isNumberHex_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:isNumberHex", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(867);
	popStackFrame(ctx);
	return ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_isHex);
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_eof_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:eof", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(871);
	popStackFrame(ctx);
	return ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_hitEOF);
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_getToken_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getToken", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_4:;
	{
	LINE_NUMBER(880);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(881);
	if ((frame[1].i) != (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(882);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenBeg = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor) - (jint(1)));
	LINE_NUMBER(883);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor);
	LINE_NUMBER(884);
	popStackFrame(ctx);
	return (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(885);
	if ((frame[1].i) != (10)) goto label_10;
	}
	{
	LINE_NUMBER(886);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_dirtyLine = (jint(0));
	LINE_NUMBER(887);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenBeg = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor) - (jint(1)));
	LINE_NUMBER(888);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor);
	LINE_NUMBER(889);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(890);
	jint temp0 = (jint)SM_rhino_TokenStream_isJSSpace_int_R_boolean(ctx, (frame[1].i));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(891);
	if ((frame[1].i) == (45)) goto label_16;
	}
	{
	LINE_NUMBER(892);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_dirtyLine = (jint(1));
	goto label_16;
	}
label_16:;
	{
	LINE_NUMBER(899);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenBeg = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor) - (jint(1)));
	LINE_NUMBER(900);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor);
	LINE_NUMBER(905);
	frame[3].i = (jint(0));
	LINE_NUMBER(906);
	if ((frame[1].i) != (92)) goto label_21;
	}
	{
	LINE_NUMBER(907);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(908);
	if ((frame[1].i) != (117)) goto label_24;
	}
	{
	LINE_NUMBER(909);
	frame[2].i = (jint(1));
	LINE_NUMBER(910);
	frame[3].i = (jint(1));
	LINE_NUMBER(911);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	goto label_28;
	}
label_24:;
	{
	LINE_NUMBER(913);
	frame[2].i = (jint(0));
	LINE_NUMBER(914);
	M_rhino_TokenStream_ungetChar_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(915);
	frame[1].i = (92);
	goto label_28;
	}
label_21:;
	{
	LINE_NUMBER(918);
	jint temp0 = (jint)SM_java_lang_Character_isJavaIdentifierStart_char_R_boolean(ctx, (jchar((frame[1].i))));
	frame[2].i = temp0;
	LINE_NUMBER(919);
	if ((frame[2].i) == 0) goto label_28;
	}
	{
	LINE_NUMBER(920);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(921);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	}
label_28:;
	{
	LINE_NUMBER(925);
	if ((frame[2].i) == 0) goto label_34;
	}
	{
	LINE_NUMBER(926);
	frame[4].i = (frame[3].i);
	}
label_36:;
	{
	LINE_NUMBER(928);
	if ((frame[3].i) == 0) goto label_37;
	}
	{
	LINE_NUMBER(935);
	frame[5].i = (jint(0));
	LINE_NUMBER(936);
	frame[6].i = (jint(0));
	}
label_40:;
	{
	if ((frame[6].i) == (jint(4))) goto label_41;
	}
	{
	LINE_NUMBER(937);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(938);
	jint temp1 = (jint)SM_rhino_Kit_xDigitToInt_int_int_R_int(ctx, (frame[1].i), (frame[5].i));
	frame[5].i = temp1;
	LINE_NUMBER(940);
	if ((frame[5].i) >= 0) goto label_45;
	}
	LINE_NUMBER(941);
	goto label_41;
label_45:;
	{
	LINE_NUMBER(936);
	INST_IINC(6, 1);
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(944);
	if ((frame[5].i) >= 0) goto label_47;
	}
	{
	LINE_NUMBER(945);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.invalid.escape"_j))));
	LINE_NUMBER(946);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_47:;
	{
	LINE_NUMBER(948);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[5].i));
	LINE_NUMBER(949);
	frame[3].i = (jint(0));
	LINE_NUMBER(950);
	goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(951);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(952);
	if ((frame[1].i) != (92)) goto label_53;
	}
	{
	LINE_NUMBER(953);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(954);
	if ((frame[1].i) != (117)) goto label_56;
	}
	{
	LINE_NUMBER(955);
	frame[3].i = (jint(1));
	LINE_NUMBER(956);
	frame[4].i = (jint(1));
	goto label_36;
	}
label_56:;
	{
	LINE_NUMBER(958);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.illegal.character"_j))), (frame[1].i));
	LINE_NUMBER(959);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_53:;
	{
	LINE_NUMBER(962);
	if ((frame[1].i) == (jint(-1))) goto label_60;
	}
	{
	if ((frame[1].i) == (jint(65279))) goto label_60;
	}
	{
	jint temp0 = jchar((frame[1].i));
	LINE_NUMBER(963);
	jint temp1 = (jint)SM_java_lang_Character_isJavaIdentifierPart_char_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_62;
	}
	LINE_NUMBER(964);
	goto label_60;
label_62:;
	{
	LINE_NUMBER(966);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	goto label_36;
	}
label_60:;
	{
	LINE_NUMBER(970);
	M_rhino_TokenStream_ungetChar_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(972);
	sp[0].o = (jobject)M_rhino_TokenStream_getStringFromBuffer_R_java_lang_String(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(973);
	if ((frame[4].i) != 0) goto label_66;
	}
	{
	LINE_NUMBER(978);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK(sp[1].o))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	jint temp1 = (jint)((func_rhino_Parser_inUseStrictDirective_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Parser_inUseStrictDirective_R_boolean])(ctx, sp[1].o);
	jint temp2 = (jint)SM_rhino_TokenStream_stringToKeyword_java_lang_String_int_boolean_R_int(ctx, sp[0].o, temp0, temp1);
	frame[6].i = temp2;
	LINE_NUMBER(979);
	if ((frame[6].i) == 0) goto label_69;
	}
	{
	LINE_NUMBER(980);
	if ((frame[6].i) == (154)) goto label_71;
	}
	{
	if ((frame[6].i) != (73)) goto label_72;
	}
label_71:;
	{
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 >= (170)) goto label_72;
	}
	{
	LINE_NUMBER(982);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[6].i) != (154)) goto label_74;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"let"_j));
	goto label_75;
label_74:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"yield"_j));
label_75:;
	{
	sp -= 2;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_string = (jref) sp[1].o;
	LINE_NUMBER(983);
	frame[6].i = (39);
	}
label_72:;
	{
	LINE_NUMBER(987);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_allStrings;
	sp[1].o = (jobject)((func_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[5].o));
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_string = (jref) (checkCast(ctx, &class_java_lang_String, sp[1].o));
	LINE_NUMBER(988);
	if ((frame[6].i) == (128)) goto label_78;
	}
	{
	LINE_NUMBER(989);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_78:;
	{
	LINE_NUMBER(990);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp0 < (200)) goto label_80;
	}
	{
	LINE_NUMBER(991);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_80:;
	{
	LINE_NUMBER(992);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isReservedKeywordAsIdentifier_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_69;
	}
	{
	LINE_NUMBER(993);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_69:;
	LINE_NUMBER(996);
	goto label_83;
label_66:;
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((rhino_Parser *) NULL_CHECK(sp[1].o))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	jint temp1 = (jint)((func_rhino_Parser_inUseStrictDirective_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_Parser_inUseStrictDirective_R_boolean])(ctx, sp[1].o);
	jint temp2 = (jint)SM_rhino_TokenStream_isKeyword_java_lang_String_int_boolean_R_boolean(ctx, sp[0].o, temp0, temp1);
	if (temp2 == 0) goto label_83;
	}
	{
	LINE_NUMBER(999);
	sp[0].o = (jobject)M_rhino_TokenStream_convertLastCharToHex_java_lang_String_R_java_lang_String(ctx, (frame[0].o), (frame[5].o));
	frame[5].o = sp[0].o;
	}
label_83:;
	{
	LINE_NUMBER(1001);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_allStrings;
	sp[1].o = (jobject)((func_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[5].o));
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_string = (jref) (checkCast(ctx, &class_java_lang_String, sp[1].o));
	LINE_NUMBER(1002);
	popStackFrame(ctx);
	return (39);
	}
label_34:;
	{
	LINE_NUMBER(1006);
	jint temp0 = (jint)SM_rhino_TokenStream_isDigit_int_R_boolean(ctx, (frame[1].i));
	if (temp0 != 0) goto label_86;
	}
	{
	if ((frame[1].i) != (46)) goto label_87;
	}
	{
	jint temp0 = (jint)M_rhino_TokenStream_peekChar_R_int(ctx, (frame[0].o));
	jint temp1 = (jint)SM_rhino_TokenStream_isDigit_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_87;
	}
label_86:;
	{
	LINE_NUMBER(1007);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(1008);
	frame[4].i = (10);
	LINE_NUMBER(1009);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	sp[3].o = frame[0].o;
	jint temp0 = jint(0);
	((rhino_TokenStream *) NULL_CHECK(sp[3].o))->F_isBinary = temp0;
	((rhino_TokenStream *) NULL_CHECK(sp[2].o))->F_isOctal = temp0;
	((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_isOldOctal = temp0;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_isHex = temp0;
	LINE_NUMBER(1010);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_compilerEnv;
	jint temp7 = (jint)((func_rhino_CompilerEnvirons_getLanguageVersion_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_getLanguageVersion_R_int])(ctx, sp[0].o);
	if (temp7 < (200)) goto label_91;
	}
	INST_ICONST(1);
	goto label_92;
label_91:;
	INST_ICONST(0);
label_92:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(1012);
	if ((frame[1].i) != (48)) goto label_94;
	}
	{
	LINE_NUMBER(1013);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1014);
	if ((frame[1].i) == (120)) goto label_97;
	}
	{
	if ((frame[1].i) != (88)) goto label_98;
	}
label_97:;
	{
	LINE_NUMBER(1015);
	frame[4].i = (16);
	LINE_NUMBER(1016);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_isHex = (jint(1));
	LINE_NUMBER(1017);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	goto label_94;
	}
label_98:;
	{
	LINE_NUMBER(1018);
	if ((frame[5].i) == 0) goto label_101;
	}
	{
	if ((frame[1].i) == (111)) goto label_102;
	}
	{
	if ((frame[1].i) != (79)) goto label_101;
	}
label_102:;
	{
	LINE_NUMBER(1019);
	frame[4].i = (8);
	LINE_NUMBER(1020);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_isOctal = (jint(1));
	LINE_NUMBER(1021);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	goto label_94;
	}
label_101:;
	{
	LINE_NUMBER(1022);
	if ((frame[5].i) == 0) goto label_105;
	}
	{
	if ((frame[1].i) == (98)) goto label_106;
	}
	{
	if ((frame[1].i) != (66)) goto label_105;
	}
label_106:;
	{
	LINE_NUMBER(1023);
	frame[4].i = (jint(2));
	LINE_NUMBER(1024);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_isBinary = (jint(1));
	LINE_NUMBER(1025);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	goto label_94;
	}
label_105:;
	{
	LINE_NUMBER(1026);
	jint temp0 = (jint)SM_rhino_TokenStream_isDigit_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_109;
	}
	{
	LINE_NUMBER(1027);
	frame[4].i = (8);
	LINE_NUMBER(1028);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_isOldOctal = (jint(1));
	goto label_94;
	}
label_109:;
	{
	LINE_NUMBER(1030);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (48));
	}
label_94:;
	{
	LINE_NUMBER(1034);
	frame[6].i = (jint(1));
	LINE_NUMBER(1035);
	if ((frame[4].i) != (16)) goto label_113;
	}
label_114:;
	{
	LINE_NUMBER(1036);
	jint temp0 = jint(0);
	jint temp1 = (jint)SM_rhino_Kit_xDigitToInt_int_int_R_int(ctx, (frame[1].i), (jint(0)));
	if (temp0 > temp1) goto label_115;
	}
	{
	LINE_NUMBER(1037);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1038);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1039);
	frame[6].i = (jint(0));
	goto label_114;
	}
label_113:;
	{
	LINE_NUMBER(1042);
	if ((48) > (frame[1].i)) goto label_115;
	}
	{
	if ((frame[1].i) > (57)) goto label_115;
	}
	{
	LINE_NUMBER(1043);
	if ((frame[4].i) != (8)) goto label_120;
	}
	{
	if ((frame[1].i) < (56)) goto label_120;
	}
	{
	LINE_NUMBER(1044);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_isOldOctal) == 0) goto label_122;
	}
	{
	LINE_NUMBER(1051);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"msg.bad.octal.literal"_j));
	sp += 2;
	if ((frame[1].i) != (56)) goto label_124;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"8"_j));
	goto label_125;
label_124:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"9"_j));
label_125:;
	{
	sp -= 3;
	((func_rhino_Parser_addWarning_java_lang_String_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addWarning_java_lang_String_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1053);
	frame[4].i = (10);
	goto label_127;
	}
label_122:;
	{
	LINE_NUMBER(1055);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.caught.nfe"_j))));
	LINE_NUMBER(1056);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_120:;
	{
	LINE_NUMBER(1058);
	if ((frame[4].i) != (jint(2))) goto label_127;
	}
	{
	if ((frame[1].i) < (50)) goto label_127;
	}
	{
	LINE_NUMBER(1059);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.caught.nfe"_j))));
	LINE_NUMBER(1060);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_127:;
	{
	LINE_NUMBER(1062);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1063);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1064);
	frame[6].i = (jint(0));
	goto label_113;
	}
label_115:;
	{
	LINE_NUMBER(1067);
	if ((frame[6].i) == 0) goto label_133;
	}
	{
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_isBinary) != 0) goto label_134;
	}
	{
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_isOctal) != 0) goto label_134;
	}
	{
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_isHex) == 0) goto label_133;
	}
label_134:;
	{
	LINE_NUMBER(1068);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.caught.nfe"_j))));
	LINE_NUMBER(1069);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_133:;
	{
	LINE_NUMBER(1072);
	frame[7].i = (jint(1));
	LINE_NUMBER(1074);
	if ((frame[4].i) != (10)) goto label_137;
	}
	{
	if ((frame[1].i) == (46)) goto label_138;
	}
	{
	if ((frame[1].i) == (101)) goto label_138;
	}
	{
	if ((frame[1].i) != (69)) goto label_137;
	}
label_138:;
	{
	LINE_NUMBER(1075);
	frame[7].i = (jint(0));
	LINE_NUMBER(1076);
	if ((frame[1].i) != (46)) goto label_140;
	}
label_141:;
	{
	LINE_NUMBER(1078);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1079);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1080);
	jint temp1 = (jint)SM_rhino_TokenStream_isDigit_int_R_boolean(ctx, (frame[1].i));
	if (temp1 != 0) goto label_141;
	}
label_140:;
	{
	LINE_NUMBER(1082);
	if ((frame[1].i) == (101)) goto label_144;
	}
	{
	if ((frame[1].i) != (69)) goto label_137;
	}
label_144:;
	{
	LINE_NUMBER(1083);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1084);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1085);
	if ((frame[1].i) == (43)) goto label_147;
	}
	{
	if ((frame[1].i) != (45)) goto label_148;
	}
label_147:;
	{
	LINE_NUMBER(1086);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1087);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	}
label_148:;
	{
	LINE_NUMBER(1089);
	jint temp0 = (jint)SM_rhino_TokenStream_isDigit_int_R_boolean(ctx, (frame[1].i));
	if (temp0 != 0) goto label_150;
	}
	{
	LINE_NUMBER(1090);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.missing.exponent"_j))));
	LINE_NUMBER(1091);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_150:;
	{
	LINE_NUMBER(1094);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1095);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1096);
	jint temp1 = (jint)SM_rhino_TokenStream_isDigit_int_R_boolean(ctx, (frame[1].i));
	if (temp1 != 0) goto label_150;
	}
label_137:;
	{
	LINE_NUMBER(1099);
	M_rhino_TokenStream_ungetChar_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1100);
	sp[0].o = (jobject)M_rhino_TokenStream_getStringFromBuffer_R_java_lang_String(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(1101);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_string = (jref) (frame[8].o);
	LINE_NUMBER(1104);
	if ((frame[4].i) != (10)) goto label_158;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_158;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1107);
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[8].o));
	frame[9].d = temp0;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1111);
	goto label_159;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1108);
	frame[11].o = sp[0].o;
	LINE_NUMBER(1109);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.caught.nfe"_j))));
	LINE_NUMBER(1110);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_158:;
	{
	LINE_NUMBER(1113);
	jdouble temp0 = (jdouble)SM_rhino_ScriptRuntime_stringPrefixToNumber_java_lang_String_int_int_R_double(ctx, (frame[8].o), (jint(0)), (frame[4].i));
	frame[9].d = temp0;
	}
label_159:;
	{
	LINE_NUMBER(1116);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_number = (frame[9].d);
	LINE_NUMBER(1117);
	popStackFrame(ctx);
	return (40);
	}
label_87:;
	{
	LINE_NUMBER(1121);
	if ((frame[1].i) == (34)) goto label_163;
	}
	{
	if ((frame[1].i) == (39)) goto label_163;
	}
	{
	if ((frame[1].i) != (96)) goto label_164;
	}
label_163:;
	{
	LINE_NUMBER(1127);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_quoteChar = (frame[1].i);
	LINE_NUMBER(1128);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(1130);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_boolean_R_int(ctx, (frame[0].o), (jint(0)));
	frame[1].i = temp0;
	}
label_167:;
	{
	LINE_NUMBER(1132);
	if ((frame[1].i) == ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_quoteChar)) goto label_168;
	}
	{
	LINE_NUMBER(1133);
	if ((frame[1].i) == (10)) goto label_170;
	}
	{
	if ((frame[1].i) != (jint(-1))) goto label_171;
	}
label_170:;
	{
	LINE_NUMBER(1134);
	M_rhino_TokenStream_ungetChar_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1135);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor);
	LINE_NUMBER(1136);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.unterminated.string.lit"_j))));
	LINE_NUMBER(1137);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_171:;
	{
	LINE_NUMBER(1140);
	if ((frame[1].i) != (92)) goto label_175;
	}
	{
	LINE_NUMBER(1144);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1145);
	switch((frame[1].i)) {
		case 10: goto label_178;
		case 98: goto label_179;
		case 102: goto label_180;
		case 110: goto label_181;
		case 114: goto label_182;
		case 116: goto label_183;
		case 117: goto label_184;
		case 118: goto label_185;
		case 120: goto label_186;
		default: goto label_187;
	}
	}
label_179:;
	{
	LINE_NUMBER(1147);
	frame[1].i = (8);
	LINE_NUMBER(1148);
	goto label_175;
	}
label_180:;
	{
	LINE_NUMBER(1150);
	frame[1].i = (12);
	LINE_NUMBER(1151);
	goto label_175;
	}
label_181:;
	{
	LINE_NUMBER(1153);
	frame[1].i = (10);
	LINE_NUMBER(1154);
	goto label_175;
	}
label_182:;
	{
	LINE_NUMBER(1156);
	frame[1].i = (13);
	LINE_NUMBER(1157);
	goto label_175;
	}
label_183:;
	{
	LINE_NUMBER(1159);
	frame[1].i = (9);
	LINE_NUMBER(1160);
	goto label_175;
	}
label_185:;
	{
	LINE_NUMBER(1165);
	frame[1].i = (11);
	LINE_NUMBER(1166);
	goto label_175;
	}
label_184:;
	{
	LINE_NUMBER(1172);
	frame[5].i = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop);
	LINE_NUMBER(1173);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (117));
	LINE_NUMBER(1174);
	frame[4].i = (jint(0));
	LINE_NUMBER(1175);
	frame[6].i = (jint(0));
	}
label_197:;
	{
	if ((frame[6].i) == (jint(4))) goto label_198;
	}
	{
	LINE_NUMBER(1176);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1177);
	jint temp1 = (jint)SM_rhino_Kit_xDigitToInt_int_int_R_int(ctx, (frame[1].i), (frame[4].i));
	frame[4].i = temp1;
	LINE_NUMBER(1178);
	if ((frame[4].i) >= 0) goto label_202;
	}
	LINE_NUMBER(1179);
	goto label_167;
label_202:;
	{
	LINE_NUMBER(1181);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1175);
	INST_IINC(6, 1);
	goto label_197;
	}
label_198:;
	{
	LINE_NUMBER(1185);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (frame[5].i);
	LINE_NUMBER(1186);
	frame[1].i = (frame[4].i);
	LINE_NUMBER(1187);
	goto label_175;
	}
label_186:;
	{
	LINE_NUMBER(1191);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1192);
	jint temp1 = (jint)SM_rhino_Kit_xDigitToInt_int_int_R_int(ctx, (frame[1].i), (jint(0)));
	frame[4].i = temp1;
	LINE_NUMBER(1193);
	if ((frame[4].i) >= 0) goto label_209;
	}
	{
	LINE_NUMBER(1194);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (120));
	LINE_NUMBER(1195);
	goto label_167;
	}
label_209:;
	{
	LINE_NUMBER(1197);
	frame[6].i = (frame[1].i);
	LINE_NUMBER(1198);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1199);
	jint temp1 = (jint)SM_rhino_Kit_xDigitToInt_int_int_R_int(ctx, (frame[1].i), (frame[4].i));
	frame[4].i = temp1;
	LINE_NUMBER(1200);
	if ((frame[4].i) >= 0) goto label_215;
	}
	{
	LINE_NUMBER(1201);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (120));
	LINE_NUMBER(1202);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(1203);
	goto label_167;
	}
label_215:;
	{
	LINE_NUMBER(1206);
	frame[1].i = (frame[4].i);
	LINE_NUMBER(1207);
	goto label_175;
	}
label_178:;
	{
	LINE_NUMBER(1212);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1213);
	goto label_167;
	}
label_187:;
	{
	LINE_NUMBER(1216);
	if ((48) > (frame[1].i)) goto label_175;
	}
	{
	if ((frame[1].i) >= (56)) goto label_175;
	}
	{
	LINE_NUMBER(1217);
	frame[7].i = ((frame[1].i) - (48));
	LINE_NUMBER(1218);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1219);
	if ((48) > (frame[1].i)) goto label_224;
	}
	{
	if ((frame[1].i) >= (56)) goto label_224;
	}
	{
	LINE_NUMBER(1220);
	frame[7].i = ((((8) * (frame[7].i)) + (frame[1].i)) - (48));
	LINE_NUMBER(1221);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1222);
	if ((48) > (frame[1].i)) goto label_224;
	}
	{
	if ((frame[1].i) >= (56)) goto label_224;
	}
	{
	if ((frame[7].i) > (31)) goto label_224;
	}
	{
	LINE_NUMBER(1225);
	frame[7].i = ((((8) * (frame[7].i)) + (frame[1].i)) - (48));
	LINE_NUMBER(1226);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	}
label_224:;
	{
	LINE_NUMBER(1229);
	M_rhino_TokenStream_ungetChar_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1230);
	frame[1].i = (frame[7].i);
	}
label_175:;
	{
	LINE_NUMBER(1234);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1235);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_boolean_R_int(ctx, (frame[0].o), (jint(0)));
	frame[1].i = temp0;
	goto label_167;
	}
label_168:;
	{
	LINE_NUMBER(1238);
	sp[0].o = (jobject)M_rhino_TokenStream_getStringFromBuffer_R_java_lang_String(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1239);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_allStrings;
	sp[1].o = (jobject)((func_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_ObjToIntMap_intern_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (frame[4].o));
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_string = (jref) (checkCast(ctx, &class_java_lang_String, sp[1].o));
	LINE_NUMBER(1240);
	popStackFrame(ctx);
	return (41);
	}
label_164:;
	{
	LINE_NUMBER(1243);
	switch((frame[1].i)) {
		case 33: goto label_234;
		case 34: goto label_235;
		case 35: goto label_235;
		case 36: goto label_235;
		case 37: goto label_236;
		case 38: goto label_237;
		case 39: goto label_235;
		case 40: goto label_238;
		case 41: goto label_239;
		case 42: goto label_240;
		case 43: goto label_241;
		case 44: goto label_242;
		case 45: goto label_243;
		case 46: goto label_244;
		case 47: goto label_245;
		case 48: goto label_235;
		case 49: goto label_235;
		case 50: goto label_235;
		case 51: goto label_235;
		case 52: goto label_235;
		case 53: goto label_235;
		case 54: goto label_235;
		case 55: goto label_235;
		case 56: goto label_235;
		case 57: goto label_235;
		case 58: goto label_246;
		case 59: goto label_247;
		case 60: goto label_248;
		case 61: goto label_249;
		case 62: goto label_250;
		case 63: goto label_251;
		case 64: goto label_235;
		case 65: goto label_235;
		case 66: goto label_235;
		case 67: goto label_235;
		case 68: goto label_235;
		case 69: goto label_235;
		case 70: goto label_235;
		case 71: goto label_235;
		case 72: goto label_235;
		case 73: goto label_235;
		case 74: goto label_235;
		case 75: goto label_235;
		case 76: goto label_235;
		case 77: goto label_235;
		case 78: goto label_235;
		case 79: goto label_235;
		case 80: goto label_235;
		case 81: goto label_235;
		case 82: goto label_235;
		case 83: goto label_235;
		case 84: goto label_235;
		case 85: goto label_235;
		case 86: goto label_235;
		case 87: goto label_235;
		case 88: goto label_235;
		case 89: goto label_235;
		case 90: goto label_235;
		case 91: goto label_252;
		case 92: goto label_235;
		case 93: goto label_253;
		case 94: goto label_254;
		case 95: goto label_235;
		case 96: goto label_235;
		case 97: goto label_235;
		case 98: goto label_235;
		case 99: goto label_235;
		case 100: goto label_235;
		case 101: goto label_235;
		case 102: goto label_235;
		case 103: goto label_235;
		case 104: goto label_235;
		case 105: goto label_235;
		case 106: goto label_235;
		case 107: goto label_235;
		case 108: goto label_235;
		case 109: goto label_235;
		case 110: goto label_235;
		case 111: goto label_235;
		case 112: goto label_235;
		case 113: goto label_235;
		case 114: goto label_235;
		case 115: goto label_235;
		case 116: goto label_235;
		case 117: goto label_235;
		case 118: goto label_235;
		case 119: goto label_235;
		case 120: goto label_235;
		case 121: goto label_235;
		case 122: goto label_235;
		case 123: goto label_255;
		case 124: goto label_256;
		case 125: goto label_257;
		case 126: goto label_258;
		default: goto label_235;
	}
	}
label_247:;
	{
	LINE_NUMBER(1245);
	popStackFrame(ctx);
	return (83);
	}
label_252:;
	{
	LINE_NUMBER(1247);
	popStackFrame(ctx);
	return (84);
	}
label_253:;
	{
	LINE_NUMBER(1249);
	popStackFrame(ctx);
	return (85);
	}
label_255:;
	{
	LINE_NUMBER(1251);
	popStackFrame(ctx);
	return (86);
	}
label_257:;
	{
	LINE_NUMBER(1253);
	popStackFrame(ctx);
	return (87);
	}
label_238:;
	{
	LINE_NUMBER(1255);
	popStackFrame(ctx);
	return (88);
	}
label_239:;
	{
	LINE_NUMBER(1257);
	popStackFrame(ctx);
	return (89);
	}
label_242:;
	{
	LINE_NUMBER(1259);
	popStackFrame(ctx);
	return (90);
	}
label_251:;
	{
	LINE_NUMBER(1261);
	popStackFrame(ctx);
	return (103);
	}
label_246:;
	{
	LINE_NUMBER(1263);
	popStackFrame(ctx);
	return (104);
	}
label_244:;
	{
	LINE_NUMBER(1265);
	popStackFrame(ctx);
	return (109);
	}
label_256:;
	{
	LINE_NUMBER(1267);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (124));
	if (temp0 == 0) goto label_259;
	}
	{
	LINE_NUMBER(1268);
	popStackFrame(ctx);
	return (105);
	}
label_259:;
	{
	LINE_NUMBER(1269);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_261;
	}
	{
	LINE_NUMBER(1270);
	popStackFrame(ctx);
	return (92);
	}
label_261:;
	{
	LINE_NUMBER(1272);
	popStackFrame(ctx);
	return (9);
	}
label_254:;
	{
	LINE_NUMBER(1276);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_263;
	}
	{
	LINE_NUMBER(1277);
	popStackFrame(ctx);
	return (93);
	}
label_263:;
	{
	LINE_NUMBER(1279);
	popStackFrame(ctx);
	return (10);
	}
label_237:;
	{
	LINE_NUMBER(1282);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (38));
	if (temp0 == 0) goto label_265;
	}
	{
	LINE_NUMBER(1283);
	popStackFrame(ctx);
	return (106);
	}
label_265:;
	{
	LINE_NUMBER(1284);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_267;
	}
	{
	LINE_NUMBER(1285);
	popStackFrame(ctx);
	return (94);
	}
label_267:;
	{
	LINE_NUMBER(1287);
	popStackFrame(ctx);
	return (11);
	}
label_249:;
	{
	LINE_NUMBER(1291);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_269;
	}
	{
	LINE_NUMBER(1292);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_271;
	}
	{
	LINE_NUMBER(1293);
	popStackFrame(ctx);
	return (46);
	}
label_271:;
	{
	LINE_NUMBER(1295);
	popStackFrame(ctx);
	return (12);
	}
label_269:;
	{
	LINE_NUMBER(1296);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (62));
	if (temp0 == 0) goto label_273;
	}
	{
	LINE_NUMBER(1297);
	popStackFrame(ctx);
	return (165);
	}
label_273:;
	{
	LINE_NUMBER(1299);
	popStackFrame(ctx);
	return (91);
	}
label_234:;
	{
	LINE_NUMBER(1303);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_275;
	}
	{
	LINE_NUMBER(1304);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_277;
	}
	{
	LINE_NUMBER(1305);
	popStackFrame(ctx);
	return (47);
	}
label_277:;
	{
	LINE_NUMBER(1307);
	popStackFrame(ctx);
	return (13);
	}
label_275:;
	{
	LINE_NUMBER(1309);
	popStackFrame(ctx);
	return (26);
	}
label_248:;
	{
	LINE_NUMBER(1313);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (33));
	if (temp0 == 0) goto label_279;
	}
	{
	LINE_NUMBER(1314);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (45));
	if (temp0 == 0) goto label_281;
	}
	{
	LINE_NUMBER(1315);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (45));
	if (temp0 == 0) goto label_283;
	}
	{
	LINE_NUMBER(1316);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenBeg = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor) - (jint(4)));
	LINE_NUMBER(1317);
	M_rhino_TokenStream_skipLine(ctx, (frame[0].o));
	LINE_NUMBER(1318);
	sp[0].o = frame[0].o;
	clinit_rhino_Token$CommentType(ctx);
	sp[1].o = (jobject)SF_rhino_Token$CommentType_HTML;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_commentType = (jref) sp[1].o;
	LINE_NUMBER(1319);
	popStackFrame(ctx);
	return (162);
	}
label_283:;
	{
	LINE_NUMBER(1321);
	M_rhino_TokenStream_ungetCharIgnoreLineEnd_int(ctx, (frame[0].o), (45));
	}
label_281:;
	{
	LINE_NUMBER(1323);
	M_rhino_TokenStream_ungetCharIgnoreLineEnd_int(ctx, (frame[0].o), (33));
	}
label_279:;
	{
	LINE_NUMBER(1325);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (60));
	if (temp0 == 0) goto label_288;
	}
	{
	LINE_NUMBER(1326);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_290;
	}
	{
	LINE_NUMBER(1327);
	popStackFrame(ctx);
	return (95);
	}
label_290:;
	{
	LINE_NUMBER(1329);
	popStackFrame(ctx);
	return (18);
	}
label_288:;
	{
	LINE_NUMBER(1331);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_292;
	}
	{
	LINE_NUMBER(1332);
	popStackFrame(ctx);
	return (15);
	}
label_292:;
	{
	LINE_NUMBER(1334);
	popStackFrame(ctx);
	return (14);
	}
label_250:;
	{
	LINE_NUMBER(1337);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (62));
	if (temp0 == 0) goto label_294;
	}
	{
	LINE_NUMBER(1338);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (62));
	if (temp0 == 0) goto label_296;
	}
	{
	LINE_NUMBER(1339);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_298;
	}
	{
	LINE_NUMBER(1340);
	popStackFrame(ctx);
	return (97);
	}
label_298:;
	{
	LINE_NUMBER(1342);
	popStackFrame(ctx);
	return (20);
	}
label_296:;
	{
	LINE_NUMBER(1344);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_300;
	}
	{
	LINE_NUMBER(1345);
	popStackFrame(ctx);
	return (96);
	}
label_300:;
	{
	LINE_NUMBER(1347);
	popStackFrame(ctx);
	return (19);
	}
label_294:;
	{
	LINE_NUMBER(1349);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_302;
	}
	{
	LINE_NUMBER(1350);
	popStackFrame(ctx);
	return (17);
	}
label_302:;
	{
	LINE_NUMBER(1352);
	popStackFrame(ctx);
	return (16);
	}
label_240:;
	{
	LINE_NUMBER(1355);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_304;
	}
	{
	LINE_NUMBER(1356);
	popStackFrame(ctx);
	return (100);
	}
label_304:;
	{
	LINE_NUMBER(1358);
	popStackFrame(ctx);
	return (23);
	}
label_245:;
	{
	LINE_NUMBER(1361);
	M_rhino_TokenStream_markCommentStart(ctx, (frame[0].o));
	LINE_NUMBER(1363);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (47));
	if (temp0 == 0) goto label_307;
	}
	{
	LINE_NUMBER(1364);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenBeg = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor) - (jint(2)));
	LINE_NUMBER(1365);
	M_rhino_TokenStream_skipLine(ctx, (frame[0].o));
	LINE_NUMBER(1366);
	sp[0].o = frame[0].o;
	clinit_rhino_Token$CommentType(ctx);
	sp[1].o = (jobject)SF_rhino_Token$CommentType_LINE;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_commentType = (jref) sp[1].o;
	LINE_NUMBER(1367);
	popStackFrame(ctx);
	return (162);
	}
label_307:;
	{
	LINE_NUMBER(1370);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (42));
	if (temp0 == 0) goto label_312;
	}
	{
	LINE_NUMBER(1371);
	frame[4].i = (jint(0));
	LINE_NUMBER(1372);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenBeg = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor) - (jint(2)));
	LINE_NUMBER(1373);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (42));
	if (temp0 == 0) goto label_316;
	}
	{
	LINE_NUMBER(1374);
	frame[4].i = (jint(1));
	LINE_NUMBER(1375);
	sp[0].o = frame[0].o;
	clinit_rhino_Token$CommentType(ctx);
	sp[1].o = (jobject)SF_rhino_Token$CommentType_JSDOC;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_commentType = (jref) sp[1].o;
	goto label_319;
	}
label_316:;
	{
	LINE_NUMBER(1377);
	sp[0].o = frame[0].o;
	clinit_rhino_Token$CommentType(ctx);
	sp[1].o = (jobject)SF_rhino_Token$CommentType_BLOCK_COMMENT;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_commentType = (jref) sp[1].o;
	}
label_319:;
	{
	LINE_NUMBER(1380);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1381);
	if ((frame[1].i) != (jint(-1))) goto label_321;
	}
	{
	LINE_NUMBER(1382);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor) - (jint(1)));
	LINE_NUMBER(1383);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.unterminated.comment"_j))));
	LINE_NUMBER(1384);
	popStackFrame(ctx);
	return (162);
	}
label_321:;
	{
	LINE_NUMBER(1385);
	if ((frame[1].i) != (42)) goto label_325;
	}
	{
	LINE_NUMBER(1386);
	frame[4].i = (jint(1));
	goto label_319;
	}
label_325:;
	{
	LINE_NUMBER(1387);
	if ((frame[1].i) != (47)) goto label_327;
	}
	{
	LINE_NUMBER(1388);
	if ((frame[4].i) == 0) goto label_319;
	}
	{
	LINE_NUMBER(1389);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor);
	LINE_NUMBER(1390);
	popStackFrame(ctx);
	return (162);
	}
label_327:;
	{
	LINE_NUMBER(1393);
	frame[4].i = (jint(0));
	LINE_NUMBER(1394);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor);
	goto label_319;
	}
label_312:;
	{
	LINE_NUMBER(1399);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_332;
	}
	{
	LINE_NUMBER(1400);
	popStackFrame(ctx);
	return (101);
	}
label_332:;
	{
	LINE_NUMBER(1402);
	popStackFrame(ctx);
	return (24);
	}
label_236:;
	{
	LINE_NUMBER(1405);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_334;
	}
	{
	LINE_NUMBER(1406);
	popStackFrame(ctx);
	return (102);
	}
label_334:;
	{
	LINE_NUMBER(1408);
	popStackFrame(ctx);
	return (25);
	}
label_258:;
	{
	LINE_NUMBER(1411);
	popStackFrame(ctx);
	return (27);
	}
label_241:;
	{
	LINE_NUMBER(1414);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_336;
	}
	{
	LINE_NUMBER(1415);
	popStackFrame(ctx);
	return (98);
	}
label_336:;
	{
	LINE_NUMBER(1416);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (43));
	if (temp0 == 0) goto label_338;
	}
	{
	LINE_NUMBER(1417);
	popStackFrame(ctx);
	return (107);
	}
label_338:;
	{
	LINE_NUMBER(1419);
	popStackFrame(ctx);
	return (21);
	}
label_243:;
	{
	LINE_NUMBER(1423);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (61));
	if (temp0 == 0) goto label_340;
	}
	{
	LINE_NUMBER(1424);
	frame[1].i = (99);
	goto label_342;
	}
label_340:;
	{
	LINE_NUMBER(1425);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (45));
	if (temp0 == 0) goto label_343;
	}
	{
	LINE_NUMBER(1426);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_dirtyLine) != 0) goto label_345;
	}
	{
	LINE_NUMBER(1429);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (62));
	if (temp0 == 0) goto label_345;
	}
	{
	LINE_NUMBER(1430);
	M_rhino_TokenStream_markCommentStart_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"--"_j))));
	LINE_NUMBER(1431);
	M_rhino_TokenStream_skipLine(ctx, (frame[0].o));
	LINE_NUMBER(1432);
	sp[0].o = frame[0].o;
	clinit_rhino_Token$CommentType(ctx);
	sp[1].o = (jobject)SF_rhino_Token$CommentType_HTML;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_commentType = (jref) sp[1].o;
	LINE_NUMBER(1433);
	popStackFrame(ctx);
	return (162);
	}
label_345:;
	{
	LINE_NUMBER(1436);
	frame[1].i = (108);
	goto label_342;
	}
label_343:;
	{
	LINE_NUMBER(1438);
	frame[1].i = (22);
	}
label_342:;
	{
	LINE_NUMBER(1440);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_dirtyLine = (jint(1));
	LINE_NUMBER(1441);
	popStackFrame(ctx);
	return (frame[1].i);
	}
label_235:;
	{
	LINE_NUMBER(1444);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.illegal.character"_j))), (frame[1].i));
	LINE_NUMBER(1445);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_TokenStream_isAlpha_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:isAlpha", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TokenStream(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1452);
	if ((frame[0].i) > (90)) goto label_1;
	}
	{
	LINE_NUMBER(1453);
	if ((65) > (frame[0].i)) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1455);
	if ((97) > (frame[0].i)) goto label_5;
	}
	{
	if ((frame[0].i) > (122)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_TokenStream_isDigit_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:isDigit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TokenStream(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1459);
	if ((48) > (frame[0].i)) goto label_1;
	}
	{
	if ((frame[0].i) > (57)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_TokenStream_isJSSpace_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:isJSSpace", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TokenStream(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1467);
	if ((frame[0].i) > (127)) goto label_1;
	}
	{
	LINE_NUMBER(1468);
	if ((frame[0].i) == (32)) goto label_3;
	}
	{
	if ((frame[0].i) == (9)) goto label_3;
	}
	{
	if ((frame[0].i) == (12)) goto label_3;
	}
	{
	if ((frame[0].i) != (11)) goto label_4;
	}
label_3:;
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1470);
	if ((frame[0].i) == (160)) goto label_6;
	}
	{
	if ((frame[0].i) == (jint(65279))) goto label_6;
	}
	{
	jint temp0 = jchar((frame[0].i));
	LINE_NUMBER(1471);
	jint temp1 = (jint)SM_java_lang_Character_getType_char_R_int(ctx, temp0);
	if (temp1 != (12)) goto label_8;
	}
label_6:;
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	LINE_NUMBER(1470);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_rhino_TokenStream_isJSFormatChar_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:isJSFormatChar", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TokenStream(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1475);
	if ((frame[0].i) <= (127)) goto label_1;
	}
	{
	jint temp0 = (jint)SM_java_lang_Character_getType_char_R_int(ctx, (jchar((frame[0].i))));
	if (temp0 != (16)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_rhino_TokenStream_readRegExp_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:readRegExp", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1483);
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenBeg);
	LINE_NUMBER(1484);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(1485);
	if ((frame[1].i) != (101)) goto label_3;
	}
	{
	LINE_NUMBER(1487);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (61));
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(1489);
	if ((frame[1].i) == (24)) goto label_6;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_6:;
	{
	LINE_NUMBER(1490);
	jint temp0 = (jint)M_rhino_TokenStream_peekChar_R_int(ctx, (frame[0].o));
	if (temp0 != (42)) goto label_5;
	}
	{
	LINE_NUMBER(1491);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor) - (jint(1)));
	LINE_NUMBER(1492);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBuffer;
	init_java_lang_String_Array1_char_int_int(ctx, sp[1].o, sp[2].o, (jint(0)), ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop));
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_string = (jref) sp[1].o;
	LINE_NUMBER(1493);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.unterminated.re.lit"_j))));
	LINE_NUMBER(1494);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(1498);
	frame[3].i = (jint(0));
	}
label_11:;
	{
	LINE_NUMBER(1500);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[4].i = temp0;
	if (temp0 != (47)) goto label_13;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_14;
label_13:;
	{
	LINE_NUMBER(1501);
	if ((frame[4].i) == (10)) goto label_15;
	}
	{
	if ((frame[4].i) != (jint(-1))) goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(1502);
	M_rhino_TokenStream_ungetChar_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(1503);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor) - (jint(1)));
	LINE_NUMBER(1504);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBuffer;
	init_java_lang_String_Array1_char_int_int(ctx, sp[1].o, sp[2].o, (jint(0)), ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop));
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_string = (jref) sp[1].o;
	LINE_NUMBER(1505);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.unterminated.re.lit"_j))));
	LINE_NUMBER(1506);
	popStackFrame(ctx);
	return;
	}
label_16:;
	{
	LINE_NUMBER(1508);
	if ((frame[4].i) != (92)) goto label_21;
	}
	{
	LINE_NUMBER(1509);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(1510);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(1511);
	if ((frame[4].i) == (10)) goto label_25;
	}
	{
	if ((frame[4].i) != (jint(-1))) goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(1512);
	M_rhino_TokenStream_ungetChar_int(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(1513);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor) - (jint(1)));
	LINE_NUMBER(1514);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBuffer;
	init_java_lang_String_Array1_char_int_int(ctx, sp[1].o, sp[2].o, (jint(0)), ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop));
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_string = (jref) sp[1].o;
	LINE_NUMBER(1515);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.unterminated.re.lit"_j))));
	LINE_NUMBER(1516);
	popStackFrame(ctx);
	return;
	}
label_21:;
	{
	LINE_NUMBER(1518);
	if ((frame[4].i) != (91)) goto label_31;
	}
	{
	LINE_NUMBER(1519);
	frame[3].i = (jint(1));
	goto label_26;
	}
label_31:;
	{
	LINE_NUMBER(1520);
	if ((frame[4].i) != (93)) goto label_26;
	}
	{
	LINE_NUMBER(1521);
	frame[3].i = (jint(0));
	}
label_26:;
	{
	LINE_NUMBER(1523);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[4].i));
	goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(1525);
	frame[5].i = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop);
	}
label_34:;
	{
	LINE_NUMBER(1528);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (103));
	if (temp0 == 0) goto label_35;
	}
	{
	LINE_NUMBER(1529);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (103));
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(1530);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (105));
	if (temp0 == 0) goto label_37;
	}
	{
	LINE_NUMBER(1531);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (105));
	goto label_34;
	}
label_37:;
	{
	LINE_NUMBER(1532);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (109));
	if (temp0 == 0) goto label_39;
	}
	{
	LINE_NUMBER(1533);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (109));
	goto label_34;
	}
label_39:;
	{
	LINE_NUMBER(1534);
	jint temp0 = (jint)M_rhino_TokenStream_matchChar_int_R_boolean(ctx, (frame[0].o), (121));
	if (temp0 == 0) goto label_41;
	}
	{
	LINE_NUMBER(1535);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (121));
	goto label_34;
	}
label_41:;
	{
	LINE_NUMBER(1539);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = (((frame[2].i) + ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop)) + (jint(2)));
	LINE_NUMBER(1541);
	jint temp0 = (jint)M_rhino_TokenStream_peekChar_R_int(ctx, (frame[0].o));
	jint temp1 = (jint)SM_rhino_TokenStream_isAlpha_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_44;
	}
	{
	LINE_NUMBER(1542);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_reportError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_reportError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.invalid.re.flag"_j))));
	}
label_44:;
	{
	LINE_NUMBER(1545);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBuffer;
	init_java_lang_String_Array1_char_int_int(ctx, sp[1].o, sp[2].o, (jint(0)), (frame[5].i));
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_string = (jref) sp[1].o;
	LINE_NUMBER(1546);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBuffer;
	init_java_lang_String_Array1_char_int_int(ctx, sp[1].o, sp[2].o, (frame[5].i), (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop) - (frame[5].i)));
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_regExpFlags = (jref) sp[1].o;
	LINE_NUMBER(1548);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_TokenStream_readAndClearRegExpFlags_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:readAndClearRegExpFlags", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1551);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_regExpFlags;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1552);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_regExpFlags = (jref) (jobject(nullptr));
	LINE_NUMBER(1553);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_isXMLAttribute_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:isXMLAttribute", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1557);
	popStackFrame(ctx);
	return ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_xmlIsAttribute);
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_getFirstXMLToken_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getFirstXMLToken", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1561);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_xmlOpenTagsCount = (jint(0));
	LINE_NUMBER(1562);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_xmlIsAttribute = (jint(0));
	LINE_NUMBER(1563);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_xmlIsTagContent = (jint(0));
	LINE_NUMBER(1564);
	jint temp0 = (jint)M_rhino_TokenStream_canUngetChar_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(1565);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_4:;
	{
	LINE_NUMBER(1566);
	M_rhino_TokenStream_ungetChar_int(ctx, (frame[0].o), (60));
	LINE_NUMBER(1567);
	jint temp0 = (jint)((func_rhino_TokenStream_getNextXMLToken_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_TokenStream_getNextXMLToken_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_getNextXMLToken_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getNextXMLToken", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1571);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenBeg = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor);
	LINE_NUMBER(1572);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(1574);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	}
label_3:;
	{
	if ((frame[1].i) == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(1575);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_xmlIsTagContent) == 0) goto label_6;
	}
	{
	LINE_NUMBER(1576);
	switch((frame[1].i)) {
		case 9: goto label_8;
		case 10: goto label_8;
		case 13: goto label_8;
		case 32: goto label_8;
		case 34: goto label_9;
		case 39: goto label_9;
		case 47: goto label_10;
		case 61: goto label_11;
		case 62: goto label_12;
		default: goto label_13;
	}
	}
label_12:;
	{
	LINE_NUMBER(1578);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1579);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_xmlIsTagContent = (jint(0));
	LINE_NUMBER(1580);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_xmlIsAttribute = (jint(0));
	LINE_NUMBER(1581);
	goto label_17;
	}
label_10:;
	{
	LINE_NUMBER(1583);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1584);
	jint temp0 = (jint)M_rhino_TokenStream_peekChar_R_int(ctx, (frame[0].o));
	if (temp0 != (62)) goto label_17;
	}
	{
	LINE_NUMBER(1585);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1586);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1587);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_xmlIsTagContent = (jint(0));
	LINE_NUMBER(1588);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_xmlOpenTagsCount = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_xmlOpenTagsCount) - (jint(1)));
	goto label_17;
	}
label_9:;
	{
	LINE_NUMBER(1593);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1594);
	jint temp0 = (jint)M_rhino_TokenStream_readQuotedString_int_R_boolean(ctx, (frame[0].o), (frame[1].i));
	if (temp0 != 0) goto label_17;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(1597);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1598);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_xmlIsAttribute = (jint(1));
	LINE_NUMBER(1599);
	goto label_17;
	}
label_8:;
	{
	LINE_NUMBER(1604);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1605);
	goto label_17;
	}
label_13:;
	{
	LINE_NUMBER(1607);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1608);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_xmlIsAttribute = (jint(0));
	LINE_NUMBER(1609);
	goto label_17;
	}
label_6:;
	{
	LINE_NUMBER(1612);
	switch((frame[1].i)) {
		case 60: goto label_29;
		default: goto label_30;
	}
	}
label_29:;
	{
	LINE_NUMBER(1614);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1615);
	jint temp0 = (jint)M_rhino_TokenStream_peekChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1616);
	switch((frame[1].i)) {
		case 33: goto label_33;
		case 47: goto label_34;
		case 63: goto label_35;
		default: goto label_36;
	}
	}
label_33:;
	{
	LINE_NUMBER(1618);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1619);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1620);
	jint temp1 = (jint)M_rhino_TokenStream_peekChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp1;
	LINE_NUMBER(1621);
	switch((frame[1].i)) {
		case 45: goto label_40;
		case 91: goto label_41;
		default: goto label_42;
	}
	}
label_40:;
	{
	LINE_NUMBER(1623);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1624);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1625);
	jint temp1 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp1;
	LINE_NUMBER(1626);
	if ((frame[1].i) != (45)) goto label_46;
	}
	{
	LINE_NUMBER(1627);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1628);
	jint temp0 = (jint)M_rhino_TokenStream_readXmlComment_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_17;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_46:;
	{
	LINE_NUMBER(1631);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(1632);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_string = (jref) (jobject(nullptr));
	LINE_NUMBER(1633);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.XML.bad.form"_j))));
	LINE_NUMBER(1634);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_41:;
	{
	LINE_NUMBER(1638);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1639);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1640);
	jint temp1 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	if (temp1 != (67)) goto label_54;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1641);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, sp[0].o);
	if (temp0 != (68)) goto label_54;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1642);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, sp[0].o);
	if (temp0 != (65)) goto label_54;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1643);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, sp[0].o);
	if (temp0 != (84)) goto label_54;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1644);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, sp[0].o);
	if (temp0 != (65)) goto label_54;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1645);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, sp[0].o);
	if (temp0 != (91)) goto label_54;
	}
	{
	LINE_NUMBER(1646);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (67));
	LINE_NUMBER(1647);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (68));
	LINE_NUMBER(1648);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (65));
	LINE_NUMBER(1649);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (84));
	LINE_NUMBER(1650);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (65));
	LINE_NUMBER(1651);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (91));
	LINE_NUMBER(1652);
	jint temp0 = (jint)M_rhino_TokenStream_readCDATA_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_17;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_54:;
	{
	LINE_NUMBER(1656);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(1657);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_string = (jref) (jobject(nullptr));
	LINE_NUMBER(1658);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.XML.bad.form"_j))));
	LINE_NUMBER(1659);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_42:;
	{
	LINE_NUMBER(1663);
	jint temp0 = (jint)M_rhino_TokenStream_readEntity_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_17;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_35:;
	{
	LINE_NUMBER(1668);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1669);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1670);
	jint temp1 = (jint)M_rhino_TokenStream_readPI_R_boolean(ctx, (frame[0].o));
	if (temp1 != 0) goto label_17;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_34:;
	{
	LINE_NUMBER(1674);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1675);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1676);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_xmlOpenTagsCount) != 0) goto label_74;
	}
	{
	LINE_NUMBER(1678);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(1679);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_string = (jref) (jobject(nullptr));
	LINE_NUMBER(1680);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.XML.bad.form"_j))));
	LINE_NUMBER(1681);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_74:;
	{
	LINE_NUMBER(1683);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_xmlIsTagContent = (jint(1));
	LINE_NUMBER(1684);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_xmlOpenTagsCount = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_xmlOpenTagsCount) - (jint(1)));
	LINE_NUMBER(1685);
	goto label_17;
	}
label_36:;
	{
	LINE_NUMBER(1688);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_xmlIsTagContent = (jint(1));
	LINE_NUMBER(1689);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_xmlOpenTagsCount = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_xmlOpenTagsCount) + (jint(1)));
	LINE_NUMBER(1690);
	goto label_17;
	}
label_30:;
	{
	LINE_NUMBER(1694);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	}
label_17:;
	{
	LINE_NUMBER(1574);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(1700);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor);
	LINE_NUMBER(1701);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(1702);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_string = (jref) (jobject(nullptr));
	LINE_NUMBER(1703);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.XML.bad.form"_j))));
	LINE_NUMBER(1704);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_readQuotedString_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:readQuotedString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1711);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	}
label_1:;
	{
	if ((frame[2].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(1712);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1713);
	if ((frame[2].i) != (frame[1].i)) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(1711);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1716);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(1717);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_string = (jref) (jobject(nullptr));
	LINE_NUMBER(1718);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.XML.bad.form"_j))));
	LINE_NUMBER(1719);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_readXmlComment_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:readXmlComment", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1726);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	}
label_1:;
	{
	if ((frame[1].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(1727);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1728);
	if ((frame[1].i) != (45)) goto label_5;
	}
	{
	jint temp0 = (jint)M_rhino_TokenStream_peekChar_R_int(ctx, (frame[0].o));
	if (temp0 != (45)) goto label_5;
	}
	{
	LINE_NUMBER(1729);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1730);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1731);
	jint temp1 = (jint)M_rhino_TokenStream_peekChar_R_int(ctx, (frame[0].o));
	if (temp1 != (62)) goto label_1;
	}
	{
	LINE_NUMBER(1732);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1733);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1734);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(1738);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1741);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(1742);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_string = (jref) (jobject(nullptr));
	LINE_NUMBER(1743);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.XML.bad.form"_j))));
	LINE_NUMBER(1744);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_readCDATA_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:readCDATA", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1751);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	}
label_1:;
	{
	if ((frame[1].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(1752);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1753);
	if ((frame[1].i) != (93)) goto label_5;
	}
	{
	jint temp0 = (jint)M_rhino_TokenStream_peekChar_R_int(ctx, (frame[0].o));
	if (temp0 != (93)) goto label_5;
	}
	{
	LINE_NUMBER(1754);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1755);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1756);
	jint temp1 = (jint)M_rhino_TokenStream_peekChar_R_int(ctx, (frame[0].o));
	if (temp1 != (62)) goto label_1;
	}
	{
	LINE_NUMBER(1757);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1758);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1759);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(1763);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1766);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(1767);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_string = (jref) (jobject(nullptr));
	LINE_NUMBER(1768);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.XML.bad.form"_j))));
	LINE_NUMBER(1769);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_readEntity_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:readEntity", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1776);
	frame[1].i = (jint(1));
	LINE_NUMBER(1777);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	}
label_2:;
	{
	if ((frame[2].i) == (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(1778);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1779);
	switch((frame[2].i)) {
		case 60: goto label_6;
		case 62: goto label_7;
		default: goto label_8;
	}
	}
label_6:;
	{
	LINE_NUMBER(1781);
	INST_IINC(1, 1);
	LINE_NUMBER(1782);
	goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(1784);
	INST_IINC(1, -1);
	LINE_NUMBER(1785);
	if ((frame[1].i) != 0) goto label_8;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(1777);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1790);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(1791);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_string = (jref) (jobject(nullptr));
	LINE_NUMBER(1792);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.XML.bad.form"_j))));
	LINE_NUMBER(1793);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_readPI_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:readPI", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1800);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	}
label_1:;
	{
	if ((frame[1].i) == (jint(-1))) goto label_2;
	}
	{
	LINE_NUMBER(1801);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1802);
	if ((frame[1].i) != (63)) goto label_5;
	}
	{
	jint temp0 = (jint)M_rhino_TokenStream_peekChar_R_int(ctx, (frame[0].o));
	if (temp0 != (62)) goto label_5;
	}
	{
	LINE_NUMBER(1803);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1804);
	M_rhino_TokenStream_addToString_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1805);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(1800);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1809);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = (jint(0));
	LINE_NUMBER(1810);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_string = (jref) (jobject(nullptr));
	LINE_NUMBER(1811);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	((func_rhino_Parser_addError_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Parser_addError_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msg.XML.bad.form"_j))));
	LINE_NUMBER(1812);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_rhino_TokenStream_getStringFromBuffer_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getStringFromBuffer", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1816);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor);
	LINE_NUMBER(1817);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBuffer;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_TokenStream_addToString_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:addToString", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1821);
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop);
	LINE_NUMBER(1822);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBuffer;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(1823);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBuffer;
	sp[0].o = (jobject) createArray(ctx, &class_char, ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1824);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBuffer;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[3].o), (jint(0)), (frame[2].i));
	LINE_NUMBER(1825);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBuffer = (jref) (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(1827);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBuffer;
	ARRAY_ACCESS(jchar, sp[0].o, (frame[2].i)) = (jchar((frame[1].i)));
	LINE_NUMBER(1828);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_stringBufferTop = ((frame[2].i) + (jint(1)));
	LINE_NUMBER(1829);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_canUngetChar_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:canUngetChar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1832);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_ungetCursor) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_ungetBuffer;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_ungetCursor) - (jint(1))))) == (10)) goto label_2;
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

void M_rhino_TokenStream_ungetChar_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:ungetChar", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1837);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_ungetCursor) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_ungetBuffer;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_ungetCursor) - (jint(1))))) != (10)) goto label_1;
	}
	{
	LINE_NUMBER(1838);
	sp[0].o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	}
label_1:;
	{
	LINE_NUMBER(1839);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_ungetBuffer;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_ungetCursor;
	((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_ungetCursor = (temp0 + (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[1].i);
	LINE_NUMBER(1840);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor) - (jint(1)));
	LINE_NUMBER(1841);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_matchChar_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:matchChar", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1844);
	jint temp0 = (jint)M_rhino_TokenStream_getCharIgnoreLineEnd_R_int(ctx, (frame[0].o));
	frame[2].i = temp0;
	LINE_NUMBER(1845);
	if ((frame[2].i) != (frame[1].i)) goto label_2;
	}
	{
	LINE_NUMBER(1846);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor);
	LINE_NUMBER(1847);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(1849);
	M_rhino_TokenStream_ungetCharIgnoreLineEnd_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(1850);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_peekChar_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:peekChar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1854);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1855);
	M_rhino_TokenStream_ungetChar_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1856);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_getChar_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getChar", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1860);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_boolean_R_int(ctx, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_getChar_boolean_R_int(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getChar", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1864);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_ungetCursor) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1865);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor) + (jint(1)));
	LINE_NUMBER(1866);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_ungetBuffer;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_ungetCursor) - (jint(1));
	((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_ungetCursor = temp0;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	}
label_1:;
	{
	LINE_NUMBER(1871);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceString;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1872);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceCursor) != ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceEnd)) goto label_6;
	}
	{
	LINE_NUMBER(1873);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_hitEOF = (jint(1));
	LINE_NUMBER(1874);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(1876);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor) + (jint(1)));
	LINE_NUMBER(1877);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceString;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_sourceCursor;
	((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_sourceCursor = (temp0 + (jint(1)));
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[2].i = temp3;
	goto label_11;
	}
label_4:;
	{
	LINE_NUMBER(1879);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceCursor) != ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceEnd)) goto label_12;
	}
	{
	LINE_NUMBER(1880);
	jint temp0 = (jint)M_rhino_TokenStream_fillSourceBuffer_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(1881);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_hitEOF = (jint(1));
	LINE_NUMBER(1882);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_12:;
	{
	LINE_NUMBER(1885);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor) + (jint(1)));
	LINE_NUMBER(1886);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_sourceCursor;
	((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_sourceCursor = (temp0 + (jint(1)));
	frame[2].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	}
label_11:;
	{
	LINE_NUMBER(1889);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineEndChar) < 0) goto label_17;
	}
	{
	LINE_NUMBER(1890);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineEndChar) != (13)) goto label_19;
	}
	{
	if ((frame[2].i) != (10)) goto label_19;
	}
	{
	LINE_NUMBER(1891);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineEndChar = (10);
	LINE_NUMBER(1892);
	goto label_1;
	}
label_19:;
	{
	LINE_NUMBER(1894);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineEndChar = (jint(-1));
	LINE_NUMBER(1895);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineStart = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceCursor) - (jint(1)));
	LINE_NUMBER(1896);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_lineno) + (jint(1)));
	}
label_17:;
	{
	LINE_NUMBER(1899);
	if ((frame[2].i) > (127)) goto label_24;
	}
	{
	LINE_NUMBER(1900);
	if ((frame[2].i) == (10)) goto label_26;
	}
	{
	if ((frame[2].i) != (13)) goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(1901);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineEndChar = (frame[2].i);
	LINE_NUMBER(1902);
	frame[2].i = (10);
	goto label_27;
	}
label_24:;
	{
	LINE_NUMBER(1905);
	if ((frame[2].i) != (jint(65279))) goto label_29;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_29:;
	{
	LINE_NUMBER(1906);
	if ((frame[1].i) == 0) goto label_30;
	}
	{
	jint temp0 = (jint)SM_rhino_TokenStream_isJSFormatChar_int_R_boolean(ctx, (frame[2].i));
	if (temp0 == 0) goto label_30;
	}
	LINE_NUMBER(1907);
	goto label_1;
label_30:;
	{
	LINE_NUMBER(1909);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isJSLineTerminator_int_R_boolean(ctx, (frame[2].i));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(1910);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineEndChar = (frame[2].i);
	LINE_NUMBER(1911);
	frame[2].i = (10);
	}
label_27:;
	{
	LINE_NUMBER(1914);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_getCharIgnoreLineEnd_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getCharIgnoreLineEnd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1919);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_ungetCursor) == 0) goto label_1;
	}
	{
	LINE_NUMBER(1920);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor) + (jint(1)));
	LINE_NUMBER(1921);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_ungetBuffer;
	sp[1].o = frame[0].o;
	jint temp0 = ((jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_ungetCursor) - (jint(1));
	((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_ungetCursor = temp0;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jint, sp[0].o, temp0));
	}
label_1:;
	{
	LINE_NUMBER(1926);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceString;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(1927);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceCursor) != ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceEnd)) goto label_6;
	}
	{
	LINE_NUMBER(1928);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_hitEOF = (jint(1));
	LINE_NUMBER(1929);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_6:;
	{
	LINE_NUMBER(1931);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor) + (jint(1)));
	LINE_NUMBER(1932);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceString;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_sourceCursor;
	((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_sourceCursor = (temp0 + (jint(1)));
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[1].i = temp3;
	goto label_11;
	}
label_4:;
	{
	LINE_NUMBER(1934);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceCursor) != ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceEnd)) goto label_12;
	}
	{
	LINE_NUMBER(1935);
	jint temp0 = (jint)M_rhino_TokenStream_fillSourceBuffer_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_12;
	}
	{
	LINE_NUMBER(1936);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_hitEOF = (jint(1));
	LINE_NUMBER(1937);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_12:;
	{
	LINE_NUMBER(1940);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor) + (jint(1)));
	LINE_NUMBER(1941);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_sourceCursor;
	((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_sourceCursor = (temp0 + (jint(1)));
	frame[1].i = ((jint)ARRAY_ACCESS(jchar, sp[0].o, temp0));
	}
label_11:;
	{
	LINE_NUMBER(1944);
	if ((frame[1].i) > (127)) goto label_17;
	}
	{
	LINE_NUMBER(1945);
	if ((frame[1].i) == (10)) goto label_19;
	}
	{
	if ((frame[1].i) != (13)) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(1946);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineEndChar = (frame[1].i);
	LINE_NUMBER(1947);
	frame[1].i = (10);
	goto label_20;
	}
label_17:;
	{
	LINE_NUMBER(1950);
	if ((frame[1].i) != (jint(65279))) goto label_22;
	}
	INST_ILOAD(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_22:;
	{
	LINE_NUMBER(1951);
	jint temp0 = (jint)SM_rhino_TokenStream_isJSFormatChar_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_23;
	}
	LINE_NUMBER(1952);
	goto label_1;
label_23:;
	{
	LINE_NUMBER(1954);
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isJSLineTerminator_int_R_boolean(ctx, (frame[1].i));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(1955);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineEndChar = (frame[1].i);
	LINE_NUMBER(1956);
	frame[1].i = (10);
	}
label_20:;
	{
	LINE_NUMBER(1959);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void M_rhino_TokenStream_ungetCharIgnoreLineEnd_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:ungetCharIgnoreLineEnd", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1964);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_ungetBuffer;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_ungetCursor;
	((rhino_TokenStream *) NULL_CHECK(sp[1].o))->F_ungetCursor = (temp0 + (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (frame[1].i);
	LINE_NUMBER(1965);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_cursor) - (jint(1)));
	LINE_NUMBER(1966);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_TokenStream_skipLine(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:skipLine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(1971);
	jint temp0 = (jint)M_rhino_TokenStream_getChar_R_int(ctx, (frame[0].o));
	frame[1].i = temp0;
	if (temp0 == (jint(-1))) goto label_2;
	}
	{
	if ((frame[1].i) == (10)) goto label_2;
	}
	goto label_0;
label_2:;
	{
	LINE_NUMBER(1973);
	M_rhino_TokenStream_ungetChar_int(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(1974);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor);
	LINE_NUMBER(1975);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_getOffset_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getOffset", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1981);
	frame[1].i = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceCursor) - ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineStart));
	LINE_NUMBER(1982);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineEndChar) < 0) goto label_2;
	}
	LINE_NUMBER(1983);
	INST_IINC(1, -1);
label_2:;
	{
	LINE_NUMBER(1985);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_charAt_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:charAt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(1989);
	if ((frame[1].i) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(1990);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_5:;
	{
	LINE_NUMBER(1992);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceString;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(1993);
	if ((frame[1].i) < ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceEnd)) goto label_9;
	}
	{
	LINE_NUMBER(1994);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_9:;
	{
	LINE_NUMBER(1996);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceString;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}
label_7:;
	{
	LINE_NUMBER(1998);
	if ((frame[1].i) < ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceEnd)) goto label_11;
	}
	{
	LINE_NUMBER(1999);
	frame[2].i = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceCursor);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(2001);
	jint temp0 = (jint)M_rhino_TokenStream_fillSourceBuffer_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	LINE_NUMBER(2002);
	INST_ICONST(-1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	LINE_NUMBER(2007);
	goto label_15;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(2004);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2006);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_15:;
	{
	LINE_NUMBER(2010);
	frame[1].i = ((frame[1].i) - ((frame[2].i) - ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceCursor)));
	}
label_11:;
	{
	LINE_NUMBER(2012);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	popStackFrame(ctx);
	return ((jint)ARRAY_ACCESS(jchar, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_rhino_TokenStream_substring_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:substring", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(2016);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceString;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2017);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceString;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2019);
	frame[3].i = ((frame[2].i) - (frame[1].i));
	LINE_NUMBER(2020);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_TokenStream_getLine_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getLine", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2024);
	frame[1].i = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceCursor);
	LINE_NUMBER(2025);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineEndChar) < 0) goto label_2;
	}
	{
	LINE_NUMBER(2027);
	INST_IINC(1, -1);
	LINE_NUMBER(2028);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineEndChar) != (10)) goto label_5;
	}
	{
	jint temp0 = (jint)M_rhino_TokenStream_charAt_int_R_int(ctx, (frame[0].o), ((frame[1].i) - (jint(1))));
	if (temp0 != (13)) goto label_5;
	}
	{
	LINE_NUMBER(2029);
	INST_IINC(1, -1);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(2033);
	frame[2].i = ((frame[1].i) - ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineStart));
	}
label_7:;
	{
	LINE_NUMBER(2035);
	jint temp0 = (jint)M_rhino_TokenStream_charAt_int_R_int(ctx, (frame[0].o), (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineStart) + (frame[2].i)));
	frame[3].i = temp0;
	LINE_NUMBER(2036);
	if ((frame[3].i) == (jint(-1))) goto label_9;
	}
	{
	jint temp0 = (jint)SM_rhino_ScriptRuntime_isJSLineTerminator_int_R_boolean(ctx, (frame[3].i));
	if (temp0 == 0) goto label_10;
	}
	LINE_NUMBER(2037);
	goto label_9;
label_10:;
	{
	LINE_NUMBER(2034);
	INST_IINC(2, 1);
	goto label_7;
	}
label_9:;
	{
	LINE_NUMBER(2040);
	frame[1].i = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineStart) + (frame[2].i));
	}
label_5:;
	{
	LINE_NUMBER(2042);
	sp[0].o = (jobject)M_rhino_TokenStream_substring_int_int_R_java_lang_String(ctx, (frame[0].o), ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineStart), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_TokenStream_getLine_int_Array1_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getLine", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2046);
	if ((clinit_rhino_TokenStream(ctx), (jint)SF_rhino_TokenStream_$assertionsDisabled) != 0) goto label_1;
	}
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_2;
	{
	if ((frame[1].i) <= ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor)) goto label_1;
	}
label_2:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(2047);
	if ((clinit_rhino_TokenStream(ctx), (jint)SF_rhino_TokenStream_$assertionsDisabled) != 0) goto label_3;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) == (jint(2))) goto label_3;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(2048);
	frame[3].i = ((((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor) + ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_ungetCursor)) - (frame[1].i));
	LINE_NUMBER(2049);
	frame[4].i = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceCursor);
	LINE_NUMBER(2050);
	if ((frame[3].i) <= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(2052);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_6:;
	{
	LINE_NUMBER(2055);
	frame[5].i = (jint(0));
	frame[6].i = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(2056);
	if ((frame[3].i) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(2057);
	if ((clinit_rhino_TokenStream(ctx), (jint)SF_rhino_TokenStream_$assertionsDisabled) != 0) goto label_12;
	}
	INST_ILOAD(4);
	if ((--sp)->i > 0) goto label_12;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(2058);
	jint temp0 = (jint)M_rhino_TokenStream_charAt_int_R_int(ctx, (frame[0].o), ((frame[4].i) - (jint(1))));
	frame[7].i = temp0;
	LINE_NUMBER(2059);
	jint temp1 = (jint)SM_rhino_ScriptRuntime_isJSLineTerminator_int_R_boolean(ctx, (frame[7].i));
	if (temp1 == 0) goto label_14;
	}
	{
	LINE_NUMBER(2060);
	if ((frame[7].i) != (10)) goto label_16;
	}
	{
	jint temp0 = (jint)M_rhino_TokenStream_charAt_int_R_int(ctx, (frame[0].o), ((frame[4].i) - (jint(2))));
	if (temp0 != (13)) goto label_16;
	}
	{
	LINE_NUMBER(2062);
	INST_IINC(3, -1);
	LINE_NUMBER(2063);
	INST_IINC(4, -1);
	}
label_16:;
	{
	LINE_NUMBER(2065);
	INST_IINC(6, 1);
	LINE_NUMBER(2066);
	frame[5].i = ((frame[4].i) - (jint(1)));
	}
label_14:;
	{
	LINE_NUMBER(2056);
	INST_IINC(3, -1);
	INST_IINC(4, -1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(2070);
	frame[7].i = (jint(0));
	frame[8].i = (jint(0));
	}
label_21:;
	{
	LINE_NUMBER(2071);
	if ((frame[4].i) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(2072);
	jint temp0 = (jint)M_rhino_TokenStream_charAt_int_R_int(ctx, (frame[0].o), ((frame[4].i) - (jint(1))));
	frame[9].i = temp0;
	LINE_NUMBER(2073);
	jint temp1 = (jint)SM_rhino_ScriptRuntime_isJSLineTerminator_int_R_boolean(ctx, (frame[9].i));
	if (temp1 == 0) goto label_25;
	}
	{
	LINE_NUMBER(2074);
	frame[7].i = (frame[4].i);
	LINE_NUMBER(2075);
	goto label_22;
	}
label_25:;
	{
	LINE_NUMBER(2071);
	INST_IINC(4, -1);
	INST_IINC(8, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(2078);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp1 = ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineno) - (frame[6].i);
	sp[1].i = temp0;
	sp[2].i = temp1;
	sp += 3;
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineEndChar) < 0) goto label_28;
	}
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
label_29:;
	{
	sp -= 4;
	ARRAY_ACCESS(jint, sp[0].o, sp[1].i) = (sp[2].i + sp[3].i);
	LINE_NUMBER(2079);
	ARRAY_ACCESS(jint, (frame[2].o), (jint(1))) = (frame[8].i);
	LINE_NUMBER(2080);
	if ((frame[6].i) != 0) goto label_32;
	}
	{
	LINE_NUMBER(2081);
	sp[0].o = (jobject)((func_rhino_TokenStream_getLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_TokenStream_getLine_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_32:;
	{
	LINE_NUMBER(2083);
	sp[0].o = (jobject)M_rhino_TokenStream_substring_int_int_R_java_lang_String(ctx, (frame[0].o), (frame[7].i), (frame[5].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_fillSourceBuffer_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:fillSourceBuffer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2087);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceString;
	if (sp[0].o == nullptr) goto label_1;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_1:;
	{
	LINE_NUMBER(2088);
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceEnd;
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	if (temp0 != (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(2089);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineStart) == 0) goto label_4;
	}
	{
	jint temp0 = (jint)M_rhino_TokenStream_isMarkingComment_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(2090);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineStart;
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, (jint(0)), (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceEnd) - ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineStart)));
	LINE_NUMBER(2092);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_sourceEnd = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_sourceEnd) - ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineStart));
	LINE_NUMBER(2093);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_sourceCursor = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_sourceCursor) - ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineStart));
	LINE_NUMBER(2094);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_lineStart = (jint(0));
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(2096);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	sp[0].o = (jobject) createArray(ctx, &class_char, ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(2097);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[1].o), (jint(0)), ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceEnd));
	LINE_NUMBER(2098);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceBuffer = (jref) (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(2101);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceReader;
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceEnd;
	sp[2].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	jint temp1 = (jint)((func_java_io_Reader_read_Array1_char_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_read_Array1_char_int_int_R_int])(ctx, sp[0].o, sp[1].o, temp0, ((((jarray) nullCheck(ctx, sp[2].o))->length) - ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceEnd)));
	frame[1].i = temp1;
	LINE_NUMBER(2103);
	if ((frame[1].i) >= 0) goto label_12;
	}
	{
	LINE_NUMBER(2104);
	popStackFrame(ctx);
	return (jint(0));
	}
label_12:;
	{
	LINE_NUMBER(2106);
	sp[0].o = frame[0].o;
	((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_sourceEnd = (((jint)((rhino_TokenStream *) NULL_CHECK(sp[0].o))->F_sourceEnd) + (frame[1].i));
	LINE_NUMBER(2107);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_getCursor_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getCursor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2114);
	popStackFrame(ctx);
	return ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_cursor);
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_getTokenBeg_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getTokenBeg", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2121);
	popStackFrame(ctx);
	return ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenBeg);
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_getTokenEnd_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getTokenEnd", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2128);
	popStackFrame(ctx);
	return ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd);
	}

	popStackFrame(ctx);
}

jint M_rhino_TokenStream_getTokenLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getTokenLength", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2135);
	popStackFrame(ctx);
	return (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd) - ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenBeg));
	}

	popStackFrame(ctx);
}

jobject M_rhino_TokenStream_getCommentType_R_rhino_Token$CommentType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getCommentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2143);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_commentType;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_TokenStream_markCommentStart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:markCommentStart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2147);
	M_rhino_TokenStream_markCommentStart_java_lang_String(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8""_j))));
	LINE_NUMBER(2148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_TokenStream_markCommentStart_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:markCommentStart", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2151);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[0].o = (jobject)((rhino_Parser *) NULL_CHECK(sp[0].o))->F_compilerEnv;
	jint temp0 = (jint)((func_rhino_CompilerEnvirons_isRecordingComments_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_CompilerEnvirons_isRecordingComments_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceReader;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2152);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_commentPrefix = (jref) (frame[1].o);
	LINE_NUMBER(2153);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_commentCursor = (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceCursor) - (jint(1)));
	}
label_1:;
	LINE_NUMBER(2155);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_rhino_TokenStream_isMarkingComment_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:isMarkingComment", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2158);
	if (((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_commentCursor) == (jint(-1))) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_TokenStream_getAndResetCurrentComment_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:getAndResetCurrentComment", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2162);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceString;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(2163);
	jint temp0 = (jint)M_rhino_TokenStream_isMarkingComment_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_3:;
	{
	LINE_NUMBER(2164);
	sp[0].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceString;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenBeg), ((jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_tokenEnd));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(2166);
	jint temp0 = (jint)M_rhino_TokenStream_isMarkingComment_R_boolean(ctx, (frame[0].o));
	if (temp0 != 0) goto label_4;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_4:;
	{
	LINE_NUMBER(2167);
	((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_commentCursor = (jint(-1));
	LINE_NUMBER(2168);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_commentPrefix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_sourceBuffer;
	jint temp0 = (jint)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_commentCursor;
	sp[2].o = frame[0].o;
	LINE_NUMBER(2169);
	jint temp1 = (jint)((func_rhino_TokenStream_getTokenLength_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_rhino_TokenStream_getTokenLength_R_int])(ctx, sp[2].o);
	sp[2].o = (jobject)((rhino_TokenStream *) NULL_CHECK((frame[0].o)))->F_commentPrefix;
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[2].o);
	jint temp3 = temp1 - temp2;
	LINE_NUMBER(2168);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_Array1_char_int_int_R_java_lang_String(ctx, sp[1].o, temp0, temp3);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(2170);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_TokenStream_convertLastCharToHex_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:convertLastCharToHex", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2174);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = (temp0 - (jint(1)));
	LINE_NUMBER(2175);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = frame[1].o;
	jint temp1 = jint(0);
	jint temp2 = frame[2].i;
	LINE_NUMBER(2176);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[1].o, temp1, temp2);
	init_java_lang_StringBuilder_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(2177);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"\\u"_j))));
	LINE_NUMBER(2178);
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[2].i));
	sp[0].o = (jobject)SM_java_lang_Integer_toHexString_int_R_java_lang_String(ctx, temp3);
	frame[4].o = sp[0].o;
	LINE_NUMBER(2179);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[5].i;
	jint temp1 = jint(4);
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[4].o));
	if (temp0 >= (temp1 - temp2)) goto label_7;
	}
	{
	LINE_NUMBER(2180);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (48));
	LINE_NUMBER(2179);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(2182);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(2183);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_TokenStream(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_TokenStream_EOF_CHAR = jint(-1);
	SF_rhino_TokenStream_BYTE_ORDER_MARK = jint(65279);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TokenStream:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TokenStream(ctx);
	{
	LINE_NUMBER(15);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_rhino_TokenStream)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_rhino_TokenStream)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_rhino_TokenStream(ctx);
	SF_rhino_TokenStream_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_TokenStream[] {
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
	(void *) M_rhino_TokenStream_tokenToString_int_R_java_lang_String,
	(void *) M_rhino_TokenStream_getSourceString_R_java_lang_String,
	(void *) M_rhino_TokenStream_getLineno_R_int,
	(void *) M_rhino_TokenStream_getString_R_java_lang_String,
	(void *) M_rhino_TokenStream_getQuoteChar_R_char,
	(void *) M_rhino_TokenStream_getNumber_R_double,
	(void *) M_rhino_TokenStream_isNumberBinary_R_boolean,
	(void *) M_rhino_TokenStream_isNumberOldOctal_R_boolean,
	(void *) M_rhino_TokenStream_isNumberOctal_R_boolean,
	(void *) M_rhino_TokenStream_isNumberHex_R_boolean,
	(void *) M_rhino_TokenStream_eof_R_boolean,
	(void *) M_rhino_TokenStream_getToken_R_int,
	(void *) M_rhino_TokenStream_readRegExp_int,
	(void *) M_rhino_TokenStream_readAndClearRegExpFlags_R_java_lang_String,
	(void *) M_rhino_TokenStream_isXMLAttribute_R_boolean,
	(void *) M_rhino_TokenStream_getFirstXMLToken_R_int,
	(void *) M_rhino_TokenStream_getNextXMLToken_R_int,
	(void *) M_rhino_TokenStream_readQuotedString_int_R_boolean,
	(void *) M_rhino_TokenStream_readXmlComment_R_boolean,
	(void *) M_rhino_TokenStream_readCDATA_R_boolean,
	(void *) M_rhino_TokenStream_readEntity_R_boolean,
	(void *) M_rhino_TokenStream_readPI_R_boolean,
	(void *) M_rhino_TokenStream_getStringFromBuffer_R_java_lang_String,
	(void *) M_rhino_TokenStream_addToString_int,
	(void *) M_rhino_TokenStream_canUngetChar_R_boolean,
	(void *) M_rhino_TokenStream_ungetChar_int,
	(void *) M_rhino_TokenStream_matchChar_int_R_boolean,
	(void *) M_rhino_TokenStream_peekChar_R_int,
	(void *) M_rhino_TokenStream_getChar_R_int,
	(void *) M_rhino_TokenStream_getChar_boolean_R_int,
	(void *) M_rhino_TokenStream_getCharIgnoreLineEnd_R_int,
	(void *) M_rhino_TokenStream_ungetCharIgnoreLineEnd_int,
	(void *) M_rhino_TokenStream_skipLine,
	(void *) M_rhino_TokenStream_getOffset_R_int,
	(void *) M_rhino_TokenStream_charAt_int_R_int,
	(void *) M_rhino_TokenStream_substring_int_int_R_java_lang_String,
	(void *) M_rhino_TokenStream_getLine_R_java_lang_String,
	(void *) M_rhino_TokenStream_getLine_int_Array1_int_R_java_lang_String,
	(void *) M_rhino_TokenStream_fillSourceBuffer_R_boolean,
	(void *) M_rhino_TokenStream_getCursor_R_int,
	(void *) M_rhino_TokenStream_getTokenBeg_R_int,
	(void *) M_rhino_TokenStream_getTokenEnd_R_int,
	(void *) M_rhino_TokenStream_getTokenLength_R_int,
	(void *) M_rhino_TokenStream_getCommentType_R_rhino_Token$CommentType,
	(void *) M_rhino_TokenStream_markCommentStart,
	(void *) M_rhino_TokenStream_markCommentStart_java_lang_String,
	(void *) M_rhino_TokenStream_isMarkingComment_R_boolean,
	(void *) M_rhino_TokenStream_getAndResetCurrentComment_R_java_lang_String,
	(void *) M_rhino_TokenStream_convertLastCharToHex_java_lang_String_R_java_lang_String,
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
	{ "tokenToString", "(I)Ljava/lang/String;" },
	{ "getSourceString", "()Ljava/lang/String;" },
	{ "getLineno", "()I" },
	{ "getString", "()Ljava/lang/String;" },
	{ "getQuoteChar", "()C" },
	{ "getNumber", "()D" },
	{ "isNumberBinary", "()Z" },
	{ "isNumberOldOctal", "()Z" },
	{ "isNumberOctal", "()Z" },
	{ "isNumberHex", "()Z" },
	{ "eof", "()Z" },
	{ "getToken", "()I" },
	{ "readRegExp", "(I)V" },
	{ "readAndClearRegExpFlags", "()Ljava/lang/String;" },
	{ "isXMLAttribute", "()Z" },
	{ "getFirstXMLToken", "()I" },
	{ "getNextXMLToken", "()I" },
	{ "readQuotedString", "(I)Z" },
	{ "readXmlComment", "()Z" },
	{ "readCDATA", "()Z" },
	{ "readEntity", "()Z" },
	{ "readPI", "()Z" },
	{ "getStringFromBuffer", "()Ljava/lang/String;" },
	{ "addToString", "(I)V" },
	{ "canUngetChar", "()Z" },
	{ "ungetChar", "(I)V" },
	{ "matchChar", "(I)Z" },
	{ "peekChar", "()I" },
	{ "getChar", "()I" },
	{ "getChar", "(Z)I" },
	{ "getCharIgnoreLineEnd", "()I" },
	{ "ungetCharIgnoreLineEnd", "(I)V" },
	{ "skipLine", "()V" },
	{ "getOffset", "()I" },
	{ "charAt", "(I)I" },
	{ "substring", "(II)Ljava/lang/String;" },
	{ "getLine", "()Ljava/lang/String;" },
	{ "getLine", "(I[I)Ljava/lang/String;" },
	{ "fillSourceBuffer", "()Z" },
	{ "getCursor", "()I" },
	{ "getTokenBeg", "()I" },
	{ "getTokenEnd", "()I" },
	{ "getTokenLength", "()I" },
	{ "getCommentType", "()Lrhino/Token$CommentType;" },
	{ "markCommentStart", "()V" },
	{ "markCommentStart", "(Ljava/lang/String;)V" },
	{ "isMarkingComment", "()Z" },
	{ "getAndResetCurrentComment", "()Ljava/lang/String;" },
	{ "convertLastCharToHex", "(Ljava/lang/String;)Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "EOF_CHAR", &class_int, (intptr_t) &SF_rhino_TokenStream_EOF_CHAR, "I", 26 },
	{ "BYTE_ORDER_MARK", &class_char, (intptr_t) &SF_rhino_TokenStream_BYTE_ORDER_MARK, "C", 26 },
	{ "dirtyLine", &class_boolean, offsetof(rhino_TokenStream, F_dirtyLine), "Z", 2 },
	{ "regExpFlags", &class_java_lang_String, offsetof(rhino_TokenStream, F_regExpFlags), "Ljava/lang/String;", 0 },
	{ "string", &class_java_lang_String, offsetof(rhino_TokenStream, F_string), "Ljava/lang/String;", 2 },
	{ "number", &class_double, offsetof(rhino_TokenStream, F_number), "D", 2 },
	{ "isBinary", &class_boolean, offsetof(rhino_TokenStream, F_isBinary), "Z", 2 },
	{ "isOldOctal", &class_boolean, offsetof(rhino_TokenStream, F_isOldOctal), "Z", 2 },
	{ "isOctal", &class_boolean, offsetof(rhino_TokenStream, F_isOctal), "Z", 2 },
	{ "isHex", &class_boolean, offsetof(rhino_TokenStream, F_isHex), "Z", 2 },
	{ "quoteChar", &class_int, offsetof(rhino_TokenStream, F_quoteChar), "I", 2 },
	{ "stringBuffer", getArrayClass(&class_char, 1), offsetof(rhino_TokenStream, F_stringBuffer), "[C", 2 },
	{ "stringBufferTop", &class_int, offsetof(rhino_TokenStream, F_stringBufferTop), "I", 2 },
	{ "allStrings", &class_rhino_ObjToIntMap, offsetof(rhino_TokenStream, F_allStrings), "Lrhino/ObjToIntMap;", 18 },
	{ "ungetBuffer", getArrayClass(&class_int, 1), offsetof(rhino_TokenStream, F_ungetBuffer), "[I", 18 },
	{ "ungetCursor", &class_int, offsetof(rhino_TokenStream, F_ungetCursor), "I", 2 },
	{ "hitEOF", &class_boolean, offsetof(rhino_TokenStream, F_hitEOF), "Z", 2 },
	{ "lineStart", &class_int, offsetof(rhino_TokenStream, F_lineStart), "I", 2 },
	{ "lineEndChar", &class_int, offsetof(rhino_TokenStream, F_lineEndChar), "I", 2 },
	{ "lineno", &class_int, offsetof(rhino_TokenStream, F_lineno), "I", 0 },
	{ "sourceString", &class_java_lang_String, offsetof(rhino_TokenStream, F_sourceString), "Ljava/lang/String;", 2 },
	{ "sourceReader", &class_java_io_Reader, offsetof(rhino_TokenStream, F_sourceReader), "Ljava/io/Reader;", 2 },
	{ "sourceBuffer", getArrayClass(&class_char, 1), offsetof(rhino_TokenStream, F_sourceBuffer), "[C", 2 },
	{ "sourceEnd", &class_int, offsetof(rhino_TokenStream, F_sourceEnd), "I", 2 },
	{ "sourceCursor", &class_int, offsetof(rhino_TokenStream, F_sourceCursor), "I", 0 },
	{ "cursor", &class_int, offsetof(rhino_TokenStream, F_cursor), "I", 0 },
	{ "tokenBeg", &class_int, offsetof(rhino_TokenStream, F_tokenBeg), "I", 0 },
	{ "tokenEnd", &class_int, offsetof(rhino_TokenStream, F_tokenEnd), "I", 0 },
	{ "commentType", &class_rhino_Token$CommentType, offsetof(rhino_TokenStream, F_commentType), "Lrhino/Token$CommentType;", 0 },
	{ "xmlIsAttribute", &class_boolean, offsetof(rhino_TokenStream, F_xmlIsAttribute), "Z", 2 },
	{ "xmlIsTagContent", &class_boolean, offsetof(rhino_TokenStream, F_xmlIsTagContent), "Z", 2 },
	{ "xmlOpenTagsCount", &class_int, offsetof(rhino_TokenStream, F_xmlOpenTagsCount), "I", 2 },
	{ "parser", &class_rhino_Parser, offsetof(rhino_TokenStream, F_parser), "Lrhino/Parser;", 18 },
	{ "commentPrefix", &class_java_lang_String, offsetof(rhino_TokenStream, F_commentPrefix), "Ljava/lang/String;", 2 },
	{ "commentCursor", &class_int, offsetof(rhino_TokenStream, F_commentCursor), "I", 2 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_rhino_TokenStream_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_TokenStream_rhino_Parser_java_io_Reader_java_lang_String_int, 0, "(Lrhino/Parser;Ljava/io/Reader;Ljava/lang/String;I)V", 0 },
	{ "tokenToString", (intptr_t) M_rhino_TokenStream_tokenToString_int_R_java_lang_String, VTABLE_rhino_TokenStream_tokenToString_int_R_java_lang_String, "(I)Ljava/lang/String;", 0 },
	{ "isKeyword", (intptr_t) SM_rhino_TokenStream_isKeyword_java_lang_String_int_boolean_R_boolean, 0, "(Ljava/lang/String;IZ)Z", 8 },
	{ "stringToKeyword", (intptr_t) SM_rhino_TokenStream_stringToKeyword_java_lang_String_int_boolean_R_int, 0, "(Ljava/lang/String;IZ)I", 10 },
	{ "stringToKeywordForJS", (intptr_t) SM_rhino_TokenStream_stringToKeywordForJS_java_lang_String_R_int, 0, "(Ljava/lang/String;)I", 10 },
	{ "stringToKeywordForES", (intptr_t) SM_rhino_TokenStream_stringToKeywordForES_java_lang_String_boolean_R_int, 0, "(Ljava/lang/String;Z)I", 10 },
	{ "getSourceString", (intptr_t) M_rhino_TokenStream_getSourceString_R_java_lang_String, VTABLE_rhino_TokenStream_getSourceString_R_java_lang_String, "()Ljava/lang/String;", 16 },
	{ "getLineno", (intptr_t) M_rhino_TokenStream_getLineno_R_int, VTABLE_rhino_TokenStream_getLineno_R_int, "()I", 16 },
	{ "getString", (intptr_t) M_rhino_TokenStream_getString_R_java_lang_String, VTABLE_rhino_TokenStream_getString_R_java_lang_String, "()Ljava/lang/String;", 16 },
	{ "getQuoteChar", (intptr_t) M_rhino_TokenStream_getQuoteChar_R_char, VTABLE_rhino_TokenStream_getQuoteChar_R_char, "()C", 16 },
	{ "getNumber", (intptr_t) M_rhino_TokenStream_getNumber_R_double, VTABLE_rhino_TokenStream_getNumber_R_double, "()D", 16 },
	{ "isNumberBinary", (intptr_t) M_rhino_TokenStream_isNumberBinary_R_boolean, VTABLE_rhino_TokenStream_isNumberBinary_R_boolean, "()Z", 16 },
	{ "isNumberOldOctal", (intptr_t) M_rhino_TokenStream_isNumberOldOctal_R_boolean, VTABLE_rhino_TokenStream_isNumberOldOctal_R_boolean, "()Z", 16 },
	{ "isNumberOctal", (intptr_t) M_rhino_TokenStream_isNumberOctal_R_boolean, VTABLE_rhino_TokenStream_isNumberOctal_R_boolean, "()Z", 16 },
	{ "isNumberHex", (intptr_t) M_rhino_TokenStream_isNumberHex_R_boolean, VTABLE_rhino_TokenStream_isNumberHex_R_boolean, "()Z", 16 },
	{ "eof", (intptr_t) M_rhino_TokenStream_eof_R_boolean, VTABLE_rhino_TokenStream_eof_R_boolean, "()Z", 16 },
	{ "getToken", (intptr_t) M_rhino_TokenStream_getToken_R_int, VTABLE_rhino_TokenStream_getToken_R_int, "()I", 16 },
	{ "isAlpha", (intptr_t) SM_rhino_TokenStream_isAlpha_int_R_boolean, 0, "(I)Z", 10 },
	{ "isDigit", (intptr_t) SM_rhino_TokenStream_isDigit_int_R_boolean, 0, "(I)Z", 8 },
	{ "isJSSpace", (intptr_t) SM_rhino_TokenStream_isJSSpace_int_R_boolean, 0, "(I)Z", 8 },
	{ "isJSFormatChar", (intptr_t) SM_rhino_TokenStream_isJSFormatChar_int_R_boolean, 0, "(I)Z", 10 },
	{ "readRegExp", (intptr_t) M_rhino_TokenStream_readRegExp_int, VTABLE_rhino_TokenStream_readRegExp_int, "(I)V", 0 },
	{ "readAndClearRegExpFlags", (intptr_t) M_rhino_TokenStream_readAndClearRegExpFlags_R_java_lang_String, VTABLE_rhino_TokenStream_readAndClearRegExpFlags_R_java_lang_String, "()Ljava/lang/String;", 0 },
	{ "isXMLAttribute", (intptr_t) M_rhino_TokenStream_isXMLAttribute_R_boolean, VTABLE_rhino_TokenStream_isXMLAttribute_R_boolean, "()Z", 0 },
	{ "getFirstXMLToken", (intptr_t) M_rhino_TokenStream_getFirstXMLToken_R_int, VTABLE_rhino_TokenStream_getFirstXMLToken_R_int, "()I", 0 },
	{ "getNextXMLToken", (intptr_t) M_rhino_TokenStream_getNextXMLToken_R_int, VTABLE_rhino_TokenStream_getNextXMLToken_R_int, "()I", 0 },
	{ "readQuotedString", (intptr_t) M_rhino_TokenStream_readQuotedString_int_R_boolean, VTABLE_rhino_TokenStream_readQuotedString_int_R_boolean, "(I)Z", 2 },
	{ "readXmlComment", (intptr_t) M_rhino_TokenStream_readXmlComment_R_boolean, VTABLE_rhino_TokenStream_readXmlComment_R_boolean, "()Z", 2 },
	{ "readCDATA", (intptr_t) M_rhino_TokenStream_readCDATA_R_boolean, VTABLE_rhino_TokenStream_readCDATA_R_boolean, "()Z", 2 },
	{ "readEntity", (intptr_t) M_rhino_TokenStream_readEntity_R_boolean, VTABLE_rhino_TokenStream_readEntity_R_boolean, "()Z", 2 },
	{ "readPI", (intptr_t) M_rhino_TokenStream_readPI_R_boolean, VTABLE_rhino_TokenStream_readPI_R_boolean, "()Z", 2 },
	{ "getStringFromBuffer", (intptr_t) M_rhino_TokenStream_getStringFromBuffer_R_java_lang_String, VTABLE_rhino_TokenStream_getStringFromBuffer_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "addToString", (intptr_t) M_rhino_TokenStream_addToString_int, VTABLE_rhino_TokenStream_addToString_int, "(I)V", 2 },
	{ "canUngetChar", (intptr_t) M_rhino_TokenStream_canUngetChar_R_boolean, VTABLE_rhino_TokenStream_canUngetChar_R_boolean, "()Z", 2 },
	{ "ungetChar", (intptr_t) M_rhino_TokenStream_ungetChar_int, VTABLE_rhino_TokenStream_ungetChar_int, "(I)V", 2 },
	{ "matchChar", (intptr_t) M_rhino_TokenStream_matchChar_int_R_boolean, VTABLE_rhino_TokenStream_matchChar_int_R_boolean, "(I)Z", 2 },
	{ "peekChar", (intptr_t) M_rhino_TokenStream_peekChar_R_int, VTABLE_rhino_TokenStream_peekChar_R_int, "()I", 2 },
	{ "getChar", (intptr_t) M_rhino_TokenStream_getChar_R_int, VTABLE_rhino_TokenStream_getChar_R_int, "()I", 2 },
	{ "getChar", (intptr_t) M_rhino_TokenStream_getChar_boolean_R_int, VTABLE_rhino_TokenStream_getChar_boolean_R_int, "(Z)I", 2 },
	{ "getCharIgnoreLineEnd", (intptr_t) M_rhino_TokenStream_getCharIgnoreLineEnd_R_int, VTABLE_rhino_TokenStream_getCharIgnoreLineEnd_R_int, "()I", 2 },
	{ "ungetCharIgnoreLineEnd", (intptr_t) M_rhino_TokenStream_ungetCharIgnoreLineEnd_int, VTABLE_rhino_TokenStream_ungetCharIgnoreLineEnd_int, "(I)V", 2 },
	{ "skipLine", (intptr_t) M_rhino_TokenStream_skipLine, VTABLE_rhino_TokenStream_skipLine, "()V", 2 },
	{ "getOffset", (intptr_t) M_rhino_TokenStream_getOffset_R_int, VTABLE_rhino_TokenStream_getOffset_R_int, "()I", 16 },
	{ "charAt", (intptr_t) M_rhino_TokenStream_charAt_int_R_int, VTABLE_rhino_TokenStream_charAt_int_R_int, "(I)I", 2 },
	{ "substring", (intptr_t) M_rhino_TokenStream_substring_int_int_R_java_lang_String, VTABLE_rhino_TokenStream_substring_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 2 },
	{ "getLine", (intptr_t) M_rhino_TokenStream_getLine_R_java_lang_String, VTABLE_rhino_TokenStream_getLine_R_java_lang_String, "()Ljava/lang/String;", 16 },
	{ "getLine", (intptr_t) M_rhino_TokenStream_getLine_int_Array1_int_R_java_lang_String, VTABLE_rhino_TokenStream_getLine_int_Array1_int_R_java_lang_String, "(I[I)Ljava/lang/String;", 16 },
	{ "fillSourceBuffer", (intptr_t) M_rhino_TokenStream_fillSourceBuffer_R_boolean, VTABLE_rhino_TokenStream_fillSourceBuffer_R_boolean, "()Z", 2 },
	{ "getCursor", (intptr_t) M_rhino_TokenStream_getCursor_R_int, VTABLE_rhino_TokenStream_getCursor_R_int, "()I", 1 },
	{ "getTokenBeg", (intptr_t) M_rhino_TokenStream_getTokenBeg_R_int, VTABLE_rhino_TokenStream_getTokenBeg_R_int, "()I", 1 },
	{ "getTokenEnd", (intptr_t) M_rhino_TokenStream_getTokenEnd_R_int, VTABLE_rhino_TokenStream_getTokenEnd_R_int, "()I", 1 },
	{ "getTokenLength", (intptr_t) M_rhino_TokenStream_getTokenLength_R_int, VTABLE_rhino_TokenStream_getTokenLength_R_int, "()I", 1 },
	{ "getCommentType", (intptr_t) M_rhino_TokenStream_getCommentType_R_rhino_Token$CommentType, VTABLE_rhino_TokenStream_getCommentType_R_rhino_Token$CommentType, "()Lrhino/Token$CommentType;", 1 },
	{ "markCommentStart", (intptr_t) M_rhino_TokenStream_markCommentStart, VTABLE_rhino_TokenStream_markCommentStart, "()V", 2 },
	{ "markCommentStart", (intptr_t) M_rhino_TokenStream_markCommentStart_java_lang_String, VTABLE_rhino_TokenStream_markCommentStart_java_lang_String, "(Ljava/lang/String;)V", 2 },
	{ "isMarkingComment", (intptr_t) M_rhino_TokenStream_isMarkingComment_R_boolean, VTABLE_rhino_TokenStream_isMarkingComment_R_boolean, "()Z", 2 },
	{ "getAndResetCurrentComment", (intptr_t) M_rhino_TokenStream_getAndResetCurrentComment_R_java_lang_String, VTABLE_rhino_TokenStream_getAndResetCurrentComment_R_java_lang_String, "()Ljava/lang/String;", 16 },
	{ "convertLastCharToHex", (intptr_t) M_rhino_TokenStream_convertLastCharToHex_java_lang_String_R_java_lang_String, VTABLE_rhino_TokenStream_convertLastCharToHex_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 2 },
	{ "<clinit>", (intptr_t) clinit_rhino_TokenStream, 0, "()V", 8 },
};

Class class_rhino_TokenStream{
		.nativeName = (intptr_t) "rhino/TokenStream",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_TokenStream),
		.classVtable = (intptr_t) vtable_rhino_TokenStream,
		.staticInitializer = (intptr_t) clinit_rhino_TokenStream,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_TokenStream,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 36,
		.nativeFields = (intptr_t) fields,
		.methodCount = 59,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 60,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_TokenStream = registerClass(&class_rhino_TokenStream);

}
