#include "arc/math/geom/QuadTree.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/math/geom/QuadTree_QuadTreeObject.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/struct/Seq.h"
#include "arc/math/geom/Rect.h"
#include "arc/func/Boolf.h"

extern "C" {

jfloat SF_arc_math_geom_QuadTree_minNodeSize;
jint SF_arc_math_geom_QuadTree_maxObjectsPerNode;

void mark_arc_math_geom_QuadTree(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_geom_QuadTree *) object;
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
	if (self->F_bounds)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bounds)->clazz)->markFunction)((jobject) self->F_bounds, mark, depth + 1);
	if (self->F_objects)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_objects)->clazz)->markFunction)((jobject) self->F_objects, mark, depth + 1);
	if (self->F_botLeft)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_botLeft)->clazz)->markFunction)((jobject) self->F_botLeft, mark, depth + 1);
	if (self->F_botRight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_botRight)->clazz)->markFunction)((jobject) self->F_botRight, mark, depth + 1);
	if (self->F_topLeft)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_topLeft)->clazz)->markFunction)((jobject) self->F_topLeft, mark, depth + 1);
	if (self->F_topRight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_topRight)->clazz)->markFunction)((jobject) self->F_topRight, mark, depth + 1);
	if (self->F_fillBL)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fillBL)->clazz)->markFunction)((jobject) self->F_fillBL, mark, depth + 1);
	if (self->F_fillBR)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fillBR)->clazz)->markFunction)((jobject) self->F_fillBR, mark, depth + 1);
	if (self->F_fillTL)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fillTL)->clazz)->markFunction)((jobject) self->F_fillTL, mark, depth + 1);
	if (self->F_fillTR)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fillTR)->clazz)->markFunction)((jobject) self->F_fillTR, mark, depth + 1);
}

void clinit_arc_math_geom_QuadTree(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_math_geom_QuadTree_minNodeSize = jfloat(10.0f);
	SF_arc_math_geom_QuadTree_maxObjectsPerNode = jint(5);
}

void init_arc_math_geom_QuadTree_arc_math_geom_Rect(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_QuadTree(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_objects = (jref) sp[1].o;
	LINE_NUMBER(25);
	((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf = (jint(1));
	LINE_NUMBER(32);
	((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds = (jref) (frame[1].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_QuadTree_split(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:split", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width), (jfloat(10.0f)), 1)) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height), (jfloat(10.0f)), 1)) > 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	frame[1].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(2)));
	LINE_NUMBER(39);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	frame[2].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(2)));
	LINE_NUMBER(41);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_x;
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp0, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_y), (frame[1].f), (frame[2].f));
	sp[1].o = (jobject)((func_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree])(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_botLeft = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp1 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_x) + (frame[1].f);
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp1, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_y), (frame[1].f), (frame[2].f));
	sp[1].o = (jobject)((func_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree])(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_botRight = (jref) sp[1].o;
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_x;
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp2, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_y) + (frame[2].f)), (frame[1].f), (frame[2].f));
	sp[1].o = (jobject)((func_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree])(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_topLeft = (jref) sp[1].o;
	LINE_NUMBER(45);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp3 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_x) + (frame[1].f);
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp3, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_y) + (frame[2].f)), (frame[1].f), (frame[2].f));
	sp[1].o = (jobject)((func_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree])(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_topRight = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(47);
	((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf = (jint(0));
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(52);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[4].i;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_13;
	}
	{
	LINE_NUMBER(53);
	frame[5].o = (checkCast(ctx, &class_arc_math_geom_QuadTree$QuadTreeObject, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))));
	LINE_NUMBER(54);
	((func_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(56);
	if ((frame[6].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(57);
	((func_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, (frame[6].o), (frame[5].o));
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(59);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[2].o))->F_size)));
	LINE_NUMBER(60);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)) = (jobject(nullptr));
	LINE_NUMBER(61);
	INST_IINC(4, -1);
	}
