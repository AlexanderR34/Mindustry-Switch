#include "mindustry/ui/layout/BranchTreeLayout.h"
#include "mindustry/ui/layout/BranchTreeLayout_TreeAlignment.h"
#include "mindustry/ui/layout/BranchTreeLayout_TreeLocation.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/ui/layout/TreeLayout_TreeNode.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ui/layout/TreeLayout.h"
#include "mindustry/ui/layout/BranchTreeLayout.h"
#include "arc/struct/FloatSeq.h"

extern "C" {


void mark_mindustry_ui_layout_BranchTreeLayout(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_layout_BranchTreeLayout *) object;
	if (self->F_rootLocation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rootLocation)->clazz)->markFunction)((jobject) self->F_rootLocation, mark, depth + 1);
	if (self->F_alignment)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_alignment)->clazz)->markFunction)((jobject) self->F_alignment, mark, depth + 1);
	if (self->F_sizeOfLevel)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sizeOfLevel)->clazz)->markFunction)((jobject) self->F_sizeOfLevel, mark, depth + 1);
}

void clinit_mindustry_ui_layout_BranchTreeLayout(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_layout_BranchTreeLayout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_layout_BranchTreeLayout(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_layout_BranchTreeLayout$TreeLocation(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_layout_BranchTreeLayout$TreeLocation_top;
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK(sp[0].o))->F_rootLocation = (jref) sp[1].o;
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_layout_BranchTreeLayout$TreeAlignment(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_layout_BranchTreeLayout$TreeAlignment_awayFromRoot;
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK(sp[0].o))->F_alignment = (jref) sp[1].o;
	LINE_NUMBER(12);
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_gapBetweenLevels = (jfloat(10.0f));
	LINE_NUMBER(13);
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_gapBetweenNodes = (jfloat(10.0f));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_struct_FloatSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_FloatSeq);
	init_arc_struct_FloatSeq(ctx, sp[1].o);
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK(sp[0].o))->F_sizeOfLevel = (jref) sp[1].o;
	LINE_NUMBER(16);
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsLeft = (jfloat(3,402823e+38f));
	LINE_NUMBER(17);
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsRight = (jfloat(1,401298e-45f));
	LINE_NUMBER(18);
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsTop = (jfloat(3,402823e+38f));
	LINE_NUMBER(19);
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsBottom = (jfloat(1,401298e-45f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_layout_BranchTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:layout", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	((func_mindustry_ui_layout_BranchTreeLayout_firstWalk_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_firstWalk_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(24);
	((func_mindustry_ui_layout_BranchTreeLayout_calcSizeOfLevels_mindustry_ui_layout_TreeLayout$TreeNode_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_calcSizeOfLevels_mindustry_ui_layout_TreeLayout$TreeNode_int])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	LINE_NUMBER(25);
	((func_mindustry_ui_layout_BranchTreeLayout_secondWalk_mindustry_ui_layout_TreeLayout$TreeNode_float_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_secondWalk_mindustry_ui_layout_TreeLayout$TreeNode_float_int_float])(ctx, (frame[0].o), (frame[1].o), (-((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_prelim)), (jint(0)), (jfloat(0)));
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_layout_BranchTreeLayout_getWidthOrHeightOfNode_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_float(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:getWidthOrHeightOfNode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(29);
	if ((frame[2].i) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_mindustry_ui_layout_TreeLayout$TreeNode_calcWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_calcWidth_R_float])(ctx, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
	sp[-1].f = ((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[-1].o))->F_height;
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_layout_BranchTreeLayout_getNodeThickness_mindustry_ui_layout_TreeLayout$TreeNode_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:getNodeThickness", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_ui_layout_BranchTreeLayout_isLevelChangeInYAxis_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_isLevelChangeInYAxis_R_boolean])(ctx, (frame[0].o));
	sp += 2;
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(3); // Pop method args
	sp->f = (jfloat)((func_mindustry_ui_layout_BranchTreeLayout_getWidthOrHeightOfNode_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getWidthOrHeightOfNode_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_float])(ctx, sp[0].o, sp[1].o, sp[2].i);
	sp++;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_layout_BranchTreeLayout_getNodeSize_mindustry_ui_layout_TreeLayout$TreeNode_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:getNodeSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_mindustry_ui_layout_BranchTreeLayout_isLevelChangeInYAxis_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_isLevelChangeInYAxis_R_boolean])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_mindustry_ui_layout_BranchTreeLayout_getWidthOrHeightOfNode_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getWidthOrHeightOfNode_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_float])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_layout_BranchTreeLayout_isLevelChangeInYAxis_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:isLevelChangeInYAxis", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_rootLocation;
	clinit_mindustry_ui_layout_BranchTreeLayout$TreeLocation(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_layout_BranchTreeLayout$TreeLocation_top;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_rootLocation;
	clinit_mindustry_ui_layout_BranchTreeLayout$TreeLocation(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_layout_BranchTreeLayout$TreeLocation_bottom;
	if (sp[0].o != sp[1].o) goto label_2;
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

jint M_mindustry_ui_layout_BranchTreeLayout_getLevelChangeSign_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:getLevelChangeSign", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_rootLocation;
	clinit_mindustry_ui_layout_BranchTreeLayout$TreeLocation(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_layout_BranchTreeLayout$TreeLocation_bottom;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_rootLocation;
	clinit_mindustry_ui_layout_BranchTreeLayout$TreeLocation(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_layout_BranchTreeLayout$TreeLocation_right;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(-1);
	goto label_3;
label_2:;
	INST_ICONST(1);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_layout_BranchTreeLayout_updateBounds_mindustry_ui_layout_TreeLayout$TreeNode_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:updateBounds", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(49);
	frame[4].f = ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_width);
	LINE_NUMBER(50);
	frame[5].f = ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_height);
	LINE_NUMBER(51);
	frame[6].f = ((frame[2].f) - ((frame[4].f) / (jfloat(2))));
	LINE_NUMBER(52);
	frame[7].f = ((frame[2].f) + ((frame[4].f) / (jfloat(2))));
	LINE_NUMBER(53);
	frame[8].f = ((frame[3].f) - ((frame[5].f) / (jfloat(2))));
	LINE_NUMBER(54);
	frame[9].f = ((frame[3].f) + ((frame[5].f) / (jfloat(2))));
	LINE_NUMBER(55);
	if ((floatCompare(((jfloat)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsLeft), (frame[6].f), -1)) <= 0) goto label_7;
	}
	{
	LINE_NUMBER(56);
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsLeft = (frame[6].f);
	}
label_7:;
	{
	LINE_NUMBER(58);
	if ((floatCompare(((jfloat)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsRight), (frame[7].f), 1)) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(59);
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsRight = (frame[7].f);
	}
label_9:;
	{
	LINE_NUMBER(61);
	if ((floatCompare(((jfloat)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsTop), (frame[8].f), -1)) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(62);
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsTop = (frame[8].f);
	}
label_11:;
	{
	LINE_NUMBER(64);
	if ((floatCompare(((jfloat)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsBottom), (frame[9].f), 1)) >= 0) goto label_13;
	}
	{
	LINE_NUMBER(65);
	((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsBottom = (frame[9].f);
	}
label_13:;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_layout_BranchTreeLayout_getBounds_R_arc_math_geom_Rect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:getBounds", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(70);
	clinit_arc_math_geom_Rect(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsLeft), ((jfloat)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsBottom), (((jfloat)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsRight) - ((jfloat)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsLeft)), (((jfloat)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsTop) - ((jfloat)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_boundsBottom)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_layout_BranchTreeLayout_calcSizeOfLevels_mindustry_ui_layout_TreeLayout$TreeNode_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:calcSizeOfLevels", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_sizeOfLevel;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) > (frame[2].i)) goto label_1;
	}
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_sizeOfLevel;
	((func_arc_struct_FloatSeq_add_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_add_float])(ctx, sp[0].o, (jfloat(0)));
	LINE_NUMBER(77);
	frame[3].f = (jfloat(0));
	goto label_5;
	}
label_1:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_sizeOfLevel;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, (frame[2].i));
	frame[3].f = temp0;
	}
label_5:;
	{
	LINE_NUMBER(82);
	jfloat temp0 = (jfloat)((func_mindustry_ui_layout_BranchTreeLayout_getNodeThickness_mindustry_ui_layout_TreeLayout$TreeNode_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getNodeThickness_mindustry_ui_layout_TreeLayout$TreeNode_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[4].f = temp0;
	LINE_NUMBER(83);
	if ((floatCompare((frame[3].f), (frame[4].f), 1)) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_sizeOfLevel;
	((func_arc_struct_FloatSeq_set_int_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_set_int_float])(ctx, sp[0].o, (frame[2].i), (frame[4].f));
	}
label_7:;
	{
	LINE_NUMBER(87);
	jint temp0 = (jint)((func_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_9;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(89);
	((func_mindustry_ui_layout_BranchTreeLayout_calcSizeOfLevels_mindustry_ui_layout_TreeLayout$TreeNode_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_calcSizeOfLevels_mindustry_ui_layout_TreeLayout$TreeNode_int])(ctx, (frame[0].o), (frame[8].o), ((frame[2].i) + (jint(1))));
	LINE_NUMBER(88);
	INST_IINC(7, 1);
	goto label_11;
	}
label_9:;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_ui_layout_BranchTreeLayout_getLevelCount_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:getLevelCount", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_sizeOfLevel;
	popStackFrame(ctx);
	return ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_layout_BranchTreeLayout_getGapBetweenNodes_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:getGapBetweenNodes", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_gapBetweenNodes);
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_layout_BranchTreeLayout_getSizeOfLevel_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:getSizeOfLevel", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	if ((frame[1].i) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"level must be >= 0"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(104);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_mindustry_ui_layout_BranchTreeLayout_getLevelCount_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getLevelCount_R_int])(ctx, (frame[0].o));
	if (temp0 < temp1) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"level must be < levelCount"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_sizeOfLevel;
	jfloat temp0 = (jfloat)((func_arc_struct_FloatSeq_get_int_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_FloatSeq_get_int_R_float])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_layout_BranchTreeLayout_getAncestor_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:getAncestor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_ancestor;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_ancestor;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_ui_layout_BranchTreeLayout_getDistance_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:getDistance", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(114);
	jfloat temp0 = (jfloat)((func_mindustry_ui_layout_BranchTreeLayout_getNodeSize_mindustry_ui_layout_TreeLayout$TreeNode_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getNodeSize_mindustry_ui_layout_TreeLayout$TreeNode_R_float])(ctx, (frame[0].o), (frame[1].o));
	jfloat temp1 = (jfloat)((func_mindustry_ui_layout_BranchTreeLayout_getNodeSize_mindustry_ui_layout_TreeLayout$TreeNode_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getNodeSize_mindustry_ui_layout_TreeLayout$TreeNode_R_float])(ctx, (frame[0].o), (frame[2].o));
	frame[3].f = (temp0 + temp1);
	LINE_NUMBER(116);
	jfloat temp2 = (frame[3].f) / (jfloat(2));
	jfloat temp3 = (jfloat)((func_mindustry_ui_layout_BranchTreeLayout_getGapBetweenNodes_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getGapBetweenNodes_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return (temp2 + temp3);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_layout_BranchTreeLayout_nextLeft_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:nextLeft", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_thread;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_ui_layout_BranchTreeLayout_nextRight_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:nextRight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	jint temp0 = (jint)((func_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_thread;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	sp[1].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1))));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jint M_mindustry_ui_layout_BranchTreeLayout_getNumber_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:getNumber", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(128);
	if (((jint)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_number) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(129);
	frame[3].i = (jint(1));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_children;
	frame[4].o = sp[0].o;
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_1;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(131);
	sp[0].o = frame[7].o;
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_number = temp0;
	LINE_NUMBER(130);
	INST_IINC(6, 1);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_number);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_layout_BranchTreeLayout_ancestor_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:ancestor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)((func_mindustry_ui_layout_BranchTreeLayout_getAncestor_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getAncestor_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_parent;
	if (sp[0].o != (frame[2].o)) goto label_2;
	}
	INST_ALOAD(4);
	goto label_3;
label_2:;
	INST_ALOAD(3);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_layout_BranchTreeLayout_moveSubtree_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:moveSubtree", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(143);
	jint temp0 = (jint)((func_mindustry_ui_layout_BranchTreeLayout_getNumber_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getNumber_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_int])(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	jint temp1 = (jint)((func_mindustry_ui_layout_BranchTreeLayout_getNumber_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getNumber_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[3].o));
	frame[5].i = (temp0 - temp1);
	LINE_NUMBER(144);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_change = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_change) - ((frame[4].f) / (jfloat((frame[5].i)))));
	LINE_NUMBER(145);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_shift = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_shift) + (frame[4].f));
	LINE_NUMBER(146);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_change = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_change) + ((frame[4].f) / (jfloat((frame[5].i)))));
	LINE_NUMBER(147);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_prelim = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_prelim) + (frame[4].f));
	LINE_NUMBER(148);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_mode = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_mode) + (frame[4].f));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_layout_BranchTreeLayout_apportion_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:apportion", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(152);
	if ((frame[3].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(156);
	frame[5].o = (frame[1].o);
	LINE_NUMBER(157);
	frame[6].o = (frame[1].o);
	LINE_NUMBER(158);
	frame[7].o = (frame[3].o);
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[4].o)))->F_children;
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(162);
	frame[9].f = ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[6].o)))->F_mode);
	LINE_NUMBER(163);
	frame[10].f = ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[5].o)))->F_mode);
	LINE_NUMBER(164);
	frame[11].f = ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[7].o)))->F_mode);
	LINE_NUMBER(165);
	frame[12].f = ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_mode);
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_mindustry_ui_layout_BranchTreeLayout_nextRight_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_nextRight_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[7].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_mindustry_ui_layout_BranchTreeLayout_nextLeft_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_nextLeft_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[6].o));
	frame[14].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(170);
	if ((frame[13].o) == nullptr) goto label_13;
	}
	INST_ALOAD(14);
	if ((--sp)->o == nullptr) goto label_13;
	{
	LINE_NUMBER(171);
	frame[7].o = (frame[13].o);
	LINE_NUMBER(172);
	frame[6].o = (frame[14].o);
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_mindustry_ui_layout_BranchTreeLayout_nextLeft_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_nextLeft_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[8].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_mindustry_ui_layout_BranchTreeLayout_nextRight_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_nextRight_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[5].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(175);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[5].o)))->F_ancestor = (jref) (frame[1].o);
	LINE_NUMBER(176);
	jfloat temp0 = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[7].o)))->F_prelim) + (frame[11].f)) - (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[6].o)))->F_prelim) + (frame[9].f));
	sp[0].o = frame[0].o;
	sp[1].o = frame[7].o;
	sp[2].o = frame[6].o;
	LINE_NUMBER(178);
	jfloat temp1 = (jfloat)((func_mindustry_ui_layout_BranchTreeLayout_getDistance_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getDistance_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[15].f = (temp0 + temp1);
	LINE_NUMBER(180);
	if ((floatCompare((frame[15].f), (jfloat(0)), -1)) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_ui_layout_BranchTreeLayout_ancestor_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_ancestor_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[7].o), (frame[4].o), (frame[2].o));
	((func_mindustry_ui_layout_BranchTreeLayout_moveSubtree_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_moveSubtree_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_float])(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[4].o), (frame[15].f));
	LINE_NUMBER(183);
	frame[9].f = ((frame[9].f) + (frame[15].f));
	LINE_NUMBER(184);
	frame[10].f = ((frame[10].f) + (frame[15].f));
	}
