#include "arc/scene/Element.h"
#include "arc/func/Prov.h"
#include "arc/Input.h"
#include "arc/func/Boolp.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/input/KeyCode.h"
#include "arc/scene/actions/SequenceAction.h"
#include "arc/scene/event/Touchable.h"
#include "arc/util/pooling/Pools.h"
#include "arc/struct/Seq.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/func/Floatc.h"
#include "arc/scene/Element_invoke_arc_func_Cons_2.h"
#include "arc/scene/Element_invoke_arc_func_Cons_1.h"
#include "arc/scene/Element_invoke_arc_func_Cons_0.h"
#include "arc/scene/event/ChangeListener_ChangeEvent.h"
#include "arc/struct/DelayedRemovalSeq.h"
#include "arc/scene/Scene.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/scene/Element_invoke_arc_func_Prov_1.h"
#include "arc/scene/Element_invoke_arc_func_Prov_0.h"
#include "arc/func/Floatc2.h"
#include "arc/graphics/Camera.h"
#include "arc/scene/event/InputEvent.h"
#include "arc/math/geom/Vec2.h"
#include "arc/scene/event/InputEvent_InputEventType.h"
#include "arc/scene/Action.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/event/SceneEvent.h"
#include "java/lang/Math.h"
#include "arc/scene/Group.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/scene/event/ClickListener.h"
#include "arc/scene/Element_8.h"
#include "arc/scene/Element_9.h"
#include "arc/scene/actions/Actions.h"
#include "arc/scene/Element_2.h"
#include "arc/scene/Element_3.h"
#include "arc/scene/Element.h"
#include "arc/scene/Element_1.h"
#include "arc/scene/Element_6.h"
#include "arc/scene/Element_7.h"
#include "arc/scene/Element_4.h"
#include "arc/scene/Element_5.h"
#include "arc/scene/event/EventListener.h"
#include "java/lang/Class.h"
#include "arc/struct/SnapshotSeq.h"
#include "arc/scene/event/InputListener.h"
#include "arc/graphics/g2d/ScissorStack.h"

extern "C" {


void mark_arc_scene_Element(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_Element *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_translation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_translation)->clazz)->markFunction)((jobject) self->F_translation, mark, depth + 1);
	if (self->F_userObject)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_userObject)->clazz)->markFunction)((jobject) self->F_userObject, mark, depth + 1);
	if (self->F_touchable)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_touchable)->clazz)->markFunction)((jobject) self->F_touchable, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_visibility)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_visibility)->clazz)->markFunction)((jobject) self->F_visibility, mark, depth + 1);
	if (self->F_touchablility)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_touchablility)->clazz)->markFunction)((jobject) self->F_touchablility, mark, depth + 1);
	if (self->F_listeners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listeners)->clazz)->markFunction)((jobject) self->F_listeners, mark, depth + 1);
	if (self->F_captureListeners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_captureListeners)->clazz)->markFunction)((jobject) self->F_captureListeners, mark, depth + 1);
	if (self->F_actions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actions)->clazz)->markFunction)((jobject) self->F_actions, mark, depth + 1);
	if (self->F_stage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stage)->clazz)->markFunction)((jobject) self->F_stage, mark, depth + 1);
	if (self->F_update)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_update)->clazz)->markFunction)((jobject) self->F_update, mark, depth + 1);
}

void clinit_arc_scene_Element(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_Element(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Element(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color_float_float_float_float(ctx, sp[1].o, (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(22);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleX = (jfloat(1));
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleY = (jfloat(1));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0)));
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_translation = (jref) sp[1].o;
	LINE_NUMBER(26);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_visible = (jint(1));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(32);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_cullable = (jint(1));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_struct_DelayedRemovalSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_DelayedRemovalSeq);
	init_arc_struct_DelayedRemovalSeq_int(ctx, sp[1].o, (jint(0)));
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_listeners = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_struct_DelayedRemovalSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_DelayedRemovalSeq);
	init_arc_struct_DelayedRemovalSeq_int(ctx, sp[1].o, (jint(0)));
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_captureListeners = (jref) sp[1].o;
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(0)));
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_actions = (jref) sp[1].o;
	LINE_NUMBER(42);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha = (jfloat(1));
	LINE_NUMBER(45);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_needsLayout = (jint(1));
	LINE_NUMBER(46);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_layoutEnabled = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:draw", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(51);
	((func_arc_scene_Element_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_validate])(ctx, (frame[0].o));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:act", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_actions;
	frame[2].o = sp[0].o;
	LINE_NUMBER(62);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_stage;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_stage;
	jint temp0 = (jint)((func_arc_scene_Scene_getActionsRequestRendering_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getActionsRequestRendering_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_graphics;
	POP_N(1); // Pop method args
	((func_arc_Graphics_requestRendering) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_requestRendering])(ctx, sp[0].o);
label_4:;
	{
	LINE_NUMBER(64);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_arc_scene_Action, sp[0].o));
	LINE_NUMBER(66);
	jint temp0 = (jint)((func_arc_scene_Action_act_float_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Action_act_float_R_boolean])(ctx, (frame[4].o), (frame[1].f));
	if (temp0 == 0) goto label_8;
	}
	{
	if ((frame[3].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_arc_scene_Action, sp[0].o));
	LINE_NUMBER(68);
	if ((frame[5].o) != (frame[4].o)) goto label_11;
	}
	INST_ILOAD(3);
	goto label_12;
label_11:;
	{
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int])(ctx, (frame[2].o), (frame[4].o), (jint(1)));
	sp[0].i = temp0;
	sp += 1;
	}
label_12:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(69);
	if ((frame[6].i) == (jint(-1))) goto label_8;
	}
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[6].i));
	LINE_NUMBER(71);
	((func_arc_scene_Action_setActor_arc_scene_Element) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Action_setActor_arc_scene_Element])(ctx, (frame[4].o), (jobject(nullptr)));
	LINE_NUMBER(72);
	INST_IINC(3, -1);
	}
label_8:;
	{
	LINE_NUMBER(64);
	INST_IINC(3, 1);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_touchablility;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_touchablility;
	sp[1].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[1].o))(ctx, sp[1].o);
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) (checkCast(ctx, &class_arc_scene_event_Touchable, sp[1].o));
	}
label_17:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_update;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_update;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_18:;
	LINE_NUMBER(80);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_updateVisibility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:updateVisibility", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_visibility;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_visibility;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[1].o))(ctx, sp[1].o);
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_visible = temp0;
	}
label_1:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_hasMouse_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:hasMouse", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp0 = (jint)((func_arc_Input_mouseX_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseX_R_int])(ctx, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_input;
	jint temp2 = (jint)((func_arc_Input_mouseY_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Input_mouseY_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_hit_float_float_boolean_R_arc_scene_Element])(ctx, sp[0].o, temp1, (jfloat(temp2)), (jint(1)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(88);
	if ((frame[1].o) == (frame[0].o)) goto label_2;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	jint temp0 = (jint)((func_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_hasKeyboard_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:hasKeyboard", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if (sp[0].o != (frame[0].o)) goto label_1;
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

jbool M_arc_scene_Element_hasScroll_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:hasScroll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(96);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getScrollFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getScrollFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if (sp[0].o != (frame[0].o)) goto label_1;
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

void M_arc_scene_Element_requestKeyboard(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:requestKeyboard", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(100);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setKeyboardFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_requestScroll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:requestScroll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	jint temp0 = (jint)((func_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_setScrollFocus_arc_scene_Element_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:fire", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[4]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_targetActor = (jref) (frame[0].o);
	LINE_NUMBER(112);
	sp[0].o = ((jobject) &class_arc_struct_Seq);
	{ /* InvokeDynamic */
		clinit_arc_scene_Element_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_scene_Element_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_scene_Element_invoke_arc_func_Prov_0);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(113);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[3].o = sp[0].o;
	}
label_24:;
	{
	LINE_NUMBER(114);
	if ((frame[3].o) == nullptr) goto label_0;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[3].o)))->F_parent;
	frame[3].o = sp[0].o;
	goto label_24;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_28; }
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(122);
	frame[5].i = (((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size) - (jint(1)));
	}
label_28:;
	INST_ILOAD(5);
	if ((--sp)->i < 0) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_29
	{
	LINE_NUMBER(123);
	frame[6].o = (checkCast(ctx, &class_arc_scene_Group, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)))));
	LINE_NUMBER(124);
	jint temp0 = (jint)((func_arc_scene_Group_notify_arc_scene_event_SceneEvent_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_Group_notify_arc_scene_event_SceneEvent_boolean_R_boolean])(ctx, (frame[6].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(125);
	if (((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_stopped) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	frame[7].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_cancelled);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(146);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return (frame[7].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_29; }
	{
	LINE_NUMBER(122);
	INST_IINC(5, -1);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_28
	}
label_29:;
	{
	LINE_NUMBER(129);
	jint temp0 = (jint)((func_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(130);
	if (((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_stopped) == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	frame[5].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_cancelled);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(146);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(133);
	jint temp0 = (jint)((func_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(134);
	if (((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_bubbles) != 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	frame[5].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_cancelled);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(146);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_10:;
label_12: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(135);
	if (((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_stopped) == 0) { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	{
	frame[5].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_cancelled);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(146);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_13:;
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[3]) { bypasses[3] = false; goto label_44; }
	{
	LINE_NUMBER(138);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_44:;
	{
	if ((frame[5].i) >= (frame[6].i)) { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_18; } // goto label_45
	}
	{
	LINE_NUMBER(139);
	jint temp0 = (jint)((func_arc_scene_Group_notify_arc_scene_event_SceneEvent_boolean_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_Group, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))))))->vtable)[VTABLE_arc_scene_Group_notify_arc_scene_event_SceneEvent_boolean_R_boolean])(ctx, (checkCast(ctx, &class_arc_scene_Group, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))))), (frame[1].o), (jint(0)));
	LINE_NUMBER(140);
	if (((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_stopped) == 0) { popExceptionFrames(frameRef, 1); goto label_16; }
	}
	{
	frame[7].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_cancelled);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(146);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return (frame[7].i);
	}
label_16:;
label_18: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_45; }
	{
	LINE_NUMBER(138);
	INST_IINC(5, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[3] = true; goto label_15; } // goto label_44
	}
label_45:;
	{
	LINE_NUMBER(143);
	frame[5].i = ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_cancelled);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(146);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (frame[5].i);
	}
label_2:;
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(145);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(146);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[2].o));
	LINE_NUMBER(147);
	throwException(ctx, (frame[8].o));	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:notify", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_targetActor;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"The event target cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(153);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_captureListeners;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((arc_scene_Element *) NULL_CHECK(sp[-1].o))->F_listeners;
