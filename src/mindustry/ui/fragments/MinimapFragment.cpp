#include "mindustry/ui/fragments/MinimapFragment.h"
#include "arc/scene/ui/TextField.h"
#include "arc/Input.h"
#include "arc/func/Boolp.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ui/fragments/MinimapFragment_invoke_java_lang_Runnable_4.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/fragments/MinimapFragment_invoke_java_lang_Runnable_5.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/event/Touchable.h"
#include "mindustry/core/Renderer.h"
#include "arc/util/Tmp.h"
#include "mindustry/ui/fragments/MinimapFragment_invoke_arc_func_Cons_1.h"
#include "arc/scene/ui/layout/Cell.h"
#include "arc/Core.h"
#include "mindustry/input/Binding.h"
#include "arc/graphics/Texture.h"
#include "arc/Graphics.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "mindustry/ui/fragments/MinimapFragment_invoke_arc_scene_ui_layout_Table_DrawRect_1.h"
#include "mindustry/ui/fragments/MinimapFragment_invoke_arc_func_Boolp_2.h"
#include "mindustry/ui/fragments/MinimapFragment_invoke_arc_func_Boolp_3.h"
#include "arc/graphics/Camera.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/ui/fragments/MinimapFragment_2.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "mindustry/graphics/MinimapRenderer.h"
#include "mindustry/core/Control.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Table_DrawRect.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/input/KeyBind.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/ui/fragments/ChatFragment.h"
#include "mindustry/ui/Styles.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "arc/scene/style/Style.h"
#include "arc/scene/Element.h"
#include "mindustry/ui/fragments/MinimapFragment_invoke_java_lang_Runnable_3.h"
#include "mindustry/gen/Player.h"
#include "arc/scene/ui/Label_LabelStyle.h"
#include "arc/scene/event/EventListener.h"
#include "mindustry/ui/fragments/MinimapFragment.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/ui/fragments/MinimapFragment_1.h"
#include "mindustry/input/InputHandler.h"

extern "C" {


void mark_mindustry_ui_fragments_MinimapFragment(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_MinimapFragment *) object;
	if (self->F_elem)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_elem)->clazz)->markFunction)((jobject) self->F_elem, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_MinimapFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_fragments_MinimapFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MinimapFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(1));
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_lastZoom = (jfloat(-1.0f));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(5.0f)));
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_baseSize = temp0;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_MinimapFragment_getRectBounds_R_arc_math_geom_Rect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:getRectBounds", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[1].f = (jfloat(temp0));
	LINE_NUMBER(32);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[2].f = (jfloat(temp1));
	LINE_NUMBER(33);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_FCONST(1);
	goto label_4;
