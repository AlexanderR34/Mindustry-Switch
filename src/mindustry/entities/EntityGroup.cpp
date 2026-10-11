#include "mindustry/entities/EntityGroup.h"
#include "arc/math/geom/Rect.h"
#include "arc/struct/IntMap.h"
#include "java/lang/Iterable.h"
#include "mindustry/entities/EntityCollisions.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/entities/EntityIndexer.h"
#include "java/util/Comparator.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Boolf.h"
#include "java/lang/Math.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "mindustry/gen/Posc.h"
#include "mindustry/entities/EntityGroup.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Drawc.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "mindustry/entities/EntityGroup_invoke_arc_func_Cons_2.h"
#include "mindustry/Vars.h"
#include "arc/graphics/Camera.h"
#include "mindustry/entities/EntityGroup_invoke_arc_func_Cons_3.h"

extern "C" {

jint SF_mindustry_entities_EntityGroup_lastId;

void mark_mindustry_entities_EntityGroup(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_EntityGroup *) object;
	if (self->F_array)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_array)->clazz)->markFunction)((jobject) self->F_array, mark, depth + 1);
	if (self->F_intersectArray)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_intersectArray)->clazz)->markFunction)((jobject) self->F_intersectArray, mark, depth + 1);
	if (self->F_viewport)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_viewport)->clazz)->markFunction)((jobject) self->F_viewport, mark, depth + 1);
	if (self->F_intersectRect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_intersectRect)->clazz)->markFunction)((jobject) self->F_intersectRect, mark, depth + 1);
	if (self->F_indexer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_indexer)->clazz)->markFunction)((jobject) self->F_indexer, mark, depth + 1);
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
	if (self->F_tree)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tree)->clazz)->markFunction)((jobject) self->F_tree, mark, depth + 1);
	if (self->F_timeRuns)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timeRuns)->clazz)->markFunction)((jobject) self->F_timeRuns, mark, depth + 1);
}

