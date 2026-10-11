#include "mindustry/ui/Bar.h"
#include "arc/func/Prov.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/graphics/g2d/Font.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/ui/Bar_invoke_java_lang_Runnable_3.h"
#include "mindustry/ui/Bar_invoke_java_lang_Runnable_2.h"
#include "arc/math/geom/Rect.h"
#include "java/lang/Float.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/String.h"
#include "arc/util/pooling/Pools.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/style/Drawable.h"
#include "arc/func/Floatp.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/GlyphLayout.h"
#include "arc/Core.h"
#include "mindustry/gen/Tex.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/Fonts.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "java/lang/Class.h"
#include "arc/graphics/g2d/FontCache.h"
#include "mindustry/ui/Bar_invoke_arc_func_Prov_1.h"
#include "arc/graphics/g2d/ScissorStack.h"

extern "C" {

jobject SF_mindustry_ui_Bar_scissor;

void mark_mindustry_ui_Bar(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_Bar_scissor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Bar_scissor)->clazz)->markFunction)((jobject) SF_mindustry_ui_Bar_scissor, mark, depth + 1);
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
	auto self = (mindustry_ui_Bar *) object;
	if (self->F_fraction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fraction)->clazz)->markFunction)((jobject) self->F_fraction, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_blinkColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blinkColor)->clazz)->markFunction)((jobject) self->F_blinkColor, mark, depth + 1);
	if (self->F_outlineColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_outlineColor)->clazz)->markFunction)((jobject) self->F_outlineColor, mark, depth + 1);
}

void init_mindustry_ui_Bar_java_lang_String_arc_graphics_Color_arc_func_Floatp(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Bar:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Bar(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(23);
	init_arc_scene_Element(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[1].o);
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_blinkColor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[1].o);
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_outlineColor = (jref) sp[1].o;
	LINE_NUMBER(24);
	((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_fraction = (jref) (frame[3].o);
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (frame[1].o), (frame[1].o));
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_blinkColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, (frame[3].o)))(ctx, (frame[3].o));
	((mindustry_ui_Bar *) NULL_CHECK(sp[1].o))->F_value = temp0;
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_lastValue = temp0;
	LINE_NUMBER(28);
	((func_mindustry_ui_Bar_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_Bar_setColor_arc_graphics_Color])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Bar:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Bar(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(31);
	init_arc_scene_Element(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[1].o);
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_blinkColor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[1].o);
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_outlineColor = (jref) sp[1].o;
	LINE_NUMBER(32);
	((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_fraction = (jref) (frame[3].o);
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, (frame[3].o)))(ctx, (frame[3].o));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	((mindustry_ui_Bar *) NULL_CHECK(sp[1].o))->F_value = temp1;
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_lastValue = temp1;
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Bar_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_ui_Bar_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_ui_Bar_invoke_java_lang_Runnable_2);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_Bar_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_Bar_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_Bar(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Bar:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Bar(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(41);
	init_arc_scene_Element(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[1].o);
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_blinkColor = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[1].o);
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_outlineColor = (jref) sp[1].o;
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_Bar_reset_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Bar:reset", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	((mindustry_ui_Bar *) NULL_CHECK(sp[2].o))->F_blink = temp0;
	((mindustry_ui_Bar *) NULL_CHECK(sp[1].o))->F_lastValue = temp0;
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_value = temp0;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_Bar_set_arc_func_Prov_arc_func_Floatp_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Bar:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(50);
	((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_fraction = (jref) (frame[2].o);
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_lastValue = temp0;
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_blinkColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(53);
	((func_mindustry_ui_Bar_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_Bar_setColor_arc_graphics_Color])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Bar_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ui_Bar_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ui_Bar_invoke_java_lang_Runnable_3);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_ui_Bar_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_Bar_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_Bar_snap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Bar:snap", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_fraction;
	jfloat temp0 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, sp[2].o))(ctx, sp[2].o);
	((mindustry_ui_Bar *) NULL_CHECK(sp[1].o))->F_value = temp0;
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_lastValue = temp0;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_Bar_outline_arc_graphics_Color_float_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Bar:outline", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (frame[2].f));
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_outlineRadius = temp0;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_Bar_flash(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Bar:flash", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_blink = (jfloat(1));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Bar:blink", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_blinkColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_Bar_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Bar:draw", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_fraction;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_fraction;
	jfloat temp0 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, temp0);
	frame[1].f = temp1;
	LINE_NUMBER(83);
	if ((floatCompare(((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_lastValue), (frame[1].f), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(84);
	((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_blink = (jfloat(1));
	LINE_NUMBER(85);
	((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_lastValue = (frame[1].f);
	}
label_3:;
	{
	LINE_NUMBER(88);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_lastValue));
	if (temp0 == 0) goto label_6;
	}
	{
	((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_lastValue = (jfloat(0));
	}
label_6:;
	{
	LINE_NUMBER(89);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, ((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_lastValue));
	if (temp0 == 0) goto label_7;
	}
	{
	((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_lastValue = (jfloat(1));
	}
label_7:;
	{
	LINE_NUMBER(90);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_value));
	if (temp0 == 0) goto label_8;
	}
	{
	((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_value = (jfloat(0));
	}
label_8:;
	{
	LINE_NUMBER(91);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, ((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_value));
	if (temp0 == 0) goto label_9;
	}
	{
	((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_value = (jfloat(1));
	}
label_9:;
	{
	LINE_NUMBER(92);
	jint temp0 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[1].f));
	if (temp0 == 0) goto label_10;
	}
	INST_FCONST(0);
	INST_FSTORE(1);
label_10:;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[1].f));
	if (temp0 == 0) goto label_11;
	}
	INST_FCONST(1);
	INST_FSTORE(1);
label_11:;
	{
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_blink), (jfloat(0)), (jfloat(0.2f)));
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_blink = temp0;
	LINE_NUMBER(96);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_value), (frame[1].f), (jfloat(0.15f)));
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_value = temp1;
	LINE_NUMBER(98);
	clinit_mindustry_gen_Tex(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Tex_bar;
	frame[2].o = sp[0].o;
	LINE_NUMBER(100);
	if ((floatCompare(((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_outlineRadius), (jfloat(0)), -1)) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_outlineColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(102);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, (frame[2].o)))(ctx, (frame[2].o), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) - ((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_outlineRadius)), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) - ((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_outlineRadius)), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) + (((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_outlineRadius) * (jfloat(2)))), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) + (((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_outlineRadius) * (jfloat(2)))));
	}
