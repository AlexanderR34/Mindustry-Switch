#include "arc/flabel/FParser.h"
#include "arc/flabel/FParser_InternalToken.h"
#include "java/lang/StringBuilder.h"
#include "arc/func/Intc2.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "java/util/regex/Matcher.h"
#include "arc/graphics/Color.h"
#include "arc/flabel/FLabel.h"
#include "java/lang/String.h"
#include "java/util/regex/Pattern.h"
#include "arc/struct/Seq.h"
#include "arc/flabel/FEffect.h"
#include "arc/flabel/FParser_invoke_arc_func_Func_0.h"
#include "java/lang/Exception.h"
#include "arc/flabel/FParser_TokenEntry.h"
#include "arc/flabel/FConfig.h"
#include "arc/flabel/FParser_invoke_arc_func_Intc2_0.h"
#include "arc/func/Func.h"
#include "arc/flabel/FParser_invoke_arc_func_Intc2_1.h"
#include "java/util/Iterator.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/flabel/FParser_TokenCategory.h"
#include "arc/flabel/FParser_invoke_arc_flabel_FParser_TokenHandler_1.h"
#include "arc/flabel/FParser_invoke_arc_flabel_FParser_TokenHandler_0.h"
#include "arc/flabel/FParser_invoke_arc_flabel_FParser_TokenHandler_2.h"
#include "java/lang/Enum.h"
#include "arc/scene/ui/Label.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "arc/flabel/FParser.h"
#include "arc/flabel/FParser_TokenHandler.h"
#include "arc/struct/ObjectMap_Keys.h"
#include "arc/struct/ObjectMap.h"
#include "arc/graphics/g2d/FontCache.h"
#include "arc/flabel/FListener.h"

extern "C" {

jobject SF_arc_flabel_FParser_resetReplacement;
jobject SF_arc_flabel_FParser_parameterParser;

void mark_arc_flabel_FParser(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_flabel_FParser_resetReplacement)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser_resetReplacement)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser_resetReplacement, mark, depth + 1);
		if (SF_arc_flabel_FParser_parameterParser)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_flabel_FParser_parameterParser)->clazz)->markFunction)((jobject) SF_arc_flabel_FParser_parameterParser, mark, depth + 1);
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
	auto self = (arc_flabel_FParser *) object;
}

