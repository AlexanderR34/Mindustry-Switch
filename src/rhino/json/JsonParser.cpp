#include "rhino/json/JsonParser.h"
#include "rhino/json/JsonParser.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Number.h"
#include "java/lang/Boolean.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "java/util/ArrayList.h"
#include "java/lang/CharSequence.h"
#include "rhino/json/JsonParser_ParseException.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "java/lang/String.h"
#include "java/lang/AssertionError.h"
#include "java/lang/Class.h"
#include "java/util/List.h"
#include "java/lang/Double.h"

extern "C" {

jbool SF_rhino_json_JsonParser_$assertionsDisabled;

void mark_rhino_json_JsonParser(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_json_JsonParser *) object;
	if (self->F_cx)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cx)->clazz)->markFunction)((jobject) self->F_cx, mark, depth + 1);
	if (self->F_scope)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_scope)->clazz)->markFunction)((jobject) self->F_scope, mark, depth + 1);
	if (self->F_src)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_src)->clazz)->markFunction)((jobject) self->F_src, mark, depth + 1);
}

void init_rhino_json_JsonParser_rhino_Context_rhino_Scriptable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_json_JsonParser(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(29);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_cx = (jref) (frame[1].o);
	LINE_NUMBER(31);
	((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_scope = (jref) (frame[2].o);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_json_JsonParser_parseValue_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:parseValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(35);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(36);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Input string may not be null"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(38);
	((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos = (jint(0));
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_length = temp0;
	LINE_NUMBER(40);
	((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src = (jref) (frame[1].o);
	LINE_NUMBER(41);
	sp[0].o = (jobject)M_rhino_json_JsonParser_readValue_R_java_lang_Object(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(42);
	M_rhino_json_JsonParser_consumeWhitespace(ctx, (frame[0].o));
	LINE_NUMBER(43);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_8;
	}
	{
	LINE_NUMBER(44);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Expected end of stream at char "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(46);
	popStackFrame(ctx, self);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_rhino_json_JsonParser_readValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:readValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	M_rhino_json_JsonParser_consumeWhitespace(ctx, (frame[0].o));
	LINE_NUMBER(51);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_2;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos;
	((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[1].i = temp3;
	LINE_NUMBER(53);
	switch((frame[1].i)) {
		case 34: goto label_5;
		case 45: goto label_6;
		case 48: goto label_6;
		case 49: goto label_6;
		case 50: goto label_6;
		case 51: goto label_6;
		case 52: goto label_6;
		case 53: goto label_6;
		case 54: goto label_6;
		case 55: goto label_6;
		case 56: goto label_6;
		case 57: goto label_6;
		case 91: goto label_7;
		case 102: goto label_8;
		case 110: goto label_9;
		case 116: goto label_10;
		case 123: goto label_11;
		default: goto label_12;
	}
	}
label_11:;
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)M_rhino_json_JsonParser_readObject_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)M_rhino_json_JsonParser_readArray_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)M_rhino_json_JsonParser_readTrue_R_java_lang_Boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)M_rhino_json_JsonParser_readFalse_R_java_lang_Boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)M_rhino_json_JsonParser_readString_R_java_lang_String(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)M_rhino_json_JsonParser_readNull_R_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)M_rhino_json_JsonParser_readNumber_char_R_java_lang_Number(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(79);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unexpected token: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(82);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Empty JSON string"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_json_JsonParser_readObject_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:readObject", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(86);
	M_rhino_json_JsonParser_consumeWhitespace(ctx, (frame[0].o));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[0].o = (jobject)((func_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_newObject_rhino_Scriptable_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(89);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_3;
	}
	{
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos));
	if (temp0 != (125)) goto label_3;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_3:;
	{
	LINE_NUMBER(95);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(96);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_7;
	}
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos;
	((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[5].i = temp3;
	LINE_NUMBER(98);
	switch((frame[5].i)) {
		case 34: goto label_10;
		case 44: goto label_11;
		case 125: goto label_12;
		default: goto label_13;
	}
	}
label_12:;
	{
	LINE_NUMBER(100);
	if ((frame[4].i) != 0) goto label_14;
	}
	{
	LINE_NUMBER(101);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unexpected comma in object literal"_j))));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_11:;
	{
	LINE_NUMBER(105);
	if ((frame[4].i) != 0) goto label_16;
	}
	{
	LINE_NUMBER(106);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unexpected comma in object literal"_j))));
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(108);
	frame[4].i = (jint(0));
	LINE_NUMBER(109);
	goto label_19;
	}
label_10:;
	{
	LINE_NUMBER(111);
	if ((frame[4].i) == 0) goto label_20;
	}
	{
	LINE_NUMBER(112);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing comma in object literal"_j))));
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)M_rhino_json_JsonParser_readString_R_java_lang_String(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(115);
	M_rhino_json_JsonParser_consume_char(ctx, (frame[0].o), (58));
	LINE_NUMBER(116);
	sp[0].o = (jobject)M_rhino_json_JsonParser_readValue_R_java_lang_Object(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(118);
	jlong temp0 = (jlong)SM_rhino_ScriptRuntime_indexFromString_java_lang_String_R_long(ctx, (frame[2].o));
	frame[6].l = temp0;
	LINE_NUMBER(119);
	if ((longCompare((frame[6].l), (jlong(0)))) >= 0) goto label_26;
	}
	{
	LINE_NUMBER(120);
	((func_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_java_lang_String_rhino_Scriptable_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (frame[1].o), (frame[3].o));
	goto label_28;
	}
label_26:;
	{
	LINE_NUMBER(122);
	((func_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_put_int_rhino_Scriptable_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (jint((frame[6].l))), (frame[1].o), (frame[3].o));
	}
label_28:;
	{
	LINE_NUMBER(125);
	frame[4].i = (jint(1));
	LINE_NUMBER(126);
	goto label_19;
	}
label_13:;
	{
	LINE_NUMBER(128);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unexpected token in object literal"_j))));
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(130);
	M_rhino_json_JsonParser_consumeWhitespace(ctx, (frame[0].o));
	LINE_NUMBER(131);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(132);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unterminated object literal"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_json_JsonParser_readArray_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:readArray", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	M_rhino_json_JsonParser_consumeWhitespace(ctx, (frame[0].o));
	LINE_NUMBER(138);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_2;
	}
	{
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos));
	if (temp0 != (93)) goto label_2;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = frame[0].o;
	((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_int_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(142);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(143);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	LINE_NUMBER(144);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_7;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos));
	frame[3].i = temp0;
	LINE_NUMBER(146);
	switch((frame[3].i)) {
		case 44: goto label_10;
		case 93: goto label_11;
		default: goto label_12;
	}
	}
label_11:;
	{
	LINE_NUMBER(148);
	if ((frame[2].i) != 0) goto label_13;
	}
	{
	LINE_NUMBER(149);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unexpected comma in array literal"_j))));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(151);
	sp[0].o = frame[0].o;
	((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_cx;
	sp[1].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_scope;
	sp[2].o = (jobject)((func_java_util_List_toArray_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_R_Array1_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_Context_newArray_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(154);
	if ((frame[2].i) != 0) goto label_16;
	}
	{
	LINE_NUMBER(155);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unexpected comma in array literal"_j))));
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(157);
	frame[2].i = (jint(0));
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(159);
	goto label_20;
	}
label_12:;
	{
	LINE_NUMBER(161);
	if ((frame[2].i) == 0) goto label_21;
	}
	{
	LINE_NUMBER(162);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing comma in array literal"_j))));
	throwException(ctx, sp[0].o);	}
label_21:;
	{
	LINE_NUMBER(164);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_rhino_json_JsonParser_readValue_R_java_lang_Object(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(165);
	frame[2].i = (jint(1));
	}
label_20:;
	{
	LINE_NUMBER(167);
	M_rhino_json_JsonParser_consumeWhitespace(ctx, (frame[0].o));
	LINE_NUMBER(168);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(169);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unterminated array literal"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_json_JsonParser_readString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:readString", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	frame[1].i = ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos);
	}
label_1:;
	{
	LINE_NUMBER(178);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_2;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos;
	((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[2].i = temp3;
	LINE_NUMBER(180);
	if ((frame[2].i) > (31)) goto label_5;
	}
	{
	LINE_NUMBER(181);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"String contains control character"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(182);
	if ((frame[2].i) != (92)) goto label_7;
	}
	LINE_NUMBER(183);
	goto label_2;
label_7:;
	{
	LINE_NUMBER(184);
	if ((frame[2].i) != (34)) goto label_9;
	}
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (frame[1].i), (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) - (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	LINE_NUMBER(187);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(194);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(195);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_12;
	}
	{
	LINE_NUMBER(196);
	if ((clinit_rhino_json_JsonParser(ctx), (jint)SF_rhino_json_JsonParser_$assertionsDisabled) != 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) - (jint(1))));
	if (temp0 == (92)) goto label_14;
	}
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(197);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].i), (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) - (jint(1))));
	LINE_NUMBER(198);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) < ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_16;
	}
	{
	LINE_NUMBER(199);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unterminated string"_j))));
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos;
	((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[3].i = temp3;
	LINE_NUMBER(202);
	switch((frame[3].i)) {
		case 34: goto label_19;
		case 47: goto label_20;
		case 92: goto label_21;
		case 98: goto label_22;
		case 102: goto label_23;
		case 110: goto label_24;
		case 114: goto label_25;
		case 116: goto label_26;
		case 117: goto label_27;
		default: goto label_28;
	}
	}
label_19:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (34));
	LINE_NUMBER(205);
	goto label_30;
	}
label_21:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (92));
	LINE_NUMBER(208);
	goto label_30;
	}
label_20:;
	{
	LINE_NUMBER(210);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (47));
	LINE_NUMBER(211);
	goto label_30;
	}
label_22:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (8));
	LINE_NUMBER(214);
	goto label_30;
	}