label_18:;
	{
	LINE_NUMBER(52);
	INST_IINC(4, 1);
	goto label_12;
	}
label_13:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_geom_QuadTree_unsplit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:unsplit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[1].o))->F_objects;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(69);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[1].o))->F_objects;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(70);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[1].o))->F_objects;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(71);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[1].o))->F_objects;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	((func_arc_math_geom_QuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	((func_arc_math_geom_QuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	((func_arc_math_geom_QuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	((func_arc_math_geom_QuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(76);
	((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf = (jint(1));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(83);
	((func_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(84);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	LINE_NUMBER(87);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_totalObjects = (((jint)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_totalObjects) + (jint(1)));
	LINE_NUMBER(92);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	if ((((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) + (jint(1))) <= (jint(5))) goto label_5;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_math_geom_QuadTree_split) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_split])(ctx, sp[0].o);
label_5:;
	{
	LINE_NUMBER(94);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) == 0) goto label_6;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(98);
	((func_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(100);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(101);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(102);
	((func_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject])(ctx, (frame[2].o), (frame[1].o));
	goto label_8;
	}
label_11:;
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_8:;
	LINE_NUMBER(107);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_geom_QuadTree_fill_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:fill", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(111);
	((func_arc_math_geom_QuadTree_clear) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_QuadTree_clear])(ctx, (frame[0].o));
	LINE_NUMBER(112);
	((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_totalObjects = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(114);
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) <= (jint(5))) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width), (jfloat(10.0f)), 1)) <= 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height), (jfloat(10.0f)), 1)) > 0) goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}
label_4:;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	if (sp[0].o != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	frame[2].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(2)));
	LINE_NUMBER(121);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	frame[3].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(2)));
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_x;
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp0, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_y), (frame[2].f), (frame[3].f));
	sp[1].o = (jobject)((func_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree])(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_botLeft = (jref) sp[1].o;
	LINE_NUMBER(123);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp1 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_x) + (frame[2].f);
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp1, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_y), (frame[2].f), (frame[3].f));
	sp[1].o = (jobject)((func_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree])(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_botRight = (jref) sp[1].o;
	LINE_NUMBER(124);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_x;
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp2, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_y) + (frame[3].f)), (frame[2].f), (frame[3].f));
	sp[1].o = (jobject)((func_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree])(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_topLeft = (jref) sp[1].o;
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp3 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_x) + (frame[2].f);
	sp[3].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp3, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_y) + (frame[3].f)), (frame[2].f), (frame[3].f));
	sp[1].o = (jobject)((func_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree])(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_topRight = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(127);
	((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf = (jint(0));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_fillBL;
	if (sp[0].o != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_fillBL = (jref) sp[1].o;
	LINE_NUMBER(131);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_fillBR = (jref) sp[1].o;
	LINE_NUMBER(132);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_fillTL = (jref) sp[1].o;
	LINE_NUMBER(133);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean(ctx, sp[1].o, (jint(0)));
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_fillTR = (jref) sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_fillBL;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_fillBR;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(137);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_fillTL;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_fillTR;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(140);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(141);
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(144);
	frame[4].i = (jint(0));
	}
label_25:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_26;
	}
	{
	LINE_NUMBER(145);
	frame[5].o = (checkCast(ctx, &class_arc_math_geom_QuadTree$QuadTreeObject, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)))));
	LINE_NUMBER(146);
	((func_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(149);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	if (sp[0].o != sp[1].o) goto label_31;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_fillBL;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	goto label_32;
	}
label_31:;
	{
	LINE_NUMBER(150);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	if (sp[0].o != sp[1].o) goto label_33;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_fillBR;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	goto label_32;
	}
label_33:;
	{
	LINE_NUMBER(151);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	if (sp[0].o != sp[1].o) goto label_34;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_fillTL;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	goto label_32;
	}
label_34:;
	{
	LINE_NUMBER(152);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	if (sp[0].o != sp[1].o) goto label_35;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_fillTR;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	goto label_32;
	}
label_35:;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_32:;
	{
	LINE_NUMBER(144);
	INST_IINC(4, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_fillBL;
	((func_arc_math_geom_QuadTree_fill_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_fill_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_fillBR;
	((func_arc_math_geom_QuadTree_fill_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_fill_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(158);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_fillTL;
	((func_arc_math_geom_QuadTree_fill_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_fill_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(159);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_fillTR;
	((func_arc_math_geom_QuadTree_fill_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_fill_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(167);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) == 0) goto label_1;
	}
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	frame[2].i = temp0;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(172);
	((func_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(173);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(175);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(176);
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	frame[2].i = temp0;
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	frame[2].i = temp0;
	}
label_10:;
	{
	LINE_NUMBER(182);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_totalObjects) > (jint(5))) goto label_4;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_math_geom_QuadTree_unsplit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_unsplit])(ctx, sp[0].o);
label_4:;
	{
	LINE_NUMBER(184);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(185);
	sp[0].o = frame[0].o;
	((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_totalObjects = (((jint)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_totalObjects) - (jint(1)));
	}
label_11:;
	{
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_QuadTree_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(193);
	((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_totalObjects = (jint(0));
	LINE_NUMBER(194);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) != 0) goto label_3;
	}
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	((func_arc_math_geom_QuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(196);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	((func_arc_math_geom_QuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	((func_arc_math_geom_QuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(198);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	((func_arc_math_geom_QuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_clear])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(200);
	((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf = (jint(1));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:getFittingChild", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	frame[2].f = (temp0 + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(2))));
	LINE_NUMBER(205);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	frame[3].f = (temp1 + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(2))));
	LINE_NUMBER(208);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y), (frame[3].f), -1)) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(210);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y), (frame[3].f), 1)) >= 0) goto label_6;
	}
	{
	if ((floatCompare((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height)), (frame[3].f), 1)) >= 0) goto label_6;
	}
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(213);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x), (frame[2].f), 1)) >= 0) goto label_9;
	}
	{
	if ((floatCompare((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width)), (frame[2].f), 1)) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(214);
	if ((frame[4].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(216);
	if ((frame[5].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(217);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(219);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x), (frame[2].f), -1)) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(220);
	if ((frame[4].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(222);
	if ((frame[5].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:intersect", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(237);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) != 0) goto label_1;
	}
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_3:;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_4:;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_5:;
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_1:;
	{
	LINE_NUMBER(244);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	frame[6].o = sp[0].o;
	LINE_NUMBER(246);
	frame[7].i = (jint(0));
	}
label_7:;
	{
	if ((frame[7].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_items;
	frame[8].o = (checkCast(ctx, &class_arc_math_geom_QuadTree$QuadTreeObject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)))));
	LINE_NUMBER(248);
	((func_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject])(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(249);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(250);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o), (frame[8].o));
	}
label_12:;
	{
	LINE_NUMBER(246);
	INST_IINC(7, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(253);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:intersect", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(261);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) != 0) goto label_1;
	}
	{
	LINE_NUMBER(262);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(264);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	frame[6].o = sp[0].o;
	LINE_NUMBER(270);
	frame[7].i = (jint(0));
	}
label_7:;
	{
	if ((frame[7].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_items;
	frame[8].o = (checkCast(ctx, &class_arc_math_geom_QuadTree$QuadTreeObject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)))));
	LINE_NUMBER(272);
	((func_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject])(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(273);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_12;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[5].o)))(ctx, (frame[5].o), (frame[8].o));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(270);
	INST_IINC(7, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:find", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(286);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) != 0) goto label_1;
	}
	{
	LINE_NUMBER(288);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	sp[0].o = (jobject)((func_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_3;
	}
	INST_ALOAD(6);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	sp[0].o = (jobject)((func_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_5;
	}
	INST_ALOAD(6);
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	sp[0].o = (jobject)((func_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_7;
	}
	INST_ALOAD(6);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	sp[0].o = (jobject)((func_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	frame[6].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ALOAD(6);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	frame[6].o = sp[0].o;
	LINE_NUMBER(296);
	frame[7].i = (jint(0));
	}
label_11:;
	{
	if ((frame[7].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_12;
	}
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_items;
	frame[8].o = (checkCast(ctx, &class_arc_math_geom_QuadTree$QuadTreeObject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)))));
	LINE_NUMBER(298);
	((func_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject])(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(299);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_16;
	}
	{
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[5].o)))(ctx, (frame[5].o), (frame[8].o));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return (frame[8].o);
	}
label_16:;
	{
	LINE_NUMBER(296);
	INST_IINC(7, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:any", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(311);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) != 0) goto label_1;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	frame[5].o = sp[0].o;
	LINE_NUMBER(320);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	if ((frame[6].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[5].o)))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[5].o)))->F_items;
	frame[7].o = (checkCast(ctx, &class_arc_math_geom_QuadTree$QuadTreeObject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i)))));
	LINE_NUMBER(322);
	((func_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject])(ctx, (frame[0].o), (frame[7].o));
	LINE_NUMBER(323);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(324);
	popStackFrame(ctx);
	return (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(320);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(327);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:intersect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(336);
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height), (frame[2].o));
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:intersect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(345);
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height), (frame[2].o));
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:intersect", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(352);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) != 0) goto label_1;
	}
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_3:;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_4:;
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_5:;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_1:;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	frame[6].o = sp[0].o;
	LINE_NUMBER(361);
	frame[7].i = (jint(0));
	}
