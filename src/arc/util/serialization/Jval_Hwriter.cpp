#include "arc/util/serialization/Jval_Hwriter.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "arc/util/serialization/Jval.h"
#include "arc/util/serialization/Jval_Jtype.h"
#include "arc/util/serialization/Jval_JsonMap.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "java/io/Writer.h"
#include "arc/struct/ArrayMap.h"
#include "arc/util/serialization/Jval_Hparser.h"
#include "java/lang/Enum.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/Jval_Jwriter.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/util/serialization/Jval_Hwriter.h"
#include "arc/util/serialization/Jval_JsonArray.h"

extern "C" {


void mark_arc_util_serialization_Jval$Hwriter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_Jval$Hwriter *) object;
}

void clinit_arc_util_serialization_Jval$Hwriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_serialization_Jval$Hwriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hwriter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hwriter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1020);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_serialization_Jval$Hwriter_nl_java_io_Writer_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hwriter:nl", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hwriter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1023);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[0].o), (10));
	LINE_NUMBER(1024);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_3;
	}
	{
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"  "_j))));
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(1025);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_serialization_Jval$Hwriter_save_arc_util_serialization_Jval_java_io_Writer_int_java_lang_String_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3, jbool param4) {
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hwriter:save", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hwriter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(1028);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1029);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(1030);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	LINE_NUMBER(1031);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(1034);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_util_serialization_Jval$Jtype_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$Jtype_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 0: goto label_5;
		case 1: goto label_6;
		case 2: goto label_7;
		case 3: goto label_8;
		case 4: goto label_9;
		default: goto label_6;
	}
	}
label_7:;
	{
	LINE_NUMBER(1036);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1037);
	if ((frame[4].i) != 0) goto label_11;
	}
	{
	LINE_NUMBER(1038);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	}
label_11:;
	{
	LINE_NUMBER(1040);
	if ((frame[2].i) < 0) goto label_13;
	}
	{
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[1].o), (123));
	}
label_13:;
	{
	LINE_NUMBER(1041);
	frame[6].i = (jint(0));
	LINE_NUMBER(1043);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonMap_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_serialization_Jval$JsonMap_iterator_R_java_util_Iterator])(ctx, (frame[5].o));
	frame[7].o = sp[0].o;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_16;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(1044);
	jint temp0 = frame[6].i;
	INST_IINC(6, 1);
	if (temp0 != 0) goto label_18;
	}
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_19;
label_18:;
	{
	SM_arc_util_serialization_Jval$Hwriter_nl_java_io_Writer_int(ctx, (frame[1].o), ((frame[2].i) + (jint(1))));
	}
label_19:;
	{
	LINE_NUMBER(1045);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[8].o)))->F_key;
	sp[1].o = (jobject)SM_arc_util_serialization_Jval$Hwriter_escapeName_java_lang_String_R_java_lang_String(ctx, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1046);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8":"_j))));
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[8].o)))->F_value;
	SM_arc_util_serialization_Jval$Hwriter_save_arc_util_serialization_Jval_java_io_Writer_int_java_lang_String_boolean(ctx, (checkCast(ctx, &class_arc_util_serialization_Jval, sp[0].o)), (frame[1].o), ((frame[2].i) + (jint(1))), (((jobject) createStringLiteral(ctx, u8" "_j))), (jint(0)));
	LINE_NUMBER(1048);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(1050);
	if (((jint)((arc_struct_ArrayMap *) NULL_CHECK((frame[5].o)))->F_size) <= 0) goto label_23;
	}
	{
	SM_arc_util_serialization_Jval$Hwriter_nl_java_io_Writer_int(ctx, (frame[1].o), (frame[2].i));
	}
label_23:;
	{
	LINE_NUMBER(1051);
	if ((frame[2].i) < 0) goto label_24;
	}
	{
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[1].o), (125));
	goto label_24;
	}
label_8:;
	{
	LINE_NUMBER(1054);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1055);
	frame[8].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size);
	LINE_NUMBER(1056);
	if ((frame[4].i) != 0) goto label_27;
	}
	{
	LINE_NUMBER(1057);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	}
