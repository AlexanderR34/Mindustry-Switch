#include "mindustry/ui/builder/UiDslParser.h"
#include "java/lang/Math.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/ui/builder/UiBuilder_Entry.h"
#include "java/lang/Boolean.h"
#include "mindustry/ui/builder/UiBuilder_NodeBuilder.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Float.h"
#include "java/lang/Enum.h"
#include "mindustry/ui/builder/UiDslParser_1.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "arc/util/serialization/SerializationException.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/builder/UiBuilder_TableBuilder.h"
#include "mindustry/ui/builder/UiDslParser.h"
#include "mindustry/ui/builder/UiKey.h"

extern "C" {


void mark_mindustry_ui_builder_UiDslParser(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_builder_UiDslParser *) object;
	if (self->F_src)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_src)->clazz)->markFunction)((jobject) self->F_src, mark, depth + 1);
}

void clinit_mindustry_ui_builder_UiDslParser(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_builder_UiDslParser_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiDslParser(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src = (jref) (frame[1].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiDslParser_parse_java_lang_String_R_mindustry_ui_builder_UiBuilder$TableBuilder(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:parse", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiDslParser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(19);
	clinit_mindustry_ui_builder_UiBuilder$TableBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$TableBuilder);
	init_mindustry_ui_builder_UiBuilder$TableBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_ui_builder_UiDslParser(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiDslParser);
	init_mindustry_ui_builder_UiDslParser_java_lang_String(ctx, sp[0].o, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(21);
	((func_mindustry_ui_builder_UiDslParser_parseStatementsInto_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_parseStatementsInto_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(22);
	((func_mindustry_ui_builder_UiDslParser_skipWs) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_skipWs])(ctx, (frame[2].o));
	LINE_NUMBER(23);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_5;
	}
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_peek_R_char) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_peek_R_char])(ctx, (frame[2].o));
	jint temp1 = (jint)((func_mindustry_ui_builder_UiDslParser_line_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_line_int_R_int])(ctx, (frame[2].o), ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[2].o)))->F_pos));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unexpected character '\u0001' at line \u0001"_j.string, 2, boxCharacter(ctx, temp0), boxInteger(ctx, temp1));
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_builder_UiDslParser_parseStatementsInto_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:parseStatementsInto", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(28);
	((func_mindustry_ui_builder_UiDslParser_skipWs) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_skipWs])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(29);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_peek_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_peek_R_char])(ctx, (frame[0].o));
	if (temp0 == (125)) goto label_2;
	}
	{
	LINE_NUMBER(30);
	((func_mindustry_ui_builder_UiDslParser_parseStatement_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_parseStatement_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(31);
	((func_mindustry_ui_builder_UiDslParser_skipWs) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_skipWs])(ctx, (frame[0].o));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_builder_UiDslParser_parseStatement_mindustry_ui_builder_UiBuilder$NodeBuilder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:parseStatement", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	((func_mindustry_ui_builder_UiDslParser_skipWs) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_skipWs])(ctx, (frame[0].o));
	LINE_NUMBER(37);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_peek_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_peek_R_char])(ctx, (frame[0].o));
	if (temp0 != (34)) goto label_7;
	}
label_6:;
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_line_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_line_int_R_int])(ctx, (frame[0].o), ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Expected identifier at line \u0001"_j.string, 1, boxInteger(ctx, temp0));
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiDslParser_readBareToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_readBareToken_R_java_lang_String])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(39);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_9;
	}
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_peek_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_peek_R_char])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_ui_builder_UiDslParser_line_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_line_int_R_int])(ctx, (frame[0].o), ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unexpected character '\u0001' at line \u0001"_j.string, 2, boxCharacter(ctx, temp0), boxInteger(ctx, temp1));
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(41);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"row"_j))));
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_entries;
	clinit_mindustry_ui_builder_UiBuilder$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$Entry);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[2].o = (jobject)SF_mindustry_ui_builder_UiKey_row;
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalArgumentException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiKey_valueOf_java_lang_String_R_mindustry_ui_builder_UiKey(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(51);
	goto label_12;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(49);
	frame[4].o = sp[0].o;
	LINE_NUMBER(50);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	sp[1].o = frame[2].o;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_line_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_line_int_R_int])(ctx, (frame[0].o), ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown property: \"\u0001\" at line \u0001"_j.string, 2, sp[1].o, boxInteger(ctx, temp0));
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(54);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, (frame[3].o));
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiKey_row;
	jint temp1 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_14;
	}
	INST_ICONST(1);
	goto label_15;
