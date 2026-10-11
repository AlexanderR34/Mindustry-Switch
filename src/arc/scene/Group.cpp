#include "arc/scene/Group.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/StringBuilder.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "arc/scene/event/Touchable.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/Seq.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Table_DrawRect.h"
#include "arc/func/Boolf.h"
#include "java/util/Iterator.h"
#include "arc/scene/Group.h"
#include "arc/scene/Group_1.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/math/Mat.h"
#include "arc/scene/utils/Cullable.h"
#include "arc/scene/Scene.h"
#include "arc/scene/Element.h"
#include "java/lang/Object.h"
#include "arc/struct/SnapshotSeq.h"
#include "java/lang/Class.h"
#include "arc/math/Affine2.h"

extern "C" {

jobject SF_arc_scene_Group_tmp;

void mark_arc_scene_Group(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_Group_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_Group_tmp)->clazz)->markFunction)((jobject) SF_arc_scene_Group_tmp, mark, depth + 1);
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
	auto self = (arc_scene_Group *) object;
	if (self->F_children)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_children)->clazz)->markFunction)((jobject) self->F_children, mark, depth + 1);
	if (self->F_worldTransform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_worldTransform)->clazz)->markFunction)((jobject) self->F_worldTransform, mark, depth + 1);
	if (self->F_computedTransform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_computedTransform)->clazz)->markFunction)((jobject) self->F_computedTransform, mark, depth + 1);
	if (self->F_oldTransform)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_oldTransform)->clazz)->markFunction)((jobject) self->F_oldTransform, mark, depth + 1);
	if (self->F_cullingArea)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cullingArea)->clazz)->markFunction)((jobject) self->F_cullingArea, mark, depth + 1);
}

void init_arc_scene_Group(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Group(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(25);
	init_arc_scene_Element(ctx, (frame[0].o));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_SnapshotSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_SnapshotSeq);
	init_arc_struct_SnapshotSeq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(1)), (jint(4)), (((jobject) &class_arc_scene_Element)));
	((arc_scene_Group *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_math_Affine2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Affine2);
	init_arc_math_Affine2(ctx, sp[1].o);
	((arc_scene_Group *) NULL_CHECK(sp[0].o))->F_worldTransform = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((arc_scene_Group *) NULL_CHECK(sp[0].o))->F_computedTransform = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_math_Mat(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_Mat);
	init_arc_math_Mat(ctx, sp[1].o);
	((arc_scene_Group *) NULL_CHECK(sp[0].o))->F_oldTransform = (jref) sp[1].o;
	LINE_NUMBER(32);
	((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_transform = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:act", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(37);
	M_arc_scene_Element_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_arc_scene_Element, 1), sp[0].o));
	LINE_NUMBER(39);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(40);
	((func_arc_scene_Element_updateVisibility) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))->vtable)[VTABLE_arc_scene_Element_updateVisibility])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	LINE_NUMBER(41);
	if (((jint)((arc_scene_Element *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)))))->F_visible) == 0) goto label_8;
	}
	{
	LINE_NUMBER(42);
	((func_arc_scene_Element_act_float) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))->vtable)[VTABLE_arc_scene_Element_act_float])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))), (frame[1].f));
	}
label_8:;
	{
	LINE_NUMBER(39);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	if (((jint)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_transform) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_scene_Group_computeTransform_R_arc_math_Mat) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_computeTransform_R_arc_math_Mat])(ctx, (frame[0].o));
	((func_arc_scene_Group_applyTransform_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_applyTransform_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(51);
	((func_arc_scene_Group_drawChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_drawChildren])(ctx, (frame[0].o));
	LINE_NUMBER(52);
	if (((jint)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_transform) == 0) goto label_3;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_scene_Group_resetTransform) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_resetTransform])(ctx, sp[0].o);
label_3:;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Group_drawChildren(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:drawChildren", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parentAlpha;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_color;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_parentAlpha = (temp0 * ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[1].o))->F_a));
	LINE_NUMBER(57);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[1].o = sp[0].o;
	LINE_NUMBER(58);
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, getArrayClass(&class_arc_scene_Element, 1), sp[0].o));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_cullingArea;
	frame[3].o = sp[0].o;
	LINE_NUMBER(60);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(62);
	frame[4].f = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_x);
	LINE_NUMBER(63);
	frame[5].f = ((frame[4].f) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_width));
	LINE_NUMBER(64);
	frame[6].f = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_y);
	LINE_NUMBER(65);
	frame[7].f = ((frame[6].f) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[3].o)))->F_height));
	LINE_NUMBER(66);
	if (((jint)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_transform) == 0) goto label_11;
	}
	{
	LINE_NUMBER(67);
	frame[8].i = (jint(0));
	frame[9].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_14:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_15;
	}
	{
	LINE_NUMBER(68);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[8].i)));
	LINE_NUMBER(69);
	((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_parentAlpha = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha);
	LINE_NUMBER(70);
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_visible) != 0) goto label_19;
	}
	goto label_20;
