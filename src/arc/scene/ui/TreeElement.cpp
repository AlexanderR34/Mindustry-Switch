#include "arc/scene/ui/TreeElement.h"
#include "java/lang/Math.h"
#include "arc/Core.h"
#include "arc/scene/Group.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/scene/event/ClickListener.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/scene/ui/TreeElement_TreeStyle.h"
#include "arc/scene/Scene.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "java/lang/String.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/scene/ui/TreeElement_TreeElementNode.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/TreeElement.h"
#include "arc/scene/event/EventListener.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/Class.h"
#include "arc/scene/utils/Selection.h"
#include "arc/scene/ui/TreeElement_2.h"
#include "arc/scene/ui/TreeElement_1.h"

extern "C" {


void mark_arc_scene_ui_TreeElement(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_TreeElement *) object;
	if (self->F_rootNodes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rootNodes)->clazz)->markFunction)((jobject) self->F_rootNodes, mark, depth + 1);
	if (self->F_selection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selection)->clazz)->markFunction)((jobject) self->F_selection, mark, depth + 1);
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_overNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overNode)->clazz)->markFunction)((jobject) self->F_overNode, mark, depth + 1);
	if (self->F_rangeStart)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rangeStart)->clazz)->markFunction)((jobject) self->F_rangeStart, mark, depth + 1);
	if (self->F_foundNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_foundNode)->clazz)->markFunction)((jobject) self->F_foundNode, mark, depth + 1);
	if (self->F_clickListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clickListener)->clazz)->markFunction)((jobject) self->F_clickListener, mark, depth + 1);
}

void clinit_arc_scene_ui_TreeElement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
}