label_23:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (12));
	LINE_NUMBER(217);
	goto label_30;
	}
label_24:;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (10));
	LINE_NUMBER(220);
	goto label_30;
	}
label_25:;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (13));
	LINE_NUMBER(223);
	goto label_30;
	}
label_26:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (9));
	LINE_NUMBER(226);
	goto label_30;
	}
label_27:;
	{
	LINE_NUMBER(228);
	if ((((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length) - ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos)) >= (jint(5))) goto label_38;
	}
	{
	LINE_NUMBER(229);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid character code: \\u"_j))));
	sp[2].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[2].o, ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_38:;
	{
	LINE_NUMBER(231);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(0))));
	jint temp1 = (jint)M_rhino_json_JsonParser_fromHex_char_R_int(ctx, sp[0].o, temp0);
	jint temp2 = temp1 << (12);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp3 = ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1));
	LINE_NUMBER(232);
	jint temp4 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, temp3);
	jint temp5 = (jint)M_rhino_json_JsonParser_fromHex_char_R_int(ctx, sp[0].o, temp4);
	jint temp6 = temp2 | (temp5 << (8));
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp7 = ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(2));
	LINE_NUMBER(233);
	jint temp8 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, temp7);
	jint temp9 = (jint)M_rhino_json_JsonParser_fromHex_char_R_int(ctx, sp[0].o, temp8);
	jint temp10 = temp6 | (temp9 << (jint(4)));
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp11 = ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(3));
	LINE_NUMBER(234);
	jint temp12 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[1].o, temp11);
	jint temp13 = (jint)M_rhino_json_JsonParser_fromHex_char_R_int(ctx, sp[0].o, temp12);
	frame[4].i = (temp10 | temp13);
	LINE_NUMBER(235);
	if ((frame[4].i) >= 0) goto label_44;
	}
	{
	LINE_NUMBER(236);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid character code: "_j))));
	sp[2].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos), (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(4))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_44:;
	{
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(4)));
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[2].o), (jchar((frame[4].i))));
	LINE_NUMBER(240);
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(242);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unexpected character in string: '\\"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_30:;
	{
	LINE_NUMBER(244);
	frame[1].i = ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos);
	}
