#include "mindustry/ui/dialogs/PlanetDialog_5_1.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/ui/dialogs/PlanetDialog_5_1.h"
#include "arc/Input.h"
#include "mindustry/ui/dialogs/PlanetDialog_5.h"
#include "mindustry/ui/dialogs/SectorSelectDialog.h"
#include "mindustry/type/Sector.h"
#include "mindustry/ui/dialogs/PlanetDialog_5_1_invoke_arc_func_Cons_1.h"
#include "arc/scene/event/ElementGestureListener.h"
#include "arc/input/KeyCode.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "mindustry/type/Planet.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"
#include "arc/scene/event/InputEvent.h"
#include "mindustry/graphics/g3d/PlanetParams.h"
#include "mindustry/type/SectorPreset.h"

extern "C" {


void mark_mindustry_ui_dialogs_PlanetDialog$5$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_event_ElementGestureListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_PlanetDialog$5$1 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_PlanetDialog$5$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_event_ElementGestureListener(ctx);
}

void init_mindustry_ui_dialogs_PlanetDialog$5$1_mindustry_ui_dialogs_PlanetDialog$5(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog$5$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog$5$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(628);
	((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_arc_scene_event_ElementGestureListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog$5$1_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog$5$1:tap", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(631);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[0].o))->F_this$0;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_showing_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_showing_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(633);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_hovered;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_selected;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[1].o))->F_hovered;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	if ((frame[4].i) != (jint(2))) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[1].o))->F_hovered;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_canPlaySector_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_canPlaySector_mindustry_type_Sector_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[0].o))->F_this$0;
	((func_mindustry_ui_dialogs_PlanetDialog_playSelected) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_playSelected])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(637);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_hovered;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[1].o))->F_hovered;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_canSelect_mindustry_type_Sector_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	clinit_mindustry_ui_dialogs_PlanetDialog(ctx);
	(sp++)->i = SF_mindustry_ui_dialogs_PlanetDialog_debugSelect;
	if ((--sp)->i == 0) goto label_5;
label_6:;
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[1].o))->F_hovered;
	((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_selected = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(641);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_selected;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(642);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[0].o))->F_this$0;
	((func_mindustry_ui_dialogs_PlanetDialog_updateSelected) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_updateSelected])(ctx, sp[0].o);
	}
