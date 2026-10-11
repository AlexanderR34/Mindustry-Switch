#include "arc/math/geom/Intersector3D_SplitTriangle.h"
#include "java/lang/Object.h"
#include "arc/math/geom/Intersector3D.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "arc/math/geom/Intersector3D_SplitTriangle.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_math_geom_Intersector3D$SplitTriangle(jobject object, jint mark, jint depth) {
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
	auto self = (arc_math_geom_Intersector3D$SplitTriangle *) object;
	if (self->F_front)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_front)->clazz)->markFunction)((jobject) self->F_front, mark, depth + 1);
	if (self->F_back)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_back)->clazz)->markFunction)((jobject) self->F_back, mark, depth + 1);
	if (self->F_edgeSplit)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_edgeSplit)->clazz)->markFunction)((jobject) self->F_edgeSplit, mark, depth + 1);
}

void clinit_arc_math_geom_Intersector3D$SplitTriangle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_math_geom_Intersector3D$SplitTriangle_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D$SplitTriangle:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_math_geom_Intersector3D$SplitTriangle(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(572);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(564);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_frontCurrent = (jint(0));
	LINE_NUMBER(565);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_frontOffset = (jint(0));
	LINE_NUMBER(566);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_backOffset = (jint(0));
	LINE_NUMBER(573);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((frame[1].i) * (jint(3))) * (jint(2))));
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK(sp[0].o))->F_front = (jref) sp[1].o;
	LINE_NUMBER(574);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (((frame[1].i) * (jint(3))) * (jint(2))));
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK(sp[0].o))->F_back = (jref) sp[1].o;
	LINE_NUMBER(575);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (frame[1].i));
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK(sp[0].o))->F_edgeSplit = (jref) sp[1].o;
	LINE_NUMBER(576);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_math_geom_Intersector3D$SplitTriangle_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D$SplitTriangle:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(580);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SplitTriangle [front="_j))));
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_front;
	sp[1].o = (jobject)SM_java_util_Arrays_toString_Array1_float_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", back="_j))));
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_back;
	sp[1].o = (jobject)SM_java_util_Arrays_toString_Array1_float_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", numFront="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_numFront));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", numBack="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_numBack));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", total="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_total));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_math_geom_Intersector3D$SplitTriangle_getSide_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D$SplitTriangle:getSide", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return ((jint)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_frontCurrent);
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D$SplitTriangle:setSide", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(589);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_frontCurrent = (frame[1].i);
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D$SplitTriangle:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(593);
	if (((jint)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_frontCurrent) == 0) goto label_1;
	}
	{
	LINE_NUMBER(594);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_front;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_frontOffset), (frame[3].i));
	LINE_NUMBER(595);
	sp[0].o = frame[0].o;
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK(sp[0].o))->F_frontOffset = (((jint)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK(sp[0].o))->F_frontOffset) + (frame[3].i));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(597);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_back;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, temp0, sp[1].o, ((jint)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_backOffset), (frame[3].i));
	LINE_NUMBER(598);
	sp[0].o = frame[0].o;
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK(sp[0].o))->F_backOffset = (((jint)((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK(sp[0].o))->F_backOffset) + (frame[3].i));
	}
label_4:;
	LINE_NUMBER(600);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_math_geom_Intersector3D$SplitTriangle_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/math/geom/Intersector3D$SplitTriangle:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(603);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_frontCurrent = (jint(0));
	LINE_NUMBER(604);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_frontOffset = (jint(0));
	LINE_NUMBER(605);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_backOffset = (jint(0));
	LINE_NUMBER(606);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_numFront = (jint(0));
	LINE_NUMBER(607);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_numBack = (jint(0));
	LINE_NUMBER(608);
	((arc_math_geom_Intersector3D$SplitTriangle *) NULL_CHECK((frame[0].o)))->F_total = (jint(0));
	LINE_NUMBER(609);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_math_geom_Intersector3D$SplitTriangle[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_geom_Intersector3D$SplitTriangle_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_geom_Intersector3D$SplitTriangle_getSide_R_boolean,
	(void *) M_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean,
	(void *) M_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int,
	(void *) M_arc_math_geom_Intersector3D$SplitTriangle_reset,
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
	{ "getSide", "()Z" },
	{ "setSide", "(Z)V" },
	{ "add", "([FII)V" },
	{ "reset", "()V" },
};

static FieldMetadata fields[] {
	{ "front", getArrayClass(&class_float, 1), offsetof(arc_math_geom_Intersector3D$SplitTriangle, F_front), "[F", 1 },
	{ "back", getArrayClass(&class_float, 1), offsetof(arc_math_geom_Intersector3D$SplitTriangle, F_back), "[F", 1 },
	{ "numFront", &class_int, offsetof(arc_math_geom_Intersector3D$SplitTriangle, F_numFront), "I", 1 },
	{ "numBack", &class_int, offsetof(arc_math_geom_Intersector3D$SplitTriangle, F_numBack), "I", 1 },
	{ "total", &class_int, offsetof(arc_math_geom_Intersector3D$SplitTriangle, F_total), "I", 1 },
	{ "edgeSplit", getArrayClass(&class_float, 1), offsetof(arc_math_geom_Intersector3D$SplitTriangle, F_edgeSplit), "[F", 0 },
	{ "frontCurrent", &class_boolean, offsetof(arc_math_geom_Intersector3D$SplitTriangle, F_frontCurrent), "Z", 0 },
	{ "frontOffset", &class_int, offsetof(arc_math_geom_Intersector3D$SplitTriangle, F_frontOffset), "I", 0 },
	{ "backOffset", &class_int, offsetof(arc_math_geom_Intersector3D$SplitTriangle, F_backOffset), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_math_geom_Intersector3D$SplitTriangle_int, 0, "(I)V", 1 },
	{ "toString", (intptr_t) M_arc_math_geom_Intersector3D$SplitTriangle_toString_R_java_lang_String, VTABLE_arc_math_geom_Intersector3D$SplitTriangle_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getSide", (intptr_t) M_arc_math_geom_Intersector3D$SplitTriangle_getSide_R_boolean, VTABLE_arc_math_geom_Intersector3D$SplitTriangle_getSide_R_boolean, "()Z", 0 },
	{ "setSide", (intptr_t) M_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean, VTABLE_arc_math_geom_Intersector3D$SplitTriangle_setSide_boolean, "(Z)V", 0 },
	{ "add", (intptr_t) M_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int, VTABLE_arc_math_geom_Intersector3D$SplitTriangle_add_Array1_float_int_int, "([FII)V", 0 },
	{ "reset", (intptr_t) M_arc_math_geom_Intersector3D$SplitTriangle_reset, VTABLE_arc_math_geom_Intersector3D$SplitTriangle_reset, "()V", 0 },
};

Class class_arc_math_geom_Intersector3D$SplitTriangle{
		.nativeName = (intptr_t) "arc/math/geom/Intersector3D$SplitTriangle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_math_geom_Intersector3D$SplitTriangle),
		.classVtable = (intptr_t) vtable_arc_math_geom_Intersector3D$SplitTriangle,
		.staticInitializer = (intptr_t) clinit_arc_math_geom_Intersector3D$SplitTriangle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_math_geom_Intersector3D$SplitTriangle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_math_geom_Intersector3D,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_math_geom_Intersector3D$SplitTriangle = registerClass(&class_arc_math_geom_Intersector3D$SplitTriangle);

}