label_27:;
	{
	LINE_NUMBER(1059);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[1].o), (91));
	LINE_NUMBER(1060);
	frame[9].i = (jint(0));
	}
label_30:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_31;
	}
	{
	LINE_NUMBER(1061);
	SM_arc_util_serialization_Jval$Hwriter_nl_java_io_Writer_int(ctx, (frame[1].o), ((frame[2].i) + (jint(1))));
	LINE_NUMBER(1062);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_util_serialization_Jval$JsonArray_get_int_R_java_lang_Object])(ctx, (frame[7].o), (frame[9].i));
	SM_arc_util_serialization_Jval$Hwriter_save_arc_util_serialization_Jval_java_io_Writer_int_java_lang_String_boolean(ctx, (checkCast(ctx, &class_arc_util_serialization_Jval, sp[0].o)), (frame[1].o), ((frame[2].i) + (jint(1))), (((jobject) createStringLiteral(ctx, u8""_j))), (jint(1)));
	LINE_NUMBER(1060);
	INST_IINC(9, 1);
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(1064);
	if ((frame[8].i) <= 0) goto label_35;
	}
	{
	SM_arc_util_serialization_Jval$Hwriter_nl_java_io_Writer_int(ctx, (frame[1].o), (frame[2].i));
	}
label_35:;
	{
	LINE_NUMBER(1065);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[1].o), (93));
	LINE_NUMBER(1066);
	goto label_24;
	}
label_9:;
	{
	LINE_NUMBER(1068);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(1069);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_util_serialization_Jval_isTrue_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_isTrue_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_38;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	goto label_39;
label_38:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"false"_j));
label_39:;
	{
	sp -= 2;
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1070);
	goto label_24;
	}
label_5:;
	{
	LINE_NUMBER(1072);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asString_R_java_lang_String])(ctx, (frame[0].o));
	SM_arc_util_serialization_Jval$Hwriter_writeString_java_lang_String_java_io_Writer_int_java_lang_String(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].o));
	LINE_NUMBER(1073);
	goto label_24;
	}
label_6:;
	{
	LINE_NUMBER(1075);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(1076);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_util_serialization_Jval_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_toString_R_java_lang_String])(ctx, (frame[0].o));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_24:;
	LINE_NUMBER(1079);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval$Hwriter_escapeName_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hwriter:escapeName", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hwriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1082);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hwriter_needsEscapeName_java_lang_String_R_boolean(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(1083);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\""_j))));
	sp[1].o = (jobject)SM_arc_util_serialization_Jval$Jwriter_escapeString_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1085);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_serialization_Jval$Hwriter_needsEscapeName_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hwriter:needsEscapeName", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hwriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1089);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1090);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(1091);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(1092);
	switch((frame[3].i)) {
		case 9: goto label_6;
		case 10: goto label_6;
		case 11: goto label_6;
		case 12: goto label_6;
		case 13: goto label_6;
		case 32: goto label_6;
		case 34: goto label_6;
		case 39: goto label_6;
		case 44: goto label_6;
		case 58: goto label_6;
		case 91: goto label_6;
		case 93: goto label_6;
		case 123: goto label_6;
		case 125: goto label_6;
		default: goto label_7;
	}
	}
label_6:;
	{
	LINE_NUMBER(1095);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(1097);
	if ((frame[3].i) != (47)) goto label_8;
	}
	{
	if (((frame[2].i) + (jint(1))) >= (frame[1].i)) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[2].i) + (jint(1))));
	if (temp0 == (47)) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[2].i) + (jint(1))));
	if (temp0 != (42)) goto label_8;
	}
label_9:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(1090);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1099);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_arc_util_serialization_Jval$Hwriter_writeString_java_lang_String_java_io_Writer_int_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3) {
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hwriter:writeString", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hwriter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1103);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(1104);
	if ((frame[4].i) != 0) goto label_2;
	}
	{
	LINE_NUMBER(1105);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(1106);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\"\""_j))));
	LINE_NUMBER(1107);
	popStackFrame(ctx);
	return;
	}
label_2:;
	{
	LINE_NUMBER(1110);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(0)));
	frame[5].i = temp0;
	jint temp1 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[4].i) - (jint(1))));
	frame[6].i = temp1;
	LINE_NUMBER(1111);
	if ((frame[4].i) <= (jint(1))) goto label_8;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ICONST(0);
