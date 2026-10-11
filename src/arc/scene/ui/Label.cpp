#include "arc/scene/ui/Label.h"
#include "java/lang/Exception.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/math/geom/Vec2.h"
#include "arc/Core.h"
#include "arc/func/Prov.h"
#include "java/lang/StringBuilder.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/graphics/g2d/Font_FontData.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/Label.h"
#include "arc/scene/ui/Label_invoke_java_lang_Runnable_0.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/Scene.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/Class.h"
#include "arc/graphics/g2d/FontCache.h"

extern "C" {

jobject SF_arc_scene_ui_Label_tempColor;
jobject SF_arc_scene_ui_Label_prefSizeLayout;

void mark_arc_scene_ui_Label(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_ui_Label_tempColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_Label_tempColor)->clazz)->markFunction)((jobject) SF_arc_scene_ui_Label_tempColor, mark, depth + 1);
		if (SF_arc_scene_ui_Label_prefSizeLayout)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_Label_prefSizeLayout)->clazz)->markFunction)((jobject) SF_arc_scene_ui_Label_prefSizeLayout, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_Element(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_Label *) object;
	if (self->F_layout)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_layout)->clazz)->markFunction)((jobject) self->F_layout, mark, depth + 1);
	if (self->F_prefSize)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prefSize)->clazz)->markFunction)((jobject) self->F_prefSize, mark, depth + 1);
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_cache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cache)->clazz)->markFunction)((jobject) self->F_cache, mark, depth + 1);
	if (self->F_ellipsis)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ellipsis)->clazz)->markFunction)((jobject) self->F_ellipsis, mark, depth + 1);
}