void init_arc_flabel_FParser(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_flabel_FParser_parseTokens_arc_flabel_FLabel(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:parseTokens", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(18);
	clinit_arc_flabel_FParser(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FParser_resetReplacement;
	if (sp[0].o == nullptr) goto label_1;
	}
	clinit_arc_flabel_FConfig(ctx);
	(sp++)->i = SF_arc_flabel_FConfig_dirtyEffectMaps;
	if ((--sp)->i == 0) goto label_2;
label_1:;
	{
	LINE_NUMBER(19);
	sp[0].o = (jobject)SM_arc_flabel_FParser_getResetReplacement_R_java_lang_String(ctx);
	clinit_arc_flabel_FParser(ctx);
	SF_arc_flabel_FParser_resetReplacement = sp[0].o;
	LINE_NUMBER(20);
	clinit_arc_flabel_FConfig(ctx);
	SF_arc_flabel_FConfig_dirtyEffectMaps = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(24);
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_forceMarkupColor) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, sp[0].o);
	((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_markupEnabled = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_tokenEntries;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(30);
	SM_arc_flabel_FParser_parseReplacements_arc_flabel_FLabel(ctx, (frame[0].o));
	LINE_NUMBER(35);
	SM_arc_flabel_FParser_parseRegularTokens_arc_flabel_FLabel(ctx, (frame[0].o));
	LINE_NUMBER(40);
	SM_arc_flabel_FParser_stripTokens_arc_flabel_FLabel(ctx, (frame[0].o));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_tokenEntries;
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(44);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_tokenEntries;
	sp[0].o = (jobject)((func_arc_struct_Seq_reverse_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_reverse_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_flabel_FParser_baseParse_arc_flabel_FLabel_arc_flabel_FParser$TokenHandler(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:baseParse", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getText_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getText_R_java_lang_StringBuilder])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(49);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	((func_java_lang_StringBuilder_ensureCapacity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_ensureCapacity_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(52);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[4].o = sp[0].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(1)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	frame[5].o = sp[0].o;
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	jint temp1 = jint(0);
	{ /* InvokeDynamic */
		clinit_arc_flabel_FParser_invoke_arc_func_Intc2_0(ctx);
		auto proxy = (arc_flabel_FParser_invoke_arc_func_Intc2_0 *) gcAlloc(ctx, &class_arc_flabel_FParser_invoke_arc_func_Intc2_0);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[5].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FParser_parseAllTokens_arc_flabel_FLabel_boolean_arc_func_Intc2(ctx, sp[0].o, temp1, sp[1].o);
	LINE_NUMBER(75);
	sp[0].o = frame[3].o;
	sp[1].o = frame[2].o;
	jint temp2 = (jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(0)));
	jint temp3 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_subSequence_int_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_subSequence_int_int_R_java_lang_CharSequence])(ctx, sp[1].o, temp2, temp3);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(78);
	((func_arc_flabel_FLabel_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_setText_java_lang_CharSequence])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_flabel_FParser_parseReplacements_arc_flabel_FLabel(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:parseReplacements", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_0(ctx);
		auto proxy = (arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_0 *) gcAlloc(ctx, &class_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FParser_baseParse_arc_flabel_FLabel_arc_flabel_FParser$TokenHandler(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_flabel_FParser_parseRegularTokens_arc_flabel_FLabel(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:parseRegularTokens", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_1(ctx);
		auto proxy = (arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_1 *) gcAlloc(ctx, &class_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FParser_baseParse_arc_flabel_FLabel_arc_flabel_FParser$TokenHandler(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_flabel_FParser_parseAllTokens_arc_flabel_FLabel_boolean_arc_func_Intc2(jcontext ctx, jobject param0, jbool param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:parseAllTokens", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getText_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getText_R_java_lang_StringBuilder])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(191);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[3].o));
	if (temp0 >= temp1) goto label_3;
	}
	{
	LINE_NUMBER(192);
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[3].o), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(193);
	if ((frame[5].i) != (92)) goto label_6;
	}
	{
	LINE_NUMBER(195);
	INST_IINC(4, 1);
	LINE_NUMBER(196);
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(199);
	if ((frame[5].i) != (91)) goto label_10;
	}
	INST_BIPUSH(93);
	goto label_11;
label_10:;
	{
	if ((frame[5].i) != (123)) goto label_12;
	}
	INST_BIPUSH(125);
	goto label_11;
label_12:;
	INST_BIPUSH(95);
label_11:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(200);
	if ((frame[6].i) == (95)) goto label_9;
	}
	{
	LINE_NUMBER(201);
	frame[7].i = ((frame[4].i) + (jint(1)));
	}
label_15:;
	{
	jint temp0 = frame[7].i;
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[3].o));
	if (temp0 >= temp1) goto label_9;
	}
	{
	LINE_NUMBER(203);
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[3].o), (frame[7].i));
	if (temp0 != (frame[5].i)) goto label_17;
	}
	LINE_NUMBER(204);
	goto label_9;
label_17:;
	{
	LINE_NUMBER(205);
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[3].o), (frame[7].i));
	if (temp0 != (frame[6].i)) goto label_19;
	}
	{
	LINE_NUMBER(207);
	((func_arc_func_Intc2_get_int_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc2, INDEX_arc_func_Intc2_get_int_int, (frame[2].o)))(ctx, (frame[2].o), ((frame[4].i) + (jint(1))), (frame[7].i));
	LINE_NUMBER(208);
	frame[4].i = (frame[7].i);
	LINE_NUMBER(209);
	goto label_9;
	}
label_19:;
	{
	LINE_NUMBER(201);
	INST_IINC(7, 1);
	goto label_15;
	}
label_9:;
	{
	LINE_NUMBER(191);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(214);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_flabel_FParser_stripTokens_arc_flabel_FLabel(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:stripTokens", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(217);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2(ctx);
		auto proxy = (arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2 *) gcAlloc(ctx, &class_arc_flabel_FParser_invoke_arc_flabel_FParser$TokenHandler_2);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FParser_baseParse_arc_flabel_FLabel_arc_flabel_FParser$TokenHandler(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	{ /* InvokeDynamic */
		clinit_arc_flabel_FParser_invoke_arc_func_Intc2_1(ctx);
		auto proxy = (arc_flabel_FParser_invoke_arc_func_Intc2_1 *) gcAlloc(ctx, &class_arc_flabel_FParser_invoke_arc_func_Intc2_1);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_flabel_FParser_parseAllTokens_arc_flabel_FLabel_boolean_arc_func_Intc2(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(221);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_flabel_FParser_getResetReplacement_R_java_lang_String(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:getResetReplacement", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	{
	LINE_NUMBER(225);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(226);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_effects;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Keys_toSeq_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_flabel_FParser_invoke_arc_func_Func_0(ctx);
		auto proxy = (arc_flabel_FParser_invoke_arc_func_Func_0 *) gcAlloc(ctx, &class_arc_flabel_FParser_invoke_arc_func_Func_0);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_replace_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_replace_arc_func_Func])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(228);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"clear"_j))));
	LINE_NUMBER(229);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"normal"_j))));
	LINE_NUMBER(231);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(232);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"{"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (125));
	LINE_NUMBER(234);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_flabel_FParser_lambda$getResetReplacement$0_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:lambda$getResetReplacement$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(227);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_flabel_FParser_lambda$stripTokens$1_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:lambda$stripTokens$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_arc_flabel_FParser_lambda$stripTokens$0_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject param0, jint param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:lambda$stripTokens$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(217);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}

	popStackFrame(ctx);
}

