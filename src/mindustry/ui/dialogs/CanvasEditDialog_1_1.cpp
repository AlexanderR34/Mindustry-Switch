#include "mindustry/ui/dialogs/CanvasEditDialog_1_1.h"
#include "arc/func/Intc2.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_1_1.h"
#include "arc/math/geom/Point2.h"
#include "arc/struct/IntSeq.h"
#include "arc/input/KeyCode.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_1_1_invoke_arc_func_Intc2_1.h"
#include "arc/graphics/Pixmap.h"
#include "java/lang/Object.h"
#include "mindustry/ui/dialogs/CanvasEditDialog_1.h"
#include "mindustry/ui/dialogs/CanvasEditDialog.h"
#include "arc/scene/event/InputListener.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/math/geom/Geometry.h"
#include "arc/math/geom/Bresenham2.h"

extern "C" {


void mark_mindustry_ui_dialogs_CanvasEditDialog$1$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_InputListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_CanvasEditDialog$1$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_CanvasEditDialog$1$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_InputListener(ctx);
}

void init_mindustry_ui_dialogs_CanvasEditDialog$1$1_mindustry_ui_dialogs_CanvasEditDialog$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog$1$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_CanvasEditDialog$1$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_arc_scene_event_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_CanvasEditDialog$1$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog$1$1:touchDown", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_CanvasEditDialog$1_convertX_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_convertX_float_R_int])(ctx, sp[0].o, (frame[2].f));
	frame[6].i = temp0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	jint temp1 = (jint)((func_mindustry_ui_dialogs_CanvasEditDialog$1_convertY_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_convertY_float_R_int])(ctx, sp[0].o, (frame[3].f));
	frame[7].i = temp1;
	LINE_NUMBER(93);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_this$0;
	if (((jint)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_fill) == 0) goto label_5;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_pix;
	jint temp0 = (jint)((func_arc_graphics_Pixmap_in_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_in_int_int_R_boolean])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	if (temp0 != 0) goto label_7;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_stack;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_this$0;
	frame[8].i = ((jint)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_curColor);
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_pix;
	jint temp0 = (jint)((func_arc_graphics_Pixmap_get_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_get_int_int_R_int])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	frame[9].i = temp0;
	LINE_NUMBER(99);
	if ((frame[8].i) == (frame[9].i)) goto label_11;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_stack;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[6].i), (frame[7].i));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	}
label_13:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_stack;
	jint temp0 = (jint)((func_arc_struct_IntSeq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_stack;
	jint temp0 = (jint)((func_arc_struct_IntSeq_pop_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_pop_R_int])(ctx, sp[0].o);
	frame[10].i = temp0;
	LINE_NUMBER(103);
	jint temp1 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[10].i));
	frame[11].i = temp1;
	jint temp2 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[10].i));
	frame[12].i = temp2;
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((func_mindustry_ui_dialogs_CanvasEditDialog$1_draw_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_draw_int_int])(ctx, sp[0].o, (frame[11].i), (frame[12].i));
	LINE_NUMBER(105);
	frame[13].i = (jint(0));
	}
label_19:;
	{
	if ((frame[13].i) >= (jint(4))) goto label_20;
	}
	{
	LINE_NUMBER(106);
	jint temp0 = frame[11].i;
	jint temp1 = (jint)SM_arc_math_geom_Geometry_d4x_int_R_int(ctx, (frame[13].i));
	frame[14].i = (temp0 + temp1);
	jint temp2 = frame[12].i;
	jint temp3 = (jint)SM_arc_math_geom_Geometry_d4y_int_R_int(ctx, (frame[13].i));
	frame[15].i = (temp2 + temp3);
	LINE_NUMBER(107);
	if ((frame[14].i) < 0) goto label_24;
	}
	INST_ILOAD(15);
	if ((--sp)->i < 0) goto label_24;
	{
	jint temp0 = frame[14].i;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_pix;
	if (temp0 >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_width)) goto label_24;
	}
	{
	jint temp0 = frame[15].i;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_pix;
	if (temp0 >= ((jint)((arc_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_height)) goto label_24;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_pix;
	jint temp0 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, sp[0].o, (frame[14].i), (frame[15].i));
	if (temp0 != (frame[9].i)) goto label_24;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_stack;
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, (frame[14].i), (frame[15].i));
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, temp0);
	}
label_24:;
	{
	LINE_NUMBER(105);
	INST_IINC(13, 1);
	goto label_19;
	}
label_20:;
	LINE_NUMBER(111);
	goto label_13;
label_11:;
	{
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((func_mindustry_ui_dialogs_CanvasEditDialog$1_draw_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_draw_int_int])(ctx, sp[0].o, (frame[6].i), (frame[7].i));
	LINE_NUMBER(117);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_lastX = (frame[6].i);
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_lastY = (frame[7].i);
	goto label_28;
	}