label_3:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(154);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size) != 0) goto label_5;
	}
	{
	popStackFrame(ctx);
	return ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_cancelled);
	}
label_5:;
	{
	LINE_NUMBER(156);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_listenerActor = (jref) (frame[0].o);
	LINE_NUMBER(157);
	((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_capture = (frame[2].i);
	LINE_NUMBER(159);
	((func_arc_struct_DelayedRemovalSeq_begin) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_begin])(ctx, (frame[3].o));
	LINE_NUMBER(160);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_10:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_11;
	}
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((func_arc_struct_DelayedRemovalSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	frame[6].o = (checkCast(ctx, &class_arc_scene_event_EventListener, sp[0].o));
	LINE_NUMBER(162);
	jint temp0 = (jint)((func_arc_scene_event_EventListener_handle_arc_scene_event_SceneEvent_R_boolean) resolveInterfaceMethod(ctx, &class_arc_scene_event_EventListener, INDEX_arc_scene_event_EventListener_handle_arc_scene_event_SceneEvent_R_boolean, (frame[6].o)))(ctx, (frame[6].o), (frame[1].o));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(163);
	((func_arc_scene_event_SceneEvent_handle) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_event_SceneEvent_handle])(ctx, (frame[1].o));
	LINE_NUMBER(164);
	if ((isInstance(ctx, (frame[1].o), &class_arc_scene_event_InputEvent)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(165);
	frame[7].o = (checkCast(ctx, &class_arc_scene_event_InputEvent, (frame[1].o)));
	LINE_NUMBER(166);
	sp[0].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[7].o)))->F_type;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_touchDown;
	if (sp[0].o != sp[1].o) goto label_14;
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_arc_scene_Element_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	sp[1].o = frame[6].o;
	sp[2].o = frame[0].o;
	sp[3].o = (jobject)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[7].o)))->F_targetActor;
	jint temp0 = (jint)((arc_scene_event_InputEvent *) NULL_CHECK((frame[7].o)))->F_pointer;
	sp[4].o = (jobject)((arc_scene_event_InputEvent *) NULL_CHECK((frame[7].o)))->F_keyCode;
	((func_arc_scene_Scene_addTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_addTouchFocus_arc_scene_event_EventListener_arc_scene_Element_arc_scene_Element_int_arc_input_KeyCode])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, sp[4].o);
	}
label_14:;
	{
	LINE_NUMBER(160);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(173);
	((func_arc_struct_DelayedRemovalSeq_end) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_end])(ctx, (frame[3].o));
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return ((jint)((arc_scene_event_SceneEvent *) NULL_CHECK((frame[1].o)))->F_cancelled);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:hit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(191);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_touchable;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(192);
	frame[4].o = (frame[0].o);
	LINE_NUMBER(193);
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[4].o)))->F_translation;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_3;
	}
	{
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[4].o)))->F_translation;
	if ((floatCompare(temp0, (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x)), 1)) >= 0) goto label_3;
	}
	{
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[4].o)))->F_translation;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_3;
	}
	{
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[4].o)))->F_translation;
	if ((floatCompare(temp0, (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)), 1)) >= 0) goto label_3;
	}
	INST_ALOAD(0);
	goto label_4;
