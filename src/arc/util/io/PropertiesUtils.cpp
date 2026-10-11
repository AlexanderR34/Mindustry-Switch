#include "arc/util/io/PropertiesUtils.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/Writer.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "java/io/BufferedReader.h"
#include "arc/util/io/PropertiesUtils.h"
#include "java/util/Date.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "arc/util/ArcRuntimeException.h"
#include "java/lang/NullPointerException.h"
#include "java/io/IOException.h"
#include "java/io/Reader.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Throwable.h"
#include "java/lang/System.h"

extern "C" {

jint SF_arc_util_io_PropertiesUtils_NONE;
jint SF_arc_util_io_PropertiesUtils_SLASH;
jint SF_arc_util_io_PropertiesUtils_UNICODE;
jint SF_arc_util_io_PropertiesUtils_CONTINUE;
jint SF_arc_util_io_PropertiesUtils_KEY_DONE;
jint SF_arc_util_io_PropertiesUtils_IGNORE;
jobject SF_arc_util_io_PropertiesUtils_LINE_SEPARATOR;

void mark_arc_util_io_PropertiesUtils(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_io_PropertiesUtils_LINE_SEPARATOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_io_PropertiesUtils_LINE_SEPARATOR)->clazz)->markFunction)((jobject) SF_arc_util_io_PropertiesUtils_LINE_SEPARATOR, mark, depth + 1);
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
	auto self = (arc_util_io_PropertiesUtils *) object;
}

void clinit_arc_util_io_PropertiesUtils(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_util_io_PropertiesUtils_NONE = jint(0);
	SF_arc_util_io_PropertiesUtils_SLASH = jint(1);
	SF_arc_util_io_PropertiesUtils_UNICODE = jint(2);
	SF_arc_util_io_PropertiesUtils_CONTINUE = jint(3);
	SF_arc_util_io_PropertiesUtils_KEY_DONE = jint(4);
	SF_arc_util_io_PropertiesUtils_IGNORE = jint(5);
	SF_arc_util_io_PropertiesUtils_LINE_SEPARATOR = ((jobject) createStringLiteral(ctx, u8"\n"_j));
}