label_9:;
	{
	sp -= 1;
	frame[7].i = sp[0].i;
	LINE_NUMBER(1113);
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isWhiteSpace_int_R_boolean(ctx, (frame[5].i));
	if (temp0 != 0) goto label_11;
	}
	{
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isWhiteSpace_int_R_boolean(ctx, (frame[6].i));
	if (temp0 != 0) goto label_11;
	}
	{
	if ((frame[5].i) == (34)) goto label_11;
	}
	{
	if ((frame[5].i) == (39)) goto label_11;
	}
	{
	if ((frame[5].i) == (35)) goto label_11;
	}
	{
	if ((frame[5].i) != (47)) goto label_12;
	}
	{
	if ((frame[7].i) == (42)) goto label_11;
	}
	{
	if ((frame[7].i) == (47)) goto label_11;
	}
label_12:;
	{
	jint temp0 = frame[5].i;
	LINE_NUMBER(1118);
	jint temp1 = (jint)SM_arc_util_serialization_Jval$Hwriter_isPunctuatorChar_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1119);
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hwriter_startsWithKeyword_java_lang_String_R_boolean(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1120);
	sp[0].o = (jobject)SM_arc_util_serialization_Jval$Hparser_tryParseNumber_java_lang_String_R_arc_util_serialization_Jval(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(1121);
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hwriter_containsQuoteChar_java_lang_String_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_17;
	}
label_11:;
	{
	LINE_NUMBER(1123);
	frame[8].i = (jint(1));
	frame[9].i = (jint(1));
	frame[10].i = (jint(1));
	LINE_NUMBER(1124);
	frame[11].i = (jint(0));
	}
label_21:;
	{
	if ((frame[11].i) >= (frame[4].i)) goto label_22;
	}
	INST_ILOAD(8);
	if ((--sp)->i != 0) goto label_23;
	INST_ILOAD(9);
	if ((--sp)->i != 0) goto label_23;
	INST_ILOAD(10);
	if ((--sp)->i == 0) goto label_22;
label_23:;
	{
	LINE_NUMBER(1125);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[11].i));
	frame[12].i = temp0;
	LINE_NUMBER(1126);
	if ((frame[8].i) == 0) goto label_25;
	}
	{
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hwriter_needsEscape_char_R_boolean(ctx, (frame[12].i));
	if (temp0 == 0) goto label_25;
	}
	INST_ICONST(0);
	INST_ISTORE(8);
label_25:;
	{
	LINE_NUMBER(1127);
	if ((frame[9].i) == 0) goto label_26;
	}
	{
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hwriter_needsEscapeML_char_R_boolean(ctx, (frame[12].i));
	if (temp0 == 0) goto label_26;
	}
	INST_ICONST(0);
	INST_ISTORE(9);
label_26:;
	{
	LINE_NUMBER(1128);
	if ((frame[10].i) == 0) goto label_27;
	}
	{
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hparser_isWhiteSpace_int_R_boolean(ctx, (frame[12].i));
	if (temp0 != 0) goto label_27;
	}
	INST_ICONST(0);
	INST_ISTORE(10);
label_27:;
	{
	LINE_NUMBER(1124);
	INST_IINC(11, 1);
	goto label_21;
	}
label_22:;
	{
	LINE_NUMBER(1131);
	if ((frame[8].i) == 0) goto label_28;
	}
	{
	LINE_NUMBER(1132);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(1133);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[1].o), (34));
	LINE_NUMBER(1134);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(1135);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[1].o), (34));
	LINE_NUMBER(1136);
	popStackFrame(ctx);
	return;
	}
label_28:;
	{
	LINE_NUMBER(1139);
	if ((frame[9].i) == 0) goto label_34;
	}
	INST_ILOAD(10);
	if ((--sp)->i != 0) goto label_34;
	{
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"'''"_j))));
	if (temp0 >= 0) goto label_34;
	}
	{
	SM_arc_util_serialization_Jval$Hwriter_writeMLString_java_lang_String_java_io_Writer_int_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o));
	goto label_35;
	}