label_3:;
	INST_ACONST_NULL();
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_remove_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	jint temp0 = (jint)((func_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	if (temp0 == 0) goto label_1;
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

void M_arc_scene_Element_dragged_arc_func_Floatc2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:dragged", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	clinit_arc_scene_Element$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_Element$1);
	init_arc_scene_Element$1_arc_scene_Element_arc_func_Floatc2(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_scrolled_arc_func_Floatc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:scrolled", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(232);
	sp[0].o = frame[0].o;
	clinit_arc_scene_Element$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_Element$2);
	init_arc_scene_Element$2_arc_scene_Element_arc_func_Floatc(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:addListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(247);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"listener cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_listeners;
	jint temp0 = (jint)((func_arc_struct_DelayedRemovalSeq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_listeners;
	sp[0].o = (jobject)((func_arc_struct_DelayedRemovalSeq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(252);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:removeListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(256);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"listener cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_listeners;
	jint temp0 = (jint)((func_arc_struct_DelayedRemovalSeq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_getListeners_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getListeners", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_listeners;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:addCaptureListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(269);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"listener cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_captureListeners;
	jint temp0 = (jint)((func_arc_struct_DelayedRemovalSeq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	if (temp0 != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_captureListeners;
	sp[0].o = (jobject)((func_arc_struct_DelayedRemovalSeq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:removeCaptureListener", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(275);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"listener cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_captureListeners;
	jint temp0 = (jint)((func_arc_struct_DelayedRemovalSeq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getCaptureListeners", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_captureListeners;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_addAction_arc_scene_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:addAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(284);
	((func_arc_scene_Action_setActor_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Action_setActor_arc_scene_Element])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(285);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_actions;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(287);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_stage;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_stage;
	jint temp0 = (jint)((func_arc_scene_Scene_getActionsRequestRendering_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getActionsRequestRendering_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_3;
	}
	clinit_arc_Core(ctx);
	(sp++)->o = SF_arc_Core_graphics;
	POP_N(1); // Pop method args
	((func_arc_Graphics_requestRendering) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_requestRendering])(ctx, sp[0].o);
label_3:;
	LINE_NUMBER(288);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_actions_Array1_arc_scene_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:actions", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(291);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_scene_actions_Actions_sequence_Array1_arc_scene_Action_R_arc_scene_actions_SequenceAction(ctx, (frame[1].o));
	((func_arc_scene_Element_addAction_arc_scene_Action) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addAction_arc_scene_Action])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(292);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_removeAction_arc_scene_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:removeAction", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_actions;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	if (temp0 == 0) goto label_1;
	}
	{
	((func_arc_scene_Action_setActor_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Action_setActor_arc_scene_Element])(ctx, (frame[1].o), (jobject(nullptr)));
	}
label_1:;
	LINE_NUMBER(296);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_getActions_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getActions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_actions;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_hasActions_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:hasActions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_actions;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
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

void M_arc_scene_Element_clearActions(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:clearActions", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_actions;
	frame[1].i = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_1:;
	INST_ILOAD(1);
	if ((--sp)->i < 0) goto label_2;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_actions;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	((func_arc_scene_Action_setActor_arc_scene_Element) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_Action, sp[0].o)))->vtable)[VTABLE_arc_scene_Action_setActor_arc_scene_Element])(ctx, (checkCast(ctx, &class_arc_scene_Action, sp[0].o)), (jobject(nullptr)));
	LINE_NUMBER(309);
	INST_IINC(1, -1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(311);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_actions;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_clearListeners(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:clearListeners", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_listeners;
	sp[0].o = (jobject)((func_arc_struct_DelayedRemovalSeq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(317);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_captureListeners;
	sp[0].o = (jobject)((func_arc_struct_DelayedRemovalSeq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_DelayedRemovalSeq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(322);
	((func_arc_scene_Element_clearActions) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_clearActions])(ctx, (frame[0].o));
	LINE_NUMBER(323);
	((func_arc_scene_Element_clearListeners) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_clearListeners])(ctx, (frame[0].o));
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_getScene_R_arc_scene_Scene(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getScene", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_stage;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_setScene_arc_scene_Scene(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setScene", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(336);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_stage = (jref) (frame[1].o);
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:isDescendantOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(340);
	frame[2].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(341);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(342);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent;
	frame[2].o = sp[0].o;
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(345);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:isDescendantOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(350);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(351);
	frame[2].o = (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(353);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(354);
	if ((frame[2].o) != (frame[1].o)) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent;
	frame[2].o = sp[0].o;
	goto label_2;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:isAscendantOf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(361);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(363);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(364);
	if ((frame[1].o) != (frame[0].o)) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	goto label_1;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_hasParent_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:hasParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
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

jbool M_arc_scene_Element_isTouchable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:isTouchable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(376);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_touchable;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	if (sp[0].o != sp[1].o) goto label_1;
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

jfloat M_arc_scene_Element_getX_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getX", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(381);
	frame[2].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(382);
	if (((frame[1].i) & (16)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(383);
	frame[2].f = ((frame[2].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(384);
	if (((frame[1].i) & (8)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(385);
	frame[2].f = ((frame[2].f) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))));
	}
label_4:;
	{
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_Element_getY_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getY", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(391);
	frame[2].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(392);
	if (((frame[1].i) & (jint(2))) == 0) goto label_2;
	}
	{
	LINE_NUMBER(393);
	frame[2].f = ((frame[2].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(394);
	if (((frame[1].i) & (jint(4))) != 0) goto label_4;
	}
	{
	LINE_NUMBER(395);
	frame[2].f = ((frame[2].f) + (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))));
	}
label_4:;
	{
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return (frame[2].f);
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setPosition", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(401);
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f), -1)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(402);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(403);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	}
label_2:;
	LINE_NUMBER(405);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_setPosition_float_float_int(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setPosition", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(412);
	if (((frame[3].i) & (16)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(413);
	frame[1].f = ((frame[1].f) - ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(414);
	if (((frame[3].i) & (8)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(415);
	frame[1].f = ((frame[1].f) - (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2))));
	}
label_3:;
	{
	LINE_NUMBER(417);
	if (((frame[3].i) & (jint(2))) == 0) goto label_5;
	}
	{
	LINE_NUMBER(418);
	frame[2].f = ((frame[2].f) - ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(419);
	if (((frame[3].i) & (jint(4))) != 0) goto label_7;
	}
	{
	LINE_NUMBER(420);
	frame[2].f = ((frame[2].f) - (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2))));
	}
label_7:;
	{
	LINE_NUMBER(422);
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f), -1)) != 0) goto label_9;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f), -1)) == 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(423);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(424);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	}
label_10:;
	LINE_NUMBER(426);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_moveBy_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:moveBy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(430);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(431);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].f));
	LINE_NUMBER(432);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].f));
	}
label_2:;
	LINE_NUMBER(434);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_Element_getWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_setWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(441);
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), (frame[1].f), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(442);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].f);
	LINE_NUMBER(443);
	((func_arc_scene_Element_sizeChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_sizeChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(445);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_Element_getHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_setHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(452);
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height), (frame[1].f), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(453);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height = (frame[1].f);
	LINE_NUMBER(454);
	((func_arc_scene_Element_sizeChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_sizeChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(456);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_Element_getTop_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getTop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_Element_getRight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getRight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(465);
	popStackFrame(ctx);
	return (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width));
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_sizeChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:sizeChanged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(470);
	((func_arc_scene_Element_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_rotationChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:rotationChanged", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(475);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_setSize_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(478);
	((func_arc_scene_Element_setSize_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_setSize_float_float])(ctx, (frame[0].o), (frame[1].f), (frame[1].f));
	LINE_NUMBER(479);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_setSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(483);
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), (frame[1].f), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height), (frame[2].f), -1)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(484);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].f);
	LINE_NUMBER(485);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].f);
	LINE_NUMBER(486);
	((func_arc_scene_Element_sizeChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_sizeChanged])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(488);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_sizeBy_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:sizeBy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(492);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(493);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_width) + (frame[1].f));
	LINE_NUMBER(494);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_height) + (frame[1].f));
	LINE_NUMBER(495);
	((func_arc_scene_Element_sizeChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_sizeChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(497);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_sizeBy_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:sizeBy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(501);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(502);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_width = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_width) + (frame[1].f));
	LINE_NUMBER(503);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_height = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_height) + (frame[2].f));
	LINE_NUMBER(504);
	((func_arc_scene_Element_sizeChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_sizeChanged])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(506);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_setBounds_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setBounds", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(510);
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), (frame[1].f), -1)) != 0) goto label_1;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), (frame[2].f), -1)) == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(511);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].f);
	LINE_NUMBER(512);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].f);
	}
label_2:;
	{
	LINE_NUMBER(514);
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), (frame[3].f), -1)) != 0) goto label_4;
	}
	{
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height), (frame[4].f), -1)) == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(515);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width = (frame[3].f);
	LINE_NUMBER(516);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height = (frame[4].f);
	LINE_NUMBER(517);
	((func_arc_scene_Element_sizeChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_sizeChanged])(ctx, (frame[0].o));
	}
label_5:;
	LINE_NUMBER(519);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_setOrigin_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setOrigin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(523);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originX = (frame[1].f);
	LINE_NUMBER(524);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originY = (frame[2].f);
	LINE_NUMBER(525);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_setOrigin_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setOrigin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(529);
	if (((frame[1].i) & (8)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(530);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originX = (jfloat(0));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(531);
	if (((frame[1].i) & (16)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(532);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originX = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(534);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originX = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width) / (jfloat(2)));
	}
label_3:;
	{
	LINE_NUMBER(536);
	if (((frame[1].i) & (jint(4))) == 0) goto label_6;
	}
	{
	LINE_NUMBER(537);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originY = (jfloat(0));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(538);
	if (((frame[1].i) & (jint(2))) == 0) goto label_9;
	}
	{
	LINE_NUMBER(539);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originY = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(541);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originY = (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) / (jfloat(2)));
	}
label_8:;
	LINE_NUMBER(542);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_setScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setScale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(546);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleX = (frame[1].f);
	LINE_NUMBER(547);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleY = (frame[1].f);
	LINE_NUMBER(548);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_setScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(552);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleX = (frame[1].f);
	LINE_NUMBER(553);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleY = (frame[2].f);
	LINE_NUMBER(554);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_scaleBy_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:scaleBy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(558);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_scaleX = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_scaleX) + (frame[1].f));
	LINE_NUMBER(559);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_scaleY = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_scaleY) + (frame[1].f));
	LINE_NUMBER(560);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_scaleBy_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:scaleBy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(564);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_scaleX = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_scaleX) + (frame[1].f));
	LINE_NUMBER(565);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_scaleY = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_scaleY) + (frame[2].f));
	LINE_NUMBER(566);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_Element_getRotation_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getRotation", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(569);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_rotation);
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_setRotation_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setRotation", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(573);
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_rotation), (frame[1].f), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(574);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[1].f);
	LINE_NUMBER(575);
	((func_arc_scene_Element_rotationChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_rotationChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(577);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_setRotationOrigin_float_int(jcontext ctx, jobject self, jfloat param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setRotationOrigin", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(580);
	((func_arc_scene_Element_setOrigin_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_setOrigin_int])(ctx, (frame[0].o), (frame[2].i));
	LINE_NUMBER(581);
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_rotation), (frame[1].f), -1)) == 0) goto label_2;
	}
	{
	LINE_NUMBER(582);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[1].f);
	LINE_NUMBER(583);
	((func_arc_scene_Element_rotationChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_rotationChanged])(ctx, (frame[0].o));
	}