void init_arc_scene_ui_Label_arc_func_Prov(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Label(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8""_j));
	clinit_arc_scene_ui_Label$LabelStyle(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_Label$LabelStyle);
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_scene;
	sp[3].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[3].o, (((jobject) &class_arc_scene_ui_Label$LabelStyle)));
	init_arc_scene_ui_Label$LabelStyle_arc_scene_ui_Label$LabelStyle(ctx, sp[2].o, (checkCast(ctx, &class_arc_scene_ui_Label$LabelStyle, sp[3].o)));
	init_arc_scene_ui_Label_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(46);
	((func_arc_scene_ui_Label_setText_arc_func_Prov) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_setText_arc_func_Prov])(ctx, (frame[0].o), (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_CharSequence, sp[1].o)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(51);
	goto label_6;
label_2:;
	LINE_NUMBER(50);
	INST_ASTORE(2);
label_6:;
	LINE_NUMBER(52);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_arc_scene_ui_Label_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Label(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[2].o = (jobject)SF_arc_Core_scene;
	sp[2].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[2].o, (((jobject) &class_arc_scene_ui_Label$LabelStyle)));
	init_arc_scene_ui_Label_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_arc_scene_ui_Label$LabelStyle, sp[2].o)));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_Label_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Label(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(58);
	init_arc_scene_Element(ctx, (frame[0].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_GlyphLayout(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_GlyphLayout);
	init_arc_graphics_g2d_GlyphLayout(ctx, sp[1].o);
	((arc_scene_ui_Label *) NULL_CHECK(sp[0].o))->F_layout = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	((arc_scene_ui_Label *) NULL_CHECK(sp[0].o))->F_prefSize = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	((arc_scene_ui_Label *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(34);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign = (8);
	LINE_NUMBER(35);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign = (8);
	LINE_NUMBER(39);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefSizeInvalid = (jint(1));
	LINE_NUMBER(40);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleX = (jfloat(1));
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY = (jfloat(1));
	LINE_NUMBER(41);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged = (jint(0));
	LINE_NUMBER(59);
	if ((frame[2].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_Label$LabelStyle(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_Label$LabelStyle);
	init_arc_scene_ui_Label$LabelStyle_arc_scene_ui_Label$LabelStyle(ctx, sp[1].o, (frame[2].o));
	((func_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(65);
	if ((frame[1].o) == nullptr) goto label_15;
	}
	{
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, (frame[0].o), (frame[1].o));
	}
label_15:;
	{
	LINE_NUMBER(66);
	if ((frame[1].o) == nullptr) goto label_16;
	}
	{
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Label_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Label_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_arc_scene_ui_Label_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	}
label_16:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(78);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK((frame[1].o)))->F_font;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing LabelStyle font."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(80);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK((frame[1].o)))->F_font;
	sp[1].o = (jobject)((func_arc_graphics_g2d_Font_newFontCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_Font_newFontCache_R_arc_graphics_g2d_FontCache])(ctx, sp[1].o);
	((arc_scene_ui_Label *) NULL_CHECK(sp[0].o))->F_cache = (jref) sp[1].o;
	LINE_NUMBER(82);
	((func_arc_scene_ui_Label_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setText_arc_func_Prov(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setText", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_Label_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_scene_ui_Label_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_scene_ui_Label_invoke_java_lang_Runnable_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_Label_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setTextInternal_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setTextInternal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(90);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	INST_ASTORE(1);
label_1:;
	{
	LINE_NUMBER(91);
	jint temp0 = (jint)((func_arc_scene_ui_Label_textEquals_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_textEquals_java_lang_CharSequence_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_CharSequence_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(94);
	((func_arc_scene_ui_Label_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_Label_textEquals_java_lang_CharSequence_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:textEquals", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(99);
	jint temp1 = frame[2].i;
	jint temp2 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp1 == temp2) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(100);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_StringBuilder_charAt_int_R_char) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_charAt_int_R_char])(ctx, sp[0].o, (frame[3].i));
	jint temp1 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (frame[3].i));
	if (temp0 == temp1) goto label_6;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(100);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Label_getText_R_java_lang_StringBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:getText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setText_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setText", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(114);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_java_lang_CharSequence_length_R_int) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_length_R_int, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 <= 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (jint(0)));
	if (temp0 == (36)) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_CharSequence_charAt_int_R_char) resolveInterfaceMethod(ctx, &class_java_lang_CharSequence, INDEX_java_lang_CharSequence_charAt_int_R_char, (frame[1].o)))(ctx, (frame[1].o), (jint(0)));
	if (temp0 != (64)) goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, (jint(1)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	M_arc_scene_ui_Label_setTextInternal_java_lang_CharSequence(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(117);
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(118);
	M_arc_scene_ui_Label_setTextInternal_java_lang_CharSequence(ctx, (frame[0].o), (frame[1].o));
	}
label_5:;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	M_arc_scene_Element_invalidate(ctx, (frame[0].o));
	LINE_NUMBER(125);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefSizeInvalid = (jint(1));
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_scaleAndComputePrefSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:scaleAndComputePrefSize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(131);
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Font_getScaleX_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getScaleX_R_float])(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(132);
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_Font_getScaleY_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getScaleY_R_float])(ctx, (frame[1].o));
	frame[3].f = temp1;
	LINE_NUMBER(133);
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float_float])(ctx, sp[0].o, ((jfloat)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleX), ((jfloat)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY));
	}
label_5:;
	{
	LINE_NUMBER(135);
	M_arc_scene_ui_Label_computePrefSize(ctx, (frame[0].o));
	LINE_NUMBER(137);
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	}
label_7:;
	LINE_NUMBER(138);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_computePrefSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:computePrefSize", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(141);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefSizeInvalid = (jint(0));
	LINE_NUMBER(142);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_Label_prefSizeLayout;
	frame[1].o = sp[0].o;
	LINE_NUMBER(143);
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrap) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(144);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Label_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_getWidth_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(145);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getRightWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[2].f = (temp0 - (temp1 + temp2));
	}
label_6:;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[1].o = (jobject)((func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font])(ctx, sp[1].o);
	sp[2].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	clinit_arc_graphics_Color(ctx);
	sp[3].o = (jobject)SF_arc_graphics_Color_white;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_arc_graphics_Color_float_int_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].f), (8), (jint(1)));
	LINE_NUMBER(147);
	goto label_8;
	}
