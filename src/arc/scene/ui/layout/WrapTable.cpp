#include "arc/scene/ui/layout/WrapTable.h"
#include "java/lang/Math.h"
#include "arc/scene/Group.h"
#include "arc/scene/ui/layout/Table.h"
#include "arc/struct/FloatSeq.h"
#include "arc/scene/ui/layout/WrapTable.h"
#include "arc/struct/IntSeq.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/layout/WidgetGroup.h"
#include "arc/struct/Seq.h"
#include "arc/scene/style/Drawable.h"
#include "arc/scene/ui/layout/Cell.h"

extern "C" {

jobject SF_arc_scene_ui_layout_WrapTable_rowHeights;
jobject SF_arc_scene_ui_layout_WrapTable_cellRow;

void mark_arc_scene_ui_layout_WrapTable(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_ui_layout_WrapTable_rowHeights)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_layout_WrapTable_rowHeights)->clazz)->markFunction)((jobject) SF_arc_scene_ui_layout_WrapTable_rowHeights, mark, depth + 1);
		if (SF_arc_scene_ui_layout_WrapTable_cellRow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_ui_layout_WrapTable_cellRow)->clazz)->markFunction)((jobject) SF_arc_scene_ui_layout_WrapTable_cellRow, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_layout_Table(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_scene_ui_layout_WrapTable *) object;
}

void init_arc_scene_ui_layout_WrapTable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/WrapTable:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_WrapTable(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_arc_scene_ui_layout_Table(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((arc_scene_ui_layout_WrapTable *) NULL_CHECK((frame[0].o)))->F_lastComputeWidth = (jfloat(-1.0f));
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_layout_WrapTable_arc_scene_style_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/WrapTable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_WrapTable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(18);
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(12);
	((arc_scene_ui_layout_WrapTable *) NULL_CHECK((frame[0].o)))->F_lastComputeWidth = (jfloat(-1.0f));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_layout_WrapTable_arc_scene_style_Drawable_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/WrapTable:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_WrapTable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(22);
	init_arc_scene_ui_layout_Table_arc_scene_style_Drawable_arc_func_Cons(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(12);
	((arc_scene_ui_layout_WrapTable *) NULL_CHECK((frame[0].o)))->F_lastComputeWidth = (jfloat(-1.0f));
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_scene_ui_layout_WrapTable_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/WrapTable:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_WrapTable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	init_arc_scene_ui_layout_Table_arc_func_Cons(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(12);
	((arc_scene_ui_layout_WrapTable *) NULL_CHECK((frame[0].o)))->F_lastComputeWidth = (jfloat(-1.0f));
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_WrapTable_computeSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/WrapTable:computeSize", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(0));
	LINE_NUMBER(33);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[1].o = sp[0].o;
	LINE_NUMBER(34);
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(36);
	frame[3].f = (jfloat(0));
	frame[4].f = (jfloat(0));
	LINE_NUMBER(38);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[5].i));
	frame[6].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(41);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadLeft = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_padLeft);
	LINE_NUMBER(42);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadTop = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_padTop);
	LINE_NUMBER(43);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadRight = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_padRight);
	LINE_NUMBER(44);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadBottom = ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_padBottom);
	LINE_NUMBER(46);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_Cell_prefWidth_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_prefWidth_R_float])(ctx, (frame[6].o));
	frame[7].f = temp0;
	LINE_NUMBER(47);
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_Cell_prefHeight_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_prefHeight_R_float])(ctx, (frame[6].o));
	frame[8].f = temp1;
	LINE_NUMBER(48);
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_Cell_minWidth_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_minWidth_R_float])(ctx, (frame[6].o));
	frame[9].f = temp2;
	LINE_NUMBER(49);
	jfloat temp3 = (jfloat)((func_arc_scene_ui_layout_Cell_minHeight_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_minHeight_R_float])(ctx, (frame[6].o));
	frame[10].f = temp3;
	LINE_NUMBER(50);
	jfloat temp4 = (jfloat)((func_arc_scene_ui_layout_Cell_maxWidth_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxWidth_R_float])(ctx, (frame[6].o));
	frame[11].f = temp4;
	LINE_NUMBER(51);
	jfloat temp5 = (jfloat)((func_arc_scene_ui_layout_Cell_maxHeight_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_scene_ui_layout_Cell_maxHeight_R_float])(ctx, (frame[6].o));
	frame[12].f = temp5;
	LINE_NUMBER(52);
	if ((floatCompare((frame[7].f), (frame[9].f), 1)) >= 0) goto label_20;
	}
	INST_FLOAD(9);
	INST_FSTORE(7);