label_19:;
	{
	LINE_NUMBER(71);
	frame[11].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_x);
	frame[12].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_y);
	LINE_NUMBER(72);
	sp[0].o = frame[10].o;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_translation;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(73);
	sp[0].o = frame[10].o;
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_translation;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(74);
	if ((floatCompare((frame[11].f), (frame[5].f), 1)) > 0) goto label_25;
	}
	{
	if ((floatCompare((frame[12].f), (frame[7].f), 1)) > 0) goto label_25;
	}
	{
	if ((floatCompare(((frame[11].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_width)), (frame[4].f), -1)) < 0) goto label_25;
	}
	{
	if ((floatCompare(((frame[12].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_height)), (frame[6].f), -1)) >= 0) goto label_26;
	}
label_25:;
	{
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_cullable) != 0) goto label_27;
	}
label_26:;
	{
	LINE_NUMBER(75);
	((func_arc_scene_Element_draw) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_arc_scene_Element_draw])(ctx, (frame[10].o));
	}
label_27:;
	{
	LINE_NUMBER(76);
	sp[0].o = frame[10].o;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_translation;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x = (temp0 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(77);
	sp[0].o = frame[10].o;
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[10].o)))->F_translation;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y = (temp1 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_20:;
	{
	LINE_NUMBER(67);
	INST_IINC(8, 1);
	goto label_14;
	}
label_15:;
	goto label_29;
label_11:;
	{
	LINE_NUMBER(81);
	frame[8].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x);
	frame[9].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(82);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(83);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(84);
	frame[10].i = (jint(0));
	frame[11].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_35:;
	{
	if ((frame[10].i) >= (frame[11].i)) goto label_36;
	}
	{
	LINE_NUMBER(85);
	frame[12].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[10].i)));
	LINE_NUMBER(86);
	((arc_scene_Element *) NULL_CHECK((frame[12].o)))->F_parentAlpha = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha);
	LINE_NUMBER(87);
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[12].o)))->F_visible) != 0) goto label_40;
	}
	goto label_41;
label_40:;
	{
	LINE_NUMBER(88);
	frame[13].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[12].o)))->F_x);
	frame[14].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[12].o)))->F_y);
	LINE_NUMBER(89);
	if ((floatCompare((frame[13].f), (frame[5].f), 1)) > 0) goto label_44;
	}
	{
	if ((floatCompare((frame[14].f), (frame[7].f), 1)) > 0) goto label_44;
	}
	{
	if ((floatCompare(((frame[13].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[12].o)))->F_width)), (frame[4].f), -1)) < 0) goto label_44;
	}
	{
	if ((floatCompare(((frame[14].f) + ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[12].o)))->F_height)), (frame[6].f), -1)) >= 0) goto label_45;
	}
label_44:;
	{
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[12].o)))->F_cullable) != 0) goto label_41;
	}
label_45:;
	{
	LINE_NUMBER(90);
	sp[0].o = frame[12].o;
	jfloat temp0 = (frame[13].f) + (frame[8].f);
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[12].o)))->F_translation;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(91);
	sp[0].o = frame[12].o;
	jfloat temp1 = (frame[14].f) + (frame[9].f);
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[12].o)))->F_translation;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(92);
	((func_arc_scene_Element_draw) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_scene_Element_draw])(ctx, (frame[12].o));
	LINE_NUMBER(93);
	((arc_scene_Element *) NULL_CHECK((frame[12].o)))->F_x = (frame[13].f);
	LINE_NUMBER(94);
	((arc_scene_Element *) NULL_CHECK((frame[12].o)))->F_y = (frame[14].f);
	}
label_41:;
	{
	LINE_NUMBER(84);
	INST_IINC(10, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(97);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x = (frame[8].f);
	LINE_NUMBER(98);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y = (frame[9].f);
	}
label_29:;
	LINE_NUMBER(100);
	goto label_51;
label_5:;
	{
	LINE_NUMBER(102);
	if (((jint)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_transform) == 0) goto label_52;
	}
	{
	LINE_NUMBER(103);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_55:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_56;
	}
	{
	LINE_NUMBER(104);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(105);
	((arc_scene_Element *) NULL_CHECK((frame[6].o)))->F_parentAlpha = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha);
	LINE_NUMBER(106);
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[6].o)))->F_visible) != 0) goto label_60;
	}
	goto label_61;
label_60:;
	{
	LINE_NUMBER(107);
	sp[0].o = frame[6].o;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[6].o)))->F_translation;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(108);
	sp[0].o = frame[6].o;
	jfloat temp1 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[6].o)))->F_translation;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(109);
	((func_arc_scene_Element_draw) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_Element_draw])(ctx, (frame[6].o));
	LINE_NUMBER(110);
	sp[0].o = frame[6].o;
	jfloat temp2 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[6].o)))->F_translation;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x = (temp2 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(111);
	sp[0].o = frame[6].o;
	jfloat temp3 = (jfloat)((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[6].o)))->F_translation;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y = (temp3 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	}