label_14:;
	INST_ICONST(0);
label_15:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(55);
	((func_mindustry_ui_builder_UiDslParser_skipWs) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_skipWs])(ctx, (frame[0].o));
	LINE_NUMBER(58);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_18;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_peek_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_peek_R_char])(ctx, (frame[0].o));
	if (temp0 != (58)) goto label_18;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiDslParser_parseValue_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_parseValue_R_java_lang_String])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(62);
	if ((frame[4].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiBuilder$NodeBuilder_create_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[6].o)))->F_entries;
	clinit_mindustry_ui_builder_UiBuilder$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$Entry);
	sp[2].o = (jobject)SM_mindustry_ui_builder_UiDslParser_getShorthandType_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiKey(ctx, (frame[3].o));
	init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(65);
	((func_mindustry_ui_builder_UiDslParser_skipWs) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_skipWs])(ctx, (frame[0].o));
	LINE_NUMBER(66);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_27;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_peek_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_peek_R_char])(ctx, (frame[0].o));
	if (temp0 != (123)) goto label_27;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(68);
	((func_mindustry_ui_builder_UiDslParser_parseStatementsInto_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_parseStatementsInto_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(69);
	((func_mindustry_ui_builder_UiDslParser_expect_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_expect_char])(ctx, (frame[0].o), (125));
	}
label_27:;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_entries;
	clinit_mindustry_ui_builder_UiBuilder$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$Entry);
	sp[2].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[6].o)))->F_type;
	init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[6].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	goto label_32;
	}
label_22:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_entries;
	clinit_mindustry_ui_builder_UiBuilder$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$Entry);
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)((func_mindustry_ui_builder_UiDslParser_coerce_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_coerce_java_lang_String_R_java_lang_Object])(ctx, (frame[0].o), (frame[5].o));
	init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_32:;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	INST_RETURN();
label_18:;
	{
	LINE_NUMBER(79);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_33;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_peek_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_peek_R_char])(ctx, (frame[0].o));
	if (temp0 != (123)) goto label_33;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(81);
	if ((frame[4].i) != 0) goto label_36;
	}
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	sp[1].o = frame[2].o;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_line_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_line_int_R_int])(ctx, (frame[0].o), ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown node type '\u0001' at line \u0001"_j.string, 2, sp[1].o, boxInteger(ctx, temp0));
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_36:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)SM_mindustry_ui_builder_UiBuilder$NodeBuilder_create_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx, (frame[3].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(83);
	((func_mindustry_ui_builder_UiDslParser_parseStatementsInto_mindustry_ui_builder_UiBuilder$NodeBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_parseStatementsInto_mindustry_ui_builder_UiBuilder$NodeBuilder])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(84);
	((func_mindustry_ui_builder_UiDslParser_expect_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_expect_char])(ctx, (frame[0].o), (125));
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_entries;
	clinit_mindustry_ui_builder_UiBuilder$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$Entry);
	sp[2].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[5].o)))->F_type;
	init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[1].o, sp[2].o, (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}
