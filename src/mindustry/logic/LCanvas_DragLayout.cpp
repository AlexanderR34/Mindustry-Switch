#include "mindustry/logic/LCanvas_DragLayout.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/logic/LCanvas_DragLayout_invoke_arc_func_Cons_6.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/logic/LCanvas_DragLayout_invoke_arc_func_Cons_5.h"
#include "mindustry/logic/LCanvas_DragLayout_invoke_arc_func_Cons_4.h"
#include "arc/struct/IntMap.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/logic/LCanvas_DragLayout_invoke_arc_func_Cons_7.h"
#include "arc/func/Cons.h"
#include "arc/struct/IntMap_Values.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "java/util/Comparator.h"
#include "arc/struct/Seq.h"
#include "mindustry/logic/LCanvas_DragLayout.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/logic/LCanvas_JumpCurve.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "arc/func/Floatf.h"
#include "mindustry/logic/LCanvas_DragLayout_invoke_java_util_Comparator_1.h"
#include "mindustry/gen/Tex.h"
#include "java/util/Iterator.h"
#include "arc/scene/Group.h"
#include "arc/struct/Bits.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LCanvas_DragLayout_invoke_arc_func_Boolf_3.h"
#include "mindustry/logic/LCanvas_DragLayout_invoke_arc_func_Boolf_2.h"
#include "mindustry/logic/LCanvas.h"
#include "mindustry/logic/LCanvas_DragLayout_invoke_arc_func_Floatf_1.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "mindustry/logic/LCanvas_StatementElem.h"
#include "arc/struct/SnapshotSeq.h"

extern "C" {


void mark_mindustry_logic_LCanvas$DragLayout(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_logic_LCanvas$DragLayout *) object;
	if (self->F_seq)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_seq)->clazz)->markFunction)((jobject) self->F_seq, mark, depth + 1);
	if (self->F_jumps)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_jumps)->clazz)->markFunction)((jobject) self->F_jumps, mark, depth + 1);
	if (self->F_processedJumps)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_processedJumps)->clazz)->markFunction)((jobject) self->F_processedJumps, mark, depth + 1);
	if (self->F_reprBefore)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reprBefore)->clazz)->markFunction)((jobject) self->F_reprBefore, mark, depth + 1);
	if (self->F_reprAfter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reprAfter)->clazz)->markFunction)((jobject) self->F_reprAfter, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_logic_LCanvas$DragLayout(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
}

void init_mindustry_logic_LCanvas$DragLayout_mindustry_logic_LCanvas(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LCanvas$DragLayout(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(197);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_ui_layout_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(10.0f)));
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK(sp[0].o))->F_space = temp0;
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK(sp[0].o))->F_seq = (jref) sp[1].o;
	LINE_NUMBER(200);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_insertPosition = (jint(0));
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	clinit_arc_scene_ui_layout_WidgetGroup(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_scene_ui_layout_WidgetGroup);
	init_arc_scene_ui_layout_WidgetGroup(ctx, sp[1].o);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK(sp[0].o))->F_jumps = (jref) sp[1].o;
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK(sp[0].o))->F_processedJumps = (jref) sp[1].o;
	LINE_NUMBER(204);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[1].o);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK(sp[0].o))->F_reprBefore = (jref) sp[1].o;
	LINE_NUMBER(205);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[1].o);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK(sp[0].o))->F_reprAfter = (jref) sp[1].o;
	LINE_NUMBER(206);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_updateJumpHeights = (jint(1));
	LINE_NUMBER(209);
	((func_mindustry_logic_LCanvas$DragLayout_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_setTransform_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$DragLayout_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:layout", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_invalidated = (jint(1));
	LINE_NUMBER(215);
	frame[1].f = (jfloat(0));
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(218);
	sp[0].o = (jobject)((func_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Floatf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	jfloat temp0 = (jfloat)((func_arc_struct_SnapshotSeq_sumf_arc_func_Floatf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_sumf_arc_func_Floatf_R_float])(ctx, sp[0].o, sp[1].o);
	frame[2].f = temp0;
	LINE_NUMBER(219);
	jint temp1 = (jint)SM_arc_math_Mathf_equal_float_float_float_R_boolean(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height), (frame[2].f), (jfloat(1)));
	if (temp1 == 0) goto label_5;
	}
	{
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_targetWidth));
	jint temp2 = (jint)SM_arc_math_Mathf_equal_float_float_float_R_boolean(ctx, temp0, temp1, (jfloat(1)));
	if (temp2 != 0) goto label_6;
	}
