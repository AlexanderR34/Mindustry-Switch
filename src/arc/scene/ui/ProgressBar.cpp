#include "arc/scene/ui/ProgressBar.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "java/lang/StringBuilder.h"
#include "arc/Core.h"
#include "arc/func/Prov.h"
#include "arc/scene/ui/ProgressBar_ProgressBarStyle.h"
#include "arc/math/Interp.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/ProgressBar.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/event/ChangeListener_ChangeEvent.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "arc/scene/Element.h"
#include "arc/scene/utils/Disableable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/event/SceneEvent.h"
#include "arc/util/pooling/Pools.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/Class.h"
#include "arc/scene/ui/ProgressBar_invoke_arc_func_Prov_0.h"

extern "C" {


void mark_arc_scene_ui_ProgressBar(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (arc_scene_ui_ProgressBar *) object;
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_animateInterpolation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_animateInterpolation)->clazz)->markFunction)((jobject) self->F_animateInterpolation, mark, depth + 1);
	if (self->F_visualInterpolation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_visualInterpolation)->clazz)->markFunction)((jobject) self->F_visualInterpolation, mark, depth + 1);
}

void clinit_arc_scene_ui_ProgressBar(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Element(ctx);
}

void init_arc_scene_ui_ProgressBar_float_float_float_boolean_arc_scene_ui_ProgressBar$ProgressBarStyle(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_ProgressBar(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(50);
	init_arc_scene_Element(ctx, (frame[0].o));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_linear;
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_animateInterpolation = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_math_Interp(ctx);
	sp[1].o = (jobject)SF_arc_math_Interp_linear;
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_visualInterpolation = (jref) sp[1].o;
	LINE_NUMBER(36);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round = (jint(1));
	LINE_NUMBER(51);
	if ((floatCompare((frame[1].f), (frame[2].f), -1)) <= 0) goto label_5;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"max must be > min. min,max: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(52);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) > 0) goto label_6;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"stepSize must be > 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(53);
	((func_arc_scene_ui_ProgressBar_setStyle_arc_scene_ui_ProgressBar$ProgressBarStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_setStyle_arc_scene_ui_ProgressBar$ProgressBarStyle])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(54);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min = (frame[1].f);
	LINE_NUMBER(55);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max = (frame[2].f);
	LINE_NUMBER(56);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_stepSize = (frame[3].f);
	LINE_NUMBER(57);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_vertical = (frame[4].i);
	LINE_NUMBER(58);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].f);
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_ProgressBar_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_ui_ProgressBar_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_arc_scene_ui_ProgressBar_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ProgressBar_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_ProgressBar_getStyle_R_arc_scene_ui_ProgressBar$ProgressBarStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ProgressBar_setStyle_arc_scene_ui_ProgressBar$ProgressBarStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(72);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(73);
	((func_arc_scene_ui_ProgressBar_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ProgressBar_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:act", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(78);
	M_arc_scene_Element_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(79);
	if ((floatCompare(((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateTime), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_animateTime = (((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_animateTime) - (frame[1].f));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((func_arc_scene_ui_ProgressBar_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(82);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_scene_Scene_getActionsRequestRendering_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_Scene_getActionsRequestRendering_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_graphics;
	POP_N(1); // Pop method args
	((func_arc_Graphics_requestRendering) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_requestRendering])(ctx, sp[0].o);
label_2:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_ProgressBar_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[25];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:draw", 25 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	frame[1].o = sp[0].o;
	LINE_NUMBER(89);
	frame[2].i = ((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled);
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_arc_scene_ui_ProgressBar_getKnobDrawable_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_getKnobDrawable_R_arc_scene_style_Drawable])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(91);
	if ((frame[2].i) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledBackground;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledBackground;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[-1].o))->F_background;
label_5:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(92);
	if ((frame[2].i) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnobBefore;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnobBefore;
	sp += 1;
	goto label_8;
	}
label_7:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[-1].o))->F_knobBefore;
label_8:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(93);
	if ((frame[2].i) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnobAfter;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK((frame[1].o)))->F_disabledKnobAfter;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[-1].o))->F_knobAfter;
label_11:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(95);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	frame[7].o = sp[0].o;
	LINE_NUMBER(96);
	frame[8].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(97);
	frame[9].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(98);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_ProgressBar_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_getWidth_R_float])(ctx, (frame[0].o));
	frame[10].f = temp0;
	LINE_NUMBER(99);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_ProgressBar_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_getHeight_R_float])(ctx, (frame[0].o));
	frame[11].f = temp1;
	LINE_NUMBER(100);
	if ((frame[3].o) != nullptr) goto label_18;
	}
	INST_FCONST(0);
	goto label_19;
label_18:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_19:;
	{
	sp -= 1;
	frame[12].f = sp[0].f;
	LINE_NUMBER(101);
	if ((frame[3].o) != nullptr) goto label_21;
	}
	INST_FCONST(0);
	goto label_22;