jobject SM_arc_flabel_FParser_lambda$parseRegularTokens$0_arc_flabel_FLabel_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[22];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:lambda$parseRegularTokens$0", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(112);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(113);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(114);
	frame[5].o = (jobject(nullptr));
	LINE_NUMBER(115);
	frame[6].i = (jint(0));
	LINE_NUMBER(117);
	clinit_arc_flabel_FParser(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FParser_parameterParser;
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, sp[0].o, (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(118);
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, (frame[7].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_regex_Matcher_group_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_util_regex_Matcher_group_int_R_java_lang_String])(ctx, (frame[7].o), (jint(2)));
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ACONST_NULL();
label_11:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(119);
	if ((frame[8].o) == nullptr) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(120);
	if ((frame[9].i) == 0) goto label_16;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[1].o), (61));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	goto label_17;
	}
label_16:;
	INST_ALOAD(1);
label_17:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(122);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FParser$TokenCategory_event;
	frame[11].o = sp[0].o;
	LINE_NUMBER(123);
	sp[0].o = (jobject)SM_arc_flabel_FParser$InternalToken_fromName_java_lang_String_R_arc_flabel_FParser$InternalToken(ctx, (frame[10].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(124);
	if ((frame[12].o) != nullptr) goto label_21;
	}
	{
	LINE_NUMBER(125);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_effects;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[10].o));
	if (temp0 == 0) goto label_23;
	}
	{
	LINE_NUMBER(126);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FParser$TokenCategory_effectStart;
	frame[11].o = sp[0].o;
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(127);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[10].o));
	if (temp0 != 0) goto label_25;
	}
	{
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_effects;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[10].o), (jint(1)));
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_25;
	}
	{
	LINE_NUMBER(128);
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FParser$TokenCategory_effectEnd;
	frame[11].o = sp[0].o;
	goto label_25;
	}