jint SM_mindustry_entities_EntityGroup_nextId_R_int(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:nextId", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_EntityGroup(ctx);
	{
	LINE_NUMBER(37);
	if ((clinit_mindustry_entities_EntityGroup(ctx), (jint)SF_mindustry_entities_EntityGroup_lastId) < (jint(2147483645))) goto label_1;
	}
	INST_ICONST(0);
	clinit_mindustry_entities_EntityGroup(ctx);
	SF_mindustry_entities_EntityGroup_lastId = (--sp)->i;
label_1:;
	{
	LINE_NUMBER(38);
	clinit_mindustry_entities_EntityGroup(ctx);
	jint temp0 = (jint)SF_mindustry_entities_EntityGroup_lastId;
	clinit_mindustry_entities_EntityGroup(ctx);
	SF_mindustry_entities_EntityGroup_lastId = (temp0 + (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_EntityGroup_checkNextId_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:checkNextId", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_EntityGroup(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(43);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (clinit_mindustry_entities_EntityGroup(ctx), (jint)SF_mindustry_entities_EntityGroup_lastId), ((frame[0].i) + (jint(1))));
	clinit_mindustry_entities_EntityGroup(ctx);
	SF_mindustry_entities_EntityGroup_lastId = temp0;
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_EntityGroup(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(47);
	init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (jobject(nullptr)));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer(jcontext ctx, jobject self, jobject param0, jbool param1, jbool param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_EntityGroup(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(50);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_intersectArray = (jref) sp[1].o;
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_viewport = (jref) sp[1].o;
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Rect(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect(ctx, sp[1].o);
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_intersectRect = (jref) sp[1].o;
	LINE_NUMBER(33);
	((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_lastTimeAccess = (jlong(-1ll));
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_timeRuns = (jref) sp[1].o;
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_boolean_int_java_lang_Class(ctx, sp[1].o, (jint(0)), (32), (frame[1].o));
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_array = (jref) sp[1].o;
	LINE_NUMBER(53);
	if ((frame[2].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_QuadTree(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_QuadTree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	init_arc_math_geom_QuadTree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_tree = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(57);
	if ((frame[3].i) == 0) goto label_10;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[1].o);
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_map = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(61);
	((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_indexer = (jref) (frame[4].o);
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_EntityGroup_checkIDCollisions_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:checkIDCollisions", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(67);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_EntityGroup_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_entities_EntityGroup_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_entities_EntityGroup_invoke_arc_func_Cons_2);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_sort_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:sort", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(78);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_collide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:collide", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_collisions;
	((func_mindustry_entities_EntityCollisions_collide_mindustry_entities_EntityGroup) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityCollisions_collide_mindustry_entities_EntityGroup])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_updatePhysics(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:updatePhysics", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(85);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_collisions;
	((func_mindustry_entities_EntityCollisions_updatePhysics_mindustry_entities_EntityGroup) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityCollisions_updatePhysics_mindustry_entities_EntityGroup])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(86);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	}
label_1:;
	{
	jint temp0 = (jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	((func_mindustry_gen_Entityc_update) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_update, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[0].o)), ((jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[0].o)), ((jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index))));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(92);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_update_arc_func_Boolf(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(95);
	((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	}
label_1:;
	{
	jint temp0 = (jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[0].o)), ((jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index)));
	LINE_NUMBER(97);
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	((func_mindustry_gen_Entityc_update) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_update, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[0].o)), ((jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[0].o)), ((jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index))));
	}
label_5:;
	{
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_fixedUpdate_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:fixedUpdate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(103);
	((func_mindustry_entities_EntityGroup_fixedUpdate_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_EntityGroup_fixedUpdate_int_int])(ctx, (frame[0].o), (frame[1].i), (10));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_fixedUpdate_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:fixedUpdate", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(113);
	jlong temp0 = (jlong)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_lastTimeAccess;
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jlong temp1 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[0].o);
	if ((longCompare(temp0, temp1)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_arc_util_Time_getInternalTime_R_double(ctx);
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_timeCounter = temp0;
	}
label_1:;
	{
	LINE_NUMBER(117);
	frame[3].d = ((jdouble(1)) / (jdouble((frame[1].i))));
	LINE_NUMBER(118);
	frame[5].f = ((jfloat((frame[3].d))) * (jfloat(60.0f)));
	LINE_NUMBER(119);
	frame[6].f = (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta);
	LINE_NUMBER(120);
	jdouble temp0 = (jdouble)SM_arc_util_Time_getInternalTime_R_double(ctx);
	frame[7].d = temp0;
	LINE_NUMBER(121);
	sp[0].o = (jobject)SM_arc_util_Time_getRuns_R_arc_struct_Seq(ctx);
	frame[9].o = sp[0].o;
	LINE_NUMBER(124);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_delta = (frame[5].f);
	LINE_NUMBER(125);
	SM_arc_util_Time_setInternalTime_double(ctx, ((jdouble)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_timeCounter));
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_timeRuns;
	SM_arc_util_Time_setRuns_arc_struct_Seq(ctx, sp[0].o);
	LINE_NUMBER(127);
	frame[10].i = (jint(0));
	LINE_NUMBER(129);
	sp[0].o = frame[0].o;
	jdouble temp1 = (jdouble)((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_fixedCounter;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jfloat temp2 = (jfloat)((func_arc_Graphics_getDeltaTime_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getDeltaTime_R_float])(ctx, sp[1].o);
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_fixedCounter = (temp1 + (jdouble(temp2)));
	}
label_12:;
	{
	LINE_NUMBER(131);
	if ((doubleCompare(((jdouble)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_fixedCounter), (frame[3].d), -1)) < 0) goto label_13;
	}
	{
	jint temp0 = frame[10].i;
	INST_IINC(10, 1);
	if (temp0 >= (frame[2].i)) goto label_13;
	}
	{
	LINE_NUMBER(133);
	SM_arc_util_Time_update(ctx);
	LINE_NUMBER(134);
	((func_mindustry_entities_EntityGroup_update) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_EntityGroup_update])(ctx, (frame[0].o));
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_fixedCounter = (((jdouble)((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_fixedCounter) - (frame[3].d));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(138);
	sp[0].o = frame[0].o;
	jdouble temp0 = (jdouble)SM_arc_util_Time_getInternalTime_R_double(ctx);
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_timeCounter = temp0;
	LINE_NUMBER(140);
	clinit_arc_util_Time(ctx);
	SF_arc_util_Time_delta = (frame[6].f);
	LINE_NUMBER(141);
	SM_arc_util_Time_setInternalTime_double(ctx, (frame[7].d));
	LINE_NUMBER(142);
	SM_arc_util_Time_setRuns_arc_struct_Seq(ctx, (frame[9].o));
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jlong temp1 = (jlong)((func_arc_Graphics_getFrameId_R_long) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getFrameId_R_long])(ctx, sp[1].o);
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_lastTimeAccess = temp1;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_EntityGroup_copy_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_copy_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_copy_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_EntityGroup_copy_arc_struct_Seq_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:copy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_each_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:each", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(157);
	((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	}
label_1:;
	{
	jint temp0 = (jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_items;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[1].o)), ((jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index))));
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(160);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:each", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(163);
	((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	}
label_1:;
	{
	jint temp0 = (jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_2;
	}
	{
	LINE_NUMBER(164);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_items;
	jint temp0 = (jint)((func_arc_func_Boolf_get_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolf, INDEX_arc_func_Boolf_get_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[1].o)), ((jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index))));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[1].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_items;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[1].o)), ((jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index))));
	}
label_4:;
	{
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	goto label_1;
	}
label_2:;
	LINE_NUMBER(166);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_draw_arc_func_Cons(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(169);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_viewport;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(171);
	((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	}
label_2:;
	{
	jint temp0 = (jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Drawc, ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[0].o)), ((jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index)))));
	LINE_NUMBER(173);
	jfloat temp0 = (jfloat)((func_mindustry_gen_Drawc_clipSize_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Drawc, INDEX_mindustry_gen_Drawc_clipSize_R_float, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].f = temp0;
	LINE_NUMBER(174);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_viewport;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Posc_x_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_x_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp2 = temp1 - ((frame[3].f) / (jfloat(2)));
	jfloat temp3 = (jfloat)((func_mindustry_gen_Posc_y_R_float) resolveInterfaceMethod(ctx, &class_mindustry_gen_Posc, INDEX_mindustry_gen_Posc_y_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jint temp4 = (jint)((func_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean])(ctx, sp[0].o, temp2, (temp3 - ((frame[3].f) / (jfloat(2)))), (frame[3].f), (frame[3].f));
	if (temp4 == 0) goto label_7;
	}
	{
	LINE_NUMBER(175);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o));
	}
label_7:;
	{
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	goto label_2;
	}
label_3:;
	LINE_NUMBER(178);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_EntityGroup_useTree_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:useTree", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_tree;
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

jbool M_mindustry_entities_EntityGroup_mappingEnabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:mappingEnabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_map;
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

jobject M_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:getByID", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_map;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Mapping is not enabled for group \u0001!"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Entityc, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_removeByID_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:removeByID", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_map;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Mapping is not enabled for group \u0001!"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_map;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[2].o = (checkCast(ctx, &class_mindustry_gen_Entityc, sp[0].o));
	LINE_NUMBER(197);
	if ((frame[2].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(198);
	((func_mindustry_gen_Entityc_remove) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_remove, (frame[2].o)))(ctx, (frame[2].o));
	}
label_3:;
	LINE_NUMBER(200);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:intersect", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(204);
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_EntityGroup_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_tree;
	((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Cons])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	LINE_NUMBER(206);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:intersect", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(210);
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_EntityGroup_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_tree;
	jint temp0 = (jint)((func_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_float_float_float_float_arc_func_Boolf_R_boolean])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_EntityGroup_intersect_float_float_float_float_R_arc_struct_Seq(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:intersect", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_intersectArray;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(217);
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_EntityGroup_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_intersectArray;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(218);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_tree;
	sp[1].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_intersectRect;
	sp[1].o = (jobject)((func_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[1].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	sp[2].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_intersectArray;
	((func_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_QuadTree_intersect_arc_math_geom_Rect_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(219);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_intersectArray;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_EntityGroup_tree_R_arc_math_geom_QuadTree(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:tree", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_tree;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This group does not support quadtrees! Enable quadtrees when creating it."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_tree;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_EntityGroup_rawSeq_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:rawSeq", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_resize_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:resize", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_tree;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(234);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_QuadTree(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_QuadTree);
	clinit_arc_math_geom_Rect(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_math_geom_Rect);
	init_arc_math_geom_Rect_float_float_float_float(ctx, sp[2].o, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	init_arc_math_geom_QuadTree_arc_math_geom_Rect(ctx, sp[1].o, sp[2].o);
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_tree = (jref) sp[1].o;
	}
label_1:;
	LINE_NUMBER(236);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_EntityGroup_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
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

jobject M_mindustry_entities_EntityGroup_index_int_R_mindustry_gen_Entityc(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:index", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Entityc, sp[0].o));
	}

	popStackFrame(ctx);
}

jint M_mindustry_entities_EntityGroup_size_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:size", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	popStackFrame(ctx);
	return ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_entities_EntityGroup_contains_arc_func_Boolf_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:count", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_add_mindustry_gen_Entityc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(259);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot add a null entity!"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(262);
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_mappingEnabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_EntityGroup_mappingEnabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, (frame[1].o));
	}
label_3:;
	LINE_NUMBER(265);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:addIndex", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(269);
	((func_mindustry_entities_EntityGroup_add_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_EntityGroup_add_mindustry_gen_Entityc])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(274);
	if (((jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_clearing) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(275);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot remove a null entity!"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	frame[2].i = temp0;
	LINE_NUMBER(277);
	if ((frame[2].i) == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	LINE_NUMBER(281);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_7;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 == ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_7;
	}
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[0].o)), (frame[2].i)));
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_indexer;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_indexer;
	((func_mindustry_entities_EntityIndexer_change_mindustry_gen_Entityc_int) resolveInterfaceMethod(ctx, &class_mindustry_entities_EntityIndexer, INDEX_mindustry_entities_EntityIndexer_change_mindustry_gen_Entityc_int, sp[0].o))(ctx, sp[0].o, (frame[3].o), (frame[2].i));
	}
label_7:;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_map;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_remove_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	}
label_10:;
	{
	LINE_NUMBER(291);
	if (((jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index) < (frame[2].i)) goto label_4;
	}
	{
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index) - (jint(1)));
	}
label_4:;
	LINE_NUMBER(295);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:removeIndex", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(298);
	if (((jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_clearing) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(299);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot remove a null entity!"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(300);
	if ((frame[2].i) == (jint(-1))) goto label_3;
	}
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(303);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	if (((jobject)ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[0].o)), (frame[2].i))) == (frame[1].o)) goto label_5;
	}
	{
	LINE_NUMBER(304);
	((func_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(309);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_8;
	}
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	sp[0].o = checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1)))));
	LINE_NUMBER(311);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_indexer;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_indexer;
	((func_mindustry_entities_EntityIndexer_change_mindustry_gen_Entityc_int) resolveInterfaceMethod(ctx, &class_mindustry_entities_EntityIndexer, INDEX_mindustry_entities_EntityIndexer_change_mindustry_gen_Entityc_int, sp[0].o))(ctx, sp[0].o, (frame[3].o), (frame[2].i));
	}