label_34:;
	{
	LINE_NUMBER(1141);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(1142);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[1].o), (34));
	LINE_NUMBER(1143);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)SM_arc_util_serialization_Jval$Jwriter_escapeString_java_lang_String_R_java_lang_String(ctx, (frame[0].o));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1144);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[1].o), (34));
	}
label_35:;
	LINE_NUMBER(1146);
	goto label_39;
label_17:;
	{
	LINE_NUMBER(1147);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(1148);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (frame[0].o));
	}
label_39:;
	LINE_NUMBER(1150);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_arc_util_serialization_Jval$Hwriter_containsQuoteChar_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hwriter:containsQuoteChar", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hwriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1153);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(1154);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_3;
	}
	{
	LINE_NUMBER(1155);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	jint temp1 = (jint)SM_arc_util_serialization_Jval$Hwriter_needsQuotes_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(1154);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1157);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_arc_util_serialization_Jval$Hwriter_writeMLString_java_lang_String_java_io_Writer_int_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hwriter:writeMLString", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hwriter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(1161);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"\r"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_split_java_lang_String_int_R_Array1_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))), (jint(-1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1163);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) != (jint(1))) goto label_2;
	}
	{
	LINE_NUMBER(1164);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"'''"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1165);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	LINE_NUMBER(1166);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"'''"_j))));
	goto label_6;
	}
label_2:;
	{
	LINE_NUMBER(1168);
	INST_IINC(2, 1);
	LINE_NUMBER(1169);
	SM_arc_util_serialization_Jval$Hwriter_nl_java_io_Writer_int(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(1170);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"'''"_j))));
	LINE_NUMBER(1172);
	frame[5].o = (frame[4].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_10:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_11;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(1173);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[8].o));
	sp += 1;
	if (temp0 <= 0) goto label_13;
	}
	INST_ILOAD(2);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 2;
	SM_arc_util_serialization_Jval$Hwriter_nl_java_io_Writer_int(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(1174);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (frame[8].o));
	LINE_NUMBER(1172);
	INST_IINC(7, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(1176);
	SM_arc_util_serialization_Jval$Hwriter_nl_java_io_Writer_int(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(1177);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"'''"_j))));
	}
label_6:;
	LINE_NUMBER(1179);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_arc_util_serialization_Jval$Hwriter_startsWithKeyword_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hwriter:startsWithKeyword", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hwriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1183);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"null"_j))));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	frame[1].i = (jint(4));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(1184);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	frame[1].i = (jint(5));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(1185);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1186);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	jint temp1 = (jint)SM_arc_util_serialization_Jval$Hparser_isWhiteSpace_int_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_7;
	}
	INST_IINC(1, 1);
	goto label_4;
label_7:;
	{
	LINE_NUMBER(1187);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 != temp1) goto label_8;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(1188);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(1189);
	if ((frame[2].i) == (44)) goto label_10;
	}
	{
	if ((frame[2].i) == (125)) goto label_10;
	}
	{
	if ((frame[2].i) == (93)) goto label_10;
	}
	{
	if ((frame[2].i) == (35)) goto label_10;
	}
	{
	if ((frame[2].i) != (47)) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 <= ((frame[1].i) + (jint(1)))) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	if (temp0 == (47)) goto label_10;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), ((frame[1].i) + (jint(1))));
	if (temp0 != (42)) goto label_11;
	}