label_21:;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((arc_flabel_FParser$InternalToken *) NULL_CHECK((frame[12].o)))->F_category;
	frame[11].o = sp[0].o;
	}
label_25:;
	{
	LINE_NUMBER(134);
	jint temp0 = (jint)((func_arc_flabel_FParser$TokenCategory_ordinal_R_int) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_flabel_FParser$TokenCategory_ordinal_R_int])(ctx, (frame[11].o));
	switch(temp0) {
		case 0: goto label_27;
		case 1: goto label_28;
		case 2: goto label_29;
		case 3: goto label_29;
		case 4: goto label_30;
		case 5: goto label_29;
		case 6: goto label_29;
		case 7: goto label_31;
		case 8: goto label_29;
		default: goto label_29;
	}
	}
label_27:;
	{
	LINE_NUMBER(136);
	if ((frame[9].i) == 0) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8";"_j))));
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (clinit_arc_flabel_FConfig(ctx), (jfloat)SF_arc_flabel_FConfig_defaultWaitValue));
	sp[0].f = temp0;
	sp += 1;
	goto label_33;
	}
label_32:;
	clinit_arc_flabel_FConfig(ctx);
	(sp++)->f = SF_arc_flabel_FConfig_defaultWaitValue;
label_33:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(137);
	goto label_29;
	}
label_30:;
	{
	LINE_NUMBER(141);
	if ((frame[9].i) == 0) goto label_35;
	}
	INST_ALOAD(8);
	goto label_36;
label_35:;
	INST_ALOAD(1);
label_36:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(142);
	frame[6].i = (jint(-1));
	LINE_NUMBER(143);
	goto label_29;
	}
label_28:;
	{
	LINE_NUMBER(145);
	frame[13].o = (frame[10].o);
	frame[14].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[13].o));
	switch(temp0) {
		case -1281671671: goto label_41;
		case -1039745817: goto label_42;
		case -899450258: goto label_43;
		case 3135580: goto label_44;
		case 3533313: goto label_45;
		case 109641799: goto label_46;
		default: goto label_47;
	}
	}
label_46:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"speed"_j))));
	if (temp0 == 0) goto label_47;
	}
	{
	frame[14].i = (jint(0));
	goto label_47;
	}
label_43:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"slower"_j))));
	if (temp0 == 0) goto label_47;
	}
	{
	frame[14].i = (jint(1));
	goto label_47;
	}
label_45:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"slow"_j))));
	if (temp0 == 0) goto label_47;
	}
	{
	frame[14].i = (jint(2));
	goto label_47;
	}
label_42:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"normal"_j))));
	if (temp0 == 0) goto label_47;
	}
	{
	frame[14].i = (jint(3));
	goto label_47;
	}
label_44:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"fast"_j))));
	if (temp0 == 0) goto label_47;
	}
	{
	frame[14].i = (jint(4));
	goto label_47;
	}
label_41:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[13].o), (((jobject) createStringLiteral(ctx, u8"faster"_j))));
	if (temp0 == 0) goto label_47;
	}
	INST_ICONST(5);
	INST_ISTORE(14);
label_47:;
	INST_ILOAD(14);
	switch((--sp)->i) {
		case 0: goto label_48;
		case 1: goto label_49;
		case 2: goto label_50;
		case 3: goto label_51;
		case 4: goto label_52;
		case 5: goto label_53;
		default: goto label_54;
	}
label_48:;
	{
	LINE_NUMBER(147);
	clinit_arc_flabel_FConfig(ctx);
	jfloat temp0 = (jfloat)SF_arc_flabel_FConfig_defaultSpeedPerChar;
	sp[0].f = temp0;
	sp += 1;
	if ((frame[9].i) == 0) goto label_55;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8";"_j))));
	jfloat temp0 = (jfloat)SM_arc_util_Strings_parseFloat_java_lang_String_float_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))), (jfloat(1)));
	sp[0].f = temp0;
	sp += 1;
	goto label_56;
	}