label_22:;
	{
	LINE_NUMBER(186);
	frame[11].f = ((frame[11].f) + ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[7].o)))->F_mode));
	LINE_NUMBER(187);
	frame[9].f = ((frame[9].f) + ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[6].o)))->F_mode));
	LINE_NUMBER(188);
	frame[12].f = ((frame[12].f) + ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_mode));
	LINE_NUMBER(189);
	frame[10].f = ((frame[10].f) + ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[5].o)))->F_mode));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_mindustry_ui_layout_BranchTreeLayout_nextRight_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_nextRight_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[7].o));
	frame[13].o = sp[0].o;
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_mindustry_ui_layout_BranchTreeLayout_nextLeft_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_nextLeft_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[6].o));
	frame[14].o = sp[0].o;
	LINE_NUMBER(193);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(195);
	if ((frame[13].o) == nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ui_layout_BranchTreeLayout_nextRight_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_nextRight_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[5].o));
	if (sp[0].o != nullptr) goto label_32;
	}
	{
	LINE_NUMBER(196);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[5].o)))->F_thread = (jref) (frame[13].o);
	LINE_NUMBER(197);
	sp[0].o = frame[5].o;
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_mode = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_mode) + ((frame[11].f) - (frame[10].f)));
	}
label_32:;
	{
	LINE_NUMBER(200);
	if ((frame[14].o) == nullptr) goto label_35;
	}
	{
	sp[0].o = (jobject)((func_mindustry_ui_layout_BranchTreeLayout_nextLeft_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_nextLeft_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[8].o));
	if (sp[0].o != nullptr) goto label_35;
	}
	{
	LINE_NUMBER(201);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[8].o)))->F_thread = (jref) (frame[14].o);
	LINE_NUMBER(202);
	sp[0].o = frame[8].o;
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_mode = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_mode) + ((frame[9].f) - (frame[12].f)));
	LINE_NUMBER(203);
	frame[2].o = (frame[1].o);
	}
