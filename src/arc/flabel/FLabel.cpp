#include "arc/flabel/FLabel.h"
#include "java/lang/StringBuilder.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/struct/ObjectFloatMap.h"
#include "arc/flabel/FGlyph.h"
#include "arc/graphics/Color.h"
#include "arc/struct/IntSeq.h"
#include "arc/graphics/g2d/Font_Glyph.h"
#include "arc/flabel/FLabel.h"
#include "arc/flabel/FLabel_1.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "arc/util/pooling/Pools.h"
#include "arc/struct/Seq.h"
#include "arc/scene/style/Drawable.h"
#include "arc/flabel/FEffect.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/flabel/FConfig.h"
#include "arc/flabel/FParser_TokenEntry.h"
#include "arc/flabel/FLabel_invoke_arc_func_Prov_0.h"
#include "java/util/Iterator.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "arc/flabel/FParser_TokenCategory.h"
#include "java/lang/Enum.h"
#include "arc/func/Cons2.h"
#include "arc/scene/ui/Label.h"
#include "java/lang/CharSequence.h"
#include "arc/flabel/FLabel_invoke_arc_func_Cons2_0.h"
#include "arc/graphics/g2d/GlyphLayout_GlyphRun.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/flabel/FParser.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Class.h"
#include "arc/graphics/g2d/FontCache.h"
#include "arc/flabel/FListener.h"

extern "C" {


void mark_arc_flabel_FLabel(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_Label(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_flabel_FLabel *) object;
	if (self->F_variables)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_variables)->clazz)->markFunction)((jobject) self->F_variables, mark, depth + 1);
	if (self->F_tokenEntries)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tokenEntries)->clazz)->markFunction)((jobject) self->F_tokenEntries, mark, depth + 1);
	if (self->F_clearColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clearColor)->clazz)->markFunction)((jobject) self->F_clearColor, mark, depth + 1);
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
	if (self->F_originalText)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_originalText)->clazz)->markFunction)((jobject) self->F_originalText, mark, depth + 1);
	if (self->F_glyphCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glyphCache)->clazz)->markFunction)((jobject) self->F_glyphCache, mark, depth + 1);
	if (self->F_glyphRunCapacities)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glyphRunCapacities)->clazz)->markFunction)((jobject) self->F_glyphRunCapacities, mark, depth + 1);
	if (self->F_offsetCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_offsetCache)->clazz)->markFunction)((jobject) self->F_offsetCache, mark, depth + 1);
	if (self->F_layoutLineBreaks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_layoutLineBreaks)->clazz)->markFunction)((jobject) self->F_layoutLineBreaks, mark, depth + 1);
	if (self->F_activeEffects)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_activeEffects)->clazz)->markFunction)((jobject) self->F_activeEffects, mark, depth + 1);
	if (self->F_defaultToken)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultToken)->clazz)->markFunction)((jobject) self->F_defaultToken, mark, depth + 1);
}

void clinit_arc_flabel_FLabel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_Label(ctx);
}

void init_arc_flabel_FLabel_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_flabel_FLabel(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	init_arc_scene_ui_Label_java_lang_CharSequence(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_variables = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_tokenEntries = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	clinit_arc_flabel_FConfig(ctx);
	sp[2].o = (jobject)SF_arc_flabel_FConfig_defaultClearColor;
	init_arc_graphics_Color_arc_graphics_Color(ctx, sp[1].o, sp[2].o);
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_clearColor = (jref) sp[1].o;
	LINE_NUMBER(27);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (jobject(nullptr));
	LINE_NUMBER(28);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_forceMarkupColor = (clinit_arc_flabel_FConfig(ctx), (jint)SF_arc_flabel_FConfig_forceColorMarkupByDefault);
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_originalText = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCache = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphRunCapacities = (jref) sp[1].o;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_offsetCache = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[1].o);
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_layoutLineBreaks = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_activeEffects = (jref) sp[1].o;
	LINE_NUMBER(37);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_textSpeed = (clinit_arc_flabel_FConfig(ctx), (jfloat)SF_arc_flabel_FConfig_defaultSpeedPerChar);
	LINE_NUMBER(38);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_charCooldown = ((jfloat)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_textSpeed);
	LINE_NUMBER(39);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_rawCharIndex = (-2);
	LINE_NUMBER(40);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharIndex = (jint(-1));
	LINE_NUMBER(41);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharCompensation = (jint(0));
	LINE_NUMBER(42);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_cachedGlyphCharIndex = (jint(-1));
	LINE_NUMBER(43);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_lastLayoutX = (jfloat(0));
	LINE_NUMBER(44);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_lastLayoutY = (jfloat(0));
	LINE_NUMBER(45);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_parsed = (jint(0));
	LINE_NUMBER(46);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_paused = (jint(0));
	LINE_NUMBER(47);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ended = (jint(0));
	LINE_NUMBER(48);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_skipping = (jint(0));
	LINE_NUMBER(49);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ignoringEvents = (jint(0));
	LINE_NUMBER(50);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ignoringEffects = (jint(0));
	LINE_NUMBER(51);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_defaultToken = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(55);
	((func_arc_flabel_FLabel_saveOriginalText) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_saveOriginalText])(ctx, (frame[0].o));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_setText_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:setText", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	((func_arc_flabel_FLabel_setText_java_lang_CharSequence_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_setText_java_lang_CharSequence_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_setText_java_lang_CharSequence_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:setText", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(75);
	M_arc_scene_ui_Label_setText_java_lang_CharSequence(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(76);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_originalText;
	if (sp[0].o == nullptr) goto label_2;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_flabel_FLabel_saveOriginalText) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_flabel_FLabel_saveOriginalText])(ctx, sp[0].o);