label_33:;
	{
	LINE_NUMBER(90);
	if ((frame[4].i) != 0) goto label_41;
	}
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	sp[1].o = frame[2].o;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_line_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_line_int_R_int])(ctx, (frame[0].o), ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown node type '\u0001' at line \u0001"_j.string, 2, sp[1].o, boxInteger(ctx, temp0));
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_41:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_ui_builder_UiBuilder$NodeBuilder *) NULL_CHECK((frame[1].o)))->F_entries;
	clinit_mindustry_ui_builder_UiBuilder$Entry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_builder_UiBuilder$Entry);
	sp[2].o = frame[3].o;
	sp[3].o = (jobject)SM_mindustry_ui_builder_UiBuilder$NodeBuilder_create_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiBuilder$NodeBuilder(ctx, (frame[3].o));
	init_mindustry_ui_builder_UiBuilder$Entry_mindustry_ui_builder_UiKey_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_builder_UiDslParser_getShorthandType_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiKey(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:getShorthandType", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_builder_UiDslParser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(96);
	clinit_mindustry_ui_builder_UiDslParser$1(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiDslParser$1_$SwitchMap$mindustry$ui$builder$UiKey;
	jint temp0 = (jint)((func_mindustry_ui_builder_UiKey_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiKey_ordinal_R_int])(ctx, (frame[0].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		default: goto label_2;
	}
	}
label_1:;
	{
	LINE_NUMBER(97);
	clinit_mindustry_ui_builder_UiKey(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_builder_UiKey_region;
	sp += 1;
	goto label_3;
	}
label_2:;
	LINE_NUMBER(98);
	clinit_mindustry_ui_builder_UiKey(ctx);
	(sp++)->o = SF_mindustry_ui_builder_UiKey_text;
label_3:;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiDslParser_coerce_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:coerce", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	if (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_lastQuoted) == 0) goto label_1;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(105);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"true"_j))));
	if (temp0 == 0) goto label_2;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_TRUE;
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"false"_j))));
	if (temp0 == 0) goto label_3;
	}
	clinit_java_lang_Boolean(ctx);
	(sp++)->o = SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(108);
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, (frame[1].o), (jfloat(std::numeric_limits<float>::quiet_NaN())));
	frame[2].f = temp0;
	LINE_NUMBER(109);
	jint temp1 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[2].f));
	if (temp1 != 0) goto label_5;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiDslParser_parseValue_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:parseValue", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(117);
	((func_mindustry_ui_builder_UiDslParser_skipWs) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_skipWs])(ctx, (frame[0].o));
	LINE_NUMBER(118);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_peek_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_peek_R_char])(ctx, (frame[0].o));
	if (temp0 != (34)) goto label_2;
	}
	{
	LINE_NUMBER(119);
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_lastQuoted = (jint(1));
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiDslParser_parseString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_parseString_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(122);
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_lastQuoted = (jint(0));
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_mindustry_ui_builder_UiDslParser_readBareToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_readBareToken_R_java_lang_String])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(124);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_line_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_line_int_R_int])(ctx, (frame[0].o), ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Expected value at line \u0001"_j.string, 1, boxInteger(ctx, temp0));
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiDslParser_parseString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:parseString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(130);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(131);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_3;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_peek_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_peek_R_char])(ctx, (frame[0].o));
	if (temp0 == (34)) goto label_3;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	frame[2].i = temp0;
	LINE_NUMBER(133);
	if ((frame[2].i) != (92)) goto label_6;
	}
	{
	jint temp0 = ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1));
	sp[0].o = (jobject)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1))));
	frame[3].i = temp0;
	LINE_NUMBER(135);
	sp[0].o = frame[1].o;
	sp += 1;
	if ((frame[3].i) != (110)) goto label_9;
	}
	INST_BIPUSH(10);
	goto label_10;
label_9:;
	INST_ILOAD(3);
label_10:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(136);
	sp[0].o = frame[0].o;
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(2)));
	LINE_NUMBER(137);
	goto label_2;
	}
label_6:;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(141);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(142);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_15;
	}
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_line_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_line_int_R_int])(ctx, (frame[0].o), ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unterminated string starting at line \u0001"_j.string, 1, boxInteger(ctx, temp0));
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_15:;
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_builder_UiDslParser_readBareToken_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:readBareToken", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	frame[1].i = ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos);
	}
label_1:;
	{
	LINE_NUMBER(150);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	frame[2].i = temp0;
	LINE_NUMBER(152);
	jint temp1 = (jint)SM_java_lang_Character_isWhitespace_char_R_boolean(ctx, (frame[2].i));
	if (temp1 != 0) goto label_2;
	}
	{
	if ((frame[2].i) == (123)) goto label_2;
	}
	{
	if ((frame[2].i) == (125)) goto label_2;
	}
	{
	if ((frame[2].i) != (58)) goto label_5;
	}
	goto label_2;
