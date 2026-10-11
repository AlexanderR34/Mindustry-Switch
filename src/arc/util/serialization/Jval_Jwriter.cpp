#include "arc/util/serialization/Jval_Jwriter.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "arc/util/serialization/Jval.h"
#include "arc/util/serialization/Jval_Jtype.h"
#include "arc/util/serialization/Jval_JsonMap.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "java/io/Writer.h"
#include "arc/struct/ArrayMap.h"
#include "java/lang/Enum.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/Jval_Jwriter.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/util/serialization/Jval_Hwriter.h"
#include "arc/util/serialization/Jval_JsonArray.h"

extern "C" {


void mark_arc_util_serialization_Jval$Jwriter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_serialization_Jval$Jwriter *) object;
}

void clinit_arc_util_serialization_Jval$Jwriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_serialization_Jval$Jwriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jwriter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jwriter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1216);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_serialization_Jval$Jwriter_nl_java_io_Writer_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jwriter:nl", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jwriter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(1219);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[0].o), (10));
	LINE_NUMBER(1220);
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
	LINE_NUMBER(1221);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_serialization_Jval$Jwriter_save_arc_util_serialization_Jval_boolean_boolean_java_io_Writer_int(jcontext ctx, jobject param0, jbool param1, jbool param2, jobject param3, jint param4) {
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jwriter:save", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jwriter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(1224);
	frame[5].i = (jint(0));
	LINE_NUMBER(1225);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_util_serialization_Jval$Jtype_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Jval$Jtype_ordinal_R_int])(ctx, sp[0].o);
	switch(temp0) {
		case 0: goto label_2;
		case 1: goto label_3;
		case 2: goto label_4;
		case 3: goto label_5;
		case 4: goto label_6;
		default: goto label_3;
	}
	}
label_4:;
	{
	LINE_NUMBER(1227);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asObject_R_arc_util_serialization_Jval$JsonMap])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1228);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[3].o), (123));
	LINE_NUMBER(1229);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonMap_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_Jval$JsonMap_iterator_R_java_util_Iterator])(ctx, (frame[6].o));
	frame[7].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(1230);
	if ((frame[5].i) == 0) goto label_12;
	}
	{
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8","_j))));
	}
label_12:;
	{
	LINE_NUMBER(1231);
	if ((frame[1].i) == 0) goto label_13;
	}
	{
	SM_arc_util_serialization_Jval$Jwriter_nl_java_io_Writer_int(ctx, (frame[3].o), ((frame[4].i) + (jint(1))));
	}
label_13:;
	{
	LINE_NUMBER(1232);
	if ((frame[2].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(1233);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[3].o), (34));
	LINE_NUMBER(1234);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[8].o)))->F_key;
	sp[1].o = (jobject)SM_arc_util_serialization_Jval$Jwriter_escapeString_java_lang_String_R_java_lang_String(ctx, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1235);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"\":"_j))));
	goto label_18;
	}
label_14:;
	{
	LINE_NUMBER(1237);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[8].o)))->F_key;
	sp[1].o = (jobject)SM_arc_util_serialization_Jval$Hwriter_escapeName_java_lang_String_R_java_lang_String(ctx, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1238);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[3].o), (58));
	}
label_18:;
	{
	LINE_NUMBER(1241);
	sp[0].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[8].o)))->F_value;
	frame[9].o = (checkCast(ctx, &class_arc_util_serialization_Jval, sp[0].o));
	LINE_NUMBER(1242);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype])(ctx, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1243);
	if ((frame[1].i) == 0) goto label_22;
	}
	{
	sp[0].o = frame[10].o;
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jtype_array;
	if (sp[0].o == sp[1].o) goto label_22;
	}
	{
	sp[0].o = frame[10].o;
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jtype_object;
	if (sp[0].o == sp[1].o) goto label_22;
	}
	{
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8" "_j))));
	}
