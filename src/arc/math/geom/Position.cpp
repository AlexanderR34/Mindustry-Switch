#include "arc/math/geom/Position.h"
#include "arc/math/Mathf.h"
#include "java/lang/Object.h"
#include "arc/math/Angles.h"
#include "arc/math/geom/Position.h"

extern "C" {


void mark_arc_math_geom_Position(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_geom_Position *) object;
}

void clinit_arc_math_geom_Position(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jfloat M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Position:angleTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(13);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp3 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp4 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, temp0, temp1, temp2, temp3);
	popStackFrame(ctx);
	return temp4;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Position_angleTo_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Position:angleTo", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(17);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_arc_math_Angles_angle_float_float_float_float_R_float(ctx, temp0, temp1, (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Position:dst2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_arc_math_geom_Position_dst2_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_dst2_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Position:dst", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp2 = (jfloat)((func_arc_math_geom_Position_dst_float_float_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_dst_float_float_R_float, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Position_dst_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Position:dst", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(29);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].f = (temp0 - (frame[1].f));
	LINE_NUMBER(30);
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[0].o)))(ctx, (frame[0].o));
	frame[4].f = (temp1 - (frame[2].f));
	LINE_NUMBER(31);
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_sqrt_float_R_float(ctx, (((frame[3].f) * (frame[3].f)) + ((frame[4].f) * (frame[4].f))));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jfloat M_arc_math_geom_Position_dst2_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Position:dst2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(35);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[0].o)))(ctx, (frame[0].o));
	frame[3].f = (temp0 - (frame[1].f));
	LINE_NUMBER(36);
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[0].o)))(ctx, (frame[0].o));
	frame[4].f = (temp1 - (frame[2].f));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (((frame[3].f) * (frame[3].f)) + ((frame[4].f) * (frame[4].f)));
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Position:within", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[1].o)))(ctx, (frame[1].o));
	jint temp2 = (jint)((func_arc_math_geom_Position_within_float_float_float_R_boolean) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_within_float_float_float_R_boolean, sp[0].o))(ctx, sp[0].o, temp0, temp1, (frame[2].f));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Position_within_float_float_float_R_boolean(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Position:within", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(45);
	jfloat temp0 = (jfloat)((func_arc_math_geom_Position_getX_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getX_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_arc_math_geom_Position_getY_R_float) resolveInterfaceMethod(ctx, &class_arc_math_geom_Position, INDEX_arc_math_geom_Position_getY_R_float, (frame[0].o)))(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_dst2_float_float_float_float_R_float(ctx, temp0, temp1, (frame[1].f), (frame[2].f));
	if ((floatCompare(temp2, ((frame[3].f) * (frame[3].f)), 1)) >= 0) goto label_1;
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

void *vtable_arc_math_geom_Position[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
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
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
};

static MethodMetadata methods[] {
	{ "getX", 0, INDEX_arc_math_geom_Position_getX_R_float, "()F", 1025 },
	{ "getY", 0, INDEX_arc_math_geom_Position_getY_R_float, "()F", 1025 },
	{ "angleTo", (intptr_t) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float, INDEX_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float, "(Larc/math/geom/Position;)F", 1 },
	{ "angleTo", (intptr_t) M_arc_math_geom_Position_angleTo_float_float_R_float, INDEX_arc_math_geom_Position_angleTo_float_float_R_float, "(FF)F", 1 },
	{ "dst2", (intptr_t) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float, INDEX_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float, "(Larc/math/geom/Position;)F", 1 },
	{ "dst", (intptr_t) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float, INDEX_arc_math_geom_Position_dst_arc_math_geom_Position_R_float, "(Larc/math/geom/Position;)F", 1 },
	{ "dst", (intptr_t) M_arc_math_geom_Position_dst_float_float_R_float, INDEX_arc_math_geom_Position_dst_float_float_R_float, "(FF)F", 1 },
	{ "dst2", (intptr_t) M_arc_math_geom_Position_dst2_float_float_R_float, INDEX_arc_math_geom_Position_dst2_float_float_R_float, "(FF)F", 1 },
	{ "within", (intptr_t) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean, INDEX_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean, "(Larc/math/geom/Position;F)Z", 1 },
	{ "within", (intptr_t) M_arc_math_geom_Position_within_float_float_float_R_boolean, INDEX_arc_math_geom_Position_within_float_float_float_R_boolean, "(FFF)Z", 1 },
};

Class class_arc_math_geom_Position{
		.nativeName = (intptr_t) "arc/math/geom/Position",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Position),
		.classVtable = (intptr_t) vtable_arc_math_geom_Position,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Position,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Position,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Position = registerClass(&class_arc_math_geom_Position);

}
