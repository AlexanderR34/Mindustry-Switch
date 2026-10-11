#include "java/util/Properties.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/util/HashMap.h"
#include "java/io/Writer.h"
#include "java/io/OutputStreamWriter.h"
#include "java/util/ArrayList.h"
#include "java/util/Date.h"
#include "java/lang/reflect/Constructor.h"
#include "java/io/InputStream.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "java/util/Properties.h"
#include "java/io/InputStreamReader.h"
#include "java/util/Comparator.h"
#include "java/lang/NullPointerException.h"
#include "java/io/IOException.h"
#include "java/lang/reflect/Method.h"
#include "java/io/Reader.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Hashtable.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Map.h"
#include "java/io/OutputStream.h"
#include "java/lang/Object.h"
#include "java/util/Collections.h"
#include "java/util/CaseInsensitiveOrder.h"
#include "java/util/Enumeration.h"
#include "java/util/List.h"
#include "java/lang/System.h"
#include "java/util/AbstractMap.h"
#include "java/lang/Deprecated.h"

extern "C" {

jint SF_java_util_Properties_NONE;
jint SF_java_util_Properties_SLASH;
jint SF_java_util_Properties_UNICODE;
jint SF_java_util_Properties_CONTINUE;
jint SF_java_util_Properties_KEY_DONE;
jint SF_java_util_Properties_IGNORE;

void mark_java_util_Properties(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_util_HashMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_Properties *) object;
	if (self->F_defaults)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaults)->clazz)->markFunction)((jobject) self->F_defaults, mark, depth + 1);
}

void clinit_java_util_Properties(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_util_HashMap(ctx);
	SF_java_util_Properties_NONE = jint(0);
	SF_java_util_Properties_SLASH = jint(1);
	SF_java_util_Properties_UNICODE = jint(2);
	SF_java_util_Properties_CONTINUE = jint(3);
	SF_java_util_Properties_KEY_DONE = jint(4);
	SF_java_util_Properties_IGNORE = jint(5);
}

void init_java_util_Properties(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Properties(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(56);
	init_java_util_HashMap(ctx, (frame[0].o));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_util_Properties_java_util_Properties(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Properties(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	init_java_util_HashMap(ctx, (frame[0].o));
	LINE_NUMBER(67);
	((java_util_Properties *) NULL_CHECK((frame[0].o)))->F_defaults = (jref) (frame[1].o);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Properties_dumpString_java_lang_StringBuilder_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:dumpString", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(71);
	frame[4].i = (jint(0));
	LINE_NUMBER(72);
	if ((frame[3].i) != 0) goto label_2;
	}
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[4].i));
	if (temp0 != (32)) goto label_2;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\ "_j))));
	LINE_NUMBER(74);
	INST_IINC(4, 1);
	}
label_2:;
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[5].i = temp0;
	}
label_5:;
	{
	LINE_NUMBER(77);
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(78);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[2].o), (frame[4].i));
	frame[6].i = temp0;
	LINE_NUMBER(79);
	switch((frame[6].i)) {
		case 9: goto label_9;
		case 10: goto label_10;
		case 11: goto label_11;
		case 12: goto label_12;
		case 13: goto label_13;
		default: goto label_11;
	}
	}
label_9:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\t"_j))));
	LINE_NUMBER(82);
	goto label_15;
	}
label_10:;
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\n"_j))));
	LINE_NUMBER(85);
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\f"_j))));
	LINE_NUMBER(88);
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\r"_j))));
	LINE_NUMBER(91);
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"\\#!=:"_j))))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8"\\#!=:"_j))), (frame[6].i));
	if (temp0 >= 0) goto label_19;
	}
	INST_ILOAD(3);
	if ((--sp)->i == 0) goto label_20;
	{
	if ((frame[6].i) != (32)) goto label_20;
	}
label_19:;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (92));
	}
label_20:;
	{
	LINE_NUMBER(96);
	if ((frame[6].i) < (32)) goto label_21;
	}
	{
	if ((frame[6].i) > (126)) goto label_21;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[6].i));
	goto label_15;
	}