label_3:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture])(ctx, sp[0].o);
	jfloat temp0 = jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_height));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture])(ctx, sp[0].o);
	jfloat temp1 = temp0 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_width)));
	sp[0].f = temp1;
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(34);
	jfloat temp0 = ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_baseSize) * ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_zoom);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	frame[4].f = (temp0 * (jfloat(temp1)));
	LINE_NUMBER(36);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((((frame[1].f) / (jfloat(2))) + (((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_panx) * ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_zoom))) - ((frame[4].f) / (jfloat(2)))), ((((frame[2].f) / (jfloat(2))) + (((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_pany) * ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_zoom))) - (((frame[4].f) / (jfloat(2))) * (frame[3].f))), (frame[4].f), ((frame[4].f) * (frame[3].f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MinimapFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:build", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MinimapFragment_invoke_arc_scene_ui_layout_Table$DrawRect_1(ctx);
		auto proxy = (mindustry_ui_fragments_MinimapFragment_invoke_arc_scene_ui_layout_Table$DrawRect_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MinimapFragment_invoke_arc_scene_ui_layout_Table$DrawRect_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element])(ctx, sp[1].o, sp[2].o);
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_elem = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_elem;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MinimapFragment_invoke_arc_func_Boolp_2(ctx);
		auto proxy = (mindustry_ui_fragments_MinimapFragment_invoke_arc_func_Boolp_2 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MinimapFragment_invoke_arc_func_Boolp_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(62);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_elem;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MinimapFragment_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ui_fragments_MinimapFragment_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MinimapFragment_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_elem;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_elem;
	clinit_mindustry_ui_fragments_MinimapFragment$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MinimapFragment$1);
	init_mindustry_ui_fragments_MinimapFragment$1_mindustry_ui_fragments_MinimapFragment(ctx, sp[1].o, (frame[0].o));
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(120);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_elem;
	clinit_mindustry_ui_fragments_MinimapFragment$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_MinimapFragment$2);
	init_mindustry_ui_fragments_MinimapFragment$2_mindustry_ui_fragments_MinimapFragment(ctx, sp[1].o, (frame[0].o));
	jint temp1 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MinimapFragment_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_ui_fragments_MinimapFragment_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MinimapFragment_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Group_fill_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_fill_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MinimapFragment_panTo_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:panTo", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(156);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_MinimapFragment_convert_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_convert_float_float_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	jfloat temp0 = jfloat(-4.0f);
	jfloat temp1 = jfloat(-4.0f);
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[2].o);
	jfloat temp3 = (jfloat(temp2)) + (jfloat(4.0f));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_world;
	jint temp4 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_clamp_float_float_float_float_R_arc_math_geom_Vec2])(ctx, sp[1].o, temp0, temp1, temp3, ((jfloat(temp4)) + (jfloat(4.0f))));
	((func_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_panCamera_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_MinimapFragment_convert_float_float_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:convert", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_mindustry_ui_fragments_MinimapFragment_getRectBounds_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_getRectBounds_R_arc_math_geom_Rect])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(161);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].f), (frame[2].f));
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	jfloat temp1 = temp0 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginLeft);
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (temp2 - ((jfloat)((arc_scene_Scene *) NULL_CHECK(sp[1].o))->F_marginBottom)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat(1)) / ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_width)), ((jfloat(1)) / ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_height)));
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp3 = (jint)((func_mindustry_core_World_unitWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_unitWidth_R_int])(ctx, sp[1].o);
	jfloat temp4 = jfloat(temp3);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp5 = (jint)((func_mindustry_core_World_unitHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_unitHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp4, (jfloat(temp5)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_sub_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(4.0f)), (jfloat(4.0f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_MinimapFragment_shown_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:shown", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_shown);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MinimapFragment_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:hide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(169);
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_shown = (jint(0));
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MinimapFragment_toggle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:toggle", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(174);
	jfloat temp0 = ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_baseSize) * ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_zoom);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	frame[1].f = (temp0 * (jfloat(temp1)));
	LINE_NUMBER(175);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture])(ctx, sp[0].o);
	jfloat temp2 = jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_height));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture])(ctx, sp[0].o);
	frame[2].f = (temp2 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_width))));
	LINE_NUMBER(176);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp3 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp3 == 0) goto label_5;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_player;
	sp[-1].f = ((mindustry_gen_Player *) NULL_CHECK(sp[-1].o))->F_x;
label_6:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[0].o))->F_position;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].f = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_player;
	sp[-1].f = ((mindustry_gen_Player *) NULL_CHECK(sp[-1].o))->F_y;
label_9:;
	{
	sp -= 1;
	frame[4].f = sp[0].f;
	LINE_NUMBER(177);
	sp[0].o = frame[0].o;
	jfloat temp0 = (frame[1].f) / (jfloat(2));
	jfloat temp1 = frame[3].f;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp2 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_panx = ((temp0 - ((temp1 / (jfloat((temp2 * (8))))) * (frame[1].f))) / ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_zoom));
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	jfloat temp3 = ((frame[1].f) * (frame[2].f)) / (jfloat(2));
	jfloat temp4 = frame[4].f;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp5 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_pany = ((temp3 - (((temp4 / (jfloat((temp5 * (8))))) * (frame[1].f)) * (frame[2].f))) / ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_zoom));
	}