label_21:;
	INST_ALOAD(3);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_22:;
	{
	sp -= 1;
	frame[13].f = sp[0].f;
	LINE_NUMBER(102);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_ProgressBar_getVisualPercent_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_getVisualPercent_R_float])(ctx, (frame[0].o));
	frame[14].f = temp0;
	LINE_NUMBER(104);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[7].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[7].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[7].o)))->F_b), (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[7].o)))->F_a) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha)));
	LINE_NUMBER(106);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_vertical) == 0) goto label_26;
	}
	{
	LINE_NUMBER(107);
	frame[15].f = (frame[11].f);
	LINE_NUMBER(109);
	frame[16].f = (jfloat(0));
	LINE_NUMBER(110);
	if ((frame[4].o) == nullptr) goto label_30;
	}
	{
	LINE_NUMBER(111);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_32;
	}
	{
	LINE_NUMBER(112);
	sp[0].o = frame[4].o;
	jfloat temp0 = frame[8].f;
	jfloat temp1 = frame[10].f;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[4].o)))(ctx, (frame[4].o));
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 + ((temp1 - temp2) * (jfloat(0.5f)))));
	jfloat temp4 = jfloat(temp3);
	jfloat temp5 = frame[9].f;
	jfloat temp6 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[4].o)))(ctx, (frame[4].o));
	jint temp7 = (jint)SM_java_lang_Math_round_float_R_int(ctx, temp6);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp4, temp5, (jfloat(temp7)), (frame[11].f));
	goto label_34;
	}
label_32:;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[4].o;
	jfloat temp0 = (frame[8].f) + (frame[10].f);
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[4].o)))(ctx, (frame[4].o));
	jfloat temp2 = temp0 - (temp1 * (jfloat(0.5f)));
	jfloat temp3 = frame[9].f;
	jfloat temp4 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[4].o)))(ctx, (frame[4].o));
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp2, temp3, temp4, (frame[11].f));
	}
label_34:;
	{
	LINE_NUMBER(115);
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, (frame[4].o)))(ctx, (frame[4].o));
	frame[16].f = temp0;
	LINE_NUMBER(116);
	jfloat temp1 = frame[15].f;
	jfloat temp2 = frame[16].f;
	jfloat temp3 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, (frame[4].o)))(ctx, (frame[4].o));
	frame[15].f = (temp1 - (temp2 + temp3));
	}
label_30:;
	{
	LINE_NUMBER(119);
	frame[17].f = (jfloat(0));
	LINE_NUMBER(120);
	if ((floatCompare(((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max), -1)) == 0) goto label_37;
	}
	{
	LINE_NUMBER(121);
	if ((frame[3].o) != nullptr) goto label_39;
	}
	{
	LINE_NUMBER(122);
	if ((frame[5].o) != nullptr) goto label_41;
	}
	INST_FCONST(0);
	goto label_42;
label_41:;
	{
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp1 = temp0 * (jfloat(0.5f));
	sp[0].f = temp1;
	sp += 1;
	}
label_42:;
	{
	sp -= 1;
	frame[17].f = sp[0].f;
	LINE_NUMBER(123);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position = (((frame[15].f) - (frame[17].f)) * (frame[14].f));
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[15].f) - (frame[17].f)), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = temp0;
	goto label_45;
	}
label_39:;
	{
	LINE_NUMBER(126);
	frame[17].f = ((frame[12].f) * (jfloat(0.5f)));
	LINE_NUMBER(127);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position = (((frame[15].f) - (frame[12].f)) * (frame[14].f));
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[15].f) - (frame[12].f)), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, (frame[4].o)))(ctx, (frame[4].o));
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = (temp0 + temp1);
	}
label_45:;
	{
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = temp0;
	}
label_37:;
	{
	LINE_NUMBER(133);
	if ((frame[5].o) == nullptr) goto label_48;
	}
	{
	LINE_NUMBER(134);
	frame[18].f = (jfloat(0));
	LINE_NUMBER(135);
	if ((frame[4].o) == nullptr) goto label_51;
	}
	INST_FLOAD(16);
	INST_FSTORE(18);
label_51:;
	{
	LINE_NUMBER(136);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_52;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = frame[5].o;
	jfloat temp0 = frame[8].f;
	jfloat temp1 = frame[10].f;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 + ((temp1 - temp2) * (jfloat(0.5f)))));
	jfloat temp4 = jfloat(temp3);
	jint temp5 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[9].f) + (frame[18].f)));
	jfloat temp6 = jfloat(temp5);
	jfloat temp7 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jint temp8 = (jint)SM_java_lang_Math_round_float_R_int(ctx, temp7);
	jfloat temp9 = jfloat(temp8);
	jfloat temp10 = ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position) + (frame[17].f);
	LINE_NUMBER(138);
	jint temp11 = (jint)SM_java_lang_Math_round_float_R_int(ctx, temp10);
	jfloat temp12 = jfloat(temp11);
	LINE_NUMBER(137);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp4, temp6, temp9, temp12);
	goto label_48;
	}