label_55:;
	INST_FCONST(1);
label_56:;
	{
	sp -= 2;
	frame[3].f = (sp[0].f / sp[1].f);
	LINE_NUMBER(148);
	goto label_54;
	}
label_49:;
	{
	LINE_NUMBER(150);
	frame[3].f = ((clinit_arc_flabel_FConfig(ctx), (jfloat)SF_arc_flabel_FConfig_defaultSpeedPerChar) / (jfloat(0.5f)));
	LINE_NUMBER(151);
	goto label_54;
	}
label_50:;
	{
	LINE_NUMBER(153);
	frame[3].f = ((clinit_arc_flabel_FConfig(ctx), (jfloat)SF_arc_flabel_FConfig_defaultSpeedPerChar) / (jfloat(0.667f)));
	LINE_NUMBER(154);
	goto label_54;
	}
label_51:;
	{
	LINE_NUMBER(156);
	frame[3].f = (clinit_arc_flabel_FConfig(ctx), (jfloat)SF_arc_flabel_FConfig_defaultSpeedPerChar);
	LINE_NUMBER(157);
	goto label_54;
	}
label_52:;
	{
	LINE_NUMBER(159);
	frame[3].f = ((clinit_arc_flabel_FConfig(ctx), (jfloat)SF_arc_flabel_FConfig_defaultSpeedPerChar) / (jfloat(2)));
	LINE_NUMBER(160);
	goto label_54;
	}
label_53:;
	{
	LINE_NUMBER(162);
	frame[3].f = ((clinit_arc_flabel_FConfig(ctx), (jfloat)SF_arc_flabel_FConfig_defaultSpeedPerChar) / (jfloat(4.0f)));
	}
label_54:;
	LINE_NUMBER(165);
	goto label_29;
label_31:;
	{
	LINE_NUMBER(167);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_effects;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[10].o));
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (checkCast(ctx, &class_arc_func_Prov, sp[0].o))))(ctx, (checkCast(ctx, &class_arc_func_Prov, sp[0].o)));
	frame[5].o = (checkCast(ctx, &class_arc_flabel_FEffect, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(169);
	if ((frame[8].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, (frame[8].o), (((jobject) createStringLiteral(ctx, u8";"_j))));
	((func_arc_flabel_FEffect_applyParams_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_flabel_FEffect_applyParams_Array1_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(173);
	goto label_62;
label_2:;
	LINE_NUMBER(170);
	INST_ASTORE(13);
label_62:;
	{
	LINE_NUMBER(174);
	sp[0].o = frame[5].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[10].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((arc_flabel_FEffect *) NULL_CHECK(sp[0].o))->F_endToken = (jref) sp[1].o;
	LINE_NUMBER(175);
	goto label_29;
	}
label_29:;
	{
	LINE_NUMBER(180);
	clinit_arc_flabel_FParser$TokenEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_flabel_FParser$TokenEntry);
	init_arc_flabel_FParser$TokenEntry_java_lang_String_arc_flabel_FParser$TokenCategory_int_float_java_lang_String(ctx, sp[0].o, (frame[10].o), (frame[11].o), (((frame[2].i) + (frame[6].i)) - (jint(1))), (frame[3].f), (frame[4].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(181);
	((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[13].o)))->F_effect = (jref) (frame[5].o);
	LINE_NUMBER(182);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_tokenEntries;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[13].o));
	LINE_NUMBER(184);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"{"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"}"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_flabel_FParser_lambda$parseReplacements$0_arc_flabel_FLabel_java_lang_String_int_R_java_lang_String(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:lambda$parseReplacements$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(83);
	frame[3].o = (jobject(nullptr));
	LINE_NUMBER(85);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 <= (jint(1))) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(1)));
	if (temp0 != (36)) goto label_2;
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (jint(1)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getTypingListener_R_arc_flabel_FListener) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getTypingListener_R_arc_flabel_FListener])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getTypingListener_R_arc_flabel_FListener) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getTypingListener_R_arc_flabel_FListener])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_flabel_FListener_replaceVariable_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_flabel_FListener, INDEX_arc_flabel_FListener_replaceVariable_java_lang_String_R_java_lang_String, sp[0].o))(ctx, sp[0].o, (frame[4].o));
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(92);
	if ((frame[3].o) != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getVariables_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getVariables_R_arc_struct_ObjectMap])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}