label_20:;
	{
	LINE_NUMBER(53);
	if ((floatCompare((frame[8].f), (frame[10].f), 1)) >= 0) goto label_21;
	}
	INST_FLOAD(10);
	INST_FSTORE(8);
label_21:;
	{
	LINE_NUMBER(54);
	if ((floatCompare((frame[11].f), (jfloat(0)), -1)) <= 0) goto label_22;
	}
	{
	if ((floatCompare((frame[7].f), (frame[11].f), -1)) <= 0) goto label_22;
	}
	INST_FLOAD(11);
	INST_FSTORE(7);
label_22:;
	{
	LINE_NUMBER(55);
	if ((floatCompare((frame[12].f), (jfloat(0)), -1)) <= 0) goto label_23;
	}
	{
	if ((floatCompare((frame[8].f), (frame[12].f), -1)) <= 0) goto label_23;
	}
	INST_FLOAD(12);
	INST_FSTORE(8);
label_23:;
	{
	LINE_NUMBER(57);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_elementWidth = (frame[7].f);
	LINE_NUMBER(58);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_elementHeight = (frame[8].f);
	LINE_NUMBER(60);
	frame[13].f = (((frame[7].f) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadLeft)) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadRight));
	LINE_NUMBER(62);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), (frame[13].f));
	frame[3].f = temp0;
	LINE_NUMBER(63);
	frame[4].f = ((frame[4].f) + (frame[13].f));
	LINE_NUMBER(38);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(66);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_WrapTable_getMarginLeft_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_WrapTable_getMarginLeft_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_scene_ui_layout_WrapTable_getMarginRight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_WrapTable_getMarginRight_R_float])(ctx, (frame[0].o));
	frame[5].f = (temp0 + temp1);
	LINE_NUMBER(67);
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_WrapTable_getMarginTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_WrapTable_getMarginTop_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_arc_scene_ui_layout_WrapTable_getMarginBottom_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_WrapTable_getMarginBottom_R_float])(ctx, (frame[0].o));
	frame[6].f = (temp2 + temp3);
	LINE_NUMBER(69);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinWidth = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(70);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefWidth = ((frame[4].f) + (frame[5].f));
	LINE_NUMBER(72);
	if ((floatCompare(((jfloat)((arc_scene_ui_layout_WrapTable *) NULL_CHECK((frame[0].o)))->F_lastComputeWidth), (jfloat(0)), -1)) < 0) goto label_33;
	}
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[3].f), ((jfloat)((arc_scene_ui_layout_WrapTable *) NULL_CHECK((frame[0].o)))->F_lastComputeWidth));
	sp[0].f = temp0;
	sp += 1;
	goto label_34;
	}
label_33:;
	INST_FLOAD(3);
label_34:;
	{
	sp -= 1;
	frame[7].f = sp[0].f;
	LINE_NUMBER(74);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_WrapTable_wrapHeight_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_WrapTable_wrapHeight_float_R_float])(ctx, (frame[0].o), (frame[7].f));
	frame[8].f = temp0;
	LINE_NUMBER(75);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight = ((frame[8].f) + (frame[6].f));
	LINE_NUMBER(76);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefHeight = ((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_arc_scene_ui_layout_WrapTable_wrapHeight_float_R_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/WrapTable:wrapHeight", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[2].o = sp[0].o;
	LINE_NUMBER(81);
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size);
	LINE_NUMBER(83);
	frame[4].f = (jfloat(0));
	frame[5].f = (jfloat(0));
	frame[6].f = (jfloat(0));
	LINE_NUMBER(84);
	frame[7].i = (jint(0));
	}
label_6:;
	{
	if ((frame[7].i) >= (frame[3].i)) goto label_7;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[7].i));
	frame[8].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(86);
	frame[9].f = ((((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[8].o)))->F_elementWidth) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[8].o)))->F_computedPadLeft)) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[8].o)))->F_computedPadRight));
	LINE_NUMBER(87);
	frame[10].f = ((((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[8].o)))->F_elementHeight) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[8].o)))->F_computedPadTop)) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[8].o)))->F_computedPadBottom));
	LINE_NUMBER(89);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) <= 0) goto label_12;
	}
	{
	if ((floatCompare(((frame[4].f) + (frame[9].f)), (frame[1].f), -1)) <= 0) goto label_12;
	}
	{
	LINE_NUMBER(90);
	frame[5].f = ((frame[5].f) + (frame[6].f));
	LINE_NUMBER(91);
	frame[4].f = (jfloat(0));
	LINE_NUMBER(92);
	frame[6].f = (jfloat(0));
	}