label_52:;
	{
	LINE_NUMBER(140);
	sp[0].o = frame[5].o;
	jfloat temp0 = frame[8].f;
	jfloat temp1 = frame[10].f;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp3 = temp0 + ((temp1 - temp2) * (jfloat(0.5f)));
	jfloat temp4 = (frame[9].f) + (frame[18].f);
	jfloat temp5 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp3, temp4, temp5, (((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position) + (frame[17].f)));
	}
label_48:;
	{
	LINE_NUMBER(143);
	if ((frame[6].o) == nullptr) goto label_56;
	}
	{
	LINE_NUMBER(144);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_58;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = frame[6].o;
	jfloat temp0 = frame[8].f;
	jfloat temp1 = frame[10].f;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[6].o)))(ctx, (frame[6].o));
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp0 + ((temp1 - temp2) * (jfloat(0.5f)))));
	jfloat temp4 = jfloat(temp3);
	jint temp5 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (((frame[9].f) + ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)) + (frame[17].f)));
	jfloat temp6 = jfloat(temp5);
	sp[1].o = frame[6].o;
	LINE_NUMBER(146);
	jfloat temp7 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[1].o))(ctx, sp[1].o);
	jint temp8 = (jint)SM_java_lang_Math_round_float_R_int(ctx, temp7);
	jfloat temp9 = jfloat(temp8);
	jint temp10 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (((frame[11].f) - ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)) - (frame[17].f)));
	jfloat temp11 = jfloat(temp10);
	LINE_NUMBER(145);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp4, temp6, temp9, temp11);
	goto label_56;
	}
label_58:;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[6].o;
	jfloat temp0 = frame[8].f;
	jfloat temp1 = frame[10].f;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[6].o)))(ctx, (frame[6].o));
	jfloat temp3 = temp0 + ((temp1 - temp2) * (jfloat(0.5f)));
	jfloat temp4 = ((frame[9].f) + ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)) + (frame[17].f);
	sp[1].o = frame[6].o;
	LINE_NUMBER(149);
	jfloat temp5 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp6 = ((frame[11].f) - ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)) - (frame[17].f);
	LINE_NUMBER(148);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp3, temp4, temp5, temp6);
	}
label_56:;
	{
	LINE_NUMBER(151);
	if ((frame[3].o) == nullptr) goto label_64;
	}
	{
	LINE_NUMBER(152);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_66;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[8].f) + (((frame[10].f) - (frame[13].f)) * (jfloat(0.5f)))));
	jfloat temp1 = jfloat(temp0);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[9].f) + ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)));
	jfloat temp3 = jfloat(temp2);
	jint temp4 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[13].f));
	jfloat temp5 = jfloat(temp4);
	jint temp6 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[12].f));
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp1, temp3, temp5, (jfloat(temp6)));
	goto label_64;
	}
label_66:;
	{
	LINE_NUMBER(155);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, (frame[3].o)))(ctx, (frame[3].o), ((frame[8].f) + (((frame[10].f) - (frame[13].f)) * (jfloat(0.5f)))), ((frame[9].f) + ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)), (frame[13].f), (frame[12].f));
	}
label_64:;
	LINE_NUMBER(157);
	goto label_68;
label_26:;
	{
	LINE_NUMBER(158);
	frame[15].f = (frame[10].f);
	LINE_NUMBER(159);
	frame[16].f = (jfloat(0));
	LINE_NUMBER(161);
	if ((frame[4].o) == nullptr) goto label_71;
	}
	{
	LINE_NUMBER(163);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, (frame[4].o)))(ctx, (frame[4].o), (frame[8].f), (frame[9].f), (frame[10].f), (frame[11].f));
	}
label_71:;
	{
	LINE_NUMBER(166);
	frame[17].f = (jfloat(0));
	LINE_NUMBER(167);
	if ((floatCompare(((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max), -1)) == 0) goto label_74;
	}
	{
	LINE_NUMBER(168);
	if ((frame[3].o) != nullptr) goto label_76;
	}
	{
	LINE_NUMBER(169);
	if ((frame[5].o) != nullptr) goto label_78;
	}
	INST_FCONST(0);
	goto label_79;
label_78:;
	{
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp1 = temp0 * (jfloat(0.5f));
	sp[0].f = temp1;
	sp += 1;
	}
label_79:;
	{
	sp -= 1;
	frame[17].f = sp[0].f;
	LINE_NUMBER(170);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position = (((frame[15].f) - (frame[17].f)) * (frame[14].f));
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[15].f) - (frame[17].f)), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = temp0;
	goto label_82;
	}
label_76:;
	{
	LINE_NUMBER(173);
	frame[17].f = ((frame[13].f) * (jfloat(0.5f)));
	LINE_NUMBER(174);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position = (((frame[15].f) - (frame[13].f)) * (frame[14].f));
	LINE_NUMBER(175);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[15].f) - (frame[13].f)), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = (temp0 + (frame[16].f));
	}
label_82:;
	{
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position));
	((arc_scene_ui_ProgressBar *) NULL_CHECK(sp[0].o))->F_position = temp0;
	}