label_10:;
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_arc_util_serialization_Jval$Hwriter_isPunctuatorChar_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hwriter:isPunctuatorChar", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hwriter(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1193);
	if ((frame[0].i) == (123)) goto label_1;
	}
	{
	if ((frame[0].i) == (125)) goto label_1;
	}
	{
	if ((frame[0].i) == (91)) goto label_1;
	}
	{
	if ((frame[0].i) == (93)) goto label_1;
	}
	{
	if ((frame[0].i) == (44)) goto label_1;
	}
	{
	if ((frame[0].i) != (58)) goto label_2;
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

jbool SM_arc_util_serialization_Jval$Hwriter_needsQuotes_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hwriter:needsQuotes", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hwriter(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1197);
	if ((frame[0].i) == (9)) goto label_1;
	}
	{
	if ((frame[0].i) == (12)) goto label_1;
	}
	{
	if ((frame[0].i) == (8)) goto label_1;
	}
	{
	if ((frame[0].i) == (10)) goto label_1;
	}
	{
	if ((frame[0].i) == (13)) goto label_1;
	}
	{
	if ((frame[0].i) == (93)) goto label_1;
	}
	{
	if ((frame[0].i) == (91)) goto label_1;
	}
	{
	if ((frame[0].i) != (44)) goto label_2;
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

jbool SM_arc_util_serialization_Jval$Hwriter_needsEscape_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hwriter:needsEscape", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hwriter(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1201);
	if ((frame[0].i) == (34)) goto label_1;
	}
	{
	if ((frame[0].i) == (92)) goto label_1;
	}
	{
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hwriter_needsQuotes_char_R_boolean(ctx, (frame[0].i));
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

jbool SM_arc_util_serialization_Jval$Hwriter_needsEscapeML_char_R_boolean(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Hwriter:needsEscapeML", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Hwriter(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1205);
	switch((frame[0].i)) {
		case 9: goto label_1;
		case 10: goto label_1;
		case 11: goto label_2;
		case 12: goto label_2;
		case 13: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(1209);
	popStackFrame(ctx);
	return (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(1211);
	jint temp0 = (jint)SM_arc_util_serialization_Jval$Hwriter_needsQuotes_char_R_boolean(ctx, (frame[0].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_Jval$Hwriter[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_serialization_Jval$Hwriter, 0, "()V", 0 },
	{ "nl", (intptr_t) SM_arc_util_serialization_Jval$Hwriter_nl_java_io_Writer_int, 0, "(Ljava/io/Writer;I)V", 8 },
	{ "save", (intptr_t) SM_arc_util_serialization_Jval$Hwriter_save_arc_util_serialization_Jval_java_io_Writer_int_java_lang_String_boolean, 0, "(Larc/util/serialization/Jval;Ljava/io/Writer;ILjava/lang/String;Z)V", 9 },
	{ "escapeName", (intptr_t) SM_arc_util_serialization_Jval$Hwriter_escapeName_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 8 },
	{ "needsEscapeName", (intptr_t) SM_arc_util_serialization_Jval$Hwriter_needsEscapeName_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 8 },
	{ "writeString", (intptr_t) SM_arc_util_serialization_Jval$Hwriter_writeString_java_lang_String_java_io_Writer_int_java_lang_String, 0, "(Ljava/lang/String;Ljava/io/Writer;ILjava/lang/String;)V", 8 },
	{ "containsQuoteChar", (intptr_t) SM_arc_util_serialization_Jval$Hwriter_containsQuoteChar_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 8 },
	{ "writeMLString", (intptr_t) SM_arc_util_serialization_Jval$Hwriter_writeMLString_java_lang_String_java_io_Writer_int_java_lang_String, 0, "(Ljava/lang/String;Ljava/io/Writer;ILjava/lang/String;)V", 8 },
	{ "startsWithKeyword", (intptr_t) SM_arc_util_serialization_Jval$Hwriter_startsWithKeyword_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 8 },
	{ "isPunctuatorChar", (intptr_t) SM_arc_util_serialization_Jval$Hwriter_isPunctuatorChar_int_R_boolean, 0, "(I)Z", 8 },
	{ "needsQuotes", (intptr_t) SM_arc_util_serialization_Jval$Hwriter_needsQuotes_char_R_boolean, 0, "(C)Z", 8 },
	{ "needsEscape", (intptr_t) SM_arc_util_serialization_Jval$Hwriter_needsEscape_char_R_boolean, 0, "(C)Z", 8 },
	{ "needsEscapeML", (intptr_t) SM_arc_util_serialization_Jval$Hwriter_needsEscapeML_char_R_boolean, 0, "(C)Z", 8 },
};

Class class_arc_util_serialization_Jval$Hwriter{
		.nativeName = (intptr_t) "arc/util/serialization/Jval$Hwriter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_Jval$Hwriter),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Jval$Hwriter,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Jval$Hwriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_Jval$Hwriter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_Jval,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Jval$Hwriter = registerClass(&class_arc_util_serialization_Jval$Hwriter);

}