label_3:;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[1].o = (jobject)((func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font])(ctx, sp[1].o);
	sp[2].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = jint(0);
	sp[3].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[3].o);
	clinit_arc_graphics_Color(ctx);
	sp[3].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp2 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width;
	jint temp3 = (jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign;
	jint temp4 = (jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrap;
	sp[4].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, sp[3].o, temp2, temp3, temp4, sp[4].o);
	}
label_8:;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefSize;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_width), ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[1].o)))->F_height));
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[23];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:layout", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(156);
	jfloat temp0 = (jfloat)((func_arc_graphics_g2d_Font_getScaleX_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getScaleX_R_float])(ctx, (frame[1].o));
	frame[2].f = temp0;
	LINE_NUMBER(157);
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_Font_getScaleY_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getScaleY_R_float])(ctx, (frame[1].o));
	frame[3].f = temp1;
	LINE_NUMBER(158);
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float_float])(ctx, sp[0].o, ((jfloat)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleX), ((jfloat)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY));
	}
label_5:;
	{
	LINE_NUMBER(160);
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrap) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis;
	if (sp[0].o != nullptr) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(161);
	if ((frame[4].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(162);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Label_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_getPrefHeight_R_float])(ctx, (frame[0].o));
	frame[5].f = temp0;
	LINE_NUMBER(163);
	if ((floatCompare((frame[5].f), ((jfloat)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_lastPrefHeight), -1)) == 0) goto label_9;
	}
	{
	LINE_NUMBER(164);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_lastPrefHeight = (frame[5].f);
	LINE_NUMBER(165);
	((func_arc_scene_ui_Label_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_invalidateHierarchy])(ctx, (frame[0].o));
	}
label_9:;
	{
	LINE_NUMBER(169);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_Label_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_getWidth_R_float])(ctx, (frame[0].o));
	frame[5].f = temp0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_Label_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_getHeight_R_float])(ctx, (frame[0].o));
	frame[6].f = temp1;
	LINE_NUMBER(170);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[7].o = sp[0].o;
	LINE_NUMBER(171);
	frame[8].f = (jfloat(0));
	frame[9].f = (jfloat(0));
	LINE_NUMBER(172);
	if ((frame[7].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(173);
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].f = temp0;
	LINE_NUMBER(174);
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[9].f = temp1;
	LINE_NUMBER(175);
	jfloat temp2 = frame[5].f;
	jfloat temp3 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jfloat temp4 = (jfloat)((func_arc_scene_style_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getRightWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[5].f = (temp2 - (temp3 + temp4));
	LINE_NUMBER(176);
	jfloat temp5 = frame[6].f;
	jfloat temp6 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jfloat temp7 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[6].f = (temp5 - (temp6 + temp7));
	}
label_19:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_layout;
	frame[10].o = sp[0].o;
	LINE_NUMBER(181);
	if ((frame[4].i) != 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = (jint)((func_java_lang_StringBuilder_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_indexOf_java_lang_String_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	if (temp0 == (jint(-1))) goto label_26;
	}
label_25:;
	{
	LINE_NUMBER(183);
	sp[0].o = frame[10].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = jint(0);
	sp[3].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[3].o);
	clinit_arc_graphics_Color(ctx);
	sp[3].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp2 = frame[5].f;
	jint temp3 = (jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign;
	jint temp4 = frame[4].i;
	sp[4].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, sp[3].o, temp2, temp3, temp4, sp[4].o);
	LINE_NUMBER(184);
	frame[11].f = ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_width);
	LINE_NUMBER(185);
	frame[12].f = ((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[10].o)))->F_height);
	LINE_NUMBER(187);
	if ((((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign) & (8)) != 0) goto label_30;
	}
	{
	LINE_NUMBER(188);
	if ((((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign) & (16)) == 0) goto label_32;
	}
	{
	LINE_NUMBER(189);
	frame[8].f = ((frame[8].f) + ((frame[5].f) - (frame[11].f)));
	goto label_30;
	}
label_32:;
	{
	LINE_NUMBER(191);
	frame[8].f = ((frame[8].f) + (((frame[5].f) - (frame[11].f)) / (jfloat(2))));
	goto label_30;
	}
label_26:;
	{
	LINE_NUMBER(194);
	frame[11].f = (frame[5].f);
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	frame[12].f = ((jfloat)((arc_graphics_g2d_Font$FontData *) NULL_CHECK(sp[0].o))->F_capHeight);
	}
label_30:;
	{
	LINE_NUMBER(198);
	if ((((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign) & (jint(2))) == 0) goto label_35;
	}
	{
	LINE_NUMBER(199);
	jfloat temp0 = frame[9].f;
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font])(ctx, sp[0].o);
	jint temp1 = (jint)((func_arc_graphics_g2d_Font_isFlipped_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_isFlipped_R_boolean])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == 0) goto label_37;
	}
	INST_FCONST(0);
	goto label_38;
