#include "arc/math/geom/Ray.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Ray.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "arc/math/geom/Vec3.h"

extern "C" {


void mark_arc_math_geom_Ray(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_geom_Ray *) object;
	if (self->F_origin)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_origin)->clazz)->markFunction)((jobject) self->F_origin, mark, depth + 1);
	if (self->F_direction)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_direction)->clazz)->markFunction)((jobject) self->F_direction, mark, depth + 1);
}

void clinit_arc_math_geom_Ray(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_geom_Ray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Ray:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Ray(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_Ray *) NULL_CHECK(sp[0].o))->F_origin = (jref) sp[1].o;
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_Ray *) NULL_CHECK(sp[0].o))->F_direction = (jref) sp[1].o;
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Ray:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Ray(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(19);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_Ray *) NULL_CHECK(sp[0].o))->F_origin = (jref) sp[1].o;
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_math_geom_Ray *) NULL_CHECK(sp[0].o))->F_direction = (jref) sp[1].o;
	LINE_NUMBER(20);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(21);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Ray_cpy_R_arc_math_geom_Ray(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Ray:cpy", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	clinit_arc_math_geom_Ray(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Ray);
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[2].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	init_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Ray_getEndPoint_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Ray:getEndPoint", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(36);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_scl_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].f));
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Ray_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Ray(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Ray:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(47);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Ray_set_float_float_float_float_float_float_R_arc_math_geom_Ray(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Ray:set", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].f), (frame[2].f), (frame[3].f));
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[4].f), (frame[5].f), (frame[6].f));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Ray_set_arc_math_geom_Ray_R_arc_math_geom_Ray(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Ray:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[1].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[1].o)))->F_direction;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Ray_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Ray:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ray ["_j))));
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Ray_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Ray:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	if ((frame[1].o) != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(87);
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
	LINE_NUMBER(88);
	frame[2].o = (checkCast(ctx, &class_arc_math_geom_Ray, (frame[1].o)));
	LINE_NUMBER(89);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[2].o)))->F_direction;
	jint temp0 = (jint)((func_arc_math_geom_Vec3_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[1].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[2].o)))->F_origin;
	jint temp0 = (jint)((func_arc_math_geom_Vec3_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
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

jint M_arc_math_geom_Ray_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Ray:hashCode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	frame[1].i = (73);
	LINE_NUMBER(95);
	frame[2].i = (jint(1));
	LINE_NUMBER(96);
	jint temp0 = (73) * (frame[2].i);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_direction;
	jint temp1 = (jint)((func_arc_math_geom_Vec3_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_hashCode_R_int])(ctx, sp[0].o);
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(97);
	jint temp2 = (73) * (frame[2].i);
	sp[0].o = (jobject)((arc_math_geom_Ray *) NULL_CHECK((frame[0].o)))->F_origin;
	jint temp3 = (jint)((func_arc_math_geom_Vec3_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_hashCode_R_int])(ctx, sp[0].o);
	frame[2].i = (temp2 + temp3);
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Ray[] {
	(void *) M_arc_math_geom_Ray_hashCode_R_int,
	(void *) M_arc_math_geom_Ray_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_geom_Ray_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_geom_Ray_cpy_R_arc_math_geom_Ray,
	(void *) M_arc_math_geom_Ray_getEndPoint_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3,
	(void *) M_arc_math_geom_Ray_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Ray,
	(void *) M_arc_math_geom_Ray_set_float_float_float_float_float_float_R_arc_math_geom_Ray,
	(void *) M_arc_math_geom_Ray_set_arc_math_geom_Ray_R_arc_math_geom_Ray,
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
	{ "cpy", "()Larc/math/geom/Ray;" },
	{ "getEndPoint", "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;" },
	{ "set", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Ray;" },
	{ "set", "(FFFFFF)Larc/math/geom/Ray;" },
	{ "set", "(Larc/math/geom/Ray;)Larc/math/geom/Ray;" },
};

static FieldMetadata fields[] {
	{ "origin", &class_arc_math_geom_Vec3, offsetof(arc_math_geom_Ray, F_origin), "Larc/math/geom/Vec3;", 17 },
	{ "direction", &class_arc_math_geom_Vec3, offsetof(arc_math_geom_Ray, F_direction), "Larc/math/geom/Vec3;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Ray, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_math_geom_Ray_arc_math_geom_Vec3_arc_math_geom_Vec3, 0, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V", 1 },
	{ "cpy", (intptr_t) M_arc_math_geom_Ray_cpy_R_arc_math_geom_Ray, VTABLE_arc_math_geom_Ray_cpy_R_arc_math_geom_Ray, "()Larc/math/geom/Ray;", 1 },
	{ "getEndPoint", (intptr_t) M_arc_math_geom_Ray_getEndPoint_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, VTABLE_arc_math_geom_Ray_getEndPoint_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;F)Larc/math/geom/Vec3;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Ray_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Ray, VTABLE_arc_math_geom_Ray_set_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Ray, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Ray;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Ray_set_float_float_float_float_float_float_R_arc_math_geom_Ray, VTABLE_arc_math_geom_Ray_set_float_float_float_float_float_float_R_arc_math_geom_Ray, "(FFFFFF)Larc/math/geom/Ray;", 1 },
	{ "set", (intptr_t) M_arc_math_geom_Ray_set_arc_math_geom_Ray_R_arc_math_geom_Ray, VTABLE_arc_math_geom_Ray_set_arc_math_geom_Ray_R_arc_math_geom_Ray, "(Larc/math/geom/Ray;)Larc/math/geom/Ray;", 1 },
	{ "toString", (intptr_t) M_arc_math_geom_Ray_toString_R_java_lang_String, VTABLE_arc_math_geom_Ray_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "equals", (intptr_t) M_arc_math_geom_Ray_equals_java_lang_Object_R_boolean, VTABLE_arc_math_geom_Ray_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_arc_math_geom_Ray_hashCode_R_int, VTABLE_arc_math_geom_Ray_hashCode_R_int, "()I", 1 },
};

Class class_arc_math_geom_Ray{
		.nativeName = (intptr_t) "arc/math/geom/Ray",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Ray),
		.classVtable = (intptr_t) vtable_arc_math_geom_Ray,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Ray,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Ray,
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
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Ray = registerClass(&class_arc_math_geom_Ray);

}