label_12:;
	{
	LINE_NUMBER(95);
	frame[4].f = ((frame[4].f) + (frame[9].f));
	LINE_NUMBER(96);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[6].f), (frame[10].f));
	frame[6].f = temp0;
	LINE_NUMBER(84);
	INST_IINC(7, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return ((frame[5].f) + (frame[6].f));
	}

	popStackFrame(ctx);
}

void M_arc_scene_ui_layout_WrapTable_layout_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[30];
	auto stack = &frame[26];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/WrapTable:layout", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[5].o = sp[0].o;
	LINE_NUMBER(104);
	frame[6].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[5].o)))->F_size);
	LINE_NUMBER(106);
	if (((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_3;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_scene_ui_layout_WrapTable_computeSize) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_WrapTable_computeSize])(ctx, sp[0].o);
label_3:;
	{
	LINE_NUMBER(108);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_WrapTable_getMarginLeft_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_WrapTable_getMarginLeft_R_float])(ctx, (frame[0].o));
	frame[7].f = temp0;
	LINE_NUMBER(109);
	jfloat temp1 = frame[7].f;
	jfloat temp2 = (jfloat)((func_arc_scene_ui_layout_WrapTable_getMarginRight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_WrapTable_getMarginRight_R_float])(ctx, (frame[0].o));
	frame[8].f = (temp1 + temp2);
	LINE_NUMBER(110);
	jfloat temp3 = (jfloat)((func_arc_scene_ui_layout_WrapTable_getMarginTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_WrapTable_getMarginTop_R_float])(ctx, (frame[0].o));
	frame[9].f = temp3;
	LINE_NUMBER(111);
	jfloat temp4 = frame[9].f;
	jfloat temp5 = (jfloat)((func_arc_scene_ui_layout_WrapTable_getMarginBottom_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_WrapTable_getMarginBottom_R_float])(ctx, (frame[0].o));
	frame[10].f = (temp4 + temp5);
	LINE_NUMBER(113);
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((frame[3].f) - (frame[8].f)));
	frame[11].f = temp6;
	LINE_NUMBER(116);
	jfloat temp7 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[11].f) - ((jfloat)((arc_scene_ui_layout_WrapTable *) NULL_CHECK((frame[0].o)))->F_lastComputeWidth)));
	if ((floatCompare(temp7, (jfloat(1,000000e-03f)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(117);
	((arc_scene_ui_layout_WrapTable *) NULL_CHECK((frame[0].o)))->F_lastComputeWidth = (frame[11].f);
	LINE_NUMBER(118);
	jfloat temp0 = (jfloat)((func_arc_scene_ui_layout_WrapTable_wrapHeight_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_WrapTable_wrapHeight_float_R_float])(ctx, (frame[0].o), (frame[11].f));
	frame[12].f = (temp0 + (frame[10].f));
	LINE_NUMBER(119);
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, ((frame[12].f) - ((jfloat)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight)));
	if ((floatCompare(temp1, (jfloat(1,000000e-03f)), -1)) <= 0) goto label_9;
	}
	{
	LINE_NUMBER(120);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight = (frame[12].f);
	LINE_NUMBER(121);
	((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefHeight = (frame[12].f);
	LINE_NUMBER(122);
	((func_arc_scene_ui_layout_WrapTable_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_ui_layout_WrapTable_invalidateHierarchy])(ctx, (frame[0].o));
	}
label_9:;
	{
	LINE_NUMBER(126);
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_WrapTable_rowHeights;
	((func_arc_struct_FloatSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(127);
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_WrapTable_cellRow;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(129);
	frame[12].f = (jfloat(0));
	frame[13].f = (jfloat(0));
	frame[14].f = (jfloat(0));
	LINE_NUMBER(130);
	frame[15].i = (jint(0));
	LINE_NUMBER(131);
	frame[16].i = (jint(0));
	}
label_22:;
	{
	if ((frame[16].i) >= (frame[6].i)) goto label_23;
	}
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[5].o), (frame[16].i));
	frame[17].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(133);
	frame[18].f = ((((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[17].o)))->F_elementWidth) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[17].o)))->F_computedPadLeft)) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[17].o)))->F_computedPadRight));
	LINE_NUMBER(134);
	frame[19].f = ((((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[17].o)))->F_elementHeight) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[17].o)))->F_computedPadTop)) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[17].o)))->F_computedPadBottom));
	LINE_NUMBER(136);
	if ((floatCompare((frame[12].f), (jfloat(0)), -1)) <= 0) goto label_28;
	}
	{
	if ((floatCompare(((frame[12].f) + (frame[18].f)), (frame[11].f), -1)) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(137);
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_WrapTable_rowHeights;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, (frame[13].f));
	LINE_NUMBER(138);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[14].f), (frame[12].f));
	frame[14].f = temp0;
	LINE_NUMBER(139);
	frame[12].f = (jfloat(0));
	LINE_NUMBER(140);
	frame[13].f = (jfloat(0));
	LINE_NUMBER(141);
	INST_IINC(15, 1);
	}
