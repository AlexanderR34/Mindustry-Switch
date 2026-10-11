#include "arc/math/geom/BoundingBox.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "arc/math/geom/BoundingBox.h"
#include "arc/math/geom/Vec3.h"

extern "C" {


void mark_arc_math_geom_BoundingBox(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_geom_BoundingBox *) object;
	if (self->F_min)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_min)->clazz)->markFunction)((jobject) self->F_min, mark, depth + 1);
	if (self->F_max)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_max)->clazz)->markFunction)((jobject) self->F_max, mark, depth + 1);
	if (self->F_cnt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cnt)->clazz)->markFunction)((jobject) self->F_cnt, mark, depth + 1);
	if (self->F_dim)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dim)->clazz)->markFunction)((jobject) self->F_dim, mark, depth + 1);
}

void clinit_arc_math_geom_BoundingBox(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_geom_BoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_BoundingBox(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(18);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_BoundingBox *) NULL_CHECK(sp[0].o))->F_min = (jref) sp[1].o;
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_BoundingBox *) NULL_CHECK(sp[0].o))->F_max = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_BoundingBox *) NULL_CHECK(sp[0].o))->F_cnt = (jref) sp[1].o;
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_BoundingBox *) NULL_CHECK(sp[0].o))->F_dim = (jref) sp[1].o;
	LINE_NUMBER(19);
	sp[0].o = (jobject)((func_arc_math_geom_BoundingBox_clr_R_arc_math_geom_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_BoundingBox_clr_R_arc_math_geom_BoundingBox])(ctx, (frame[0].o));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_BoundingBox_arc_math_geom_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_BoundingBox(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_BoundingBox *) NULL_CHECK(sp[0].o))->F_min = (jref) sp[1].o;
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_BoundingBox *) NULL_CHECK(sp[0].o))->F_max = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_BoundingBox *) NULL_CHECK(sp[0].o))->F_cnt = (jref) sp[1].o;
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_BoundingBox *) NULL_CHECK(sp[0].o))->F_dim = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_arc_math_geom_BoundingBox_set_arc_math_geom_BoundingBox_R_arc_math_geom_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_BoundingBox_set_arc_math_geom_BoundingBox_R_arc_math_geom_BoundingBox])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_BoundingBox_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_BoundingBox(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(35);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_BoundingBox *) NULL_CHECK(sp[0].o))->F_min = (jref) sp[1].o;
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_BoundingBox *) NULL_CHECK(sp[0].o))->F_max = (jref) sp[1].o;
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_BoundingBox *) NULL_CHECK(sp[0].o))->F_cnt = (jref) sp[1].o;
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_BoundingBox *) NULL_CHECK(sp[0].o))->F_dim = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = (jobject)((func_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_BoundingBox_min_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:min", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_BoundingBox(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(40);
	if ((floatCompare((frame[0].f), (frame[1].f), -1)) <= 0) goto label_1;
	}
	INST_FLOAD(1);
	goto label_2;
label_1:;
	INST_FLOAD(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat SM_arc_math_geom_BoundingBox_max_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:max", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_BoundingBox(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(44);
	if ((floatCompare((frame[0].f), (frame[1].f), -1)) <= 0) goto label_1;
	}
	INST_FLOAD(0);
	goto label_2;
label_1:;
	INST_FLOAD(1);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_getCenter_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getCenter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_BoundingBox_getCenterX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getCenterX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_BoundingBox_getCenterY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getCenterY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_BoundingBox_getCenterZ_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getCenterZ", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_getCorner000_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getCorner000", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_getCorner001_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getCorner001", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_getCorner010_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getCorner010", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(76);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_getCorner011_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getCorner011", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_getCorner100_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getCorner100", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_getCorner101_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getCorner101", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_getCorner110_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getCorner110", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_getCorner111_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getCorner111", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(96);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, temp0, temp1, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_getDimensions_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getDimensions", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_BoundingBox_getWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(108);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_BoundingBox_getHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_BoundingBox_getDepth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getDepth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	popStackFrame(ctx);
	return ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_getMin_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getMin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(124);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_getMax_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:getMax", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_set_arc_math_geom_BoundingBox_R_arc_math_geom_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	sp[0].o = (jobject)((func_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp += 1;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x), 1)) >= 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(2);
	sp[-1].f = ((arc_math_geom_Vec3 *) NULL_CHECK(sp[-1].o))->F_x;
label_2:;
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y), 1)) >= 0) goto label_3;
	}
	{
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_3:;
	INST_ALOAD(2);
	sp[-1].f = ((arc_math_geom_Vec3 *) NULL_CHECK(sp[-1].o))->F_y;
label_4:;
	{
	LINE_NUMBER(152);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z), 1)) >= 0) goto label_5;
	}
	{
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z;
	sp[0].f = temp0;
	sp += 1;
	goto label_6;
	}