label_35:;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_layout_BranchTreeLayout_executeShifts_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:executeShifts", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(209);
	frame[2].f = (jfloat(0));
	LINE_NUMBER(210);
	frame[3].f = (jfloat(0));
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	frame[4].i = ((((jarray) nullCheck(ctx, sp[0].o))->length) - (jint(1)));
	}
label_3:;
	INST_ILOAD(4);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)));
	LINE_NUMBER(214);
	frame[3].f = ((frame[3].f) + ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[5].o)))->F_change));
	LINE_NUMBER(215);
	sp[0].o = frame[5].o;
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_prelim = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_prelim) + (frame[2].f));
	LINE_NUMBER(216);
	sp[0].o = frame[5].o;
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_mode = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_mode) + (frame[2].f));
	LINE_NUMBER(217);
	frame[2].f = ((frame[2].f) + (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[5].o)))->F_shift) + (frame[3].f)));
	LINE_NUMBER(212);
	INST_IINC(4, -1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(219);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_layout_BranchTreeLayout_firstWalk_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:firstWalk", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(222);
	jint temp0 = (jint)((func_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(223);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(224);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_prelim;
	jfloat temp1 = (jfloat)((func_mindustry_ui_layout_BranchTreeLayout_getDistance_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getDistance_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_prelim = (temp0 + temp1);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(229);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_7:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_8;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(231);
	((func_mindustry_ui_layout_BranchTreeLayout_firstWalk_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_firstWalk_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[8].o), (frame[4].o));
	LINE_NUMBER(232);
	sp[0].o = (jobject)((func_mindustry_ui_layout_BranchTreeLayout_apportion_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_apportion_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[8].o), (frame[3].o), (frame[4].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(233);
	frame[4].o = (frame[8].o);
	LINE_NUMBER(230);
	INST_IINC(7, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(235);
	((func_mindustry_ui_layout_BranchTreeLayout_executeShifts_mindustry_ui_layout_TreeLayout$TreeNode) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_executeShifts_mindustry_ui_layout_TreeLayout$TreeNode])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	jfloat temp0 = (jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_prelim;
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	sp[1].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	frame[5].f = ((temp0 + ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((((jarray) nullCheck(ctx, sp[1].o))->length) - (jint(1)))))))->F_prelim)) / (jfloat(2)));
	LINE_NUMBER(237);
	if ((frame[2].o) == nullptr) goto label_15;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[2].o)))->F_prelim;
	jfloat temp1 = (jfloat)((func_mindustry_ui_layout_BranchTreeLayout_getDistance_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getDistance_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK(sp[0].o))->F_prelim = (temp0 + temp1);
	LINE_NUMBER(239);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_mode = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_prelim) - (frame[5].f));
	goto label_3;
	}
