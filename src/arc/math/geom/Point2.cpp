#include "arc/math/geom/Point2.h"
#include "java/lang/Math.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "arc/math/geom/Point2.h"
#include "java/lang/Class.h"

extern "C" {


void mark_arc_math_geom_Point2(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_geom_Point2 *) object;
}

void clinit_arc_math_geom_Point2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_geom_Point2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Point2(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(13);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Point2_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Point2(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(22);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].i);
	LINE_NUMBER(23);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Point2_arc_math_geom_Point2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Point2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(31);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_math_geom_Point2_unpack_int_R_arc_math_geom_Point2(jcontext ctx, jint param0) {
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:unpack", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Point2(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(36);
	clinit_arc_math_geom_Point2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[0].o, (jshort((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (16))))), (jshort(((frame[0].i) & (jint(65535))))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_arc_math_geom_Point2_pack_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:pack", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Point2(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return (((jshort((frame[0].i))) << (16)) | ((jshort((frame[1].i))) & (jint(65535))));
	}

	popStackFrame(ctx);
}

jshort SM_arc_math_geom_Point2_x_int_R_short(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:x", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Point2(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (jshort((bit_cast<jint>(bit_cast<uint32_t>((frame[0].i)) >> (16)))));
	}

	popStackFrame(ctx);
}

jshort SM_arc_math_geom_Point2_y_int_R_short(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:y", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Point2(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return (jshort(((frame[0].i) & (jint(65535)))));
	}

	popStackFrame(ctx);
}