label_21:;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)SM_java_lang_Integer_toHexString_int_R_java_lang_String(ctx, (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\u"_j))));
	LINE_NUMBER(101);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[7].o));
	frame[8].i = temp0;
	LINE_NUMBER(102);
	frame[9].i = (jint(0));
	}
label_26:;
	{
	if ((frame[9].i) >= ((jint(4)) - (frame[8].i))) goto label_27;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"0"_j))));
	LINE_NUMBER(102);
	INST_IINC(9, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[7].o));
	}
label_15:;
	{
	LINE_NUMBER(77);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_Properties_getProperty_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:getProperty", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)M_java_util_HashMap_get_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(122);
	if ((isInstance(ctx, (frame[2].o), &class_java_lang_String)) == 0) goto label_2;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_lang_String, (frame[2].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(123);
	if ((frame[3].o) != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_Properties *) NULL_CHECK((frame[0].o)))->F_defaults;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((java_util_Properties *) NULL_CHECK((frame[0].o)))->F_defaults;
	sp[0].o = (jobject)((func_java_util_Properties_getProperty_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_getProperty_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:getProperty", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)M_java_util_HashMap_get_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(143);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_String)) == 0) goto label_2;
	}
	{
	sp[0].o = checkCast(ctx, &class_java_lang_String, (frame[3].o));
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ACONST_NULL();
label_3:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(144);
	if ((frame[4].o) != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((java_util_Properties *) NULL_CHECK((frame[0].o)))->F_defaults;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((java_util_Properties *) NULL_CHECK((frame[0].o)))->F_defaults;
	sp[0].o = (jobject)((func_java_util_Properties_getProperty_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_getProperty_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(147);
	if ((frame[4].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_7:;
	{
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_java_util_Properties_load_java_io_InputStream(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(162);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"in == null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	init_java_io_InputStreamReader_java_io_InputStream_java_lang_String(ctx, sp[1].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	((func_java_util_Properties_load_java_io_Reader) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_load_java_io_Reader])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Properties_load_java_io_Reader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:load", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(194);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(195);
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"in == null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(197);
	frame[2].i = (jint(0));
	frame[3].i = (jint(0));
	frame[4].i = (jint(0));
	LINE_NUMBER(198);
	sp[0].o = (jobject) createArray(ctx, &class_char, (40));
	frame[6].o = sp[0].o;
	LINE_NUMBER(199);
	frame[7].i = (jint(0));
	frame[8].i = (jint(-1));
	LINE_NUMBER(200);
	frame[10].i = (jint(1));
	LINE_NUMBER(202);
	frame[11].o = (frame[1].o);
	}
label_10:;
	{
	LINE_NUMBER(205);
	jint temp0 = (jint)((func_java_io_Reader_read_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_io_Reader_read_R_int])(ctx, (frame[11].o));
	frame[9].i = temp0;
	LINE_NUMBER(206);
	if ((frame[9].i) != (jint(-1))) goto label_12;
	}
	LINE_NUMBER(207);
	goto label_14;
label_12:;
	{
	LINE_NUMBER(209);
	frame[5].i = (jchar((frame[9].i)));
	LINE_NUMBER(211);
	if ((frame[7].i) != (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_16;
	}
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject) createArray(ctx, &class_char, ((((jarray) nullCheck(ctx, (frame[6].o)))->length) * (jint(2))));
	frame[12].o = sp[0].o;
	LINE_NUMBER(213);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[6].o), (jint(0)), (frame[12].o), (jint(0)), (frame[7].i));
	LINE_NUMBER(214);
	frame[6].o = (frame[12].o);
	}
label_16:;
	{
	LINE_NUMBER(216);
	if ((frame[2].i) != (jint(2))) goto label_20;
	}
	{
	LINE_NUMBER(217);
	jint temp0 = (jint)SM_java_lang_Character_digit_char_int_R_int(ctx, (frame[5].i), (16));
	frame[12].i = temp0;
	LINE_NUMBER(218);
	if ((frame[12].i) < 0) goto label_23;
	}
	{
	LINE_NUMBER(219);
	frame[3].i = (((frame[3].i) << (jint(4))) + (frame[12].i));
	LINE_NUMBER(220);
	INST_IINC(4, 1);
	if ((frame[4].i) >= (jint(4))) goto label_26;
	}
	LINE_NUMBER(221);
	goto label_10;
label_23:;
	{
	LINE_NUMBER(223);
	if ((frame[4].i) > (jint(4))) goto label_26;
	}
	{
	LINE_NUMBER(224);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid Unicode sequence: illegal character"_j))));
	throwException(ctx, sp[0].o);	}
label_26:;
	{
	LINE_NUMBER(226);
	frame[2].i = (jint(0));
	LINE_NUMBER(227);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (jchar((frame[3].i)));
	LINE_NUMBER(228);
	if ((frame[5].i) == (10)) goto label_20;
	}
	LINE_NUMBER(229);
	goto label_10;
label_20:;
	{
	LINE_NUMBER(232);
	if ((frame[2].i) != (jint(1))) goto label_32;
	}
	{
	LINE_NUMBER(233);
	frame[2].i = (jint(0));
	LINE_NUMBER(234);
	switch((frame[5].i)) {
		case 10: goto label_35;
		case 13: goto label_36;
		case 98: goto label_37;
		case 102: goto label_38;
		case 110: goto label_39;
		case 114: goto label_40;
		case 116: goto label_41;
		case 117: goto label_42;
		default: goto label_43;
	}
	}
label_36:;
	{
	LINE_NUMBER(236);
	frame[2].i = (jint(3));
	LINE_NUMBER(237);
	goto label_10;
	}
label_35:;
	{
	LINE_NUMBER(239);
	frame[2].i = (jint(5));
	LINE_NUMBER(240);
	goto label_10;
	}
label_37:;
	{
	LINE_NUMBER(242);
	frame[5].i = (8);
	LINE_NUMBER(243);
	goto label_43;
	}
label_38:;
	{
	LINE_NUMBER(245);
	frame[5].i = (12);
	LINE_NUMBER(246);
	goto label_43;
	}
label_39:;
	{
	LINE_NUMBER(248);
	frame[5].i = (10);
	LINE_NUMBER(249);
	goto label_43;
	}
label_40:;
	{
	LINE_NUMBER(251);
	frame[5].i = (13);
	LINE_NUMBER(252);
	goto label_43;
	}
label_41:;
	{
	LINE_NUMBER(254);
	frame[5].i = (9);
	LINE_NUMBER(255);
	goto label_43;
	}
label_42:;
	{
	LINE_NUMBER(257);
	frame[2].i = (jint(2));
	LINE_NUMBER(258);
	jint temp0 = jint(0);
	frame[4].i = temp0;
	frame[3].i = temp0;
	LINE_NUMBER(259);
	goto label_10;
	}
label_43:;
	goto label_53;
label_32:;
	{
	LINE_NUMBER(262);
	switch((frame[5].i)) {
		case 10: goto label_54;
		case 13: goto label_55;
		case 33: goto label_56;
		case 35: goto label_56;
		case 58: goto label_57;
		case 61: goto label_57;
		case 92: goto label_58;
		default: goto label_59;
	}
	}
label_56:;
	{
	LINE_NUMBER(265);
	if ((frame[10].i) == 0) goto label_59;
	}
label_60:;
	{
	LINE_NUMBER(267);
	jint temp0 = (jint)((func_java_io_Reader_read_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_io_Reader_read_R_int])(ctx, (frame[11].o));
	frame[9].i = temp0;
	LINE_NUMBER(268);
	if ((frame[9].i) != (jint(-1))) goto label_62;
	}
	LINE_NUMBER(269);
	goto label_10;
label_62:;
	{
	LINE_NUMBER(271);
	frame[5].i = (jchar((frame[9].i)));
	LINE_NUMBER(272);
	if ((frame[5].i) == (13)) goto label_10;
	}
	{
	if ((frame[5].i) != (10)) goto label_60;
	}
	LINE_NUMBER(273);
	goto label_10;
label_54:;
	{
	LINE_NUMBER(280);
	if ((frame[2].i) != (jint(3))) goto label_55;
	}
	{
	LINE_NUMBER(281);
	frame[2].i = (jint(5));
	LINE_NUMBER(282);
	goto label_10;
	}
label_55:;
	{
	LINE_NUMBER(286);
	frame[2].i = (jint(0));
	LINE_NUMBER(287);
	frame[10].i = (jint(1));
	LINE_NUMBER(288);
	if ((frame[7].i) > 0) goto label_70;
	}
	INST_ILOAD(7);
	if ((--sp)->i != 0) goto label_71;
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_71;
label_70:;
	{
	LINE_NUMBER(289);
	if ((frame[8].i) != (jint(-1))) goto label_72;
	}
	{
	LINE_NUMBER(290);
	frame[8].i = (frame[7].i);
	}
label_72:;
	{
	LINE_NUMBER(292);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[6].o), (jint(0)), (frame[7].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(293);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[12].o), (jint(0)), (frame[8].i));
	sp[2].o = frame[12].o;
	jint temp0 = frame[8].i;
	LINE_NUMBER(294);
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, temp0);
	LINE_NUMBER(293);
	sp[0].o = (jobject)((func_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_71:;
	{
	LINE_NUMBER(296);
	frame[8].i = (jint(-1));
	LINE_NUMBER(297);
	frame[7].i = (jint(0));
	LINE_NUMBER(298);
	goto label_10;
	}
label_58:;
	{
	LINE_NUMBER(300);
	if ((frame[2].i) != (jint(4))) goto label_79;
	}
	{
	LINE_NUMBER(301);
	frame[8].i = (frame[7].i);
	}
label_79:;
	{
	LINE_NUMBER(303);
	frame[2].i = (jint(1));
	LINE_NUMBER(304);
	goto label_10;
	}
label_57:;
	{
	LINE_NUMBER(307);
	if ((frame[8].i) != (jint(-1))) goto label_59;
	}
	{
	LINE_NUMBER(308);
	frame[2].i = (jint(0));
	LINE_NUMBER(309);
	frame[8].i = (frame[7].i);
	LINE_NUMBER(310);
	goto label_10;
	}
label_59:;
	{
	LINE_NUMBER(314);
	if ((frame[5].i) == (32)) goto label_85;
	}
	{
	if ((frame[5].i) == (10)) goto label_85;
	}
	{
	if ((frame[5].i) == (13)) goto label_85;
	}
	{
	if ((frame[5].i) != (9)) goto label_86;
	}
label_85:;
	{
	LINE_NUMBER(315);
	if ((frame[2].i) != (jint(3))) goto label_87;
	}
	{
	LINE_NUMBER(316);
	frame[2].i = (jint(5));
	}
label_87:;
	{
	LINE_NUMBER(319);
	if ((frame[7].i) == 0) goto label_10;
	}
	{
	if ((frame[7].i) == (frame[8].i)) goto label_10;
	}
	{
	if ((frame[2].i) != (jint(5))) goto label_89;
	}
	LINE_NUMBER(320);
	goto label_10;
label_89:;
	{
	LINE_NUMBER(322);
	if ((frame[8].i) != (jint(-1))) goto label_86;
	}
	{
	LINE_NUMBER(323);
	frame[2].i = (jint(4));
	LINE_NUMBER(324);
	goto label_10;
	}
label_86:;
	{
	LINE_NUMBER(327);
	if ((frame[2].i) == (jint(5))) goto label_93;
	}
	{
	if ((frame[2].i) != (jint(3))) goto label_53;
	}
label_93:;
	{
	LINE_NUMBER(328);
	frame[2].i = (jint(0));
	}
label_53:;
	{
	LINE_NUMBER(331);
	frame[10].i = (jint(0));
	LINE_NUMBER(332);
	if ((frame[2].i) != (jint(4))) goto label_95;
	}
	{
	LINE_NUMBER(333);
	frame[8].i = (frame[7].i);
	LINE_NUMBER(334);
	frame[2].i = (jint(0));
	}
label_95:;
	{
	LINE_NUMBER(336);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	ARRAY_ACCESS(jchar, sp[0].o, temp0) = (frame[5].i);
	goto label_10;
	}
label_14:;
	{
	LINE_NUMBER(338);
	if ((frame[2].i) != (jint(2))) goto label_98;
	}
	{
	if ((frame[4].i) > (jint(4))) goto label_98;
	}
	{
	LINE_NUMBER(339);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid Unicode sequence: expected format \\uxxxx"_j))));
	throwException(ctx, sp[0].o);	}
label_98:;
	{
	LINE_NUMBER(341);
	if ((frame[8].i) != (jint(-1))) goto label_100;
	}
	INST_ILOAD(7);
	if ((--sp)->i <= 0) goto label_100;
	{
	LINE_NUMBER(342);
	frame[8].i = (frame[7].i);
	}
label_100:;
	{
	LINE_NUMBER(344);
	if ((frame[8].i) < 0) goto label_102;
	}
	{
	LINE_NUMBER(345);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	init_java_lang_String_Array1_char_int_int(ctx, sp[0].o, (frame[6].o), (jint(0)), (frame[7].i));
	frame[12].o = sp[0].o;
	LINE_NUMBER(346);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[12].o), (jint(0)), (frame[8].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(347);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[12].o), (frame[8].i));
	frame[14].o = sp[0].o;
	LINE_NUMBER(348);
	if ((frame[2].i) != (jint(1))) goto label_107;
	}
	{
	LINE_NUMBER(349);
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
	LINE_NUMBER(351);
	sp[0].o = (jobject)((func_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[13].o), (frame[14].o));
	}
label_102:;
	LINE_NUMBER(353);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_Properties_propertyNames_R_java_util_Enumeration(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:propertyNames", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(359);
	clinit_java_util_Hashtable(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Hashtable);
	init_java_util_Hashtable(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(360);
	M_java_util_Properties_selectProperties_java_util_Hashtable_boolean(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_java_util_Hashtable_keys_R_java_util_Enumeration) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Hashtable_keys_R_java_util_Enumeration])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_util_Properties_stringPropertyNames_R_java_util_Set(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:stringPropertyNames", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(372);
	clinit_java_util_Hashtable(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Hashtable);
	init_java_util_Hashtable(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(373);
	M_java_util_Properties_selectProperties_java_util_Hashtable_boolean(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(374);
	sp[0].o = (jobject)((func_java_util_Hashtable_keySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Hashtable_keySet_R_java_util_Set])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_java_util_Collections_unmodifiableSet_java_util_Set_R_java_util_Set(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_Properties_selectProperties_java_util_Hashtable_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:selectProperties", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((java_util_Properties *) NULL_CHECK((frame[0].o)))->F_defaults;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((java_util_Properties *) NULL_CHECK((frame[0].o)))->F_defaults;
	M_java_util_Properties_selectProperties_java_util_Hashtable_boolean(ctx, sp[0].o, (frame[1].o), (frame[2].i));
	}
label_1:;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((func_java_util_Properties_keySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Properties_keySet_R_java_util_Set])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(382);
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(385);
	if ((frame[2].i) == 0) goto label_7;
	}
	{
	if ((isInstance(ctx, (frame[4].o), &class_java_lang_String)) != 0) goto label_7;
	}
	LINE_NUMBER(387);
	goto label_3;
label_7:;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((func_java_util_Properties_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Properties_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(390);
	sp[0].o = (jobject)((func_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Hashtable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(391);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(392);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_util_Properties_save_java_io_OutputStream_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:save", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(411);
	((func_java_util_Properties_store_java_io_OutputStream_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Properties_store_java_io_OutputStream_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(413);
	goto label_4;
label_2:;
	LINE_NUMBER(412);
	INST_ASTORE(3);
label_4:;
	LINE_NUMBER(414);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_util_Properties_setProperty_java_lang_String_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:setProperty", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((func_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Properties_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_util_Properties_store_java_io_OutputStream_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:store", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(440);
	sp[0].o = frame[0].o;
	clinit_java_io_OutputStreamWriter(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_OutputStreamWriter);
	init_java_io_OutputStreamWriter_java_io_OutputStream_java_lang_String(ctx, sp[1].o, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	((func_java_util_Properties_store_java_io_Writer_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_Properties_store_java_io_Writer_java_lang_String])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(441);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_util_Properties_store_java_io_Writer_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Properties:store", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(454);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 <= 0) goto label_1;
	}
	{
	LINE_NUMBER(455);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	LINE_NUMBER(456);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(457);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(458);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"#"_j))));
	LINE_NUMBER(459);
	sp[0].o = frame[1].o;
	clinit_java_util_Date(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_util_Date_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_util_Date_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(460);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	}
label_1:;
	{
	LINE_NUMBER(463);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (200));
	frame[3].o = sp[0].o;
	LINE_NUMBER(464);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	sp[1].o = (jobject)((func_java_util_Properties_keySet_R_java_util_Set) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Properties_keySet_R_java_util_Set])(ctx, (frame[0].o));
	init_java_util_ArrayList_java_util_Collection(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(465);
	sp[0].o = frame[4].o;
	clinit_java_util_CaseInsensitiveOrder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_CaseInsensitiveOrder);
	init_java_util_CaseInsensitiveOrder(ctx, sp[1].o);
	SM_java_util_Collections_sort_java_util_List_java_util_Comparator(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(466);
	sp[0].o = (jobject)((func_java_util_ArrayList_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_util_ArrayList_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(467);
	M_java_util_Properties_dumpString_java_lang_StringBuilder_java_lang_String_boolean(ctx, (frame[0].o), (frame[3].o), (frame[6].o), (jint(1)));
	LINE_NUMBER(468);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[3].o), (61));
	LINE_NUMBER(469);
	sp[0].o = frame[0].o;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_java_util_Properties_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_util_Properties_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[0].o), (frame[6].o));
	M_java_util_Properties_dumpString_java_lang_StringBuilder_java_lang_String_boolean(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)), (jint(0)));
	LINE_NUMBER(470);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(471);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(472);
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(473);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(474);
	((func_java_io_Writer_flush) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_flush])(ctx, (frame[1].o));
	LINE_NUMBER(475);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_java_util_Properties;
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

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method save
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[8]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_java_util_Properties[] {
	(void *) M_java_util_AbstractMap_hashCode_R_int,
	(void *) M_java_util_AbstractMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_util_HashMap_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_util_AbstractMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_util_HashMap_clear,
	(void *) M_java_util_HashMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_java_util_HashMap_containsValue_java_lang_Object_R_boolean,
	(void *) M_java_util_HashMap_entrySet_R_java_util_Set,
	(void *) M_java_util_HashMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_isEmpty_R_boolean,
	(void *) M_java_util_HashMap_keySet_R_java_util_Set,
	(void *) M_java_util_HashMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_putAll_java_util_Map,
	(void *) M_java_util_Map_putIfAbsent_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_remove_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_replace_java_lang_Object_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_java_util_Map_getOrDefault_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_Map_forEach_java_util_function_BiConsumer,
	(void *) M_java_util_Map_replaceAll_java_util_function_BiFunction,
	(void *) M_java_util_Map_computeIfAbsent_java_lang_Object_java_util_function_Function_R_java_lang_Object,
	(void *) M_java_util_Map_computeIfPresent_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_compute_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_Map_merge_java_lang_Object_java_lang_Object_java_util_function_BiFunction_R_java_lang_Object,
	(void *) M_java_util_HashMap_size_R_int,
	(void *) M_java_util_HashMap_values_R_java_util_Collection,
	(void *) M_java_util_HashMap_newElementArray_int_R_Array1_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_computeThreshold,
	(void *) M_java_util_HashMap_getEntry_java_lang_Object_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_findNonNullKeyEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_findNullKeyEntry_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_putImpl_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_java_util_HashMap_createEntry_java_lang_Object_int_java_lang_Object_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_createHashedEntry_java_lang_Object_int_int_R_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_putAllImpl_java_util_Map,
	(void *) M_java_util_HashMap_rehash_int,
	(void *) M_java_util_HashMap_rehash,
	(void *) M_java_util_HashMap_removeEntry_java_util_HashMap$Entry,
	(void *) M_java_util_HashMap_removeEntry_java_lang_Object_R_java_util_HashMap$Entry,
	(void *) M_java_util_Properties_dumpString_java_lang_StringBuilder_java_lang_String_boolean,
	(void *) M_java_util_Properties_getProperty_java_lang_String_R_java_lang_String,
	(void *) M_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String,
	(void *) M_java_util_Properties_load_java_io_InputStream,
	(void *) M_java_util_Properties_load_java_io_Reader,
	(void *) M_java_util_Properties_propertyNames_R_java_util_Enumeration,
	(void *) M_java_util_Properties_stringPropertyNames_R_java_util_Set,
	(void *) M_java_util_Properties_selectProperties_java_util_Hashtable_boolean,
	(void *) M_java_util_Properties_save_java_io_OutputStream_java_lang_String,
	(void *) M_java_util_Properties_setProperty_java_lang_String_java_lang_String_R_java_lang_Object,
	(void *) M_java_util_Properties_store_java_io_OutputStream_java_lang_String,
	(void *) M_java_util_Properties_store_java_io_Writer_java_lang_String,
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
	{ "clear", "()V" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "containsValue", "(Ljava/lang/Object;)Z" },
	{ "entrySet", "()Ljava/util/Set;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "isEmpty", "()Z" },
	{ "keySet", "()Ljava/util/Set;" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "(Ljava/util/Map;)V" },
	{ "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "forEach", "(Ljava/util/function/BiConsumer;)V" },
	{ "replaceAll", "(Ljava/util/function/BiFunction;)V" },
	{ "computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;" },
	{ "computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" },
	{ "size", "()I" },
	{ "values", "()Ljava/util/Collection;" },
	{ "newElementArray", "(I)[Ljava/util/HashMap$Entry;" },
	{ "computeThreshold", "()V" },
	{ "getEntry", "(Ljava/lang/Object;)Ljava/util/HashMap$Entry;" },
	{ "findNonNullKeyEntry", "(Ljava/lang/Object;II)Ljava/util/HashMap$Entry;" },
	{ "findNullKeyEntry", "()Ljava/util/HashMap$Entry;" },
	{ "putImpl", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "createEntry", "(Ljava/lang/Object;ILjava/lang/Object;)Ljava/util/HashMap$Entry;" },
	{ "createHashedEntry", "(Ljava/lang/Object;II)Ljava/util/HashMap$Entry;" },
	{ "putAllImpl", "(Ljava/util/Map;)V" },
	{ "rehash", "(I)V" },
	{ "rehash", "()V" },
	{ "removeEntry", "(Ljava/util/HashMap$Entry;)V" },
	{ "removeEntry", "(Ljava/lang/Object;)Ljava/util/HashMap$Entry;" },
	{ "dumpString", "(Ljava/lang/StringBuilder;Ljava/lang/String;Z)V" },
	{ "getProperty", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;" },
	{ "load", "(Ljava/io/InputStream;)V" },
	{ "load", "(Ljava/io/Reader;)V" },
	{ "propertyNames", "()Ljava/util/Enumeration;" },
	{ "stringPropertyNames", "()Ljava/util/Set;" },
	{ "selectProperties", "(Ljava/util/Hashtable;Z)V" },
	{ "save", "(Ljava/io/OutputStream;Ljava/lang/String;)V" },
	{ "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;" },
	{ "store", "(Ljava/io/OutputStream;Ljava/lang/String;)V" },
	{ "store", "(Ljava/io/Writer;Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "defaults", &class_java_util_Properties, offsetof(java_util_Properties, F_defaults), "Ljava/util/Properties;", 4 },
	{ "NONE", &class_int, (intptr_t) &SF_java_util_Properties_NONE, "I", 26 },
	{ "SLASH", &class_int, (intptr_t) &SF_java_util_Properties_SLASH, "I", 26 },
	{ "UNICODE", &class_int, (intptr_t) &SF_java_util_Properties_UNICODE, "I", 26 },
	{ "CONTINUE", &class_int, (intptr_t) &SF_java_util_Properties_CONTINUE, "I", 26 },
	{ "KEY_DONE", &class_int, (intptr_t) &SF_java_util_Properties_KEY_DONE, "I", 26 },
	{ "IGNORE", &class_int, (intptr_t) &SF_java_util_Properties_IGNORE, "I", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Properties, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_java_util_Properties_java_util_Properties, 0, "(Ljava/util/Properties;)V", 1 },
	{ "dumpString", (intptr_t) M_java_util_Properties_dumpString_java_lang_StringBuilder_java_lang_String_boolean, VTABLE_java_util_Properties_dumpString_java_lang_StringBuilder_java_lang_String_boolean, "(Ljava/lang/StringBuilder;Ljava/lang/String;Z)V", 2 },
	{ "getProperty", (intptr_t) M_java_util_Properties_getProperty_java_lang_String_R_java_lang_String, VTABLE_java_util_Properties_getProperty_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getProperty", (intptr_t) M_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String, VTABLE_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "load", (intptr_t) M_java_util_Properties_load_java_io_InputStream, VTABLE_java_util_Properties_load_java_io_InputStream, "(Ljava/io/InputStream;)V", 33 },
	{ "load", (intptr_t) M_java_util_Properties_load_java_io_Reader, VTABLE_java_util_Properties_load_java_io_Reader, "(Ljava/io/Reader;)V", 33 },
	{ "propertyNames", (intptr_t) M_java_util_Properties_propertyNames_R_java_util_Enumeration, VTABLE_java_util_Properties_propertyNames_R_java_util_Enumeration, "()Ljava/util/Enumeration;", 1 },
	{ "stringPropertyNames", (intptr_t) M_java_util_Properties_stringPropertyNames_R_java_util_Set, VTABLE_java_util_Properties_stringPropertyNames_R_java_util_Set, "()Ljava/util/Set;", 1 },
	{ "selectProperties", (intptr_t) M_java_util_Properties_selectProperties_java_util_Hashtable_boolean, VTABLE_java_util_Properties_selectProperties_java_util_Hashtable_boolean, "(Ljava/util/Hashtable;Z)V", 2 },
	{ "save", (intptr_t) M_java_util_Properties_save_java_io_OutputStream_java_lang_String, VTABLE_java_util_Properties_save_java_io_OutputStream_java_lang_String, "(Ljava/io/OutputStream;Ljava/lang/String;)V", 131073 },
	{ "setProperty", (intptr_t) M_java_util_Properties_setProperty_java_lang_String_java_lang_String_R_java_lang_Object, VTABLE_java_util_Properties_setProperty_java_lang_String_java_lang_String_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;", 1 },
	{ "store", (intptr_t) M_java_util_Properties_store_java_io_OutputStream_java_lang_String, VTABLE_java_util_Properties_store_java_io_OutputStream_java_lang_String, "(Ljava/io/OutputStream;Ljava/lang/String;)V", 33 },
	{ "store", (intptr_t) M_java_util_Properties_store_java_io_Writer_java_lang_String, VTABLE_java_util_Properties_store_java_io_Writer_java_lang_String, "(Ljava/io/Writer;Ljava/lang/String;)V", 33 },
};

Class class_java_util_Properties{
		.nativeName = (intptr_t) "java/util/Properties",
		.parentClass = (intptr_t) &class_java_util_HashMap,
		.size = sizeof(java_util_Properties),
		.classVtable = (intptr_t) vtable_java_util_Properties,
		.staticInitializer = (intptr_t) clinit_java_util_Properties,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_java_util_Properties,
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
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 59,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_Properties = registerClass(&class_java_util_Properties);

}