label_2:;
	LINE_NUMBER(585);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_rotateBy_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:rotateBy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(589);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(590);
	sp[0].o = frame[0].o;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_rotation = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_rotation) + (frame[1].f));
	LINE_NUMBER(591);
	((func_arc_scene_Element_rotationChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_rotationChanged])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(593);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setColor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(596);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_setColor_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(600);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_toFront(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:toFront", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(605);
	((func_arc_scene_Element_setZIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_setZIndex_int])(ctx, (frame[0].o), (jint(2147483647)));
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_toBack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:toBack", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(610);
	((func_arc_scene_Element_setZIndex_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_setZIndex_int])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_scene_Element_getZIndex_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getZIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(619);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(620);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[1].o)))->F_children;
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_setZIndex_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setZIndex", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(629);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ZIndex cannot be < 0."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[2].o = sp[0].o;
	LINE_NUMBER(631);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(632);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[2].o)))->F_children;
	frame[3].o = sp[0].o;
	LINE_NUMBER(633);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size) != (jint(1))) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(634);
	jint temp0 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[1].i), (((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size) - (jint(1))));
	frame[1].i = temp0;
	LINE_NUMBER(635);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].i));
	if (sp[0].o != (frame[0].o)) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(636);
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, (frame[3].o), (frame[0].o), (jint(1)));
	if (temp0 != 0) goto label_8;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(637);
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, (frame[3].o), (frame[1].i), (frame[0].o));
	LINE_NUMBER(638);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_clipBegin_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:clipBegin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(642);
	jint temp0 = (jint)((func_arc_scene_Element_clipBegin_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_clipBegin_float_float_float_float_R_boolean])(ctx, (frame[0].o), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:clipBegin", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(653);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) <= 0) goto label_1;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) > 0) goto label_2;
	}
label_1:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(654);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = (jobject)SF_arc_math_geom_Rect_tmp;
	frame[5].o = sp[0].o;
	LINE_NUMBER(655);
	((arc_math_geom_Rect *) NULL_CHECK((frame[5].o)))->F_x = (frame[1].f);
	LINE_NUMBER(656);
	((arc_math_geom_Rect *) NULL_CHECK((frame[5].o)))->F_y = (frame[2].f);
	LINE_NUMBER(657);
	((arc_math_geom_Rect *) NULL_CHECK((frame[5].o)))->F_width = (frame[3].f);
	LINE_NUMBER(658);
	((arc_math_geom_Rect *) NULL_CHECK((frame[5].o)))->F_height = (frame[4].f);
	LINE_NUMBER(659);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_stage;
	frame[6].o = sp[0].o;
	LINE_NUMBER(660);
	sp[0].o = ((jobject) &class_arc_math_geom_Rect);
	{ /* InvokeDynamic */
		clinit_arc_scene_Element_invoke_arc_func_Prov_1(ctx);
		auto proxy = (arc_scene_Element_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_arc_scene_Element_invoke_arc_func_Prov_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[7].o = (checkCast(ctx, &class_arc_math_geom_Rect, sp[0].o));
	LINE_NUMBER(661);
	((func_arc_scene_Scene_calculateScissors_arc_math_geom_Rect_arc_math_geom_Rect) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_Scene_calculateScissors_arc_math_geom_Rect_arc_math_geom_Rect])(ctx, (frame[6].o), (frame[5].o), (frame[7].o));
	LINE_NUMBER(662);
	jint temp0 = (jint)SM_arc_graphics_g2d_ScissorStack_push_arc_math_geom_Rect_R_boolean(ctx, (frame[7].o));
	if (temp0 == 0) goto label_11;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_11:;
	{
	LINE_NUMBER(663);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[7].o));
	LINE_NUMBER(664);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_clipEnd(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:clipEnd", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(669);
	sp[0].o = (jobject)SM_arc_graphics_g2d_ScissorStack_pop_R_arc_math_geom_Rect(ctx);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(670);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:screenToLocalCoordinates", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_stage;
	frame[2].o = sp[0].o;
	LINE_NUMBER(675);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(676);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_Scene_screenToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[2].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:stageToLocalCoordinates", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(681);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[0].o = (jobject)((func_arc_scene_Group_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(682);
	sp[0].o = (jobject)((func_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(683);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:localToStageCoordinates", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(690);
	sp[0].o = (jobject)((func_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:localToParentCoordinates", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(695);
	frame[2].f = (-((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(696);
	frame[3].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleX);
	LINE_NUMBER(697);
	frame[4].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleY);
	LINE_NUMBER(698);
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_translation;
	frame[5].f = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(699);
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_translation;
	frame[6].f = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(700);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(701);
	if ((floatCompare((frame[3].f), (jfloat(1)), -1)) != 0) goto label_8;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(1)), -1)) != 0) goto label_8;
	}
	{
	LINE_NUMBER(702);
	sp[0].o = frame[1].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[5].f));
	LINE_NUMBER(703);
	sp[0].o = frame[1].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[6].f));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(705);
	frame[7].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originX);
	LINE_NUMBER(706);
	frame[8].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originY);
	LINE_NUMBER(707);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x = ((((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - (frame[7].f)) * (frame[3].f)) + (frame[7].f)) + (frame[5].f));
	LINE_NUMBER(708);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y = ((((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[8].f)) * (frame[4].f)) + (frame[8].f)) + (frame[6].f));
	LINE_NUMBER(709);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(711);
	jdouble temp0 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble(((frame[2].f) * (jfloat(0.017453292f))))));
	frame[7].f = (jfloat(temp0));
	LINE_NUMBER(712);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble(((frame[2].f) * (jfloat(0.017453292f))))));
	frame[8].f = (jfloat(temp1));
	LINE_NUMBER(713);
	frame[9].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originX);
	LINE_NUMBER(714);
	frame[10].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originY);
	LINE_NUMBER(715);
	frame[11].f = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - (frame[9].f)) * (frame[3].f));
	LINE_NUMBER(716);
	frame[12].f = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[10].f)) * (frame[4].f));
	LINE_NUMBER(717);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x = (((((frame[11].f) * (frame[7].f)) + ((frame[12].f) * (frame[8].f))) + (frame[9].f)) + (frame[5].f));
	LINE_NUMBER(718);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y = (((((frame[11].f) * (-(frame[8].f))) + ((frame[12].f) * (frame[7].f))) + (frame[10].f)) + (frame[6].f));
	}
label_11:;
	{
	LINE_NUMBER(720);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:localToAscendantCoordinates", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(725);
	frame[3].o = (frame[0].o);
	}
label_1:;
	{
	LINE_NUMBER(726);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(727);
	sp[0].o = (jobject)((func_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[3].o), (frame[2].o));
	LINE_NUMBER(728);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[3].o)))->F_parent;
	frame[3].o = sp[0].o;
	LINE_NUMBER(729);
	if ((frame[3].o) != (frame[1].o)) goto label_1;
	}
	goto label_2;
label_2:;
	{
	LINE_NUMBER(731);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:parentToLocalCoordinates", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(736);
	frame[2].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_rotation);
	LINE_NUMBER(737);
	frame[3].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleX);
	LINE_NUMBER(738);
	frame[4].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleY);
	LINE_NUMBER(739);
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_translation;
	frame[5].f = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(740);
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_translation;
	frame[6].f = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(741);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_6;
	}
	{
	LINE_NUMBER(742);
	if ((floatCompare((frame[3].f), (jfloat(1)), -1)) != 0) goto label_8;
	}
	{
	if ((floatCompare((frame[4].f), (jfloat(1)), -1)) != 0) goto label_8;
	}
	{
	LINE_NUMBER(743);
	sp[0].o = frame[1].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) - (frame[5].f));
	LINE_NUMBER(744);
	sp[0].o = frame[1].o;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y) - (frame[6].f));
	goto label_11;
	}