label_28:;
	{
	LINE_NUMBER(144);
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_WrapTable_cellRow;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[15].i));
	LINE_NUMBER(145);
	frame[12].f = ((frame[12].f) + (frame[18].f));
	LINE_NUMBER(146);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[13].f), (frame[19].f));
	frame[13].f = temp0;
	LINE_NUMBER(131);
	INST_IINC(16, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(148);
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_WrapTable_rowHeights;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, (frame[13].f));
	LINE_NUMBER(149);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[14].f), (frame[12].f));
	frame[14].f = temp0;
	LINE_NUMBER(151);
	frame[16].f = (jfloat(0));
	LINE_NUMBER(152);
	frame[17].i = (jint(0));
	}
label_40:;
	{
	jint temp0 = frame[17].i;
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_WrapTable_rowHeights;
	if (temp0 >= ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_41;
	}
	{
	LINE_NUMBER(153);
	jfloat temp0 = frame[16].f;
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_WrapTable_rowHeights;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[16].f = (temp0 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[17].i))));
	LINE_NUMBER(152);
	INST_IINC(17, 1);
	goto label_40;
	}
label_41:;
	{
	LINE_NUMBER(155);
	frame[17].f = ((frame[14].f) + (frame[8].f));
	LINE_NUMBER(156);
	frame[18].f = ((frame[16].f) + (frame[10].f));
	LINE_NUMBER(158);
	frame[19].i = ((jint)((arc_scene_ui_layout_Table *) NULL_CHECK((frame[0].o)))->F_align);
	LINE_NUMBER(159);
	frame[20].f = ((frame[1].f) + (frame[7].f));
	LINE_NUMBER(160);
	if (((frame[19].i) & (16)) == 0) goto label_48;
	}
	{
	LINE_NUMBER(161);
	frame[20].f = ((frame[20].f) + ((frame[3].f) - (frame[17].f)));
	goto label_50;
	}
label_48:;
	{
	LINE_NUMBER(162);
	if (((frame[19].i) & (8)) != 0) goto label_50;
	}
	{
	LINE_NUMBER(163);
	frame[20].f = ((frame[20].f) + (((frame[3].f) - (frame[17].f)) / (jfloat(2))));
	}
label_50:;
	{
	LINE_NUMBER(165);
	frame[21].f = ((frame[2].f) + (frame[9].f));
	LINE_NUMBER(166);
	if (((frame[19].i) & (jint(4))) == 0) goto label_53;
	}
	{
	LINE_NUMBER(167);
	frame[21].f = ((frame[21].f) + ((frame[4].f) - (frame[18].f)));
	goto label_55;
	}
label_53:;
	{
	LINE_NUMBER(168);
	if (((frame[19].i) & (jint(2))) != 0) goto label_55;
	}
	{
	LINE_NUMBER(169);
	frame[21].f = ((frame[21].f) + (((frame[4].f) - (frame[18].f)) / (jfloat(2))));
	}
label_55:;
	{
	LINE_NUMBER(171);
	frame[12].f = (jfloat(0));
	LINE_NUMBER(172);
	frame[22].f = (frame[21].f);
	LINE_NUMBER(173);
	frame[15].i = (jint(0));
	LINE_NUMBER(174);
	frame[23].i = (jint(0));
	}