label_5:;
	{
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jfloat temp0 = frame[2].f;
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK(sp[1].o))->F_prefHeight = temp0;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_height = temp0;
	LINE_NUMBER(221);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((jfloat)((mindustry_logic_LCanvas *) NULL_CHECK(sp[2].o))->F_targetWidth));
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK(sp[1].o))->F_prefWidth = temp3;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_width = temp3;
	LINE_NUMBER(222);
	((func_mindustry_logic_LCanvas$DragLayout_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_invalidateHierarchy])(ctx, (frame[0].o));
	}
label_6:;
	{
	LINE_NUMBER(226);
	frame[3].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((func_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_10;
	}
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((func_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[4].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_dragging;
	if (sp[0].o != (frame[4].o)) goto label_13;
	}
	goto label_14;
label_13:;
	{
	LINE_NUMBER(232);
	sp[0].o = frame[4].o;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width;
	jfloat temp1 = (jfloat)((func_arc_scene_Element_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_getPrefHeight_R_float])(ctx, (frame[4].o));
	((func_arc_scene_Element_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setSize_float_float])(ctx, sp[0].o, temp0, temp1);
	LINE_NUMBER(233);
	((func_arc_scene_Element_setPosition_float_float_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_setPosition_float_float_int])(ctx, (frame[4].o), (jfloat(0)), ((frame[2].f) - (frame[1].f)), (10));
	LINE_NUMBER(234);
	((func_mindustry_logic_LCanvas$StatementElem_updateAddress_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_logic_LCanvas$StatementElem, (frame[4].o))))->vtable)[VTABLE_mindustry_logic_LCanvas$StatementElem_updateAddress_int])(ctx, (checkCast(ctx, &class_mindustry_logic_LCanvas$StatementElem, (frame[4].o))), (frame[3].i));
	LINE_NUMBER(236);
	jfloat temp2 = frame[1].f;
	jfloat temp3 = (jfloat)((func_arc_scene_Element_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_Element_getPrefHeight_R_float])(ctx, (frame[4].o));
	frame[1].f = (temp2 + (temp3 + ((jfloat)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_space)));
	LINE_NUMBER(237);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	}
label_14:;
	{
	LINE_NUMBER(226);
	INST_IINC(3, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_dragging;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_dragging;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LCanvas$StatementElem_getY_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$StatementElem_getY_int_R_float])(ctx, sp[0].o, (jint(2)));
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_dragging;
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_translation;
	frame[3].f = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(245);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_insertPosition = (jint(0));
	LINE_NUMBER(247);
	frame[4].i = (jint(0));
	}
label_23:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_24;
	}
	{
	LINE_NUMBER(248);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(250);
	if ((floatCompare((frame[3].f), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[5].o)))->F_y), 1)) >= 0) goto label_27;
	}
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	if (temp0 == (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) goto label_28;
	}
	{
	jfloat temp0 = frame[3].f;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((frame[4].i) + (jint(1))));
	if ((floatCompare(temp0, ((jfloat)((arc_scene_Element *) NULL_CHECK((checkCast(ctx, &class_arc_scene_Element, sp[0].o))))->F_y), -1)) <= 0) goto label_27;
	}
label_28:;
	{
	LINE_NUMBER(251);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_insertPosition = ((frame[4].i) + (jint(1)));
	LINE_NUMBER(252);
	goto label_24;
	}