void init_arc_scene_ui_TreeElement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TreeElement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_scene;
	sp[1].o = (jobject)((func_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Scene_getStyle_java_lang_Class_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_scene_ui_TreeElement$TreeStyle)));
	init_arc_scene_ui_TreeElement_arc_scene_ui_TreeElement$TreeStyle(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeStyle, sp[1].o)));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_TreeElement_arc_scene_ui_TreeElement$TreeStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TreeElement(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	init_arc_scene_ui_layout_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_rootNodes = (jref) sp[1].o;
	LINE_NUMBER(30);
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_ySpacing = (jfloat(4.0f));
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_iconSpacingLeft = (jfloat(2));
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_iconSpacingRight = (jfloat(2));
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_padding = (jfloat(0));
	LINE_NUMBER(33);
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_TreeElement$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_TreeElement$1);
	init_arc_scene_ui_TreeElement$1_arc_scene_ui_TreeElement(ctx, sp[1].o, (frame[0].o));
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_selection = (jref) sp[1].o;
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_arc_scene_utils_Selection_setActor_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_utils_Selection_setActor_arc_scene_Element])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_arc_scene_utils_Selection_setMultiple_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_utils_Selection_setMultiple_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(57);
	((func_arc_scene_ui_TreeElement_setStyle_arc_scene_ui_TreeElement$TreeStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_setStyle_arc_scene_ui_TreeElement$TreeStyle])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(58);
	M_arc_scene_ui_TreeElement_initialize(ctx, (frame[0].o));
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_scene_ui_TreeElement_findExpandedObjects_arc_struct_Seq_arc_struct_Seq_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:findExpandedObjects", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TreeElement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(62);
	frame[2].i = (jint(0));
	LINE_NUMBER(63);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o));
	LINE_NUMBER(65);
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[5].o)))->F_expanded) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[5].o)))->F_children;
	jint temp0 = (jint)SM_arc_scene_ui_TreeElement_findExpandedObjects_arc_struct_Seq_arc_struct_Seq_R_boolean(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[5].o)))->F_object;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(63);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_ui_TreeElement_findNode_arc_struct_Seq_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:findNode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TreeElement(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(71);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o));
	LINE_NUMBER(73);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[4].o)))->F_object;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(71);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(75);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_8:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o));
	LINE_NUMBER(77);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[4].o)))->F_children;
	sp[0].o = (jobject)SM_arc_scene_ui_TreeElement_findNode_arc_struct_Seq_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode(ctx, sp[0].o, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(78);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(75);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_arc_scene_ui_TreeElement_collapseAll_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:collapseAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TreeElement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(84);
	frame[1].i = (jint(0));
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o));
	LINE_NUMBER(86);
	((func_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean])(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[3].o)))->F_children;
	SM_arc_scene_ui_TreeElement_collapseAll_arc_struct_Seq(ctx, sp[0].o);
	LINE_NUMBER(84);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_scene_ui_TreeElement_expandAll_arc_struct_Seq(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:expandAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TreeElement(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(92);
	frame[1].i = (jint(0));
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	((func_arc_scene_ui_TreeElement$TreeElementNode_expandAll) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_expandAll])(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o)));
	LINE_NUMBER(92);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_initialize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:initialize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_scene_ui_TreeElement$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_scene_ui_TreeElement$2);
	init_arc_scene_ui_TreeElement$2_arc_scene_ui_TreeElement(ctx, sp[2].o, (frame[0].o));
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[1].o))->F_clickListener = (jref) sp[2].o;
	jint temp0 = (jint)((func_arc_scene_ui_TreeElement_addListener_arc_scene_event_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement_addListener_arc_scene_event_EventListener_R_boolean])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_add_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	((func_arc_scene_ui_TreeElement_insert_int_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement_insert_int_arc_scene_ui_TreeElement$TreeElementNode])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size), (frame[1].o));
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_insert_int_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(153);
	((func_arc_scene_ui_TreeElement_remove_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_remove_arc_scene_ui_TreeElement$TreeElementNode])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(154);
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[2].o)))->F_parent = (jref) (jobject(nullptr));
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(156);
	((func_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(157);
	((func_arc_scene_ui_TreeElement_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_remove_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[1].o)))->F_parent;
	((func_arc_scene_ui_TreeElement$TreeElementNode_remove_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_remove_arc_scene_ui_TreeElement$TreeElementNode])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(165);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(166);
	((func_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(167);
	((func_arc_scene_ui_TreeElement_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_invalidateHierarchy])(ctx, (frame[0].o));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_clearChildren(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:clearChildren", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	M_arc_scene_Group_clearChildren(ctx, (frame[0].o));
	LINE_NUMBER(174);
	((func_arc_scene_ui_TreeElement_setOverNode_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_setOverNode_arc_scene_ui_TreeElement$TreeElementNode])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(176);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_arc_scene_utils_Selection_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_utils_Selection_clear])(ctx, sp[0].o);
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement_getNodes_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:getNodes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	M_arc_scene_ui_layout_WidgetGroup_invalidate(ctx, (frame[0].o));
	LINE_NUMBER(186);
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_computeSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:computeSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(0));
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK(sp[1].o))->F_plus;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[1].o))(ctx, sp[1].o);
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_prefWidth = temp0;
	LINE_NUMBER(192);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_prefWidth;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_style;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK(sp[1].o))->F_minus;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, temp2);
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_prefWidth = temp3;
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	jfloat temp4 = (jfloat)((func_arc_scene_ui_TreeElement_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_getHeight_R_float])(ctx, (frame[0].o));
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_prefHeight = temp4;
	LINE_NUMBER(194);
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_leftColumnWidth = (jfloat(0));
	LINE_NUMBER(195);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	M_arc_scene_ui_TreeElement_computeSize_arc_struct_Seq_float(ctx, sp[0].o, sp[1].o, ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_indentSpacing));
	LINE_NUMBER(196);
	sp[0].o = frame[0].o;
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_leftColumnWidth = (((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_leftColumnWidth) + (((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_iconSpacingLeft) + ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_padding)));
	LINE_NUMBER(197);
	sp[0].o = frame[0].o;
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_prefWidth = (((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_prefWidth) + (((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_leftColumnWidth) + ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_padding)));
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	jfloat temp5 = (jfloat)((func_arc_scene_ui_TreeElement_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_getHeight_R_float])(ctx, (frame[0].o));
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_prefHeight = (temp5 - ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_prefHeight));
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_computeSize_arc_struct_Seq_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:computeSize", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(202);
	frame[3].f = ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_ySpacing);
	LINE_NUMBER(203);
	frame[4].f = (((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_iconSpacingLeft) + ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_iconSpacingRight));
	LINE_NUMBER(204);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_4:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_5;
	}
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[5].i));
	frame[7].o = (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o));
	LINE_NUMBER(206);
	frame[8].f = ((frame[2].f) + ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_iconSpacingRight));
	LINE_NUMBER(207);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[7].o)))->F_element;
	frame[9].o = sp[0].o;
	LINE_NUMBER(208);
	if ((frame[9].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(209);
	jfloat temp0 = frame[8].f;
	jfloat temp1 = (jfloat)((func_arc_scene_Element_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_Element_getPrefWidth_R_float])(ctx, (frame[9].o));
	frame[8].f = (temp0 + temp1);
	LINE_NUMBER(210);
	sp[0].o = frame[7].o;
	jfloat temp2 = (jfloat)((func_arc_scene_Element_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_Element_getPrefHeight_R_float])(ctx, (frame[9].o));
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK(sp[0].o))->F_height = temp2;
	LINE_NUMBER(211);
	((func_arc_scene_Element_pack) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_Element_pack])(ctx, (frame[9].o));
	goto label_14;
	}
label_10:;
	{
	LINE_NUMBER(213);
	jfloat temp0 = frame[8].f;
	jfloat temp1 = (jfloat)((func_arc_scene_Element_getWidth_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_Element_getWidth_R_float])(ctx, (frame[9].o));
	frame[8].f = (temp0 + temp1);
	LINE_NUMBER(214);
	sp[0].o = frame[7].o;
	jfloat temp2 = (jfloat)((func_arc_scene_Element_getHeight_R_float) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_Element_getHeight_R_float])(ctx, (frame[9].o));
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK(sp[0].o))->F_height = temp2;
	}
label_14:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[7].o)))->F_icon;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(217);
	jfloat temp0 = frame[8].f;
	jfloat temp1 = frame[4].f;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[7].o)))->F_icon;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[8].f = (temp0 + (temp1 + temp2));
	LINE_NUMBER(218);
	sp[0].o = frame[7].o;
	jfloat temp3 = (jfloat)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[7].o)))->F_height;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[7].o)))->F_icon;
	jfloat temp4 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp3, temp4);
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK(sp[0].o))->F_height = temp5;
	}