label_8:;
	{
	LINE_NUMBER(746);
	frame[7].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originX);
	LINE_NUMBER(747);
	frame[8].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originY);
	LINE_NUMBER(748);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x = ((((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - (frame[5].f)) - (frame[7].f)) / (frame[3].f)) + (frame[7].f));
	LINE_NUMBER(749);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y = ((((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[6].f)) - (frame[8].f)) / (frame[4].f)) + (frame[8].f));
	LINE_NUMBER(750);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(752);
	jdouble temp0 = (jdouble)SM_java_lang_Math_cos_double_R_double(ctx, (jdouble(((frame[2].f) * (jfloat(0.017453292f))))));
	frame[7].f = (jfloat(temp0));
	LINE_NUMBER(753);
	jdouble temp1 = (jdouble)SM_java_lang_Math_sin_double_R_double(ctx, (jdouble(((frame[2].f) * (jfloat(0.017453292f))))));
	frame[8].f = (jfloat(temp1));
	LINE_NUMBER(754);
	frame[9].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originX);
	LINE_NUMBER(755);
	frame[10].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originY);
	LINE_NUMBER(756);
	frame[11].f = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x) - (frame[5].f)) - (frame[9].f));
	LINE_NUMBER(757);
	frame[12].f = ((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[6].f)) - (frame[10].f));
	LINE_NUMBER(758);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x = (((((frame[11].f) * (frame[7].f)) + ((frame[12].f) * (frame[8].f))) / (frame[3].f)) + (frame[9].f));
	LINE_NUMBER(759);
	((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y = (((((frame[11].f) * (-(frame[8].f))) + ((frame[12].f) * (frame[7].f))) / (frame[4].f)) + (frame[10].f));
	}
label_11:;
	{
	LINE_NUMBER(761);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_Element_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(765);
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getPrefWidth_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_Element_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(769);
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getPrefHeight_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_Element_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(773);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_Element_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getPrefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(777);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_Element_getMaxWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getMaxWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(781);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_Element_getMaxHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:getMaxHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(785);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_setLayoutEnabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setLayoutEnabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(789);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_layoutEnabled = (frame[1].i);
	LINE_NUMBER(790);
	if ((frame[1].i) == 0) goto label_2;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_scene_Element_invalidateHierarchy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_invalidateHierarchy])(ctx, sp[0].o);
label_2:;
	LINE_NUMBER(791);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_validate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:validate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(797);
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_layoutEnabled) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(799);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(800);
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_fillParent) == 0) goto label_3;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_3;
	{
	LINE_NUMBER(801);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_Group_getWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Group_getWidth_R_float])(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_scene_Group_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Group_getHeight_R_float])(ctx, (frame[1].o));
	((func_arc_scene_Element_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	}
label_3:;
	{
	LINE_NUMBER(804);
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_needsLayout) != 0) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(805);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_needsLayout = (jint(0));
	LINE_NUMBER(806);
	((func_arc_scene_Element_layout) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_layout])(ctx, (frame[0].o));
	LINE_NUMBER(807);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Element_needsLayout_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:needsLayout", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(811);
	popStackFrame(ctx);
	return ((jint)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_needsLayout);
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(818);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_needsLayout = (jint(1));
	LINE_NUMBER(819);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_invalidateHierarchy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:invalidateHierarchy", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(825);
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_layoutEnabled) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(826);
	((func_arc_scene_Element_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(827);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(828);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_arc_scene_Group_invalidateHierarchy) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_invalidateHierarchy])(ctx, sp[0].o);
label_4:;
	LINE_NUMBER(829);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_pack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:pack", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(838);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getPrefWidth_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_Element_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getPrefHeight_R_float])(ctx, (frame[0].o));
	((func_arc_scene_Element_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(839);
	((func_arc_scene_Element_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_validate])(ctx, (frame[0].o));
	LINE_NUMBER(840);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_setFillParent_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setFillParent", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(846);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_fillParent = (frame[1].i);
	LINE_NUMBER(847);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:layout", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(852);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_keepInStage(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:keepInStage", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_stage;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(856);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_stage;
	sp[0].o = (jobject)((func_arc_scene_Scene_getCamera_R_arc_graphics_Camera) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getCamera_R_arc_graphics_Camera])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(857);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_stage;
	jfloat temp0 = (jfloat)((func_arc_scene_Scene_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getWidth_R_float])(ctx, sp[0].o);
	frame[2].f = temp0;
	LINE_NUMBER(858);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_stage;
	jfloat temp1 = (jfloat)((func_arc_scene_Scene_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getHeight_R_float])(ctx, sp[0].o);
	frame[3].f = temp1;
	LINE_NUMBER(859);
	jfloat temp2 = (jfloat)((func_arc_scene_Element_getX_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getX_int_R_float])(ctx, (frame[0].o), (16));
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[1].o)))->F_position;
	if ((floatCompare((temp2 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x)), ((frame[2].f) / (jfloat(2))), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(860);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[1].o)))->F_position;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) + ((frame[2].f) / (jfloat(2)));
	jfloat temp1 = (jfloat)((func_arc_scene_Element_getY_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getY_int_R_float])(ctx, (frame[0].o), (16));
	((func_arc_scene_Element_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setPosition_float_float_int])(ctx, sp[0].o, temp0, temp1, (16));
	}
label_5:;
	{
	LINE_NUMBER(861);
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getX_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getX_int_R_float])(ctx, (frame[0].o), (8));
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[1].o)))->F_position;
	if ((floatCompare((temp0 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x)), ((-(frame[2].f)) / (jfloat(2))), 1)) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(862);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[1].o)))->F_position;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) - ((frame[2].f) / (jfloat(2)));
	jfloat temp1 = (jfloat)((func_arc_scene_Element_getY_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getY_int_R_float])(ctx, (frame[0].o), (8));
	((func_arc_scene_Element_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setPosition_float_float_int])(ctx, sp[0].o, temp0, temp1, (8));
	}
label_7:;
	{
	LINE_NUMBER(863);
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getY_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getY_int_R_float])(ctx, (frame[0].o), (jint(2)));
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[1].o)))->F_position;
	if ((floatCompare((temp0 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)), ((frame[3].f) / (jfloat(2))), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(864);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getX_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getX_int_R_float])(ctx, (frame[0].o), (jint(2)));
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[1].o)))->F_position;
	((func_arc_scene_Element_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setPosition_float_float_int])(ctx, sp[0].o, temp0, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) + ((frame[3].f) / (jfloat(2)))), (jint(2)));
	}
label_9:;
	{
	LINE_NUMBER(865);
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getY_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getY_int_R_float])(ctx, (frame[0].o), (jint(4)));
	sp[0].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[1].o)))->F_position;
	if ((floatCompare((temp0 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)), ((-(frame[3].f)) / (jfloat(2))), 1)) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(866);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getX_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getX_int_R_float])(ctx, (frame[0].o), (jint(4)));
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK((frame[1].o)))->F_position;
	((func_arc_scene_Element_setPosition_float_float_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setPosition_float_float_int])(ctx, sp[0].o, temp0, (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) - ((frame[3].f) / (jfloat(2)))), (jint(4)));
	}