label_3:;
	{
	LINE_NUMBER(120);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseMiddle;
	if (sp[0].o != sp[1].o) goto label_28;
	}
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[1].o))->F_pix;
	jint temp0 = (jint)((func_arc_graphics_Pixmap_get_int_int_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Pixmap_get_int_int_R_int])(ctx, sp[1].o, (frame[6].i), (frame[7].i));
	((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_curColor = temp0;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return (jint(0));
	}
label_28:;
	{
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog$1$1_touchDragged_arc_scene_event_InputEvent_float_float_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog$1$1:touchDragged", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(129);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_this$0;
	if (((jint)((mindustry_ui_dialogs_CanvasEditDialog *) NULL_CHECK(sp[0].o))->F_fill) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_CanvasEditDialog$1_convertX_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_convertX_float_R_int])(ctx, sp[0].o, (frame[2].f));
	frame[5].i = temp0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	jint temp1 = (jint)((func_mindustry_ui_dialogs_CanvasEditDialog$1_convertY_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_convertY_float_R_int])(ctx, sp[0].o, (frame[3].f));
	frame[6].i = temp1;
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	jint temp2 = (jint)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_lastX;
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	jint temp3 = (jint)((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_lastY;
	jint temp4 = frame[5].i;
	jint temp5 = frame[6].i;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_CanvasEditDialog$1$1_invoke_arc_func_Intc2_1(ctx);
		auto proxy = (mindustry_ui_dialogs_CanvasEditDialog$1$1_invoke_arc_func_Intc2_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_CanvasEditDialog$1$1_invoke_arc_func_Intc2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_geom_Bresenham2_line_int_int_int_int_arc_func_Intc2(ctx, temp2, temp3, temp4, temp5, sp[0].o);
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_lastX = (frame[5].i);
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((mindustry_ui_dialogs_CanvasEditDialog$1 *) NULL_CHECK(sp[0].o))->F_lastY = (frame[6].i);
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_CanvasEditDialog$1$1_lambda$touchDragged$0_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/CanvasEditDialog$1$1:lambda$touchDragged$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_ui_dialogs_CanvasEditDialog$1$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((func_mindustry_ui_dialogs_CanvasEditDialog$1_draw_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1_draw_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_CanvasEditDialog$1$1[] {
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
	(void *) M_arc_scene_event_InputListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog$1$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog$1$1_touchDragged_arc_scene_event_InputEvent_float_float_int,
	(void *) M_arc_scene_event_InputListener_mouseMoved_arc_scene_event_InputEvent_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_enter_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_exit_arc_scene_event_InputEvent_float_float_int_arc_scene_Element,
	(void *) M_arc_scene_event_InputListener_scrolled_arc_scene_event_InputEvent_float_float_float_float_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyDown_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyUp_arc_scene_event_InputEvent_arc_input_KeyCode_R_boolean,
	(void *) M_arc_scene_event_InputListener_keyTyped_arc_scene_event_InputEvent_char_R_boolean,
	(void *) M_mindustry_ui_dialogs_CanvasEditDialog$1$1_lambda$touchDragged$0_int_int,
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
	{ "handle", "(Larc/scene/event/SceneEvent;)Z" },
	{ "touchDown", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z" },
	{ "touchUp", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "touchDragged", "(Larc/scene/event/InputEvent;FFI)V" },
	{ "mouseMoved", "(Larc/scene/event/InputEvent;FF)Z" },
	{ "enter", "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V" },
	{ "exit", "(Larc/scene/event/InputEvent;FFILarc/scene/Element;)V" },
	{ "scrolled", "(Larc/scene/event/InputEvent;FFFF)Z" },
	{ "keyDown", "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z" },
	{ "keyUp", "(Larc/scene/event/InputEvent;Larc/input/KeyCode;)Z" },
	{ "keyTyped", "(Larc/scene/event/InputEvent;C)Z" },
	{ "lambda$touchDragged$0", "(II)V" },
};

static FieldMetadata fields[] {
	{ "this$1", &class_mindustry_ui_dialogs_CanvasEditDialog$1, offsetof(mindustry_ui_dialogs_CanvasEditDialog$1$1, F_this$1), "Lmindustry/ui/dialogs/CanvasEditDialog$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_CanvasEditDialog$1$1_mindustry_ui_dialogs_CanvasEditDialog$1, 0, "(Lmindustry/ui/dialogs/CanvasEditDialog$1;)V", 0 },
	{ "touchDown", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog$1$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode_R_boolean, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)Z", 1 },
	{ "touchDragged", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog$1$1_touchDragged_arc_scene_event_InputEvent_float_float_int, VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1$1_touchDragged_arc_scene_event_InputEvent_float_float_int, "(Larc/scene/event/InputEvent;FFI)V", 1 },
	{ "lambda$touchDragged$0", (intptr_t) M_mindustry_ui_dialogs_CanvasEditDialog$1$1_lambda$touchDragged$0_int_int, VTABLE_mindustry_ui_dialogs_CanvasEditDialog$1$1_lambda$touchDragged$0_int_int, "(II)V", 4098 },
};

Class class_mindustry_ui_dialogs_CanvasEditDialog$1$1{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/CanvasEditDialog$1$1",
		.parentClass = (intptr_t) &class_arc_scene_event_InputListener,
		.size = sizeof(mindustry_ui_dialogs_CanvasEditDialog$1$1),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_CanvasEditDialog$1$1,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_CanvasEditDialog$1$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_CanvasEditDialog$1$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_CanvasEditDialog$1$1 = registerClass(&class_mindustry_ui_dialogs_CanvasEditDialog$1$1);

}

