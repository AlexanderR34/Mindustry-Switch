#include "arc/math/geom/IntQuadTree.h"
#include "arc/func/Intc.h"
#include "java/lang/Object.h"
#include "arc/math/geom/IntQuadTree_IntQuadTreeProvider.h"
#include "arc/math/geom/Rect.h"
#include "arc/math/geom/IntQuadTree.h"
#include "arc/struct/IntSeq.h"

extern "C" {

jint SF_arc_math_geom_IntQuadTree_maxObjectsPerNode;

void mark_arc_math_geom_IntQuadTree(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_geom_IntQuadTree *) object;
	if (self->F_tmp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmp)->clazz)->markFunction)((jobject) self->F_tmp, mark, depth + 1);
	if (self->F_prov)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prov)->clazz)->markFunction)((jobject) self->F_prov, mark, depth + 1);
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
}

void clinit_arc_math_geom_IntQuadTree(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_arc_math_geom_IntQuadTree_maxObjectsPerNode = jint(5);
}

void init_arc_math_geom_IntQuadTree_arc_math_geom_Rect_arc_math_geom_IntQuadTree$IntQuadTreeProvider(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_IntQuadTree(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(7);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_tmp = (jref) sp[1].o;
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_boolean_int(ctx, sp[1].o, (jint(0)), (10));
	((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_objects = (jref) sp[1].o;
	LINE_NUMBER(14);
	((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf = (jint(1));
	LINE_NUMBER(18);
	((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds = (jref) (frame[1].o);
	LINE_NUMBER(19);
	((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_prov = (jref) (frame[2].o);
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_IntQuadTree_split(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:split", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(23);
	if (((jint)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	frame[1].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(2)));
	LINE_NUMBER(26);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	frame[2].f = (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(2)));
	LINE_NUMBER(28);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	sp[3].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_x;
	sp[3].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp0, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_y), (frame[1].f), (frame[2].f));
	sp[1].o = (jobject)((func_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree])(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_botLeft = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	sp[3].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp1 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_x) + (frame[1].f);
	sp[3].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp1, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_y), (frame[1].f), (frame[2].f));
	sp[1].o = (jobject)((func_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree])(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_botRight = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	sp[3].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp2 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_x;
	sp[3].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp2, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_y) + (frame[2].f)), (frame[1].f), (frame[2].f));
	sp[1].o = (jobject)((func_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree])(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_topLeft = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	sp[3].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp3 = ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_x) + (frame[1].f);
	sp[3].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, temp3, (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[3].o))->F_y) + (frame[2].f)), (frame[1].f), (frame[2].f));
	sp[1].o = (jobject)((func_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree])(ctx, sp[1].o, sp[2].o);
	((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_topRight = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(34);
	((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf = (jint(0));
	LINE_NUMBER(37);
	frame[3].i = (jint(0));
	}
label_10:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_11;
	}
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)));
	LINE_NUMBER(39);
	((func_arc_math_geom_IntQuadTree_hitbox_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_hitbox_int])(ctx, (frame[0].o), (frame[4].i));
	LINE_NUMBER(40);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_IntQuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree])(ctx, sp[0].o, sp[1].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(41);
	if ((frame[5].o) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(42);
	((func_arc_math_geom_IntQuadTree_insert_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_insert_int])(ctx, (frame[5].o), (frame[4].i));
	LINE_NUMBER(43);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeIndex_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeIndex_int_R_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(44);
	INST_IINC(3, -1);
	}
label_16:;
	{
	LINE_NUMBER(37);
	INST_IINC(3, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(47);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_geom_IntQuadTree_unsplit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:unsplit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	if (((jint)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[1].o))->F_objects;
	((func_arc_struct_IntSeq_addAll_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_addAll_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[1].o))->F_objects;
	((func_arc_struct_IntSeq_addAll_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_addAll_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(53);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[1].o))->F_objects;
	((func_arc_struct_IntSeq_addAll_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_addAll_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[1].o))->F_objects;
	((func_arc_struct_IntSeq_addAll_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_addAll_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	((func_arc_math_geom_IntQuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	((func_arc_math_geom_IntQuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(57);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	((func_arc_math_geom_IntQuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	((func_arc_math_geom_IntQuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(59);
	((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf = (jint(1));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_IntQuadTree_insert_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:insert", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(66);
	((func_arc_math_geom_IntQuadTree_hitbox_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_hitbox_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	LINE_NUMBER(70);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_totalObjects = (((jint)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_totalObjects) + (jint(1)));
	LINE_NUMBER(75);
	if (((jint)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	if ((((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size) + (jint(1))) <= (jint(5))) goto label_5;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_math_geom_IntQuadTree_split) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_split])(ctx, sp[0].o);
label_5:;
	{
	LINE_NUMBER(77);
	if (((jint)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) == 0) goto label_6;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[1].i));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(81);
	((func_arc_math_geom_IntQuadTree_hitbox_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_hitbox_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_IntQuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(84);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(85);
	((func_arc_math_geom_IntQuadTree_insert_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_insert_int])(ctx, (frame[2].o), (frame[1].i));
	goto label_8;
	}
label_11:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (frame[1].i));
	}
label_8:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_math_geom_IntQuadTree_remove_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(97);
	if (((jint)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) == 0) goto label_1;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	frame[2].i = temp0;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(102);
	((func_arc_math_geom_IntQuadTree_hitbox_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_hitbox_int])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	sp[0].o = (jobject)((func_arc_math_geom_IntQuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(105);
	if ((frame[3].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(106);
	jint temp0 = (jint)((func_arc_math_geom_IntQuadTree_remove_int_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_remove_int_R_boolean])(ctx, (frame[3].o), (frame[1].i));
	frame[2].i = temp0;
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	jint temp0 = (jint)((func_arc_struct_IntSeq_removeValue_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_removeValue_int_R_boolean])(ctx, sp[0].o, (frame[1].i));
	frame[2].i = temp0;
	}
label_10:;
	{
	LINE_NUMBER(112);
	if (((jint)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_totalObjects) > (jint(5))) goto label_4;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_arc_math_geom_IntQuadTree_unsplit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_unsplit])(ctx, sp[0].o);
label_4:;
	{
	LINE_NUMBER(114);
	if ((frame[2].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_totalObjects = (((jint)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_totalObjects) - (jint(1)));
	}
label_11:;
	{
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_IntQuadTree_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	((func_arc_struct_IntSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(123);
	((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_totalObjects = (jint(0));
	LINE_NUMBER(124);
	if (((jint)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) != 0) goto label_3;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	((func_arc_math_geom_IntQuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(126);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	((func_arc_math_geom_IntQuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(127);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	((func_arc_math_geom_IntQuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_clear])(ctx, sp[0].o);
	LINE_NUMBER(128);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	((func_arc_math_geom_IntQuadTree_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_clear])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(130);
	((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf = (jint(1));
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_IntQuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:getFittingChild", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp0 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	frame[2].f = (temp0 + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width) / (jfloat(2))));
	LINE_NUMBER(135);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	jfloat temp1 = (jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_bounds;
	frame[3].f = (temp1 + (((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height) / (jfloat(2))));
	LINE_NUMBER(138);
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
	LINE_NUMBER(140);
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
	LINE_NUMBER(143);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x), (frame[2].f), 1)) >= 0) goto label_9;
	}
	{
	if ((floatCompare((((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x) + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width)), (frame[2].f), 1)) >= 0) goto label_9;
	}
	{
	LINE_NUMBER(144);
	if ((frame[4].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(146);
	if ((frame[5].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(149);
	if ((floatCompare(((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x), (frame[2].f), -1)) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(150);
	if ((frame[4].i) == 0) goto label_16;
	}
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(152);
	if ((frame[5].i) == 0) goto label_13;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(158);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:intersect", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(167);
	if (((jint)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) != 0) goto label_1;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	((func_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_3:;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	((func_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_4:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	((func_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_5:;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	((func_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_1:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	frame[6].o = sp[0].o;
	LINE_NUMBER(176);
	frame[7].i = (jint(0));
	}
label_7:;
	{
	if ((frame[7].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[6].o)))->F_items;
	frame[8].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i)));
	LINE_NUMBER(178);
	((func_arc_math_geom_IntQuadTree_hitbox_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_hitbox_int])(ctx, (frame[0].o), (frame[8].i));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(180);
	((func_arc_func_Intc_get_int) resolveInterfaceMethod(ctx, &class_arc_func_Intc, INDEX_arc_func_Intc_get_int, (frame[5].o)))(ctx, (frame[5].o), (frame[8].i));
	}
label_12:;
	{
	LINE_NUMBER(176);
	INST_IINC(7, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(183);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:any", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(190);
	if (((jint)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) != 0) goto label_1;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	jint temp0 = (jint)((func_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	jint temp0 = (jint)((func_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	jint temp0 = (jint)((func_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_5;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	jint temp0 = (jint)((func_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	frame[5].o = sp[0].o;
	LINE_NUMBER(199);
	frame[6].i = (jint(0));
	}
label_7:;
	{
	if ((frame[6].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[5].o)))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[5].o)))->F_items;
	frame[7].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i)));
	LINE_NUMBER(201);
	((func_arc_math_geom_IntQuadTree_hitbox_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_hitbox_int])(ctx, (frame[0].o), (frame[7].i));
	LINE_NUMBER(202);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return (jint(1));
	}
label_12:;
	{
	LINE_NUMBER(199);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_func_Intc(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:intersect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(215);
	((func_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height), (frame[2].o));
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:intersect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(224);
	((func_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq])(ctx, (frame[0].o), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_width), ((jfloat)((arc_math_geom_Rect *) NULL_CHECK((frame[1].o)))->F_height), (frame[2].o));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:intersect", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(231);
	if (((jint)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) != 0) goto label_1;
	}
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	((func_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_3:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	((func_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_4:;
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	((func_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_5:;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK(sp[0].o))->F_bounds;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	((func_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	}
label_1:;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	frame[6].o = sp[0].o;
	LINE_NUMBER(240);
	frame[7].i = (jint(0));
	}
label_7:;
	{
	if ((frame[7].i) >= ((jint)((arc_struct_IntSeq *) NULL_CHECK((frame[6].o)))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(241);
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK((frame[6].o)))->F_items;
	frame[8].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[7].i)));
	LINE_NUMBER(242);
	((func_arc_math_geom_IntQuadTree_hitbox_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_IntQuadTree_hitbox_int])(ctx, (frame[0].o), (frame[8].i));
	LINE_NUMBER(243);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	jint temp0 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	if (temp0 == 0) goto label_12;
	}
	{
	LINE_NUMBER(244);
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, (frame[5].o), (frame[8].i));
	}
label_12:;
	{
	LINE_NUMBER(240);
	INST_IINC(7, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(247);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:getObjects", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(251);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_objects;
	((func_arc_struct_IntSeq_addAll_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_addAll_arc_struct_IntSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(253);
	if (((jint)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_leaf) != 0) goto label_2;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topLeft;
	((func_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(255);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_topRight;
	((func_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(256);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botLeft;
	((func_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(257);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_botRight;
	((func_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq])(ctx, sp[0].o, (frame[1].o));
	}
label_2:;
	LINE_NUMBER(259);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:newChild", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(262);
	clinit_arc_math_geom_IntQuadTree(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_IntQuadTree);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_prov;
	init_arc_math_geom_IntQuadTree_arc_math_geom_Rect_arc_math_geom_IntQuadTree$IntQuadTreeProvider(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_IntQuadTree_hitbox_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/IntQuadTree:hitbox", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_prov;
	jint temp0 = frame[1].i;
	sp[1].o = (jobject)((arc_math_geom_IntQuadTree *) NULL_CHECK((frame[0].o)))->F_tmp;
	((func_arc_math_geom_IntQuadTree$IntQuadTreeProvider_hitbox_int_arc_math_geom_Rect) resolveInterfaceMethod(ctx, &class_arc_math_geom_IntQuadTree$IntQuadTreeProvider, INDEX_arc_math_geom_IntQuadTree$IntQuadTreeProvider_hitbox_int_arc_math_geom_Rect, sp[0].o))(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_IntQuadTree[] {
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
	(void *) M_arc_math_geom_IntQuadTree_split,
	(void *) M_arc_math_geom_IntQuadTree_unsplit,
	(void *) M_arc_math_geom_IntQuadTree_insert_int,
	(void *) M_arc_math_geom_IntQuadTree_remove_int_R_boolean,
	(void *) M_arc_math_geom_IntQuadTree_clear,
	(void *) M_arc_math_geom_IntQuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree,
	(void *) M_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc,
	(void *) M_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean,
	(void *) M_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_func_Intc,
	(void *) M_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_struct_IntSeq,
	(void *) M_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq,
	(void *) M_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq,
	(void *) M_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree,
	(void *) M_arc_math_geom_IntQuadTree_hitbox_int,
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
	{ "insert", "(I)V" },
	{ "remove", "(I)Z" },
	{ "clear", "()V" },
	{ "getFittingChild", "(Larc/math/geom/Rect;)Larc/math/geom/IntQuadTree;" },
	{ "intersect", "(FFFFLarc/func/Intc;)V" },
	{ "any", "(FFFF)Z" },
	{ "intersect", "(Larc/math/geom/Rect;Larc/func/Intc;)V" },
	{ "intersect", "(Larc/math/geom/Rect;Larc/struct/IntSeq;)V" },
	{ "intersect", "(FFFFLarc/struct/IntSeq;)V" },
	{ "getObjects", "(Larc/struct/IntSeq;)V" },
	{ "newChild", "(Larc/math/geom/Rect;)Larc/math/geom/IntQuadTree;" },
	{ "hitbox", "(I)V" },
};

static jclass innerClasses[] {
	&class_arc_math_geom_IntQuadTree$IntQuadTreeProvider,
};

static FieldMetadata fields[] {
	{ "tmp", &class_arc_math_geom_Rect, offsetof(arc_math_geom_IntQuadTree, F_tmp), "Larc/math/geom/Rect;", 20 },
	{ "maxObjectsPerNode", &class_int, (intptr_t) &SF_arc_math_geom_IntQuadTree_maxObjectsPerNode, "I", 28 },
	{ "prov", &class_arc_math_geom_IntQuadTree$IntQuadTreeProvider, offsetof(arc_math_geom_IntQuadTree, F_prov), "Larc/math/geom/IntQuadTree$IntQuadTreeProvider;", 1 },
	{ "bounds", &class_arc_math_geom_Rect, offsetof(arc_math_geom_IntQuadTree, F_bounds), "Larc/math/geom/Rect;", 1 },
	{ "objects", &class_arc_struct_IntSeq, offsetof(arc_math_geom_IntQuadTree, F_objects), "Larc/struct/IntSeq;", 1 },
	{ "botLeft", &class_arc_math_geom_IntQuadTree, offsetof(arc_math_geom_IntQuadTree, F_botLeft), "Larc/math/geom/IntQuadTree;", 1 },
	{ "botRight", &class_arc_math_geom_IntQuadTree, offsetof(arc_math_geom_IntQuadTree, F_botRight), "Larc/math/geom/IntQuadTree;", 1 },
	{ "topLeft", &class_arc_math_geom_IntQuadTree, offsetof(arc_math_geom_IntQuadTree, F_topLeft), "Larc/math/geom/IntQuadTree;", 1 },
	{ "topRight", &class_arc_math_geom_IntQuadTree, offsetof(arc_math_geom_IntQuadTree, F_topRight), "Larc/math/geom/IntQuadTree;", 1 },
	{ "leaf", &class_boolean, offsetof(arc_math_geom_IntQuadTree, F_leaf), "Z", 1 },
	{ "totalObjects", &class_int, offsetof(arc_math_geom_IntQuadTree, F_totalObjects), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_IntQuadTree_arc_math_geom_Rect_arc_math_geom_IntQuadTree$IntQuadTreeProvider, 0, "(Larc/math/geom/Rect;Larc/math/geom/IntQuadTree$IntQuadTreeProvider;)V", 1 },
	{ "split", (intptr_t) M_arc_math_geom_IntQuadTree_split, VTABLE_arc_math_geom_IntQuadTree_split, "()V", 4 },
	{ "unsplit", (intptr_t) M_arc_math_geom_IntQuadTree_unsplit, VTABLE_arc_math_geom_IntQuadTree_unsplit, "()V", 4 },
	{ "insert", (intptr_t) M_arc_math_geom_IntQuadTree_insert_int, VTABLE_arc_math_geom_IntQuadTree_insert_int, "(I)V", 1 },
	{ "remove", (intptr_t) M_arc_math_geom_IntQuadTree_remove_int_R_boolean, VTABLE_arc_math_geom_IntQuadTree_remove_int_R_boolean, "(I)Z", 1 },
	{ "clear", (intptr_t) M_arc_math_geom_IntQuadTree_clear, VTABLE_arc_math_geom_IntQuadTree_clear, "()V", 1 },
	{ "getFittingChild", (intptr_t) M_arc_math_geom_IntQuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree, VTABLE_arc_math_geom_IntQuadTree_getFittingChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree, "(Larc/math/geom/Rect;)Larc/math/geom/IntQuadTree;", 4 },
	{ "intersect", (intptr_t) M_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc, VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_func_Intc, "(FFFFLarc/func/Intc;)V", 1 },
	{ "any", (intptr_t) M_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean, VTABLE_arc_math_geom_IntQuadTree_any_float_float_float_float_R_boolean, "(FFFF)Z", 1 },
	{ "intersect", (intptr_t) M_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_func_Intc, VTABLE_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_func_Intc, "(Larc/math/geom/Rect;Larc/func/Intc;)V", 1 },
	{ "intersect", (intptr_t) M_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_struct_IntSeq, VTABLE_arc_math_geom_IntQuadTree_intersect_arc_math_geom_Rect_arc_struct_IntSeq, "(Larc/math/geom/Rect;Larc/struct/IntSeq;)V", 1 },
	{ "intersect", (intptr_t) M_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq, VTABLE_arc_math_geom_IntQuadTree_intersect_float_float_float_float_arc_struct_IntSeq, "(FFFFLarc/struct/IntSeq;)V", 1 },
	{ "getObjects", (intptr_t) M_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq, VTABLE_arc_math_geom_IntQuadTree_getObjects_arc_struct_IntSeq, "(Larc/struct/IntSeq;)V", 1 },
	{ "newChild", (intptr_t) M_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree, VTABLE_arc_math_geom_IntQuadTree_newChild_arc_math_geom_Rect_R_arc_math_geom_IntQuadTree, "(Larc/math/geom/Rect;)Larc/math/geom/IntQuadTree;", 4 },
	{ "hitbox", (intptr_t) M_arc_math_geom_IntQuadTree_hitbox_int, VTABLE_arc_math_geom_IntQuadTree_hitbox_int, "(I)V", 4 },
};

Class class_arc_math_geom_IntQuadTree{
		.nativeName = (intptr_t) "arc/math/geom/IntQuadTree",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_IntQuadTree),
		.classVtable = (intptr_t) vtable_arc_math_geom_IntQuadTree,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_IntQuadTree,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_IntQuadTree,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_IntQuadTree = registerClass(&class_arc_math_geom_IntQuadTree);

}