label_48:;
	{
	LINE_NUMBER(245);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_49;
	}
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos;
	((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[3].i = temp3;
	LINE_NUMBER(247);
	if ((frame[3].i) > (31)) goto label_52;
	}
	{
	LINE_NUMBER(248);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"String contains control character"_j))));
	throwException(ctx, sp[0].o);	}
label_52:;
	{
	LINE_NUMBER(249);
	if ((frame[3].i) != (92)) goto label_54;
	}
	LINE_NUMBER(250);
	goto label_49;
label_54:;
	{
	LINE_NUMBER(251);
	if ((frame[3].i) != (34)) goto label_48;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, (frame[1].i), (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) - (jint(1))));
	LINE_NUMBER(253);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_49:;
	LINE_NUMBER(256);
	goto label_11;
label_12:;
	{
	LINE_NUMBER(257);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unterminated string literal"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_rhino_json_JsonParser_fromHex_char_R_int(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:fromHex", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(261);
	if ((frame[1].i) < (48)) goto label_1;
	}
	{
	if ((frame[1].i) > (57)) goto label_1;
	}
	{
	jint temp0 = (frame[1].i) - (48);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	if ((frame[1].i) < (65)) goto label_3;
	}
	{
	if ((frame[1].i) > (70)) goto label_3;
	}
	{
	jint temp0 = ((frame[1].i) - (65)) + (10);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_3:;
	{
	if ((frame[1].i) < (97)) goto label_4;
	}
	{
	if ((frame[1].i) > (102)) goto label_4;
	}
	{
	jint temp0 = ((frame[1].i) - (97)) + (10);
	sp[0].i = temp0;
	sp += 1;
	goto label_2;
	}
label_4:;
	INST_ICONST(-1);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_rhino_json_JsonParser_readNumber_char_R_java_lang_Number(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:readNumber", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(268);
	if ((clinit_rhino_json_JsonParser(ctx), (jint)SF_rhino_json_JsonParser_$assertionsDisabled) != 0) goto label_1;
	}
	{
	if ((frame[1].i) == (45)) goto label_1;
	}
	{
	if ((frame[1].i) < (48)) goto label_2;
	}
	{
	if ((frame[1].i) <= (57)) goto label_1;
	}
label_2:;
	{
	clinit_java_lang_AssertionError(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_AssertionError);
	init_java_lang_AssertionError(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(269);
	frame[2].i = (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) - (jint(1)));
	LINE_NUMBER(270);
	if ((frame[1].i) != (45)) goto label_4;
	}
	{
	LINE_NUMBER(271);
	jint temp0 = (jint)M_rhino_json_JsonParser_nextOrNumberError_int_R_char(ctx, (frame[0].o), (frame[2].i));
	frame[1].i = temp0;
	LINE_NUMBER(272);
	if ((frame[1].i) < (48)) goto label_7;
	}
	{
	if ((frame[1].i) <= (57)) goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)M_rhino_json_JsonParser_numberError_int_int_R_rhino_json_JsonParser$ParseException(ctx, (frame[0].o), (frame[2].i), ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(276);
	if ((frame[1].i) == (48)) goto label_8;
	}
	{
	LINE_NUMBER(277);
	M_rhino_json_JsonParser_readDigits(ctx, (frame[0].o));
	}
label_8:;
	{
	LINE_NUMBER(280);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_10;
	}
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos));
	frame[1].i = temp0;
	LINE_NUMBER(282);
	if ((frame[1].i) != (46)) goto label_10;
	}
	{
	LINE_NUMBER(283);
	sp[0].o = frame[0].o;
	((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(284);
	jint temp0 = (jint)M_rhino_json_JsonParser_nextOrNumberError_int_R_char(ctx, (frame[0].o), (frame[2].i));
	frame[1].i = temp0;
	LINE_NUMBER(285);
	if ((frame[1].i) < (48)) goto label_16;
	}
	{
	if ((frame[1].i) <= (57)) goto label_17;
	}
label_16:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)M_rhino_json_JsonParser_numberError_int_int_R_rhino_json_JsonParser$ParseException(ctx, (frame[0].o), (frame[2].i), ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos));
	throwException(ctx, sp[0].o);	}