void init_arc_util_io_PropertiesUtils(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/PropertiesUtils:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_PropertiesUtils(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_io_PropertiesUtils_load_arc_struct_ObjectMap_java_io_Reader(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/PropertiesUtils:load", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_PropertiesUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(52);
	if ((frame[0].o) != nullptr) goto label_5;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ObjectMap cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(53);
	if ((frame[1].o) != nullptr) goto label_6;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Reader cannot be null"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(54);
	frame[2].i = (jint(0));
	frame[3].i = (jint(0));
	frame[4].i = (jint(0));
	LINE_NUMBER(56);
	sp[0].o = (jobject) createArray(ctx, &class_char, (40));
	frame[6].o = sp[0].o;
	LINE_NUMBER(57);
	frame[7].i = (jint(0));
	frame[8].i = (jint(-1));
	LINE_NUMBER(58);
	frame[10].i = (jint(1));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(62);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	init_java_io_BufferedReader_java_io_Reader(ctx, sp[0].o, (frame[1].o));
	frame[11].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(65);
	jint temp0 = (jint)((func_java_io_BufferedReader_read_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_io_BufferedReader_read_R_int])(ctx, (frame[11].o));
	frame[9].i = temp0;
	LINE_NUMBER(66);
	if ((frame[9].i) != (jint(-1))) goto label_15;
	}
	LINE_NUMBER(67);
	goto label_17;
label_15:;
	{
	LINE_NUMBER(69);
	frame[5].i = (jchar((frame[9].i)));
	LINE_NUMBER(71);
	if ((frame[7].i) != (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_19;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((((jarray) nullCheck(ctx, (frame[6].o)))->length) * (jint(2))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(73);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[12].o), (jint(0)), (frame[7].i));
	LINE_NUMBER(74);
	frame[6].o = (frame[12].o);
	}
label_19:;
	{
	LINE_NUMBER(76);
	if ((frame[2].i) != (jint(2))) goto label_23;
	}
	{
	LINE_NUMBER(77);
	jint temp0 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, (frame[5].i), (16));
	frame[12].i = temp0;
	LINE_NUMBER(78);
	if ((frame[12].i) < 0) goto label_26;
	}
	{
	LINE_NUMBER(79);
	frame[3].i = (((frame[3].i) << (jint(4))) + (frame[12].i));
	LINE_NUMBER(80);
	INST_IINC(4, 1);
	if ((frame[4].i) >= (jint(4))) goto label_29;
	}
	LINE_NUMBER(81);
	goto label_13;
label_26:;
	{
	LINE_NUMBER(83);
	if ((frame[4].i) > (jint(4))) goto label_29;
	}
	{
	LINE_NUMBER(84);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid Unicode sequence: illegal character"_j))));
	throwException(ctx, sp[0].o);	}
label_29:;
	{
	LINE_NUMBER(86);
	frame[2].i = (jint(0));
	LINE_NUMBER(87);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((frame[3].i)));
	LINE_NUMBER(88);
	if ((frame[5].i) == (10)) goto label_23;
	}
	LINE_NUMBER(89);
	goto label_13;
label_23:;
	{
	LINE_NUMBER(92);
	if ((frame[2].i) != (jint(1))) goto label_35;
	}
	{
	LINE_NUMBER(93);
	frame[2].i = (jint(0));
	LINE_NUMBER(94);
	switch((frame[5].i)) {
		case 10: goto label_38;
		case 13: goto label_39;
		case 98: goto label_40;
		case 102: goto label_41;
		case 110: goto label_42;
		case 114: goto label_43;
		case 116: goto label_44;
		case 117: goto label_45;
		default: goto label_46;
	}
	}
label_39:;
	{
	LINE_NUMBER(96);
	frame[2].i = (jint(3));
	LINE_NUMBER(97);
	goto label_13;
	}
label_38:;
	{
	LINE_NUMBER(99);
	frame[2].i = (jint(5));
	LINE_NUMBER(100);
	goto label_13;
	}
label_40:;
	{
	LINE_NUMBER(102);
	frame[5].i = (8);
	LINE_NUMBER(103);
	goto label_46;
	}
label_41:;
	{
	LINE_NUMBER(105);
	frame[5].i = (12);
	LINE_NUMBER(106);
	goto label_46;
	}
label_42:;
	{
	LINE_NUMBER(108);
	frame[5].i = (10);
	LINE_NUMBER(109);
	goto label_46;
	}
label_43:;
	{
	LINE_NUMBER(111);
	frame[5].i = (13);
	LINE_NUMBER(112);
	goto label_46;
	}
label_44:;
	{
	LINE_NUMBER(114);
	frame[5].i = (9);
	LINE_NUMBER(115);
	goto label_46;
	}
label_45:;
	{
	LINE_NUMBER(117);
	frame[2].i = (jint(2));
	LINE_NUMBER(118);
	jint temp0 = jint(0);
	frame[4].i = temp0;
	frame[3].i = temp0;
	LINE_NUMBER(119);
	goto label_13;
	}
label_46:;
	goto label_56;
label_35:;
	{
	LINE_NUMBER(122);
	switch((frame[5].i)) {
		case 10: goto label_57;
		case 13: goto label_58;
		case 33: goto label_59;
		case 35: goto label_59;
		case 58: goto label_60;
		case 61: goto label_60;
		case 92: goto label_61;
		default: goto label_62;
	}
	}
label_59:;
	{
	LINE_NUMBER(125);
	if ((frame[10].i) == 0) goto label_62;
	}
label_63:;
	{
	LINE_NUMBER(127);
	jint temp0 = (jint)((func_java_io_BufferedReader_read_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_io_BufferedReader_read_R_int])(ctx, (frame[11].o));
	frame[9].i = temp0;
	LINE_NUMBER(128);
	if ((frame[9].i) != (jint(-1))) goto label_65;
	}
	LINE_NUMBER(129);
	goto label_13;
label_65:;
	{
	LINE_NUMBER(131);
	frame[5].i = (jchar((frame[9].i)));
	LINE_NUMBER(132);
	if ((frame[5].i) == (13)) goto label_13;
	}
	{
	if ((frame[5].i) != (10)) goto label_63;
	}
	LINE_NUMBER(133);
	goto label_13;
label_57:;
	{
	LINE_NUMBER(140);
	if ((frame[2].i) != (jint(3))) goto label_58;
	}
	{
	LINE_NUMBER(141);
	frame[2].i = (jint(5));
	LINE_NUMBER(142);
	goto label_13;
	}
label_58:;
	{
	LINE_NUMBER(146);
	frame[2].i = (jint(0));
	LINE_NUMBER(147);
	frame[10].i = (jint(1));
	LINE_NUMBER(148);
	if ((frame[7].i) > 0) goto label_73;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_74;
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_74;
label_73:;
	{
	LINE_NUMBER(149);
	if ((frame[8].i) != (jint(-1))) goto label_75;
	}
	{
	LINE_NUMBER(150);
	frame[8].i = (frame[7].i);
	}
label_75:;
	{
	LINE_NUMBER(152);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[6].o), (jint(0)), (frame[7].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[12].o), (jint(0)), (frame[8].i));
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[12].o), (frame[8].i));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_74:;
	{
	LINE_NUMBER(155);
	frame[8].i = (jint(-1));
	LINE_NUMBER(156);
	frame[7].i = (jint(0));
	LINE_NUMBER(157);
	goto label_13;
	}
