#include "arc/math/geom/Vector.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Vector.h"
#include "arc/math/Interp.h"

extern "C" {


void mark_arc_math_geom_Vector(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_geom_Vector *) object;
}

void clinit_arc_math_geom_Vector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject M_arc_math_geom_Vector_plus_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vector:plus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(238);
	sp[0].o = (jobject)((func_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vector_minus_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vector:minus", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((func_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vector_unaryMinus_R_arc_math_geom_Vector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vector:unaryMinus", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, (frame[0].o)))(ctx, (frame[0].o), (jfloat(-1.0f)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Vector_times_arc_math_geom_Vector_R_arc_math_geom_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Vector:times", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_arc_math_geom_Vector_scl_arc_math_geom_Vector_R_arc_math_geom_Vector) resolveInterfaceMethod(ctx, &class_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_scl_arc_math_geom_Vector_R_arc_math_geom_Vector, (frame[0].o)))(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Vector[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Vector_plus_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vector_minus_arc_math_geom_Vector_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vector_unaryMinus_R_arc_math_geom_Vector,
	(void *) M_arc_math_geom_Vector_times_arc_math_geom_Vector_R_arc_math_geom_Vector,
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
	{ "cpy", "()Larc/math/geom/Vector;" },
	{ "len", "()F" },
	{ "len2", "()F" },
	{ "limit", "(F)Larc/math/geom/Vector;" },
	{ "limit2", "(F)Larc/math/geom/Vector;" },
	{ "setLength", "(F)Larc/math/geom/Vector;" },
	{ "setLength2", "(F)Larc/math/geom/Vector;" },
	{ "clamp", "(FF)Larc/math/geom/Vector;" },
	{ "set", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "sub", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "nor", "()Larc/math/geom/Vector;" },
	{ "add", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "dot", "(Larc/math/geom/Vector;)F" },
	{ "scl", "(F)Larc/math/geom/Vector;" },
	{ "scl", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "div", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "dst", "(Larc/math/geom/Vector;)F" },
	{ "dst2", "(Larc/math/geom/Vector;)F" },
	{ "lerp", "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;" },
	{ "interpolate", "(Larc/math/geom/Vector;FLarc/math/Interp;)Larc/math/geom/Vector;" },
	{ "setToRandomDirection", "()Larc/math/geom/Vector;" },
	{ "isUnit", "()Z" },
	{ "isUnit", "(F)Z" },
	{ "isZero", "()Z" },
	{ "isZero", "(F)Z" },
	{ "isOnLine", "(Larc/math/geom/Vector;F)Z" },
	{ "isOnLine", "(Larc/math/geom/Vector;)Z" },
	{ "isCollinear", "(Larc/math/geom/Vector;F)Z" },
	{ "isCollinear", "(Larc/math/geom/Vector;)Z" },
	{ "isCollinearOpposite", "(Larc/math/geom/Vector;F)Z" },
	{ "isCollinearOpposite", "(Larc/math/geom/Vector;)Z" },
	{ "isPerpendicular", "(Larc/math/geom/Vector;)Z" },
	{ "isPerpendicular", "(Larc/math/geom/Vector;F)Z" },
	{ "hasSameDirection", "(Larc/math/geom/Vector;)Z" },
	{ "hasOppositeDirection", "(Larc/math/geom/Vector;)Z" },
	{ "epsilonEquals", "(Larc/math/geom/Vector;F)Z" },
	{ "mulAdd", "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;" },
	{ "mulAdd", "(Larc/math/geom/Vector;Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "setZero", "()Larc/math/geom/Vector;" },
	{ "plus", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "minus", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
	{ "unaryMinus", "()Larc/math/geom/Vector;" },
	{ "times", "(Larc/math/geom/Vector;)Larc/math/geom/Vector;" },
};

static MethodMetadata methods[] {
	{ "cpy", 0, INDEX_arc_math_geom_Vector_cpy_R_arc_math_geom_Vector, "()Larc/math/geom/Vector;", 1025 },
	{ "len", 0, INDEX_arc_math_geom_Vector_len_R_float, "()F", 1025 },
	{ "len2", 0, INDEX_arc_math_geom_Vector_len2_R_float, "()F", 1025 },
	{ "limit", 0, INDEX_arc_math_geom_Vector_limit_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 1025 },
	{ "limit2", 0, INDEX_arc_math_geom_Vector_limit2_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 1025 },
	{ "setLength", 0, INDEX_arc_math_geom_Vector_setLength_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 1025 },
	{ "setLength2", 0, INDEX_arc_math_geom_Vector_setLength2_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 1025 },
	{ "clamp", 0, INDEX_arc_math_geom_Vector_clamp_float_float_R_arc_math_geom_Vector, "(FF)Larc/math/geom/Vector;", 1025 },
	{ "set", 0, INDEX_arc_math_geom_Vector_set_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 1025 },
	{ "sub", 0, INDEX_arc_math_geom_Vector_sub_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 1025 },
	{ "nor", 0, INDEX_arc_math_geom_Vector_nor_R_arc_math_geom_Vector, "()Larc/math/geom/Vector;", 1025 },
	{ "add", 0, INDEX_arc_math_geom_Vector_add_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 1025 },
	{ "dot", 0, INDEX_arc_math_geom_Vector_dot_arc_math_geom_Vector_R_float, "(Larc/math/geom/Vector;)F", 1025 },
	{ "scl", 0, INDEX_arc_math_geom_Vector_scl_float_R_arc_math_geom_Vector, "(F)Larc/math/geom/Vector;", 1025 },
	{ "scl", 0, INDEX_arc_math_geom_Vector_scl_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 1025 },
	{ "div", 0, INDEX_arc_math_geom_Vector_div_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 1025 },
	{ "dst", 0, INDEX_arc_math_geom_Vector_dst_arc_math_geom_Vector_R_float, "(Larc/math/geom/Vector;)F", 1025 },
	{ "dst2", 0, INDEX_arc_math_geom_Vector_dst2_arc_math_geom_Vector_R_float, "(Larc/math/geom/Vector;)F", 1025 },
	{ "lerp", 0, INDEX_arc_math_geom_Vector_lerp_arc_math_geom_Vector_float_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;", 1025 },
	{ "interpolate", 0, INDEX_arc_math_geom_Vector_interpolate_arc_math_geom_Vector_float_arc_math_Interp_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;FLarc/math/Interp;)Larc/math/geom/Vector;", 1025 },
	{ "setToRandomDirection", 0, INDEX_arc_math_geom_Vector_setToRandomDirection_R_arc_math_geom_Vector, "()Larc/math/geom/Vector;", 1025 },
	{ "isUnit", 0, INDEX_arc_math_geom_Vector_isUnit_R_boolean, "()Z", 1025 },
	{ "isUnit", 0, INDEX_arc_math_geom_Vector_isUnit_float_R_boolean, "(F)Z", 1025 },
	{ "isZero", 0, INDEX_arc_math_geom_Vector_isZero_R_boolean, "()Z", 1025 },
	{ "isZero", 0, INDEX_arc_math_geom_Vector_isZero_float_R_boolean, "(F)Z", 1025 },
	{ "isOnLine", 0, INDEX_arc_math_geom_Vector_isOnLine_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 1025 },
	{ "isOnLine", 0, INDEX_arc_math_geom_Vector_isOnLine_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 1025 },
	{ "isCollinear", 0, INDEX_arc_math_geom_Vector_isCollinear_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 1025 },
	{ "isCollinear", 0, INDEX_arc_math_geom_Vector_isCollinear_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 1025 },
	{ "isCollinearOpposite", 0, INDEX_arc_math_geom_Vector_isCollinearOpposite_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 1025 },
	{ "isCollinearOpposite", 0, INDEX_arc_math_geom_Vector_isCollinearOpposite_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 1025 },
	{ "isPerpendicular", 0, INDEX_arc_math_geom_Vector_isPerpendicular_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 1025 },
	{ "isPerpendicular", 0, INDEX_arc_math_geom_Vector_isPerpendicular_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 1025 },
	{ "hasSameDirection", 0, INDEX_arc_math_geom_Vector_hasSameDirection_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 1025 },
	{ "hasOppositeDirection", 0, INDEX_arc_math_geom_Vector_hasOppositeDirection_arc_math_geom_Vector_R_boolean, "(Larc/math/geom/Vector;)Z", 1025 },
	{ "epsilonEquals", 0, INDEX_arc_math_geom_Vector_epsilonEquals_arc_math_geom_Vector_float_R_boolean, "(Larc/math/geom/Vector;F)Z", 1025 },
	{ "mulAdd", 0, INDEX_arc_math_geom_Vector_mulAdd_arc_math_geom_Vector_float_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;F)Larc/math/geom/Vector;", 1025 },
	{ "mulAdd", 0, INDEX_arc_math_geom_Vector_mulAdd_arc_math_geom_Vector_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;Larc/math/geom/Vector;)Larc/math/geom/Vector;", 1025 },
	{ "setZero", 0, INDEX_arc_math_geom_Vector_setZero_R_arc_math_geom_Vector, "()Larc/math/geom/Vector;", 1025 },
	{ "plus", (intptr_t) M_arc_math_geom_Vector_plus_arc_math_geom_Vector_R_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_plus_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 1 },
	{ "minus", (intptr_t) M_arc_math_geom_Vector_minus_arc_math_geom_Vector_R_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_minus_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 1 },
	{ "unaryMinus", (intptr_t) M_arc_math_geom_Vector_unaryMinus_R_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_unaryMinus_R_arc_math_geom_Vector, "()Larc/math/geom/Vector;", 1 },
	{ "times", (intptr_t) M_arc_math_geom_Vector_times_arc_math_geom_Vector_R_arc_math_geom_Vector, INDEX_arc_math_geom_Vector_times_arc_math_geom_Vector_R_arc_math_geom_Vector, "(Larc/math/geom/Vector;)Larc/math/geom/Vector;", 1 },
};

Class class_arc_math_geom_Vector{
		.nativeName = (intptr_t) "arc/math/geom/Vector",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Vector),
		.classVtable = (intptr_t) vtable_arc_math_geom_Vector,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Vector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Vector,
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
		.methodCount = 43,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 54,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Vector = registerClass(&class_arc_math_geom_Vector);

}