label_17:;
	{
	LINE_NUMBER(288);
	M_rhino_json_JsonParser_readDigits(ctx, (frame[0].o));
	}
label_10:;
	{
	LINE_NUMBER(292);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_18;
	}
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos));
	frame[1].i = temp0;
	LINE_NUMBER(294);
	if ((frame[1].i) == (101)) goto label_21;
	}
	{
	if ((frame[1].i) != (69)) goto label_18;
	}
label_21:;
	{
	LINE_NUMBER(295);
	sp[0].o = frame[0].o;
	((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(296);
	jint temp0 = (jint)M_rhino_json_JsonParser_nextOrNumberError_int_R_char(ctx, (frame[0].o), (frame[2].i));
	frame[1].i = temp0;
	LINE_NUMBER(297);
	if ((frame[1].i) == (45)) goto label_24;
	}
	{
	if ((frame[1].i) != (43)) goto label_25;
	}
label_24:;
	{
	LINE_NUMBER(298);
	jint temp0 = (jint)M_rhino_json_JsonParser_nextOrNumberError_int_R_char(ctx, (frame[0].o), (frame[2].i));
	frame[1].i = temp0;
	}
label_25:;
	{
	LINE_NUMBER(300);
	if ((frame[1].i) < (48)) goto label_26;
	}
	{
	if ((frame[1].i) <= (57)) goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)M_rhino_json_JsonParser_numberError_int_int_R_rhino_json_JsonParser$ParseException(ctx, (frame[0].o), (frame[2].i), ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos));
	throwException(ctx, sp[0].o);	}
