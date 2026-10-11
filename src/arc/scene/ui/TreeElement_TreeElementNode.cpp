#include "arc/scene/ui/TreeElement_TreeElementNode.h"
#include "java/lang/reflect/Field.h"
#include "arc/scene/Group.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/scene/ui/TreeElement_TreeElementNode_invoke_arc_func_Cons_1.h"
#include "arc/scene/ui/TreeElement_TreeElementNode_invoke_arc_func_Cons_0.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "java/lang/String.h"
#include "arc/scene/ui/TreeElement_TreeElementNode.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/Seq.h"
#include "arc/scene/ui/TreeElement.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/reflect/Method.h"

extern "C" {


void mark_arc_scene_ui_TreeElement$TreeElementNode(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_ui_TreeElement$TreeElementNode *) object;
	if (self->F_children)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_children)->clazz)->markFunction)((jobject) self->F_children, mark, depth + 1);
	if (self->F_childProvider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_childProvider)->clazz)->markFunction)((jobject) self->F_childProvider, mark, depth + 1);
	if (self->F_element)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_element)->clazz)->markFunction)((jobject) self->F_element, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_icon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_icon)->clazz)->markFunction)((jobject) self->F_icon, mark, depth + 1);
	if (self->F_object)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_object)->clazz)->markFunction)((jobject) self->F_object, mark, depth + 1);
}