label_7:;
	{
	LINE_NUMBER(97);
	if ((frame[3].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(98);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_globalVars;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}
label_9:;
	LINE_NUMBER(100);
	goto label_11;
label_2:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"/color"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(101);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[#"_j))));
	sp[1].o = (jobject)((func_arc_flabel_FLabel_getClearColor_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getClearColor_R_arc_graphics_Color])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_graphics_Color_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(102);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"reset"_j))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(103);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	clinit_arc_flabel_FParser(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser_resetReplacement;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((func_arc_flabel_FLabel_getDefaultToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getDefaultToken_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void SM_arc_flabel_FParser_lambda$baseParse$0_java_lang_StringBuilder_arc_flabel_FParser$TokenHandler_Array1_int_java_lang_StringBuilder_Array1_int_int_int(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jint param5, jint param6) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:lambda$baseParse$0", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].i = param5;
	frame[6].i = param6;
	{
	LINE_NUMBER(57);
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, (frame[0].o), ((frame[5].i) - (jint(1))));
	if (temp0 != (123)) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[5].i), (frame[6].i));
	sp[0].o = (jobject)((func_arc_flabel_FParser$TokenHandler_handle_java_lang_String_int_R_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_flabel_FParser$TokenHandler, INDEX_arc_flabel_FParser$TokenHandler_handle_java_lang_String_int_R_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, ((frame[5].i) + ((jint)ARRAY_ACCESS(jint, (frame[2].o), (jint(0))))));
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_substring_int_int_R_java_lang_String])(ctx, (frame[0].o), (frame[5].i), (frame[6].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(58);
	sp[0].o = frame[2].o;
	jint temp0 = jint(0);
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) - (((frame[6].i) - (frame[5].i)) + (jint(2))));
	LINE_NUMBER(61);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_subSequence_int_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_subSequence_int_int_R_java_lang_CharSequence])(ctx, (frame[0].o), ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(0)))), ((frame[5].i) - (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(63);
	if ((frame[7].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"{"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_subSequence_int_int_R_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_StringBuilder_subSequence_int_int_R_java_lang_CharSequence])(ctx, (frame[0].o), (frame[5].i), (frame[6].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"}"_j))));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (frame[7].o));
	}