label_15:;
	{
	LINE_NUMBER(241);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_prelim = (frame[5].f);
	}
label_3:;
	LINE_NUMBER(244);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_layout_BranchTreeLayout_secondWalk_mindustry_ui_layout_TreeLayout$TreeNode_float_int_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jint param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/layout/BranchTreeLayout:secondWalk", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(247);
	jint temp0 = (jint)((func_mindustry_ui_layout_BranchTreeLayout_getLevelChangeSign_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getLevelChangeSign_R_int])(ctx, (frame[0].o));
	frame[5].f = (jfloat(temp0));
	LINE_NUMBER(248);
	jint temp1 = (jint)((func_mindustry_ui_layout_BranchTreeLayout_isLevelChangeInYAxis_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_isLevelChangeInYAxis_R_boolean])(ctx, (frame[0].o));
	frame[6].i = temp1;
	LINE_NUMBER(249);
	jfloat temp2 = (jfloat)((func_mindustry_ui_layout_BranchTreeLayout_getSizeOfLevel_int_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getSizeOfLevel_int_R_float])(ctx, (frame[0].o), (frame[3].i));
	frame[7].f = temp2;
	LINE_NUMBER(251);
	frame[8].f = (((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_prelim) + (frame[2].f));
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_alignment;
	clinit_mindustry_ui_layout_BranchTreeLayout$TreeAlignment(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_layout_BranchTreeLayout$TreeAlignment_center;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(255);
	frame[9].f = ((frame[4].f) + ((frame[5].f) * ((frame[7].f) / (jfloat(2)))));
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_alignment;
	clinit_mindustry_ui_layout_BranchTreeLayout$TreeAlignment(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_layout_BranchTreeLayout$TreeAlignment_towardsRoot;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(257);
	jfloat temp0 = frame[4].f;
	jfloat temp1 = frame[5].f;
	jfloat temp2 = (jfloat)((func_mindustry_ui_layout_BranchTreeLayout_getNodeThickness_mindustry_ui_layout_TreeLayout$TreeNode_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getNodeThickness_mindustry_ui_layout_TreeLayout$TreeNode_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[9].f = (temp0 + (temp1 * (temp2 / (jfloat(2)))));
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(259);
	jfloat temp0 = (frame[4].f) + (frame[7].f);
	jfloat temp1 = frame[5].f;
	jfloat temp2 = (jfloat)((func_mindustry_ui_layout_BranchTreeLayout_getNodeThickness_mindustry_ui_layout_TreeLayout$TreeNode_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_getNodeThickness_mindustry_ui_layout_TreeLayout$TreeNode_R_float])(ctx, (frame[0].o), (frame[1].o));
	frame[9].f = (temp0 - (temp1 * (temp2 / (jfloat(2)))));
	}
label_8:;
	{
	LINE_NUMBER(262);
	if ((frame[6].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(263);
	frame[10].f = (frame[8].f);
	LINE_NUMBER(264);
	frame[8].f = (frame[9].f);
	LINE_NUMBER(265);
	frame[9].f = (frame[10].f);
	}
label_12:;
	{
	LINE_NUMBER(268);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_x = (frame[8].f);
	LINE_NUMBER(269);
	((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_y = (frame[9].f);
	LINE_NUMBER(270);
	((func_mindustry_ui_layout_BranchTreeLayout_updateBounds_mindustry_ui_layout_TreeLayout$TreeNode_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_updateBounds_mindustry_ui_layout_TreeLayout$TreeNode_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[8].f), (frame[9].f));
	LINE_NUMBER(272);
	jint temp0 = (jint)((func_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ui_layout_TreeLayout$TreeNode_isLeaf_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_19;
	}
	{
	LINE_NUMBER(273);
	frame[10].f = ((frame[4].f) + (((frame[7].f) + ((jfloat)((mindustry_ui_layout_BranchTreeLayout *) NULL_CHECK((frame[0].o)))->F_gapBetweenLevels)) * (frame[5].f)));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_children;
	frame[11].o = sp[0].o;
	frame[12].i = (((jarray) nullCheck(ctx, (frame[11].o)))->length);
	frame[13].i = (jint(0));
	}
label_22:;
	{
	if ((frame[13].i) >= (frame[12].i)) goto label_19;
	}
	{
	frame[14].o = ((jobject)ARRAY_ACCESS(jobject, (frame[11].o), (frame[13].i)));
	LINE_NUMBER(277);
	((func_mindustry_ui_layout_BranchTreeLayout_secondWalk_mindustry_ui_layout_TreeLayout$TreeNode_float_int_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_layout_BranchTreeLayout_secondWalk_mindustry_ui_layout_TreeLayout$TreeNode_float_int_float])(ctx, (frame[0].o), (frame[14].o), ((frame[2].f) + ((jfloat)((mindustry_ui_layout_TreeLayout$TreeNode *) NULL_CHECK((frame[1].o)))->F_mode)), ((frame[3].i) + (jint(1))), (frame[10].f));
	LINE_NUMBER(276);
	INST_IINC(13, 1);
	goto label_22;
	}
label_19:;
	LINE_NUMBER(280);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_layout_BranchTreeLayout[] {
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
	(void *) M_mindustry_ui_layout_BranchTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getWidthOrHeightOfNode_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getNodeThickness_mindustry_ui_layout_TreeLayout$TreeNode_R_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getNodeSize_mindustry_ui_layout_TreeLayout$TreeNode_R_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_isLevelChangeInYAxis_R_boolean,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getLevelChangeSign_R_int,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_updateBounds_mindustry_ui_layout_TreeLayout$TreeNode_float_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getBounds_R_arc_math_geom_Rect,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_calcSizeOfLevels_mindustry_ui_layout_TreeLayout$TreeNode_int,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getLevelCount_R_int,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getGapBetweenNodes_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getSizeOfLevel_int_R_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getAncestor_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getDistance_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_nextLeft_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_nextRight_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_getNumber_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_int,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_ancestor_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_moveSubtree_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_float,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_apportion_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_executeShifts_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_firstWalk_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode,
	(void *) M_mindustry_ui_layout_BranchTreeLayout_secondWalk_mindustry_ui_layout_TreeLayout$TreeNode_float_int_float,
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
	{ "layout", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)V" },
	{ "getWidthOrHeightOfNode", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Z)F" },
	{ "getNodeThickness", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)F" },
	{ "getNodeSize", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)F" },
	{ "isLevelChangeInYAxis", "()Z" },
	{ "getLevelChangeSign", "()I" },
	{ "updateBounds", "(Lmindustry/ui/layout/TreeLayout$TreeNode;FF)V" },
	{ "getBounds", "()Larc/math/geom/Rect;" },
	{ "calcSizeOfLevels", "(Lmindustry/ui/layout/TreeLayout$TreeNode;I)V" },
	{ "getLevelCount", "()I" },
	{ "getGapBetweenNodes", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)F" },
	{ "getSizeOfLevel", "(I)F" },
	{ "getAncestor", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;" },
	{ "getDistance", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)F" },
	{ "nextLeft", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;" },
	{ "nextRight", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;" },
	{ "getNumber", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)I" },
	{ "ancestor", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;" },
	{ "moveSubtree", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;F)V" },
	{ "apportion", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;" },
	{ "executeShifts", "(Lmindustry/ui/layout/TreeLayout$TreeNode;)V" },
	{ "firstWalk", "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)V" },
	{ "secondWalk", "(Lmindustry/ui/layout/TreeLayout$TreeNode;FIF)V" },
};

static jclass interfaces[] { &class_mindustry_ui_layout_TreeLayout, };

static jclass innerClasses[] {
	&class_mindustry_ui_layout_BranchTreeLayout$TreeLocation,
	&class_mindustry_ui_layout_BranchTreeLayout$TreeAlignment,
};

static FieldMetadata fields[] {
	{ "rootLocation", &class_mindustry_ui_layout_BranchTreeLayout$TreeLocation, offsetof(mindustry_ui_layout_BranchTreeLayout, F_rootLocation), "Lmindustry/ui/layout/BranchTreeLayout$TreeLocation;", 1 },
	{ "alignment", &class_mindustry_ui_layout_BranchTreeLayout$TreeAlignment, offsetof(mindustry_ui_layout_BranchTreeLayout, F_alignment), "Lmindustry/ui/layout/BranchTreeLayout$TreeAlignment;", 1 },
	{ "gapBetweenLevels", &class_float, offsetof(mindustry_ui_layout_BranchTreeLayout, F_gapBetweenLevels), "F", 1 },
	{ "gapBetweenNodes", &class_float, offsetof(mindustry_ui_layout_BranchTreeLayout, F_gapBetweenNodes), "F", 1 },
	{ "sizeOfLevel", &class_arc_struct_FloatSeq, offsetof(mindustry_ui_layout_BranchTreeLayout, F_sizeOfLevel), "Larc/struct/FloatSeq;", 18 },
	{ "boundsLeft", &class_float, offsetof(mindustry_ui_layout_BranchTreeLayout, F_boundsLeft), "F", 2 },
	{ "boundsRight", &class_float, offsetof(mindustry_ui_layout_BranchTreeLayout, F_boundsRight), "F", 2 },
	{ "boundsTop", &class_float, offsetof(mindustry_ui_layout_BranchTreeLayout, F_boundsTop), "F", 2 },
	{ "boundsBottom", &class_float, offsetof(mindustry_ui_layout_BranchTreeLayout, F_boundsBottom), "F", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_layout_BranchTreeLayout, 0, "()V", 1 },
	{ "layout", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode, VTABLE_mindustry_ui_layout_BranchTreeLayout_layout_mindustry_ui_layout_TreeLayout$TreeNode, "(Lmindustry/ui/layout/TreeLayout$TreeNode;)V", 1 },
	{ "getWidthOrHeightOfNode", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_getWidthOrHeightOfNode_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_float, VTABLE_mindustry_ui_layout_BranchTreeLayout_getWidthOrHeightOfNode_mindustry_ui_layout_TreeLayout$TreeNode_boolean_R_float, "(Lmindustry/ui/layout/TreeLayout$TreeNode;Z)F", 2 },
	{ "getNodeThickness", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_getNodeThickness_mindustry_ui_layout_TreeLayout$TreeNode_R_float, VTABLE_mindustry_ui_layout_BranchTreeLayout_getNodeThickness_mindustry_ui_layout_TreeLayout$TreeNode_R_float, "(Lmindustry/ui/layout/TreeLayout$TreeNode;)F", 2 },
	{ "getNodeSize", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_getNodeSize_mindustry_ui_layout_TreeLayout$TreeNode_R_float, VTABLE_mindustry_ui_layout_BranchTreeLayout_getNodeSize_mindustry_ui_layout_TreeLayout$TreeNode_R_float, "(Lmindustry/ui/layout/TreeLayout$TreeNode;)F", 2 },
	{ "isLevelChangeInYAxis", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_isLevelChangeInYAxis_R_boolean, VTABLE_mindustry_ui_layout_BranchTreeLayout_isLevelChangeInYAxis_R_boolean, "()Z", 2 },
	{ "getLevelChangeSign", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_getLevelChangeSign_R_int, VTABLE_mindustry_ui_layout_BranchTreeLayout_getLevelChangeSign_R_int, "()I", 2 },
	{ "updateBounds", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_updateBounds_mindustry_ui_layout_TreeLayout$TreeNode_float_float, VTABLE_mindustry_ui_layout_BranchTreeLayout_updateBounds_mindustry_ui_layout_TreeLayout$TreeNode_float_float, "(Lmindustry/ui/layout/TreeLayout$TreeNode;FF)V", 2 },
	{ "getBounds", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_getBounds_R_arc_math_geom_Rect, VTABLE_mindustry_ui_layout_BranchTreeLayout_getBounds_R_arc_math_geom_Rect, "()Larc/math/geom/Rect;", 1 },
	{ "calcSizeOfLevels", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_calcSizeOfLevels_mindustry_ui_layout_TreeLayout$TreeNode_int, VTABLE_mindustry_ui_layout_BranchTreeLayout_calcSizeOfLevels_mindustry_ui_layout_TreeLayout$TreeNode_int, "(Lmindustry/ui/layout/TreeLayout$TreeNode;I)V", 2 },
	{ "getLevelCount", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_getLevelCount_R_int, VTABLE_mindustry_ui_layout_BranchTreeLayout_getLevelCount_R_int, "()I", 1 },
	{ "getGapBetweenNodes", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_getGapBetweenNodes_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float, VTABLE_mindustry_ui_layout_BranchTreeLayout_getGapBetweenNodes_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float, "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)F", 1 },
	{ "getSizeOfLevel", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_getSizeOfLevel_int_R_float, VTABLE_mindustry_ui_layout_BranchTreeLayout_getSizeOfLevel_int_R_float, "(I)F", 1 },
	{ "getAncestor", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_getAncestor_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode, VTABLE_mindustry_ui_layout_BranchTreeLayout_getAncestor_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode, "(Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;", 2 },
	{ "getDistance", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_getDistance_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float, VTABLE_mindustry_ui_layout_BranchTreeLayout_getDistance_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_float, "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)F", 2 },
	{ "nextLeft", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_nextLeft_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode, VTABLE_mindustry_ui_layout_BranchTreeLayout_nextLeft_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode, "(Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;", 2 },
	{ "nextRight", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_nextRight_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode, VTABLE_mindustry_ui_layout_BranchTreeLayout_nextRight_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode, "(Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;", 2 },
	{ "getNumber", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_getNumber_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_int, VTABLE_mindustry_ui_layout_BranchTreeLayout_getNumber_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_int, "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)I", 2 },
	{ "ancestor", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_ancestor_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode, VTABLE_mindustry_ui_layout_BranchTreeLayout_ancestor_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode, "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;", 2 },
	{ "moveSubtree", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_moveSubtree_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_float, VTABLE_mindustry_ui_layout_BranchTreeLayout_moveSubtree_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_float, "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;F)V", 2 },
	{ "apportion", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_apportion_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode, VTABLE_mindustry_ui_layout_BranchTreeLayout_apportion_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode_R_mindustry_ui_layout_TreeLayout$TreeNode, "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)Lmindustry/ui/layout/TreeLayout$TreeNode;", 2 },
	{ "executeShifts", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_executeShifts_mindustry_ui_layout_TreeLayout$TreeNode, VTABLE_mindustry_ui_layout_BranchTreeLayout_executeShifts_mindustry_ui_layout_TreeLayout$TreeNode, "(Lmindustry/ui/layout/TreeLayout$TreeNode;)V", 2 },
	{ "firstWalk", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_firstWalk_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode, VTABLE_mindustry_ui_layout_BranchTreeLayout_firstWalk_mindustry_ui_layout_TreeLayout$TreeNode_mindustry_ui_layout_TreeLayout$TreeNode, "(Lmindustry/ui/layout/TreeLayout$TreeNode;Lmindustry/ui/layout/TreeLayout$TreeNode;)V", 2 },
	{ "secondWalk", (intptr_t) M_mindustry_ui_layout_BranchTreeLayout_secondWalk_mindustry_ui_layout_TreeLayout$TreeNode_float_int_float, VTABLE_mindustry_ui_layout_BranchTreeLayout_secondWalk_mindustry_ui_layout_TreeLayout$TreeNode_float_int_float, "(Lmindustry/ui/layout/TreeLayout$TreeNode;FIF)V", 2 },
};

Class class_mindustry_ui_layout_BranchTreeLayout{
		.nativeName = (intptr_t) "mindustry/ui/layout/BranchTreeLayout",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_layout_BranchTreeLayout),
		.classVtable = (intptr_t) vtable_mindustry_ui_layout_BranchTreeLayout,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_layout_BranchTreeLayout,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_layout_BranchTreeLayout,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_layout_BranchTreeLayout = registerClass(&class_mindustry_ui_layout_BranchTreeLayout);

}