label_37:;
	{
	jfloat temp0 = (frame[6].f) - (frame[12].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_38:;
	{
	sp -= 2;
	frame[9].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(200);
	jfloat temp0 = frame[9].f;
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_font;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_Font_getDescent_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getDescent_R_float])(ctx, sp[0].o);
	frame[9].f = (temp0 + temp1);
	goto label_40;
	}
label_35:;
	{
	LINE_NUMBER(201);
	if ((((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign) & (jint(4))) == 0) goto label_41;
	}
	{
	LINE_NUMBER(202);
	jfloat temp0 = frame[9].f;
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font])(ctx, sp[0].o);
	jint temp1 = (jint)((func_arc_graphics_g2d_Font_isFlipped_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_isFlipped_R_boolean])(ctx, sp[0].o);
	sp[0].f = temp0;
	sp += 1;
	if (temp1 == 0) goto label_43;
	}
	{
	jfloat temp0 = (frame[6].f) - (frame[12].f);
	sp[0].f = temp0;
	sp += 1;
	goto label_44;
	}
label_43:;
	INST_FCONST(0);
label_44:;
	{
	sp -= 2;
	frame[9].f = (sp[0].f + sp[1].f);
	LINE_NUMBER(203);
	jfloat temp0 = frame[9].f;
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_font;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_Font_getDescent_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getDescent_R_float])(ctx, sp[0].o);
	frame[9].f = (temp0 - temp1);
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(205);
	frame[9].f = ((frame[9].f) + (((frame[6].f) - (frame[12].f)) / (jfloat(2))));
	}
label_40:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_getFont_R_arc_graphics_g2d_Font])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_graphics_g2d_Font_isFlipped_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_isFlipped_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_46;
	}
	{
	frame[9].f = ((frame[9].f) + (frame[12].f));
	}
label_46:;
	{
	LINE_NUMBER(209);
	sp[0].o = frame[10].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp0 = jint(0);
	sp[3].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	jint temp1 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, sp[3].o);
	clinit_arc_graphics_Color(ctx);
	sp[3].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp2 = frame[11].f;
	jint temp3 = (jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign;
	jint temp4 = frame[4].i;
	sp[4].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence_int_int_arc_graphics_Color_float_int_boolean_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, sp[3].o, temp2, temp3, temp4, sp[4].o);
	LINE_NUMBER(210);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_setText_arc_graphics_g2d_GlyphLayout_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setText_arc_graphics_g2d_GlyphLayout_float_float])(ctx, sp[0].o, (frame[10].o), (frame[8].f), (frame[9].f));
	LINE_NUMBER(212);
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged) == 0) goto label_49;
	}
	{
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getData_R_arc_graphics_g2d_Font$FontData])(ctx, (frame[1].o));
	((func_arc_graphics_g2d_Font$FontData_setScale_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font$FontData_setScale_float_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	}
label_49:;
	LINE_NUMBER(213);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(217);
	((func_arc_scene_ui_Label_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_validate])(ctx, (frame[0].o));
	LINE_NUMBER(218);
	clinit_arc_scene_ui_Label(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_Label_tempColor;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(219);
	sp[0].o = frame[1].o;
	((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[0].o))->F_a) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(220);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(221);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a));
	LINE_NUMBER(222);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	}