label_27:;
	{
	LINE_NUMBER(247);
	INST_IINC(4, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_dragging;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LCanvas$StatementElem_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$StatementElem_getHeight_R_float])(ctx, sp[0].o);
	frame[4].f = (temp0 + ((jfloat)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_space));
	LINE_NUMBER(259);
	frame[5].i = ((jint)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_insertPosition);
	}
label_31:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_19;
	}
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = checkCast(ctx, &class_arc_scene_Element, sp[0].o);
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y = (((jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y) - (frame[4].f));
	LINE_NUMBER(259);
	INST_IINC(5, 1);
	goto label_31;
	}
label_19:;
	{
	LINE_NUMBER(265);
	if (((jint)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_updateJumpHeights) == 0) goto label_34;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_mindustry_logic_LCanvas$DragLayout_setJumpHeights) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_setJumpHeights])(ctx, sp[0].o);
label_34:;
	{
	LINE_NUMBER(266);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_updateJumpHeights = (jint(0));
	LINE_NUMBER(269);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_36;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_layout_Table)) == 0) goto label_36;
	}
	{
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	sp[1].o = (jobject)((func_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect])(ctx, sp[1].o);
	((func_mindustry_logic_LCanvas$DragLayout_setCullingArea_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_setCullingArea_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	}
label_36:;
	LINE_NUMBER(272);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$DragLayout_setJumpHeights(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:setJumpHeights", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_jumps;
	sp[0].o = (jobject)((func_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_processedJumps;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(277);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_reprBefore;
	((func_arc_struct_IntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_reprAfter;
	((func_arc_struct_IntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(279);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Cons_4(ctx);
		auto proxy = (mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Cons_4 *) gcAlloc(ctx, &class_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Cons_4);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_SnapshotSeq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_processedJumps;
	sp[1].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_reprBefore;
	sp[1].o = (jobject)((func_arc_struct_IntMap_values_R_arc_struct_IntMap$Values) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntMap_values_R_arc_struct_IntMap$Values])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_struct_IntMap$Values_toArray_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntMap$Values_toArray_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(294);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_processedJumps;
	sp[1].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_reprAfter;
	sp[1].o = (jobject)((func_arc_struct_IntMap_values_R_arc_struct_IntMap$Values) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntMap_values_R_arc_struct_IntMap$Values])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_struct_IntMap$Values_toArray_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_IntMap$Values_toArray_R_arc_struct_Seq])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_processedJumps;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LCanvas$DragLayout_invoke_java_util_Comparator_1(ctx);
		auto proxy = (mindustry_logic_LCanvas$DragLayout_invoke_java_util_Comparator_1 *) gcAlloc(ctx, &class_mindustry_logic_LCanvas$DragLayout_invoke_java_util_Comparator_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(297);
	clinit_mindustry_logic_LCanvas(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCanvas_tmpOccupiers1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(298);
	clinit_mindustry_logic_LCanvas(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCanvas_tmpBits1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(300);
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, (frame[3].o));
	LINE_NUMBER(301);
	frame[4].i = (jint(0));
	}
label_13:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_processedJumps;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_14;
	}
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_processedJumps;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[5].o = (checkCast(ctx, &class_mindustry_logic_LCanvas$JumpCurve, sp[0].o));
	LINE_NUMBER(303);
	sp[0].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Boolf_2);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(308);
	jint temp0 = (jint)((func_mindustry_logic_LCanvas$DragLayout_getJumpHeight_int_arc_struct_Seq_arc_struct_Bits_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_getJumpHeight_int_arc_struct_Seq_arc_struct_Bits_R_int])(ctx, (frame[0].o), (frame[4].i), (frame[2].o), (frame[3].o));
	frame[6].i = temp0;
	LINE_NUMBER(309);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[5].o));
	LINE_NUMBER(310);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[3].o), (frame[6].i));
	LINE_NUMBER(301);
	INST_IINC(4, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[2].o));
	LINE_NUMBER(315);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_SnapshotSeq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_logic_LCanvas$DragLayout_getJumpHeight_int_arc_struct_Seq_arc_struct_Bits_R_int(jcontext ctx, jobject self, jint param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:getJumpHeight", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(324);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_processedJumps;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[4].o = (checkCast(ctx, &class_mindustry_logic_LCanvas$JumpCurve, sp[0].o));
	LINE_NUMBER(325);
	if (((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[4].o)))->F_markedDone) == 0) goto label_2;
	}
	{
	popStackFrame(ctx);
	return ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[4].o)))->F_predHeight);
	}