label_15:;
	{
	LINE_NUMBER(105);
	SM_arc_graphics_g2d_Draw_colorl_float(ctx, (jfloat(0.1f)));
	LINE_NUMBER(106);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(107);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, (frame[2].o)))(ctx, (frame[2].o), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_blinkColor;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_arc_graphics_Color_float(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_blink));
	LINE_NUMBER(109);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(111);
	clinit_mindustry_gen_Tex(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Tex_barTop;
	frame[3].o = sp[0].o;
	LINE_NUMBER(112);
	frame[4].f = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) * ((jfloat)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_value));
	LINE_NUMBER(114);
	jfloat temp0 = frame[4].f;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bar-top"_j))));
	if ((floatCompare(temp0, (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width))), -1)) <= 0) goto label_25;
	}
	{
	LINE_NUMBER(115);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, (frame[3].o)))(ctx, (frame[3].o), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), (frame[4].f), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	goto label_27;
	}
label_25:;
	{
	LINE_NUMBER(117);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Bar_scissor;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), (frame[4].f), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	jint temp0 = (jint)SM_arc_graphics_g2d_ScissorStack_push_arc_math_geom_Rect_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_27;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bar-top"_j))));
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, (jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_width))), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(119);
	sp[0].o = (jobject)SM_arc_graphics_g2d_ScissorStack_pop_R_arc_math_geom_Rect(ctx);
	}