label_7:;
	LINE_NUMBER(644);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog$5$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog$5$1:touchDown", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(648);
	M_arc_scene_event_ElementGestureListener_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].i), (frame[5].o));
	LINE_NUMBER(650);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_hovered;
	frame[6].o = sp[0].o;
	LINE_NUMBER(652);
	if ((clinit_mindustry_ui_dialogs_PlanetDialog(ctx), (jint)SF_mindustry_ui_dialogs_PlanetDialog_debugSectorAttackEdit) == 0) goto label_3;
	}
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(653);
	sp[0].o = frame[5].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseRight;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(654);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_shift_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_shift_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(655);
	sp[0].o = frame[6].o;
	sp += 1;
	if (((jint)((mindustry_type_Sector *) NULL_CHECK((frame[6].o)))->F_generateEnemyBase) != 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	sp -= 2;
	((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_generateEnemyBase = sp[1].i;
	goto label_3;
label_6:;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_selectDialog;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[1].o))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[1].o))->F_state;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[1].o))->F_planet;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_PlanetDialog$5$1_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_ui_dialogs_PlanetDialog$5$1_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog$5$1_invoke_arc_func_Cons_1);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_ui_dialogs_SectorSelectDialog_show_mindustry_type_Planet_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_SectorSelectDialog_show_mindustry_type_Planet_arc_func_Cons])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_3:;
	LINE_NUMBER(668);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_PlanetDialog$5$1_lambda$touchDown$0_mindustry_type_Sector_mindustry_type_SectorPreset(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog$5$1:lambda$touchDown$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog$5 *) NULL_CHECK(sp[0].o))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_PlanetDialog *) NULL_CHECK(sp[0].o))->F_state;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet;
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Sector, sp[0].o));
	LINE_NUMBER(659);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	if (sp[0].o != (frame[2].o)) goto label_4;
	}
	{
	LINE_NUMBER(660);
	((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset = (jref) (jobject(nullptr));
	}
label_4:;
	LINE_NUMBER(662);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(663);
	((mindustry_type_Sector *) NULL_CHECK((frame[1].o)))->F_preset = (jref) (frame[2].o);
	LINE_NUMBER(664);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_PlanetDialog$5$1[] {
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
	(void *) M_arc_scene_event_ElementGestureListener_handle_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_mindustry_ui_dialogs_PlanetDialog$5$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_touchUp_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_mindustry_ui_dialogs_PlanetDialog$5$1_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_longPress_arc_scene_Element_float_float_R_boolean,
	(void *) M_arc_scene_event_ElementGestureListener_fling_arc_scene_event_InputEvent_float_float_arc_input_KeyCode,
	(void *) M_arc_scene_event_ElementGestureListener_pan_arc_scene_event_InputEvent_float_float_float_float,
	(void *) M_arc_scene_event_ElementGestureListener_zoom_arc_scene_event_InputEvent_float_float,
	(void *) M_arc_scene_event_ElementGestureListener_pinch_arc_scene_event_InputEvent_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_math_geom_Vec2,
	(void *) M_arc_scene_event_ElementGestureListener_getGestureDetector_R_arc_input_GestureDetector,
	(void *) M_arc_scene_event_ElementGestureListener_getTouchDownTarget_R_arc_scene_Element,
	(void *) M_mindustry_ui_dialogs_PlanetDialog$5$1_lambda$touchDown$0_mindustry_type_Sector_mindustry_type_SectorPreset,
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
	{ "touchDown", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "touchUp", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "tap", "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V" },
	{ "longPress", "(Larc/scene/Element;FF)Z" },
	{ "fling", "(Larc/scene/event/InputEvent;FFLarc/input/KeyCode;)V" },
	{ "pan", "(Larc/scene/event/InputEvent;FFFF)V" },
	{ "zoom", "(Larc/scene/event/InputEvent;FF)V" },
	{ "pinch", "(Larc/scene/event/InputEvent;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/math/geom/Vec2;)V" },
	{ "getGestureDetector", "()Larc/input/GestureDetector;" },
	{ "getTouchDownTarget", "()Larc/scene/Element;" },
	{ "lambda$touchDown$0", "(Lmindustry/type/Sector;Lmindustry/type/SectorPreset;)V" },
};

static FieldMetadata fields[] {
	{ "this$1", &class_mindustry_ui_dialogs_PlanetDialog$5, offsetof(mindustry_ui_dialogs_PlanetDialog$5$1, F_this$1), "Lmindustry/ui/dialogs/PlanetDialog$5;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_PlanetDialog$5$1_mindustry_ui_dialogs_PlanetDialog$5, 0, "(Lmindustry/ui/dialogs/PlanetDialog$5;)V", 0 },
	{ "tap", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog$5$1_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_ui_dialogs_PlanetDialog$5$1_tap_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "touchDown", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog$5$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, VTABLE_mindustry_ui_dialogs_PlanetDialog$5$1_touchDown_arc_scene_event_InputEvent_float_float_int_arc_input_KeyCode, "(Larc/scene/event/InputEvent;FFILarc/input/KeyCode;)V", 1 },
	{ "lambda$touchDown$0", (intptr_t) M_mindustry_ui_dialogs_PlanetDialog$5$1_lambda$touchDown$0_mindustry_type_Sector_mindustry_type_SectorPreset, VTABLE_mindustry_ui_dialogs_PlanetDialog$5$1_lambda$touchDown$0_mindustry_type_Sector_mindustry_type_SectorPreset, "(Lmindustry/type/Sector;Lmindustry/type/SectorPreset;)V", 4098 },
};

Class class_mindustry_ui_dialogs_PlanetDialog$5$1{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/PlanetDialog$5$1",
		.parentClass = (intptr_t) &class_arc_scene_event_ElementGestureListener,
		.size = sizeof(mindustry_ui_dialogs_PlanetDialog$5$1),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_PlanetDialog$5$1,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_PlanetDialog$5$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_PlanetDialog$5$1,
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
static bool registered_mindustry_ui_dialogs_PlanetDialog$5$1 = registerClass(&class_mindustry_ui_dialogs_PlanetDialog$5$1);

}