label_2:;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_flabel_FLabel_getOriginalText_R_java_lang_StringBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:getOriginalText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_originalText;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_saveOriginalText(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:saveOriginalText", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_originalText;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_originalText;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_arc_flabel_FLabel_getText_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getText_R_java_lang_StringBuilder])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_insert_int_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_insert_int_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_originalText;
	((func_java_lang_StringBuilder_trimToSize) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_trimToSize])(ctx, sp[0].o);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_restoreOriginalText(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:restoreOriginalText", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_originalText;
	M_arc_scene_ui_Label_setText_java_lang_CharSequence(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(100);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_parsed = (jint(0));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_flabel_FLabel_getTypingListener_R_arc_flabel_FListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:getTypingListener", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_listener;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_setTypingListener_arc_flabel_FListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:setTypingListener", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (frame[1].o);
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_flabel_FLabel_getClearColor_R_arc_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:getClearColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_clearColor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_setForceMarkupColor_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:setForceMarkupColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(129);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_forceMarkupColor = (frame[1].i);
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_flabel_FLabel_getDefaultToken_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:getDefaultToken", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_defaultToken;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_setDefaultToken_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:setDefaultToken", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_2;
label_1:;
	INST_ALOAD(1);
label_2:;
	{
	sp -= 2;
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_defaultToken = (jref) sp[1].o;
	LINE_NUMBER(144);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_parsed = (jint(0));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_parseTokens(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:parseTokens", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_arc_flabel_FLabel_getDefaultToken_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getDefaultToken_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[2].o = (jobject)((func_arc_flabel_FLabel_getText_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getText_R_java_lang_StringBuilder])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_arc_flabel_FLabel_setText_java_lang_CharSequence_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_flabel_FLabel_setText_java_lang_CharSequence_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(150);
	SM_arc_flabel_FParser_parseTokens_arc_flabel_FLabel(ctx, (frame[0].o));
	LINE_NUMBER(151);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_parsed = (jint(1));
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_skipToTheEnd(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:skipToTheEnd", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(159);
	((func_arc_flabel_FLabel_skipToTheEnd_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_skipToTheEnd_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_skipToTheEnd_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:skipToTheEnd", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(169);
	((func_arc_flabel_FLabel_skipToTheEnd_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_skipToTheEnd_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_skipToTheEnd_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:skipToTheEnd", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(180);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_skipping = (jint(1));
	LINE_NUMBER(181);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ignoringEvents = (frame[1].i);
	LINE_NUMBER(182);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ignoringEffects = (frame[2].i);
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_cancelSkipping(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:cancelSkipping", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_skipping) == 0) goto label_1;
	}
	{
	LINE_NUMBER(191);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_skipping = (jint(0));
	LINE_NUMBER(192);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ignoringEvents = (jint(0));
	LINE_NUMBER(193);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ignoringEffects = (jint(0));
	}
label_1:;
	LINE_NUMBER(195);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_flabel_FLabel_isPaused_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:isPaused", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return ((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_paused);
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_pause(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:pause", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_paused = (jint(1));
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_resume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:resume", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(209);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_paused = (jint(0));
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_flabel_FLabel_hasEnded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:hasEnded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return ((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ended);
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:restart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(222);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_flabel_FLabel_getOriginalText_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getOriginalText_R_java_lang_StringBuilder])(ctx, (frame[0].o));
	((func_arc_flabel_FLabel_restart_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_flabel_FLabel_restart_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_restart_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:restart", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq(ctx, sp[0].o);
	LINE_NUMBER(232);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(233);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphRunCapacities;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(234);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_offsetCache;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(235);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_layoutLineBreaks;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(236);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_activeEffects;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(239);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_textSpeed = (clinit_arc_flabel_FConfig(ctx), (jfloat)SF_arc_flabel_FConfig_defaultSpeedPerChar);
	LINE_NUMBER(240);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_charCooldown = ((jfloat)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_textSpeed);
	LINE_NUMBER(241);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_rawCharIndex = (-2);
	LINE_NUMBER(242);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharIndex = (jint(-1));
	LINE_NUMBER(243);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharCompensation = (jint(0));
	LINE_NUMBER(244);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_cachedGlyphCharIndex = (jint(-1));
	LINE_NUMBER(245);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_lastLayoutX = (jfloat(0));
	LINE_NUMBER(246);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_lastLayoutY = (jfloat(0));
	LINE_NUMBER(247);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_parsed = (jint(0));
	LINE_NUMBER(248);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_paused = (jint(0));
	LINE_NUMBER(249);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ended = (jint(0));
	LINE_NUMBER(250);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_skipping = (jint(0));
	LINE_NUMBER(251);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ignoringEvents = (jint(0));
	LINE_NUMBER(252);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ignoringEffects = (jint(0));
	LINE_NUMBER(255);
	((func_arc_flabel_FLabel_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_setText_java_lang_CharSequence])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(256);
	((func_arc_flabel_FLabel_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(259);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_tokenEntries;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(260);
	((func_arc_flabel_FLabel_parseTokens) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_parseTokens])(ctx, (frame[0].o));
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_flabel_FLabel_getVariables_R_arc_struct_ObjectMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:getVariables", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_variables;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_setVariable_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:setVariable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_variables;
	sp[1].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_setVariables_arc_struct_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:setVariables", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_variables;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(276);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_arc_flabel_FLabel_invoke_arc_func_Cons2_0(ctx);
		auto proxy = (arc_flabel_FLabel_invoke_arc_func_Cons2_0 *) gcAlloc(ctx, &class_arc_flabel_FLabel_invoke_arc_func_Cons2_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_clearVariables(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:clearVariables", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_variables;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:act", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(286);
	M_arc_scene_Element_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(289);
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_parsed) != 0) goto label_2;
	}
	{
	LINE_NUMBER(290);
	((func_arc_flabel_FLabel_parseTokens) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_parseTokens])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(294);
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_skipping) != 0) goto label_4;
	}
	{
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ended) != 0) goto label_5;
	}
	{
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_paused) != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(295);
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_skipping) != 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = ((jfloat)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_charCooldown) - (frame[1].f);
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_charCooldown = temp0;
	if ((floatCompare(temp0, (jfloat(0)), 1)) >= 0) goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(296);
	M_arc_flabel_FLabel_processCharProgression(ctx, (frame[0].o));
	}
label_5:;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_activeEffects;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(302);
	frame[2].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_arc_flabel_FGlyph, sp[0].o));
	LINE_NUMBER(304);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_offsetCache;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, ((frame[2].i) * (jint(2))));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = temp0;
	LINE_NUMBER(305);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_offsetCache;
	jint temp1 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[1].o, (((frame[2].i) * (jint(2))) + (jint(1))));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = temp1;
	LINE_NUMBER(302);
	INST_IINC(2, 1);
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(310);
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ignoringEffects) != 0) goto label_14;
	}
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_activeEffects;
	frame[2].i = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_16:;
	INST_ILOAD(2);
	if ((--sp)->i < 0) goto label_14;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_activeEffects;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].o = (checkCast(ctx, &class_arc_flabel_FEffect, sp[0].o));
	LINE_NUMBER(313);
	((func_arc_flabel_FEffect_update_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_flabel_FEffect_update_float])(ctx, (frame[3].o), (frame[1].f));
	LINE_NUMBER(314);
	frame[4].i = ((jint)((arc_flabel_FEffect *) NULL_CHECK((frame[3].o)))->F_indexStart);
	LINE_NUMBER(315);
	if (((jint)((arc_flabel_FEffect *) NULL_CHECK((frame[3].o)))->F_indexEnd) < 0) goto label_21;
	}
	{
	jint temp0 = (jint)((arc_flabel_FEffect *) NULL_CHECK((frame[3].o)))->F_indexEnd;
	sp[0].i = temp0;
	sp += 1;
	goto label_22;
	}
label_21:;
	INST_ALOAD(0);
	sp[-1].i = ((arc_flabel_FLabel *) NULL_CHECK(sp[-1].o))->F_glyphCharIndex;
label_22:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(318);
	jint temp0 = (jint)((func_arc_flabel_FEffect_isFinished_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_flabel_FEffect_isFinished_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_24;
	}
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_activeEffects;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(320);
	goto label_27;
	}
label_24:;
	{
	LINE_NUMBER(324);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(0)), (frame[4].i));
	frame[6].i = temp0;
	}
label_28:;
	{
	if ((frame[6].i) > ((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharIndex)) goto label_27;
	}
	{
	if ((frame[6].i) > (frame[5].i)) goto label_27;
	}
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_27;
	}
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[7].o = (checkCast(ctx, &class_arc_flabel_FGlyph, sp[0].o));
	LINE_NUMBER(326);
	((func_arc_flabel_FEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_flabel_FEffect_apply_arc_flabel_FLabel_arc_flabel_FGlyph_int_float])(ctx, (frame[3].o), (frame[0].o), (frame[7].o), (frame[6].i), (frame[1].f));
	LINE_NUMBER(324);
	INST_IINC(6, 1);
	goto label_28;
	}
label_27:;
	{
	LINE_NUMBER(311);
	INST_IINC(2, -1);
	goto label_16;
	}
label_14:;
	LINE_NUMBER(330);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_processCharProgression(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:processCharProgression", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(335);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(338);
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_skipping) != 0) goto label_2;
	}
	{
	if ((floatCompare(((jfloat)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_charCooldown), (jfloat(0)), 1)) >= 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(340);
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharCompensation) == 0) goto label_4;
	}
	{
	LINE_NUMBER(341);
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharCompensation) <= 0) goto label_6;
	}
	{
	LINE_NUMBER(342);
	sp[0].o = frame[0].o;
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharIndex = (((jint)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharIndex) + (jint(1)));
	LINE_NUMBER(343);
	sp[0].o = frame[0].o;
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharCompensation = (((jint)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharCompensation) - (jint(1)));
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(345);
	sp[0].o = frame[0].o;
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharIndex = (((jint)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharIndex) - (jint(1)));
	LINE_NUMBER(346);
	sp[0].o = frame[0].o;
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharCompensation = (((jint)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharCompensation) + (jint(1)));
	}
label_9:;
	{
	LINE_NUMBER(350);
	sp[0].o = frame[0].o;
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_charCooldown = (((jfloat)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_charCooldown) + ((jfloat)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_textSpeed));
	LINE_NUMBER(351);
	goto label_1;
	}
label_4:;
	{
	LINE_NUMBER(355);
	sp[0].o = frame[0].o;
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_rawCharIndex = (((jint)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_rawCharIndex) + (jint(1)));
	LINE_NUMBER(358);
	jint temp0 = ((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharIndex) + (jint(1));
	jint temp1 = jint(0);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	jint temp2 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp0, temp1, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))));
	frame[2].i = temp2;
	LINE_NUMBER(359);
	frame[3].i = (jint(0));
	LINE_NUMBER(360);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	frame[3].i = (jchar(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((checkCast(ctx, &class_arc_flabel_FGlyph, sp[0].o))))->F_id)));
	LINE_NUMBER(362);
	clinit_arc_flabel_FConfig(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FConfig_intervalMultipliersByChar;
	sp[1].o = (jobject)SM_java_lang_Character_valueOf_char_R_java_lang_Character(ctx, (frame[3].i));
	jfloat temp0 = (jfloat)((func_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_get_java_lang_Object_float_R_float])(ctx, sp[0].o, sp[1].o, (jfloat(1)));
	frame[4].f = temp0;
	LINE_NUMBER(363);
	sp[0].o = frame[0].o;
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_charCooldown = (((jfloat)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_charCooldown) + (((jfloat)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_textSpeed) * (frame[4].f)));
	}
label_15:;
	{
	LINE_NUMBER(367);
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getText_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getText_R_java_lang_StringBuilder])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(368);
	if ((frame[4].i) == 0) goto label_20;
	}
	{
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_rawCharIndex) < (frame[4].i)) goto label_21;
	}
label_20:;
	{
	LINE_NUMBER(369);
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ended) != 0) goto label_22;
	}
	{
	LINE_NUMBER(370);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ended = (jint(1));
	LINE_NUMBER(371);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_skipping = (jint(0));
	LINE_NUMBER(372);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_listener;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_arc_flabel_FListener_end) resolveInterfaceMethod(ctx, &class_arc_flabel_FListener, INDEX_arc_flabel_FListener_end, sp[0].o))(ctx, sp[0].o);
	}
label_22:;
	LINE_NUMBER(374);
	popStackFrame(ctx);
	INST_RETURN();