label_61:;
	{
	LINE_NUMBER(103);
	INST_IINC(4, 1);
	goto label_55;
	}
label_56:;
	goto label_51;
label_52:;
	{
	LINE_NUMBER(115);
	frame[4].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x);
	frame[5].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(116);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(117);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(118);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_71:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_72;
	}
	{
	LINE_NUMBER(119);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[6].i)));
	LINE_NUMBER(120);
	((arc_scene_Element *) NULL_CHECK((frame[8].o)))->F_parentAlpha = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parentAlpha);
	LINE_NUMBER(121);
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[8].o)))->F_visible) != 0) goto label_76;
	}
	goto label_77;
label_76:;
	{
	LINE_NUMBER(122);
	frame[9].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[8].o)))->F_x);
	frame[10].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[8].o)))->F_y);
	LINE_NUMBER(123);
	sp[0].o = frame[8].o;
	jfloat temp0 = (frame[9].f) + (frame[4].f);
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[8].o)))->F_translation;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_x = (temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x));
	LINE_NUMBER(124);
	sp[0].o = frame[8].o;
	jfloat temp1 = (frame[10].f) + (frame[5].f);
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[8].o)))->F_translation;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_y = (temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y));
	LINE_NUMBER(125);
	((func_arc_scene_Element_draw) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_scene_Element_draw])(ctx, (frame[8].o));
	LINE_NUMBER(126);
	((arc_scene_Element *) NULL_CHECK((frame[8].o)))->F_x = (frame[9].f);
	LINE_NUMBER(127);
	((arc_scene_Element *) NULL_CHECK((frame[8].o)))->F_y = (frame[10].f);
	}
label_77:;
	{
	LINE_NUMBER(118);
	INST_IINC(6, 1);
	goto label_71;
	}
label_72:;
	{
	LINE_NUMBER(129);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x = (frame[4].f);
	LINE_NUMBER(130);
	((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y = (frame[5].f);
	}
label_51:;
	{
	LINE_NUMBER(133);
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, (frame[1].o));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Group_computeTransform_R_arc_math_Mat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:computeTransform", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_worldTransform;
	frame[1].o = sp[0].o;
	LINE_NUMBER(139);
	frame[2].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originX);
	frame[3].f = ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_originY);
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_arc_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Affine2_setToTrnRotScl_float_float_float_float_float_R_arc_math_Affine2])(ctx, (frame[1].o), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_x) + (frame[2].f)), (((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_y) + (frame[3].f)), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_rotation), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleX), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_scaleY));
	LINE_NUMBER(141);
	if ((floatCompare((frame[2].f), (jfloat(0)), -1)) != 0) goto label_5;
	}
	{
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) == 0) goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)((func_arc_math_Affine2_translate_float_float_R_arc_math_Affine2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_Affine2_translate_float_float_R_arc_math_Affine2])(ctx, (frame[1].o), (-(frame[2].f)), (-(frame[3].f)));
	}
label_6:;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[4].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(145);
	if ((frame[4].o) == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(146);
	if (((jint)((arc_scene_Group *) NULL_CHECK((frame[4].o)))->F_transform) == 0) goto label_10;
	}
	goto label_8;
label_10:;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[4].o)))->F_parent;
	frame[4].o = sp[0].o;
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(149);
	if ((frame[4].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[4].o)))->F_worldTransform;
	sp[0].o = (jobject)((func_arc_math_Affine2_preMul_arc_math_Affine2_R_arc_math_Affine2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Affine2_preMul_arc_math_Affine2_R_arc_math_Affine2])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_computedTransform;
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Affine2_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Affine2_R_arc_math_Mat])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_computedTransform;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_applyTransform_arc_math_Mat(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:applyTransform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_oldTransform;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(161);
	SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(ctx, (frame[1].o));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_resetTransform(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:resetTransform", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_oldTransform;
	SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(ctx, sp[0].o);
	LINE_NUMBER(170);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:getCullingArea", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_cullingArea;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_setCullingArea_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:setCullingArea", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(187);
	((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_cullingArea = (jref) (frame[1].o);
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Group_hit_float_float_boolean_R_arc_scene_Element(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:hit", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(192);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[0].o)))->F_touchable;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(193);
	clinit_arc_scene_Group(ctx);
	sp[0].o = (jobject)SF_arc_scene_Group_tmp;
	frame[4].o = sp[0].o;
	LINE_NUMBER(194);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[5].o = (checkCast(ctx, getArrayClass(&class_arc_scene_Element, 1), sp[0].o));
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[6].i = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_4:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_5;
	{
	LINE_NUMBER(196);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)));
	LINE_NUMBER(198);
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[7].o)))->F_visible) == 0) goto label_8;
	}
	{
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[7].o)))->F_cullable) == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_cullingArea;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_cullingArea;
	jfloat temp0 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[7].o)))->F_x;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[7].o)))->F_translation;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	jfloat temp2 = (jfloat)((arc_scene_Element *) NULL_CHECK((frame[7].o)))->F_y;
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[7].o)))->F_translation;
	jint temp3 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[7].o)))->F_width), ((jfloat)((arc_scene_Element *) NULL_CHECK((frame[7].o)))->F_height));
	if (temp3 != 0) goto label_9;
	}
	goto label_8;