label_5:;
	INST_ALOAD(2);
	sp[-1].f = ((arc_math_geom_Vec3 *) NULL_CHECK(sp[-1].o))->F_z;
label_6:;
	{
	sp -= 4;
	LINE_NUMBER(151);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
	LINE_NUMBER(153);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp += 1;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x), -1)) <= 0) goto label_8;
	}
	{
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x;
	sp[0].f = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_ALOAD(2);
	sp[-1].f = ((arc_math_geom_Vec3 *) NULL_CHECK(sp[-1].o))->F_x;
label_9:;
	{
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y), -1)) <= 0) goto label_10;
	}
	{
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].f = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ALOAD(2);
	sp[-1].f = ((arc_math_geom_Vec3 *) NULL_CHECK(sp[-1].o))->F_y;
label_11:;
	{
	LINE_NUMBER(154);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z), -1)) <= 0) goto label_12;
	}
	{
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z;
	sp[0].f = temp0;
	sp += 1;
	goto label_13;
	}
label_12:;
	INST_ALOAD(2);
	sp[-1].f = ((arc_math_geom_Vec3 *) NULL_CHECK(sp[-1].o))->F_z;
label_13:;
	{
	sp -= 4;
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f);
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(0.5f)));
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(157);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_set_Array1_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((func_arc_math_geom_BoundingBox_inf_R_arc_math_geom_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_BoundingBox_inf_R_arc_math_geom_BoundingBox])(ctx, (frame[0].o));
	LINE_NUMBER(167);
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
	LINE_NUMBER(168);
	sp[0].o = (jobject)((func_arc_math_geom_BoundingBox_ext_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_BoundingBox_ext_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(167);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_set_arc_struct_Seq_R_arc_math_geom_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_arc_math_geom_BoundingBox_inf_R_arc_math_geom_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_BoundingBox_inf_R_arc_math_geom_BoundingBox])(ctx, (frame[0].o));
	LINE_NUMBER(179);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_arc_math_geom_Vec3, sp[0].o));
	LINE_NUMBER(180);
	sp[0].o = (jobject)((func_arc_math_geom_BoundingBox_ext_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_BoundingBox_ext_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox])(ctx, (frame[0].o), (frame[3].o));
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_inf_R_arc_math_geom_BoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:inf", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(189);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(std::numeric_limits<float>::infinity())), (jfloat(std::numeric_limits<float>::infinity())), (jfloat(std::numeric_limits<float>::infinity())));
	LINE_NUMBER(190);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(-std::numeric_limits<float>::infinity())), (jfloat(-std::numeric_limits<float>::infinity())), (jfloat(-std::numeric_limits<float>::infinity())));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(192);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_ext_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:ext", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)SM_arc_math_geom_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x));
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)SM_arc_math_geom_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y));
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp2 = (jfloat)SM_arc_math_geom_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_z), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, temp0, temp1, temp2);
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_x;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x;
	LINE_NUMBER(203);
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp3, temp4);
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp6 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y));
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp7 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_z), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z));
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, temp5, temp6, temp7);
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_clr_R_arc_math_geom_BoundingBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:clr", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(211);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, (jfloat(0)), (jfloat(0)), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_BoundingBox_isValid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:isValid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_1;
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