label_11:;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	ARRAY_ACCESS(jobject, (checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[0].o)), (frame[2].i)) = (frame[3].o);
	}
label_8:;
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(316);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_items;
	sp[0].o = checkCast(ctx, getArrayClass(&class_mindustry_gen_Entityc, 1), sp[0].o);
	sp[1].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size)) = (jobject(nullptr));
	LINE_NUMBER(318);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_map;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_map;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_IntMap_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_remove_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	}
label_14:;
	{
	LINE_NUMBER(323);
	if (((jint)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_index) < (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(324);
	sp[0].o = frame[0].o;
	((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_entities_EntityGroup *) NULL_CHECK(sp[0].o))->F_index) - (jint(1)));
	}
label_3:;
	LINE_NUMBER(327);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_EntityGroup_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_clearing = (jint(1));
	LINE_NUMBER(332);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	{ /* InvokeDynamic */
		clinit_mindustry_entities_EntityGroup_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_entities_EntityGroup_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_entities_EntityGroup_invoke_arc_func_Cons_3);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(333);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(334);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_map;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_map;
	((func_arc_struct_IntMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_clear])(ctx, sp[0].o);
	}
label_4:;
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_timeRuns;
	SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq_boolean(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_timeRuns;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(338);
	((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_clearing = (jint(0));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:find", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(343);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Entityc, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_EntityGroup_first_R_mindustry_gen_Entityc(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:first", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_Entityc, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:iterator", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_entities_EntityGroup_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((mindustry_entities_EntityGroup *) NULL_CHECK((frame[0].o)))->F_array;
	sp[0].o = (jobject)((func_arc_struct_Seq_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_entities_EntityGroup_lambda$checkIDCollisions$0_arc_struct_IntSet_arc_struct_Seq_mindustry_gen_Entityc(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:lambda$checkIDCollisions$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_EntityGroup(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_gen_Entityc_id_R_int) resolveInterfaceMethod(ctx, &class_mindustry_gen_Entityc, INDEX_mindustry_gen_Entityc_id_R_int, (frame[2].o)))(ctx, (frame[2].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_1;
	}
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_mindustry_entities_EntityGroup(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/EntityGroup:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_EntityGroup(ctx);
	{
	LINE_NUMBER(19);
	clinit_mindustry_entities_EntityGroup(ctx);
	SF_mindustry_entities_EntityGroup_lastId = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_EntityGroup;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	{ // Method getByID
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[17]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method find
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[35]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Method first
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[36]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_EntityGroup[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_entities_EntityGroup_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_mindustry_entities_EntityGroup_checkIDCollisions_R_arc_struct_Seq,
	(void *) M_mindustry_entities_EntityGroup_sort_java_util_Comparator,
	(void *) M_mindustry_entities_EntityGroup_collide,
	(void *) M_mindustry_entities_EntityGroup_updatePhysics,
	(void *) M_mindustry_entities_EntityGroup_update,
	(void *) M_mindustry_entities_EntityGroup_update_arc_func_Boolf,
	(void *) M_mindustry_entities_EntityGroup_fixedUpdate_int,
	(void *) M_mindustry_entities_EntityGroup_fixedUpdate_int_int,
	(void *) M_mindustry_entities_EntityGroup_copy_R_arc_struct_Seq,
	(void *) M_mindustry_entities_EntityGroup_copy_arc_struct_Seq_R_arc_struct_Seq,
	(void *) M_mindustry_entities_EntityGroup_each_arc_func_Cons,
	(void *) M_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons,
	(void *) M_mindustry_entities_EntityGroup_draw_arc_func_Cons,
	(void *) M_mindustry_entities_EntityGroup_useTree_R_boolean,
	(void *) M_mindustry_entities_EntityGroup_mappingEnabled_R_boolean,
	(void *) M_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc,
	(void *) M_mindustry_entities_EntityGroup_removeByID_int,
	(void *) M_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons,
	(void *) M_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Boolf_R_boolean,
	(void *) M_mindustry_entities_EntityGroup_intersect_float_float_float_float_R_arc_struct_Seq,
	(void *) M_mindustry_entities_EntityGroup_tree_R_arc_math_geom_QuadTree,
	(void *) M_mindustry_entities_EntityGroup_rawSeq_R_arc_struct_Seq,
	(void *) M_mindustry_entities_EntityGroup_resize_float_float_float_float,
	(void *) M_mindustry_entities_EntityGroup_isEmpty_R_boolean,
	(void *) M_mindustry_entities_EntityGroup_index_int_R_mindustry_gen_Entityc,
	(void *) M_mindustry_entities_EntityGroup_size_R_int,
	(void *) M_mindustry_entities_EntityGroup_contains_arc_func_Boolf_R_boolean,
	(void *) M_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int,
	(void *) M_mindustry_entities_EntityGroup_add_mindustry_gen_Entityc,
	(void *) M_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int,
	(void *) M_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc,
	(void *) M_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int,
	(void *) M_mindustry_entities_EntityGroup_clear,
	(void *) M_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc,
	(void *) M_mindustry_entities_EntityGroup_first_R_mindustry_gen_Entityc,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "checkIDCollisions", "()Larc/struct/Seq;" },
	{ "sort", "(Ljava/util/Comparator;)V" },
	{ "collide", "()V" },
	{ "updatePhysics", "()V" },
	{ "update", "()V" },
	{ "update", "(Larc/func/Boolf;)V" },
	{ "fixedUpdate", "(I)V" },
	{ "fixedUpdate", "(II)V" },
	{ "copy", "()Larc/struct/Seq;" },
	{ "copy", "(Larc/struct/Seq;)Larc/struct/Seq;" },
	{ "each", "(Larc/func/Cons;)V" },
	{ "each", "(Larc/func/Boolf;Larc/func/Cons;)V" },
	{ "draw", "(Larc/func/Cons;)V" },
	{ "useTree", "()Z" },
	{ "mappingEnabled", "()Z" },
	{ "getByID", "(I)Lmindustry/gen/Entityc;" },
	{ "removeByID", "(I)V" },
	{ "intersect", "(FFFFLarc/func/Cons;)V" },
	{ "intersect", "(FFFFLarc/func/Boolf;)Z" },
	{ "intersect", "(FFFF)Larc/struct/Seq;" },
	{ "tree", "()Larc/math/geom/QuadTree;" },
	{ "rawSeq", "()Larc/struct/Seq;" },
	{ "resize", "(FFFF)V" },
	{ "isEmpty", "()Z" },
	{ "index", "(I)Lmindustry/gen/Entityc;" },
	{ "size", "()I" },
	{ "contains", "(Larc/func/Boolf;)Z" },
	{ "count", "(Larc/func/Boolf;)I" },
	{ "add", "(Lmindustry/gen/Entityc;)V" },
	{ "addIndex", "(Lmindustry/gen/Entityc;)I" },
	{ "remove", "(Lmindustry/gen/Entityc;)V" },
	{ "removeIndex", "(Lmindustry/gen/Entityc;I)V" },
	{ "clear", "()V" },
	{ "find", "(Larc/func/Boolf;)Lmindustry/gen/Entityc;" },
	{ "first", "()Lmindustry/gen/Entityc;" },
};

static jclass interfaces[] { &class_java_lang_Iterable, };

static FieldMetadata fields[] {
	{ "lastId", &class_int, (intptr_t) &SF_mindustry_entities_EntityGroup_lastId, "I", 10 },
	{ "array", &class_arc_struct_Seq, offsetof(mindustry_entities_EntityGroup, F_array), "Larc/struct/Seq;", 18 },
	{ "intersectArray", &class_arc_struct_Seq, offsetof(mindustry_entities_EntityGroup, F_intersectArray), "Larc/struct/Seq;", 18 },
	{ "viewport", &class_arc_math_geom_Rect, offsetof(mindustry_entities_EntityGroup, F_viewport), "Larc/math/geom/Rect;", 18 },
	{ "intersectRect", &class_arc_math_geom_Rect, offsetof(mindustry_entities_EntityGroup, F_intersectRect), "Larc/math/geom/Rect;", 18 },
	{ "indexer", &class_mindustry_entities_EntityIndexer, offsetof(mindustry_entities_EntityGroup, F_indexer), "Lmindustry/entities/EntityIndexer;", 18 },
	{ "map", &class_arc_struct_IntMap, offsetof(mindustry_entities_EntityGroup, F_map), "Larc/struct/IntMap;", 2 },
	{ "tree", &class_arc_math_geom_QuadTree, offsetof(mindustry_entities_EntityGroup, F_tree), "Larc/math/geom/QuadTree;", 2 },
	{ "clearing", &class_boolean, offsetof(mindustry_entities_EntityGroup, F_clearing), "Z", 2 },
	{ "index", &class_int, offsetof(mindustry_entities_EntityGroup, F_index), "I", 2 },
	{ "fixedCounter", &class_double, offsetof(mindustry_entities_EntityGroup, F_fixedCounter), "D", 2 },
	{ "timeCounter", &class_double, offsetof(mindustry_entities_EntityGroup, F_timeCounter), "D", 2 },
	{ "lastTimeAccess", &class_long, offsetof(mindustry_entities_EntityGroup, F_lastTimeAccess), "J", 2 },
	{ "timeRuns", &class_arc_struct_Seq, offsetof(mindustry_entities_EntityGroup, F_timeRuns), "Larc/struct/Seq;", 2 },
};

static MethodMetadata methods[] {
	{ "nextId", (intptr_t) SM_mindustry_entities_EntityGroup_nextId_R_int, 0, "()I", 9 },
	{ "checkNextId", (intptr_t) SM_mindustry_entities_EntityGroup_checkNextId_int, 0, "(I)V", 9 },
	{ "<init>", (intptr_t) init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean, 0, "(Ljava/lang/Class;ZZ)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_EntityGroup_java_lang_Class_boolean_boolean_mindustry_entities_EntityIndexer, 0, "(Ljava/lang/Class;ZZLmindustry/entities/EntityIndexer;)V", 1 },
	{ "checkIDCollisions", (intptr_t) M_mindustry_entities_EntityGroup_checkIDCollisions_R_arc_struct_Seq, VTABLE_mindustry_entities_EntityGroup_checkIDCollisions_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "sort", (intptr_t) M_mindustry_entities_EntityGroup_sort_java_util_Comparator, VTABLE_mindustry_entities_EntityGroup_sort_java_util_Comparator, "(Ljava/util/Comparator;)V", 1 },
	{ "collide", (intptr_t) M_mindustry_entities_EntityGroup_collide, VTABLE_mindustry_entities_EntityGroup_collide, "()V", 1 },
	{ "updatePhysics", (intptr_t) M_mindustry_entities_EntityGroup_updatePhysics, VTABLE_mindustry_entities_EntityGroup_updatePhysics, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_EntityGroup_update, VTABLE_mindustry_entities_EntityGroup_update, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_EntityGroup_update_arc_func_Boolf, VTABLE_mindustry_entities_EntityGroup_update_arc_func_Boolf, "(Larc/func/Boolf;)V", 1 },
	{ "fixedUpdate", (intptr_t) M_mindustry_entities_EntityGroup_fixedUpdate_int, VTABLE_mindustry_entities_EntityGroup_fixedUpdate_int, "(I)V", 1 },
	{ "fixedUpdate", (intptr_t) M_mindustry_entities_EntityGroup_fixedUpdate_int_int, VTABLE_mindustry_entities_EntityGroup_fixedUpdate_int_int, "(II)V", 1 },
	{ "copy", (intptr_t) M_mindustry_entities_EntityGroup_copy_R_arc_struct_Seq, VTABLE_mindustry_entities_EntityGroup_copy_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "copy", (intptr_t) M_mindustry_entities_EntityGroup_copy_arc_struct_Seq_R_arc_struct_Seq, VTABLE_mindustry_entities_EntityGroup_copy_arc_struct_Seq_R_arc_struct_Seq, "(Larc/struct/Seq;)Larc/struct/Seq;", 1 },
	{ "each", (intptr_t) M_mindustry_entities_EntityGroup_each_arc_func_Cons, VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "each", (intptr_t) M_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons, VTABLE_mindustry_entities_EntityGroup_each_arc_func_Boolf_arc_func_Cons, "(Larc/func/Boolf;Larc/func/Cons;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_EntityGroup_draw_arc_func_Cons, VTABLE_mindustry_entities_EntityGroup_draw_arc_func_Cons, "(Larc/func/Cons;)V", 1 },
	{ "useTree", (intptr_t) M_mindustry_entities_EntityGroup_useTree_R_boolean, VTABLE_mindustry_entities_EntityGroup_useTree_R_boolean, "()Z", 1 },
	{ "mappingEnabled", (intptr_t) M_mindustry_entities_EntityGroup_mappingEnabled_R_boolean, VTABLE_mindustry_entities_EntityGroup_mappingEnabled_R_boolean, "()Z", 1 },
	{ "getByID", (intptr_t) M_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc, VTABLE_mindustry_entities_EntityGroup_getByID_int_R_mindustry_gen_Entityc, "(I)Lmindustry/gen/Entityc;", 1 },
	{ "removeByID", (intptr_t) M_mindustry_entities_EntityGroup_removeByID_int, VTABLE_mindustry_entities_EntityGroup_removeByID_int, "(I)V", 1 },
	{ "intersect", (intptr_t) M_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons, VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Cons, "(FFFFLarc/func/Cons;)V", 1 },
	{ "intersect", (intptr_t) M_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Boolf_R_boolean, VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_arc_func_Boolf_R_boolean, "(FFFFLarc/func/Boolf;)Z", 1 },
	{ "intersect", (intptr_t) M_mindustry_entities_EntityGroup_intersect_float_float_float_float_R_arc_struct_Seq, VTABLE_mindustry_entities_EntityGroup_intersect_float_float_float_float_R_arc_struct_Seq, "(FFFF)Larc/struct/Seq;", 1 },
	{ "tree", (intptr_t) M_mindustry_entities_EntityGroup_tree_R_arc_math_geom_QuadTree, VTABLE_mindustry_entities_EntityGroup_tree_R_arc_math_geom_QuadTree, "()Larc/math/geom/QuadTree;", 1 },
	{ "rawSeq", (intptr_t) M_mindustry_entities_EntityGroup_rawSeq_R_arc_struct_Seq, VTABLE_mindustry_entities_EntityGroup_rawSeq_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "resize", (intptr_t) M_mindustry_entities_EntityGroup_resize_float_float_float_float, VTABLE_mindustry_entities_EntityGroup_resize_float_float_float_float, "(FFFF)V", 1 },
	{ "isEmpty", (intptr_t) M_mindustry_entities_EntityGroup_isEmpty_R_boolean, VTABLE_mindustry_entities_EntityGroup_isEmpty_R_boolean, "()Z", 1 },
	{ "index", (intptr_t) M_mindustry_entities_EntityGroup_index_int_R_mindustry_gen_Entityc, VTABLE_mindustry_entities_EntityGroup_index_int_R_mindustry_gen_Entityc, "(I)Lmindustry/gen/Entityc;", 1 },
	{ "size", (intptr_t) M_mindustry_entities_EntityGroup_size_R_int, VTABLE_mindustry_entities_EntityGroup_size_R_int, "()I", 1 },
	{ "contains", (intptr_t) M_mindustry_entities_EntityGroup_contains_arc_func_Boolf_R_boolean, VTABLE_mindustry_entities_EntityGroup_contains_arc_func_Boolf_R_boolean, "(Larc/func/Boolf;)Z", 1 },
	{ "count", (intptr_t) M_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int, VTABLE_mindustry_entities_EntityGroup_count_arc_func_Boolf_R_int, "(Larc/func/Boolf;)I", 1 },
	{ "add", (intptr_t) M_mindustry_entities_EntityGroup_add_mindustry_gen_Entityc, VTABLE_mindustry_entities_EntityGroup_add_mindustry_gen_Entityc, "(Lmindustry/gen/Entityc;)V", 1 },
	{ "addIndex", (intptr_t) M_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int, VTABLE_mindustry_entities_EntityGroup_addIndex_mindustry_gen_Entityc_R_int, "(Lmindustry/gen/Entityc;)I", 1 },
	{ "remove", (intptr_t) M_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc, VTABLE_mindustry_entities_EntityGroup_remove_mindustry_gen_Entityc, "(Lmindustry/gen/Entityc;)V", 1 },
	{ "removeIndex", (intptr_t) M_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int, VTABLE_mindustry_entities_EntityGroup_removeIndex_mindustry_gen_Entityc_int, "(Lmindustry/gen/Entityc;I)V", 1 },
	{ "clear", (intptr_t) M_mindustry_entities_EntityGroup_clear, VTABLE_mindustry_entities_EntityGroup_clear, "()V", 1 },
	{ "find", (intptr_t) M_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc, VTABLE_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc, "(Larc/func/Boolf;)Lmindustry/gen/Entityc;", 1 },
	{ "first", (intptr_t) M_mindustry_entities_EntityGroup_first_R_mindustry_gen_Entityc, VTABLE_mindustry_entities_EntityGroup_first_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1 },
	{ "iterator", (intptr_t) M_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator, VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator, "()Ljava/util/Iterator;", 1 },
	{ "toString", (intptr_t) M_mindustry_entities_EntityGroup_toString_R_java_lang_String, VTABLE_mindustry_entities_EntityGroup_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "lambda$checkIDCollisions$0", (intptr_t) SM_mindustry_entities_EntityGroup_lambda$checkIDCollisions$0_arc_struct_IntSet_arc_struct_Seq_mindustry_gen_Entityc, 0, "(Larc/struct/IntSet;Larc/struct/Seq;Lmindustry/gen/Entityc;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_entities_EntityGroup, 0, "()V", 8 },
};

Class class_mindustry_entities_EntityGroup{
		.nativeName = (intptr_t) "mindustry/entities/EntityGroup",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_EntityGroup),
		.classVtable = (intptr_t) vtable_mindustry_entities_EntityGroup,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_EntityGroup,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_EntityGroup,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_EntityGroup = registerClass(&class_mindustry_entities_EntityGroup);

}