label_61:;
	{
	LINE_NUMBER(159);
	if ((frame[2].i) != (jint(4))) goto label_80;
	}
	{
	LINE_NUMBER(160);
	frame[8].i = (frame[7].i);
	}
label_80:;
	{
	LINE_NUMBER(162);
	frame[2].i = (jint(1));
	LINE_NUMBER(163);
	goto label_13;
	}
label_60:;
	{
	LINE_NUMBER(166);
	if ((frame[8].i) != (jint(-1))) goto label_62;
	}
	{
	LINE_NUMBER(167);
	frame[2].i = (jint(0));
	LINE_NUMBER(168);
	frame[8].i = (frame[7].i);
	LINE_NUMBER(169);
	goto label_13;
	}
label_62:;
	{
	LINE_NUMBER(174);
	jint temp0 = (jint)SM_java_lang_Character_isWhitespace_char_R_boolean(ctx, (frame[5].i));
	if (temp0 == 0) goto label_86;
	}
	{
	LINE_NUMBER(175);
	if ((frame[2].i) != (jint(3))) goto label_88;
	}
	{
	LINE_NUMBER(176);
	frame[2].i = (jint(5));
	}
label_88:;
	{
	LINE_NUMBER(179);
	if ((frame[7].i) == 0) goto label_13;
	}
	{
	if ((frame[7].i) == (frame[8].i)) goto label_13;
	}
	{
	if ((frame[2].i) != (jint(5))) goto label_90;
	}
	LINE_NUMBER(180);
	goto label_13;
label_90:;
	{
	LINE_NUMBER(182);
	if ((frame[8].i) != (jint(-1))) goto label_86;
	}
	{
	LINE_NUMBER(183);
	frame[2].i = (jint(4));
	LINE_NUMBER(184);
	goto label_13;
	}
label_86:;
	{
	LINE_NUMBER(187);
	if ((frame[2].i) == (jint(5))) goto label_94;
	}
	{
	if ((frame[2].i) != (jint(3))) goto label_56;
	}
label_94:;
	{
	LINE_NUMBER(188);
	frame[2].i = (jint(0));
	}
label_56:;
	{
	LINE_NUMBER(191);
	frame[10].i = (jint(0));
	LINE_NUMBER(192);
	if ((frame[2].i) != (jint(4))) goto label_96;
	}
	{
	LINE_NUMBER(193);
	frame[8].i = (frame[7].i);
	LINE_NUMBER(194);
	frame[2].i = (jint(0));
	}