jobject M_arc_math_geom_BoundingBox_ext_arc_math_geom_BoundingBox_R_arc_math_geom_BoundingBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:ext", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(228);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_x;
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp1 = (jfloat)SM_arc_math_geom_BoundingBox_min_float_float_R_float(ctx, temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_x));
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_y;
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp3 = (jfloat)SM_arc_math_geom_BoundingBox_min_float_float_R_float(ctx, temp2, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_y));
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp4 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_z;
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	jfloat temp5 = (jfloat)SM_arc_math_geom_BoundingBox_min_float_float_R_float(ctx, temp4, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_z));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, temp1, temp3, temp5);
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp6 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_x;
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp7 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_x;
	LINE_NUMBER(229);
	jfloat temp8 = (jfloat)SM_arc_math_geom_BoundingBox_max_float_float_R_float(ctx, temp6, temp7);
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp9 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_y;
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp10 = (jfloat)SM_arc_math_geom_BoundingBox_max_float_float_R_float(ctx, temp9, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_y));
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp11 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_z;
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	jfloat temp12 = (jfloat)SM_arc_math_geom_BoundingBox_max_float_float_R_float(ctx, temp11, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_z));
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, temp8, temp10, temp12);
	LINE_NUMBER(228);
	sp[0].o = (jobject)((func_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_ext_arc_math_geom_Vec3_float_R_arc_math_geom_BoundingBox(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:ext", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)SM_arc_math_geom_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_x), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) - (frame[2].f)));
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)SM_arc_math_geom_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_y), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) - (frame[2].f)));
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp2 = (jfloat)SM_arc_math_geom_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_z), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) - (frame[2].f)));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, temp0, temp1, temp2);
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_x;
	jfloat temp4 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x) + (frame[2].f);
	LINE_NUMBER(240);
	jfloat temp5 = (jfloat)SM_arc_math_geom_BoundingBox_max_float_float_R_float(ctx, temp3, temp4);
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp6 = (jfloat)SM_arc_math_geom_BoundingBox_max_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_y), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y) + (frame[2].f)));
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp7 = (jfloat)SM_arc_math_geom_BoundingBox_max_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_z), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z) + (frame[2].f)));
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, temp5, temp6, temp7);
	LINE_NUMBER(239);
	sp[0].o = (jobject)((func_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_BoundingBox_contains_arc_math_geom_BoundingBox_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(249);
	jint temp0 = (jint)((func_arc_math_geom_BoundingBox_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_BoundingBox_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), 1)) > 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), 1)) > 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_min;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), 1)) > 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), -1)) < 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_max;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), -1)) < 0) goto label_2;
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

jbool M_arc_math_geom_BoundingBox_intersects_arc_math_geom_BoundingBox_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:intersects", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(259);
	jint temp0 = (jint)((func_arc_math_geom_BoundingBox_isValid_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_math_geom_BoundingBox_isValid_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(263);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_cnt;
	jfloat temp1 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp0 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x)));
	frame[2].f = temp1;
	LINE_NUMBER(264);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	jfloat temp2 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(2));
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_dim;
	frame[3].f = (temp2 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x) / (jfloat(2))));
	LINE_NUMBER(266);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	jfloat temp3 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_cnt;
	jfloat temp4 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp3 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y)));
	frame[4].f = temp4;
	LINE_NUMBER(267);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	jfloat temp5 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(2));
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_dim;
	frame[5].f = (temp5 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y) / (jfloat(2))));
	LINE_NUMBER(269);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_cnt;
	jfloat temp6 = (jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z;
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_cnt;
	jfloat temp7 = (jfloat)SM_java_lang_Math_abs_float_R_float(ctx, (temp6 - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z)));
	frame[6].f = temp7;
	LINE_NUMBER(270);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_dim;
	jfloat temp8 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z) / (jfloat(2));
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[1].o)))->F_dim;
	frame[7].f = (temp8 + (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z) / (jfloat(2))));
	LINE_NUMBER(272);
	if ((floatCompare((frame[2].f), (frame[3].f), 1)) > 0) goto label_8;
	}
	{
	if ((floatCompare((frame[4].f), (frame[5].f), 1)) > 0) goto label_8;
	}
	{
	if ((floatCompare((frame[6].f), (frame[7].f), 1)) > 0) goto label_8;
	}
	INST_ICONST(1);
	goto label_9;
label_8:;
	INST_ICONST(0);
label_9:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_arc_math_geom_BoundingBox_contains_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:contains", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_x), -1)) < 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_y), -1)) < 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), 1)) > 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[0].o))->F_z), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[1].o)))->F_z), -1)) < 0) goto label_1;
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