label_2:;
	{
	LINE_NUMBER(327);
	clinit_mindustry_logic_LCanvas(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCanvas_tmpOccupiers2;
	frame[5].o = sp[0].o;
	LINE_NUMBER(328);
	clinit_mindustry_logic_LCanvas(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCanvas_tmpBits2;
	frame[6].o = sp[0].o;
	LINE_NUMBER(329);
	((func_arc_struct_Seq_set_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_set_arc_struct_Seq])(ctx, (frame[5].o), (frame[2].o));
	LINE_NUMBER(330);
	((func_arc_struct_Bits_set_arc_struct_Bits) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Bits_set_arc_struct_Bits])(ctx, (frame[6].o), (frame[3].o));
	LINE_NUMBER(332);
	frame[7].i = (jint(-1));
	LINE_NUMBER(333);
	frame[8].i = ((frame[1].i) + (jint(1)));
	}
label_8:;
	{
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_processedJumps;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_9;
	}
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_processedJumps;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[8].i));
	frame[9].o = (checkCast(ctx, &class_mindustry_logic_LCanvas$JumpCurve, sp[0].o));
	LINE_NUMBER(335);
	if (((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[9].o)))->F_jumpUIEnd) <= ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[4].o)))->F_jumpUIEnd)) goto label_12;
	}
	goto label_13;
label_12:;
	{
	LINE_NUMBER(336);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Boolf_3);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_retainAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(341);
	jint temp0 = (jint)((func_mindustry_logic_LCanvas$DragLayout_getJumpHeight_int_arc_struct_Seq_arc_struct_Bits_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_getJumpHeight_int_arc_struct_Seq_arc_struct_Bits_R_int])(ctx, (frame[0].o), (frame[8].i), (frame[5].o), (frame[6].o));
	frame[10].i = temp0;
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[5].o), (frame[9].o));
	LINE_NUMBER(343);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[6].o), (frame[10].i));
	LINE_NUMBER(344);
	jint temp1 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (frame[7].i), (frame[10].i));
	frame[7].i = temp1;
	}
label_13:;
	{
	LINE_NUMBER(333);
	INST_IINC(8, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(347);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_arc_struct_Bits_nextClearBit_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Bits_nextClearBit_int_R_int])(ctx, (frame[3].o), ((frame[7].i) + (jint(1))));
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK(sp[0].o))->F_predHeight = temp0;
	LINE_NUMBER(348);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[4].o)))->F_markedDone = (jint(1));
	LINE_NUMBER(350);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[5].o));
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[4].o)))->F_predHeight);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_logic_LCanvas$DragLayout_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(357);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_prefWidth);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_logic_LCanvas$DragLayout_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:getPrefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(362);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_prefHeight);
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$DragLayout_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(367);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha));
	LINE_NUMBER(370);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_dragging;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_insertPosition;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	if (temp0 > ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_dragging;
	jfloat temp0 = (jfloat)((func_mindustry_logic_LCanvas$StatementElem_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$StatementElem_getHeight_R_float])(ctx, sp[0].o);
	frame[1].f = temp0;
	LINE_NUMBER(372);
	frame[2].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(373);
	if (((jint)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_insertPosition) != 0) goto label_6;
	}
	{
	jfloat temp0 = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_height) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y);
	sp[0].f = temp0;
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (((jint)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_insertPosition) - (jint(1))));
	jfloat temp0 = (((jfloat)((arc_scene_Element *) NULL_CHECK((checkCast(ctx, &class_arc_scene_Element, sp[0].o))))->F_y) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y)) - ((jfloat)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_space);
	sp[0].f = temp0;
	sp += 1;
	}