label_7:;
	{
	if ((frame[7].i) >= ((jint)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[6].o)))->F_items;
	frame[8].o = (checkCast(ctx, &class_arc_math_geom_QuadTree$QuadTreeObject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)))));
	LINE_NUMBER(363);
	((func_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject])(ctx, (frame[0].o), (frame[8].o));
	LINE_NUMBER(364);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[5].o), (frame[8].o));
	}
label_12:;
	{
	LINE_NUMBER(361);
	INST_IINC(7, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(368);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_geom_QuadTree_getObjects_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:getObjects", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(372);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(374);
	if (((jint)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) != 0) goto label_2;
	}
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	((func_arc_math_geom_QuadTree_getObjects_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_getObjects_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(376);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	((func_arc_math_geom_QuadTree_getObjects_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_getObjects_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(377);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	((func_arc_math_geom_QuadTree_getObjects_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_getObjects_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(378);
	sp[0].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	((func_arc_math_geom_QuadTree_getObjects_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_getObjects_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(380);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:newChild", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(383);
	clinit_arc_math_geom_QuadTree(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_QuadTree);
	init_arc_math_geom_QuadTree_arc_math_geom_Rect(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/QuadTree:hitbox", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(387);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_QuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	((func_arc_math_geom_QuadTree$QuadTreeObject_hitbox_arc_math_geom_Rect) resolveInterfaceMethod(ctx, &class_arc_math_geom_QuadTree$QuadTreeObject, INDEX_arc_math_geom_QuadTree$QuadTreeObject_hitbox_arc_math_geom_Rect, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_QuadTree[] {
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
	(void *) M_arc_math_geom_QuadTree_split,
	(void *) M_arc_math_geom_QuadTree_unsplit,
	(void *) M_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject,
	(void *) M_arc_math_geom_QuadTree_fill_arc_struct_Seq,
	(void *) M_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean,
	(void *) M_arc_math_geom_QuadTree_clear,
	(void *) M_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree,
	(void *) M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons,
	(void *) M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean,
	(void *) M_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject,
	(void *) M_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean,
	(void *) M_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons,
	(void *) M_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq,
	(void *) M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq,
	(void *) M_arc_math_geom_QuadTree_getObjects_arc_struct_Seq,
	(void *) M_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree,
	(void *) M_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject,
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
	{ "split", "()V" },
	{ "unsplit", "()V" },
	{ "insert", "(Larc/math/geom/QuadTree$QuadTreeObject;)V" },
	{ "fill", "(Larc/struct/Seq;)V" },
	{ "remove", "(Larc/math/geom/QuadTree$QuadTreeObject;)Z" },
	{ "clear", "()V" },
	{ "getFittingChild", "(Larc/math/geom/Rect;)Larc/math/geom/QuadTree;" },
	{ "intersect", "(FFFFLarc/func/Cons;)V" },
	{ "intersect", "(FFFFLarc/func/Boolf;)Z" },
	{ "find", "(FFFFLarc/func/Boolf;)Larc/math/geom/QuadTree$QuadTreeObject;" },
	{ "any", "(FFFF)Z" },
	{ "intersect", "(Larc/math/geom/Rect;Larc/func/Cons;)V" },
	{ "intersect", "(Larc/math/geom/Rect;Larc/struct/Seq;)V" },
	{ "intersect", "(FFFFLarc/struct/Seq;)V" },
	{ "getObjects", "(Larc/struct/Seq;)V" },
	{ "newChild", "(Larc/math/geom/Rect;)Larc/math/geom/QuadTree;" },
	{ "hitbox", "(Larc/math/geom/QuadTree$QuadTreeObject;)V" },
};

static jclass innerClasses[] {
	&class_arc_math_geom_QuadTree$QuadTreeObject,
};

static FieldMetadata fields[] {
	{ "tmp", &class_arc_math_geom_Rect, offsetof(arc_math_geom_QuadTree, F_tmp), "Larc/math/geom/Rect;", 20 },
	{ "minNodeSize", &class_float, (intptr_t) &SF_arc_math_geom_QuadTree_minNodeSize, "F", 28 },
	{ "maxObjectsPerNode", &class_int, (intptr_t) &SF_arc_math_geom_QuadTree_maxObjectsPerNode, "I", 28 },
	{ "bounds", &class_arc_math_geom_Rect, offsetof(arc_math_geom_QuadTree, F_bounds), "Larc/math/geom/Rect;", 1 },
	{ "objects", &class_arc_struct_Seq, offsetof(arc_math_geom_QuadTree, F_objects), "Larc/struct/Seq;", 1 },
	{ "botLeft", &class_arc_math_geom_QuadTree, offsetof(arc_math_geom_QuadTree, F_botLeft), "Larc/math/geom/QuadTree;", 1 },
	{ "botRight", &class_arc_math_geom_QuadTree, offsetof(arc_math_geom_QuadTree, F_botRight), "Larc/math/geom/QuadTree;", 1 },
	{ "topLeft", &class_arc_math_geom_QuadTree, offsetof(arc_math_geom_QuadTree, F_topLeft), "Larc/math/geom/QuadTree;", 1 },
	{ "topRight", &class_arc_math_geom_QuadTree, offsetof(arc_math_geom_QuadTree, F_topRight), "Larc/math/geom/QuadTree;", 1 },
	{ "leaf", &class_boolean, offsetof(arc_math_geom_QuadTree, F_leaf), "Z", 1 },
	{ "totalObjects", &class_int, offsetof(arc_math_geom_QuadTree, F_totalObjects), "I", 1 },
	{ "fillBL", &class_arc_struct_Seq, offsetof(arc_math_geom_QuadTree, F_fillBL), "Larc/struct/Seq;", 2 },
	{ "fillBR", &class_arc_struct_Seq, offsetof(arc_math_geom_QuadTree, F_fillBR), "Larc/struct/Seq;", 2 },
	{ "fillTL", &class_arc_struct_Seq, offsetof(arc_math_geom_QuadTree, F_fillTL), "Larc/struct/Seq;", 2 },
	{ "fillTR", &class_arc_struct_Seq, offsetof(arc_math_geom_QuadTree, F_fillTR), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_QuadTree_arc_math_geom_Rect, 0, "(Larc/math/geom/Rect;)V", 1 },
	{ "split", (intptr_t) M_arc_math_geom_QuadTree_split, VTABLE_arc_math_geom_QuadTree_split, "()V", 4 },
	{ "unsplit", (intptr_t) M_arc_math_geom_QuadTree_unsplit, VTABLE_arc_math_geom_QuadTree_unsplit, "()V", 4 },
	{ "insert", (intptr_t) M_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject, VTABLE_arc_math_geom_QuadTree_insert_arc_math_geom_QuadTree$QuadTreeObject, "(Larc/math/geom/QuadTree$QuadTreeObject;)V", 1 },
	{ "fill", (intptr_t) M_arc_math_geom_QuadTree_fill_arc_struct_Seq, VTABLE_arc_math_geom_QuadTree_fill_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "remove", (intptr_t) M_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean, VTABLE_arc_math_geom_QuadTree_remove_arc_math_geom_QuadTree$QuadTreeObject_R_boolean, "(Larc/math/geom/QuadTree$QuadTreeObject;)Z", 1 },
	{ "clear", (intptr_t) M_arc_math_geom_QuadTree_clear, VTABLE_arc_math_geom_QuadTree_clear, "()V", 1 },
	{ "getFittingChild", (intptr_t) M_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree, VTABLE_arc_math_geom_QuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree, "(Larc/math/geom/Rect;)Larc/math/geom/QuadTree;", 4 },
	{ "intersect", (intptr_t) M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons, VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons, "(FFFFLarc/func/Cons;)V", 1 },
	{ "intersect", (intptr_t) M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean, VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean, "(FFFFLarc/func/Boolf;)Z", 1 },
	{ "find", (intptr_t) M_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject, VTABLE_arc_math_geom_QuadTree_find_float_float_float_float_arc_func_Boolf_R_arc_math_geom_QuadTree$QuadTreeObject, "(FFFFLarc/func/Boolf;)Larc/math/geom/QuadTree$QuadTreeObject;", 1 },
	{ "any", (intptr_t) M_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean, VTABLE_arc_math_geom_QuadTree_any_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "intersect", (intptr_t) M_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons, VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_func_Cons, "(Larc/math/geom/Rect;Larc/func/Cons;)V", 1 },
	{ "intersect", (intptr_t) M_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq, VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq, "(Larc/math/geom/Rect;Larc/struct/Seq;)V", 1 },
	{ "intersect", (intptr_t) M_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq, VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_struct_Seq, "(FFFFLarc/struct/Seq;)V", 1 },
	{ "getObjects", (intptr_t) M_arc_math_geom_QuadTree_getObjects_arc_struct_Seq, VTABLE_arc_math_geom_QuadTree_getObjects_arc_struct_Seq, "(Larc/struct/Seq;)V", 1 },
	{ "newChild", (intptr_t) M_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree, VTABLE_arc_math_geom_QuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_QuadTree, "(Larc/math/geom/Rect;)Larc/math/geom/QuadTree;", 4 },
	{ "hitbox", (intptr_t) M_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject, VTABLE_arc_math_geom_QuadTree_hitbox_arc_math_geom_QuadTree$QuadTreeObject, "(Larc/math/geom/QuadTree$QuadTreeObject;)V", 4 },
};

Class class_arc_math_geom_QuadTree{
		.nativeName = (intptr_t) "arc/math/geom/QuadTree",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_QuadTree),
		.classVtable = (intptr_t) vtable_arc_math_geom_QuadTree,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_QuadTree,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_QuadTree,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 18,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_QuadTree = registerClass(&class_arc_math_geom_QuadTree);

}