label_9:;
	{
	LINE_NUMBER(199);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, (frame[4].o), (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((func_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(200);
	sp[0].o = (jobject)((func_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element])(ctx, (frame[7].o), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[4].o)))->F_y), (frame[3].i));
	frame[8].o = sp[0].o;
	LINE_NUMBER(201);
	if ((frame[8].o) == nullptr) goto label_8;
	}
	INST_ALOAD(8);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(195);
	INST_IINC(6, -1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(203);
	sp[0].o = (jobject)M_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_childrenChanged(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:childrenChanged", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(208);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_scene_Group_forEach_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:forEach", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(212);
	sp[0].o = (jobject)((func_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(213);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(214);
	if ((isInstance(ctx, (frame[3].o), &class_arc_scene_Group)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(215);
	((func_arc_scene_Group_forEach_arc_func_Cons) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_Group, (frame[3].o))))->vtable)[VTABLE_arc_scene_Group_forEach_arc_func_Cons])(ctx, (checkCast(ctx, &class_arc_scene_Group, (frame[3].o))), (frame[1].o));
	}
label_5:;
	LINE_NUMBER(217);
	goto label_1;
label_2:;
	LINE_NUMBER(218);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:fill", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(221);
	clinit_arc_scene_Group$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_Group$1);
	init_arc_scene_Group$1_arc_scene_Group_arc_scene_ui_layout_Table$DrawRect(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(227);
	((func_arc_scene_Element_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_scene_Element_setFillParent_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(229);
	sp[0].o = frame[2].o;
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	((arc_scene_Element *) NULL_CHECK(sp[0].o))->F_touchable = (jref) sp[1].o;
	LINE_NUMBER(230);
	((func_arc_scene_Group_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_addChild_arc_scene_Element])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(231);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_fill_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:fill", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(236);
	((func_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons])(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:fill", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(241);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_arc_scene_ui_layout_Table(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_ui_layout_Table);
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
label_2:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(242);
	((func_arc_scene_ui_layout_Table_setFillParent_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_setFillParent_boolean])(ctx, (frame[3].o), (jint(1)));
	LINE_NUMBER(243);
	((func_arc_scene_Group_addChild_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_addChild_arc_scene_Element])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(244);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o));
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_addChild_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:addChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o != (frame[0].o)) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_parent;
	jint temp0 = (jint)((func_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	}
label_1:;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(257);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_parent = (jref) (frame[0].o);
	LINE_NUMBER(258);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_scene_Group_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	((func_arc_scene_Element_setScene_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setScene_arc_scene_Scene])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(259);
	((func_arc_scene_Group_childrenChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_childrenChanged])(ctx, (frame[0].o));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_addChildAt_int_arc_scene_Element(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:addChildAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(269);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o != (frame[0].o)) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent;
	jint temp0 = (jint)((func_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	{
	LINE_NUMBER(272);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	if (temp0 < ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(275);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_arc_struct_SnapshotSeq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	}
label_6:;
	{
	LINE_NUMBER(276);
	((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent = (jref) (frame[0].o);
	LINE_NUMBER(277);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_scene_Group_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	((func_arc_scene_Element_setScene_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setScene_arc_scene_Scene])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(278);
	((func_arc_scene_Group_childrenChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_childrenChanged])(ctx, (frame[0].o));
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:addChildBefore", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o != (frame[0].o)) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent;
	jint temp0 = (jint)((func_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	frame[3].i = temp0;
	LINE_NUMBER(291);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_arc_struct_SnapshotSeq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[3].i), (frame[2].o));
	LINE_NUMBER(292);
	((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent = (jref) (frame[0].o);
	LINE_NUMBER(293);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_scene_Group_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	((func_arc_scene_Element_setScene_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setScene_arc_scene_Scene])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(294);
	((func_arc_scene_Group_childrenChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_childrenChanged])(ctx, (frame[0].o));
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:addChildAfter", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(302);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o != (frame[0].o)) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(304);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent;
	jint temp0 = (jint)((func_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	}
label_1:;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	frame[3].i = temp0;
	LINE_NUMBER(307);
	jint temp1 = frame[3].i;
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	if (temp1 != ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_5;
	}
	{
	LINE_NUMBER(308);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	goto label_7;
	}
label_5:;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_arc_struct_SnapshotSeq_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_insert_int_java_lang_Object])(ctx, sp[0].o, ((frame[3].i) + (jint(1))), (frame[2].o));
	}
label_7:;
	{
	LINE_NUMBER(311);
	((arc_scene_Element *) NULL_CHECK((frame[2].o)))->F_parent = (jref) (frame[0].o);
	LINE_NUMBER(312);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_scene_Group_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	((func_arc_scene_Element_setScene_arc_scene_Scene) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Element_setScene_arc_scene_Scene])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(313);
	((func_arc_scene_Group_childrenChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_childrenChanged])(ctx, (frame[0].o));
	LINE_NUMBER(314);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Group_removeChild_arc_scene_Element_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:removeChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(318);
	jint temp0 = (jint)((func_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:removeChild", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(329);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(330);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(331);
	sp[0].o = (jobject)((func_arc_scene_Group_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(332);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	((func_arc_scene_Scene_unfocus_arc_scene_Element) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_scene_Scene_unfocus_arc_scene_Element])(ctx, (frame[3].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(334);
	((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_parent = (jref) (jobject(nullptr));
	LINE_NUMBER(335);
	((func_arc_scene_Element_setScene_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_setScene_arc_scene_Scene])(ctx, (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(336);
	((func_arc_scene_Group_childrenChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_childrenChanged])(ctx, (frame[0].o));
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_clearChildren(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:clearChildren", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_arc_scene_Group_getScene_R_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_getScene_R_arc_scene_Scene])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(343);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_arc_scene_Element, 1), sp[0].o));
	LINE_NUMBER(344);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(345);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(346);
	if ((frame[1].o) == nullptr) goto label_8;
	}
	{
	((func_arc_scene_Scene_unfocus_arc_scene_Element) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Scene_unfocus_arc_scene_Element])(ctx, (frame[1].o), (frame[5].o));
	}
label_8:;
	{
	LINE_NUMBER(347);
	((func_arc_scene_Element_setScene_arc_scene_Scene) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_scene_Element_setScene_arc_scene_Scene])(ctx, (frame[5].o), (jobject(nullptr)));
	LINE_NUMBER(348);
	((arc_scene_Element *) NULL_CHECK((frame[5].o)))->F_parent = (jref) (jobject(nullptr));
	LINE_NUMBER(344);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(351);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(352);
	((func_arc_scene_Group_childrenChanged) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_childrenChanged])(ctx, (frame[0].o));
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:clear", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	M_arc_scene_Element_clear(ctx, (frame[0].o));
	LINE_NUMBER(359);
	((func_arc_scene_Group_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Group_find_java_lang_String_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:find", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(368);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[2].o = sp[0].o;
	LINE_NUMBER(369);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(370);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((checkCast(ctx, &class_arc_scene_Element, sp[1].o))))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	}
label_6:;
	{
	LINE_NUMBER(369);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(371);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_8:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(373);
	if ((isInstance(ctx, (frame[5].o), &class_arc_scene_Group)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((func_arc_scene_Group_find_java_lang_String_R_arc_scene_Element) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_Group, (frame[5].o))))->vtable)[VTABLE_arc_scene_Group_find_java_lang_String_R_arc_scene_Element])(ctx, (checkCast(ctx, &class_arc_scene_Group, (frame[5].o))), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(375);
	if ((frame[6].o) == nullptr) goto label_12;
	}
	INST_ALOAD(6);
	popStackFrame(ctx);
	INST_ARETURN();
label_12:;
	{
	LINE_NUMBER(371);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:findVisible", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[2].o = sp[0].o;
	LINE_NUMBER(385);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(386);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	sp[1].o = (jobject)((arc_scene_Element *) NULL_CHECK((checkCast(ctx, &class_arc_scene_Element, sp[1].o))))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	if (((jint)((arc_scene_Element *) NULL_CHECK((checkCast(ctx, &class_arc_scene_Element, sp[0].o))))->F_visible) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	}
label_6:;
	{
	LINE_NUMBER(385);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(387);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_8:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(389);
	if ((isInstance(ctx, (frame[5].o), &class_arc_scene_Group)) == 0) goto label_12;
	}
	{
	if (((jint)((arc_scene_Element *) NULL_CHECK((frame[5].o)))->F_visible) == 0) goto label_12;
	}
	{
	LINE_NUMBER(390);
	sp[0].o = (jobject)((func_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_Group, (frame[5].o))))->vtable)[VTABLE_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element])(ctx, (checkCast(ctx, &class_arc_scene_Group, (frame[5].o))), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(391);
	if ((frame[6].o) == nullptr) goto label_12;
	}
	INST_ALOAD(6);
	popStackFrame(ctx);
	INST_ARETURN();
label_12:;
	{
	LINE_NUMBER(387);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(394);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:find", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[2].o = sp[0].o;
	LINE_NUMBER(401);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(402);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_arc_scene_Element, sp[1].o)));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	}
label_6:;
	{
	LINE_NUMBER(401);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(404);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_8:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_9;
	}
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_arc_scene_Element, sp[0].o));
	LINE_NUMBER(406);
	if ((isInstance(ctx, (frame[5].o), &class_arc_scene_Group)) == 0) goto label_12;
	}
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((func_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_Group, (frame[5].o))))->vtable)[VTABLE_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element])(ctx, (checkCast(ctx, &class_arc_scene_Group, (frame[5].o))), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(408);
	if ((frame[6].o) == nullptr) goto label_12;
	}
	INST_ALOAD(6);
	popStackFrame(ctx);
	INST_ARETURN();
label_12:;
	{
	LINE_NUMBER(404);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_setScene_arc_scene_Scene(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:setScene", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(416);
	M_arc_scene_Element_setScene_arc_scene_Scene(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(417);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = (checkCast(ctx, getArrayClass(&class_arc_scene_Element, 1), sp[0].o));
	LINE_NUMBER(418);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[4].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(419);
	((func_arc_scene_Element_setScene_arc_scene_Scene) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))->vtable)[VTABLE_arc_scene_Element_setScene_arc_scene_Scene])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))), (frame[1].o));
	LINE_NUMBER(418);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(420);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_scene_Group_swapActor_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:swapActor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(425);
	if ((frame[1].i) < 0) goto label_2;
	}
	{
	if ((frame[1].i) < (frame[3].i)) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(426);
	if ((frame[2].i) < 0) goto label_4;
	}
	{
	if ((frame[2].i) < (frame[3].i)) goto label_5;
	}