label_7:;
	{
	sp -= 1;
	frame[3].f = sp[0].f;
	LINE_NUMBER(375);
	clinit_mindustry_gen_Tex(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Tex_pane;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (frame[3].f) - (frame[1].f);
	jfloat temp2 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_width;
	sp[1].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[1].o))->F_dragging;
	jfloat temp3 = (jfloat)((func_mindustry_logic_LCanvas$StatementElem_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LCanvas$StatementElem_getHeight_R_float])(ctx, sp[1].o);
	((func_arc_scene_style_Drawable_draw_float_float_float_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2, temp3);
	}
label_2:;
	{
	LINE_NUMBER(378);
	if (((jint)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_invalidated) == 0) goto label_9;
	}
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Cons_6);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_SnapshotSeq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	}
label_9:;
	{
	LINE_NUMBER(382);
	M_arc_scene_ui_layout_WidgetGroup_draw(ctx, (frame[0].o));
	LINE_NUMBER(384);
	if (((jint)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_invalidated) == 0) goto label_12;
	}
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_logic_LCanvas$DragLayout_invoke_arc_func_Cons_7);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_SnapshotSeq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(386);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_invalidated = (jint(0));
	}
label_12:;
	LINE_NUMBER(388);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$DragLayout_finishLayout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:finishLayout", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_dragging;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((func_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(394);
	((func_arc_scene_Element_setTranslation_float_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_Element_setTranslation_float_float])(ctx, (frame[2].o), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(395);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(396);
	((func_mindustry_logic_LCanvas$DragLayout_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(399);
	frame[1].i = (jint(0));
	}
label_8:;
	{
	if ((frame[1].i) > (((jint)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_insertPosition) - (jint(1)))) goto label_9;
	}
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_9;
	}
	{
	LINE_NUMBER(400);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[1].i));
	((func_mindustry_logic_LCanvas$DragLayout_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_addChild_arc_scene_Element])(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_Element, sp[1].o)));
	LINE_NUMBER(399);
	INST_IINC(1, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(403);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_logic_LCanvas *) NULL_CHECK(sp[1].o))->F_dragging;
	((func_mindustry_logic_LCanvas$DragLayout_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_addChild_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(405);
	frame[1].i = ((jint)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_insertPosition);
	}
label_13:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_14;
	}
	{
	LINE_NUMBER(406);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_seq;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[1].i));
	((func_mindustry_logic_LCanvas$DragLayout_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_addChild_arc_scene_Element])(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_Element, sp[1].o)));
	LINE_NUMBER(405);
	INST_IINC(1, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_logic_LCanvas *) NULL_CHECK(sp[0].o))->F_dragging = (jref) (jobject(nullptr));
	LINE_NUMBER(410);
	((func_mindustry_logic_LCanvas$DragLayout_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_logic_LCanvas$DragLayout_invalidateHierarchy])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(413);
	((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_updateJumpHeights = (jint(1));
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LCanvas$DragLayout_lambda$draw$1_arc_scene_Element(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:lambda$draw$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LCanvas$DragLayout(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(385);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_cullable = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_logic_LCanvas$DragLayout_lambda$draw$0_arc_scene_Element(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:lambda$draw$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LCanvas$DragLayout(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(379);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_cullable = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LCanvas$DragLayout_lambda$getJumpHeight$0_mindustry_logic_LCanvas$JumpCurve_arc_struct_Bits_mindustry_logic_LCanvas$JumpCurve_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:lambda$getJumpHeight$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LCanvas$DragLayout(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(337);
	if (((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_jumpUIEnd) <= ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_jumpUIBegin)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(338);
	((func_arc_struct_Bits_clear_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_clear_int])(ctx, (frame[1].o), ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_predHeight));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$3_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:lambda$setJumpHeights$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(316);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_logic_LCanvas$JumpCurve)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_logic_LCanvas$JumpCurve, (frame[1].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(317);
	if (((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_jumpUIBegin) != (jint(2147483647))) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(318);
	sp[0].o = frame[2].o;
	sp += 1;
	if (((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_flipped) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_reprAfter;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_jumpUIBegin));
	jint temp0 = (jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LCanvas$JumpCurve, sp[0].o))))->F_predHeight;
	sp[0].i = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_reprBefore;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_jumpUIEnd));
	jint temp0 = (jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((checkCast(ctx, &class_mindustry_logic_LCanvas$JumpCurve, sp[0].o))))->F_predHeight;
	sp[0].i = temp0;
	sp += 1;
	}
label_6:;
	{
	sp -= 2;
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK(sp[0].o))->F_predHeight = sp[1].i;
	LINE_NUMBER(319);
	((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_markedDone = (jint(1));
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$2_mindustry_logic_LCanvas$JumpCurve_arc_struct_Bits_mindustry_logic_LCanvas$JumpCurve_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:lambda$setJumpHeights$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LCanvas$DragLayout(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(304);
	if (((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_jumpUIEnd) <= ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_jumpUIBegin)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(305);
	((func_arc_struct_Bits_clear_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_clear_int])(ctx, (frame[1].o), ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_predHeight));
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$1_mindustry_logic_LCanvas$JumpCurve_mindustry_logic_LCanvas$JumpCurve_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:lambda$setJumpHeights$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LCanvas$DragLayout(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return (((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[0].o)))->F_jumpUIBegin) - ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[1].o)))->F_jumpUIBegin));
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$0_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:lambda$setJumpHeights$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(280);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_logic_LCanvas$JumpCurve)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_logic_LCanvas$JumpCurve, (frame[1].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(281);
	((func_mindustry_logic_LCanvas$JumpCurve_prepareHeight) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_logic_LCanvas$JumpCurve_prepareHeight])(ctx, (frame[2].o));
	LINE_NUMBER(282);
	if (((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_jumpUIBegin) != (jint(2147483647))) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(283);
	if (((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_flipped) == 0) goto label_6;
	}
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_reprAfter;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_jumpUIBegin));
	frame[3].o = (checkCast(ctx, &class_mindustry_logic_LCanvas$JumpCurve, sp[0].o));
	LINE_NUMBER(285);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	{
	if (((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[3].o)))->F_jumpUIEnd) < ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_jumpUIEnd)) goto label_9;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_9:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_reprAfter;
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_jumpUIBegin), (frame[2].o));
	LINE_NUMBER(287);
	goto label_11;
	}