label_60:;
	{
	if ((frame[23].i) >= (frame[6].i)) goto label_61;
	}
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[5].o), (frame[23].i));
	frame[24].o = (checkCast(ctx, &class_arc_scene_ui_layout_Cell, sp[0].o));
	LINE_NUMBER(176);
	frame[25].f = ((((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_elementWidth) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_computedPadLeft)) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_computedPadRight));
	LINE_NUMBER(178);
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_WrapTable_cellRow;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[23].i))) == (frame[15].i)) goto label_65;
	}
	{
	LINE_NUMBER(179);
	jfloat temp0 = frame[22].f;
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_WrapTable_rowHeights;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[22].f = (temp0 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[15].i))));
	LINE_NUMBER(180);
	frame[12].f = (jfloat(0));
	LINE_NUMBER(181);
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	sp[0].o = (jobject)SF_arc_scene_ui_layout_WrapTable_cellRow;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[15].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[23].i)));
	}
label_65:;
	{
	LINE_NUMBER(184);
	((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_elementX = (((frame[20].f) + (frame[12].f)) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_computedPadLeft));
	LINE_NUMBER(185);
	sp[0].o = frame[24].o;
	jfloat temp0 = frame[22].f;
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	sp[1].o = (jobject)SF_arc_scene_ui_layout_WrapTable_rowHeights;
	sp[1].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[1].o))->F_items;
	((arc_scene_ui_layout_Cell *) NULL_CHECK(sp[0].o))->F_elementY = (temp0 + ((((((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (frame[15].i))) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_elementHeight)) + ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_computedPadTop)) - ((jfloat)((arc_scene_ui_layout_Cell *) NULL_CHECK((frame[24].o)))->F_computedPadBottom)) / (jfloat(2))));
	LINE_NUMBER(187);
	frame[12].f = ((frame[12].f) + (frame[25].f));
	LINE_NUMBER(174);
	INST_IINC(23, 1);
	goto label_60;
	}