label_74:;
	{
	LINE_NUMBER(180);
	if ((frame[5].o) == nullptr) goto label_85;
	}
	{
	LINE_NUMBER(181);
	frame[18].f = (jfloat(0));
	LINE_NUMBER(182);
	if ((frame[4].o) == nullptr) goto label_88;
	}
	INST_FLOAD(16);
	INST_FSTORE(18);
label_88:;
	{
	LINE_NUMBER(183);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_89;
	}
	{
	LINE_NUMBER(184);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[8].f) + (frame[18].f)));
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = frame[9].f;
	jfloat temp3 = frame[11].f;
	jfloat temp4 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jint temp5 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp2 + ((temp3 - temp4) * (jfloat(0.5f)))));
	jfloat temp6 = jfloat(temp5);
	jfloat temp7 = ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position) + (frame[17].f);
	LINE_NUMBER(185);
	jint temp8 = (jint)SM_java_lang_Math_round_float_R_int(ctx, temp7);
	jfloat temp9 = jfloat(temp8);
	jfloat temp10 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jint temp11 = (jint)SM_java_lang_Math_round_float_R_int(ctx, temp10);
	jfloat temp12 = jfloat(temp11);
	LINE_NUMBER(184);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp1, temp6, temp9, temp12);
	goto label_85;
	}
label_89:;
	{
	LINE_NUMBER(187);
	sp[0].o = frame[5].o;
	jfloat temp0 = (frame[8].f) + (frame[18].f);
	jfloat temp1 = frame[9].f;
	jfloat temp2 = frame[11].f;
	jfloat temp3 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp4 = temp1 + ((temp2 - temp3) * (jfloat(0.5f)));
	jfloat temp5 = ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position) + (frame[17].f);
	sp[1].o = frame[5].o;
	LINE_NUMBER(188);
	jfloat temp6 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[1].o))(ctx, sp[1].o);
	LINE_NUMBER(187);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp4, temp5, temp6);
	}
label_85:;
	{
	LINE_NUMBER(190);
	if ((frame[6].o) == nullptr) goto label_95;
	}
	{
	LINE_NUMBER(191);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_97;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = frame[6].o;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (((frame[8].f) + ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)) + (frame[17].f)));
	jfloat temp1 = jfloat(temp0);
	jfloat temp2 = frame[9].f;
	jfloat temp3 = frame[11].f;
	jfloat temp4 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[6].o)))(ctx, (frame[6].o));
	jint temp5 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (temp2 + ((temp3 - temp4) * (jfloat(0.5f)))));
	jfloat temp6 = jfloat(temp5);
	jfloat temp7 = ((frame[10].f) - ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)) - (frame[17].f);
	LINE_NUMBER(193);
	jint temp8 = (jint)SM_java_lang_Math_round_float_R_int(ctx, temp7);
	jfloat temp9 = jfloat(temp8);
	jfloat temp10 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[6].o)))(ctx, (frame[6].o));
	jint temp11 = (jint)SM_java_lang_Math_round_float_R_int(ctx, temp10);
	jfloat temp12 = jfloat(temp11);
	LINE_NUMBER(192);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp1, temp6, temp9, temp12);
	goto label_95;
	}
label_97:;
	{
	LINE_NUMBER(195);
	sp[0].o = frame[6].o;
	jfloat temp0 = ((frame[8].f) + ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)) + (frame[17].f);
	jfloat temp1 = frame[9].f;
	jfloat temp2 = frame[11].f;
	jfloat temp3 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[6].o)))(ctx, (frame[6].o));
	jfloat temp4 = temp1 + ((temp2 - temp3) * (jfloat(0.5f)));
	jfloat temp5 = ((frame[10].f) - ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)) - (frame[17].f);
	sp[1].o = frame[6].o;
	LINE_NUMBER(196);
	jfloat temp6 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[1].o))(ctx, sp[1].o);
	LINE_NUMBER(195);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp4, temp5, temp6);
	}
label_95:;
	{
	LINE_NUMBER(198);
	if ((frame[3].o) == nullptr) goto label_68;
	}
	{
	LINE_NUMBER(199);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_104;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = frame[3].o;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[8].f) + ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)));
	jfloat temp1 = jfloat(temp0);
	jint temp2 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[9].f) + (((frame[11].f) - (frame[12].f)) * (jfloat(0.5f)))));
	jfloat temp3 = jfloat(temp2);
	jint temp4 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[13].f));
	jfloat temp5 = jfloat(temp4);
	jint temp6 = (jint)SM_java_lang_Math_round_float_R_int(ctx, (frame[12].f));
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp1, temp3, temp5, (jfloat(temp6)));
	goto label_68;
	}
label_104:;
	{
	LINE_NUMBER(202);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, (frame[3].o)))(ctx, (frame[3].o), ((frame[8].f) + ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position)), ((frame[9].f) + (((frame[11].f) - (frame[12].f)) * (jfloat(0.5f)))), (frame[13].f), (frame[12].f));
	}