label_6:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_reprBefore;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_jumpUIEnd));
	frame[3].o = (checkCast(ctx, &class_mindustry_logic_LCanvas$JumpCurve, sp[0].o));
	LINE_NUMBER(289);
	if ((frame[3].o) == nullptr) goto label_13;
	}
	{
	if (((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[3].o)))->F_jumpUIBegin) > ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_jumpUIBegin)) goto label_13;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_reprBefore;
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, ((jint)((mindustry_logic_LCanvas$JumpCurve *) NULL_CHECK((frame[2].o)))->F_jumpUIEnd), (frame[2].o));
	}
label_11:;
	LINE_NUMBER(292);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_logic_LCanvas$DragLayout_lambda$layout$0_arc_scene_Element_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LCanvas$DragLayout:lambda$layout$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(218);
	jfloat temp0 = (jfloat)((func_arc_scene_Element_getPrefHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_getPrefHeight_R_float])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 + ((jfloat)((mindustry_logic_LCanvas$DragLayout *) NULL_CHECK((frame[0].o)))->F_space));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LCanvas$DragLayout[] {
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
	(void *) M_mindustry_logic_LCanvas$DragLayout_draw,
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
	(void *) M_mindustry_logic_LCanvas$DragLayout_getPrefWidth_R_float,
	(void *) M_mindustry_logic_LCanvas$DragLayout_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_mindustry_logic_LCanvas$DragLayout_layout,
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
	(void *) M_mindustry_logic_LCanvas$DragLayout_setJumpHeights,
	(void *) M_mindustry_logic_LCanvas$DragLayout_getJumpHeight_int_arc_struct_Seq_arc_struct_Bits_R_int,
	(void *) M_mindustry_logic_LCanvas$DragLayout_finishLayout,
	(void *) M_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$3_arc_scene_Element,
	(void *) M_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$0_arc_scene_Element,
	(void *) M_mindustry_logic_LCanvas$DragLayout_lambda$layout$0_arc_scene_Element_R_float,
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
	{ "setJumpHeights", "()V" },
	{ "getJumpHeight", "(ILarc/struct/Seq;Larc/struct/Bits;)I" },
	{ "finishLayout", "()V" },
	{ "lambda$setJumpHeights$3", "(Larc/scene/Element;)V" },
	{ "lambda$setJumpHeights$0", "(Larc/scene/Element;)V" },
	{ "lambda$layout$0", "(Larc/scene/Element;)F" },
};