label_61:;
	LINE_NUMBER(189);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_arc_scene_ui_layout_WrapTable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_layout_Table(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/ui/layout/WrapTable:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_ui_layout_WrapTable(ctx);
	{
	LINE_NUMBER(10);
	clinit_arc_struct_FloatSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[0].o);
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	SF_arc_scene_ui_layout_WrapTable_rowHeights = sp[0].o;
	LINE_NUMBER(11);
	clinit_arc_struct_IntSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq(ctx, sp[0].o);
	clinit_arc_scene_ui_layout_WrapTable(ctx);
	SF_arc_scene_ui_layout_WrapTable_cellRow = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_ui_layout_WrapTable[] {
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
	(void *) M_arc_scene_ui_layout_Table_draw,
	(void *) M_arc_scene_Group_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_hit_float_float_boolean_R_arc_scene_Element,
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
	(void *) M_arc_scene_ui_layout_Table_getMinWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMinHeight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_layout_Table_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_arc_scene_ui_layout_WidgetGroup_validate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_needsLayout_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_invalidate,
	(void *) M_arc_scene_ui_layout_WidgetGroup_invalidateHierarchy,
	(void *) M_arc_scene_ui_layout_WidgetGroup_pack,
	(void *) M_arc_scene_ui_layout_WidgetGroup_setFillParent_boolean,
	(void *) M_arc_scene_ui_layout_Table_layout,
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
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_removeChild_arc_scene_Element_boolean_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_clearChildren,
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
	(void *) M_arc_scene_ui_layout_Table_obtainCell_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_fill_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_drawBackground_float_float,
	(void *) M_arc_scene_ui_layout_Table_background_arc_scene_style_Drawable_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getBackground_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_setBackground_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_layout_Table_getClip_R_boolean,
	(void *) M_arc_scene_ui_layout_Table_setClip_boolean,
	(void *) M_arc_scene_ui_layout_Table_add_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_Array1_arc_scene_Element,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_func_Cons_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_collapser_arc_scene_ui_layout_Table_boolean_arc_func_Boolp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_wrapTable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_table_arc_scene_style_Drawable_int_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_label_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_labelWrap_java_lang_String_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_ui_ScrollPane$ScrollPaneStyle_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_pane_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_float_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_scene_ui_Label$LabelStyle_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_java_lang_CharSequence_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_add_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_stack_Array1_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacer_arc_func_Floatp_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerX_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_spacerY_arc_func_Floatp_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_imageDraw_arc_func_Prov_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_scene_style_Drawable_arc_graphics_Color_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_image_arc_graphics_g2d_TextureRegion_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_check_java_lang_String_float_boolean_arc_func_Boolc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_func_Cons_arc_scene_ui_Button$ButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_arc_scene_style_Drawable_arc_scene_ui_ImageButton$ImageButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_area_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldFilter_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_field_java_lang_String_arc_scene_ui_TextField$TextFieldStyle_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_rect_arc_scene_ui_layout_Table$DrawRect_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonRow_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_button_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_buttonCenter_java_lang_String_arc_scene_style_Drawable_arc_scene_ui_TextButton$TextButtonStyle_float_java_lang_Runnable_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_slider_float_float_float_float_boolean_arc_func_Floatc_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_reset,
	(void *) M_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_endRow,
	(void *) M_arc_scene_ui_layout_Table_getCell_arc_scene_Element_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_getCells_R_arc_struct_Seq,
	(void *) M_arc_scene_ui_layout_Table_defaults_R_arc_scene_ui_layout_Cell,
	(void *) M_arc_scene_ui_layout_Table_margin_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_margin_float_float_float_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginTop_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginLeft_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginBottom_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_marginRight_float_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_align_int_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_center_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_top_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_left_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_bottom_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_right_R_arc_scene_ui_layout_Table,
	(void *) M_arc_scene_ui_layout_Table_getMarginTop_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginLeft_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginBottom_R_float,
	(void *) M_arc_scene_ui_layout_Table_getMarginRight_R_float,
	(void *) M_arc_scene_ui_layout_Table_getAlign_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRow_float_R_int,
	(void *) M_arc_scene_ui_layout_Table_setRound_boolean,
	(void *) M_arc_scene_ui_layout_Table_getRows_R_int,
	(void *) M_arc_scene_ui_layout_Table_getColumns_R_int,
	(void *) M_arc_scene_ui_layout_Table_getRowHeight_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_getColumnWidth_int_R_float,
	(void *) M_arc_scene_ui_layout_Table_ensureSize_Array1_float_int_R_Array1_float,
	(void *) M_arc_scene_ui_layout_WrapTable_computeSize,
	(void *) M_arc_scene_ui_layout_WrapTable_layout_float_float_float_float,
	(void *) M_arc_scene_ui_layout_WrapTable_wrapHeight_float_R_float,
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
	{ "obtainCell", "()Larc/scene/ui/layout/Cell;" },
	{ "fill", "()Larc/scene/ui/layout/Table;" },
	{ "drawBackground", "(FF)V" },
	{ "background", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Table;" },
	{ "getBackground", "()Larc/scene/style/Drawable;" },
	{ "setBackground", "(Larc/scene/style/Drawable;)V" },
	{ "getClip", "()Z" },
	{ "setClip", "(Z)V" },
	{ "add", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "([Larc/scene/Element;)V" },
	{ "collapser", "(Larc/func/Cons;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;Larc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/func/Cons;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "collapser", "(Larc/scene/ui/layout/Table;ZLarc/func/Boolp;)Larc/scene/ui/layout/Cell;" },
	{ "table", "()Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "wrapTable", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "table", "(Larc/scene/style/Drawable;ILarc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "label", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "labelWrap", "(Ljava/lang/String;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/ui/ScrollPane$ScrollPaneStyle;Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "pane", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;F)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/scene/ui/Label$LabelStyle;)Larc/scene/ui/layout/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "add", "()Larc/scene/ui/layout/Cell;" },
	{ "stack", "([Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "spacer", "(Larc/func/Floatp;Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerX", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "spacerY", "(Larc/func/Floatp;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "imageDraw", "(Larc/func/Prov;)Larc/scene/ui/layout/Cell;" },
	{ "image", "()Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/scene/style/Drawable;Larc/graphics/Color;)Larc/scene/ui/layout/Cell;" },
	{ "image", "(Larc/graphics/g2d/TextureRegion;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;Larc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;ZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "check", "(Ljava/lang/String;FZLarc/func/Boolc;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/func/Cons;Larc/scene/ui/Button$ButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Larc/scene/style/Drawable;Larc/scene/ui/ImageButton$ImageButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "area", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldFilter;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "field", "(Ljava/lang/String;Larc/scene/ui/TextField$TextFieldStyle;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "rect", "(Larc/scene/ui/layout/Table$DrawRect;)Larc/scene/ui/layout/Cell;" },
	{ "buttonRow", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "button", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Ljava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "buttonCenter", "(Ljava/lang/String;Larc/scene/style/Drawable;Larc/scene/ui/TextButton$TextButtonStyle;FLjava/lang/Runnable;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "slider", "(FFFFZLarc/func/Floatc;)Larc/scene/ui/layout/Cell;" },
	{ "reset", "()V" },
	{ "row", "()Larc/scene/ui/layout/Table;" },
	{ "endRow", "()V" },
	{ "getCell", "(Larc/scene/Element;)Larc/scene/ui/layout/Cell;" },
	{ "getCells", "()Larc/struct/Seq;" },
	{ "defaults", "()Larc/scene/ui/layout/Cell;" },
	{ "margin", "(F)Larc/scene/ui/layout/Table;" },
	{ "margin", "(FFFF)Larc/scene/ui/layout/Table;" },
	{ "marginTop", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginLeft", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginBottom", "(F)Larc/scene/ui/layout/Table;" },
	{ "marginRight", "(F)Larc/scene/ui/layout/Table;" },
	{ "align", "(I)Larc/scene/ui/layout/Table;" },
	{ "center", "()Larc/scene/ui/layout/Table;" },
	{ "top", "()Larc/scene/ui/layout/Table;" },
	{ "left", "()Larc/scene/ui/layout/Table;" },
	{ "bottom", "()Larc/scene/ui/layout/Table;" },
	{ "right", "()Larc/scene/ui/layout/Table;" },
	{ "getMarginTop", "()F" },
	{ "getMarginLeft", "()F" },
	{ "getMarginBottom", "()F" },
	{ "getMarginRight", "()F" },
	{ "getAlign", "()I" },
	{ "getRow", "(F)I" },
	{ "setRound", "(Z)V" },
	{ "getRows", "()I" },
	{ "getColumns", "()I" },
	{ "getRowHeight", "(I)F" },
	{ "getColumnWidth", "(I)F" },
	{ "ensureSize", "([FI)[F" },
	{ "computeSize", "()V" },
	{ "layout", "(FFFF)V" },
	{ "wrapHeight", "(F)F" },
};

static FieldMetadata fields[] {
	{ "rowHeights", &class_arc_struct_FloatSeq, (intptr_t) &SF_arc_scene_ui_layout_WrapTable_rowHeights, "Larc/struct/FloatSeq;", 10 },
	{ "cellRow", &class_arc_struct_IntSeq, (intptr_t) &SF_arc_scene_ui_layout_WrapTable_cellRow, "Larc/struct/IntSeq;", 10 },
	{ "lastComputeWidth", &class_float, offsetof(arc_scene_ui_layout_WrapTable, F_lastComputeWidth), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_WrapTable, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_WrapTable_arc_scene_style_Drawable, 0, "(Larc/scene/style/Drawable;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_WrapTable_arc_scene_style_Drawable_arc_func_Cons, 0, "(Larc/scene/style/Drawable;Larc/func/Cons;)V", 1 },
	{ "<init>", (intptr_t) init_arc_scene_ui_layout_WrapTable_arc_func_Cons, 0, "(Larc/func/Cons;)V", 1 },
	{ "computeSize", (intptr_t) M_arc_scene_ui_layout_WrapTable_computeSize, VTABLE_arc_scene_ui_layout_WrapTable_computeSize, "()V", 4 },
	{ "wrapHeight", (intptr_t) M_arc_scene_ui_layout_WrapTable_wrapHeight_float_R_float, VTABLE_arc_scene_ui_layout_WrapTable_wrapHeight_float_R_float, "(F)F", 0 },
	{ "layout", (intptr_t) M_arc_scene_ui_layout_WrapTable_layout_float_float_float_float, VTABLE_arc_scene_ui_layout_WrapTable_layout_float_float_float_float, "(FFFF)V", 4 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_ui_layout_WrapTable, 0, "()V", 8 },
};

Class class_arc_scene_ui_layout_WrapTable{
		.nativeName = (intptr_t) "arc/scene/ui/layout/WrapTable",
		.parentClass = (intptr_t) &class_arc_scene_ui_layout_Table,
		.size = sizeof(arc_scene_ui_layout_WrapTable),
		.classVtable = (intptr_t) vtable_arc_scene_ui_layout_WrapTable,
		.staticInitializer = (intptr_t) clinit_arc_scene_ui_layout_WrapTable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_ui_layout_WrapTable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 256,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_ui_layout_WrapTable = registerClass(&class_arc_scene_ui_layout_WrapTable);

}