label_22:;
	{
	LINE_NUMBER(1244);
	SM_arc_util_serialization_Jval$Jwriter_save_arc_util_serialization_Jval_boolean_boolean_java_io_Writer_int(ctx, (frame[9].o), (frame[1].i), (frame[2].i), (frame[3].o), ((frame[4].i) + (jint(1))));
	LINE_NUMBER(1245);
	frame[5].i = (jint(1));
	LINE_NUMBER(1246);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(1247);
	if ((frame[5].i) == 0) goto label_25;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_25;
	{
	SM_arc_util_serialization_Jval$Jwriter_nl_java_io_Writer_int(ctx, (frame[3].o), (frame[4].i));
	}
label_25:;
	{
	LINE_NUMBER(1248);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[3].o), (125));
	LINE_NUMBER(1249);
	goto label_27;
	}
label_5:;
	{
	LINE_NUMBER(1251);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asArray_R_arc_util_serialization_Jval$JsonArray])(ctx, (frame[0].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1252);
	frame[8].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size);
	LINE_NUMBER(1253);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[3].o), (91));
	LINE_NUMBER(1254);
	frame[9].i = (jint(0));
	}
label_31:;
	{
	if ((frame[9].i) >= (frame[8].i)) goto label_32;
	}
	{
	LINE_NUMBER(1255);
	if ((frame[5].i) == 0) goto label_34;
	}
	{
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8","_j))));
	}
label_34:;
	{
	LINE_NUMBER(1256);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval$JsonArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_util_serialization_Jval$JsonArray_get_int_R_java_lang_Object])(ctx, (frame[7].o), (frame[9].i));
	frame[10].o = (checkCast(ctx, &class_arc_util_serialization_Jval, sp[0].o));
	LINE_NUMBER(1257);
	sp[0].o = (jobject)((func_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_util_serialization_Jval_getType_R_arc_util_serialization_Jval$Jtype])(ctx, (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(1258);
	sp[0].o = frame[11].o;
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jtype_array;
	if (sp[0].o == sp[1].o) goto label_37;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_37;
	{
	SM_arc_util_serialization_Jval$Jwriter_nl_java_io_Writer_int(ctx, (frame[3].o), ((frame[4].i) + (jint(1))));
	}
label_37:;
	{
	LINE_NUMBER(1259);
	SM_arc_util_serialization_Jval$Jwriter_save_arc_util_serialization_Jval_boolean_boolean_java_io_Writer_int(ctx, (frame[10].o), (frame[1].i), (frame[2].i), (frame[3].o), ((frame[4].i) + (jint(1))));
	LINE_NUMBER(1260);
	frame[5].i = (jint(1));
	LINE_NUMBER(1254);
	INST_IINC(9, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(1262);
	if ((frame[5].i) == 0) goto label_40;
	}
	INST_ILOAD(1);
	if ((--sp)->i == 0) goto label_40;
	{
	SM_arc_util_serialization_Jval$Jwriter_nl_java_io_Writer_int(ctx, (frame[3].o), (frame[4].i));
	}
label_40:;
	{
	LINE_NUMBER(1263);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[3].o), (93));
	LINE_NUMBER(1264);
	goto label_27;
	}
label_6:;
	{
	LINE_NUMBER(1266);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((func_arc_util_serialization_Jval_isTrue_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_isTrue_R_boolean])(ctx, (frame[0].o));
	sp += 1;
	if (temp0 == 0) goto label_42;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	goto label_43;
label_42:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"false"_j));
label_43:;
	{
	sp -= 2;
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1267);
	goto label_27;
	}
label_2:;
	{
	LINE_NUMBER(1269);
	if ((frame[2].i) == 0) goto label_45;
	}
	{
	LINE_NUMBER(1270);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[3].o), (34));
	LINE_NUMBER(1271);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_util_serialization_Jval_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asString_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_arc_util_serialization_Jval$Jwriter_escapeString_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1272);
	((func_java_io_Writer_write_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_Writer_write_int])(ctx, (frame[3].o), (34));
	goto label_27;
	}
label_45:;
	{
	LINE_NUMBER(1274);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_util_serialization_Jval_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_asString_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_arc_util_serialization_Jval$Hwriter_escapeName_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1277);
	goto label_27;
	}
label_3:;
	{
	LINE_NUMBER(1279);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_arc_util_serialization_Jval_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_Jval_toString_R_java_lang_String])(ctx, (frame[0].o));
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_27:;
	LINE_NUMBER(1282);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval$Jwriter_escapeString_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jwriter:escapeString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jwriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1285);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(1287);
	frame[1].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(1288);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	sp[0].o = (jobject)SM_arc_util_serialization_Jval$Jwriter_getEscapedChar_char_R_java_lang_String(ctx, temp0);
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1289);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1290);
	if ((frame[1].i) <= 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[0].o), (jint(0)), (frame[1].i));
	}