static FieldMetadata fields[] {
	{ "space", &class_float, offsetof(mindustry_logic_LCanvas$DragLayout, F_space), "F", 0 },
	{ "prefWidth", &class_float, offsetof(mindustry_logic_LCanvas$DragLayout, F_prefWidth), "F", 0 },
	{ "prefHeight", &class_float, offsetof(mindustry_logic_LCanvas$DragLayout, F_prefHeight), "F", 0 },
	{ "seq", &class_arc_struct_Seq, offsetof(mindustry_logic_LCanvas$DragLayout, F_seq), "Larc/struct/Seq;", 0 },
	{ "insertPosition", &class_int, offsetof(mindustry_logic_LCanvas$DragLayout, F_insertPosition), "I", 0 },
	{ "invalidated", &class_boolean, offsetof(mindustry_logic_LCanvas$DragLayout, F_invalidated), "Z", 0 },
	{ "jumps", &class_arc_scene_Group, offsetof(mindustry_logic_LCanvas$DragLayout, F_jumps), "Larc/scene/Group;", 1 },
	{ "processedJumps", &class_arc_struct_Seq, offsetof(mindustry_logic_LCanvas$DragLayout, F_processedJumps), "Larc/struct/Seq;", 2 },
	{ "reprBefore", &class_arc_struct_IntMap, offsetof(mindustry_logic_LCanvas$DragLayout, F_reprBefore), "Larc/struct/IntMap;", 2 },
	{ "reprAfter", &class_arc_struct_IntMap, offsetof(mindustry_logic_LCanvas$DragLayout, F_reprAfter), "Larc/struct/IntMap;", 2 },
	{ "updateJumpHeights", &class_boolean, offsetof(mindustry_logic_LCanvas$DragLayout, F_updateJumpHeights), "Z", 1 },
	{ "this$0", &class_mindustry_logic_LCanvas, offsetof(mindustry_logic_LCanvas$DragLayout, F_this$0), "Lmindustry/logic/LCanvas;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LCanvas$DragLayout_mindustry_logic_LCanvas, 0, "(Lmindustry/logic/LCanvas;)V", 1 },
	{ "layout", (intptr_t) M_mindustry_logic_LCanvas$DragLayout_layout, VTABLE_mindustry_logic_LCanvas$DragLayout_layout, "()V", 1 },
	{ "setJumpHeights", (intptr_t) M_mindustry_logic_LCanvas$DragLayout_setJumpHeights, VTABLE_mindustry_logic_LCanvas$DragLayout_setJumpHeights, "()V", 2 },
	{ "getJumpHeight", (intptr_t) M_mindustry_logic_LCanvas$DragLayout_getJumpHeight_int_arc_struct_Seq_arc_struct_Bits_R_int, VTABLE_mindustry_logic_LCanvas$DragLayout_getJumpHeight_int_arc_struct_Seq_arc_struct_Bits_R_int, "(ILarc/struct/Seq;Larc/struct/Bits;)I", 2 },
	{ "getPrefWidth", (intptr_t) M_mindustry_logic_LCanvas$DragLayout_getPrefWidth_R_float, VTABLE_mindustry_logic_LCanvas$DragLayout_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_mindustry_logic_LCanvas$DragLayout_getPrefHeight_R_float, VTABLE_mindustry_logic_LCanvas$DragLayout_getPrefHeight_R_float, "()F", 1 },
	{ "draw", (intptr_t) M_mindustry_logic_LCanvas$DragLayout_draw, VTABLE_mindustry_logic_LCanvas$DragLayout_draw, "()V", 1 },
	{ "finishLayout", (intptr_t) M_mindustry_logic_LCanvas$DragLayout_finishLayout, VTABLE_mindustry_logic_LCanvas$DragLayout_finishLayout, "()V", 0 },
	{ "lambda$draw$1", (intptr_t) SM_mindustry_logic_LCanvas$DragLayout_lambda$draw$1_arc_scene_Element, 0, "(Larc/scene/Element;)V", 4106 },
	{ "lambda$draw$0", (intptr_t) SM_mindustry_logic_LCanvas$DragLayout_lambda$draw$0_arc_scene_Element, 0, "(Larc/scene/Element;)V", 4106 },
	{ "lambda$getJumpHeight$0", (intptr_t) SM_mindustry_logic_LCanvas$DragLayout_lambda$getJumpHeight$0_mindustry_logic_LCanvas$JumpCurve_arc_struct_Bits_mindustry_logic_LCanvas$JumpCurve_R_boolean, 0, "(Lmindustry/logic/LCanvas$JumpCurve;Larc/struct/Bits;Lmindustry/logic/LCanvas$JumpCurve;)Z", 4106 },
	{ "lambda$setJumpHeights$3", (intptr_t) M_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$3_arc_scene_Element, VTABLE_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$3_arc_scene_Element, "(Larc/scene/Element;)V", 4098 },
	{ "lambda$setJumpHeights$2", (intptr_t) SM_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$2_mindustry_logic_LCanvas$JumpCurve_arc_struct_Bits_mindustry_logic_LCanvas$JumpCurve_R_boolean, 0, "(Lmindustry/logic/LCanvas$JumpCurve;Larc/struct/Bits;Lmindustry/logic/LCanvas$JumpCurve;)Z", 4106 },
	{ "lambda$setJumpHeights$1", (intptr_t) SM_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$1_mindustry_logic_LCanvas$JumpCurve_mindustry_logic_LCanvas$JumpCurve_R_int, 0, "(Lmindustry/logic/LCanvas$JumpCurve;Lmindustry/logic/LCanvas$JumpCurve;)I", 4106 },
	{ "lambda$setJumpHeights$0", (intptr_t) M_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$0_arc_scene_Element, VTABLE_mindustry_logic_LCanvas$DragLayout_lambda$setJumpHeights$0_arc_scene_Element, "(Larc/scene/Element;)V", 4098 },
	{ "lambda$layout$0", (intptr_t) M_mindustry_logic_LCanvas$DragLayout_lambda$layout$0_arc_scene_Element_R_float, VTABLE_mindustry_logic_LCanvas$DragLayout_lambda$layout$0_arc_scene_Element_R_float, "(Larc/scene/Element;)F", 4098 },
};

Class class_mindustry_logic_LCanvas$DragLayout{
		.nativeName = (intptr_t) "mindustry/logic/LCanvas$DragLayout",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_WidgetGroup,
		.size = sizeof(mindustry_logic_LCanvas$DragLayout),
		.classVtable = (intptr_t) vtable_mindustry_logic_LCanvas$DragLayout,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LCanvas$DragLayout,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LCanvas$DragLayout,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LCanvas,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 157,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LCanvas$DragLayout = registerClass(&class_mindustry_logic_LCanvas$DragLayout);

}