label_21:;
	{
	LINE_NUMBER(378);
	frame[5].i = (jint(0));
	LINE_NUMBER(379);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_layoutLineBreaks;
	jint temp0 = (jint)((func_arc_struct_IntSeq_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_contains_int_R_boolean])(ctx, sp[0].o, ((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharIndex));
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_layoutLineBreaks;
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, sp[0].o, ((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharIndex));
	LINE_NUMBER(381);
	frame[5].i = (jint(1));
	}
label_27:;
	{
	LINE_NUMBER(385);
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_rawCharIndex) < 0) goto label_30;
	}
	{
	if ((frame[3].i) == (10)) goto label_30;
	}
	INST_ILOAD(5);
	if ((--sp)->i != 0) goto label_30;
	{
	sp[0].o = frame[0].o;
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharIndex = (((jint)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharIndex) + (jint(1)));
	}
label_30:;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_tokenEntries;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_31;
	}
	{
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_tokenEntries;
	sp[0].o = (jobject)((func_arc_struct_Seq_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_peek_R_java_lang_Object])(ctx, sp[0].o);
	if (((jint)((arc_flabel_FParser$TokenEntry *) NULL_CHECK((checkCast(ctx, &class_arc_flabel_FParser$TokenEntry, sp[0].o))))->F_index) != ((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_rawCharIndex)) goto label_31;
	}
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_tokenEntries;
	sp[0].o = (jobject)((func_arc_struct_Seq_pop_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_pop_R_java_lang_Object])(ctx, sp[0].o);
	frame[6].o = (checkCast(ctx, &class_arc_flabel_FParser$TokenEntry, sp[0].o));
	LINE_NUMBER(390);
	sp[0].o = (jobject)((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[6].o)))->F_token;
	frame[7].o = sp[0].o;
	LINE_NUMBER(391);
	sp[0].o = (jobject)((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[6].o)))->F_category;
	frame[8].o = sp[0].o;
	LINE_NUMBER(394);
	clinit_arc_flabel_FLabel$1(ctx);
	sp[0].o = (jobject)SF_arc_flabel_FLabel$1_$SwitchMap$arc$flabel$FParser$TokenCategory;
	jint temp0 = (jint)((func_arc_flabel_FParser$TokenCategory_ordinal_R_int) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_flabel_FParser$TokenCategory_ordinal_R_int])(ctx, (frame[8].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_36;
		case 2: goto label_37;
		case 3: goto label_38;
		case 4: goto label_39;
		case 5: goto label_40;
		case 6: goto label_40;
		default: goto label_41;
	}
	}
label_36:;
	{
	LINE_NUMBER(396);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_textSpeed = ((jfloat)((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[6].o)))->F_floatValue);
	LINE_NUMBER(397);
	goto label_30;
	}
label_37:;
	{
	LINE_NUMBER(399);
	sp[0].o = frame[0].o;
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharIndex = (((jint)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharIndex) - (jint(1)));
	LINE_NUMBER(400);
	sp[0].o = frame[0].o;
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharCompensation = (((jint)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_glyphCharCompensation) + (jint(1)));
	LINE_NUMBER(401);
	sp[0].o = frame[0].o;
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_charCooldown = (((jfloat)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_charCooldown) + ((jfloat)((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[6].o)))->F_floatValue));
	LINE_NUMBER(402);
	goto label_30;
	}
label_38:;
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[6].o)))->F_stringValue;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(405);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_rawCharIndex;
	sp[1].o = (jobject)((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[6].o)))->F_stringValue;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_rawCharIndex = (temp0 + temp1);
	goto label_30;
	}
label_39:;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_listener;
	if (sp[0].o == nullptr) goto label_30;
	}
	{
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_ignoringEvents) != 0) goto label_30;
	}
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_listener;
	sp[1].o = (jobject)((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[6].o)))->F_stringValue;
	((func_arc_flabel_FListener_event_java_lang_String) resolveInterfaceMethod(ctx, &class_arc_flabel_FListener, INDEX_arc_flabel_FListener_event_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o);
	goto label_30;
	}
label_40:;
	{
	LINE_NUMBER(416);
	sp[0].o = frame[8].o;
	clinit_arc_flabel_FParser$TokenCategory(ctx);
	sp[1].o = (jobject)SF_arc_flabel_FParser$TokenCategory_effectStart;
	if (sp[0].o != sp[1].o) goto label_48;
	}
	INST_ICONST(1);
	goto label_49;
label_48:;
	INST_ICONST(0);
label_49:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(419);
	frame[10].i = (jint(0));
	}
label_51:;
	{
	jint temp0 = frame[10].i;
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_activeEffects;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_52;
	}
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_activeEffects;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[10].i));
	frame[11].o = (checkCast(ctx, &class_arc_flabel_FEffect, sp[0].o));
	LINE_NUMBER(421);
	if (((jint)((arc_flabel_FEffect *) NULL_CHECK((frame[11].o)))->F_indexEnd) >= 0) goto label_55;
	}
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((arc_flabel_FEffect *) NULL_CHECK((frame[11].o)))->F_endToken;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[7].o));
	if (temp0 == 0) goto label_55;
	}
	{
	LINE_NUMBER(423);
	((arc_flabel_FEffect *) NULL_CHECK((frame[11].o)))->F_indexEnd = (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharIndex) - (jint(1)));
	}
label_55:;
	{
	LINE_NUMBER(419);
	INST_IINC(10, 1);
	goto label_51;
	}
label_52:;
	{
	LINE_NUMBER(429);
	if ((frame[9].i) == 0) goto label_30;
	}
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[6].o)))->F_effect;
	((arc_flabel_FEffect *) NULL_CHECK(sp[0].o))->F_indexStart = ((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharIndex);
	LINE_NUMBER(431);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_activeEffects;
	sp[1].o = (jobject)((arc_flabel_FParser$TokenEntry *) NULL_CHECK((frame[6].o)))->F_effect;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_30;
	}
label_41:;
	LINE_NUMBER(436);
	goto label_30;
label_31:;
	{
	LINE_NUMBER(439);
	INST_IINC(1, 1);
	LINE_NUMBER(442);
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharIndex) != (jint(-1))) goto label_61;
	}
	{
	LINE_NUMBER(443);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_charCooldown = ((jfloat)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_textSpeed);
	LINE_NUMBER(444);
	goto label_3;
	}
label_61:;
	{
	LINE_NUMBER(448);
	INST_IINC(1, 1);
	LINE_NUMBER(449);
	frame[6].i = (clinit_arc_flabel_FConfig(ctx), (jint)SF_arc_flabel_FConfig_charLimitPerFrame);
	LINE_NUMBER(450);
	if (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_skipping) != 0) goto label_66;
	}
	INST_ILOAD(6);
	if ((--sp)->i <= 0) goto label_66;
	{
	if ((frame[1].i) <= (frame[6].i)) goto label_66;
	}
	{
	LINE_NUMBER(451);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_charCooldown = ((jfloat)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_textSpeed);
	LINE_NUMBER(452);
	goto label_3;
	}
label_66:;
	LINE_NUMBER(454);
	goto label_1;
label_3:;
	LINE_NUMBER(455);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_flabel_FLabel_remove_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:remove", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(459);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq(ctx, sp[0].o);
	LINE_NUMBER(460);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(461);
	jint temp0 = (jint)M_arc_scene_Element_remove_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[28];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:layout", 28 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(467);
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(468);
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getText_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getText_R_java_lang_StringBuilder])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(469);
	sp[0].o = (jobject)M_arc_scene_ui_Label_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(470);
	jint temp0 = (jint)((func_arc_flabel_FLabel_getLineAlign_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getLineAlign_R_int])(ctx, (frame[0].o));
	frame[4].i = temp0;
	LINE_NUMBER(471);
	jint temp1 = (jint)((func_arc_flabel_FLabel_getLabelAlign_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getLabelAlign_R_int])(ctx, (frame[0].o));
	frame[5].i = temp1;
	LINE_NUMBER(472);
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getStyle_R_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getStyle_R_arc_scene_ui_Label$LabelStyle])(ctx, (frame[0].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(474);
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font])(ctx, (frame[1].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(475);
	jfloat temp2 = (jfloat)((func_arc_graphics_g2d_Font_getScaleX_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getScaleX_R_float])(ctx, (frame[7].o));
	frame[8].f = temp2;
	LINE_NUMBER(476);
	jfloat temp3 = (jfloat)((func_arc_graphics_g2d_Font_getScaleY_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getScaleY_R_float])(ctx, (frame[7].o));
	frame[9].f = temp3;
	LINE_NUMBER(477);
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[7].o));
	jfloat temp0 = (jfloat)((func_arc_flabel_FLabel_getFontScaleX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getFontScaleX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_flabel_FLabel_getFontScaleY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getFontScaleY_R_float])(ctx, (frame[0].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float_float])(ctx, sp[0].o, temp0, temp1);
	}
label_10:;
	{
	LINE_NUMBER(479);
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrap) == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis;
	if (sp[0].o != nullptr) goto label_11;
	}
	INST_ICONST(1);
	goto label_12;
label_11:;
	INST_ICONST(0);
