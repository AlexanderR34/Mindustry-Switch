#include "mindustry/ui/builder/UiDslWriter.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/builder/UiBuilder_Entry.h"
#include "java/lang/Boolean.h"
#include "mindustry/ui/builder/UiBuilder_NodeBuilder.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Float.h"
#include "mindustry/ui/builder/UiDslWriter.h"
#include "java/lang/Enum.h"
#include "java/lang/Long.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "mindustry/ui/builder/UiDslWriter_1.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/builder/UiKey.h"

extern "C" {


void mark_mindustry_ui_builder_UiDslWriter(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_builder_UiDslWriter *) object;
}

void clinit_mindustry_ui_builder_UiDslWriter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_builder_UiDslWriter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslWriter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiDslWriter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiDslWriter_write_mindustry_ui_builder_UiBuilder$NodeBuilder_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslWriter:write", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiDslWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(12);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(13);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[0].o)))->F_entries;
	SM_mindustry_ui_builder_UiDslWriter_writeEntries_java_lang_StringBuilder_arc_struct_Seq_int(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(14);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiDslWriter_writeEntries_java_lang_StringBuilder_arc_struct_Seq_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslWriter:writeEntries", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiDslWriter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$Entry, sp[0].o));
	LINE_NUMBER(20);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[4].o)))->F_key;
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_builder_UiKey_row;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_Boolean)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(21);
	SM_mindustry_ui_builder_UiDslWriter_indent_java_lang_StringBuilder_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(22);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"row\n"_j))));
	LINE_NUMBER(23);
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_ui_builder_UiBuilder$NodeBuilder)) == 0) goto label_8;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$NodeBuilder, (frame[6].o)));
	LINE_NUMBER(28);
	SM_mindustry_ui_builder_UiDslWriter_writeChildNode_java_lang_StringBuilder_mindustry_ui_builder_UiBuilder$NodeBuilder_int(ctx, (frame[0].o), (frame[5].o), (frame[2].i));
	LINE_NUMBER(29);
	goto label_1;
	}
label_8:;
	{
	LINE_NUMBER(33);
	SM_mindustry_ui_builder_UiDslWriter_indent_java_lang_StringBuilder_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[4].o)))->F_key;
	sp[1].o = (jobject)((func_mindustry_ui_builder_UiKey_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	sp[1].o = (jobject)SM_mindustry_ui_builder_UiDslWriter_formatValue_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (10));
	LINE_NUMBER(35);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(36);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiDslWriter_writeChildNode_java_lang_StringBuilder_mindustry_ui_builder_UiBuilder$NodeBuilder_int(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslWriter:writeChildNode", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiDslWriter(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(39);
	SM_mindustry_ui_builder_UiDslWriter_indent_java_lang_StringBuilder_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((func_mindustry_ui_builder_UiKey_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_name_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_type;
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiDslWriter_shorthandType_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiKey(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(43);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_entries;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$Entry, sp[0].o));
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[6].o)))->F_key;
	if (sp[0].o != (frame[3].o)) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[6].o)))->F_value;
	if ((isInstance(ctx, sp[0].o, &class_java_lang_String)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(46);
	frame[4].o = (frame[6].o);
	LINE_NUMBER(47);
	goto label_6;
	}
label_8:;
	LINE_NUMBER(49);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(51);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_entries;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_ui_builder_UiBuilder$Entry, sp[0].o));
	LINE_NUMBER(53);
	if ((frame[7].o) == (frame[4].o)) goto label_15;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[5].o), (frame[7].o));
	}
label_15:;
	LINE_NUMBER(54);
	goto label_12;
label_13:;
	{
	LINE_NUMBER(56);
	if ((frame[4].o) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((mindustry_ui_builder_UiBuilder$Entry *) NULL_CHECK((frame[4].o)))->F_value;
	sp[1].o = (jobject)SM_mindustry_ui_builder_UiDslWriter_formatValue_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_16:;
	{
	LINE_NUMBER(60);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_18;
	}
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (10));
	goto label_20;
	}
label_18:;
	{
	LINE_NUMBER(63);
	if ((frame[4].o) == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[0].o), (32));
	}
label_21:;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"{\n"_j))));
	LINE_NUMBER(65);
	SM_mindustry_ui_builder_UiDslWriter_writeEntries_java_lang_StringBuilder_arc_struct_Seq_int(ctx, (frame[0].o), (frame[5].o), ((frame[2].i) + (jint(1))));
	LINE_NUMBER(66);
	SM_mindustry_ui_builder_UiDslWriter_indent_java_lang_StringBuilder_int(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"}\n"_j))));
	}
label_20:;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiDslWriter_shorthandType_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiKey(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslWriter:shorthandType", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiDslWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(73);
	clinit_mindustry_ui_builder_UiDslWriter$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiDslWriter$1_$SwitchMap$mindustry$ui$builder$UiKey;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, (frame[0].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(74);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiKey_region;
	sp += 1;
	goto label_3;
	}
label_2:;
	LINE_NUMBER(75);
	clinit_mindustry_ui_builder_UiKey(ctx);
	(sp++)->o = SF_mindustry_ui_builder_UiKey_text;
label_3:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiDslWriter_formatValue_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslWriter:formatValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiDslWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(80);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Boolean)) == 0) goto label_1;
	}
	{
	frame[1].o = (checkCast(ctx, &class_java_lang_Boolean, (frame[0].o)));
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"true"_j));
	goto label_4;