label_5:;
	{
	LINE_NUMBER(153);
	sp[0].o = frame[0].o;
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(154);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src;
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, (frame[1].i), ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_builder_UiDslParser_skipWs(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:skipWs", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_0:;
	{
	LINE_NUMBER(159);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	frame[1].i = temp0;
	LINE_NUMBER(161);
	jint temp1 = (jint)SM_java_lang_Character_isWhitespace_char_R_boolean(ctx, (frame[1].i));
	if (temp1 == 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	goto label_0;
	}
label_4:;
	{
	LINE_NUMBER(162);
	if ((frame[1].i) != (47)) goto label_1;
	}
	{
	jint temp0 = ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1));
	sp[0].o = (jobject)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos) + (jint(1))));
	if (temp0 != (47)) goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_0;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	if (temp0 == (10)) goto label_0;
	}
	{
	sp[0].o = frame[0].o;
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	goto label_5;
	}
label_1:;
	LINE_NUMBER(168);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_builder_UiDslParser_expect_char(jcontext ctx, jobject self, jchar param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:expect", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(171);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_peek_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_peek_R_char])(ctx, (frame[0].o));
	if (temp0 == (frame[1].i)) goto label_2;
	}
label_1:;
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_mindustry_ui_builder_UiDslParser_atEnd_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean])(ctx, (frame[0].o));
	sp[1].o = sp[0].o;
	sp[2].i = temp0;
	sp += 3;
	if (temp1 == 0) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"<eof>"_j));
	goto label_4;
label_3:;
	{
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_peek_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_peek_R_char])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, temp0);
	sp += 1;
	}
label_4:;
	{
	sp -= 4;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[3].o);
	jint temp0 = (jint)((func_mindustry_ui_builder_UiDslParser_line_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_builder_UiDslParser_line_int_R_int])(ctx, (frame[0].o), ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Expected '\u0001', found '\u0001' at line \u0001"_j.string, 3, boxCharacter(ctx, sp[2].i), sp[1].o, boxInteger(ctx, temp0));
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(172);
	sp[0].o = frame[0].o;
	((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos = (((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK(sp[0].o))->F_pos) + (jint(1)));
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_builder_UiDslParser_atEnd_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:atEnd", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 < temp1) goto label_1;
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

jchar M_mindustry_ui_builder_UiDslParser_peek_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:peek", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, ((jint)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_pos));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_ui_builder_UiDslParser_line_int_R_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/builder/UiDslParser:line", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(185);
	frame[2].i = (jint(1));
	LINE_NUMBER(186);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[3].i = temp2;
	LINE_NUMBER(187);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_ui_builder_UiDslParser *) NULL_CHECK((frame[0].o)))->F_src;
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, sp[0].o, (frame[4].i));
	if (temp0 != (10)) goto label_6;
	}
	INST_IINC(2, 1);