label_12:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(480);
	if ((frame[10].i) == 0) goto label_14;
	}
	{
	LINE_NUMBER(481);
	jfloat temp0 = (jfloat)((func_arc_flabel_FLabel_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getPrefHeight_R_float])(ctx, (frame[0].o));
	frame[11].f = temp0;
	LINE_NUMBER(482);
	if ((floatCompare((frame[11].f), ((jfloat)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_lastPrefHeight), -1)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(483);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_lastPrefHeight = (frame[11].f);
	LINE_NUMBER(484);
	((func_arc_flabel_FLabel_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_invalidateHierarchy])(ctx, (frame[0].o));
	}
label_14:;
	{
	LINE_NUMBER(488);
	jfloat temp0 = (jfloat)((func_arc_flabel_FLabel_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getWidth_R_float])(ctx, (frame[0].o));
	frame[11].f = temp0;
	jfloat temp1 = (jfloat)((func_arc_flabel_FLabel_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getHeight_R_float])(ctx, (frame[0].o));
	frame[12].f = temp1;
	LINE_NUMBER(489);
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK((frame[6].o)))->F_background;
	frame[13].o = sp[0].o;
	LINE_NUMBER(490);
	frame[14].f = (jfloat(0));
	frame[15].f = (jfloat(0));
	LINE_NUMBER(491);
	if ((frame[13].o) == nullptr) goto label_24;
	}
	{
	LINE_NUMBER(492);
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].f = temp0;
	LINE_NUMBER(493);
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, (frame[13].o)))(ctx, (frame[13].o));
	frame[15].f = temp1;
	LINE_NUMBER(494);
	jfloat temp2 = frame[11].f;
	jfloat temp3 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, (frame[13].o)))(ctx, (frame[13].o));
	jfloat temp4 = (jfloat)((func_arc_scene_style_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getRightWidth_R_float, (frame[13].o)))(ctx, (frame[13].o));
	frame[11].f = (temp2 - (temp3 + temp4));
	LINE_NUMBER(495);
	jfloat temp5 = frame[12].f;
	jfloat temp6 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, (frame[13].o)))(ctx, (frame[13].o));
	jfloat temp7 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, (frame[13].o)))(ctx, (frame[13].o));
	frame[12].f = (temp5 - (temp6 + temp7));
	}
label_24:;
	{
	LINE_NUMBER(502);
	sp[0].o = frame[3].o;
	sp[1].o = frame[7].o;
	sp[2].o = frame[2].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	clinit_arc_graphics_Color(ctx);
	sp[3].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp2 = frame[11].f;
	jint temp3 = frame[4].i;
	jint temp4 = frame[10].i;
	sp[4].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, sp[3].o, temp2, temp3, temp4, sp[4].o);
	LINE_NUMBER(503);
	frame[16].f = ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[3].o)))->F_width);
	LINE_NUMBER(504);
	frame[17].f = ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[3].o)))->F_height);
	LINE_NUMBER(506);
	if (((frame[5].i) & (8)) != 0) goto label_32;
	}
	{
	LINE_NUMBER(507);
	if (((frame[5].i) & (16)) == 0) goto label_34;
	}
	{
	LINE_NUMBER(508);
	frame[14].f = ((frame[14].f) + ((frame[11].f) - (frame[16].f)));
	goto label_32;
	}
label_34:;
	{
	LINE_NUMBER(510);
	frame[14].f = ((frame[14].f) + (((frame[11].f) - (frame[16].f)) / (jfloat(2))));
	}
label_32:;
	{
	LINE_NUMBER(517);
	if (((frame[5].i) & (jint(2))) == 0) goto label_36;
	}
	{
	LINE_NUMBER(518);
	jfloat temp0 = frame[15].f;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_graphics_g2d_Font_isFlipped_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_isFlipped_R_boolean])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == 0) goto label_38;
	}
	INST_FCONST(0);
	goto label_39;
label_38:;
	{
	jfloat temp0 = (frame[12].f) - (frame[17].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_39:;
	{
	sp -= 2;
	frame[15].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(519);
	jfloat temp0 = frame[15].f;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK((frame[6].o)))->F_font;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_Font_getDescent_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getDescent_R_float])(ctx, sp[0].o);
	frame[15].f = (temp0 + temp1);
	goto label_41;
	}
label_36:;
	{
	LINE_NUMBER(520);
	if (((frame[5].i) & (jint(4))) == 0) goto label_42;
	}
	{
	LINE_NUMBER(521);
	jfloat temp0 = frame[15].f;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_arc_graphics_g2d_Font_isFlipped_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_isFlipped_R_boolean])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == 0) goto label_44;
	}
	{
	jfloat temp0 = (frame[12].f) - (frame[17].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_45;
	}
label_44:;
	INST_FCONST(0);
label_45:;
	{
	sp -= 2;
	frame[15].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(522);
	jfloat temp0 = frame[15].f;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK((frame[6].o)))->F_font;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_Font_getDescent_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getDescent_R_float])(ctx, sp[0].o);
	frame[15].f = (temp0 - temp1);
	goto label_41;
	}
label_42:;
	{
	LINE_NUMBER(524);
	frame[15].f = ((frame[15].f) + (((frame[12].f) - (frame[17].f)) / (jfloat(2))));
	}
label_41:;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_arc_graphics_g2d_Font_isFlipped_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_isFlipped_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_47;
	}
	{
	frame[15].f = ((frame[15].f) + (frame[17].f));
	}
label_47:;
	{
	LINE_NUMBER(531);
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged) == 0) goto label_48;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[7].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float_float])(ctx, sp[0].o, (frame[8].f), (frame[9].f));
	}
label_48:;
	{
	LINE_NUMBER(536);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_lastLayoutX = (frame[14].f);
	LINE_NUMBER(537);
	((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_lastLayoutY = (frame[15].f);
	LINE_NUMBER(540);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq(ctx, sp[0].o);
	LINE_NUMBER(541);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(542);
	M_arc_flabel_FLabel_layoutCache(ctx, (frame[0].o));
	LINE_NUMBER(543);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_layoutCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:layoutCache", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(551);
	sp[0].o = (jobject)M_arc_scene_ui_Label_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(552);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[2].o)))->F_runs;
	frame[3].o = sp[0].o;
	LINE_NUMBER(555);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_layoutLineBreaks;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(558);
	frame[4].i = (jint(0));
	LINE_NUMBER(559);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphRunCapacities;
	sp[0].o = (jobject)((func_arc_struct_IntSeq_setSize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_setSize_int_R_Array1_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size));
	LINE_NUMBER(560);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[5].i));
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o))))->F_glyphs;
	frame[6].o = sp[0].o;
	LINE_NUMBER(562);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphRunCapacities;
	((func_arc_struct_IntSeq_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_set_int_int])(ctx, sp[0].o, (frame[5].i), ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size));
	LINE_NUMBER(563);
	frame[4].i = ((frame[4].i) + ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size));
	LINE_NUMBER(560);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(567);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) >= (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	sp[0].o = (jobject)((func_arc_struct_Seq_setSize_int_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_setSize_int_R_Array1_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	LINE_NUMBER(569);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_offsetCache;
	sp[0].o = (jobject)((func_arc_struct_IntSeq_setSize_int_R_Array1_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_setSize_int_R_Array1_int])(ctx, sp[0].o, ((frame[4].i) * (jint(2))));
	}
label_13:;
	{
	LINE_NUMBER(573);
	frame[5].i = (jint(-1));
	LINE_NUMBER(574);
	frame[6].f = (jfloat(0));
	LINE_NUMBER(575);
	frame[7].i = (jint(0));
	}
label_18:;
	{
	if ((frame[7].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_19;
	}
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o));
	LINE_NUMBER(577);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[8].o)))->F_glyphs;
	frame[9].o = sp[0].o;
	LINE_NUMBER(578);
	frame[10].i = (jint(0));
	}
label_23:;
	{
	if ((frame[10].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[9].o)))->F_size)) goto label_24;
	}
	{
	LINE_NUMBER(581);
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[8].o)))->F_y), (frame[6].f));
	if (temp0 != 0) goto label_26;
	}
	{
	LINE_NUMBER(582);
	frame[6].f = ((jfloat)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((frame[8].o)))->F_y);
	LINE_NUMBER(583);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_layoutLineBreaks;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[5].i));
	}
label_26:;
	{
	LINE_NUMBER(587);
	INST_IINC(5, 1);
	LINE_NUMBER(590);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[9].o), (frame[10].i));
	frame[11].o = (checkCast(ctx, &class_arc_graphics_g2d_Font$Glyph, sp[0].o));
	LINE_NUMBER(593);
	frame[12].o = (jobject(nullptr));
	LINE_NUMBER(594);
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_32;
	}
	{
	LINE_NUMBER(595);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	frame[12].o = (checkCast(ctx, &class_arc_flabel_FGlyph, sp[0].o));
	}