label_1:;
	{
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_shown) != 0) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 2;
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK(sp[0].o))->F_shown = sp[1].i;
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MinimapFragment_lambda$build$3_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:lambda$build$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	((func_arc_scene_ui_layout_Table_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setFillParent_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(144);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MinimapFragment_invoke_arc_func_Boolp_3(ctx);
		auto proxy = (mindustry_ui_fragments_MinimapFragment_invoke_arc_func_Boolp_3 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MinimapFragment_invoke_arc_func_Boolp_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_visible_arc_func_Boolp_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(145);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MinimapFragment_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_ui_fragments_MinimapFragment_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MinimapFragment_invoke_java_lang_Runnable_4);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_update_java_lang_Runnable_R_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(147);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@minimap"_j))));
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_outlineLabel;
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_style_arc_scene_style_Style_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(149);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_growY_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o);
	LINE_NUMBER(150);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(151);
	sp[0].o = frame[1].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@back"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_leftOpen;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_MinimapFragment_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_ui_fragments_MinimapFragment_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_ui_fragments_MinimapFragment_invoke_java_lang_Runnable_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_size_float_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(220.0f)), (jfloat(60.0f)));
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_pad_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (jfloat(10.0f)));
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MinimapFragment_lambda$build$6(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:lambda$build$6", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(151);
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_shown = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_fragments_MinimapFragment_lambda$build$5_arc_scene_ui_layout_Table(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:lambda$build$5", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_MinimapFragment(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(145);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp4 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_scene_ui_layout_Table_setBounds_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_setBounds_float_float_float_float])(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_MinimapFragment_lambda$build$4_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:lambda$build$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_shown);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MinimapFragment_lambda$build$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:lambda$build$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_chatfrag;
	jint temp0 = (jint)((func_mindustry_ui_fragments_ChatFragment_shown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_ChatFragment_shown_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_TextField)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_elem;
	((func_arc_scene_Element_requestKeyboard) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_requestKeyboard])(ctx, sp[0].o);
	LINE_NUMBER(65);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_elem;
	((func_arc_scene_Element_requestScroll) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_requestScroll])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_elem;
	((func_arc_scene_Element_setFillParent_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setFillParent_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_elem;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp4 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	((func_arc_scene_Element_setBounds_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setBounds_float_float_float_float])(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(70);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_menu;
	jint temp5 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp5 == 0) goto label_6;
	}
	{
	LINE_NUMBER(71);
	((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_shown = (jint(0));
	}
label_6:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_MinimapFragment_lambda$build$1_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:lambda$build$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_shown);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_MinimapFragment_lambda$build$0_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/MinimapFragment:lambda$build$0", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(41);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp0 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[0].o);
	frame[3].f = (jfloat(temp0));
	LINE_NUMBER(42);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	frame[4].f = (jfloat(temp1));
	LINE_NUMBER(43);
	jfloat temp2 = ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_baseSize) * ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_zoom);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp3 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	frame[5].f = (temp2 * (jfloat(temp3)));
	LINE_NUMBER(45);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_black;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(46);
	SM_arc_graphics_g2d_Fill_crect_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (frame[3].f), (frame[4].f));
	LINE_NUMBER(48);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(49);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(50);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture])(ctx, sp[0].o);
	jfloat temp0 = jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_height));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture])(ctx, sp[0].o);
	frame[6].f = (temp0 / (jfloat(((jint)((arc_graphics_GLTexture *) NULL_CHECK(sp[0].o))->F_width))));
	LINE_NUMBER(51);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	sp[0].o = (jobject)((func_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_getTexture_R_arc_graphics_Texture])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_wrap_arc_graphics_Texture_R_arc_graphics_g2d_TextureRegion(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(52);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, (frame[7].o), (((frame[3].f) / (jfloat(2))) + (((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_panx) * ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_zoom))), (((frame[4].f) / (jfloat(2))) + (((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_pany) * ((jfloat)((mindustry_ui_fragments_MinimapFragment *) NULL_CHECK((frame[0].o)))->F_zoom))), (frame[5].f), ((frame[5].f) * (frame[6].f)));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_mindustry_ui_fragments_MinimapFragment_getRectBounds_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_MinimapFragment_getRectBounds_R_arc_math_geom_Rect])(ctx, (frame[0].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(55);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_minimap;
	((func_mindustry_graphics_MinimapRenderer_drawEntities_float_float_float_float_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_MinimapRenderer_drawEntities_float_float_float_float_boolean])(ctx, sp[0].o, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[8].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[8].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[8].o)))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[8].o)))->F_height), (jint(1)));
	}