label_4:;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_fontColor;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[1].o))->F_fontColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(225);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_tint_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_tint_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(226);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_setPosition_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_setPosition_float_float])(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(227);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	((func_arc_graphics_g2d_FontCache_draw) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_draw])(ctx, sp[0].o);
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Label_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(233);
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrap) == 0) goto label_1;
	}
	INST_FCONST(0);
	goto label_2;
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->f = (jfloat)M_arc_scene_Element_getMinWidth_R_float(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Label_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:getPrefWidth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrap) == 0) goto label_2;
	}
	{
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrapFit) == 0) goto label_2;
	}
label_1:;
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_2:;
	{
	LINE_NUMBER(239);
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefSizeInvalid) == 0) goto label_3;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_scene_ui_Label_scaleAndComputePrefSize(ctx, sp[0].o);
label_3:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefSize;
	frame[1].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(241);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[2].o = sp[0].o;
	LINE_NUMBER(242);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getRightWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[1].f = (temp0 + (temp1 + temp2));
	}
label_6:;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Label_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:getPrefHeight", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(249);
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefSizeInvalid) == 0) goto label_2;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_scene_ui_Label_scaleAndComputePrefSize(ctx, sp[0].o);
label_2:;
	{
	LINE_NUMBER(250);
	frame[1].f = (jfloat(1));
	LINE_NUMBER(251);
	if (((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged) == 0) goto label_4;
	}
	{
	jfloat temp0 = (jfloat)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY;
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_font;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_Font_getScaleY_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getScaleY_R_float])(ctx, sp[0].o);
	frame[1].f = (temp0 / temp1);
	}
label_4:;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_prefSize;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_font;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_Font_getDescent_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_Font_getDescent_R_float])(ctx, sp[0].o);
	frame[2].f = (temp0 - ((temp1 * (frame[1].f)) * (jfloat(2))));
	LINE_NUMBER(253);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_Label$LabelStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[3].o = sp[0].o;
	LINE_NUMBER(254);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, (frame[3].o)))(ctx, (frame[3].o));
	frame[2].f = (temp0 + (temp1 + temp2));
	}