label_4:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_arc_struct_SnapshotSeq_swap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_swap_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	LINE_NUMBER(428);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Group_swapActor_arc_scene_Element_arc_scene_Element_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:swapActor", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(433);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)((func_arc_struct_SnapshotSeq_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	frame[3].i = temp0;
	LINE_NUMBER(434);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp1 = (jint)((func_arc_struct_SnapshotSeq_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	frame[4].i = temp1;
	LINE_NUMBER(435);
	if ((frame[3].i) == (jint(-1))) goto label_3;
	}
	{
	if ((frame[4].i) != (jint(-1))) goto label_4;
	}
label_3:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(436);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_arc_struct_SnapshotSeq_swap_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_swap_int_int])(ctx, sp[0].o, (frame[3].i), (frame[4].i));
	LINE_NUMBER(437);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:getChildren", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_scene_Group_hasChildren_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:hasChildren", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
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

jbool M_arc_scene_Group_isTransform_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:isTransform", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return ((jint)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_transform);
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_setTransform_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:setTransform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(461);
	((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_transform = (frame[1].i);
	LINE_NUMBER(462);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:localToDescendantCoordinates", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((arc_scene_Element *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[3].o = sp[0].o;
	LINE_NUMBER(467);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Child is not a descendant: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(469);
	if ((frame[3].o) == (frame[0].o)) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[0].o), (frame[3].o), (frame[2].o));
	}