label_96:;
	{
	LINE_NUMBER(196);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[5].i);
	goto label_13;
	}
label_17:;
	{
	LINE_NUMBER(198);
	if ((frame[2].i) != (jint(2))) goto label_99;
	}
	{
	if ((frame[4].i) > (jint(4))) goto label_99;
	}
	{
	LINE_NUMBER(199);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid Unicode sequence: expected format \\uxxxx"_j))));
	throwException(ctx, sp[0].o);	}
label_99:;
	{
	LINE_NUMBER(201);
	if ((frame[8].i) != (jint(-1))) goto label_101;
	}
	INST_ILOAD(7);
	if ((--sp)->i <= 0) goto label_101;
	{
	LINE_NUMBER(202);
	frame[8].i = (frame[7].i);
	}
label_101:;
	{
	LINE_NUMBER(204);
	if ((frame[8].i) < 0) goto label_1;
	}
	{
	LINE_NUMBER(205);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[6].o), (jint(0)), (frame[7].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[12].o), (jint(0)), (frame[8].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[12].o), (frame[8].i));
	frame[14].o = sp[0].o;
	LINE_NUMBER(208);
	if ((frame[2].i) != (jint(1))) goto label_107;
	}
	{
	LINE_NUMBER(209);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[14].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\u0000"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[14].o = sp[0].o;
	}
label_107:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[13].o), (frame[14].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(215);
	goto label_109;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(213);
	frame[11].o = sp[0].o;
	LINE_NUMBER(214);
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[11].o));
	throwException(ctx, sp[0].o);	}
label_109:;
	LINE_NUMBER(216);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_io_PropertiesUtils_store_arc_struct_ObjectMap_java_io_Writer_java_lang_String_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/PropertiesUtils:store", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_PropertiesUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(236);
	SM_arc_util_io_PropertiesUtils_storeImpl_arc_struct_ObjectMap_java_io_Writer_java_lang_String_boolean_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_io_PropertiesUtils_store_arc_struct_ObjectMap_java_io_Writer_java_lang_String(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/PropertiesUtils:store", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_PropertiesUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(240);
	SM_arc_util_io_PropertiesUtils_store_arc_struct_ObjectMap_java_io_Writer_java_lang_String_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(0)));
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_io_PropertiesUtils_storeImpl_arc_struct_ObjectMap_java_io_Writer_java_lang_String_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/PropertiesUtils:storeImpl", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_PropertiesUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(244);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(245);
	SM_arc_util_io_PropertiesUtils_writeComment_java_io_Writer_java_lang_String(ctx, (frame[1].o), (frame[2].o));
	}
label_1:;
	{
	LINE_NUMBER(247);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	LINE_NUMBER(248);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	LINE_NUMBER(249);
	sp[0].o = frame[1].o;
	clinit_java_util_Date(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_util_Date_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Date_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(250);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_3:;
	{
	LINE_NUMBER(253);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (200));
	frame[5].o = sp[0].o;
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(255);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_key;
	SM_arc_util_io_PropertiesUtils_dumpString_java_lang_StringBuilder_java_lang_String_boolean_boolean(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)), (jint(1)), (frame[4].i));
	LINE_NUMBER(256);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[5].o), (61));
	LINE_NUMBER(257);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[7].o)))->F_value;
	SM_arc_util_io_PropertiesUtils_dumpString_java_lang_StringBuilder_java_lang_String_boolean_boolean(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)), (jint(0)), (frame[4].i));
	LINE_NUMBER(258);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(259);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[5].o));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(260);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[5].o), (jint(0)));
	LINE_NUMBER(261);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(262);
	((func_java_io_Writer_flush) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_flush])(ctx, (frame[1].o));
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_io_PropertiesUtils_dumpString_java_lang_StringBuilder_java_lang_String_boolean_boolean(jcontext ctx, jobject param0, jobject param1, jbool param2, jbool param3) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/PropertiesUtils:dumpString", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_PropertiesUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(266);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[4].i = temp0;
	LINE_NUMBER(267);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(268);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(270);
	if ((frame[6].i) <= (61)) goto label_6;
	}
	{
	if ((frame[6].i) >= (127)) goto label_6;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[6].i) != (92)) goto label_8;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"\\\\"_j));
	goto label_9;