label_7:;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Label_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:getGlyphLayout", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_layout;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setWrap_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setWrap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(263);
	((func_arc_scene_ui_Label_setWrap_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_setWrap_boolean_boolean])(ctx, (frame[0].o), (frame[1].i), (jint(0)));
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setWrap_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setWrap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(277);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrap = (frame[1].i);
	LINE_NUMBER(278);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_wrapFit = (frame[2].i);
	LINE_NUMBER(279);
	((func_arc_scene_ui_Label_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(280);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_Label_getLabelAlign_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:getLabelAlign", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign);
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_Label_getLineAlign_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:getLineAlign", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setAlignment_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setAlignment", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(296);
	((func_arc_scene_ui_Label_setAlignment_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_setAlignment_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[1].i));
	LINE_NUMBER(297);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setAlignment_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setAlignment", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(305);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_labelAlign = (frame[1].i);
	LINE_NUMBER(307);
	if (((frame[2].i) & (8)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(308);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign = (8);
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(309);
	if (((frame[2].i) & (16)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(310);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign = (16);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(312);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_lineAlign = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(314);
	((func_arc_scene_ui_Label_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setFontScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setFontScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(318);
	((func_arc_scene_ui_Label_setFontScale_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_setFontScale_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[1].f));
	LINE_NUMBER(319);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setFontScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setFontScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(322);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleChanged = (jint(1));
	LINE_NUMBER(323);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleX = (frame[1].f);
	LINE_NUMBER(324);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY = (frame[2].f);
	LINE_NUMBER(325);
	((func_arc_scene_ui_Label_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Label_getFontScaleX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:getFontScaleX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleX);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setFontScaleX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setFontScaleX", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(333);
	((func_arc_scene_ui_Label_setFontScale_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_setFontScale_float_float])(ctx, (frame[0].o), (frame[1].f), ((jfloat)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY));
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_Label_getFontScaleY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:getFontScaleY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleY);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setFontScaleY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setFontScaleY", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(341);
	((func_arc_scene_ui_Label_setFontScale_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_Label_setFontScale_float_float])(ctx, (frame[0].o), ((jfloat)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_fontScaleX), (frame[1].f));
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setEllipsis_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setEllipsis", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(349);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis = (jref) (frame[1].o);
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_setEllipsis_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:setEllipsis", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(357);
	if ((frame[1].i) == 0) goto label_1;
	}
	{
	LINE_NUMBER(358);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis = (jref) (((jobject) createStringLiteral(ctx, u8"..."_j)));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(360);
	((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_ellipsis = (jref) (jobject(nullptr));
	}
label_3:;
	LINE_NUMBER(361);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Label_getFontCache_R_arc_graphics_g2d_FontCache(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:getFontCache", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_cache;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_Label_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(369);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)M_arc_scene_Element_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8": "_j))));
	sp[1].o = (jobject)((arc_scene_ui_Label *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_Label_lambda$setText$0_arc_func_Prov(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:lambda$setText$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	((func_arc_scene_ui_Label_setText_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_CharSequence, sp[1].o)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_scene_ui_Label(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Element(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/Label:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_Label(ctx);
	{
	LINE_NUMBER(26);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	clinit_arc_scene_ui_Label(ctx);
	SF_arc_scene_ui_Label_tempColor = sp[0].o;
	LINE_NUMBER(27);
	clinit_arc_graphics_g2d_GlyphLayout(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_g2d_GlyphLayout);
	init_arc_graphics_g2d_GlyphLayout(ctx, sp[0].o);
	clinit_arc_scene_ui_Label(ctx);
	SF_arc_scene_ui_Label_prefSizeLayout = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_Label[] {
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
	(void *) M_arc_scene_ui_Label_draw,
	(void *) M_arc_scene_Element_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_scene_Element_remove_R_boolean,
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
	(void *) M_arc_scene_ui_Label_layout,
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
	(void *) M_arc_scene_ui_Label_setText_java_lang_CharSequence,
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
};

static jclass innerClasses[] {
	&class_arc_scene_ui_Label$LabelStyle,
};

static FieldMetadata fields[] {
	{ "tempColor", &class_arc_graphics_Color, (intptr_t) &SF_arc_scene_ui_Label_tempColor, "Larc/graphics/Color;", 28 },
	{ "prefSizeLayout", &class_arc_graphics_g2d_GlyphLayout, (intptr_t) &SF_arc_scene_ui_Label_prefSizeLayout, "Larc/graphics/g2d/GlyphLayout;", 28 },
	{ "layout", &class_arc_graphics_g2d_GlyphLayout, offsetof(arc_scene_ui_Label, F_layout), "Larc/graphics/g2d/GlyphLayout;", 20 },
	{ "prefSize", &class_arc_math_geom_Vec2, offsetof(arc_scene_ui_Label, F_prefSize), "Larc/math/geom/Vec2;", 20 },
	{ "text", &class_java_lang_StringBuilder, offsetof(arc_scene_ui_Label, F_text), "Ljava/lang/StringBuilder;", 20 },
	{ "style", &class_arc_scene_ui_Label$LabelStyle, offsetof(arc_scene_ui_Label, F_style), "Larc/scene/ui/Label$LabelStyle;", 4 },
	{ "cache", &class_arc_graphics_g2d_FontCache, offsetof(arc_scene_ui_Label, F_cache), "Larc/graphics/g2d/FontCache;", 4 },
	{ "labelAlign", &class_int, offsetof(arc_scene_ui_Label, F_labelAlign), "I", 4 },
	{ "lineAlign", &class_int, offsetof(arc_scene_ui_Label, F_lineAlign), "I", 4 },
	{ "wrap", &class_boolean, offsetof(arc_scene_ui_Label, F_wrap), "Z", 4 },
	{ "wrapFit", &class_boolean, offsetof(arc_scene_ui_Label, F_wrapFit), "Z", 4 },
	{ "lastPrefHeight", &class_float, offsetof(arc_scene_ui_Label, F_lastPrefHeight), "F", 4 },
	{ "prefSizeInvalid", &class_boolean, offsetof(arc_scene_ui_Label, F_prefSizeInvalid), "Z", 4 },
	{ "fontScaleX", &class_float, offsetof(arc_scene_ui_Label, F_fontScaleX), "F", 4 },
	{ "fontScaleY", &class_float, offsetof(arc_scene_ui_Label, F_fontScaleY), "F", 4 },
	{ "fontScaleChanged", &class_boolean, offsetof(arc_scene_ui_Label, F_fontScaleChanged), "Z", 4 },
	{ "ellipsis", &class_java_lang_String, offsetof(arc_scene_ui_Label, F_ellipsis), "Ljava/lang/String;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_Label_arc_func_Prov, 0, "(Larc/func/Prov;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Label_java_lang_CharSequence, 0, "(Ljava/lang/CharSequence;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_Label_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle, 0, "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle, VTABLE_arc_scene_ui_Label_getStyle_R_arc_scene_ui_Label$LabelStyle, "()Larc/scene/ui/Label$LabelStyle;", 1 },
	{ "setStyle", (intptr_t) M_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle, VTABLE_arc_scene_ui_Label_setStyle_arc_scene_ui_Label$LabelStyle, "(Larc/scene/ui/Label$LabelStyle;)V", 1 },
	{ "setText", (intptr_t) M_arc_scene_ui_Label_setText_arc_func_Prov, VTABLE_arc_scene_ui_Label_setText_arc_func_Prov, "(Larc/func/Prov;)V", 1 },
	{ "setTextInternal", (intptr_t) M_arc_scene_ui_Label_setTextInternal_java_lang_CharSequence, VTABLE_arc_scene_ui_Label_setTextInternal_java_lang_CharSequence, "(Ljava/lang/CharSequence;)V", 2 },
	{ "textEquals", (intptr_t) M_arc_scene_ui_Label_textEquals_java_lang_CharSequence_R_boolean, VTABLE_arc_scene_ui_Label_textEquals_java_lang_CharSequence_R_boolean, "(Ljava/lang/CharSequence;)Z", 1 },
	{ "getText", (intptr_t) M_arc_scene_ui_Label_getText_R_java_lang_StringBuilder, VTABLE_arc_scene_ui_Label_getText_R_java_lang_StringBuilder, "()Ljava/lang/StringBuilder;", 1 },
	{ "setText", (intptr_t) M_arc_scene_ui_Label_setText_java_lang_CharSequence, VTABLE_arc_scene_ui_Label_setText_java_lang_CharSequence, "(Ljava/lang/CharSequence;)V", 1 },
	{ "invalidate", (intptr_t) M_arc_scene_ui_Label_invalidate, VTABLE_arc_scene_ui_Label_invalidate, "()V", 1 },
	{ "scaleAndComputePrefSize", (intptr_t) M_arc_scene_ui_Label_scaleAndComputePrefSize, VTABLE_arc_scene_ui_Label_scaleAndComputePrefSize, "()V", 2 },
	{ "computePrefSize", (intptr_t) M_arc_scene_ui_Label_computePrefSize, VTABLE_arc_scene_ui_Label_computePrefSize, "()V", 2 },
	{ "layout", (intptr_t) M_arc_scene_ui_Label_layout, VTABLE_arc_scene_ui_Label_layout, "()V", 1 },
	{ "draw", (intptr_t) M_arc_scene_ui_Label_draw, VTABLE_arc_scene_ui_Label_draw, "()V", 1 },
	{ "getMinWidth", (intptr_t) M_arc_scene_ui_Label_getMinWidth_R_float, VTABLE_arc_scene_ui_Label_getMinWidth_R_float, "()F", 1 },
	{ "getPrefWidth", (intptr_t) M_arc_scene_ui_Label_getPrefWidth_R_float, VTABLE_arc_scene_ui_Label_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_arc_scene_ui_Label_getPrefHeight_R_float, VTABLE_arc_scene_ui_Label_getPrefHeight_R_float, "()F", 1 },
	{ "getGlyphLayout", (intptr_t) M_arc_scene_ui_Label_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout, VTABLE_arc_scene_ui_Label_getGlyphLayout_R_arc_graphics_g2d_GlyphLayout, "()Larc/graphics/g2d/GlyphLayout;", 1 },
	{ "setWrap", (intptr_t) M_arc_scene_ui_Label_setWrap_boolean, VTABLE_arc_scene_ui_Label_setWrap_boolean, "(Z)V", 1 },
	{ "setWrap", (intptr_t) M_arc_scene_ui_Label_setWrap_boolean_boolean, VTABLE_arc_scene_ui_Label_setWrap_boolean_boolean, "(ZZ)V", 1 },
	{ "getLabelAlign", (intptr_t) M_arc_scene_ui_Label_getLabelAlign_R_int, VTABLE_arc_scene_ui_Label_getLabelAlign_R_int, "()I", 1 },
	{ "getLineAlign", (intptr_t) M_arc_scene_ui_Label_getLineAlign_R_int, VTABLE_arc_scene_ui_Label_getLineAlign_R_int, "()I", 1 },
	{ "setAlignment", (intptr_t) M_arc_scene_ui_Label_setAlignment_int, VTABLE_arc_scene_ui_Label_setAlignment_int, "(I)V", 1 },
	{ "setAlignment", (intptr_t) M_arc_scene_ui_Label_setAlignment_int_int, VTABLE_arc_scene_ui_Label_setAlignment_int_int, "(II)V", 1 },
	{ "setFontScale", (intptr_t) M_arc_scene_ui_Label_setFontScale_float, VTABLE_arc_scene_ui_Label_setFontScale_float, "(F)V", 1 },
	{ "setFontScale", (intptr_t) M_arc_scene_ui_Label_setFontScale_float_float, VTABLE_arc_scene_ui_Label_setFontScale_float_float, "(FF)V", 1 },
	{ "getFontScaleX", (intptr_t) M_arc_scene_ui_Label_getFontScaleX_R_float, VTABLE_arc_scene_ui_Label_getFontScaleX_R_float, "()F", 1 },
	{ "setFontScaleX", (intptr_t) M_arc_scene_ui_Label_setFontScaleX_float, VTABLE_arc_scene_ui_Label_setFontScaleX_float, "(F)V", 1 },
	{ "getFontScaleY", (intptr_t) M_arc_scene_ui_Label_getFontScaleY_R_float, VTABLE_arc_scene_ui_Label_getFontScaleY_R_float, "()F", 1 },
	{ "setFontScaleY", (intptr_t) M_arc_scene_ui_Label_setFontScaleY_float, VTABLE_arc_scene_ui_Label_setFontScaleY_float, "(F)V", 1 },
	{ "setEllipsis", (intptr_t) M_arc_scene_ui_Label_setEllipsis_java_lang_String, VTABLE_arc_scene_ui_Label_setEllipsis_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setEllipsis", (intptr_t) M_arc_scene_ui_Label_setEllipsis_boolean, VTABLE_arc_scene_ui_Label_setEllipsis_boolean, "(Z)V", 1 },
	{ "getFontCache", (intptr_t) M_arc_scene_ui_Label_getFontCache_R_arc_graphics_g2d_FontCache, VTABLE_arc_scene_ui_Label_getFontCache_R_arc_graphics_g2d_FontCache, "()Larc/graphics/g2d/FontCache;", 1 },
	{ "toString", (intptr_t) M_arc_scene_ui_Label_toString_R_java_lang_String, VTABLE_arc_scene_ui_Label_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$setText$0", (intptr_t) M_arc_scene_ui_Label_lambda$setText$0_arc_func_Prov, VTABLE_arc_scene_ui_Label_lambda$setText$0_arc_func_Prov, "(Larc/func/Prov;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_ui_Label, 0, "()V", 8 },
};

Class class_arc_scene_ui_Label{
		.nativeName = (intptr_t) "arc/scene/ui/Label",
		.parentClass = (intptr_t) &class_arc_scene_Element,
		.size = sizeof(arc_scene_ui_Label),
		.classVtable = (intptr_t) vtable_arc_scene_ui_Label,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_Label,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_Label,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 37,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 147,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_Label = registerClass(&class_arc_scene_ui_Label);

}