label_11:;
	LINE_NUMBER(867);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Element_setTranslation_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:setTranslation", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(870);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_translation;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (frame[1].f);
	LINE_NUMBER(871);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_translation;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (frame[2].f);
	LINE_NUMBER(872);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:keyDown", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(875);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_Element_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_scene_Element_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_scene_Element_invoke_arc_func_Cons_0);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_scene_Element_keyDown_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_keyDown_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(879);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_keyDown_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:keyDown", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(883);
	sp[0].o = frame[0].o;
	clinit_arc_scene_Element$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_Element$3);
	init_arc_scene_Element$3_arc_scene_Element_arc_func_Cons(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(890);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_fireClick(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:fireClick", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(894);
	sp[0].o = (jobject)((func_arc_scene_Element_getListeners_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Element_getListeners_R_arc_struct_Seq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_scene_event_EventListener, sp[0].o));
	LINE_NUMBER(895);
	if ((isInstance(ctx, (frame[2].o), &class_arc_scene_event_ClickListener)) == 0) goto label_4;
	}
	{
	LINE_NUMBER(896);
	sp[0].o = checkCast(ctx, &class_arc_scene_event_ClickListener, (frame[2].o));
	clinit_arc_scene_event_InputEvent(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_InputEvent);
	init_arc_scene_event_InputEvent(ctx, sp[1].o);
	((func_arc_scene_event_ClickListener_clicked_arc_scene_event_InputEvent_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_event_ClickListener_clicked_arc_scene_event_InputEvent_float_float])(ctx, sp[0].o, sp[1].o, (jfloat(-1.0f)), (jfloat(-1.0f)));
	}
label_4:;
	LINE_NUMBER(898);
	goto label_1;
label_2:;
	LINE_NUMBER(899);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:clicked", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(903);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_mouseLeft;
	sp[0].o = (jobject)((func_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:clicked", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(908);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_Element_invoke_arc_func_Cons_1(ctx);
		auto proxy = (arc_scene_Element_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_arc_scene_Element_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:clicked", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(913);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_arc_scene_Element_invoke_arc_func_Cons_2(ctx);
		auto proxy = (arc_scene_Element_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_arc_scene_Element_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:clicked", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(918);
	frame[4].o = (frame[0].o);
	LINE_NUMBER(919);
	sp[0].o = frame[0].o;
	clinit_arc_scene_Element$4(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_Element$4);
	init_arc_scene_Element$4_arc_scene_Element_arc_func_Cons_arc_scene_Element(ctx, sp[1].o, (frame[0].o), (frame[2].o), (frame[4].o));
	frame[3].o = sp[1].o;
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(925);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(926);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:tapped", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(933);
	sp[0].o = frame[0].o;
	clinit_arc_scene_Element$5(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_Element$5);
	init_arc_scene_Element$5_arc_scene_Element_java_lang_Runnable(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	frame[2].o = sp[1].o;
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(942);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_hovered_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:hovered", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(947);
	sp[0].o = frame[0].o;
	clinit_arc_scene_Element$6(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_Element$6);
	init_arc_scene_Element$6_arc_scene_Element_java_lang_Runnable(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(953);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_exited_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:exited", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(957);
	sp[0].o = frame[0].o;
	clinit_arc_scene_Element$7(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_Element$7);
	init_arc_scene_Element$7_arc_scene_Element_java_lang_Runnable(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(963);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_released_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:released", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(967);
	sp[0].o = frame[0].o;
	clinit_arc_scene_Element$8(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_Element$8);
	init_arc_scene_Element$8_arc_scene_Element_java_lang_Runnable(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(975);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_change(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:change", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(979);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_ChangeListener$ChangeEvent(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_event_ChangeListener$ChangeEvent);
	init_arc_scene_event_ChangeListener$ChangeEvent(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(980);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_changed_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:changed", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(984);
	frame[2].o = (frame[0].o);
	LINE_NUMBER(985);
	sp[0].o = frame[0].o;
	clinit_arc_scene_Element$9(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_Element$9);
	init_arc_scene_Element$9_arc_scene_Element_arc_scene_Element_java_lang_Runnable(ctx, sp[1].o, (frame[0].o), (frame[2].o), (frame[1].o));
	jint temp0 = (jint)((func_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(991);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(994);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_update = (jref) (frame[1].o);
	LINE_NUMBER(995);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:visible", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(999);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_visibility = (jref) (frame[1].o);
	LINE_NUMBER(1000);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_Element_touchable_arc_func_Prov(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:touchable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1004);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_touchablility = (jref) (frame[1].o);
	LINE_NUMBER(1005);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Element_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:toString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1009);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_name;
	frame[1].o = sp[0].o;
	LINE_NUMBER(1010);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(1011);
	sp[0].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@"_j))));
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(1012);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (46));
	frame[2].i = temp0;
	LINE_NUMBER(1013);
	if ((frame[2].i) == (jint(-1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))));
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1015);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_arc_scene_Element_lambda$clicked$1_java_lang_Runnable_arc_scene_event_ClickListener(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:lambda$clicked$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Element(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(913);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_Element_lambda$clicked$0_arc_input_KeyCode_arc_scene_event_ClickListener(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:lambda$clicked$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Element(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(908);
	((func_arc_scene_event_ClickListener_setButton_arc_input_KeyCode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_event_ClickListener_setButton_arc_input_KeyCode])(ctx, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_scene_Element_lambda$keyDown$0_arc_input_KeyCode_java_lang_Runnable_arc_input_KeyCode(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Element:lambda$keyDown$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Element(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(876);
	if ((frame[2].o) != (frame[0].o)) goto label_1;
	}
	{
	LINE_NUMBER(877);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(878);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_scene_Element[] {
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
	(void *) M_arc_scene_Element_draw,
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
};

static FieldMetadata fields[] {
	{ "color", &class_arc_graphics_Color, offsetof(arc_scene_Element, F_color), "Larc/graphics/Color;", 17 },
	{ "originX", &class_float, offsetof(arc_scene_Element, F_originX), "F", 1 },
	{ "originY", &class_float, offsetof(arc_scene_Element, F_originY), "F", 1 },
	{ "scaleX", &class_float, offsetof(arc_scene_Element, F_scaleX), "F", 1 },
	{ "scaleY", &class_float, offsetof(arc_scene_Element, F_scaleY), "F", 1 },
	{ "rotation", &class_float, offsetof(arc_scene_Element, F_rotation), "F", 1 },
	{ "name", &class_java_lang_String, offsetof(arc_scene_Element, F_name), "Ljava/lang/String;", 1 },
	{ "fillParent", &class_boolean, offsetof(arc_scene_Element, F_fillParent), "Z", 1 },
	{ "translation", &class_arc_math_geom_Vec2, offsetof(arc_scene_Element, F_translation), "Larc/math/geom/Vec2;", 1 },
	{ "visible", &class_boolean, offsetof(arc_scene_Element, F_visible), "Z", 1 },
	{ "userObject", &class_java_lang_Object, offsetof(arc_scene_Element, F_userObject), "Ljava/lang/Object;", 1 },
	{ "touchable", &class_arc_scene_event_Touchable, offsetof(arc_scene_Element, F_touchable), "Larc/scene/event/Touchable;", 1 },
	{ "parent", &class_arc_scene_Group, offsetof(arc_scene_Element, F_parent), "Larc/scene/Group;", 1 },
	{ "visibility", &class_arc_func_Boolp, offsetof(arc_scene_Element, F_visibility), "Larc/func/Boolp;", 1 },
	{ "touchablility", &class_arc_func_Prov, offsetof(arc_scene_Element, F_touchablility), "Larc/func/Prov;", 1 },
	{ "cullable", &class_boolean, offsetof(arc_scene_Element, F_cullable), "Z", 1 },
	{ "listeners", &class_arc_struct_DelayedRemovalSeq, offsetof(arc_scene_Element, F_listeners), "Larc/struct/DelayedRemovalSeq;", 18 },
	{ "captureListeners", &class_arc_struct_DelayedRemovalSeq, offsetof(arc_scene_Element, F_captureListeners), "Larc/struct/DelayedRemovalSeq;", 18 },
	{ "actions", &class_arc_struct_Seq, offsetof(arc_scene_Element, F_actions), "Larc/struct/Seq;", 18 },
	{ "x", &class_float, offsetof(arc_scene_Element, F_x), "F", 1 },
	{ "y", &class_float, offsetof(arc_scene_Element, F_y), "F", 1 },
	{ "width", &class_float, offsetof(arc_scene_Element, F_width), "F", 4 },
	{ "height", &class_float, offsetof(arc_scene_Element, F_height), "F", 4 },
	{ "parentAlpha", &class_float, offsetof(arc_scene_Element, F_parentAlpha), "F", 4 },
	{ "stage", &class_arc_scene_Scene, offsetof(arc_scene_Element, F_stage), "Larc/scene/Scene;", 2 },
	{ "needsLayout", &class_boolean, offsetof(arc_scene_Element, F_needsLayout), "Z", 2 },
	{ "layoutEnabled", &class_boolean, offsetof(arc_scene_Element, F_layoutEnabled), "Z", 2 },
	{ "update", &class_java_lang_Runnable, offsetof(arc_scene_Element, F_update), "Ljava/lang/Runnable;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_Element, 0, "()V", 1 },
	{ "draw", (intptr_t) M_arc_scene_Element_draw, VTABLE_arc_scene_Element_draw, "()V", 1 },
	{ "act", (intptr_t) M_arc_scene_Element_act_float, VTABLE_arc_scene_Element_act_float, "(F)V", 1 },
	{ "updateVisibility", (intptr_t) M_arc_scene_Element_updateVisibility, VTABLE_arc_scene_Element_updateVisibility, "()V", 1 },
	{ "hasMouse", (intptr_t) M_arc_scene_Element_hasMouse_R_boolean, VTABLE_arc_scene_Element_hasMouse_R_boolean, "()Z", 1 },
	{ "hasKeyboard", (intptr_t) M_arc_scene_Element_hasKeyboard_R_boolean, VTABLE_arc_scene_Element_hasKeyboard_R_boolean, "()Z", 1 },
	{ "hasScroll", (intptr_t) M_arc_scene_Element_hasScroll_R_boolean, VTABLE_arc_scene_Element_hasScroll_R_boolean, "()Z", 1 },
	{ "requestKeyboard", (intptr_t) M_arc_scene_Element_requestKeyboard, VTABLE_arc_scene_Element_requestKeyboard, "()V", 1 },
	{ "requestScroll", (intptr_t) M_arc_scene_Element_requestScroll, VTABLE_arc_scene_Element_requestScroll, "()V", 1 },
	{ "fire", (intptr_t) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean, VTABLE_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean, "(Larc/scene/event/SceneEvent;)Z", 1 },
	{ "notify", (intptr_t) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean, VTABLE_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean, "(Larc/scene/event/SceneEvent;Z)Z", 1 },
	{ "hit", (intptr_t) M_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element, VTABLE_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element, "(FFZ)Larc/scene/Element;", 1 },
	{ "remove", (intptr_t) M_arc_scene_Element_remove_R_boolean, VTABLE_arc_scene_Element_remove_R_boolean, "()Z", 1 },
	{ "dragged", (intptr_t) M_arc_scene_Element_dragged_arc_func_Floatc2, VTABLE_arc_scene_Element_dragged_arc_func_Floatc2, "(Larc/func/Floatc2;)V", 1 },
	{ "scrolled", (intptr_t) M_arc_scene_Element_scrolled_arc_func_Floatc, VTABLE_arc_scene_Element_scrolled_arc_func_Floatc, "(Larc/func/Floatc;)V", 1 },
	{ "addListener", (intptr_t) M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean, VTABLE_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean, "(Larc/scene/event/EventListener;)Z", 1 },
	{ "removeListener", (intptr_t) M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean, VTABLE_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean, "(Larc/scene/event/EventListener;)Z", 1 },
	{ "getListeners", (intptr_t) M_arc_scene_Element_getListeners_R_arc_struct_Seq, VTABLE_arc_scene_Element_getListeners_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "addCaptureListener", (intptr_t) M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean, VTABLE_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean, "(Larc/scene/event/EventListener;)Z", 1 },
	{ "removeCaptureListener", (intptr_t) M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean, VTABLE_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean, "(Larc/scene/event/EventListener;)Z", 1 },
	{ "getCaptureListeners", (intptr_t) M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq, VTABLE_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "addAction", (intptr_t) M_arc_scene_Element_addAction_arc_scene_Action, VTABLE_arc_scene_Element_addAction_arc_scene_Action, "(Larc/scene/Action;)V", 1 },
	{ "actions", (intptr_t) M_arc_scene_Element_actions_Array1_arc_scene_Action, VTABLE_arc_scene_Element_actions_Array1_arc_scene_Action, "([Larc/scene/Action;)V", 129 },
	{ "removeAction", (intptr_t) M_arc_scene_Element_removeAction_arc_scene_Action, VTABLE_arc_scene_Element_removeAction_arc_scene_Action, "(Larc/scene/Action;)V", 1 },
	{ "getActions", (intptr_t) M_arc_scene_Element_getActions_R_arc_struct_Seq, VTABLE_arc_scene_Element_getActions_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "hasActions", (intptr_t) M_arc_scene_Element_hasActions_R_boolean, VTABLE_arc_scene_Element_hasActions_R_boolean, "()Z", 1 },
	{ "clearActions", (intptr_t) M_arc_scene_Element_clearActions, VTABLE_arc_scene_Element_clearActions, "()V", 1 },
	{ "clearListeners", (intptr_t) M_arc_scene_Element_clearListeners, VTABLE_arc_scene_Element_clearListeners, "()V", 1 },
	{ "clear", (intptr_t) M_arc_scene_Element_clear, VTABLE_arc_scene_Element_clear, "()V", 1 },
	{ "getScene", (intptr_t) M_arc_scene_Element_getScene_R_arc_scene_Scene, VTABLE_arc_scene_Element_getScene_R_arc_scene_Scene, "()Larc/scene/Scene;", 1 },
	{ "setScene", (intptr_t) M_arc_scene_Element_setScene_arc_scene_Scene, VTABLE_arc_scene_Element_setScene_arc_scene_Scene, "(Larc/scene/Scene;)V", 4 },
	{ "isDescendantOf", (intptr_t) M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean, VTABLE_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean, "(Larc/func/Boolf;)Z", 1 },
	{ "isDescendantOf", (intptr_t) M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean, VTABLE_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean, "(Larc/scene/Element;)Z", 1 },
	{ "isAscendantOf", (intptr_t) M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean, VTABLE_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean, "(Larc/scene/Element;)Z", 1 },
	{ "hasParent", (intptr_t) M_arc_scene_Element_hasParent_R_boolean, VTABLE_arc_scene_Element_hasParent_R_boolean, "()Z", 1 },
	{ "isTouchable", (intptr_t) M_arc_scene_Element_isTouchable_R_boolean, VTABLE_arc_scene_Element_isTouchable_R_boolean, "()Z", 1 },
	{ "getX", (intptr_t) M_arc_scene_Element_getX_int_R_float, VTABLE_arc_scene_Element_getX_int_R_float, "(I)F", 1 },
	{ "getY", (intptr_t) M_arc_scene_Element_getY_int_R_float, VTABLE_arc_scene_Element_getY_int_R_float, "(I)F", 1 },
	{ "setPosition", (intptr_t) M_arc_scene_Element_setPosition_float_float, VTABLE_arc_scene_Element_setPosition_float_float, "(FF)V", 1 },
	{ "setPosition", (intptr_t) M_arc_scene_Element_setPosition_float_float_int, VTABLE_arc_scene_Element_setPosition_float_float_int, "(FFI)V", 1 },
	{ "moveBy", (intptr_t) M_arc_scene_Element_moveBy_float_float, VTABLE_arc_scene_Element_moveBy_float_float, "(FF)V", 1 },
	{ "getWidth", (intptr_t) M_arc_scene_Element_getWidth_R_float, VTABLE_arc_scene_Element_getWidth_R_float, "()F", 1 },
	{ "setWidth", (intptr_t) M_arc_scene_Element_setWidth_float, VTABLE_arc_scene_Element_setWidth_float, "(F)V", 1 },
	{ "getHeight", (intptr_t) M_arc_scene_Element_getHeight_R_float, VTABLE_arc_scene_Element_getHeight_R_float, "()F", 1 },
	{ "setHeight", (intptr_t) M_arc_scene_Element_setHeight_float, VTABLE_arc_scene_Element_setHeight_float, "(F)V", 1 },
	{ "getTop", (intptr_t) M_arc_scene_Element_getTop_R_float, VTABLE_arc_scene_Element_getTop_R_float, "()F", 1 },
	{ "getRight", (intptr_t) M_arc_scene_Element_getRight_R_float, VTABLE_arc_scene_Element_getRight_R_float, "()F", 1 },
	{ "sizeChanged", (intptr_t) M_arc_scene_Element_sizeChanged, VTABLE_arc_scene_Element_sizeChanged, "()V", 4 },
	{ "rotationChanged", (intptr_t) M_arc_scene_Element_rotationChanged, VTABLE_arc_scene_Element_rotationChanged, "()V", 4 },
	{ "setSize", (intptr_t) M_arc_scene_Element_setSize_float, VTABLE_arc_scene_Element_setSize_float, "(F)V", 1 },
	{ "setSize", (intptr_t) M_arc_scene_Element_setSize_float_float, VTABLE_arc_scene_Element_setSize_float_float, "(FF)V", 1 },
	{ "sizeBy", (intptr_t) M_arc_scene_Element_sizeBy_float, VTABLE_arc_scene_Element_sizeBy_float, "(F)V", 1 },
	{ "sizeBy", (intptr_t) M_arc_scene_Element_sizeBy_float_float, VTABLE_arc_scene_Element_sizeBy_float_float, "(FF)V", 1 },
	{ "setBounds", (intptr_t) M_arc_scene_Element_setBounds_float_float_float_float, VTABLE_arc_scene_Element_setBounds_float_float_float_float, "(FFFF)V", 1 },
	{ "setOrigin", (intptr_t) M_arc_scene_Element_setOrigin_float_float, VTABLE_arc_scene_Element_setOrigin_float_float, "(FF)V", 1 },
	{ "setOrigin", (intptr_t) M_arc_scene_Element_setOrigin_int, VTABLE_arc_scene_Element_setOrigin_int, "(I)V", 1 },
	{ "setScale", (intptr_t) M_arc_scene_Element_setScale_float, VTABLE_arc_scene_Element_setScale_float, "(F)V", 1 },
	{ "setScale", (intptr_t) M_arc_scene_Element_setScale_float_float, VTABLE_arc_scene_Element_setScale_float_float, "(FF)V", 1 },
	{ "scaleBy", (intptr_t) M_arc_scene_Element_scaleBy_float, VTABLE_arc_scene_Element_scaleBy_float, "(F)V", 1 },
	{ "scaleBy", (intptr_t) M_arc_scene_Element_scaleBy_float_float, VTABLE_arc_scene_Element_scaleBy_float_float, "(FF)V", 1 },
	{ "getRotation", (intptr_t) M_arc_scene_Element_getRotation_R_float, VTABLE_arc_scene_Element_getRotation_R_float, "()F", 1 },
	{ "setRotation", (intptr_t) M_arc_scene_Element_setRotation_float, VTABLE_arc_scene_Element_setRotation_float, "(F)V", 1 },
	{ "setRotationOrigin", (intptr_t) M_arc_scene_Element_setRotationOrigin_float_int, VTABLE_arc_scene_Element_setRotationOrigin_float_int, "(FI)V", 1 },
	{ "rotateBy", (intptr_t) M_arc_scene_Element_rotateBy_float, VTABLE_arc_scene_Element_rotateBy_float, "(F)V", 1 },
	{ "setColor", (intptr_t) M_arc_scene_Element_setColor_float_float_float_float, VTABLE_arc_scene_Element_setColor_float_float_float_float, "(FFFF)V", 1 },
	{ "setColor", (intptr_t) M_arc_scene_Element_setColor_arc_graphics_Color, VTABLE_arc_scene_Element_setColor_arc_graphics_Color, "(Larc/graphics/Color;)V", 1 },
	{ "toFront", (intptr_t) M_arc_scene_Element_toFront, VTABLE_arc_scene_Element_toFront, "()V", 1 },
	{ "toBack", (intptr_t) M_arc_scene_Element_toBack, VTABLE_arc_scene_Element_toBack, "()V", 1 },
	{ "getZIndex", (intptr_t) M_arc_scene_Element_getZIndex_R_int, VTABLE_arc_scene_Element_getZIndex_R_int, "()I", 1 },
	{ "setZIndex", (intptr_t) M_arc_scene_Element_setZIndex_int, VTABLE_arc_scene_Element_setZIndex_int, "(I)V", 1 },
	{ "clipBegin", (intptr_t) M_arc_scene_Element_clipBegin_R_boolean, VTABLE_arc_scene_Element_clipBegin_R_boolean, "()Z", 1 },
	{ "clipBegin", (intptr_t) M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean, VTABLE_arc_scene_Element_clipBegin_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "clipEnd", (intptr_t) M_arc_scene_Element_clipEnd, VTABLE_arc_scene_Element_clipEnd, "()V", 1 },
	{ "screenToLocalCoordinates", (intptr_t) M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "stageToLocalCoordinates", (intptr_t) M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "localToStageCoordinates", (intptr_t) M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "localToParentCoordinates", (intptr_t) M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "localToAscendantCoordinates", (intptr_t) M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "parentToLocalCoordinates", (intptr_t) M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "getMinWidth", (intptr_t) M_arc_scene_Element_getMinWidth_R_float, VTABLE_arc_scene_Element_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeight", (intptr_t) M_arc_scene_Element_getMinHeight_R_float, VTABLE_arc_scene_Element_getMinHeight_R_float, "()F", 1 },
	{ "getPrefWidth", (intptr_t) M_arc_scene_Element_getPrefWidth_R_float, VTABLE_arc_scene_Element_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_arc_scene_Element_getPrefHeight_R_float, VTABLE_arc_scene_Element_getPrefHeight_R_float, "()F", 1 },
	{ "getMaxWidth", (intptr_t) M_arc_scene_Element_getMaxWidth_R_float, VTABLE_arc_scene_Element_getMaxWidth_R_float, "()F", 1 },
	{ "getMaxHeight", (intptr_t) M_arc_scene_Element_getMaxHeight_R_float, VTABLE_arc_scene_Element_getMaxHeight_R_float, "()F", 1 },
	{ "setLayoutEnabled", (intptr_t) M_arc_scene_Element_setLayoutEnabled_boolean, VTABLE_arc_scene_Element_setLayoutEnabled_boolean, "(Z)V", 1 },
	{ "validate", (intptr_t) M_arc_scene_Element_validate, VTABLE_arc_scene_Element_validate, "()V", 1 },
	{ "needsLayout", (intptr_t) M_arc_scene_Element_needsLayout_R_boolean, VTABLE_arc_scene_Element_needsLayout_R_boolean, "()Z", 1 },
	{ "invalidate", (intptr_t) M_arc_scene_Element_invalidate, VTABLE_arc_scene_Element_invalidate, "()V", 1 },
	{ "invalidateHierarchy", (intptr_t) M_arc_scene_Element_invalidateHierarchy, VTABLE_arc_scene_Element_invalidateHierarchy, "()V", 1 },
	{ "pack", (intptr_t) M_arc_scene_Element_pack, VTABLE_arc_scene_Element_pack, "()V", 1 },
	{ "setFillParent", (intptr_t) M_arc_scene_Element_setFillParent_boolean, VTABLE_arc_scene_Element_setFillParent_boolean, "(Z)V", 1 },
	{ "layout", (intptr_t) M_arc_scene_Element_layout, VTABLE_arc_scene_Element_layout, "()V", 1 },
	{ "keepInStage", (intptr_t) M_arc_scene_Element_keepInStage, VTABLE_arc_scene_Element_keepInStage, "()V", 1 },
	{ "setTranslation", (intptr_t) M_arc_scene_Element_setTranslation_float_float, VTABLE_arc_scene_Element_setTranslation_float_float, "(FF)V", 1 },
	{ "keyDown", (intptr_t) M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable, VTABLE_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable, "(Larc/input/KeyCode;Ljava/lang/Runnable;)V", 1 },
	{ "keyDown", (intptr_t) M_arc_scene_Element_keyDown_arc_func_Cons, VTABLE_arc_scene_Element_keyDown_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "fireClick", (intptr_t) M_arc_scene_Element_fireClick, VTABLE_arc_scene_Element_fireClick, "()V", 1 },
	{ "clicked", (intptr_t) M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener, VTABLE_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener, "(Ljava/lang/Runnable;)Larc/scene/event/ClickListener;", 1 },
	{ "clicked", (intptr_t) M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener, VTABLE_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener, "(Larc/input/KeyCode;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;", 1 },
	{ "clicked", (intptr_t) M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener, VTABLE_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener, "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;", 1 },
	{ "clicked", (intptr_t) M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener, VTABLE_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener, "(Larc/func/Cons;Larc/func/Cons;)Larc/scene/event/ClickListener;", 1 },
	{ "tapped", (intptr_t) M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener, VTABLE_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener, "(Ljava/lang/Runnable;)Larc/scene/event/InputListener;", 1 },
	{ "hovered", (intptr_t) M_arc_scene_Element_hovered_java_lang_Runnable, VTABLE_arc_scene_Element_hovered_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "exited", (intptr_t) M_arc_scene_Element_exited_java_lang_Runnable, VTABLE_arc_scene_Element_exited_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "released", (intptr_t) M_arc_scene_Element_released_java_lang_Runnable, VTABLE_arc_scene_Element_released_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "change", (intptr_t) M_arc_scene_Element_change, VTABLE_arc_scene_Element_change, "()V", 1 },
	{ "changed", (intptr_t) M_arc_scene_Element_changed_java_lang_Runnable, VTABLE_arc_scene_Element_changed_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 1 },
	{ "update", (intptr_t) M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element, VTABLE_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element, "(Ljava/lang/Runnable;)Larc/scene/Element;", 1 },
	{ "visible", (intptr_t) M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element, VTABLE_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element, "(Larc/func/Boolp;)Larc/scene/Element;", 1 },
	{ "touchable", (intptr_t) M_arc_scene_Element_touchable_arc_func_Prov, VTABLE_arc_scene_Element_touchable_arc_func_Prov, "(Larc/func/Prov;)V", 1 },
	{ "toString", (intptr_t) M_arc_scene_Element_toString_R_java_lang_String, VTABLE_arc_scene_Element_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$clicked$1", (intptr_t) SM_arc_scene_Element_lambda$clicked$1_java_lang_Runnable_arc_scene_event_ClickListener, 0, "(Ljava/lang/Runnable;Larc/scene/event/ClickListener;)V", 4106 },
	{ "lambda$clicked$0", (intptr_t) SM_arc_scene_Element_lambda$clicked$0_arc_input_KeyCode_arc_scene_event_ClickListener, 0, "(Larc/input/KeyCode;Larc/scene/event/ClickListener;)V", 4106 },
	{ "lambda$keyDown$0", (intptr_t) SM_arc_scene_Element_lambda$keyDown$0_arc_input_KeyCode_java_lang_Runnable_arc_input_KeyCode, 0, "(Larc/input/KeyCode;Ljava/lang/Runnable;Larc/input/KeyCode;)V", 4106 },
};

Class class_arc_scene_Element{
		.nativeName = (intptr_t) "arc/scene/Element",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_Element),
		.classVtable = (intptr_t) vtable_arc_scene_Element,
		.staticInitializer = (intptr_t) clinit_arc_scene_Element,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_Element,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 28,
		.nativeFields = (intptr_t) fields,
		.methodCount = 115,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 121,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_Element = registerClass(&class_arc_scene_Element);

}