label_8:;
	INST_ILOAD(6);
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, sp[0].i);
	sp++;
label_9:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(272);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(274);
	switch((frame[6].i)) {
		case 9: goto label_12;
		case 10: goto label_13;
		case 12: goto label_14;
		case 13: goto label_15;
		case 32: goto label_16;
		case 33: goto label_17;
		case 35: goto label_17;
		case 58: goto label_17;
		case 61: goto label_17;
		default: goto label_18;
	}
	}
label_16:;
	{
	LINE_NUMBER(276);
	if ((frame[5].i) == 0) goto label_19;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_20;
label_19:;
	{
	LINE_NUMBER(277);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\ "_j))));
	goto label_11;
	}
label_20:;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[6].i));
	LINE_NUMBER(281);
	goto label_11;
	}
label_13:;
	{
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\n"_j))));
	LINE_NUMBER(284);
	goto label_11;
	}
label_15:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\r"_j))));
	LINE_NUMBER(287);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\t"_j))));
	LINE_NUMBER(290);
	goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\f"_j))));
	LINE_NUMBER(293);
	goto label_11;
	}
label_17:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (92));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].i));
	LINE_NUMBER(299);
	goto label_11;
	}
label_18:;
	{
	LINE_NUMBER(301);
	if ((frame[6].i) < (32)) goto label_27;
	}
	{
	if ((frame[6].i) <= (126)) goto label_28;
	}
label_27:;
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
label_29:;
	{
	sp -= 1;
	if ((sp[0].i & (frame[3].i)) == 0) goto label_30;
	}
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)SM_java_lang_Integer_toHexString_int_R_java_lang_String(ctx, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\u"_j))));
	LINE_NUMBER(304);
	frame[8].i = (jint(0));
	}
label_34:;
	{
	jint temp0 = frame[8].i;
	jint temp1 = jint(4);
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	if (temp0 >= (temp1 - temp2)) goto label_35;
	}
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (48));
	LINE_NUMBER(304);
	INST_IINC(8, 1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(307);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(308);
	goto label_11;
	}
label_30:;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[6].i));
	}
label_11:;
	{
	LINE_NUMBER(267);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_io_PropertiesUtils_writeComment_java_io_Writer_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/io/PropertiesUtils:writeComment", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_io_PropertiesUtils(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(317);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	LINE_NUMBER(318);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(319);
	frame[3].i = (jint(0));
	LINE_NUMBER(320);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(321);
	if ((frame[3].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(322);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[3].i));
	frame[5].i = temp0;
	LINE_NUMBER(323);
	if ((frame[5].i) > (255)) goto label_8;
	}
	{
	if ((frame[5].i) == (10)) goto label_8;
	}
	{
	if ((frame[5].i) != (13)) goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(324);
	if ((frame[4].i) == (frame[3].i)) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[4].i), (frame[3].i));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(325);
	if ((frame[5].i) <= (255)) goto label_11;
	}
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)SM_java_lang_Integer_toHexString_int_R_java_lang_String(ctx, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(327);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\\u"_j))));
	LINE_NUMBER(328);
	frame[7].i = (jint(0));
	}
label_15:;
	{
	jint temp0 = frame[7].i;
	jint temp1 = jint(4);
	jint temp2 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[6].o));
	if (temp0 >= (temp1 - temp2)) goto label_16;
	}
	{
	LINE_NUMBER(329);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[0].o), (48));
	LINE_NUMBER(328);
	INST_IINC(7, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(331);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(332);
	goto label_20;
	}
label_11:;
	{
	LINE_NUMBER(333);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(334);
	if ((frame[5].i) != (13)) goto label_22;
	}
	{
	if ((frame[3].i) == ((frame[2].i) - (jint(1)))) goto label_22;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))));
	if (temp0 != (10)) goto label_22;
	}
	LINE_NUMBER(335);
	INST_IINC(3, 1);