label_32:;
	{
	LINE_NUMBER(597);
	if ((frame[12].o) != nullptr) goto label_34;
	}
	{
	LINE_NUMBER(598);
	sp[0].o = ((jobject) &class_arc_flabel_FGlyph);
	{ /* InvokeDynamic */
		clinit_arc_flabel_FLabel_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_flabel_FLabel_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_flabel_FLabel_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[12].o = (checkCast(ctx, &class_arc_flabel_FGlyph, sp[0].o));
	LINE_NUMBER(599);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, sp[0].o, (frame[5].i), (frame[12].o));
	}
label_34:;
	{
	LINE_NUMBER(601);
	((func_arc_flabel_FGlyph_set_arc_graphics_g2d_Font$Glyph) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_flabel_FGlyph_set_arc_graphics_g2d_Font$Glyph])(ctx, (frame[12].o), (frame[11].o));
	LINE_NUMBER(602);
	sp[0].o = frame[12].o;
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_width));
	jfloat temp1 = (jfloat)((func_arc_flabel_FLabel_getFontScaleX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getFontScaleX_R_float])(ctx, (frame[0].o));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_width = (jint((temp0 * temp1)));
	LINE_NUMBER(603);
	sp[0].o = frame[12].o;
	jfloat temp2 = jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_height));
	jfloat temp3 = (jfloat)((func_arc_flabel_FLabel_getFontScaleY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getFontScaleY_R_float])(ctx, (frame[0].o));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_height = (jint((temp2 * temp3)));
	LINE_NUMBER(604);
	sp[0].o = frame[12].o;
	jfloat temp4 = jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset));
	jfloat temp5 = (jfloat)((func_arc_flabel_FLabel_getFontScaleX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getFontScaleX_R_float])(ctx, (frame[0].o));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_xoffset = (jint((temp4 * temp5)));
	LINE_NUMBER(605);
	sp[0].o = frame[12].o;
	jfloat temp6 = jfloat(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset));
	jfloat temp7 = (jfloat)((func_arc_flabel_FLabel_getFontScaleY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getFontScaleY_R_float])(ctx, (frame[0].o));
	((arc_graphics_g2d_Font$Glyph *) NULL_CHECK(sp[0].o))->F_yoffset = (jint((temp6 * temp7)));
	LINE_NUMBER(606);
	((arc_flabel_FGlyph *) NULL_CHECK((frame[12].o)))->F_run = (jref) (frame[8].o);
	LINE_NUMBER(609);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_offsetCache;
	((func_arc_struct_IntSeq_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_set_int_int])(ctx, sp[0].o, ((frame[5].i) * (jint(2))), ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[12].o)))->F_xoffset));
	LINE_NUMBER(610);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_offsetCache;
	((func_arc_struct_IntSeq_set_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_set_int_int])(ctx, sp[0].o, (((frame[5].i) * (jint(2))) + (jint(1))), ((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[12].o)))->F_yoffset));
	LINE_NUMBER(613);
	((func_arc_struct_Seq_set_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_set_int_java_lang_Object])(ctx, (frame[9].o), (frame[10].i), (frame[12].o));
	LINE_NUMBER(578);
	INST_IINC(10, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(575);
	INST_IINC(7, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(618);
	frame[7].i = ((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharIndex);
	LINE_NUMBER(619);
	frame[8].i = (jint(0));
	}
label_47:;
	{
	if ((frame[8].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size)) goto label_48;
	}
	{
	LINE_NUMBER(620);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[8].i));
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o))))->F_glyphs;
	frame[9].o = sp[0].o;
	LINE_NUMBER(621);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[9].o)))->F_size) >= (frame[7].i)) goto label_51;
	}
	{
	LINE_NUMBER(622);
	frame[7].i = ((frame[7].i) - ((jint)((arc_struct_Seq *) NULL_CHECK((frame[9].o)))->F_size));
	LINE_NUMBER(623);
	goto label_54;
	}
label_51:;
	{
	LINE_NUMBER(626);
	frame[10].i = (jint(0));
	}
label_55:;
	{
	if ((frame[10].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[9].o)))->F_size)) goto label_54;
	}
	{
	LINE_NUMBER(627);
	if ((frame[7].i) >= 0) goto label_57;
	}
	{
	LINE_NUMBER(628);
	((func_arc_struct_Seq_removeRange_int_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Seq_removeRange_int_int])(ctx, (frame[9].o), (frame[10].i), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[9].o)))->F_size) - (jint(1))));
	LINE_NUMBER(629);
	goto label_54;
	}
label_57:;
	{
	LINE_NUMBER(631);
	INST_IINC(7, -1);
	LINE_NUMBER(626);
	INST_IINC(10, 1);
	goto label_55;
	}
label_54:;
	{
	LINE_NUMBER(619);
	INST_IINC(8, 1);
	goto label_47;
	}
label_48:;
	{
	LINE_NUMBER(636);
	((func_arc_graphics_g2d_FontCache_setText_arc_graphics_g2d_GlyphLayout_float_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_FontCache_setText_arc_graphics_g2d_GlyphLayout_float_float])(ctx, (frame[1].o), (frame[2].o), ((jfloat)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_lastLayoutX), ((jfloat)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_lastLayoutY));
	LINE_NUMBER(637);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_addMissingGlyphs(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:addMissingGlyphs", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(642);
	frame[1].i = (((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCharIndex) - ((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_cachedGlyphCharIndex));
	LINE_NUMBER(643);
	if ((frame[1].i) >= (jint(1))) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(646);
	sp[0].o = (jobject)M_arc_scene_ui_Label_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(647);
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[2].o)))->F_runs;
	frame[3].o = sp[0].o;
	LINE_NUMBER(650);
	frame[4].i = (jint(0));
	LINE_NUMBER(651);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphRunCapacities;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(652);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphRunCapacities;
	jint temp0 = (jint)((func_arc_struct_IntSeq_get_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_get_int_R_int])(ctx, sp[0].o, (frame[5].i));
	frame[6].i = temp0;
	LINE_NUMBER(653);
	if (((frame[4].i) + (frame[6].i)) >= ((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_cachedGlyphCharIndex)) goto label_10;
	}
	{
	LINE_NUMBER(654);
	frame[4].i = ((frame[4].i) + (frame[6].i));
	LINE_NUMBER(655);
	goto label_13;
	}
label_10:;
	{
	LINE_NUMBER(659);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[5].i));
	sp[0].o = (jobject)((arc_graphics_g2d_GlyphLayout$GlyphRun *) NULL_CHECK((checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout$GlyphRun, sp[0].o))))->F_glyphs;
	frame[7].o = sp[0].o;
	LINE_NUMBER(660);
	frame[4].i = ((frame[4].i) + ((jint)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size));
	}
label_15:;
	{
	LINE_NUMBER(663);
	if ((frame[1].i) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(666);
	frame[8].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[7].o)))->F_size);
	LINE_NUMBER(667);
	if ((frame[6].i) != (frame[8].i)) goto label_18;
	}
	LINE_NUMBER(668);
	goto label_13;
label_18:;
	{
	LINE_NUMBER(672);
	sp[0].o = frame[0].o;
	((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_cachedGlyphCharIndex = (((jint)((arc_flabel_FLabel *) NULL_CHECK(sp[0].o))->F_cachedGlyphCharIndex) + (jint(1)));
	LINE_NUMBER(673);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_cachedGlyphCharIndex));
	frame[9].o = (checkCast(ctx, &class_arc_flabel_FGlyph, sp[0].o));
	LINE_NUMBER(674);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[7].o), (frame[9].o));
	LINE_NUMBER(677);
	((arc_flabel_FGlyph *) NULL_CHECK((frame[9].o)))->F_internalIndex = (frame[4].i);
	LINE_NUMBER(680);
	INST_IINC(4, 1);
	LINE_NUMBER(681);
	INST_IINC(1, -1);
	LINE_NUMBER(684);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_listener;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(685);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_listener;
	((func_arc_flabel_FListener_onChar_char) resolveInterfaceMethod(ctx, &class_arc_flabel_FListener, INDEX_arc_flabel_FListener_onChar_char, sp[0].o))(ctx, sp[0].o, (jchar(((jint)((arc_graphics_g2d_Font$Glyph *) NULL_CHECK((frame[9].o)))->F_id))));
	}
label_26:;
	LINE_NUMBER(687);
	goto label_15;
label_13:;
	{
	LINE_NUMBER(651);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(689);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(693);
	M_arc_scene_Element_validate(ctx, (frame[0].o));
	LINE_NUMBER(694);
	M_arc_flabel_FLabel_addMissingGlyphs(ctx, (frame[0].o));
	LINE_NUMBER(697);
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(698);
	sp[0].o = (jobject)((func_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getFontCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_flabel_FLabel_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_flabel_FLabel_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout])(ctx, (frame[0].o));
	((func_arc_graphics_g2d_FontCache_setText_arc_graphics_g2d_GlyphLayout_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setText_arc_graphics_g2d_GlyphLayout_float_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_lastLayoutX), ((jfloat)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_lastLayoutY));
	LINE_NUMBER(701);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_glyphCache;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_flabel_FGlyph, sp[0].o));
	LINE_NUMBER(702);
	if (((jint)((arc_flabel_FGlyph *) NULL_CHECK((frame[3].o)))->F_internalIndex) < 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_flabel_FGlyph *) NULL_CHECK((frame[3].o)))->F_color;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(703);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_flabel_FGlyph *) NULL_CHECK((frame[3].o)))->F_color;
	((func_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setColors_arc_graphics_Color_int_int])(ctx, sp[0].o, sp[1].o, ((jint)((arc_flabel_FGlyph *) NULL_CHECK((frame[3].o)))->F_internalIndex), (((jint)((arc_flabel_FGlyph *) NULL_CHECK((frame[3].o)))->F_internalIndex) + (jint(1))));
	}