label_27:;
	{
	LINE_NUMBER(303);
	M_rhino_json_JsonParser_readDigits(ctx, (frame[0].o));
	}
label_18:;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (frame[2].i), ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos));
	frame[3].o = sp[0].o;
	LINE_NUMBER(307);
	jdouble temp0 = (jdouble)SM_java_lang_Double_parseDouble_java_lang_String_R_double(ctx, (frame[3].o));
	frame[4].d = temp0;
	LINE_NUMBER(308);
	frame[6].i = (jint((frame[4].d)));
	LINE_NUMBER(309);
	if ((doubleCompare((jdouble((frame[6].i))), (frame[4].d), -1)) != 0) goto label_31;
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[6].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (frame[4].d));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_json_JsonParser_numberError_int_int_R_rhino_json_JsonParser$ParseException(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:numberError", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(316);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unsupported number format: "_j))));
	sp[2].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[2].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[2].o, (frame[1].i), (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar M_rhino_json_JsonParser_nextOrNumberError_int_R_char(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:nextOrNumberError", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(320);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) < ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_1;
	}
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)M_rhino_json_JsonParser_numberError_int_int_R_rhino_json_JsonParser$ParseException(ctx, (frame[0].o), (frame[1].i), ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos;
	((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

void M_rhino_json_JsonParser_readDigits(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:readDigits", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(327);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_1;
	}
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos));
	frame[1].i = temp0;
	LINE_NUMBER(329);
	if ((frame[1].i) < (48)) goto label_1;
	}
	{
	if ((frame[1].i) <= (57)) goto label_4;
	}
	LINE_NUMBER(330);
	goto label_1;
label_4:;
	{
	LINE_NUMBER(327);
	sp[0].o = frame[0].o;
	((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	goto label_0;
	}
label_1:;
	LINE_NUMBER(333);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_json_JsonParser_readTrue_R_java_lang_Boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:readTrue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	if ((((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length) - ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos)) < (jint(3))) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos;
	LINE_NUMBER(337);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	if (temp1 != (114)) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1));
	LINE_NUMBER(338);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	if (temp1 != (117)) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(2));
	LINE_NUMBER(339);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	if (temp1 == (101)) goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(340);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unexpected token: t"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(3)));
	LINE_NUMBER(343);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_json_JsonParser_readFalse_R_java_lang_Boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:readFalse", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(347);
	if ((((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length) - ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos)) < (jint(4))) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos;
	LINE_NUMBER(348);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	if (temp1 != (97)) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1));
	LINE_NUMBER(349);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	if (temp1 != (108)) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(2));
	LINE_NUMBER(350);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	if (temp1 != (115)) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(3));
	LINE_NUMBER(351);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	if (temp1 == (101)) goto label_6;
	}
label_1:;
	{
	LINE_NUMBER(352);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unexpected token: f"_j))));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(4)));
	LINE_NUMBER(355);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_json_JsonParser_readNull_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:readNull", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(359);
	if ((((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length) - ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos)) < (jint(3))) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos;
	LINE_NUMBER(360);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	if (temp1 != (117)) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1));
	LINE_NUMBER(361);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	if (temp1 != (108)) goto label_1;
	}
	{
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(2));
	LINE_NUMBER(362);
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	if (temp1 == (108)) goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(363);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unexpected token: n"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(3)));
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_rhino_json_JsonParser_consumeWhitespace(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:consumeWhitespace", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(370);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) >= ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_1;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos));
	frame[1].i = temp0;
	LINE_NUMBER(372);
	switch((frame[1].i)) {
		case 9: goto label_4;
		case 10: goto label_4;
		case 13: goto label_4;
		case 32: goto label_4;
		default: goto label_5;
	}
	}