label_22:;
	{
	LINE_NUMBER(337);
	if ((frame[3].i) == ((frame[2].i) - (jint(1)))) goto label_24;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))));
	if (temp0 == (35)) goto label_20;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), ((frame[3].i) + (jint(1))));
	if (temp0 == (33)) goto label_20;
	}
label_24:;
	{
	LINE_NUMBER(338);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	}
label_20:;
	{
	LINE_NUMBER(340);
	frame[4].i = ((frame[3].i) + (jint(1)));
	}
label_9:;
	{
	LINE_NUMBER(342);
	INST_IINC(3, 1);
	LINE_NUMBER(343);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(344);
	if ((frame[4].i) == (frame[3].i)) goto label_26;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[4].i), (frame[3].i));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_26:;
	{
	LINE_NUMBER(345);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_io_PropertiesUtils[] {
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
	{ "NONE", &class_int, (intptr_t) &SF_arc_util_io_PropertiesUtils_NONE, "I", 26 },
	{ "SLASH", &class_int, (intptr_t) &SF_arc_util_io_PropertiesUtils_SLASH, "I", 26 },
	{ "UNICODE", &class_int, (intptr_t) &SF_arc_util_io_PropertiesUtils_UNICODE, "I", 26 },
	{ "CONTINUE", &class_int, (intptr_t) &SF_arc_util_io_PropertiesUtils_CONTINUE, "I", 26 },
	{ "KEY_DONE", &class_int, (intptr_t) &SF_arc_util_io_PropertiesUtils_KEY_DONE, "I", 26 },
	{ "IGNORE", &class_int, (intptr_t) &SF_arc_util_io_PropertiesUtils_IGNORE, "I", 26 },
	{ "LINE_SEPARATOR", &class_java_lang_String, (intptr_t) &SF_arc_util_io_PropertiesUtils_LINE_SEPARATOR, "Ljava/lang/String;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_io_PropertiesUtils, 0, "()V", 2 },
	{ "load", (intptr_t) SM_arc_util_io_PropertiesUtils_load_arc_struct_ObjectMap_java_io_Reader, 0, "(Larc/struct/ObjectMap;Ljava/io/Reader;)V", 9 },
	{ "store", (intptr_t) SM_arc_util_io_PropertiesUtils_store_arc_struct_ObjectMap_java_io_Writer_java_lang_String_boolean, 0, "(Larc/struct/ObjectMap;Ljava/io/Writer;Ljava/lang/String;Z)V", 9 },
	{ "store", (intptr_t) SM_arc_util_io_PropertiesUtils_store_arc_struct_ObjectMap_java_io_Writer_java_lang_String, 0, "(Larc/struct/ObjectMap;Ljava/io/Writer;Ljava/lang/String;)V", 9 },
	{ "storeImpl", (intptr_t) SM_arc_util_io_PropertiesUtils_storeImpl_arc_struct_ObjectMap_java_io_Writer_java_lang_String_boolean_boolean, 0, "(Larc/struct/ObjectMap;Ljava/io/Writer;Ljava/lang/String;ZZ)V", 10 },
	{ "dumpString", (intptr_t) SM_arc_util_io_PropertiesUtils_dumpString_java_lang_StringBuilder_java_lang_String_boolean_boolean, 0, "(Ljava/lang/StringBuilder;Ljava/lang/String;ZZ)V", 10 },
	{ "writeComment", (intptr_t) SM_arc_util_io_PropertiesUtils_writeComment_java_io_Writer_java_lang_String, 0, "(Ljava/io/Writer;Ljava/lang/String;)V", 10 },
};

Class class_arc_util_io_PropertiesUtils{
		.nativeName = (intptr_t) "arc/util/io/PropertiesUtils",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_io_PropertiesUtils),
		.classVtable = (intptr_t) vtable_arc_util_io_PropertiesUtils,
		.staticInitializer = (intptr_t) clinit_arc_util_io_PropertiesUtils,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_io_PropertiesUtils,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_io_PropertiesUtils = registerClass(&class_arc_util_io_PropertiesUtils);

}