label_16:;
	{
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_prefWidth), (frame[8].f));
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_prefWidth = temp0;
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_prefHeight = (((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_prefHeight) - (((jfloat)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[7].o)))->F_height) + (frame[3].f)));
	LINE_NUMBER(222);
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[7].o)))->F_expanded) == 0) goto label_21;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[7].o)))->F_children;
	M_arc_scene_ui_TreeElement_computeSize_arc_struct_Seq_float(ctx, sp[0].o, sp[1].o, ((frame[2].f) + ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_indentSpacing)));
	}
label_21:;
	{
	LINE_NUMBER(204);
	INST_IINC(5, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(224);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:layout", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	if (((jint)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_scene_ui_TreeElement_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	jfloat temp0 = (((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_leftColumnWidth) + ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_indentSpacing)) + ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_iconSpacingRight);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_TreeElement_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_getHeight_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)M_arc_scene_ui_TreeElement_layout_arc_struct_Seq_float_float_R_float(ctx, sp[0].o, sp[1].o, temp0, (temp1 - (((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_ySpacing) / (jfloat(2)))));
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_TreeElement_layout_arc_struct_Seq_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:layout", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(233);
	frame[4].f = ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_ySpacing);
	LINE_NUMBER(234);
	frame[5].i = (jint(0));
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_4;
	}
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[5].i));
	frame[7].o = (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o));
	LINE_NUMBER(236);
	frame[8].f = (frame[2].f);
	LINE_NUMBER(237);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[7].o)))->F_icon;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	jfloat temp0 = frame[8].f;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[7].o)))->F_icon;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[8].f = (temp0 + temp1);
	}
label_8:;
	{
	LINE_NUMBER(238);
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_TreeElement$TreeElementNode_getHeight_R_float) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getHeight_R_float])(ctx, (frame[7].o));
	frame[3].f = (temp0 - temp1);
	LINE_NUMBER(239);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[7].o)))->F_element;
	((func_arc_scene_Element_setPosition_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setPosition_float_float])(ctx, sp[0].o, (frame[8].f), (frame[3].f));
	LINE_NUMBER(240);
	frame[3].f = ((frame[3].f) - (frame[4].f));
	LINE_NUMBER(241);
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[7].o)))->F_expanded) == 0) goto label_12;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[7].o)))->F_children;
	jfloat temp0 = (jfloat)M_arc_scene_ui_TreeElement_layout_arc_struct_Seq_float_float_R_float(ctx, sp[0].o, sp[1].o, ((frame[2].f) + ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_indentSpacing)), (frame[3].f));
	frame[3].f = temp0;
	}
label_12:;
	{
	LINE_NUMBER(234);
	INST_IINC(5, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(243);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(248);
	((func_arc_scene_ui_TreeElement_drawBackground) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_drawBackground])(ctx, (frame[0].o));
	LINE_NUMBER(249);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	frame[1].o = sp[0].o;
	LINE_NUMBER(250);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b), (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha)));
	LINE_NUMBER(251);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	M_arc_scene_ui_TreeElement_draw_arc_struct_Seq_float(ctx, sp[0].o, sp[1].o, ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_leftColumnWidth));
	LINE_NUMBER(252);
	M_arc_scene_ui_layout_WidgetGroup_draw(ctx, (frame[0].o));
	LINE_NUMBER(253);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_drawBackground(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:drawBackground", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	frame[1].o = sp[0].o;
	LINE_NUMBER(259);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g), ((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b), (((jfloat)((arc_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a) * ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha)));
	LINE_NUMBER(260);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK(sp[0].o))->F_background;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp2 = (jfloat)((func_arc_scene_ui_TreeElement_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_arc_scene_ui_TreeElement_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_getHeight_R_float])(ctx, (frame[0].o));
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	}
label_1:;
	LINE_NUMBER(262);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_draw_arc_struct_Seq_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:draw", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK(sp[0].o))->F_plus;
	frame[3].o = sp[0].o;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK(sp[0].o))->F_minus;
	frame[4].o = sp[0].o;
	LINE_NUMBER(267);
	frame[5].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x);
	frame[6].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(268);
	frame[7].i = (jint(0));
	frame[8].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_6:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_7;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[7].i));
	frame[9].o = (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o));
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_element;
	frame[10].o = sp[0].o;
	LINE_NUMBER(272);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_selection;
	jint temp0 = (jint)((func_arc_scene_utils_Selection_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_utils_Selection_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[9].o));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK(sp[0].o))->F_selection;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK(sp[0].o))->F_selection;
	jfloat temp0 = frame[5].f;
	jfloat temp1 = ((frame[6].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_y)) - (((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_ySpacing) / (jfloat(2)));
	jfloat temp2 = (jfloat)((func_arc_scene_ui_TreeElement_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_getWidth_R_float])(ctx, (frame[0].o));
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, (((jfloat)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_height) + ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_ySpacing)));
	goto label_13;
	}
label_11:;
	{
	LINE_NUMBER(274);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_overNode;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK(sp[0].o))->F_over;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_hoverable) == 0) goto label_13;
	}
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK(sp[0].o))->F_over;
	jfloat temp0 = frame[5].f;
	jfloat temp1 = ((frame[6].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_y)) - (((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_ySpacing) / (jfloat(2)));
	jfloat temp2 = (jfloat)((func_arc_scene_ui_TreeElement_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_getWidth_R_float])(ctx, (frame[0].o));
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, (((jfloat)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_height) + ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_ySpacing)));
	}
