#include "arc/scene/ui/layout/Stack.h"
#include "java/lang/Math.h"
#include "arc/scene/ui/layout/Stack.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/scene/Group.h"
#include "arc/scene/event/Touchable.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/Seq.h"
#include "arc/struct/SnapshotSeq.h"

extern "C" {


void mark_arc_scene_ui_layout_Stack(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_layout_WidgetGroup(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_layout_Stack *) object;
}

void clinit_arc_scene_ui_layout_Stack(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
}

void init_arc_scene_ui_layout_Stack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Stack:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Stack(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(46);
	init_arc_scene_ui_layout_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(44);
	((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(47);
	((func_arc_scene_ui_layout_Stack_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_setTransform_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(48);
	((func_arc_scene_ui_layout_Stack_setWidth_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_setWidth_float])(ctx, (frame[0].o), (jfloat(150.0f)));
	LINE_NUMBER(49);
	((func_arc_scene_ui_layout_Stack_setHeight_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_setHeight_float])(ctx, (frame[0].o), (jfloat(150.0f)));
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_childrenOnly;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_layout_Stack_Array1_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Stack:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_Stack(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	init_arc_scene_ui_layout_Stack(ctx, (frame[0].o));
	LINE_NUMBER(55);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(56);
	((func_arc_scene_ui_layout_Stack_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_addChild_arc_scene_Element])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(55);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(57);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Stack_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Stack:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	M_arc_scene_ui_layout_WidgetGroup_invalidate(ctx, (frame[0].o));
	LINE_NUMBER(62);
	((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(63);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Stack_computeSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Stack:computeSize", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(0));
	LINE_NUMBER(67);
	((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jfloat(0));
	LINE_NUMBER(68);
	((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jfloat(0));
	LINE_NUMBER(69);
	((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_minWidth = (jfloat(0));
	LINE_NUMBER(70);
	((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_minHeight = (jfloat(0));
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Stack_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(72);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_8:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(74);
	if ((frame[4].o) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(75);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_prefWidth;
	jfloat temp1 = (jfloat)((func_arc_scene_Element_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_getPrefWidth_R_float])(ctx, (frame[4].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	((arc_scene_ui_layout_Stack *) NULL_CHECK(sp[0].o))->F_prefWidth = temp2;
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_prefHeight;
	jfloat temp4 = (jfloat)((func_arc_scene_Element_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_getPrefHeight_R_float])(ctx, (frame[4].o));
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp3, temp4);
	((arc_scene_ui_layout_Stack *) NULL_CHECK(sp[0].o))->F_prefHeight = temp5;
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_minWidth;
	jfloat temp7 = (jfloat)((func_arc_scene_Element_getMinWidth_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_getMinWidth_R_float])(ctx, (frame[4].o));
	jfloat temp8 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp6, temp7);
	((arc_scene_ui_layout_Stack *) NULL_CHECK(sp[0].o))->F_minWidth = temp8;
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	jfloat temp9 = (jfloat)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_minHeight;
	jfloat temp10 = (jfloat)((func_arc_scene_Element_getMinHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_getMinHeight_R_float])(ctx, (frame[4].o));
	jfloat temp11 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp9, temp10);
	((arc_scene_ui_layout_Stack *) NULL_CHECK(sp[0].o))->F_minHeight = temp11;
	goto label_17;
	}
label_12:;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_prefWidth;
	jfloat temp1 = (jfloat)((func_arc_scene_Element_getWidth_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_getWidth_R_float])(ctx, (frame[4].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	((arc_scene_ui_layout_Stack *) NULL_CHECK(sp[0].o))->F_prefWidth = temp2;
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_prefHeight;
	jfloat temp4 = (jfloat)((func_arc_scene_Element_getHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_getHeight_R_float])(ctx, (frame[4].o));
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp3, temp4);
	((arc_scene_ui_layout_Stack *) NULL_CHECK(sp[0].o))->F_prefHeight = temp5;
	LINE_NUMBER(82);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_minWidth;
	jfloat temp7 = (jfloat)((func_arc_scene_Element_getWidth_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_getWidth_R_float])(ctx, (frame[4].o));
	jfloat temp8 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp6, temp7);
	((arc_scene_ui_layout_Stack *) NULL_CHECK(sp[0].o))->F_minWidth = temp8;
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	jfloat temp9 = (jfloat)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_minHeight;
	jfloat temp10 = (jfloat)((func_arc_scene_Element_getHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_getHeight_R_float])(ctx, (frame[4].o));
	jfloat temp11 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp9, temp10);
	((arc_scene_ui_layout_Stack *) NULL_CHECK(sp[0].o))->F_minHeight = temp11;
	}
label_17:;
	{
	LINE_NUMBER(72);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Stack_add_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Stack:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	((func_arc_scene_ui_layout_Stack_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_addChild_arc_scene_Element])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_Stack_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Stack:layout", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	if (((jint)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_scene_ui_layout_Stack_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(95);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Stack_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_getWidth_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Stack_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_getHeight_R_float])(ctx, (frame[0].o));
	frame[2].f = temp1;
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Stack_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_Stack_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(97);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	frame[6].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(99);
	((func_arc_scene_Element_setBounds_float_float_float_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_Element_setBounds_float_float_float_float])(ctx, (frame[6].o), (jfloat(0)), (jfloat(0)), (frame[1].f), (frame[2].f));
	LINE_NUMBER(100);
	if ((frame[6].o) == nullptr) goto label_11;
	}
	INST_ALOAD(6);
	POP_N(1); // Pop method args
	((func_arc_scene_Element_validate) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_validate])(ctx, sp[0].o);
label_11:;
	{
	LINE_NUMBER(97);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Stack_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Stack:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	if (((jint)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_scene_ui_layout_Stack_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_prefWidth);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Stack_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Stack:getPrefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	if (((jint)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_scene_ui_layout_Stack_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_prefHeight);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Stack_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Stack:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(118);
	if (((jint)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_scene_ui_layout_Stack_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_minWidth);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_Stack_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/Stack:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(124);
	if (((jint)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_scene_ui_layout_Stack_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_layout_Stack *) NULL_CHECK((frame[0].o)))->F_minHeight);
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_layout_Stack[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_ui_layout_WidgetGroup_draw,
	(void *) M_arc_scene_Group_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_Group_hit_float_float_boolean_R_arc_scene_Element,
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
	(void *) M_arc_scene_Group_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Group_setScene_arc_scene_Scene,
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
	(void *) M_arc_scene_ui_layout_WidgetGroup_sizeChanged,
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
	(void *) M_arc_scene_ui_layout_Stack_getMinWidth_R_float,
	(void *) M_arc_scene_ui_layout_Stack_getMinHeight_R_float,
	(void *) M_arc_scene_ui_layout_Stack_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_layout_Stack_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_Stack_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_layout_Stack_layout,
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
	(void *) M_arc_scene_Group_setCullingArea_arc_math_geom_Rect,
	(void *) M_arc_scene_Group_drawChildren,
	(void *) M_arc_scene_Group_computeTransform_R_arc_math_Mat,
	(void *) M_arc_scene_Group_applyTransform_arc_math_Mat,
	(void *) M_arc_scene_Group_resetTransform,
	(void *) M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect,
	(void *) M_arc_scene_ui_layout_WidgetGroup_childrenChanged,
	(void *) M_arc_scene_Group_forEach_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element,
	(void *) M_arc_scene_Group_fill_arc_func_Cons,
	(void *) M_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons,
	(void *) M_arc_scene_Group_addChild_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAt_int_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element,
	(void *) M_arc_scene_Group_removeChild_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean,
	(void *) M_arc_scene_Group_clearChildren,
	(void *) M_arc_scene_Group_find_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element,
	(void *) M_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element,
	(void *) M_arc_scene_Group_swapActor_int_int_R_boolean,
	(void *) M_arc_scene_Group_swapActor_arc_scene_Element_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq,
	(void *) M_arc_scene_Group_hasChildren_R_boolean,
	(void *) M_arc_scene_Group_isTransform_R_boolean,
	(void *) M_arc_scene_Group_setTransform_boolean,
	(void *) M_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Group_toString_java_lang_StringBuilder_int,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_arc_scene_Group_boolean,
	(void *) M_arc_scene_ui_layout_Stack_computeSize,
	(void *) M_arc_scene_ui_layout_Stack_add_arc_scene_Element,
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
	{ "setCullingArea", "(Larc/math/geom/Rect;)V" },
	{ "drawChildren", "()V" },
	{ "computeTransform", "()Larc/math/Mat;" },
	{ "applyTransform", "(Larc/math/Mat;)V" },
	{ "resetTransform", "()V" },
	{ "getCullingArea", "()Larc/math/geom/Rect;" },
	{ "childrenChanged", "()V" },
	{ "forEach", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/Element;" },
	{ "fill", "(Larc/func/Cons;)V" },
	{ "fill", "(Larc/scene/style/Drawable;Larc/func/Cons;)V" },
	{ "addChild", "(Larc/scene/Element;)V" },
	{ "addChildAt", "(ILarc/scene/Element;)V" },
	{ "addChildBefore", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "addChildAfter", "(Larc/scene/Element;Larc/scene/Element;)V" },
	{ "removeChild", "(Larc/scene/Element;)Z" },
	{ "removeChild", "(Larc/scene/Element;Z)Z" },
	{ "clearChildren", "()V" },
	{ "find", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "findVisible", "(Ljava/lang/String;)Larc/scene/Element;" },
	{ "find", "(Larc/func/Boolf;)Larc/scene/Element;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Larc/scene/Element;Larc/scene/Element;)Z" },
	{ "getChildren", "()Larc/struct/SnapshotSeq;" },
	{ "hasChildren", "()Z" },
	{ "isTransform", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "localToDescendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
	{ "setLayoutEnabled", "(Larc/scene/Group;Z)V" },
	{ "computeSize", "()V" },
	{ "add", "(Larc/scene/Element;)V" },
};

static FieldMetadata fields[] {
	{ "prefWidth", &class_float, offsetof(arc_scene_ui_layout_Stack, F_prefWidth), "F", 2 },
	{ "prefHeight", &class_float, offsetof(arc_scene_ui_layout_Stack, F_prefHeight), "F", 2 },
	{ "minWidth", &class_float, offsetof(arc_scene_ui_layout_Stack, F_minWidth), "F", 2 },
	{ "minHeight", &class_float, offsetof(arc_scene_ui_layout_Stack, F_minHeight), "F", 2 },
	{ "sizeInvalid", &class_boolean, offsetof(arc_scene_ui_layout_Stack, F_sizeInvalid), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_Stack, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_Stack_Array1_arc_scene_Element, 0, "([Larc/scene/Element;)V", 129 },
	{ "invalidate", (intptr_t) M_arc_scene_ui_layout_Stack_invalidate, VTABLE_arc_scene_ui_layout_Stack_invalidate, "()V", 1 },
	{ "computeSize", (intptr_t) M_arc_scene_ui_layout_Stack_computeSize, VTABLE_arc_scene_ui_layout_Stack_computeSize, "()V", 2 },
	{ "add", (intptr_t) M_arc_scene_ui_layout_Stack_add_arc_scene_Element, VTABLE_arc_scene_ui_layout_Stack_add_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
	{ "layout", (intptr_t) M_arc_scene_ui_layout_Stack_layout, VTABLE_arc_scene_ui_layout_Stack_layout, "()V", 1 },
	{ "getPrefWidth", (intptr_t) M_arc_scene_ui_layout_Stack_getPrefWidth_R_float, VTABLE_arc_scene_ui_layout_Stack_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_arc_scene_ui_layout_Stack_getPrefHeight_R_float, VTABLE_arc_scene_ui_layout_Stack_getPrefHeight_R_float, "()F", 1 },
	{ "getMinWidth", (intptr_t) M_arc_scene_ui_layout_Stack_getMinWidth_R_float, VTABLE_arc_scene_ui_layout_Stack_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeight", (intptr_t) M_arc_scene_ui_layout_Stack_getMinHeight_R_float, VTABLE_arc_scene_ui_layout_Stack_getMinHeight_R_float, "()F", 1 },
};

Class class_arc_scene_ui_layout_Stack{
		.nativeName = (intptr_t) "arc/scene/ui/layout/Stack",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_WidgetGroup,
		.size = sizeof(arc_scene_ui_layout_Stack),
		.classVtable = (intptr_t) vtable_arc_scene_ui_layout_Stack,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_layout_Stack,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_layout_Stack,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 153,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_layout_Stack = registerClass(&class_arc_scene_ui_layout_Stack);

}