label_68:;
	LINE_NUMBER(205);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ProgressBar_getValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ProgressBar_getVisualValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:getVisualValue", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(213);
	if ((floatCompare(((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateTime), (jfloat(0)), -1)) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateInterpolation;
	jfloat temp0 = (jfloat)((func_arc_math_Interp_apply_float_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_float_float_R_float, sp[0].o))(ctx, sp[0].o, ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateFromValue), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value), ((jfloat(1)) - (((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateTime) / ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateDuration))));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ProgressBar_getPercent_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:getPercent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	popStackFrame(ctx);
	return ((((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value) - ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min)) / (((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max) - ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min)));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ProgressBar_getVisualPercent_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:getVisualPercent", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_visualInterpolation;
	jfloat temp0 = (jfloat)((func_arc_scene_ui_ProgressBar_getVisualValue_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_getVisualValue_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_Interp_apply_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_Interp, INDEX_arc_math_Interp_apply_float_R_float, sp[0].o))(ctx, sp[0].o, ((temp0 - ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min)) / (((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max) - ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min))));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_ProgressBar_getKnobDrawable_R_arc_scene_style_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:getKnobDrawable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(227);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledKnob;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledKnob;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_knob;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ProgressBar_getKnobPosition_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:getKnobPosition", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(232);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_position);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ProgressBar_setValue_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:setValue", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(242);
	jint temp0 = (jint)((func_arc_scene_ui_ProgressBar_setValue_float_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_setValue_float_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].f), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ProgressBar_setValue_float_boolean_R_boolean(jcontext ctx, jobject self, jfloat param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:setValue", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(247);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((frame[1].f) / ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_stepSize)));
	jfloat temp1 = (jfloat)((func_arc_scene_ui_ProgressBar_clamp_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_ProgressBar_clamp_float_R_float])(ctx, sp[0].o, ((jfloat(temp0)) * ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_stepSize)));
	frame[1].f = temp1;
	LINE_NUMBER(248);
	frame[3].f = ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value);
	LINE_NUMBER(249);
	if ((floatCompare((frame[1].f), (frame[3].f), -1)) != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(250);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_ProgressBar_getVisualValue_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_getVisualValue_R_float])(ctx, (frame[0].o));
	frame[4].f = temp0;
	LINE_NUMBER(251);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].f);
	LINE_NUMBER(252);
	if ((frame[2].i) == 0) goto label_6;
	}
	{
	sp[0].o = ((jobject) &class_arc_scene_event_ChangeListener$ChangeEvent);
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_ProgressBar_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_scene_ui_ProgressBar_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_scene_ui_ProgressBar_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_arc_scene_event_ChangeListener$ChangeEvent, sp[0].o);
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(253);
	if ((frame[2].i) == 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_scene_ui_ProgressBar_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, (frame[0].o), (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	INST_ICONST(1);
	goto label_10;
label_9:;
	INST_ICONST(0);
label_10:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(254);
	if ((frame[6].i) == 0) goto label_12;
	}
	{
	LINE_NUMBER(255);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value = (frame[3].f);
	goto label_14;
	}
label_12:;
	{
	LINE_NUMBER(256);
	if ((floatCompare(((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateDuration), (jfloat(0)), -1)) <= 0) goto label_14;
	}
	{
	LINE_NUMBER(257);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateFromValue = (frame[4].f);
	LINE_NUMBER(258);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateTime = ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateDuration);
	}
label_14:;
	{
	LINE_NUMBER(260);
	if ((frame[2].i) == 0) goto label_17;
	}
	INST_ALOAD(5);
	POP_N(1); // Pop method args
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, sp[0].o);
label_17:;
	{
	LINE_NUMBER(261);
	if ((frame[6].i) != 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ProgressBar_clamp_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:clamp", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(269);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_float_float_R_float(ctx, (frame[1].f), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min), ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ProgressBar_setRange_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:setRange", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(274);
	if ((floatCompare((frame[1].f), (frame[2].f), -1)) <= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"min must be <= max"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(275);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min = (frame[1].f);
	LINE_NUMBER(276);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max = (frame[2].f);
	LINE_NUMBER(277);
	if ((floatCompare(((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value), (frame[1].f), 1)) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(278);
	jint temp0 = (jint)((func_arc_scene_ui_ProgressBar_setValue_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_setValue_float_R_boolean])(ctx, (frame[0].o), (frame[1].f));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(279);
	if ((floatCompare(((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_value), (frame[2].f), -1)) <= 0) goto label_6;
	}
	{
	jint temp0 = (jint)((func_arc_scene_ui_ProgressBar_setValue_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_setValue_float_R_boolean])(ctx, (frame[0].o), (frame[2].f));
	}
label_6:;
	LINE_NUMBER(280);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ProgressBar_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:getPrefWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(284);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_vertical) == 0) goto label_1;
	}
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((func_arc_scene_ui_ProgressBar_getKnobDrawable_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_getKnobDrawable_R_arc_scene_style_Drawable])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(286);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_background;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(287);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	INST_FCONST(0);
	goto label_8;
label_7:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_8:;
	{
	sp -= 1;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, sp[0].f, temp0);
	popStackFrame(ctx);
	return temp1;
	}
label_1:;
	{
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (jfloat(140.0f));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ProgressBar_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:getPrefHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(294);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_vertical) == 0) goto label_1;
	}
	{
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return (jfloat(140.0f));
	}