void clinit_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_ui_TreeElement$TreeElementNode_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_TreeElement$TreeElementNode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(445);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(435);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (jint(0)));
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(439);
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_selectable = (jint(1));
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_hoverable = (jint(1));
	LINE_NUMBER(446);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"element cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(447);
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_element = (jref) (frame[1].o);
	LINE_NUMBER(448);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement$TreeElementNode_children_arc_func_Cons_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:children", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(455);
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_childProvider = (jref) (frame[1].o);
	LINE_NUMBER(456);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement$TreeElementNode_hoverable_boolean_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:hoverable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(460);
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_hoverable = (frame[1].i);
	LINE_NUMBER(461);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TreeElement$TreeElementNode_hasChildren_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:hasChildren", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(465);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_childProvider;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:addToTree", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(470);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_element;
	((func_arc_scene_ui_TreeElement_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement_addChild_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(471);
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_expanded) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_childProvider;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_childProvider;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_TreeElement$TreeElementNode_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_scene_ui_TreeElement$TreeElementNode_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode_invoke_arc_func_Cons_0);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(475);
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_childProvider = (jref) (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(478);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_7:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement])(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o)), (frame[1].o));
	LINE_NUMBER(478);
	INST_IINC(2, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(481);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:removeFromTree", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(485);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_element;
	jint temp0 = (jint)((func_arc_scene_ui_TreeElement_removeChild_arc_scene_Element_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement_removeChild_arc_scene_Element_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(486);
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_expanded) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(487);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(488);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(489);
	((func_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement])(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))), (frame[1].o));
	LINE_NUMBER(488);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(490);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement$TreeElementNode_add_arc_scene_ui_TreeElement$TreeElementNode_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(493);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	((func_arc_scene_ui_TreeElement$TreeElementNode_insert_int_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_insert_int_arc_scene_ui_TreeElement$TreeElementNode])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size), (frame[1].o));
	LINE_NUMBER(494);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement$TreeElementNode_addAll_arc_struct_Seq_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(498);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(499);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	((func_arc_scene_ui_TreeElement$TreeElementNode_insert_int_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_insert_int_arc_scene_ui_TreeElement$TreeElementNode])(ctx, sp[0].o, temp0, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[1].o)));
	LINE_NUMBER(498);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(500);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_insert_int_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(504);
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[2].o)))->F_parent = (jref) (frame[0].o);
	LINE_NUMBER(505);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	((func_arc_struct_Seq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(506);
	((func_arc_scene_ui_TreeElement$TreeElementNode_updateChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_updateChildren])(ctx, (frame[0].o));
	LINE_NUMBER(507);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)((func_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(511);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(512);
	((func_arc_scene_ui_TreeElement_remove_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_remove_arc_scene_ui_TreeElement$TreeElementNode])(ctx, (frame[1].o), (frame[0].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_parent;
	((func_arc_scene_ui_TreeElement$TreeElementNode_remove_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_remove_arc_scene_ui_TreeElement$TreeElementNode])(ctx, sp[0].o, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(516);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_remove_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	LINE_NUMBER(520);
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_expanded) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(521);
	sp[0].o = (jobject)((func_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(522);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(523);
	((func_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(524);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_6;
	}
	{
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_expanded = (jint(0));
	}
label_6:;
	LINE_NUMBER(525);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_removeAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:removeAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(528);
	sp[0].o = (jobject)((func_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(529);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(530);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_5:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(531);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement])(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o)), (frame[1].o));
	LINE_NUMBER(530);
	INST_IINC(2, 1);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(533);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(534);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:getTree", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_element;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parent;
	frame[1].o = sp[0].o;
	LINE_NUMBER(539);
	if ((isInstance(ctx, (frame[1].o), &class_arc_scene_ui_TreeElement)) != 0) goto label_2;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(540);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_ui_TreeElement, (frame[1].o)));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TreeElement$TreeElementNode_isExpanded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:isExpanded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(544);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_expanded);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:setExpanded", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(548);
	if ((frame[1].i) != ((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_expanded)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(549);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_childProvider;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(550);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_childProvider;
	{ /* InvokeDynamic */
		clinit_arc_scene_ui_TreeElement$TreeElementNode_invoke_arc_func_Cons_1(ctx);
		auto proxy = (arc_scene_ui_TreeElement$TreeElementNode_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(551);
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_childProvider = (jref) (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(553);
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_expanded = (frame[1].i);
	LINE_NUMBER(554);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_6;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_6:;
	{
	LINE_NUMBER(555);
	sp[0].o = (jobject)((func_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(556);
	if ((frame[2].o) != nullptr) goto label_8;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(557);
	if ((frame[1].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(558);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_12:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	((func_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement])(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o)), (frame[2].o));
	LINE_NUMBER(558);
	INST_IINC(3, 1);
	goto label_12;
	}
label_13:;
	goto label_16;
label_9:;
	{
	LINE_NUMBER(561);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_18:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_16;
	}
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	((func_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement])(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o)), (frame[2].o));
	LINE_NUMBER(561);
	INST_IINC(3, 1);
	goto label_18;
	}
label_16:;
	{
	LINE_NUMBER(564);
	((func_arc_scene_ui_TreeElement_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_TreeElement_invalidateHierarchy])(ctx, (frame[2].o));
	LINE_NUMBER(565);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement$TreeElementNode_getChildren_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:getChildren", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_updateChildren(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:updateChildren", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(573);
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_expanded) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(575);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(576);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_5:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	((func_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o)))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement])(ctx, (checkCast(ctx, &class_arc_scene_ui_TreeElement$TreeElementNode, sp[0].o)), (frame[1].o));
	LINE_NUMBER(576);
	INST_IINC(2, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(578);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement$TreeElementNode_getParent_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:getParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(582);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement$TreeElementNode_getObject_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:getObject", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_object;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_setObject_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:setObject", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(591);
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_object = (jref) (frame[1].o);
	LINE_NUMBER(592);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement$TreeElementNode_getIcon_R_arc_scene_style_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:getIcon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(595);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_icon;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_setIcon_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:setIcon", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(600);
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (frame[1].o);
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_scene_ui_TreeElement$TreeElementNode_getLevel_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:getLevel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(604);
	frame[1].i = (jint(0));
	LINE_NUMBER(605);
	frame[2].o = (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(607);
	INST_IINC(1, 1);
	LINE_NUMBER(608);
	sp[0].o = (jobject)((func_arc_scene_ui_TreeElement$TreeElementNode_getParent_R_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getParent_R_arc_scene_ui_TreeElement$TreeElementNode])(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(609);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(610);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_ui_TreeElement$TreeElementNode_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:findNode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(615);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"object cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(616);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_object;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(617);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)SM_arc_scene_ui_TreeElement_findNode_arc_struct_Seq_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_collapseAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:collapseAll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(622);
	((func_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(623);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	SM_arc_scene_ui_TreeElement_collapseAll_arc_struct_Seq(ctx, sp[0].o);
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_expandAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:expandAll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(628);
	((func_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(629);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	SM_arc_scene_ui_TreeElement_expandAll_arc_struct_Seq(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(630);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_expandTo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:expandTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(634);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(635);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(636);
	((func_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(637);
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_2:;
	LINE_NUMBER(639);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_ui_TreeElement$TreeElementNode_isSelectable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:isSelectable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return ((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_selectable);
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_setSelectable_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:setSelectable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(646);
	((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_selectable = (frame[1].i);
	LINE_NUMBER(647);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_findExpandedObjects_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:findExpandedObjects", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(650);
	if (((jint)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_expanded) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)SM_arc_scene_ui_TreeElement_findExpandedObjects_arc_struct_Seq_arc_struct_Seq_R_boolean(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_object;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(651);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_ui_TreeElement$TreeElementNode_restoreExpandedObjects_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:restoreExpandedObjects", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(654);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(655);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	sp[0].o = (jobject)((func_arc_scene_ui_TreeElement$TreeElementNode_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(656);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(657);
	((func_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean])(ctx, (frame[4].o), (jint(1)));
	LINE_NUMBER(658);
	((func_arc_scene_ui_TreeElement$TreeElementNode_expandTo) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_ui_TreeElement$TreeElementNode_expandTo])(ctx, (frame[4].o));
	}
label_6:;
	{
	LINE_NUMBER(654);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(661);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_TreeElement$TreeElementNode_getHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/TreeElement$TreeElementNode:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(668);
	popStackFrame(ctx);
	return ((jfloat)((arc_scene_ui_TreeElement$TreeElementNode *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_scene_ui_TreeElement$TreeElementNode;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field childProvider
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_scene_ui_TreeElement$TreeElementNode[] {
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
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_children_arc_func_Cons_R_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_hoverable_boolean_R_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_hasChildren_R_boolean,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_add_arc_scene_ui_TreeElement$TreeElementNode_R_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_addAll_arc_struct_Seq_R_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_insert_int_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_remove,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_remove_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_removeAll,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_isExpanded_R_boolean,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_getChildren_R_arc_struct_Seq,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_updateChildren,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_getParent_R_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_getObject_R_java_lang_Object,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_setObject_java_lang_Object,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_getIcon_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_setIcon_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_getLevel_R_int,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_collapseAll,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_expandAll,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_expandTo,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_isSelectable_R_boolean,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_setSelectable_boolean,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_findExpandedObjects_arc_struct_Seq,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_restoreExpandedObjects_arc_struct_Seq,
	(void *) M_arc_scene_ui_TreeElement$TreeElementNode_getHeight_R_float,
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
	{ "children", "(Larc/func/Cons;)Larc/scene/ui/TreeElement$TreeElementNode;" },
	{ "hoverable", "(Z)Larc/scene/ui/TreeElement$TreeElementNode;" },
	{ "hasChildren", "()Z" },
	{ "addToTree", "(Larc/scene/ui/TreeElement;)V" },
	{ "removeFromTree", "(Larc/scene/ui/TreeElement;)V" },
	{ "add", "(Larc/scene/ui/TreeElement$TreeElementNode;)Larc/scene/ui/TreeElement$TreeElementNode;" },
	{ "addAll", "(Larc/struct/Seq;)Larc/scene/ui/TreeElement$TreeElementNode;" },
	{ "insert", "(ILarc/scene/ui/TreeElement$TreeElementNode;)V" },
	{ "remove", "()V" },
	{ "remove", "(Larc/scene/ui/TreeElement$TreeElementNode;)V" },
	{ "removeAll", "()V" },
	{ "getTree", "()Larc/scene/ui/TreeElement;" },
	{ "isExpanded", "()Z" },
	{ "setExpanded", "(Z)V" },
	{ "getChildren", "()Larc/struct/Seq;" },
	{ "updateChildren", "()V" },
	{ "getParent", "()Larc/scene/ui/TreeElement$TreeElementNode;" },
	{ "getObject", "()Ljava/lang/Object;" },
	{ "setObject", "(Ljava/lang/Object;)V" },
	{ "getIcon", "()Larc/scene/style/Drawable;" },
	{ "setIcon", "(Larc/scene/style/Drawable;)V" },
	{ "getLevel", "()I" },
	{ "findNode", "(Ljava/lang/Object;)Larc/scene/ui/TreeElement$TreeElementNode;" },
	{ "collapseAll", "()V" },
	{ "expandAll", "()V" },
	{ "expandTo", "()V" },
	{ "isSelectable", "()Z" },
	{ "setSelectable", "(Z)V" },
	{ "findExpandedObjects", "(Larc/struct/Seq;)V" },
	{ "restoreExpandedObjects", "(Larc/struct/Seq;)V" },
	{ "getHeight", "()F" },
};

static FieldMetadata fields[] {
	{ "children", &class_arc_struct_Seq, offsetof(arc_scene_ui_TreeElement$TreeElementNode, F_children), "Larc/struct/Seq;", 16 },
	{ "childProvider", &class_arc_func_Cons, offsetof(arc_scene_ui_TreeElement$TreeElementNode, F_childProvider), "Larc/func/Cons;", 0 },
	{ "element", &class_arc_scene_Element, offsetof(arc_scene_ui_TreeElement$TreeElementNode, F_element), "Larc/scene/Element;", 0 },
	{ "parent", &class_arc_scene_ui_TreeElement$TreeElementNode, offsetof(arc_scene_ui_TreeElement$TreeElementNode, F_parent), "Larc/scene/ui/TreeElement$TreeElementNode;", 0 },
	{ "selectable", &class_boolean, offsetof(arc_scene_ui_TreeElement$TreeElementNode, F_selectable), "Z", 0 },
	{ "hoverable", &class_boolean, offsetof(arc_scene_ui_TreeElement$TreeElementNode, F_hoverable), "Z", 0 },
	{ "expanded", &class_boolean, offsetof(arc_scene_ui_TreeElement$TreeElementNode, F_expanded), "Z", 0 },
	{ "icon", &class_arc_scene_style_Drawable, offsetof(arc_scene_ui_TreeElement$TreeElementNode, F_icon), "Larc/scene/style/Drawable;", 0 },
	{ "height", &class_float, offsetof(arc_scene_ui_TreeElement$TreeElementNode, F_height), "F", 0 },
	{ "object", &class_java_lang_Object, offsetof(arc_scene_ui_TreeElement$TreeElementNode, F_object), "Ljava/lang/Object;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_TreeElement$TreeElementNode_arc_scene_Element, 0, "(Larc/scene/Element;)V", 1 },
	{ "children", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_children_arc_func_Cons_R_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_children_arc_func_Cons_R_arc_scene_ui_TreeElement$TreeElementNode, "(Larc/func/Cons;)Larc/scene/ui/TreeElement$TreeElementNode;", 1 },
	{ "hoverable", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_hoverable_boolean_R_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_hoverable_boolean_R_arc_scene_ui_TreeElement$TreeElementNode, "(Z)Larc/scene/ui/TreeElement$TreeElementNode;", 1 },
	{ "hasChildren", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_hasChildren_R_boolean, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_hasChildren_R_boolean, "()Z", 1 },
	{ "addToTree", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_addToTree_arc_scene_ui_TreeElement, "(Larc/scene/ui/TreeElement;)V", 4 },
	{ "removeFromTree", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_removeFromTree_arc_scene_ui_TreeElement, "(Larc/scene/ui/TreeElement;)V", 4 },
	{ "add", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_add_arc_scene_ui_TreeElement$TreeElementNode_R_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_add_arc_scene_ui_TreeElement$TreeElementNode_R_arc_scene_ui_TreeElement$TreeElementNode, "(Larc/scene/ui/TreeElement$TreeElementNode;)Larc/scene/ui/TreeElement$TreeElementNode;", 1 },
	{ "addAll", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_addAll_arc_struct_Seq_R_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_addAll_arc_struct_Seq_R_arc_scene_ui_TreeElement$TreeElementNode, "(Larc/struct/Seq;)Larc/scene/ui/TreeElement$TreeElementNode;", 1 },
	{ "insert", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_insert_int_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_insert_int_arc_scene_ui_TreeElement$TreeElementNode, "(ILarc/scene/ui/TreeElement$TreeElementNode;)V", 1 },
	{ "remove", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_remove, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_remove, "()V", 1 },
	{ "remove", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_remove_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_remove_arc_scene_ui_TreeElement$TreeElementNode, "(Larc/scene/ui/TreeElement$TreeElementNode;)V", 1 },
	{ "removeAll", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_removeAll, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_removeAll, "()V", 1 },
	{ "getTree", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getTree_R_arc_scene_ui_TreeElement, "()Larc/scene/ui/TreeElement;", 1 },
	{ "isExpanded", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_isExpanded_R_boolean, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_isExpanded_R_boolean, "()Z", 1 },
	{ "setExpanded", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setExpanded_boolean, "(Z)V", 1 },
	{ "getChildren", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_getChildren_R_arc_struct_Seq, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getChildren_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "updateChildren", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_updateChildren, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_updateChildren, "()V", 1 },
	{ "getParent", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_getParent_R_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getParent_R_arc_scene_ui_TreeElement$TreeElementNode, "()Larc/scene/ui/TreeElement$TreeElementNode;", 1 },
	{ "getObject", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_getObject_R_java_lang_Object, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getObject_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setObject", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_setObject_java_lang_Object, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setObject_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "getIcon", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_getIcon_R_arc_scene_style_Drawable, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getIcon_R_arc_scene_style_Drawable, "()Larc/scene/style/Drawable;", 1 },
	{ "setIcon", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_setIcon_arc_scene_style_Drawable, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setIcon_arc_scene_style_Drawable, "(Larc/scene/style/Drawable;)V", 1 },
	{ "getLevel", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_getLevel_R_int, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getLevel_R_int, "()I", 1 },
	{ "findNode", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_findNode_java_lang_Object_R_arc_scene_ui_TreeElement$TreeElementNode, "(Ljava/lang/Object;)Larc/scene/ui/TreeElement$TreeElementNode;", 1 },
	{ "collapseAll", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_collapseAll, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_collapseAll, "()V", 1 },
	{ "expandAll", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_expandAll, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_expandAll, "()V", 1 },
	{ "expandTo", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_expandTo, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_expandTo, "()V", 1 },
	{ "isSelectable", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_isSelectable_R_boolean, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_isSelectable_R_boolean, "()Z", 1 },
	{ "setSelectable", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_setSelectable_boolean, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_setSelectable_boolean, "(Z)V", 1 },
	{ "findExpandedObjects", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_findExpandedObjects_arc_struct_Seq, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_findExpandedObjects_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "restoreExpandedObjects", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_restoreExpandedObjects_arc_struct_Seq, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_restoreExpandedObjects_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "getHeight", (intptr_t) M_arc_scene_ui_TreeElement$TreeElementNode_getHeight_R_float, VTABLE_arc_scene_ui_TreeElement$TreeElementNode_getHeight_R_float, "()F", 1 },
};

Class class_arc_scene_ui_TreeElement$TreeElementNode{
		.nativeName = (intptr_t) "arc/scene/ui/TreeElement$TreeElementNode",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_ui_TreeElement$TreeElementNode),
		.classVtable = (intptr_t) vtable_arc_scene_ui_TreeElement$TreeElementNode,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_TreeElement$TreeElementNode,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_scene_ui_TreeElement$TreeElementNode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_ui_TreeElement,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 32,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_TreeElement$TreeElementNode = registerClass(&class_arc_scene_ui_TreeElement$TreeElementNode);

}