label_6:;
	{
	LINE_NUMBER(58);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_MinimapFragment[] {
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
	(void *) M_mindustry_ui_fragments_MinimapFragment_getRectBounds_R_arc_math_geom_Rect,
	(void *) M_mindustry_ui_fragments_MinimapFragment_build_arc_scene_Group,
	(void *) M_mindustry_ui_fragments_MinimapFragment_panTo_float_float,
	(void *) M_mindustry_ui_fragments_MinimapFragment_convert_float_float_R_arc_math_geom_Vec2,
	(void *) M_mindustry_ui_fragments_MinimapFragment_shown_R_boolean,
	(void *) M_mindustry_ui_fragments_MinimapFragment_hide,
	(void *) M_mindustry_ui_fragments_MinimapFragment_toggle,
	(void *) M_mindustry_ui_fragments_MinimapFragment_lambda$build$3_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ui_fragments_MinimapFragment_lambda$build$6,
	(void *) M_mindustry_ui_fragments_MinimapFragment_lambda$build$4_R_boolean,
	(void *) M_mindustry_ui_fragments_MinimapFragment_lambda$build$2,
	(void *) M_mindustry_ui_fragments_MinimapFragment_lambda$build$1_R_boolean,
	(void *) M_mindustry_ui_fragments_MinimapFragment_lambda$build$0_float_float_float_float,
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
	{ "getRectBounds", "()Larc/math/geom/Rect;" },
	{ "build", "(Larc/scene/Group;)V" },
	{ "panTo", "(FF)V" },
	{ "convert", "(FF)Larc/math/geom/Vec2;" },
	{ "shown", "()Z" },
	{ "hide", "()V" },
	{ "toggle", "()V" },
	{ "lambda$build$3", "(Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$6", "()V" },
	{ "lambda$build$4", "()Z" },
	{ "lambda$build$2", "()V" },
	{ "lambda$build$1", "()Z" },
	{ "lambda$build$0", "(FFFF)V" },
};

static FieldMetadata fields[] {
	{ "shown", &class_boolean, offsetof(mindustry_ui_fragments_MinimapFragment, F_shown), "Z", 2 },
	{ "panx", &class_float, offsetof(mindustry_ui_fragments_MinimapFragment, F_panx), "F", 0 },
	{ "pany", &class_float, offsetof(mindustry_ui_fragments_MinimapFragment, F_pany), "F", 0 },
	{ "zoom", &class_float, offsetof(mindustry_ui_fragments_MinimapFragment, F_zoom), "F", 0 },
	{ "lastZoom", &class_float, offsetof(mindustry_ui_fragments_MinimapFragment, F_lastZoom), "F", 0 },
	{ "baseSize", &class_float, offsetof(mindustry_ui_fragments_MinimapFragment, F_baseSize), "F", 2 },
	{ "elem", &class_arc_scene_Element, offsetof(mindustry_ui_fragments_MinimapFragment, F_elem), "Larc/scene/Element;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_MinimapFragment, 0, "()V", 1 },
	{ "getRectBounds", (intptr_t) M_mindustry_ui_fragments_MinimapFragment_getRectBounds_R_arc_math_geom_Rect, VTABLE_mindustry_ui_fragments_MinimapFragment_getRectBounds_R_arc_math_geom_Rect, "()Larc/math/geom/Rect;", 4 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_MinimapFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_MinimapFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
	{ "panTo", (intptr_t) M_mindustry_ui_fragments_MinimapFragment_panTo_float_float, VTABLE_mindustry_ui_fragments_MinimapFragment_panTo_float_float, "(FF)V", 1 },
	{ "convert", (intptr_t) M_mindustry_ui_fragments_MinimapFragment_convert_float_float_R_arc_math_geom_Vec2, VTABLE_mindustry_ui_fragments_MinimapFragment_convert_float_float_R_arc_math_geom_Vec2, "(FF)Larc/math/geom/Vec2;", 1 },
	{ "shown", (intptr_t) M_mindustry_ui_fragments_MinimapFragment_shown_R_boolean, VTABLE_mindustry_ui_fragments_MinimapFragment_shown_R_boolean, "()Z", 1 },
	{ "hide", (intptr_t) M_mindustry_ui_fragments_MinimapFragment_hide, VTABLE_mindustry_ui_fragments_MinimapFragment_hide, "()V", 1 },
	{ "toggle", (intptr_t) M_mindustry_ui_fragments_MinimapFragment_toggle, VTABLE_mindustry_ui_fragments_MinimapFragment_toggle, "()V", 1 },
	{ "lambda$build$3", (intptr_t) M_mindustry_ui_fragments_MinimapFragment_lambda$build$3_arc_scene_ui_layout_Table, VTABLE_mindustry_ui_fragments_MinimapFragment_lambda$build$3_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 4098 },
	{ "lambda$build$6", (intptr_t) M_mindustry_ui_fragments_MinimapFragment_lambda$build$6, VTABLE_mindustry_ui_fragments_MinimapFragment_lambda$build$6, "()V", 4098 },
	{ "lambda$build$5", (intptr_t) SM_mindustry_ui_fragments_MinimapFragment_lambda$build$5_arc_scene_ui_layout_Table, 0, "(Larc/scene/ui/layout/Table;)V", 4106 },
	{ "lambda$build$4", (intptr_t) M_mindustry_ui_fragments_MinimapFragment_lambda$build$4_R_boolean, VTABLE_mindustry_ui_fragments_MinimapFragment_lambda$build$4_R_boolean, "()Z", 4098 },
	{ "lambda$build$2", (intptr_t) M_mindustry_ui_fragments_MinimapFragment_lambda$build$2, VTABLE_mindustry_ui_fragments_MinimapFragment_lambda$build$2, "()V", 4098 },
	{ "lambda$build$1", (intptr_t) M_mindustry_ui_fragments_MinimapFragment_lambda$build$1_R_boolean, VTABLE_mindustry_ui_fragments_MinimapFragment_lambda$build$1_R_boolean, "()Z", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_ui_fragments_MinimapFragment_lambda$build$0_float_float_float_float, VTABLE_mindustry_ui_fragments_MinimapFragment_lambda$build$0_float_float_float_float, "(FFFF)V", 4098 },
};

Class class_mindustry_ui_fragments_MinimapFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/MinimapFragment",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_MinimapFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_MinimapFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_MinimapFragment,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_MinimapFragment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_MinimapFragment = registerClass(&class_mindustry_ui_fragments_MinimapFragment);

}