label_3:;
	{
	LINE_NUMBER(471);
	sp[0].o = (jobject)((func_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(472);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Group_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:toString", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(478);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (128));
	frame[1].o = sp[0].o;
	LINE_NUMBER(479);
	((func_arc_scene_Group_toString_java_lang_StringBuilder_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Group_toString_java_lang_StringBuilder_int])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(480);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[1].o));
	((func_java_lang_StringBuilder_setLength_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_setLength_int])(ctx, sp[0].o, (temp0 - (jint(1))));
	LINE_NUMBER(481);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Group_toString_java_lang_StringBuilder_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:toString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(485);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_arc_scene_Element_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(486);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (10));
	LINE_NUMBER(488);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_begin_R_Array1_java_lang_Object])(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, getArrayClass(&class_arc_scene_Element, 1), sp[0].o));
	LINE_NUMBER(489);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	frame[5].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_6;
	}
	{
	LINE_NUMBER(490);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(491);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"|  "_j))));
	LINE_NUMBER(490);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(492);
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(493);
	if ((isInstance(ctx, (frame[6].o), &class_arc_scene_Group)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(494);
	((func_arc_scene_Group_toString_java_lang_StringBuilder_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_scene_Group, (frame[6].o))))->vtable)[VTABLE_arc_scene_Group_toString_java_lang_StringBuilder_int])(ctx, (checkCast(ctx, &class_arc_scene_Group, (frame[6].o))), (frame[1].o), ((frame[2].i) + (jint(1))));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(496);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[6].o));
	LINE_NUMBER(497);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (10));
	}