label_13:;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_icon;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(279);
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_y;
	jfloat temp1 = (jfloat)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_height;
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_icon;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((temp1 - temp2) / (jfloat(2))));
	frame[11].f = (temp0 + (jfloat(temp3)));
	LINE_NUMBER(280);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(281);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_icon;
	jfloat temp4 = frame[5].f;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_element;
	jfloat temp5 = (temp4 + ((jfloat)((arc_scene_Element *) NULL_CHECK(sp[1].o))->F_x)) - ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_iconSpacingRight);
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_icon;
	jfloat temp6 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp7 = temp5 - temp6;
	jfloat temp8 = (frame[6].f) + (frame[11].f);
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_icon;
	LINE_NUMBER(282);
	jfloat temp9 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_icon;
	jfloat temp10 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, sp[1].o))(ctx, sp[1].o);
	LINE_NUMBER(281);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp7, temp8, temp9, temp10);
	LINE_NUMBER(283);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Color_white;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	}
label_15:;
	{
	LINE_NUMBER(286);
	jint temp0 = (jint)((func_arc_scene_ui_TreeElement$TreeElementNode_hasChildren_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_hasChildren_R_boolean])(ctx, (frame[9].o));
	if (temp0 != 0) goto label_22;
	}
	goto label_23;
label_22:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(289);
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_expanded) == 0) goto label_25;
	}
	INST_ALOAD(4);
	goto label_26;
label_25:;
	INST_ALOAD(3);
label_26:;
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	LINE_NUMBER(290);
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_y;
	jfloat temp1 = (jfloat)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_height;
	jfloat temp2 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[11].o)))(ctx, (frame[11].o));
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((temp1 - temp2) / (jfloat(2))));
	frame[12].f = (temp0 + (jfloat(temp3)));
	LINE_NUMBER(291);
	sp[0].o = frame[11].o;
	jfloat temp4 = ((frame[5].f) + (frame[2].f)) - ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_iconSpacingLeft);
	jfloat temp5 = (frame[6].f) + (frame[12].f);
	jfloat temp6 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[11].o)))(ctx, (frame[11].o));
	jfloat temp7 = (jfloat)((func_arc_scene_style_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, (frame[11].o)))(ctx, (frame[11].o));
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp4, temp5, temp6, temp7);
	LINE_NUMBER(292);
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_expanded) == 0) goto label_23;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[9].o)))->F_children;
	M_arc_scene_ui_TreeElement_draw_arc_struct_Seq_float(ctx, sp[0].o, sp[1].o, ((frame[2].f) + ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_indentSpacing)));
	}
label_23:;
	{
	LINE_NUMBER(268);
	INST_IINC(7, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(294);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement_getNodeAt_float_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:getNodeAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(298);
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_foundNode = (jref) (jobject(nullptr));
	LINE_NUMBER(299);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_TreeElement_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_getHeight_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)M_arc_scene_ui_TreeElement_getNodeAt_arc_struct_Seq_float_float_R_float(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(300);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_foundNode;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_TreeElement_getNodeAt_arc_struct_Seq_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:getNodeAt", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(304);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_3;
	}
	{
	LINE_NUMBER(305);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[4].i));
	frame[6].o = (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o));
	LINE_NUMBER(306);
	frame[7].f = ((jfloat)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[6].o)))->F_height);
	LINE_NUMBER(307);
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)((func_arc_scene_ui_TreeElement$TreeElementNode_getHeight_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getHeight_R_float])(ctx, (frame[6].o));
	frame[3].f = (temp0 - (temp1 - (frame[7].f)));
	LINE_NUMBER(308);
	if ((floatCompare((frame[2].f), (((frame[3].f) - (frame[7].f)) - ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_ySpacing)), -1)) < 0) goto label_8;
	}
	{
	if ((floatCompare((frame[2].f), (frame[3].f), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(309);
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_foundNode = (jref) (frame[6].o);
	LINE_NUMBER(310);
	popStackFrame(ctx);
	return (jfloat(-1.0f));
	}
label_8:;
	{
	LINE_NUMBER(312);
	frame[3].f = ((frame[3].f) - ((frame[7].f) + ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_ySpacing)));
	LINE_NUMBER(313);
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[6].o)))->F_expanded) == 0) goto label_12;
	}
	{
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[6].o)))->F_children;
	jfloat temp0 = (jfloat)M_arc_scene_ui_TreeElement_getNodeAt_arc_struct_Seq_float_float_R_float(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f));
	frame[3].f = temp0;
	LINE_NUMBER(315);
	if ((floatCompare((frame[3].f), (jfloat(-1.0f)), -1)) != 0) goto label_12;
	}
	(sp++)->f = jfloat(-1.0f);
	popStackFrame(ctx);
	INST_FRETURN();
label_12:;
	{
	LINE_NUMBER(304);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(318);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_selectNodes_arc_struct_Seq_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:selectNodes", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(322);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_3;
	}
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[4].i));
	frame[6].o = (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o));
	LINE_NUMBER(324);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[6].o)))->F_element;
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y), (frame[2].f), 1)) >= 0) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(325);
	jint temp0 = (jint)((func_arc_scene_ui_TreeElement$TreeElementNode_isSelectable_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_isSelectable_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_7;
	}
	goto label_8;
label_7:;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[6].o)))->F_element;
	if ((floatCompare(((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y), (frame[3].f), 1)) > 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_arc_scene_utils_Selection_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_utils_Selection_add_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	}
label_9:;
	{
	LINE_NUMBER(327);
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[6].o)))->F_expanded) == 0) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[6].o)))->F_children;
	((func_arc_scene_ui_TreeElement_selectNodes_arc_struct_Seq_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement_selectNodes_arc_struct_Seq_float_float])(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f));
	}