jobject M_arc_math_geom_BoundingBox_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(287);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_BoundingBox_ext_float_float_float_R_arc_math_geom_BoundingBox(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/BoundingBox:ext", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp0 = (jfloat)SM_arc_math_geom_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_x), (frame[1].f));
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp1 = (jfloat)SM_arc_math_geom_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_y), (frame[2].f));
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_min;
	jfloat temp2 = (jfloat)SM_arc_math_geom_BoundingBox_min_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_z), (frame[3].f));
	sp[1].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[1].o, temp0, temp1, temp2);
	sp[2].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp3 = (jfloat)SM_arc_math_geom_BoundingBox_max_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_x), (frame[1].f));
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp4 = (jfloat)SM_arc_math_geom_BoundingBox_max_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_y), (frame[2].f));
	sp[3].o = (jobject)((arc_math_geom_BoundingBox *) NULL_CHECK((frame[0].o)))->F_max;
	jfloat temp5 = (jfloat)SM_arc_math_geom_BoundingBox_max_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[3].o))->F_z), (frame[3].f));
	sp[2].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[2].o, temp3, temp4, temp5);
	sp[0].o = (jobject)((func_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_BoundingBox[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_geom_BoundingBox_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_geom_BoundingBox_getCenter_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_BoundingBox_getCenterX_R_float,
	(void *) M_arc_math_geom_BoundingBox_getCenterY_R_float,
	(void *) M_arc_math_geom_BoundingBox_getCenterZ_R_float,
	(void *) M_arc_math_geom_BoundingBox_getCorner000_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_BoundingBox_getCorner001_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_BoundingBox_getCorner010_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_BoundingBox_getCorner011_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_BoundingBox_getCorner100_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_BoundingBox_getCorner101_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_BoundingBox_getCorner110_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_BoundingBox_getCorner111_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_BoundingBox_getDimensions_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_BoundingBox_getWidth_R_float,
	(void *) M_arc_math_geom_BoundingBox_getHeight_R_float,
	(void *) M_arc_math_geom_BoundingBox_getDepth_R_float,
	(void *) M_arc_math_geom_BoundingBox_getMin_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_BoundingBox_getMax_arc_math_geom_Vec3_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_BoundingBox_set_arc_math_geom_BoundingBox_R_arc_math_geom_BoundingBox,
	(void *) M_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox,
	(void *) M_arc_math_geom_BoundingBox_set_Array1_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox,
	(void *) M_arc_math_geom_BoundingBox_set_arc_struct_Seq_R_arc_math_geom_BoundingBox,
	(void *) M_arc_math_geom_BoundingBox_inf_R_arc_math_geom_BoundingBox,
	(void *) M_arc_math_geom_BoundingBox_ext_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox,
	(void *) M_arc_math_geom_BoundingBox_clr_R_arc_math_geom_BoundingBox,
	(void *) M_arc_math_geom_BoundingBox_isValid_R_boolean,
	(void *) M_arc_math_geom_BoundingBox_ext_arc_math_geom_BoundingBox_R_arc_math_geom_BoundingBox,
	(void *) M_arc_math_geom_BoundingBox_ext_arc_math_geom_Vec3_float_R_arc_math_geom_BoundingBox,
	(void *) M_arc_math_geom_BoundingBox_contains_arc_math_geom_BoundingBox_R_boolean,
	(void *) M_arc_math_geom_BoundingBox_intersects_arc_math_geom_BoundingBox_R_boolean,
	(void *) M_arc_math_geom_BoundingBox_contains_arc_math_geom_Vec3_R_boolean,
	(void *) M_arc_math_geom_BoundingBox_ext_float_float_float_R_arc_math_geom_BoundingBox,
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
	{ "getCenter", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getCenterX", "()F" },
	{ "getCenterY", "()F" },
	{ "getCenterZ", "()F" },
	{ "getCorner000", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getCorner001", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getCorner010", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getCorner011", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getCorner100", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getCorner101", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getCorner110", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getCorner111", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getDimensions", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getWidth", "()F" },
	{ "getHeight", "()F" },
	{ "getDepth", "()F" },
	{ "getMin", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "getMax", "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;" },
	{ "set", "(Larc/math/geom/BoundingBox;)Larc/math/geom/BoundingBox;" },
	{ "set", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/BoundingBox;" },
	{ "set", "([Larc/math/geom/Vec3;)Larc/math/geom/BoundingBox;" },
	{ "set", "(Larc/struct/Seq;)Larc/math/geom/BoundingBox;" },
	{ "inf", "()Larc/math/geom/BoundingBox;" },
	{ "ext", "(Larc/math/geom/Vec3;)Larc/math/geom/BoundingBox;" },
	{ "clr", "()Larc/math/geom/BoundingBox;" },
	{ "isValid", "()Z" },
	{ "ext", "(Larc/math/geom/BoundingBox;)Larc/math/geom/BoundingBox;" },
	{ "ext", "(Larc/math/geom/Vec3;F)Larc/math/geom/BoundingBox;" },
	{ "contains", "(Larc/math/geom/BoundingBox;)Z" },
	{ "intersects", "(Larc/math/geom/BoundingBox;)Z" },
	{ "contains", "(Larc/math/geom/Vec3;)Z" },
	{ "ext", "(FFF)Larc/math/geom/BoundingBox;" },
};

static FieldMetadata fields[] {
	{ "min", &class_arc_math_geom_Vec3, offsetof(arc_math_geom_BoundingBox, F_min), "Larc/math/geom/Vec3;", 17 },
	{ "max", &class_arc_math_geom_Vec3, offsetof(arc_math_geom_BoundingBox, F_max), "Larc/math/geom/Vec3;", 17 },
	{ "cnt", &class_arc_math_geom_Vec3, offsetof(arc_math_geom_BoundingBox, F_cnt), "Larc/math/geom/Vec3;", 18 },
	{ "dim", &class_arc_math_geom_Vec3, offsetof(arc_math_geom_BoundingBox, F_dim), "Larc/math/geom/Vec3;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_BoundingBox, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_BoundingBox_arc_math_geom_BoundingBox, 0, "(Larc/math/geom/BoundingBox;)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_BoundingBox_arc_math_geom_Vec3_arc_math_geom_Vec3, 0, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V", 1 },
	{ "min", (intptr_t) SM_arc_math_geom_BoundingBox_min_float_float_R_float, 0, "(FF)F", 8 },
	{ "max", (intptr_t) SM_arc_math_geom_BoundingBox_max_float_float_R_float, 0, "(FF)F", 8 },
	{ "getCenter", (intptr_t) M_arc_math_geom_BoundingBox_getCenter_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_BoundingBox_getCenter_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getCenterX", (intptr_t) M_arc_math_geom_BoundingBox_getCenterX_R_float, VTABLE_arc_math_geom_BoundingBox_getCenterX_R_float, "()F", 1 },
	{ "getCenterY", (intptr_t) M_arc_math_geom_BoundingBox_getCenterY_R_float, VTABLE_arc_math_geom_BoundingBox_getCenterY_R_float, "()F", 1 },
	{ "getCenterZ", (intptr_t) M_arc_math_geom_BoundingBox_getCenterZ_R_float, VTABLE_arc_math_geom_BoundingBox_getCenterZ_R_float, "()F", 1 },
	{ "getCorner000", (intptr_t) M_arc_math_geom_BoundingBox_getCorner000_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_BoundingBox_getCorner000_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getCorner001", (intptr_t) M_arc_math_geom_BoundingBox_getCorner001_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_BoundingBox_getCorner001_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getCorner010", (intptr_t) M_arc_math_geom_BoundingBox_getCorner010_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_BoundingBox_getCorner010_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getCorner011", (intptr_t) M_arc_math_geom_BoundingBox_getCorner011_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_BoundingBox_getCorner011_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getCorner100", (intptr_t) M_arc_math_geom_BoundingBox_getCorner100_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_BoundingBox_getCorner100_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getCorner101", (intptr_t) M_arc_math_geom_BoundingBox_getCorner101_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_BoundingBox_getCorner101_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getCorner110", (intptr_t) M_arc_math_geom_BoundingBox_getCorner110_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_BoundingBox_getCorner110_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getCorner111", (intptr_t) M_arc_math_geom_BoundingBox_getCorner111_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_BoundingBox_getCorner111_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getDimensions", (intptr_t) M_arc_math_geom_BoundingBox_getDimensions_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_BoundingBox_getDimensions_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getWidth", (intptr_t) M_arc_math_geom_BoundingBox_getWidth_R_float, VTABLE_arc_math_geom_BoundingBox_getWidth_R_float, "()F", 1 },
	{ "getHeight", (intptr_t) M_arc_math_geom_BoundingBox_getHeight_R_float, VTABLE_arc_math_geom_BoundingBox_getHeight_R_float, "()F", 1 },
	{ "getDepth", (intptr_t) M_arc_math_geom_BoundingBox_getDepth_R_float, VTABLE_arc_math_geom_BoundingBox_getDepth_R_float, "()F", 1 },
	{ "getMin", (intptr_t) M_arc_math_geom_BoundingBox_getMin_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_BoundingBox_getMin_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "getMax", (intptr_t) M_arc_math_geom_BoundingBox_getMax_arc_math_geom_Vec3_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_BoundingBox_getMax_arc_math_geom_Vec3_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_BoundingBox_set_arc_math_geom_BoundingBox_R_arc_math_geom_BoundingBox, VTABLE_arc_math_geom_BoundingBox_set_arc_math_geom_BoundingBox_R_arc_math_geom_BoundingBox, "(Larc/math/geom/BoundingBox;)Larc/math/geom/BoundingBox;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox, VTABLE_arc_math_geom_BoundingBox_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/BoundingBox;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_BoundingBox_set_Array1_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox, VTABLE_arc_math_geom_BoundingBox_set_Array1_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox, "([Larc/math/geom/Vec3;)Larc/math/geom/BoundingBox;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_BoundingBox_set_arc_struct_Seq_R_arc_math_geom_BoundingBox, VTABLE_arc_math_geom_BoundingBox_set_arc_struct_Seq_R_arc_math_geom_BoundingBox, "(Larc/struct/Seq;)Larc/math/geom/BoundingBox;", 1 },
	{ "inf", (intptr_t) M_arc_math_geom_BoundingBox_inf_R_arc_math_geom_BoundingBox, VTABLE_arc_math_geom_BoundingBox_inf_R_arc_math_geom_BoundingBox, "()Larc/math/geom/BoundingBox;", 1 },
	{ "ext", (intptr_t) M_arc_math_geom_BoundingBox_ext_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox, VTABLE_arc_math_geom_BoundingBox_ext_arc_math_geom_Vec3_R_arc_math_geom_BoundingBox, "(Larc/math/geom/Vec3;)Larc/math/geom/BoundingBox;", 1 },
	{ "clr", (intptr_t) M_arc_math_geom_BoundingBox_clr_R_arc_math_geom_BoundingBox, VTABLE_arc_math_geom_BoundingBox_clr_R_arc_math_geom_BoundingBox, "()Larc/math/geom/BoundingBox;", 1 },
	{ "isValid", (intptr_t) M_arc_math_geom_BoundingBox_isValid_R_boolean, VTABLE_arc_math_geom_BoundingBox_isValid_R_boolean, "()Z", 1 },
	{ "ext", (intptr_t) M_arc_math_geom_BoundingBox_ext_arc_math_geom_BoundingBox_R_arc_math_geom_BoundingBox, VTABLE_arc_math_geom_BoundingBox_ext_arc_math_geom_BoundingBox_R_arc_math_geom_BoundingBox, "(Larc/math/geom/BoundingBox;)Larc/math/geom/BoundingBox;", 1 },
	{ "ext", (intptr_t) M_arc_math_geom_BoundingBox_ext_arc_math_geom_Vec3_float_R_arc_math_geom_BoundingBox, VTABLE_arc_math_geom_BoundingBox_ext_arc_math_geom_Vec3_float_R_arc_math_geom_BoundingBox, "(Larc/math/geom/Vec3;F)Larc/math/geom/BoundingBox;", 1 },
	{ "contains", (intptr_t) M_arc_math_geom_BoundingBox_contains_arc_math_geom_BoundingBox_R_boolean, VTABLE_arc_math_geom_BoundingBox_contains_arc_math_geom_BoundingBox_R_boolean, "(Larc/math/geom/BoundingBox;)Z", 1 },
	{ "intersects", (intptr_t) M_arc_math_geom_BoundingBox_intersects_arc_math_geom_BoundingBox_R_boolean, VTABLE_arc_math_geom_BoundingBox_intersects_arc_math_geom_BoundingBox_R_boolean, "(Larc/math/geom/BoundingBox;)Z", 1 },
	{ "contains", (intptr_t) M_arc_math_geom_BoundingBox_contains_arc_math_geom_Vec3_R_boolean, VTABLE_arc_math_geom_BoundingBox_contains_arc_math_geom_Vec3_R_boolean, "(Larc/math/geom/Vec3;)Z", 1 },
	{ "toString", (intptr_t) M_arc_math_geom_BoundingBox_toString_R_java_lang_String, VTABLE_arc_math_geom_BoundingBox_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "ext", (intptr_t) M_arc_math_geom_BoundingBox_ext_float_float_float_R_arc_math_geom_BoundingBox, VTABLE_arc_math_geom_BoundingBox_ext_float_float_float_R_arc_math_geom_BoundingBox, "(FFF)Larc/math/geom/BoundingBox;", 1 },
};

Class class_arc_math_geom_BoundingBox{
		.nativeName = (intptr_t) "arc/math/geom/BoundingBox",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_BoundingBox),
		.classVtable = (intptr_t) vtable_arc_math_geom_BoundingBox,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_BoundingBox,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_BoundingBox,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 38,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_BoundingBox = registerClass(&class_arc_math_geom_BoundingBox);

}