label_15:;
	{
	LINE_NUMBER(489);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(500);
	sp[0].o = (jobject)((arc_scene_Group *) NULL_CHECK((frame[0].o)))->F_children;
	((func_arc_struct_SnapshotSeq_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_SnapshotSeq_end])(ctx, sp[0].o);
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_scene_Group(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_Element(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Group:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Group(ctx);
	{
	LINE_NUMBER(26);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	clinit_arc_scene_Group(ctx);
	SF_arc_scene_Group_tmp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_Group[] {
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
	(void *) M_arc_scene_Group_draw,
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
	(void *) M_arc_scene_Group_setCullingArea_arc_math_geom_Rect,
	(void *) M_arc_scene_Group_drawChildren,
	(void *) M_arc_scene_Group_computeTransform_R_arc_math_Mat,
	(void *) M_arc_scene_Group_applyTransform_arc_math_Mat,
	(void *) M_arc_scene_Group_resetTransform,
	(void *) M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect,
	(void *) M_arc_scene_Group_childrenChanged,
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
};

static jclass interfaces[] { &class_arc_scene_utils_Cullable, };

static FieldMetadata fields[] {
	{ "tmp", &class_arc_math_geom_Vec2, (intptr_t) &SF_arc_scene_Group_tmp, "Larc/math/geom/Vec2;", 26 },
	{ "children", &class_arc_struct_SnapshotSeq, offsetof(arc_scene_Group, F_children), "Larc/struct/SnapshotSeq;", 20 },
	{ "worldTransform", &class_arc_math_Affine2, offsetof(arc_scene_Group, F_worldTransform), "Larc/math/Affine2;", 18 },
	{ "computedTransform", &class_arc_math_Mat, offsetof(arc_scene_Group, F_computedTransform), "Larc/math/Mat;", 18 },
	{ "oldTransform", &class_arc_math_Mat, offsetof(arc_scene_Group, F_oldTransform), "Larc/math/Mat;", 18 },
	{ "transform", &class_boolean, offsetof(arc_scene_Group, F_transform), "Z", 4 },
	{ "cullingArea", &class_arc_math_geom_Rect, offsetof(arc_scene_Group, F_cullingArea), "Larc/math/geom/Rect;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_Group, 0, "()V", 1 },
	{ "act", (intptr_t) M_arc_scene_Group_act_float, VTABLE_arc_scene_Group_act_float, "(F)V", 1 },
	{ "draw", (intptr_t) M_arc_scene_Group_draw, VTABLE_arc_scene_Group_draw, "()V", 1 },
	{ "drawChildren", (intptr_t) M_arc_scene_Group_drawChildren, VTABLE_arc_scene_Group_drawChildren, "()V", 4 },
	{ "computeTransform", (intptr_t) M_arc_scene_Group_computeTransform_R_arc_math_Mat, VTABLE_arc_scene_Group_computeTransform_R_arc_math_Mat, "()Larc/math/Mat;", 4 },
	{ "applyTransform", (intptr_t) M_arc_scene_Group_applyTransform_arc_math_Mat, VTABLE_arc_scene_Group_applyTransform_arc_math_Mat, "(Larc/math/Mat;)V", 4 },
	{ "resetTransform", (intptr_t) M_arc_scene_Group_resetTransform, VTABLE_arc_scene_Group_resetTransform, "()V", 4 },
	{ "getCullingArea", (intptr_t) M_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect, VTABLE_arc_scene_Group_getCullingArea_R_arc_math_geom_Rect, "()Larc/math/geom/Rect;", 1 },
	{ "setCullingArea", (intptr_t) M_arc_scene_Group_setCullingArea_arc_math_geom_Rect, VTABLE_arc_scene_Group_setCullingArea_arc_math_geom_Rect, "(Larc/math/geom/Rect;)V", 1 },
	{ "hit", (intptr_t) M_arc_scene_Group_hit_float_float_boolean_R_arc_scene_Element, VTABLE_arc_scene_Group_hit_float_float_boolean_R_arc_scene_Element, "(FFZ)Larc/scene/Element;", 1 },
	{ "childrenChanged", (intptr_t) M_arc_scene_Group_childrenChanged, VTABLE_arc_scene_Group_childrenChanged, "()V", 4 },
	{ "forEach", (intptr_t) M_arc_scene_Group_forEach_arc_func_Cons, VTABLE_arc_scene_Group_forEach_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "fill", (intptr_t) M_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element, VTABLE_arc_scene_Group_fill_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_Element, "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/Element;", 1 },
	{ "fill", (intptr_t) M_arc_scene_Group_fill_arc_func_Cons, VTABLE_arc_scene_Group_fill_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "fill", (intptr_t) M_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons, VTABLE_arc_scene_Group_fill_arc_scene_style_Drawable_arc_func_Cons, "(Larc/scene/style/Drawable;Larc/func/Cons;)V", 1 },
	{ "addChild", (intptr_t) M_arc_scene_Group_addChild_arc_scene_Element, VTABLE_arc_scene_Group_addChild_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
	{ "addChildAt", (intptr_t) M_arc_scene_Group_addChildAt_int_arc_scene_Element, VTABLE_arc_scene_Group_addChildAt_int_arc_scene_Element, "(ILarc/scene/Element;)V", 1 },
	{ "addChildBefore", (intptr_t) M_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element, VTABLE_arc_scene_Group_addChildBefore_arc_scene_Element_arc_scene_Element, "(Larc/scene/Element;Larc/scene/Element;)V", 1 },
	{ "addChildAfter", (intptr_t) M_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element, VTABLE_arc_scene_Group_addChildAfter_arc_scene_Element_arc_scene_Element, "(Larc/scene/Element;Larc/scene/Element;)V", 1 },
	{ "removeChild", (intptr_t) M_arc_scene_Group_removeChild_arc_scene_Element_R_boolean, VTABLE_arc_scene_Group_removeChild_arc_scene_Element_R_boolean, "(Larc/scene/Element;)Z", 1 },
	{ "removeChild", (intptr_t) M_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean, VTABLE_arc_scene_Group_removeChild_arc_scene_Element_boolean_R_boolean, "(Larc/scene/Element;Z)Z", 1 },
	{ "clearChildren", (intptr_t) M_arc_scene_Group_clearChildren, VTABLE_arc_scene_Group_clearChildren, "()V", 1 },
	{ "clear", (intptr_t) M_arc_scene_Group_clear, VTABLE_arc_scene_Group_clear, "()V", 1 },
	{ "find", (intptr_t) M_arc_scene_Group_find_java_lang_String_R_arc_scene_Element, VTABLE_arc_scene_Group_find_java_lang_String_R_arc_scene_Element, "(Ljava/lang/String;)Larc/scene/Element;", 1 },
	{ "findVisible", (intptr_t) M_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element, VTABLE_arc_scene_Group_findVisible_java_lang_String_R_arc_scene_Element, "(Ljava/lang/String;)Larc/scene/Element;", 1 },
	{ "find", (intptr_t) M_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element, VTABLE_arc_scene_Group_find_arc_func_Boolf_R_arc_scene_Element, "(Larc/func/Boolf;)Larc/scene/Element;", 1 },
	{ "setScene", (intptr_t) M_arc_scene_Group_setScene_arc_scene_Scene, VTABLE_arc_scene_Group_setScene_arc_scene_Scene, "(Larc/scene/Scene;)V", 4 },
	{ "swapActor", (intptr_t) M_arc_scene_Group_swapActor_int_int_R_boolean, VTABLE_arc_scene_Group_swapActor_int_int_R_boolean, "(II)Z", 1 },
	{ "swapActor", (intptr_t) M_arc_scene_Group_swapActor_arc_scene_Element_arc_scene_Element_R_boolean, VTABLE_arc_scene_Group_swapActor_arc_scene_Element_arc_scene_Element_R_boolean, "(Larc/scene/Element;Larc/scene/Element;)Z", 1 },
	{ "getChildren", (intptr_t) M_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq, VTABLE_arc_scene_Group_getChildren_R_arc_struct_SnapshotSeq, "()Larc/struct/SnapshotSeq;", 1 },
	{ "hasChildren", (intptr_t) M_arc_scene_Group_hasChildren_R_boolean, VTABLE_arc_scene_Group_hasChildren_R_boolean, "()Z", 1 },
	{ "isTransform", (intptr_t) M_arc_scene_Group_isTransform_R_boolean, VTABLE_arc_scene_Group_isTransform_R_boolean, "()Z", 1 },
	{ "setTransform", (intptr_t) M_arc_scene_Group_setTransform_boolean, VTABLE_arc_scene_Group_setTransform_boolean, "(Z)V", 1 },
	{ "localToDescendantCoordinates", (intptr_t) M_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2, VTABLE_arc_scene_Group_localToDescendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2, "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;", 1 },
	{ "toString", (intptr_t) M_arc_scene_Group_toString_R_java_lang_String, VTABLE_arc_scene_Group_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "toString", (intptr_t) M_arc_scene_Group_toString_java_lang_StringBuilder_int, VTABLE_arc_scene_Group_toString_java_lang_StringBuilder_int, "(Ljava/lang/StringBuilder;I)V", 0 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_Group, 0, "()V", 8 },
};

Class class_arc_scene_Group{
		.nativeName = (intptr_t) "arc/scene/Group",
		.parentClass = (intptr_t) &class_arc_scene_Element,
		.size = sizeof(arc_scene_Group),
		.classVtable = (intptr_t) vtable_arc_scene_Group,
		.staticInitializer = (intptr_t) clinit_arc_scene_Group,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_Group,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 37,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 150,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_Group = registerClass(&class_arc_scene_Group);

}