label_6:;
	{
	LINE_NUMBER(187);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_builder_UiDslParser[] {
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
	(void *) M_mindustry_ui_builder_UiDslParser_parseStatementsInto_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiDslParser_parseStatement_mindustry_ui_builder_UiBuilder$NodeBuilder,
	(void *) M_mindustry_ui_builder_UiDslParser_coerce_java_lang_String_R_java_lang_Object,
	(void *) M_mindustry_ui_builder_UiDslParser_parseValue_R_java_lang_String,
	(void *) M_mindustry_ui_builder_UiDslParser_parseString_R_java_lang_String,
	(void *) M_mindustry_ui_builder_UiDslParser_readBareToken_R_java_lang_String,
	(void *) M_mindustry_ui_builder_UiDslParser_skipWs,
	(void *) M_mindustry_ui_builder_UiDslParser_expect_char,
	(void *) M_mindustry_ui_builder_UiDslParser_atEnd_R_boolean,
	(void *) M_mindustry_ui_builder_UiDslParser_peek_R_char,
	(void *) M_mindustry_ui_builder_UiDslParser_line_int_R_int,
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
	{ "parseStatementsInto", "(Lmindustry/ui/builder/UiBuilder$NodeBuilder;)V" },
	{ "parseStatement", "(Lmindustry/ui/builder/UiBuilder$NodeBuilder;)V" },
	{ "coerce", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "parseValue", "()Ljava/lang/String;" },
	{ "parseString", "()Ljava/lang/String;" },
	{ "readBareToken", "()Ljava/lang/String;" },
	{ "skipWs", "()V" },
	{ "expect", "(C)V" },
	{ "atEnd", "()Z" },
	{ "peek", "()C" },
	{ "line", "(I)I" },
};

static FieldMetadata fields[] {
	{ "src", &class_java_lang_String, offsetof(mindustry_ui_builder_UiDslParser, F_src), "Ljava/lang/String;", 18 },
	{ "pos", &class_int, offsetof(mindustry_ui_builder_UiDslParser, F_pos), "I", 2 },
	{ "lastQuoted", &class_boolean, offsetof(mindustry_ui_builder_UiDslParser, F_lastQuoted), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_builder_UiDslParser_java_lang_String, 0, "(Ljava/lang/String;)V", 2 },
	{ "parse", (intptr_t) SM_mindustry_ui_builder_UiDslParser_parse_java_lang_String_R_mindustry_ui_builder_UiBuilder$TableBuilder, 0, "(Ljava/lang/String;)Lmindustry/ui/builder/UiBuilder$TableBuilder;", 9 },
	{ "parseStatementsInto", (intptr_t) M_mindustry_ui_builder_UiDslParser_parseStatementsInto_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiDslParser_parseStatementsInto_mindustry_ui_builder_UiBuilder$NodeBuilder, "(Lmindustry/ui/builder/UiBuilder$NodeBuilder;)V", 2 },
	{ "parseStatement", (intptr_t) M_mindustry_ui_builder_UiDslParser_parseStatement_mindustry_ui_builder_UiBuilder$NodeBuilder, VTABLE_mindustry_ui_builder_UiDslParser_parseStatement_mindustry_ui_builder_UiBuilder$NodeBuilder, "(Lmindustry/ui/builder/UiBuilder$NodeBuilder;)V", 2 },
	{ "getShorthandType", (intptr_t) SM_mindustry_ui_builder_UiDslParser_getShorthandType_mindustry_ui_builder_UiKey_R_mindustry_ui_builder_UiKey, 0, "(Lmindustry/ui/builder/UiKey;)Lmindustry/ui/builder/UiKey;", 10 },
	{ "coerce", (intptr_t) M_mindustry_ui_builder_UiDslParser_coerce_java_lang_String_R_java_lang_Object, VTABLE_mindustry_ui_builder_UiDslParser_coerce_java_lang_String_R_java_lang_Object, "(Ljava/lang/String;)Ljava/lang/Object;", 2 },
	{ "parseValue", (intptr_t) M_mindustry_ui_builder_UiDslParser_parseValue_R_java_lang_String, VTABLE_mindustry_ui_builder_UiDslParser_parseValue_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "parseString", (intptr_t) M_mindustry_ui_builder_UiDslParser_parseString_R_java_lang_String, VTABLE_mindustry_ui_builder_UiDslParser_parseString_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "readBareToken", (intptr_t) M_mindustry_ui_builder_UiDslParser_readBareToken_R_java_lang_String, VTABLE_mindustry_ui_builder_UiDslParser_readBareToken_R_java_lang_String, "()Ljava/lang/String;", 2 },
	{ "skipWs", (intptr_t) M_mindustry_ui_builder_UiDslParser_skipWs, VTABLE_mindustry_ui_builder_UiDslParser_skipWs, "()V", 2 },
	{ "expect", (intptr_t) M_mindustry_ui_builder_UiDslParser_expect_char, VTABLE_mindustry_ui_builder_UiDslParser_expect_char, "(C)V", 2 },
	{ "atEnd", (intptr_t) M_mindustry_ui_builder_UiDslParser_atEnd_R_boolean, VTABLE_mindustry_ui_builder_UiDslParser_atEnd_R_boolean, "()Z", 2 },
	{ "peek", (intptr_t) M_mindustry_ui_builder_UiDslParser_peek_R_char, VTABLE_mindustry_ui_builder_UiDslParser_peek_R_char, "()C", 2 },
	{ "line", (intptr_t) M_mindustry_ui_builder_UiDslParser_line_int_R_int, VTABLE_mindustry_ui_builder_UiDslParser_line_int_R_int, "(I)I", 2 },
};

Class class_mindustry_ui_builder_UiDslParser{
		.nativeName = (intptr_t) "mindustry/ui/builder/UiDslParser",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_builder_UiDslParser),
		.classVtable = (intptr_t) vtable_mindustry_ui_builder_UiDslParser,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_builder_UiDslParser,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_builder_UiDslParser,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_builder_UiDslParser = registerClass(&class_mindustry_ui_builder_UiDslParser);

}