label_3:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"false"_j));
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(81);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Float)) == 0) goto label_5;
	}
	{
	frame[1].o = (checkCast(ctx, &class_java_lang_Float, (frame[0].o)));
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiDslWriter_formatFloat_float_R_java_lang_String(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(82);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_String)) == 0) goto label_7;
	}
	{
	frame[1].o = (checkCast(ctx, &class_java_lang_String, (frame[0].o)));
	jint temp0 = (jint)SM_mindustry_ui_builder_UiDslWriter_needsQuotes_java_lang_String_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiDslWriter_quote_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_ALOAD(1);
label_10:;
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(83);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unsupported value type: \u0001"_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiDslWriter_formatFloat_float_R_java_lang_String(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslWriter:formatFloat", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiDslWriter(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(87);
	if ((floatCompare((frame[0].f), (jfloat((jlong((frame[0].f))))), -1)) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Long_toString_long_R_java_lang_String(ctx, (jlong((frame[0].f))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)SM_java_lang_Float_toString_float_R_java_lang_String(ctx, (frame[0].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_builder_UiDslWriter_needsQuotes_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslWriter:needsQuotes", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiDslWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(94);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(95);
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, (frame[0].o), (jfloat(std::numeric_limits<float>::quiet_NaN())));
	jint temp1 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(97);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(98);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(99);
	jint temp1 = (jint)SM_java_lang_Character_isWhitespace_char_R_boolean(ctx, (frame[2].i));
	if (temp1 != 0) goto label_9;
	}
	{
	if ((frame[2].i) == (123)) goto label_9;
	}
	{
	if ((frame[2].i) == (125)) goto label_9;
	}
	{
	if ((frame[2].i) == (58)) goto label_9;
	}
	{
	if ((frame[2].i) == (34)) goto label_9;
	}
	{
	if ((frame[2].i) != (92)) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(97);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(104);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"//"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiDslWriter_quote_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslWriter:quote", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiDslWriter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(108);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (34));
	LINE_NUMBER(110);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[0].o));
	if (temp0 >= temp1) goto label_4;
	}
	{
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[0].o), (frame[2].i));
	frame[3].i = temp0;
	LINE_NUMBER(112);
	if ((frame[3].i) == (34)) goto label_7;
	}
	{
	if ((frame[3].i) != (92)) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (92));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].i));
	goto label_9;
	}
label_8:;
	{
	LINE_NUMBER(114);
	if ((frame[3].i) != (10)) goto label_10;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"\\n"_j))));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[3].i));
	}
label_9:;
	{
	LINE_NUMBER(110);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (34));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_builder_UiDslWriter_indent_java_lang_StringBuilder_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslWriter:indent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiDslWriter(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(125);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (frame[1].i)) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"  "_j))));
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(126);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_builder_UiDslWriter[] {
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
	{ "<init>", (intptr_t) init_mindustry_ui_builder_UiDslWriter, 0, "()V", 1 },
	{ "write", (intptr_t) SM_mindustry_ui_builder_UiDslWriter_write_mindustry_ui_builder_UiBuilder$NodeBuilder_R_java_lang_String, 0, "(Lmindustry/ui/builder/UiBuilder$NodeBuilder;)Ljava/lang/String;", 9 },
	{ "writeEntries", (intptr_t) SM_mindustry_ui_builder_UiDslWriter_writeEntries_java_lang_StringBuilder_arc_struct_Seq_int, 0, "(Ljava/lang/StringBuilder;Larc/struct/Seq;I)V", 10 },
	{ "writeChildNode", (intptr_t) SM_mindustry_ui_builder_UiDslWriter_writeChildNode_java_lang_StringBuilder_mindustry_ui_builder_UiBuilder$NodeBuilder_int, 0, "(Ljava/lang/StringBuilder;Lmindustry/ui/builder/UiBuilder$NodeBuilder;I)V", 10 },
	{ "shorthandType", (intptr_t) SM_mindustry_ui_builder_UiDslWriter_shorthandType_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiKey, 0, "(Lmindustry/ui/builder/UiKey;)Lmindustry/ui/builder/UiKey;", 10 },
	{ "formatValue", (intptr_t) SM_mindustry_ui_builder_UiDslWriter_formatValue_java_lang_Object_R_java_lang_String, 0, "(Ljava/lang/Object;)Ljava/lang/String;", 10 },
	{ "formatFloat", (intptr_t) SM_mindustry_ui_builder_UiDslWriter_formatFloat_float_R_java_lang_String, 0, "(F)Ljava/lang/String;", 10 },
	{ "needsQuotes", (intptr_t) SM_mindustry_ui_builder_UiDslWriter_needsQuotes_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 10 },
	{ "quote", (intptr_t) SM_mindustry_ui_builder_UiDslWriter_quote_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 10 },
	{ "indent", (intptr_t) SM_mindustry_ui_builder_UiDslWriter_indent_java_lang_StringBuilder_int, 0, "(Ljava/lang/StringBuilder;I)V", 10 },
};

Class class_mindustry_ui_builder_UiDslWriter{
		.nativeName = (intptr_t) "mindustry/ui/builder/UiDslWriter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_builder_UiDslWriter),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_UiDslWriter,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_UiDslWriter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_UiDslWriter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_builder_UiDslWriter = registerClass(&class_mindustry_ui_builder_UiDslWriter);

}