jint M_arc_math_geom_Point2_pack_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:pack", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	jint temp0 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Point2_set_arc_math_geom_Point2_R_arc_math_geom_Point2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(66);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(77);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x = (frame[1].i);
	LINE_NUMBER(78);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[2].i);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Point2_dst2_arc_math_geom_Point2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:dst2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	frame[2].i = (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(88);
	frame[3].i = (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (jfloat((((frame[2].i) * (frame[2].i)) + ((frame[3].i) * (frame[3].i)))));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Point2_dst2_int_int_R_float(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:dst2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(99);
	frame[3].i = ((frame[1].i) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(100);
	frame[4].i = ((frame[2].i) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (jfloat((((frame[3].i) * (frame[3].i)) + ((frame[4].i) * (frame[4].i)))));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Point2_dst_arc_math_geom_Point2_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:dst", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	frame[2].i = (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(111);
	frame[3].i = (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(113);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[2].i) * (frame[2].i)) + ((frame[3].i) * (frame[3].i))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Point2_dst_int_int_R_float(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:dst", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(122);
	frame[3].i = ((frame[1].i) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x));
	LINE_NUMBER(123);
	frame[4].i = ((frame[2].i) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(125);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((((frame[3].i) * (frame[3].i)) + ((frame[4].i) * (frame[4].i))))));
	popStackFrame(ctx);
	return (jfloat(temp0));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Point2_add_arc_math_geom_Point2_R_arc_math_geom_Point2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	sp[0].o = frame[0].o;
	((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x = (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y = (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y) + ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(136);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Point2_add_int_int_R_arc_math_geom_Point2(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x = (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x) + (frame[1].i));
	LINE_NUMBER(147);
	sp[0].o = frame[0].o;
	((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y = (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y) + (frame[2].i));
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Point2_sub_arc_math_geom_Point2_R_arc_math_geom_Point2(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:sub", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(157);
	sp[0].o = frame[0].o;
	((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x = (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x));
	LINE_NUMBER(158);
	sp[0].o = frame[0].o;
	((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y = (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y) - ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y));
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:sub", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x = (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_x) - (frame[1].i));
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y = (((jint)((arc_math_geom_Point2 *) NULL_CHECK(sp[0].o))->F_y) - (frame[2].i));
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Point2_cpy_R_arc_math_geom_Point2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:cpy", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	clinit_arc_math_geom_Point2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_arc_math_geom_Point2(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Point2_rotate_int_R_arc_math_geom_Point2(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:rotate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(183);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[2].i;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[1].i));
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(184);
	frame[3].i = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x);
	LINE_NUMBER(185);
	if ((frame[1].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(186);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x = (-((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y));
	LINE_NUMBER(187);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].i);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(189);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y);
	LINE_NUMBER(190);
	((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y = (-(frame[3].i));
	}
label_8:;
	{
	LINE_NUMBER(183);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Point2_equals_int_int_R_boolean(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(197);
	if (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x) != (frame[1].i)) goto label_1;
	}
	{
	if (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y) != (frame[2].i)) goto label_1;
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

jbool SM_arc_math_geom_Point2_equals_int_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:equals", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Point2(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(201);
	if ((frame[0].i) != (frame[2].i)) goto label_1;
	}
	{
	if ((frame[1].i) != (frame[3].i)) goto label_1;
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

jbool M_arc_math_geom_Point2_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(206);
	if ((frame[0].o) != (frame[1].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(207);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(208);
	frame[2].o = (checkCast(ctx, &class_arc_math_geom_Point2, (frame[1].o)));
	LINE_NUMBER(209);
	if (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x) != ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_x)) goto label_5;
	}
	{
	if (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y) != ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[2].o)))->F_y)) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_arc_math_geom_Point2_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(214);
	popStackFrame(ctx);
	return ((((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x) * (jint(49471))) + (((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y) * (jint(37345))));
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Point2_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Point2:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(219);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Point2[] {
	(void *) M_arc_math_geom_Point2_hashCode_R_int,
	(void *) M_arc_math_geom_Point2_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_geom_Point2_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_geom_Point2_pack_R_int,
	(void *) M_arc_math_geom_Point2_set_arc_math_geom_Point2_R_arc_math_geom_Point2,
	(void *) M_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2,
	(void *) M_arc_math_geom_Point2_dst2_arc_math_geom_Point2_R_float,
	(void *) M_arc_math_geom_Point2_dst2_int_int_R_float,
	(void *) M_arc_math_geom_Point2_dst_arc_math_geom_Point2_R_float,
	(void *) M_arc_math_geom_Point2_dst_int_int_R_float,
	(void *) M_arc_math_geom_Point2_add_arc_math_geom_Point2_R_arc_math_geom_Point2,
	(void *) M_arc_math_geom_Point2_add_int_int_R_arc_math_geom_Point2,
	(void *) M_arc_math_geom_Point2_sub_arc_math_geom_Point2_R_arc_math_geom_Point2,
	(void *) M_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2,
	(void *) M_arc_math_geom_Point2_cpy_R_arc_math_geom_Point2,
	(void *) M_arc_math_geom_Point2_rotate_int_R_arc_math_geom_Point2,
	(void *) M_arc_math_geom_Point2_equals_int_int_R_boolean,
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
	{ "pack", "()I" },
	{ "set", "(Larc/math/geom/Point2;)Larc/math/geom/Point2;" },
	{ "set", "(II)Larc/math/geom/Point2;" },
	{ "dst2", "(Larc/math/geom/Point2;)F" },
	{ "dst2", "(II)F" },
	{ "dst", "(Larc/math/geom/Point2;)F" },
	{ "dst", "(II)F" },
	{ "add", "(Larc/math/geom/Point2;)Larc/math/geom/Point2;" },
	{ "add", "(II)Larc/math/geom/Point2;" },
	{ "sub", "(Larc/math/geom/Point2;)Larc/math/geom/Point2;" },
	{ "sub", "(II)Larc/math/geom/Point2;" },
	{ "cpy", "()Larc/math/geom/Point2;" },
	{ "rotate", "(I)Larc/math/geom/Point2;" },
	{ "equals", "(II)Z" },
};

static FieldMetadata fields[] {
	{ "x", &class_int, offsetof(arc_math_geom_Point2, F_x), "I", 1 },
	{ "y", &class_int, offsetof(arc_math_geom_Point2, F_y), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Point2, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Point2_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Point2_arc_math_geom_Point2, 0, "(Larc/math/geom/Point2;)V", 1 },
	{ "unpack", (intptr_t) SM_arc_math_geom_Point2_unpack_int_R_arc_math_geom_Point2, 0, "(I)Larc/math/geom/Point2;", 9 },
	{ "pack", (intptr_t) SM_arc_math_geom_Point2_pack_int_int_R_int, 0, "(II)I", 9 },
	{ "x", (intptr_t) SM_arc_math_geom_Point2_x_int_R_short, 0, "(I)S", 9 },
	{ "y", (intptr_t) SM_arc_math_geom_Point2_y_int_R_short, 0, "(I)S", 9 },
	{ "pack", (intptr_t) M_arc_math_geom_Point2_pack_R_int, VTABLE_arc_math_geom_Point2_pack_R_int, "()I", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Point2_set_arc_math_geom_Point2_R_arc_math_geom_Point2, VTABLE_arc_math_geom_Point2_set_arc_math_geom_Point2_R_arc_math_geom_Point2, "(Larc/math/geom/Point2;)Larc/math/geom/Point2;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2, VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2, "(II)Larc/math/geom/Point2;", 1 },
	{ "dst2", (intptr_t) M_arc_math_geom_Point2_dst2_arc_math_geom_Point2_R_float, VTABLE_arc_math_geom_Point2_dst2_arc_math_geom_Point2_R_float, "(Larc/math/geom/Point2;)F", 1 },
	{ "dst2", (intptr_t) M_arc_math_geom_Point2_dst2_int_int_R_float, VTABLE_arc_math_geom_Point2_dst2_int_int_R_float, "(II)F", 1 },
	{ "dst", (intptr_t) M_arc_math_geom_Point2_dst_arc_math_geom_Point2_R_float, VTABLE_arc_math_geom_Point2_dst_arc_math_geom_Point2_R_float, "(Larc/math/geom/Point2;)F", 1 },
	{ "dst", (intptr_t) M_arc_math_geom_Point2_dst_int_int_R_float, VTABLE_arc_math_geom_Point2_dst_int_int_R_float, "(II)F", 1 },
	{ "add", (intptr_t) M_arc_math_geom_Point2_add_arc_math_geom_Point2_R_arc_math_geom_Point2, VTABLE_arc_math_geom_Point2_add_arc_math_geom_Point2_R_arc_math_geom_Point2, "(Larc/math/geom/Point2;)Larc/math/geom/Point2;", 1 },
	{ "add", (intptr_t) M_arc_math_geom_Point2_add_int_int_R_arc_math_geom_Point2, VTABLE_arc_math_geom_Point2_add_int_int_R_arc_math_geom_Point2, "(II)Larc/math/geom/Point2;", 1 },
	{ "sub", (intptr_t) M_arc_math_geom_Point2_sub_arc_math_geom_Point2_R_arc_math_geom_Point2, VTABLE_arc_math_geom_Point2_sub_arc_math_geom_Point2_R_arc_math_geom_Point2, "(Larc/math/geom/Point2;)Larc/math/geom/Point2;", 1 },
	{ "sub", (intptr_t) M_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2, VTABLE_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2, "(II)Larc/math/geom/Point2;", 1 },
	{ "cpy", (intptr_t) M_arc_math_geom_Point2_cpy_R_arc_math_geom_Point2, VTABLE_arc_math_geom_Point2_cpy_R_arc_math_geom_Point2, "()Larc/math/geom/Point2;", 1 },
	{ "rotate", (intptr_t) M_arc_math_geom_Point2_rotate_int_R_arc_math_geom_Point2, VTABLE_arc_math_geom_Point2_rotate_int_R_arc_math_geom_Point2, "(I)Larc/math/geom/Point2;", 1 },
	{ "equals", (intptr_t) M_arc_math_geom_Point2_equals_int_int_R_boolean, VTABLE_arc_math_geom_Point2_equals_int_int_R_boolean, "(II)Z", 1 },
	{ "equals", (intptr_t) SM_arc_math_geom_Point2_equals_int_int_int_int_R_boolean, 0, "(IIII)Z", 9 },
	{ "equals", (intptr_t) M_arc_math_geom_Point2_equals_java_lang_Object_R_boolean, VTABLE_arc_math_geom_Point2_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_arc_math_geom_Point2_hashCode_R_int, VTABLE_arc_math_geom_Point2_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_arc_math_geom_Point2_toString_R_java_lang_String, VTABLE_arc_math_geom_Point2_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_math_geom_Point2{
		.nativeName = (intptr_t) "arc/math/geom/Point2",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Point2),
		.classVtable = (intptr_t) vtable_arc_math_geom_Point2,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Point2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Point2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 25,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Point2 = registerClass(&class_arc_math_geom_Point2);

}