label_8:;
	{
	LINE_NUMBER(322);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(329);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement_getSelection_R_arc_scene_utils_Selection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:getSelection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(332);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_selection;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement_getStyle_R_arc_scene_ui_TreeElement$TreeStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_setStyle_arc_scene_ui_TreeElement$TreeStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:setStyle", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(340);
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK((frame[1].o)))->F_plus;
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[1].o))(ctx, sp[1].o);
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeStyle *) NULL_CHECK((frame[1].o)))->F_minus;
	jfloat temp1 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	((arc_scene_ui_TreeElement *) NULL_CHECK(sp[0].o))->F_indentSpacing = (temp2 + ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_iconSpacingLeft));
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement_getRootNodes_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:getRootNodes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement_getOverNode_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:getOverNode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_overNode;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_setOverNode_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:setOverNode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(355);
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_overNode = (jref) (frame[1].o);
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement_getOverObject_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:getOverObject", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_overNode;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(361);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_overNode;
	sp[0].o = (jobject)((func_arc_scene_ui_TreeElement$TreeElementNode_getObject_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getObject_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_setPadding_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:setPadding", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(366);
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_padding = (frame[1].f);
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_TreeElement_getIndentSpacing_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:getIndentSpacing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_indentSpacing);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_TreeElement_getYSpacing_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:getYSpacing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_ySpacing);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_setYSpacing_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:setYSpacing", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(380);
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_ySpacing = (frame[1].f);
	LINE_NUMBER(381);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_setIconSpacing_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:setIconSpacing", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(385);
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_iconSpacingLeft = (frame[1].f);
	LINE_NUMBER(386);
	((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_iconSpacingRight = (frame[2].f);
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_TreeElement_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(391);
	if (((jint)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_scene_ui_TreeElement_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_prefWidth);
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_TreeElement_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:getPrefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(397);
	if (((jint)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_arc_scene_ui_TreeElement_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_prefHeight);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_findExpandedObjects_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:findExpandedObjects", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(402);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	jint temp0 = (jint)SM_arc_scene_ui_TreeElement_findExpandedObjects_arc_struct_Seq_arc_struct_Seq_R_boolean(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_restoreExpandedObjects_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:restoreExpandedObjects", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(406);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(407);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	sp[0].o = (jobject)((func_arc_scene_ui_TreeElement_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(408);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(409);
	((func_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean])(ctx, (frame[4].o), (jint(1)));
	LINE_NUMBER(410);
	((func_arc_scene_ui_TreeElement$TreeElementNode_expandTo) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_expandTo])(ctx, (frame[4].o));
	}
label_6:;
	{
	LINE_NUMBER(406);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(413);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:findNode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(417);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"object cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	sp[0].o = (jobject)SM_arc_scene_ui_TreeElement_findNode_arc_struct_Seq_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_collapseAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:collapseAll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	SM_arc_scene_ui_TreeElement_collapseAll_arc_struct_Seq(ctx, sp[0].o);
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement_expandAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:expandAll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(426);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	SM_arc_scene_ui_TreeElement_expandAll_arc_struct_Seq(ctx, sp[0].o);
	LINE_NUMBER(427);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement_getClickListener_R_arc_scene_event_ClickListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement:getClickListener", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(431);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement *) NULL_CHECK((frame[0].o)))->F_clickListener;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_TreeElement[] {
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
	(void *) M_arc_scene_ui_TreeElement_draw,
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
	(void *) M_arc_scene_ui_layout_WidgetGroup_getMinWidth_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_getMinHeight_R_float,
	(void *) M_arc_scene_ui_TreeElement_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_TreeElement_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_TreeElement_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_TreeElement_layout,
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
	(void *) M_arc_scene_ui_TreeElement_clearChildren,
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
	(void *) M_arc_scene_ui_TreeElement_initialize,
	(void *) M_arc_scene_ui_TreeElement_add_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement_insert_int_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement_remove_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement_getNodes_R_arc_struct_Seq,
	(void *) M_arc_scene_ui_TreeElement_computeSize,
	(void *) M_arc_scene_ui_TreeElement_computeSize_arc_struct_Seq_float,
	(void *) M_arc_scene_ui_TreeElement_layout_arc_struct_Seq_float_float_R_float,
	(void *) M_arc_scene_ui_TreeElement_drawBackground,
	(void *) M_arc_scene_ui_TreeElement_draw_arc_struct_Seq_float,
	(void *) M_arc_scene_ui_TreeElement_getNodeAt_float_R_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement_getNodeAt_arc_struct_Seq_float_float_R_float,
	(void *) M_arc_scene_ui_TreeElement_selectNodes_arc_struct_Seq_float_float,
	(void *) M_arc_scene_ui_TreeElement_getSelection_R_arc_scene_utils_Selection,
	(void *) M_arc_scene_ui_TreeElement_getStyle_R_arc_scene_ui_TreeElement$TreeStyle,
	(void *) M_arc_scene_ui_TreeElement_setStyle_arc_scene_ui_TreeElement$TreeStyle,
	(void *) M_arc_scene_ui_TreeElement_getRootNodes_R_arc_struct_Seq,
	(void *) M_arc_scene_ui_TreeElement_getOverNode_R_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement_setOverNode_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement_getOverObject_R_java_lang_Object,
	(void *) M_arc_scene_ui_TreeElement_setPadding_float,
	(void *) M_arc_scene_ui_TreeElement_getIndentSpacing_R_float,
	(void *) M_arc_scene_ui_TreeElement_getYSpacing_R_float,
	(void *) M_arc_scene_ui_TreeElement_setYSpacing_float,
	(void *) M_arc_scene_ui_TreeElement_setIconSpacing_float_float,
	(void *) M_arc_scene_ui_TreeElement_findExpandedObjects_arc_struct_Seq,
	(void *) M_arc_scene_ui_TreeElement_restoreExpandedObjects_arc_struct_Seq,
	(void *) M_arc_scene_ui_TreeElement_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement_collapseAll,
	(void *) M_arc_scene_ui_TreeElement_expandAll,
	(void *) M_arc_scene_ui_TreeElement_getClickListener_R_arc_scene_event_ClickListener,
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
	{ "initialize", "()V" },
	{ "add", "(Larc/scene/ui/TreeElement$TreeElementNode;)V" },
	{ "insert", "(ILarc/scene/ui/TreeElement$TreeElementNode;)V" },
	{ "remove", "(Larc/scene/ui/TreeElement$TreeElementNode;)V" },
	{ "getNodes", "()Larc/struct/Seq;" },
	{ "computeSize", "()V" },
	{ "computeSize", "(Larc/struct/Seq;F)V" },
	{ "layout", "(Larc/struct/Seq;FF)F" },
	{ "drawBackground", "()V" },
	{ "draw", "(Larc/struct/Seq;F)V" },
	{ "getNodeAt", "(F)Larc/scene/ui/TreeElement$TreeElementNode;" },
	{ "getNodeAt", "(Larc/struct/Seq;FF)F" },
	{ "selectNodes", "(Larc/struct/Seq;FF)V" },
	{ "getSelection", "()Larc/scene/utils/Selection;" },
	{ "getStyle", "()Larc/scene/ui/TreeElement$TreeStyle;" },
	{ "setStyle", "(Larc/scene/ui/TreeElement$TreeStyle;)V" },
	{ "getRootNodes", "()Larc/struct/Seq;" },
	{ "getOverNode", "()Larc/scene/ui/TreeElement$TreeElementNode;" },
	{ "setOverNode", "(Larc/scene/ui/TreeElement$TreeElementNode;)V" },
	{ "getOverObject", "()Ljava/lang/Object;" },
	{ "setPadding", "(F)V" },
	{ "getIndentSpacing", "()F" },
	{ "getYSpacing", "()F" },
	{ "setYSpacing", "(F)V" },
	{ "setIconSpacing", "(FF)V" },
	{ "findExpandedObjects", "(Larc/struct/Seq;)V" },
	{ "restoreExpandedObjects", "(Larc/struct/Seq;)V" },
	{ "findNode", "(Ljava/lang/Object;)Larc/scene/ui/TreeElement$TreeElementNode;" },
	{ "collapseAll", "()V" },
	{ "expandAll", "()V" },
	{ "getClickListener", "()Larc/scene/event/ClickListener;" },
};

static jclass innerClasses[] {
	&class_arc_scene_ui_TreeElement$TreeStyle,
	&class_arc_scene_ui_TreeElement$TreeElementNode,
};

static FieldMetadata fields[] {
	{ "rootNodes", &class_arc_struct_Seq, offsetof(arc_scene_ui_TreeElement, F_rootNodes), "Larc/struct/Seq;", 16 },
	{ "selection", &class_arc_scene_utils_Selection, offsetof(arc_scene_ui_TreeElement, F_selection), "Larc/scene/utils/Selection;", 16 },
	{ "style", &class_arc_scene_ui_TreeElement$TreeStyle, offsetof(arc_scene_ui_TreeElement, F_style), "Larc/scene/ui/TreeElement$TreeStyle;", 0 },
	{ "ySpacing", &class_float, offsetof(arc_scene_ui_TreeElement, F_ySpacing), "F", 0 },
	{ "iconSpacingLeft", &class_float, offsetof(arc_scene_ui_TreeElement, F_iconSpacingLeft), "F", 0 },
	{ "iconSpacingRight", &class_float, offsetof(arc_scene_ui_TreeElement, F_iconSpacingRight), "F", 0 },
	{ "padding", &class_float, offsetof(arc_scene_ui_TreeElement, F_padding), "F", 0 },
	{ "indentSpacing", &class_float, offsetof(arc_scene_ui_TreeElement, F_indentSpacing), "F", 0 },
	{ "overNode", &class_arc_scene_ui_TreeElement$TreeElementNode, offsetof(arc_scene_ui_TreeElement, F_overNode), "Larc/scene/ui/TreeElement$TreeElementNode;", 0 },
	{ "rangeStart", &class_arc_scene_ui_TreeElement$TreeElementNode, offsetof(arc_scene_ui_TreeElement, F_rangeStart), "Larc/scene/ui/TreeElement$TreeElementNode;", 0 },
	{ "leftColumnWidth", &class_float, offsetof(arc_scene_ui_TreeElement, F_leftColumnWidth), "F", 2 },
	{ "prefWidth", &class_float, offsetof(arc_scene_ui_TreeElement, F_prefWidth), "F", 2 },
	{ "prefHeight", &class_float, offsetof(arc_scene_ui_TreeElement, F_prefHeight), "F", 2 },
	{ "sizeInvalid", &class_boolean, offsetof(arc_scene_ui_TreeElement, F_sizeInvalid), "Z", 2 },
	{ "foundNode", &class_arc_scene_ui_TreeElement$TreeElementNode, offsetof(arc_scene_ui_TreeElement, F_foundNode), "Larc/scene/ui/TreeElement$TreeElementNode;", 2 },
	{ "clickListener", &class_arc_scene_event_ClickListener, offsetof(arc_scene_ui_TreeElement, F_clickListener), "Larc/scene/event/ClickListener;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_TreeElement, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_TreeElement_arc_scene_ui_TreeElement$TreeStyle, 0, "(Larc/scene/ui/TreeElement$TreeStyle;)V", 1 },
	{ "findExpandedObjects", (intptr_t) SM_arc_scene_ui_TreeElement_findExpandedObjects_arc_struct_Seq_arc_struct_Seq_R_boolean, 0, "(Larc/struct/Seq;Larc/struct/Seq;)Z", 8 },
	{ "findNode", (intptr_t) SM_arc_scene_ui_TreeElement_findNode_arc_struct_Seq_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode, 0, "(Larc/struct/Seq;Ljava/lang/Object;)Larc/scene/ui/TreeElement$TreeElementNode;", 8 },
	{ "collapseAll", (intptr_t) SM_arc_scene_ui_TreeElement_collapseAll_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 8 },
	{ "expandAll", (intptr_t) SM_arc_scene_ui_TreeElement_expandAll_arc_struct_Seq, 0, "(Larc/struct/Seq;)V", 8 },
	{ "initialize", (intptr_t) M_arc_scene_ui_TreeElement_initialize, VTABLE_arc_scene_ui_TreeElement_initialize, "()V", 2 },
	{ "add", (intptr_t) M_arc_scene_ui_TreeElement_add_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement_add_arc_scene_ui_TreeElement$TreeElementNode, "(Larc/scene/ui/TreeElement$TreeElementNode;)V", 1 },
	{ "insert", (intptr_t) M_arc_scene_ui_TreeElement_insert_int_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement_insert_int_arc_scene_ui_TreeElement$TreeElementNode, "(ILarc/scene/ui/TreeElement$TreeElementNode;)V", 1 },
	{ "remove", (intptr_t) M_arc_scene_ui_TreeElement_remove_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement_remove_arc_scene_ui_TreeElement$TreeElementNode, "(Larc/scene/ui/TreeElement$TreeElementNode;)V", 1 },
	{ "clearChildren", (intptr_t) M_arc_scene_ui_TreeElement_clearChildren, VTABLE_arc_scene_ui_TreeElement_clearChildren, "()V", 1 },
	{ "getNodes", (intptr_t) M_arc_scene_ui_TreeElement_getNodes_R_arc_struct_Seq, VTABLE_arc_scene_ui_TreeElement_getNodes_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "invalidate", (intptr_t) M_arc_scene_ui_TreeElement_invalidate, VTABLE_arc_scene_ui_TreeElement_invalidate, "()V", 1 },
	{ "computeSize", (intptr_t) M_arc_scene_ui_TreeElement_computeSize, VTABLE_arc_scene_ui_TreeElement_computeSize, "()V", 2 },
	{ "computeSize", (intptr_t) M_arc_scene_ui_TreeElement_computeSize_arc_struct_Seq_float, VTABLE_arc_scene_ui_TreeElement_computeSize_arc_struct_Seq_float, "(Larc/struct/Seq;F)V", 2 },
	{ "layout", (intptr_t) M_arc_scene_ui_TreeElement_layout, VTABLE_arc_scene_ui_TreeElement_layout, "()V", 1 },
	{ "layout", (intptr_t) M_arc_scene_ui_TreeElement_layout_arc_struct_Seq_float_float_R_float, VTABLE_arc_scene_ui_TreeElement_layout_arc_struct_Seq_float_float_R_float, "(Larc/struct/Seq;FF)F", 2 },
	{ "draw", (intptr_t) M_arc_scene_ui_TreeElement_draw, VTABLE_arc_scene_ui_TreeElement_draw, "()V", 1 },
	{ "drawBackground", (intptr_t) M_arc_scene_ui_TreeElement_drawBackground, VTABLE_arc_scene_ui_TreeElement_drawBackground, "()V", 4 },
	{ "draw", (intptr_t) M_arc_scene_ui_TreeElement_draw_arc_struct_Seq_float, VTABLE_arc_scene_ui_TreeElement_draw_arc_struct_Seq_float, "(Larc/struct/Seq;F)V", 2 },
	{ "getNodeAt", (intptr_t) M_arc_scene_ui_TreeElement_getNodeAt_float_R_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement_getNodeAt_float_R_arc_scene_ui_TreeElement$TreeElementNode, "(F)Larc/scene/ui/TreeElement$TreeElementNode;", 1 },
	{ "getNodeAt", (intptr_t) M_arc_scene_ui_TreeElement_getNodeAt_arc_struct_Seq_float_float_R_float, VTABLE_arc_scene_ui_TreeElement_getNodeAt_arc_struct_Seq_float_float_R_float, "(Larc/struct/Seq;FF)F", 2 },
	{ "selectNodes", (intptr_t) M_arc_scene_ui_TreeElement_selectNodes_arc_struct_Seq_float_float, VTABLE_arc_scene_ui_TreeElement_selectNodes_arc_struct_Seq_float_float, "(Larc/struct/Seq;FF)V", 0 },
	{ "getSelection", (intptr_t) M_arc_scene_ui_TreeElement_getSelection_R_arc_scene_utils_Selection, VTABLE_arc_scene_ui_TreeElement_getSelection_R_arc_scene_utils_Selection, "()Larc/scene/utils/Selection;", 1 },
	{ "getStyle", (intptr_t) M_arc_scene_ui_TreeElement_getStyle_R_arc_scene_ui_TreeElement$TreeStyle, VTABLE_arc_scene_ui_TreeElement_getStyle_R_arc_scene_ui_TreeElement$TreeStyle, "()Larc/scene/ui/TreeElement$TreeStyle;", 1 },
	{ "setStyle", (intptr_t) M_arc_scene_ui_TreeElement_setStyle_arc_scene_ui_TreeElement$TreeStyle, VTABLE_arc_scene_ui_TreeElement_setStyle_arc_scene_ui_TreeElement$TreeStyle, "(Larc/scene/ui/TreeElement$TreeStyle;)V", 1 },
	{ "getRootNodes", (intptr_t) M_arc_scene_ui_TreeElement_getRootNodes_R_arc_struct_Seq, VTABLE_arc_scene_ui_TreeElement_getRootNodes_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getOverNode", (intptr_t) M_arc_scene_ui_TreeElement_getOverNode_R_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement_getOverNode_R_arc_scene_ui_TreeElement$TreeElementNode, "()Larc/scene/ui/TreeElement$TreeElementNode;", 1 },
	{ "setOverNode", (intptr_t) M_arc_scene_ui_TreeElement_setOverNode_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement_setOverNode_arc_scene_ui_TreeElement$TreeElementNode, "(Larc/scene/ui/TreeElement$TreeElementNode;)V", 1 },
	{ "getOverObject", (intptr_t) M_arc_scene_ui_TreeElement_getOverObject_R_java_lang_Object, VTABLE_arc_scene_ui_TreeElement_getOverObject_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setPadding", (intptr_t) M_arc_scene_ui_TreeElement_setPadding_float, VTABLE_arc_scene_ui_TreeElement_setPadding_float, "(F)V", 1 },
	{ "getIndentSpacing", (intptr_t) M_arc_scene_ui_TreeElement_getIndentSpacing_R_float, VTABLE_arc_scene_ui_TreeElement_getIndentSpacing_R_float, "()F", 1 },
	{ "getYSpacing", (intptr_t) M_arc_scene_ui_TreeElement_getYSpacing_R_float, VTABLE_arc_scene_ui_TreeElement_getYSpacing_R_float, "()F", 1 },
	{ "setYSpacing", (intptr_t) M_arc_scene_ui_TreeElement_setYSpacing_float, VTABLE_arc_scene_ui_TreeElement_setYSpacing_float, "(F)V", 1 },
	{ "setIconSpacing", (intptr_t) M_arc_scene_ui_TreeElement_setIconSpacing_float_float, VTABLE_arc_scene_ui_TreeElement_setIconSpacing_float_float, "(FF)V", 1 },
	{ "getPrefWidth", (intptr_t) M_arc_scene_ui_TreeElement_getPrefWidth_R_float, VTABLE_arc_scene_ui_TreeElement_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_arc_scene_ui_TreeElement_getPrefHeight_R_float, VTABLE_arc_scene_ui_TreeElement_getPrefHeight_R_float, "()F", 1 },
	{ "findExpandedObjects", (intptr_t) M_arc_scene_ui_TreeElement_findExpandedObjects_arc_struct_Seq, VTABLE_arc_scene_ui_TreeElement_findExpandedObjects_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "restoreExpandedObjects", (intptr_t) M_arc_scene_ui_TreeElement_restoreExpandedObjects_arc_struct_Seq, VTABLE_arc_scene_ui_TreeElement_restoreExpandedObjects_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "findNode", (intptr_t) M_arc_scene_ui_TreeElement_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode, "(Ljava/lang/Object;)Larc/scene/ui/TreeElement$TreeElementNode;", 1 },
	{ "collapseAll", (intptr_t) M_arc_scene_ui_TreeElement_collapseAll, VTABLE_arc_scene_ui_TreeElement_collapseAll, "()V", 1 },
	{ "expandAll", (intptr_t) M_arc_scene_ui_TreeElement_expandAll, VTABLE_arc_scene_ui_TreeElement_expandAll, "()V", 1 },
	{ "getClickListener", (intptr_t) M_arc_scene_ui_TreeElement_getClickListener_R_arc_scene_event_ClickListener, VTABLE_arc_scene_ui_TreeElement_getClickListener_R_arc_scene_event_ClickListener, "()Larc/scene/event/ClickListener;", 1 },
};

Class class_arc_scene_ui_TreeElement{
		.nativeName = (intptr_t) "arc/scene/ui/TreeElement",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_WidgetGroup,
		.size = sizeof(arc_scene_ui_TreeElement),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TreeElement,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TreeElement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_TreeElement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 182,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TreeElement = registerClass(&class_arc_scene_ui_TreeElement);

}