label_27:;
	{
	LINE_NUMBER(123);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(125);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_outline;
	frame[5].o = sp[0].o;
	LINE_NUMBER(126);
	sp[0].o = ((jobject) &class_arc_graphics_g2d_GlyphLayout);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_Bar_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_ui_Bar_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_ui_Bar_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_arc_graphics_g2d_GlyphLayout, sp[0].o));
	LINE_NUMBER(127);
	sp[0].o = frame[6].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_name;
	((func_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_GlyphLayout_setText_arc_graphics_g2d_Font_java_lang_CharSequence])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(129);
	((func_arc_graphics_g2d_Font_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_Font_setColor_float_float_float_float])(ctx, (frame[5].o), (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[5].o));
	((func_arc_graphics_g2d_FontCache_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_clear])(ctx, sp[0].o);
	LINE_NUMBER(131);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[5].o));
	sp[1].o = (jobject)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)((func_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_addText_java_lang_CharSequence_float_float_R_arc_graphics_g2d_GlyphLayout])(ctx, sp[0].o, sp[1].o, ((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)))) - (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[6].o)))->F_width) / (jfloat(2)))), (((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)))) + (((jfloat)((arc_graphics_g2d_GlyphLayout *) NULL_CHECK((frame[6].o)))->F_height) / (jfloat(2)))) + (jfloat(1))));
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_graphics_g2d_Font_getCache_R_arc_graphics_g2d_FontCache])(ctx, (frame[5].o));
	((func_arc_graphics_g2d_FontCache_draw_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_FontCache_draw_float])(ctx, sp[0].o, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(134);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[6].o));
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_Bar_lambda$set$0_arc_func_Prov(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Bar:lambda$set$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_name = (jref) (checkCast(ctx, &class_java_lang_CharSequence, sp[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_Bar_lambda$new$0_arc_func_Prov_arc_func_Prov(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Bar:lambda$new$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	((mindustry_ui_Bar *) NULL_CHECK(sp[0].o))->F_name = (jref) (checkCast(ctx, &class_java_lang_CharSequence, sp[1].o));
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_ui_Bar *) NULL_CHECK((frame[0].o)))->F_blinkColor;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (checkCast(ctx, &class_arc_graphics_Color, sp[1].o)));
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	((func_mindustry_ui_Bar_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_Bar_setColor_arc_graphics_Color])(ctx, sp[0].o, (checkCast(ctx, &class_arc_graphics_Color, sp[1].o)));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ui_Bar(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Element(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Bar:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Bar(ctx);
	{
	LINE_NUMBER(16);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[0].o);
	clinit_mindustry_ui_Bar(ctx);
	SF_mindustry_ui_Bar_scissor = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Bar[] {
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
	(void *) M_mindustry_ui_Bar_draw,
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
	(void *) M_arc_scene_Element_getMinWidth_R_float,
	(void *) M_arc_scene_Element_getMinHeight_R_float,
	(void *) M_arc_scene_Element_getPrefWidth_R_float,
	(void *) M_arc_scene_Element_getPrefHeight_R_float,
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
	(void *) M_mindustry_ui_Bar_reset_float,
	(void *) M_mindustry_ui_Bar_set_arc_func_Prov_arc_func_Floatp_arc_graphics_Color,
	(void *) M_mindustry_ui_Bar_snap,
	(void *) M_mindustry_ui_Bar_outline_arc_graphics_Color_float_R_mindustry_ui_Bar,
	(void *) M_mindustry_ui_Bar_flash,
	(void *) M_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar,
	(void *) M_mindustry_ui_Bar_lambda$set$0_arc_func_Prov,
	(void *) M_mindustry_ui_Bar_lambda$new$0_arc_func_Prov_arc_func_Prov,
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
	{ "reset", "(F)V" },
	{ "set", "(Larc/func/Prov;Larc/func/Floatp;Larc/graphics/Color;)V" },
	{ "snap", "()V" },
	{ "outline", "(Larc/graphics/Color;F)Lmindustry/ui/Bar;" },
	{ "flash", "()V" },
	{ "blink", "(Larc/graphics/Color;)Lmindustry/ui/Bar;" },
	{ "lambda$set$0", "(Larc/func/Prov;)V" },
	{ "lambda$new$0", "(Larc/func/Prov;Larc/func/Prov;)V" },
};

static FieldMetadata fields[] {
	{ "scissor", &class_arc_math_geom_Rect, (intptr_t) &SF_mindustry_ui_Bar_scissor, "Larc/math/geom/Rect;", 10 },
	{ "fraction", &class_arc_func_Floatp, offsetof(mindustry_ui_Bar, F_fraction), "Larc/func/Floatp;", 2 },
	{ "name", &class_java_lang_CharSequence, offsetof(mindustry_ui_Bar, F_name), "Ljava/lang/CharSequence;", 2 },
	{ "value", &class_float, offsetof(mindustry_ui_Bar, F_value), "F", 2 },
	{ "lastValue", &class_float, offsetof(mindustry_ui_Bar, F_lastValue), "F", 2 },
	{ "blink", &class_float, offsetof(mindustry_ui_Bar, F_blink), "F", 2 },
	{ "outlineRadius", &class_float, offsetof(mindustry_ui_Bar, F_outlineRadius), "F", 2 },
	{ "blinkColor", &class_arc_graphics_Color, offsetof(mindustry_ui_Bar, F_blinkColor), "Larc/graphics/Color;", 2 },
	{ "outlineColor", &class_arc_graphics_Color, offsetof(mindustry_ui_Bar, F_outlineColor), "Larc/graphics/Color;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Bar_java_lang_String_arc_graphics_Color_arc_func_Floatp, 0, "(Ljava/lang/String;Larc/graphics/Color;Larc/func/Floatp;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp, 0, "(Larc/func/Prov;Larc/func/Prov;Larc/func/Floatp;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ui_Bar, 0, "()V", 1 },
	{ "reset", (intptr_t) M_mindustry_ui_Bar_reset_float, VTABLE_mindustry_ui_Bar_reset_float, "(F)V", 1 },
	{ "set", (intptr_t) M_mindustry_ui_Bar_set_arc_func_Prov_arc_func_Floatp_arc_graphics_Color, VTABLE_mindustry_ui_Bar_set_arc_func_Prov_arc_func_Floatp_arc_graphics_Color, "(Larc/func/Prov;Larc/func/Floatp;Larc/graphics/Color;)V", 1 },
	{ "snap", (intptr_t) M_mindustry_ui_Bar_snap, VTABLE_mindustry_ui_Bar_snap, "()V", 1 },
	{ "outline", (intptr_t) M_mindustry_ui_Bar_outline_arc_graphics_Color_float_R_mindustry_ui_Bar, VTABLE_mindustry_ui_Bar_outline_arc_graphics_Color_float_R_mindustry_ui_Bar, "(Larc/graphics/Color;F)Lmindustry/ui/Bar;", 1 },
	{ "flash", (intptr_t) M_mindustry_ui_Bar_flash, VTABLE_mindustry_ui_Bar_flash, "()V", 1 },
	{ "blink", (intptr_t) M_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar, VTABLE_mindustry_ui_Bar_blink_arc_graphics_Color_R_mindustry_ui_Bar, "(Larc/graphics/Color;)Lmindustry/ui/Bar;", 1 },
	{ "draw", (intptr_t) M_mindustry_ui_Bar_draw, VTABLE_mindustry_ui_Bar_draw, "()V", 1 },
	{ "lambda$set$0", (intptr_t) M_mindustry_ui_Bar_lambda$set$0_arc_func_Prov, VTABLE_mindustry_ui_Bar_lambda$set$0_arc_func_Prov, "(Larc/func/Prov;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_ui_Bar_lambda$new$0_arc_func_Prov_arc_func_Prov, VTABLE_mindustry_ui_Bar_lambda$new$0_arc_func_Prov_arc_func_Prov, "(Larc/func/Prov;Larc/func/Prov;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_Bar, 0, "()V", 8 },
};

Class class_mindustry_ui_Bar{
		.nativeName = (intptr_t) "mindustry/ui/Bar",
		.parentClass = (intptr_t) &class_arc_scene_Element,
		.size = sizeof(mindustry_ui_Bar),
		.classVtable = (intptr_t) vtable_mindustry_ui_Bar,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Bar,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Bar,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 129,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_Bar = registerClass(&class_mindustry_ui_Bar);

}