label_8:;
	{
	LINE_NUMBER(71);
	ARRAY_ACCESS(jint, (frame[4].o), (jint(0))) = ((frame[6].i) + (jint(1)));
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_flabel_FParser(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FParser:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FParser(ctx);
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_int_R_java_util_regex_Pattern(ctx, (((jobject) createStringLiteral(ctx, u8"(\\w+)(?:=([;:?=^_ #-'*-..\\w]+))?"_j))), (jint(2)));
	clinit_arc_flabel_FParser(ctx);
	SF_arc_flabel_FParser_parameterParser = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_FParser[] {
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

static jclass innerClasses[] {
	&class_arc_flabel_FParser$TokenHandler,
	&class_arc_flabel_FParser$TokenCategory,
	&class_arc_flabel_FParser$InternalToken,
	&class_arc_flabel_FParser$TokenEntry,
};

static FieldMetadata fields[] {
	{ "resetReplacement", &class_java_lang_String, (intptr_t) &SF_arc_flabel_FParser_resetReplacement, "Ljava/lang/String;", 10 },
	{ "parameterParser", &class_java_util_regex_Pattern, (intptr_t) &SF_arc_flabel_FParser_parameterParser, "Ljava/util/regex/Pattern;", 24 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_flabel_FParser, 0, "()V", 0 },
	{ "parseTokens", (intptr_t) SM_arc_flabel_FParser_parseTokens_arc_flabel_FLabel, 0, "(Larc/flabel/FLabel;)V", 8 },
	{ "baseParse", (intptr_t) SM_arc_flabel_FParser_baseParse_arc_flabel_FLabel_arc_flabel_FParser$TokenHandler, 0, "(Larc/flabel/FLabel;Larc/flabel/FParser$TokenHandler;)V", 10 },
	{ "parseReplacements", (intptr_t) SM_arc_flabel_FParser_parseReplacements_arc_flabel_FLabel, 0, "(Larc/flabel/FLabel;)V", 10 },
	{ "parseRegularTokens", (intptr_t) SM_arc_flabel_FParser_parseRegularTokens_arc_flabel_FLabel, 0, "(Larc/flabel/FLabel;)V", 10 },
	{ "parseAllTokens", (intptr_t) SM_arc_flabel_FParser_parseAllTokens_arc_flabel_FLabel_boolean_arc_func_Intc2, 0, "(Larc/flabel/FLabel;ZLarc/func/Intc2;)V", 10 },
	{ "stripTokens", (intptr_t) SM_arc_flabel_FParser_stripTokens_arc_flabel_FLabel, 0, "(Larc/flabel/FLabel;)V", 10 },
	{ "getResetReplacement", (intptr_t) SM_arc_flabel_FParser_getResetReplacement_R_java_lang_String, 0, "()Ljava/lang/String;", 10 },
	{ "lambda$getResetReplacement$0", (intptr_t) SM_arc_flabel_FParser_lambda$getResetReplacement$0_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 4106 },
	{ "lambda$stripTokens$1", (intptr_t) SM_arc_flabel_FParser_lambda$stripTokens$1_int_int, 0, "(II)V", 4106 },
	{ "lambda$stripTokens$0", (intptr_t) SM_arc_flabel_FParser_lambda$stripTokens$0_java_lang_String_int_R_java_lang_String, 0, "(Ljava/lang/String;I)Ljava/lang/String;", 4106 },
	{ "lambda$parseRegularTokens$0", (intptr_t) SM_arc_flabel_FParser_lambda$parseRegularTokens$0_arc_flabel_FLabel_java_lang_String_int_R_java_lang_String, 0, "(Larc/flabel/FLabel;Ljava/lang/String;I)Ljava/lang/String;", 4106 },
	{ "lambda$parseReplacements$0", (intptr_t) SM_arc_flabel_FParser_lambda$parseReplacements$0_arc_flabel_FLabel_java_lang_String_int_R_java_lang_String, 0, "(Larc/flabel/FLabel;Ljava/lang/String;I)Ljava/lang/String;", 4106 },
	{ "lambda$baseParse$0", (intptr_t) SM_arc_flabel_FParser_lambda$baseParse$0_java_lang_StringBuilder_arc_flabel_FParser$TokenHandler_Array1_int_java_lang_StringBuilder_Array1_int_int_int, 0, "(Ljava/lang/StringBuilder;Larc/flabel/FParser$TokenHandler;[ILjava/lang/StringBuilder;[III)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_flabel_FParser, 0, "()V", 8 },
};

Class class_arc_flabel_FParser{
		.nativeName = (intptr_t) "arc/flabel/FParser",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_flabel_FParser),
		.classVtable = (intptr_t) vtable_arc_flabel_FParser,
		.staticInitializer = (intptr_t) clinit_arc_flabel_FParser,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_FParser,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_flabel_FParser = registerClass(&class_arc_flabel_FParser);

}