label_8:;
	{
	LINE_NUMBER(1291);
	sp[0].o = (jobject)SM_arc_util_serialization_Jval$Jwriter_doEscapeString_java_lang_StringBuilder_java_lang_String_int_R_java_lang_String(ctx, (frame[2].o), (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(1287);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1294);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval$Jwriter_doEscapeString_java_lang_StringBuilder_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jwriter:doEscapeString", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jwriter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(1298);
	frame[3].i = (frame[2].i);
	LINE_NUMBER(1299);
	frame[4].i = (frame[2].i);
	}
label_2:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(1300);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (frame[4].i));
	sp[0].o = (jobject)SM_arc_util_serialization_Jval$Jwriter_getEscapedChar_char_R_java_lang_String(ctx, temp0);
	frame[5].o = sp[0].o;
	LINE_NUMBER(1301);
	if ((frame[5].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1302);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[1].o), (frame[3].i), (frame[4].i));
	LINE_NUMBER(1303);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(1304);
	frame[3].i = ((frame[4].i) + (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(1299);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1307);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_int_int_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(1308);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval$Jwriter_getEscapedChar_char_R_java_lang_String(jcontext ctx, jchar param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jwriter:getEscapedChar", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jwriter(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(1312);
	switch((frame[0].i)) {
		case 8: goto label_1;
		case 9: goto label_2;
		case 10: goto label_3;
		case 12: goto label_4;
		case 13: goto label_5;
		case 34: goto label_6;
		case 92: goto label_7;
		default: goto label_8;
	}
	}
label_6:;
	{
	LINE_NUMBER(1313);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"\\\""_j)));
	}
label_2:;
	{
	LINE_NUMBER(1314);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"\\t"_j)));
	}
label_3:;
	{
	LINE_NUMBER(1315);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"\\n"_j)));
	}
label_5:;
	{
	LINE_NUMBER(1316);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"\\r"_j)));
	}
label_4:;
	{
	LINE_NUMBER(1317);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"\\f"_j)));
	}
label_1:;
	{
	LINE_NUMBER(1318);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"\\b"_j)));
	}
label_7:;
	{
	LINE_NUMBER(1319);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"\\\\"_j)));
	}
label_8:;
	{
	LINE_NUMBER(1320);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_Jval$Jwriter[] {
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
	{ "<init>", (intptr_t) init_arc_util_serialization_Jval$Jwriter, 0, "()V", 0 },
	{ "nl", (intptr_t) SM_arc_util_serialization_Jval$Jwriter_nl_java_io_Writer_int, 0, "(Ljava/io/Writer;I)V", 8 },
	{ "save", (intptr_t) SM_arc_util_serialization_Jval$Jwriter_save_arc_util_serialization_Jval_boolean_boolean_java_io_Writer_int, 0, "(Larc/util/serialization/Jval;ZZLjava/io/Writer;I)V", 9 },
	{ "escapeString", (intptr_t) SM_arc_util_serialization_Jval$Jwriter_escapeString_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 8 },
	{ "doEscapeString", (intptr_t) SM_arc_util_serialization_Jval$Jwriter_doEscapeString_java_lang_StringBuilder_java_lang_String_int_R_java_lang_String, 0, "(Ljava/lang/StringBuilder;Ljava/lang/String;I)Ljava/lang/String;", 10 },
	{ "getEscapedChar", (intptr_t) SM_arc_util_serialization_Jval$Jwriter_getEscapedChar_char_R_java_lang_String, 0, "(C)Ljava/lang/String;", 10 },
};

Class class_arc_util_serialization_Jval$Jwriter{
		.nativeName = (intptr_t) "arc/util/serialization/Jval$Jwriter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_serialization_Jval$Jwriter),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Jval$Jwriter,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Jval$Jwriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_Jval$Jwriter,
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
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Jval$Jwriter = registerClass(&class_arc_util_serialization_Jval$Jwriter);

}