label_1:;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((func_arc_scene_ui_ProgressBar_getKnobDrawable_R_arc_scene_style_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_ProgressBar_getKnobDrawable_R_arc_scene_style_Drawable])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(298);
	if (((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_disabledBackground;
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_ProgressBar$ProgressBarStyle *) NULL_CHECK(sp[0].o))->F_background;
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(299);
	if ((frame[1].o) != nullptr) goto label_7;
	}
	INST_FCONST(0);
	goto label_8;
label_7:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_8:;
	INST_ALOAD(2);
	if ((--sp)->o != nullptr) goto label_9;
	INST_FCONST(0);
	goto label_10;
label_9:;
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	sp++;
label_10:;
	POP_N(2); // Pop method args
	sp->f = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, sp[0].f, sp[1].f);
	sp++;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ProgressBar_getMinValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:getMinValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_min);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ProgressBar_getMaxValue_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:getMaxValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(308);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_max);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_ProgressBar_getStepSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:getStepSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_stepSize);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ProgressBar_setStepSize_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:setStepSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(316);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) > 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"steps must be > 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(317);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_stepSize = (frame[1].f);
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ProgressBar_setAnimateDuration_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:setAnimateDuration", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(322);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateDuration = (frame[1].f);
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ProgressBar_setAnimateInterpolation_arc_math_Interp(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:setAnimateInterpolation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(327);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"animateInterpolation cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(328);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_animateInterpolation = (jref) (frame[1].o);
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ProgressBar_setVisualInterpolation_arc_math_Interp(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:setVisualInterpolation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(333);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_visualInterpolation = (jref) (frame[1].o);
	LINE_NUMBER(334);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ProgressBar_setRound_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:setRound", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(338);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_round = (frame[1].i);
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ProgressBar_isDisabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:isDisabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_ProgressBar_setDisabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:setDisabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(348);
	((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_disabled = (frame[1].i);
	LINE_NUMBER(349);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_ProgressBar_isVertical_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/ProgressBar:isVertical", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_ProgressBar *) NULL_CHECK((frame[0].o)))->F_vertical);
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_ProgressBar[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Element_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_ProgressBar_draw,
	(void *) M_arc_scene_ui_ProgressBar_act_float,
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
	(void *) M_arc_scene_Element_getMinWidth_R_float,
	(void *) M_arc_scene_Element_getMinHeight_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_Element_setLayoutEnabled_boolean,
	(void *) M_arc_scene_Element_validate,
	(void *) M_arc_scene_Element_needsLayout_R_boolean,
	(void *) M_arc_scene_Element_invalidate,
	(void *) M_arc_scene_Element_invalidateHierarchy,
	(void *) M_arc_scene_Element_pack,
	(void *) M_arc_scene_Element_setFillParent_boolean,
	(void *) M_arc_scene_Element_layout,
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
	(void *) M_arc_scene_ui_ProgressBar_isDisabled_R_boolean,
	(void *) M_arc_scene_ui_ProgressBar_setDisabled_boolean,
	(void *) M_arc_scene_ui_ProgressBar_getStyle_R_arc_scene_ui_ProgressBar$ProgressBarStyle,
	(void *) M_arc_scene_ui_ProgressBar_setStyle_arc_scene_ui_ProgressBar$ProgressBarStyle,
	(void *) M_arc_scene_ui_ProgressBar_getValue_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getVisualValue_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getPercent_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getVisualPercent_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getKnobDrawable_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_ProgressBar_getKnobPosition_R_float,
	(void *) M_arc_scene_ui_ProgressBar_setValue_float_R_boolean,
	(void *) M_arc_scene_ui_ProgressBar_setValue_float_boolean_R_boolean,
	(void *) M_arc_scene_ui_ProgressBar_clamp_float_R_float,
	(void *) M_arc_scene_ui_ProgressBar_setRange_float_float,
	(void *) M_arc_scene_ui_ProgressBar_getMinValue_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getMaxValue_R_float,
	(void *) M_arc_scene_ui_ProgressBar_getStepSize_R_float,
	(void *) M_arc_scene_ui_ProgressBar_setStepSize_float,
	(void *) M_arc_scene_ui_ProgressBar_setAnimateDuration_float,
	(void *) M_arc_scene_ui_ProgressBar_setAnimateInterpolation_arc_math_Interp,
	(void *) M_arc_scene_ui_ProgressBar_setVisualInterpolation_arc_math_Interp,
	(void *) M_arc_scene_ui_ProgressBar_setRound_boolean,
	(void *) M_arc_scene_ui_ProgressBar_isVertical_R_boolean,
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
	{ "isDisabled", "()Z" },
	{ "setDisabled", "(Z)V" },
	{ "getStyle", "()Larc/scene/ui/ProgressBar$ProgressBarStyle;" },
	{ "setStyle", "(Larc/scene/ui/ProgressBar$ProgressBarStyle;)V" },
	{ "getValue", "()F" },
	{ "getVisualValue", "()F" },
	{ "getPercent", "()F" },
	{ "getVisualPercent", "()F" },
	{ "getKnobDrawable", "()Larc/scene/style/Drawable;" },
	{ "getKnobPosition", "()F" },
	{ "setValue", "(F)Z" },
	{ "setValue", "(FZ)Z" },
	{ "clamp", "(F)F" },
	{ "setRange", "(FF)V" },
	{ "getMinValue", "()F" },
	{ "getMaxValue", "()F" },
	{ "getStepSize", "()F" },
	{ "setStepSize", "(F)V" },
	{ "setAnimateDuration", "(F)V" },
	{ "setAnimateInterpolation", "(Larc/math/Interp;)V" },
	{ "setVisualInterpolation", "(Larc/math/Interp;)V" },
	{ "setRound", "(Z)V" },
	{ "isVertical", "()Z" },
};

static jclass interfaces[] { &class_arc_scene_utils_Disableable, };

static jclass innerClasses[] {
	&class_arc_scene_ui_ProgressBar$ProgressBarStyle,
};

static FieldMetadata fields[] {
	{ "vertical", &class_boolean, offsetof(arc_scene_ui_ProgressBar, F_vertical), "Z", 16 },
	{ "position", &class_float, offsetof(arc_scene_ui_ProgressBar, F_position), "F", 0 },
	{ "disabled", &class_boolean, offsetof(arc_scene_ui_ProgressBar, F_disabled), "Z", 0 },
	{ "style", &class_arc_scene_ui_ProgressBar$ProgressBarStyle, offsetof(arc_scene_ui_ProgressBar, F_style), "Larc/scene/ui/ProgressBar$ProgressBarStyle;", 2 },
	{ "min", &class_float, offsetof(arc_scene_ui_ProgressBar, F_min), "F", 2 },
	{ "max", &class_float, offsetof(arc_scene_ui_ProgressBar, F_max), "F", 2 },
	{ "stepSize", &class_float, offsetof(arc_scene_ui_ProgressBar, F_stepSize), "F", 2 },
	{ "value", &class_float, offsetof(arc_scene_ui_ProgressBar, F_value), "F", 2 },
	{ "animateFromValue", &class_float, offsetof(arc_scene_ui_ProgressBar, F_animateFromValue), "F", 2 },
	{ "animateDuration", &class_float, offsetof(arc_scene_ui_ProgressBar, F_animateDuration), "F", 2 },
	{ "animateTime", &class_float, offsetof(arc_scene_ui_ProgressBar, F_animateTime), "F", 2 },
	{ "animateInterpolation", &class_arc_math_Interp, offsetof(arc_scene_ui_ProgressBar, F_animateInterpolation), "Larc/math/Interp;", 2 },
	{ "visualInterpolation", &class_arc_math_Interp, offsetof(arc_scene_ui_ProgressBar, F_visualInterpolation), "Larc/math/Interp;", 2 },
	{ "round", &class_boolean, offsetof(arc_scene_ui_ProgressBar, F_round), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_ProgressBar_float_float_float_boolean_arc_scene_ui_ProgressBar$ProgressBarStyle, 0, "(FFFZLarc/scene/ui/ProgressBar$ProgressBarStyle;)V", 1 },
	{ "getStyle", (intptr_t) M_arc_scene_ui_ProgressBar_getStyle_R_arc_scene_ui_ProgressBar$ProgressBarStyle, VTABLE_arc_scene_ui_ProgressBar_getStyle_R_arc_scene_ui_ProgressBar$ProgressBarStyle, "()Larc/scene/ui/ProgressBar$ProgressBarStyle;", 1 },
	{ "setStyle", (intptr_t) M_arc_scene_ui_ProgressBar_setStyle_arc_scene_ui_ProgressBar$ProgressBarStyle, VTABLE_arc_scene_ui_ProgressBar_setStyle_arc_scene_ui_ProgressBar$ProgressBarStyle, "(Larc/scene/ui/ProgressBar$ProgressBarStyle;)V", 1 },
	{ "act", (intptr_t) M_arc_scene_ui_ProgressBar_act_float, VTABLE_arc_scene_ui_ProgressBar_act_float, "(F)V", 1 },
	{ "draw", (intptr_t) M_arc_scene_ui_ProgressBar_draw, VTABLE_arc_scene_ui_ProgressBar_draw, "()V", 1 },
	{ "getValue", (intptr_t) M_arc_scene_ui_ProgressBar_getValue_R_float, VTABLE_arc_scene_ui_ProgressBar_getValue_R_float, "()F", 1 },
	{ "getVisualValue", (intptr_t) M_arc_scene_ui_ProgressBar_getVisualValue_R_float, VTABLE_arc_scene_ui_ProgressBar_getVisualValue_R_float, "()F", 1 },
	{ "getPercent", (intptr_t) M_arc_scene_ui_ProgressBar_getPercent_R_float, VTABLE_arc_scene_ui_ProgressBar_getPercent_R_float, "()F", 1 },
	{ "getVisualPercent", (intptr_t) M_arc_scene_ui_ProgressBar_getVisualPercent_R_float, VTABLE_arc_scene_ui_ProgressBar_getVisualPercent_R_float, "()F", 1 },
	{ "getKnobDrawable", (intptr_t) M_arc_scene_ui_ProgressBar_getKnobDrawable_R_arc_scene_style_Drawable, VTABLE_arc_scene_ui_ProgressBar_getKnobDrawable_R_arc_scene_style_Drawable, "()Larc/scene/style/Drawable;", 4 },
	{ "getKnobPosition", (intptr_t) M_arc_scene_ui_ProgressBar_getKnobPosition_R_float, VTABLE_arc_scene_ui_ProgressBar_getKnobPosition_R_float, "()F", 4 },
	{ "setValue", (intptr_t) M_arc_scene_ui_ProgressBar_setValue_float_R_boolean, VTABLE_arc_scene_ui_ProgressBar_setValue_float_R_boolean, "(F)Z", 1 },
	{ "setValue", (intptr_t) M_arc_scene_ui_ProgressBar_setValue_float_boolean_R_boolean, VTABLE_arc_scene_ui_ProgressBar_setValue_float_boolean_R_boolean, "(FZ)Z", 1 },
	{ "clamp", (intptr_t) M_arc_scene_ui_ProgressBar_clamp_float_R_float, VTABLE_arc_scene_ui_ProgressBar_clamp_float_R_float, "(F)F", 4 },
	{ "setRange", (intptr_t) M_arc_scene_ui_ProgressBar_setRange_float_float, VTABLE_arc_scene_ui_ProgressBar_setRange_float_float, "(FF)V", 1 },
	{ "getPrefWidth", (intptr_t) M_arc_scene_ui_ProgressBar_getPrefWidth_R_float, VTABLE_arc_scene_ui_ProgressBar_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_arc_scene_ui_ProgressBar_getPrefHeight_R_float, VTABLE_arc_scene_ui_ProgressBar_getPrefHeight_R_float, "()F", 1 },
	{ "getMinValue", (intptr_t) M_arc_scene_ui_ProgressBar_getMinValue_R_float, VTABLE_arc_scene_ui_ProgressBar_getMinValue_R_float, "()F", 1 },
	{ "getMaxValue", (intptr_t) M_arc_scene_ui_ProgressBar_getMaxValue_R_float, VTABLE_arc_scene_ui_ProgressBar_getMaxValue_R_float, "()F", 1 },
	{ "getStepSize", (intptr_t) M_arc_scene_ui_ProgressBar_getStepSize_R_float, VTABLE_arc_scene_ui_ProgressBar_getStepSize_R_float, "()F", 1 },
	{ "setStepSize", (intptr_t) M_arc_scene_ui_ProgressBar_setStepSize_float, VTABLE_arc_scene_ui_ProgressBar_setStepSize_float, "(F)V", 1 },
	{ "setAnimateDuration", (intptr_t) M_arc_scene_ui_ProgressBar_setAnimateDuration_float, VTABLE_arc_scene_ui_ProgressBar_setAnimateDuration_float, "(F)V", 1 },
	{ "setAnimateInterpolation", (intptr_t) M_arc_scene_ui_ProgressBar_setAnimateInterpolation_arc_math_Interp, VTABLE_arc_scene_ui_ProgressBar_setAnimateInterpolation_arc_math_Interp, "(Larc/math/Interp;)V", 1 },
	{ "setVisualInterpolation", (intptr_t) M_arc_scene_ui_ProgressBar_setVisualInterpolation_arc_math_Interp, VTABLE_arc_scene_ui_ProgressBar_setVisualInterpolation_arc_math_Interp, "(Larc/math/Interp;)V", 1 },
	{ "setRound", (intptr_t) M_arc_scene_ui_ProgressBar_setRound_boolean, VTABLE_arc_scene_ui_ProgressBar_setRound_boolean, "(Z)V", 1 },
	{ "isDisabled", (intptr_t) M_arc_scene_ui_ProgressBar_isDisabled_R_boolean, VTABLE_arc_scene_ui_ProgressBar_isDisabled_R_boolean, "()Z", 1 },
	{ "setDisabled", (intptr_t) M_arc_scene_ui_ProgressBar_setDisabled_boolean, VTABLE_arc_scene_ui_ProgressBar_setDisabled_boolean, "(Z)V", 1 },
	{ "isVertical", (intptr_t) M_arc_scene_ui_ProgressBar_isVertical_R_boolean, VTABLE_arc_scene_ui_ProgressBar_isVertical_R_boolean, "()Z", 1 },
};

Class class_arc_scene_ui_ProgressBar{
		.nativeName = (intptr_t) "arc/scene/ui/ProgressBar",
		.parentClass = (intptr_t) &class_arc_scene_Element,
		.size = sizeof(arc_scene_ui_ProgressBar),
		.classVtable = (intptr_t) vtable_arc_scene_ui_ProgressBar,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_ProgressBar,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_ProgressBar,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 28,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 144,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_ProgressBar = registerClass(&class_arc_scene_ui_ProgressBar);

}