label_4:;
	{
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((rhino_json_JsonParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(378);
	goto label_7;
	}
label_5:;
	LINE_NUMBER(380);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	LINE_NUMBER(382);
	goto label_0;
label_1:;
	LINE_NUMBER(383);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_rhino_json_JsonParser_consume_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:consume", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(386);
	M_rhino_json_JsonParser_consumeWhitespace(ctx, (frame[0].o));
	LINE_NUMBER(387);
	if (((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_pos) < ((jint)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_length)) goto label_2;
	}
	{
	LINE_NUMBER(388);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Expected "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" but reached end of stream"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((rhino_json_JsonParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos;
	((rhino_json_JsonParser *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	jint temp3 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, temp0);
	frame[2].i = temp3;
	LINE_NUMBER(391);
	if ((frame[2].i) != (frame[1].i)) goto label_5;
	}
	LINE_NUMBER(392);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(394);
	clinit_rhino_json_JsonParser$ParseException(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_json_JsonParser$ParseException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Expected "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" found "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_rhino_json_JsonParser$ParseException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_rhino_json_JsonParser(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/json/JsonParser:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_json_JsonParser(ctx);
	{
	LINE_NUMBER(20);
	jint temp0 = (jint)((func_java_lang_Class_desiredAssertionStatus_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_rhino_json_JsonParser)))->vtable)[VTABLE_java_lang_Class_desiredAssertionStatus_R_boolean])(ctx, (((jobject) &class_rhino_json_JsonParser)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	clinit_rhino_json_JsonParser(ctx);
	SF_rhino_json_JsonParser_$assertionsDisabled = (--sp)->i;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_json_JsonParser[] {
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
	(void *) M_rhino_json_JsonParser_parseValue_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_json_JsonParser_readValue_R_java_lang_Object,
	(void *) M_rhino_json_JsonParser_readObject_R_java_lang_Object,
	(void *) M_rhino_json_JsonParser_readArray_R_java_lang_Object,
	(void *) M_rhino_json_JsonParser_readString_R_java_lang_String,
	(void *) M_rhino_json_JsonParser_fromHex_char_R_int,
	(void *) M_rhino_json_JsonParser_readNumber_char_R_java_lang_Number,
	(void *) M_rhino_json_JsonParser_numberError_int_int_R_rhino_json_JsonParser$ParseException,
	(void *) M_rhino_json_JsonParser_nextOrNumberError_int_R_char,
	(void *) M_rhino_json_JsonParser_readDigits,
	(void *) M_rhino_json_JsonParser_readTrue_R_java_lang_Boolean,
	(void *) M_rhino_json_JsonParser_readFalse_R_java_lang_Boolean,
	(void *) M_rhino_json_JsonParser_readNull_R_java_lang_Object,
	(void *) M_rhino_json_JsonParser_consumeWhitespace,
	(void *) M_rhino_json_JsonParser_consume_char,
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
	{ "parseValue", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "readValue", "()Ljava/lang/Object;" },
	{ "readObject", "()Ljava/lang/Object;" },
	{ "readArray", "()Ljava/lang/Object;" },
	{ "readString", "()Ljava/lang/String;" },
	{ "fromHex", "(C)I" },
	{ "readNumber", "(C)Ljava/lang/Number;" },
	{ "numberError", "(II)Lrhino/json/JsonParser$ParseException;" },
	{ "nextOrNumberError", "(I)C" },
	{ "readDigits", "()V" },
	{ "readTrue", "()Ljava/lang/Boolean;" },
	{ "readFalse", "()Ljava/lang/Boolean;" },
	{ "readNull", "()Ljava/lang/Object;" },
	{ "consumeWhitespace", "()V" },
	{ "consume", "(C)V" },
};

static jclass innerClasses[] {
	&class_rhino_json_JsonParser$ParseException,
};

static FieldMetadata fields[] {
	{ "cx", &class_rhino_Context, offsetof(rhino_json_JsonParser, F_cx), "Lrhino/Context;", 18 },
	{ "scope", &class_rhino_Scriptable, offsetof(rhino_json_JsonParser, F_scope), "Lrhino/Scriptable;", 18 },
	{ "pos", &class_int, offsetof(rhino_json_JsonParser, F_pos), "I", 2 },
	{ "length", &class_int, offsetof(rhino_json_JsonParser, F_length), "I", 2 },
	{ "src", &class_java_lang_String, offsetof(rhino_json_JsonParser, F_src), "Ljava/lang/String;", 2 },
	{ "$assertionsDisabled", &class_boolean, (intptr_t) &SF_rhino_json_JsonParser_$assertionsDisabled, "Z", 4120 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_json_JsonParser_rhino_Context_rhino_Scriptable, 0, "(Lrhino/Context;Lrhino/Scriptable;)V", 1 },
	{ "parseValue", (intptr_t) M_rhino_json_JsonParser_parseValue_java_lang_String_R_java_lang_Object, VTABLE_rhino_json_JsonParser_parseValue_java_lang_String_R_java_lang_Object, "(Ljava/lang/String;)Ljava/lang/Object;", 33 },
	{ "readValue", (intptr_t) M_rhino_json_JsonParser_readValue_R_java_lang_Object, VTABLE_rhino_json_JsonParser_readValue_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "readObject", (intptr_t) M_rhino_json_JsonParser_readObject_R_java_lang_Object, VTABLE_rhino_json_JsonParser_readObject_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "readArray", (intptr_t) M_rhino_json_JsonParser_readArray_R_java_lang_Object, VTABLE_rhino_json_JsonParser_readArray_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "readString", (intptr_t) M_rhino_json_JsonParser_readString_R_java_lang_String, VTABLE_rhino_json_JsonParser_readString_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "fromHex", (intptr_t) M_rhino_json_JsonParser_fromHex_char_R_int, VTABLE_rhino_json_JsonParser_fromHex_char_R_int, "(C)I", 2 },
	{ "readNumber", (intptr_t) M_rhino_json_JsonParser_readNumber_char_R_java_lang_Number, VTABLE_rhino_json_JsonParser_readNumber_char_R_java_lang_Number, "(C)Ljava/lang/Number;", 2 },
	{ "numberError", (intptr_t) M_rhino_json_JsonParser_numberError_int_int_R_rhino_json_JsonParser$ParseException, VTABLE_rhino_json_JsonParser_numberError_int_int_R_rhino_json_JsonParser$ParseException, "(II)Lrhino/json/JsonParser$ParseException;", 2 },
	{ "nextOrNumberError", (intptr_t) M_rhino_json_JsonParser_nextOrNumberError_int_R_char, VTABLE_rhino_json_JsonParser_nextOrNumberError_int_R_char, "(I)C", 2 },
	{ "readDigits", (intptr_t) M_rhino_json_JsonParser_readDigits, VTABLE_rhino_json_JsonParser_readDigits, "()V", 2 },
	{ "readTrue", (intptr_t) M_rhino_json_JsonParser_readTrue_R_java_lang_Boolean, VTABLE_rhino_json_JsonParser_readTrue_R_java_lang_Boolean, "()Ljava/lang/Boolean;", 2 },
	{ "readFalse", (intptr_t) M_rhino_json_JsonParser_readFalse_R_java_lang_Boolean, VTABLE_rhino_json_JsonParser_readFalse_R_java_lang_Boolean, "()Ljava/lang/Boolean;", 2 },
	{ "readNull", (intptr_t) M_rhino_json_JsonParser_readNull_R_java_lang_Object, VTABLE_rhino_json_JsonParser_readNull_R_java_lang_Object, "()Ljava/lang/Object;", 2 },
	{ "consumeWhitespace", (intptr_t) M_rhino_json_JsonParser_consumeWhitespace, VTABLE_rhino_json_JsonParser_consumeWhitespace, "()V", 2 },
	{ "consume", (intptr_t) M_rhino_json_JsonParser_consume_char, VTABLE_rhino_json_JsonParser_consume_char, "(C)V", 2 },
	{ "<clinit>", (intptr_t) clinit_rhino_json_JsonParser, 0, "()V", 8 },
};

Class class_rhino_json_JsonParser{
		.nativeName = (intptr_t) "rhino/json/JsonParser",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_json_JsonParser),
		.classVtable = (intptr_t) vtable_rhino_json_JsonParser,
		.staticInitializer = (intptr_t) clinit_rhino_json_JsonParser,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_json_JsonParser,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_json_JsonParser = registerClass(&class_rhino_json_JsonParser);

}