label_8:;
	LINE_NUMBER(705);
	goto label_5;
label_6:;
	{
	LINE_NUMBER(707);
	M_arc_scene_ui_Label_draw(ctx, (frame[0].o));
	LINE_NUMBER(708);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_flabel_FLabel_lambda$setVariables$0_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/flabel/FLabel:lambda$setVariables$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((arc_flabel_FLabel *) NULL_CHECK((frame[0].o)))->F_variables;
	sp[1].o = (jobject)((func_java_lang_String_toUpperCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toUpperCase_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_flabel_FLabel[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_ui_Label_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_flabel_FLabel_draw,
	(void *) M_arc_flabel_FLabel_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_flabel_FLabel_remove_R_boolean,
	(void *) M_arc_scene_Element_dragged_arc_func_Floatc2,
	(void *) M_arc_scene_Element_scrolled_arc_func_Floatc,
	(void *) M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addAction_arc_scene_Action,
	(void *) M_arc_scene_Element_actions_Array1_arc_scene_Action,
	(void *) M_arc_scene_Element_removeAction_arc_scene_Action,
	(void *) M_arc_scene_Element_getActions_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_hasActions_R_boolean,
	(void *) M_arc_scene_Element_clearActions,
	(void *) M_arc_scene_Element_clearListeners,
	(void *) M_arc_scene_Element_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Element_setScene_arc_scene_Scene,
	(void *) M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean,
	(void *) M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_hasParent_R_boolean,
	(void *) M_arc_scene_Element_isTouchable_R_boolean,
	(void *) M_arc_scene_Element_getX_int_R_float,
	(void *) M_arc_scene_Element_getY_int_R_float,
	(void *) M_arc_scene_Element_setPosition_float_float,
	(void *) M_arc_scene_Element_setPosition_float_float_int,
	(void *) M_arc_scene_Element_moveBy_float_float,
	(void *) M_arc_scene_Element_getWidth_R_float,
	(void *) M_arc_scene_Element_setWidth_float,
	(void *) M_arc_scene_Element_getHeight_R_float,
	(void *) M_arc_scene_Element_setHeight_float,
	(void *) M_arc_scene_Element_getTop_R_float,
	(void *) M_arc_scene_Element_getRight_R_float,
	(void *) M_arc_scene_Element_sizeChanged,
	(void *) M_arc_scene_Element_rotationChanged,
	(void *) M_arc_scene_Element_setSize_float,
	(void *) M_arc_scene_Element_setSize_float_float,
	(void *) M_arc_scene_Element_sizeBy_float,
	(void *) M_arc_scene_Element_sizeBy_float_float,
	(void *) M_arc_scene_Element_setBounds_float_float_float_float,
	(void *) M_arc_scene_Element_setOrigin_float_float,
	(void *) M_arc_scene_Element_setOrigin_int,
	(void *) M_arc_scene_Element_setScale_float,
	(void *) M_arc_scene_Element_setScale_float_float,
	(void *) M_arc_scene_Element_scaleBy_float,
	(void *) M_arc_scene_Element_scaleBy_float_float,
	(void *) M_arc_scene_Element_getRotation_R_float,
	(void *) M_arc_scene_Element_setRotation_float,
	(void *) M_arc_scene_Element_setRotationOrigin_float_int,
	(void *) M_arc_scene_Element_rotateBy_float,
	(void *) M_arc_scene_Element_setColor_float_float_float_float,
	(void *) M_arc_scene_Element_setColor_arc_graphics_Color,
	(void *) M_arc_scene_Element_toFront,
	(void *) M_arc_scene_Element_toBack,
	(void *) M_arc_scene_Element_getZIndex_R_int,
	(void *) M_arc_scene_Element_setZIndex_int,
	(void *) M_arc_scene_Element_clipBegin_R_boolean,
	(void *) M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean,
	(void *) M_arc_scene_Element_clipEnd,
	(void *) M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_ui_Label_getMinWidth_R_float,
	(void *) M_arc_scene_Element_getMinHeight_R_float,
	(void *) M_arc_scene_ui_Label_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_Label_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_Element_setLayoutEnabled_boolean,
	(void *) M_arc_scene_Element_validate,
	(void *) M_arc_scene_Element_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_Label_invalidate,
	(void *) M_arc_scene_Element_invalidateHierarchy,
	(void *) M_arc_scene_Element_pack,
	(void *) M_arc_scene_Element_setFillParent_boolean,
	(void *) M_arc_flabel_FLabel_layout,
	(void *) M_arc_scene_Element_keepInStage,
	(void *) M_arc_scene_Element_setTranslation_float_float,
	(void *) M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable,
	(void *) M_arc_scene_Element_keyDown_arc_func_Cons,
	(void *) M_arc_scene_Element_fireClick,
	(void *) M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_Element_hovered_java_lang_Runnable,
	(void *) M_arc_scene_Element_exited_java_lang_Runnable,
	(void *) M_arc_scene_Element_released_java_lang_Runnable,
	(void *) M_arc_scene_Element_change,
	(void *) M_arc_scene_Element_changed_java_lang_Runnable,
	(void *) M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element,
	(void *) M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element,
	(void *) M_arc_scene_Element_touchable_arc_func_Prov,
	(void *) M_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle,
	(void *) M_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle,
	(void *) M_arc_scene_ui_Label_setText_arc_func_Prov,
	(void *) M_arc_scene_ui_Label_setTextInternal_java_lang_CharSequence,
	(void *) M_arc_scene_ui_Label_textEquals_java_lang_CharSequence_R_boolean,
	(void *) M_arc_scene_ui_Label_getText_R_java_lang_StringBuilder,
	(void *) M_arc_flabel_FLabel_setText_java_lang_CharSequence,
	(void *) M_arc_scene_ui_Label_scaleAndComputePrefSize,
	(void *) M_arc_scene_ui_Label_computePrefSize,
	(void *) M_arc_scene_ui_Label_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout,
	(void *) M_arc_scene_ui_Label_setWrap_boolean,
	(void *) M_arc_scene_ui_Label_setWrap_boolean_boolean,
	(void *) M_arc_scene_ui_Label_getLabelAlign_R_int,
	(void *) M_arc_scene_ui_Label_getLineAlign_R_int,
	(void *) M_arc_scene_ui_Label_setAlignment_int,
	(void *) M_arc_scene_ui_Label_setAlignment_int_int,
	(void *) M_arc_scene_ui_Label_setFontScale_float,
	(void *) M_arc_scene_ui_Label_setFontScale_float_float,
	(void *) M_arc_scene_ui_Label_getFontScaleX_R_float,
	(void *) M_arc_scene_ui_Label_setFontScaleX_float,
	(void *) M_arc_scene_ui_Label_getFontScaleY_R_float,
	(void *) M_arc_scene_ui_Label_setFontScaleY_float,
	(void *) M_arc_scene_ui_Label_setEllipsis_java_lang_String,
	(void *) M_arc_scene_ui_Label_setEllipsis_boolean,
	(void *) M_arc_scene_ui_Label_getFontCache_R_arc_graphics_g2d_FontCache,
	(void *) M_arc_scene_ui_Label_lambda$setText$0_arc_func_Prov,
	(void *) M_arc_flabel_FLabel_setText_java_lang_CharSequence_boolean,
	(void *) M_arc_flabel_FLabel_getOriginalText_R_java_lang_StringBuilder,
	(void *) M_arc_flabel_FLabel_saveOriginalText,
	(void *) M_arc_flabel_FLabel_restoreOriginalText,
	(void *) M_arc_flabel_FLabel_getTypingListener_R_arc_flabel_FListener,
	(void *) M_arc_flabel_FLabel_setTypingListener_arc_flabel_FListener,
	(void *) M_arc_flabel_FLabel_getClearColor_R_arc_graphics_Color,
	(void *) M_arc_flabel_FLabel_setForceMarkupColor_boolean,
	(void *) M_arc_flabel_FLabel_getDefaultToken_R_java_lang_String,
	(void *) M_arc_flabel_FLabel_setDefaultToken_java_lang_String,
	(void *) M_arc_flabel_FLabel_parseTokens,
	(void *) M_arc_flabel_FLabel_skipToTheEnd,
	(void *) M_arc_flabel_FLabel_skipToTheEnd_boolean,
	(void *) M_arc_flabel_FLabel_skipToTheEnd_boolean_boolean,
	(void *) M_arc_flabel_FLabel_cancelSkipping,
	(void *) M_arc_flabel_FLabel_isPaused_R_boolean,
	(void *) M_arc_flabel_FLabel_pause,
	(void *) M_arc_flabel_FLabel_resume,
	(void *) M_arc_flabel_FLabel_hasEnded_R_boolean,
	(void *) M_arc_flabel_FLabel_restart,
	(void *) M_arc_flabel_FLabel_restart_java_lang_CharSequence,
	(void *) M_arc_flabel_FLabel_getVariables_R_arc_struct_ObjectMap,
	(void *) M_arc_flabel_FLabel_setVariable_java_lang_String_java_lang_String,
	(void *) M_arc_flabel_FLabel_setVariables_arc_struct_ObjectMap,
	(void *) M_arc_flabel_FLabel_clearVariables,
	(void *) M_arc_flabel_FLabel_processCharProgression,
	(void *) M_arc_flabel_FLabel_layoutCache,
	(void *) M_arc_flabel_FLabel_addMissingGlyphs,
	(void *) M_arc_flabel_FLabel_lambda$setVariables$0_java_lang_String_java_lang_String,
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
	{ "draw", "()V" },
	{ "act", "(F)V" },
	{ "updateVisibility", "()V" },
	{ "hasMouse", "()Z" },
	{ "hasKeyboard", "()Z" },
	{ "hasScroll", "()Z" },
	{ "requestKeyboard", "()V" },
	{ "requestScroll", "()V" },
	{ "fire", "(Larc/scene/event/SceneEvent;)Z" },
	{ "notify", "(Larc/scene/event/SceneEvent;Z)Z" },
	{ "hit", "(FFZ)Larc/scene/Element;" },
	{ "remove", "()Z" },
	{ "dragged", "(Larc/func/Floatc2;)V" },
	{ "scrolled", "(Larc/func/Floatc;)V" },
	{ "addListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getListeners", "()Larc/struct/Seq;" },
	{ "addCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getCaptureListeners", "()Larc/struct/Seq;" },
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "actions", "([Larc/scene/Action;)V" },
	{ "removeAction", "(Larc/scene/Action;)V" },
	{ "getActions", "()Larc/struct/Seq;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getScene", "()Larc/scene/Scene;" },
	{ "setScene", "(Larc/scene/Scene;)V" },
	{ "isDescendantOf", "(Larc/func/Boolf;)Z" },
	{ "isDescendantOf", "(Larc/scene/Element;)Z" },
	{ "isAscendantOf", "(Larc/scene/Element;)Z" },
	{ "hasParent", "()Z" },
	{ "isTouchable", "()Z" },
	{ "getX", "(I)F" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "sizeChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(F)V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "setRotationOrigin", "(FI)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "getZIndex", "()I" },
	{ "setZIndex", "(I)V" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "stageToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToStageCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToParentCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToAscendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "parentToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "validate", "()V" },
	{ "needsLayout", "()Z" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "layout", "()V" },
	{ "keepInStage", "()V" },
	{ "setTranslation", "(FF)V" },
	{ "keyDown", "(Larc/input/KeyCode;Ljava/lang/Runnable;)V" },
	{ "keyDown", "(Larc/func/Cons;)V" },
	{ "fireClick", "()V" },
	{ "clicked", "(Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/input/KeyCode;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Larc/func/Cons;)Larc/scene/event/ClickListener;" },
	{ "tapped", "(Ljava/lang/Runnable;)Larc/scene/event/InputListener;" },
	{ "hovered", "(Ljava/lang/Runnable;)V" },
	{ "exited", "(Ljava/lang/Runnable;)V" },
	{ "released", "(Ljava/lang/Runnable;)V" },
	{ "change", "()V" },
	{ "changed", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Ljava/lang/Runnable;)Larc/scene/Element;" },
	{ "visible", "(Larc/func/Boolp;)Larc/scene/Element;" },
	{ "touchable", "(Larc/func/Prov;)V" },
	{ "getStyle", "()Larc/scene/ui/Label$LabelStyle;" },
	{ "setStyle", "(Larc/scene/ui/Label$LabelStyle;)V" },
	{ "setText", "(Larc/func/Prov;)V" },
	{ "setTextInternal", "(Ljava/lang/CharSequence;)V" },
	{ "textEquals", "(Ljava/lang/CharSequence;)Z" },
	{ "getText", "()Ljava/lang/StringBuilder;" },
	{ "setText", "(Ljava/lang/CharSequence;)V" },
	{ "scaleAndComputePrefSize", "()V" },
	{ "computePrefSize", "()V" },
	{ "getGlyphLayout", "()Larc/graphics/g2d/GlyphLayout;" },
	{ "setWrap", "(Z)V" },
	{ "setWrap", "(ZZ)V" },
	{ "getLabelAlign", "()I" },
	{ "getLineAlign", "()I" },
	{ "setAlignment", "(I)V" },
	{ "setAlignment", "(II)V" },
	{ "setFontScale", "(F)V" },
	{ "setFontScale", "(FF)V" },
	{ "getFontScaleX", "()F" },
	{ "setFontScaleX", "(F)V" },
	{ "getFontScaleY", "()F" },
	{ "setFontScaleY", "(F)V" },
	{ "setEllipsis", "(Ljava/lang/String;)V" },
	{ "setEllipsis", "(Z)V" },
	{ "getFontCache", "()Larc/graphics/g2d/FontCache;" },
	{ "lambda$setText$0", "(Larc/func/Prov;)V" },
	{ "setText", "(Ljava/lang/CharSequence;Z)V" },
	{ "getOriginalText", "()Ljava/lang/StringBuilder;" },
	{ "saveOriginalText", "()V" },
	{ "restoreOriginalText", "()V" },
	{ "getTypingListener", "()Larc/flabel/FListener;" },
	{ "setTypingListener", "(Larc/flabel/FListener;)V" },
	{ "getClearColor", "()Larc/graphics/Color;" },
	{ "setForceMarkupColor", "(Z)V" },
	{ "getDefaultToken", "()Ljava/lang/String;" },
	{ "setDefaultToken", "(Ljava/lang/String;)V" },
	{ "parseTokens", "()V" },
	{ "skipToTheEnd", "()V" },
	{ "skipToTheEnd", "(Z)V" },
	{ "skipToTheEnd", "(ZZ)V" },
	{ "cancelSkipping", "()V" },
	{ "isPaused", "()Z" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "hasEnded", "()Z" },
	{ "restart", "()V" },
	{ "restart", "(Ljava/lang/CharSequence;)V" },
	{ "getVariables", "()Larc/struct/ObjectMap;" },
	{ "setVariable", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "setVariables", "(Larc/struct/ObjectMap;)V" },
	{ "clearVariables", "()V" },
	{ "processCharProgression", "()V" },
	{ "layoutCache", "()V" },
	{ "addMissingGlyphs", "()V" },
	{ "lambda$setVariables$0", "(Ljava/lang/String;Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "variables", &class_arc_struct_ObjectMap, offsetof(arc_flabel_FLabel, F_variables), "Larc/struct/ObjectMap;", 18 },
	{ "tokenEntries", &class_arc_struct_Seq, offsetof(arc_flabel_FLabel, F_tokenEntries), "Larc/struct/Seq;", 20 },
	{ "clearColor", &class_arc_graphics_Color, offsetof(arc_flabel_FLabel, F_clearColor), "Larc/graphics/Color;", 2 },
	{ "listener", &class_arc_flabel_FListener, offsetof(arc_flabel_FLabel, F_listener), "Larc/flabel/FListener;", 2 },
	{ "forceMarkupColor", &class_boolean, offsetof(arc_flabel_FLabel, F_forceMarkupColor), "Z", 0 },
	{ "originalText", &class_java_lang_StringBuilder, offsetof(arc_flabel_FLabel, F_originalText), "Ljava/lang/StringBuilder;", 18 },
	{ "glyphCache", &class_arc_struct_Seq, offsetof(arc_flabel_FLabel, F_glyphCache), "Larc/struct/Seq;", 18 },
	{ "glyphRunCapacities", &class_arc_struct_IntSeq, offsetof(arc_flabel_FLabel, F_glyphRunCapacities), "Larc/struct/IntSeq;", 18 },
	{ "offsetCache", &class_arc_struct_IntSeq, offsetof(arc_flabel_FLabel, F_offsetCache), "Larc/struct/IntSeq;", 18 },
	{ "layoutLineBreaks", &class_arc_struct_IntSeq, offsetof(arc_flabel_FLabel, F_layoutLineBreaks), "Larc/struct/IntSeq;", 18 },
	{ "activeEffects", &class_arc_struct_Seq, offsetof(arc_flabel_FLabel, F_activeEffects), "Larc/struct/Seq;", 18 },
	{ "textSpeed", &class_float, offsetof(arc_flabel_FLabel, F_textSpeed), "F", 2 },
	{ "charCooldown", &class_float, offsetof(arc_flabel_FLabel, F_charCooldown), "F", 2 },
	{ "rawCharIndex", &class_int, offsetof(arc_flabel_FLabel, F_rawCharIndex), "I", 2 },
	{ "glyphCharIndex", &class_int, offsetof(arc_flabel_FLabel, F_glyphCharIndex), "I", 2 },
	{ "glyphCharCompensation", &class_int, offsetof(arc_flabel_FLabel, F_glyphCharCompensation), "I", 2 },
	{ "cachedGlyphCharIndex", &class_int, offsetof(arc_flabel_FLabel, F_cachedGlyphCharIndex), "I", 2 },
	{ "lastLayoutX", &class_float, offsetof(arc_flabel_FLabel, F_lastLayoutX), "F", 2 },
	{ "lastLayoutY", &class_float, offsetof(arc_flabel_FLabel, F_lastLayoutY), "F", 2 },
	{ "parsed", &class_boolean, offsetof(arc_flabel_FLabel, F_parsed), "Z", 2 },
	{ "paused", &class_boolean, offsetof(arc_flabel_FLabel, F_paused), "Z", 2 },
	{ "ended", &class_boolean, offsetof(arc_flabel_FLabel, F_ended), "Z", 2 },
	{ "skipping", &class_boolean, offsetof(arc_flabel_FLabel, F_skipping), "Z", 2 },
	{ "ignoringEvents", &class_boolean, offsetof(arc_flabel_FLabel, F_ignoringEvents), "Z", 2 },
	{ "ignoringEffects", &class_boolean, offsetof(arc_flabel_FLabel, F_ignoringEffects), "Z", 2 },
	{ "defaultToken", &class_java_lang_String, offsetof(arc_flabel_FLabel, F_defaultToken), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_flabel_FLabel_java_lang_CharSequence, 0, "(Ljava/lang/CharSequence;)V", 1 },
	{ "setText", (intptr_t) M_arc_flabel_FLabel_setText_java_lang_CharSequence, VTABLE_arc_flabel_FLabel_setText_java_lang_CharSequence, "(Ljava/lang/CharSequence;)V", 1 },
	{ "setText", (intptr_t) M_arc_flabel_FLabel_setText_java_lang_CharSequence_boolean, VTABLE_arc_flabel_FLabel_setText_java_lang_CharSequence_boolean, "(Ljava/lang/CharSequence;Z)V", 4 },
	{ "getOriginalText", (intptr_t) M_arc_flabel_FLabel_getOriginalText_R_java_lang_StringBuilder, VTABLE_arc_flabel_FLabel_getOriginalText_R_java_lang_StringBuilder, "()Ljava/lang/StringBuilder;", 1 },
	{ "saveOriginalText", (intptr_t) M_arc_flabel_FLabel_saveOriginalText, VTABLE_arc_flabel_FLabel_saveOriginalText, "()V", 4 },
	{ "restoreOriginalText", (intptr_t) M_arc_flabel_FLabel_restoreOriginalText, VTABLE_arc_flabel_FLabel_restoreOriginalText, "()V", 4 },
	{ "getTypingListener", (intptr_t) M_arc_flabel_FLabel_getTypingListener_R_arc_flabel_FListener, VTABLE_arc_flabel_FLabel_getTypingListener_R_arc_flabel_FListener, "()Larc/flabel/FListener;", 1 },
	{ "setTypingListener", (intptr_t) M_arc_flabel_FLabel_setTypingListener_arc_flabel_FListener, VTABLE_arc_flabel_FLabel_setTypingListener_arc_flabel_FListener, "(Larc/flabel/FListener;)V", 1 },
	{ "getClearColor", (intptr_t) M_arc_flabel_FLabel_getClearColor_R_arc_graphics_Color, VTABLE_arc_flabel_FLabel_getClearColor_R_arc_graphics_Color, "()Larc/graphics/Color;", 1 },
	{ "setForceMarkupColor", (intptr_t) M_arc_flabel_FLabel_setForceMarkupColor_boolean, VTABLE_arc_flabel_FLabel_setForceMarkupColor_boolean, "(Z)V", 1 },
	{ "getDefaultToken", (intptr_t) M_arc_flabel_FLabel_getDefaultToken_R_java_lang_String, VTABLE_arc_flabel_FLabel_getDefaultToken_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setDefaultToken", (intptr_t) M_arc_flabel_FLabel_setDefaultToken_java_lang_String, VTABLE_arc_flabel_FLabel_setDefaultToken_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "parseTokens", (intptr_t) M_arc_flabel_FLabel_parseTokens, VTABLE_arc_flabel_FLabel_parseTokens, "()V", 1 },
	{ "skipToTheEnd", (intptr_t) M_arc_flabel_FLabel_skipToTheEnd, VTABLE_arc_flabel_FLabel_skipToTheEnd, "()V", 1 },
	{ "skipToTheEnd", (intptr_t) M_arc_flabel_FLabel_skipToTheEnd_boolean, VTABLE_arc_flabel_FLabel_skipToTheEnd_boolean, "(Z)V", 1 },
	{ "skipToTheEnd", (intptr_t) M_arc_flabel_FLabel_skipToTheEnd_boolean_boolean, VTABLE_arc_flabel_FLabel_skipToTheEnd_boolean_boolean, "(ZZ)V", 1 },
	{ "cancelSkipping", (intptr_t) M_arc_flabel_FLabel_cancelSkipping, VTABLE_arc_flabel_FLabel_cancelSkipping, "()V", 1 },
	{ "isPaused", (intptr_t) M_arc_flabel_FLabel_isPaused_R_boolean, VTABLE_arc_flabel_FLabel_isPaused_R_boolean, "()Z", 1 },
	{ "pause", (intptr_t) M_arc_flabel_FLabel_pause, VTABLE_arc_flabel_FLabel_pause, "()V", 1 },
	{ "resume", (intptr_t) M_arc_flabel_FLabel_resume, VTABLE_arc_flabel_FLabel_resume, "()V", 1 },
	{ "hasEnded", (intptr_t) M_arc_flabel_FLabel_hasEnded_R_boolean, VTABLE_arc_flabel_FLabel_hasEnded_R_boolean, "()Z", 1 },
	{ "restart", (intptr_t) M_arc_flabel_FLabel_restart, VTABLE_arc_flabel_FLabel_restart, "()V", 1 },
	{ "restart", (intptr_t) M_arc_flabel_FLabel_restart_java_lang_CharSequence, VTABLE_arc_flabel_FLabel_restart_java_lang_CharSequence, "(Ljava/lang/CharSequence;)V", 1 },
	{ "getVariables", (intptr_t) M_arc_flabel_FLabel_getVariables_R_arc_struct_ObjectMap, VTABLE_arc_flabel_FLabel_getVariables_R_arc_struct_ObjectMap, "()Larc/struct/ObjectMap;", 1 },
	{ "setVariable", (intptr_t) M_arc_flabel_FLabel_setVariable_java_lang_String_java_lang_String, VTABLE_arc_flabel_FLabel_setVariable_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "setVariables", (intptr_t) M_arc_flabel_FLabel_setVariables_arc_struct_ObjectMap, VTABLE_arc_flabel_FLabel_setVariables_arc_struct_ObjectMap, "(Larc/struct/ObjectMap;)V", 1 },
	{ "clearVariables", (intptr_t) M_arc_flabel_FLabel_clearVariables, VTABLE_arc_flabel_FLabel_clearVariables, "()V", 1 },
	{ "act", (intptr_t) M_arc_flabel_FLabel_act_float, VTABLE_arc_flabel_FLabel_act_float, "(F)V", 1 },
	{ "processCharProgression", (intptr_t) M_arc_flabel_FLabel_processCharProgression, VTABLE_arc_flabel_FLabel_processCharProgression, "()V", 2 },
	{ "remove", (intptr_t) M_arc_flabel_FLabel_remove_R_boolean, VTABLE_arc_flabel_FLabel_remove_R_boolean, "()Z", 1 },
	{ "layout", (intptr_t) M_arc_flabel_FLabel_layout, VTABLE_arc_flabel_FLabel_layout, "()V", 1 },
	{ "layoutCache", (intptr_t) M_arc_flabel_FLabel_layoutCache, VTABLE_arc_flabel_FLabel_layoutCache, "()V", 2 },
	{ "addMissingGlyphs", (intptr_t) M_arc_flabel_FLabel_addMissingGlyphs, VTABLE_arc_flabel_FLabel_addMissingGlyphs, "()V", 2 },
	{ "draw", (intptr_t) M_arc_flabel_FLabel_draw, VTABLE_arc_flabel_FLabel_draw, "()V", 1 },
	{ "lambda$setVariables$0", (intptr_t) M_arc_flabel_FLabel_lambda$setVariables$0_java_lang_String_java_lang_String, VTABLE_arc_flabel_FLabel_lambda$setVariables$0_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 4098 },
};

Class class_arc_flabel_FLabel{
		.nativeName = (intptr_t) "arc/flabel/FLabel",
		.parentClass = (intptr_t) &class_arc_scene_ui_Label,
		.size = sizeof(arc_flabel_FLabel),
		.classVtable = (intptr_t) vtable_arc_flabel_FLabel,
		.staticInitializer = (intptr_t) clinit_arc_flabel_FLabel,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_flabel_FLabel,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 26,
		.nativeFields = (intptr_t) fields,
		.methodCount = 35,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 176,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_flabel_FLabel = registerClass(&class_arc_flabel_FLabel);

}
