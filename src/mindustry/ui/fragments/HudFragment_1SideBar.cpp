#include "mindustry/ui/fragments/HudFragment_1SideBar.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/ui/fragments/HudFragment_1SideBar.h"
#include "arc/func/Boolp.h"
#include "java/lang/Float.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/scene/Element.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "arc/util/Tmp.h"
#include "mindustry/ui/fragments/HudFragment.h"
#include "arc/func/Floatp.h"

extern "C" {


void mark_mindustry_ui_fragments_HudFragment$1SideBar(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_HudFragment$1SideBar *) object;
	if (self->F_amount)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_amount)->clazz)->markFunction)((jobject) self->F_amount, mark, depth + 1);
	if (self->F_flash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_flash)->clazz)->markFunction)((jobject) self->F_flash, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_fragments_HudFragment$1SideBar(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Element(ctx);
}

void init_mindustry_ui_fragments_HudFragment$1SideBar_mindustry_ui_fragments_HudFragment_arc_func_Floatp_arc_func_Boolp_boolean_boolean_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3, jbool param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment$1SideBar:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment$1SideBar(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(922);
	((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_Element(ctx, (frame[0].o));
	LINE_NUMBER(923);
	((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_amount = (jref) (frame[2].o);
	LINE_NUMBER(924);
	((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_flip = (frame[4].i);
	LINE_NUMBER(925);
	((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_flash = (jref) (frame[3].o);
	LINE_NUMBER(926);
	((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_drawBack = (frame[5].i);
	LINE_NUMBER(928);
	((func_mindustry_ui_fragments_HudFragment$1SideBar_setColor_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HudFragment$1SideBar_setColor_arc_graphics_Color])(ctx, (frame[0].o), (frame[6].o));
	LINE_NUMBER(929);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_fragments_HudFragment$1SideBar_mindustry_ui_fragments_HudFragment_arc_func_Floatp_arc_func_Boolp_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment$1SideBar:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HudFragment$1SideBar(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(932);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	jint temp0 = frame[4].i;
	jint temp1 = jint(1);
	clinit_mindustry_graphics_Pal(ctx);
	sp[4].o = (jobject)SF_mindustry_graphics_Pal_health;
	init_mindustry_ui_fragments_HudFragment$1SideBar_mindustry_ui_fragments_HudFragment_arc_func_Floatp_arc_func_Boolp_boolean_boolean_arc_graphics_Color(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, temp1, sp[4].o);
	LINE_NUMBER(933);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment$1SideBar_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment$1SideBar:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(937);
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_amount;
	jfloat temp0 = (jfloat)((func_arc_func_Floatp_get_R_float) resolveInterfaceMethod(ctx, &class_arc_func_Floatp, INDEX_arc_func_Floatp_get_R_float, sp[0].o))(ctx, sp[0].o);
	frame[1].f = temp0;
	LINE_NUMBER(939);
	jint temp1 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, (frame[1].f));
	if (temp1 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, (frame[1].f));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_FCONST(1);
	INST_FSTORE(1);
label_3:;
	{
	LINE_NUMBER(941);
	if ((floatCompare((frame[1].f), ((jfloat)((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_last), 1)) >= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_flash;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(942);
	((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_blink = (jfloat(1));
	}
label_4:;
	{
	LINE_NUMBER(945);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_blink), (jfloat(0)), (jfloat(0.2f)));
	((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK(sp[0].o))->F_blink = temp0;
	LINE_NUMBER(946);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_value), (frame[1].f), (jfloat(0.15f)));
	((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK(sp[0].o))->F_value = temp1;
	LINE_NUMBER(947);
	((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_last = (frame[1].f);
	LINE_NUMBER(949);
	jint temp2 = (jint)SM_java_lang_Float_isNaN_float_R_boolean(ctx, ((jfloat)((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_value));
	if (temp2 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)SM_java_lang_Float_isInfinite_float_R_boolean(ctx, ((jfloat)((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_value));
	if (temp0 == 0) goto label_10;
	}
label_9:;
	{
	((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_value = (jfloat(1));
	}
label_10:;
	{
	LINE_NUMBER(951);
	if (((jint)((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_drawBack) == 0) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_darkishGray;
	((func_mindustry_ui_fragments_HudFragment$1SideBar_drawInner_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment$1SideBar_drawInner_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, (jfloat(1)));
	}
label_11:;
	{
	LINE_NUMBER(952);
	sp[0].o = frame[0].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[2].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	sp[1].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o);
	clinit_arc_graphics_Color(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o, ((jfloat)((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_blink));
	((func_mindustry_ui_fragments_HudFragment$1SideBar_drawInner_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_fragments_HudFragment$1SideBar_drawInner_arc_graphics_Color_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_value));
	LINE_NUMBER(953);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HudFragment$1SideBar_drawInner_arc_graphics_Color_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HudFragment$1SideBar:drawInner", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(956);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(958);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (frame[2].f));
	frame[2].f = temp0;
	LINE_NUMBER(959);
	if (((jint)((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_flip) == 0) goto label_3;
	}
	{
	LINE_NUMBER(960);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(961);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width = (-((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width));
	}
label_3:;
	{
	LINE_NUMBER(964);
	frame[3].f = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) * (jfloat(0.35f)));
	LINE_NUMBER(965);
	frame[4].f = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)));
	LINE_NUMBER(966);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, (frame[1].o), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(968);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[2].f) * (jfloat(2))), (jfloat(1)));
	frame[5].f = temp0;
	frame[6].f = (((frame[2].f) - (jfloat(0.5f))) * (jfloat(2)));
	LINE_NUMBER(970);
	frame[7].f = ((-((jfloat(1)) - (frame[5].f))) * (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) - (frame[3].f)));
	LINE_NUMBER(972);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + (frame[3].f)), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), ((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width)) + (frame[7].f)), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + ((frame[4].f) * (frame[5].f))), (((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width)) - (frame[3].f)) + (frame[7].f)), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + ((frame[4].f) * (frame[5].f))));
	LINE_NUMBER(979);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(980);
	frame[8].f = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + ((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) - (frame[3].f)) * ((jfloat(1)) - (frame[6].f))));
	LINE_NUMBER(981);
	SM_arc_graphics_g2d_Fill_quad_float_float_float_float_float_float_float_float(ctx, (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width)), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + (frame[4].f)), ((((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width)) - (frame[3].f)), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + (frame[4].f)), (frame[8].f), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) * (frame[2].f))), ((frame[8].f) + (frame[3].f)), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) * (frame[2].f))));
	}
label_13:;
	{
	LINE_NUMBER(989);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(991);
	if (((jint)((mindustry_ui_fragments_HudFragment$1SideBar *) NULL_CHECK((frame[0].o)))->F_flip) == 0) goto label_17;
	}
	{
	LINE_NUMBER(992);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width = (-((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(993);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x) - ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width));
	}
label_17:;
	LINE_NUMBER(995);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_HudFragment$1SideBar[] {
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
	(void *) M_mindustry_ui_fragments_HudFragment$1SideBar_draw,
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
	(void *) M_mindustry_ui_fragments_HudFragment$1SideBar_drawInner_arc_graphics_Color_float,
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
	{ "drawInner", "(Larc/graphics/Color;F)V" },
};

static FieldMetadata fields[] {
	{ "amount", &class_arc_func_Floatp, offsetof(mindustry_ui_fragments_HudFragment$1SideBar, F_amount), "Larc/func/Floatp;", 1 },
	{ "flip", &class_boolean, offsetof(mindustry_ui_fragments_HudFragment$1SideBar, F_flip), "Z", 1 },
	{ "drawBack", &class_boolean, offsetof(mindustry_ui_fragments_HudFragment$1SideBar, F_drawBack), "Z", 1 },
	{ "flash", &class_arc_func_Boolp, offsetof(mindustry_ui_fragments_HudFragment$1SideBar, F_flash), "Larc/func/Boolp;", 1 },
	{ "last", &class_float, offsetof(mindustry_ui_fragments_HudFragment$1SideBar, F_last), "F", 0 },
	{ "blink", &class_float, offsetof(mindustry_ui_fragments_HudFragment$1SideBar, F_blink), "F", 0 },
	{ "value", &class_float, offsetof(mindustry_ui_fragments_HudFragment$1SideBar, F_value), "F", 0 },
	{ "this$0", &class_mindustry_ui_fragments_HudFragment, offsetof(mindustry_ui_fragments_HudFragment$1SideBar, F_this$0), "Lmindustry/ui/fragments/HudFragment;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_HudFragment$1SideBar_mindustry_ui_fragments_HudFragment_arc_func_Floatp_arc_func_Boolp_boolean_boolean_arc_graphics_Color, 0, "(Lmindustry/ui/fragments/HudFragment;Larc/func/Floatp;Larc/func/Boolp;ZZLarc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_HudFragment$1SideBar_mindustry_ui_fragments_HudFragment_arc_func_Floatp_arc_func_Boolp_boolean, 0, "(Lmindustry/ui/fragments/HudFragment;Larc/func/Floatp;Larc/func/Boolp;Z)V", 1 },
	{ "draw", (intptr_t) M_mindustry_ui_fragments_HudFragment$1SideBar_draw, VTABLE_mindustry_ui_fragments_HudFragment$1SideBar_draw, "()V", 1 },
	{ "drawInner", (intptr_t) M_mindustry_ui_fragments_HudFragment$1SideBar_drawInner_arc_graphics_Color_float, VTABLE_mindustry_ui_fragments_HudFragment$1SideBar_drawInner_arc_graphics_Color_float, "(Larc/graphics/Color;F)V", 0 },
};

Class class_mindustry_ui_fragments_HudFragment$1SideBar{
		.nativeName = (intptr_t) "mindustry/ui/fragments/HudFragment$1SideBar",
		.parentClass = (intptr_t) &class_arc_scene_Element,
		.size = sizeof(mindustry_ui_fragments_HudFragment$1SideBar),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_HudFragment$1SideBar,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_HudFragment$1SideBar,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_HudFragment$1SideBar,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 122,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_HudFragment$1SideBar = registerClass(&class_mindustry_ui_fragments_HudFragment$1SideBar);

}

