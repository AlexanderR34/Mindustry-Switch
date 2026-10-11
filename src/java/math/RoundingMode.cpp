#include "java/math/RoundingMode.h"
#include "java/math/RoundingMode.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_java_math_RoundingMode_UP;
jobject SF_java_math_RoundingMode_DOWN;
jobject SF_java_math_RoundingMode_CEILING;
jobject SF_java_math_RoundingMode_FLOOR;
jobject SF_java_math_RoundingMode_HALF_UP;
jobject SF_java_math_RoundingMode_HALF_DOWN;
jobject SF_java_math_RoundingMode_HALF_EVEN;
jobject SF_java_math_RoundingMode_UNNECESSARY;
jobject SF_java_math_RoundingMode_$VALUES;

void mark_java_math_RoundingMode(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_math_RoundingMode_UP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_RoundingMode_UP)->clazz)->markFunction)((jobject) SF_java_math_RoundingMode_UP, mark, depth + 1);
		if (SF_java_math_RoundingMode_DOWN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_RoundingMode_DOWN)->clazz)->markFunction)((jobject) SF_java_math_RoundingMode_DOWN, mark, depth + 1);
		if (SF_java_math_RoundingMode_CEILING)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_RoundingMode_CEILING)->clazz)->markFunction)((jobject) SF_java_math_RoundingMode_CEILING, mark, depth + 1);
		if (SF_java_math_RoundingMode_FLOOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_RoundingMode_FLOOR)->clazz)->markFunction)((jobject) SF_java_math_RoundingMode_FLOOR, mark, depth + 1);
		if (SF_java_math_RoundingMode_HALF_UP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_RoundingMode_HALF_UP)->clazz)->markFunction)((jobject) SF_java_math_RoundingMode_HALF_UP, mark, depth + 1);
		if (SF_java_math_RoundingMode_HALF_DOWN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_RoundingMode_HALF_DOWN)->clazz)->markFunction)((jobject) SF_java_math_RoundingMode_HALF_DOWN, mark, depth + 1);
		if (SF_java_math_RoundingMode_HALF_EVEN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_RoundingMode_HALF_EVEN)->clazz)->markFunction)((jobject) SF_java_math_RoundingMode_HALF_EVEN, mark, depth + 1);
		if (SF_java_math_RoundingMode_UNNECESSARY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_RoundingMode_UNNECESSARY)->clazz)->markFunction)((jobject) SF_java_math_RoundingMode_UNNECESSARY, mark, depth + 1);
		if (SF_java_math_RoundingMode_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_math_RoundingMode_$VALUES)->clazz)->markFunction)((jobject) SF_java_math_RoundingMode_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_math_RoundingMode *) object;
}

jobject SM_java_math_RoundingMode_values_R_Array1_java_math_RoundingMode(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/RoundingMode:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_RoundingMode(ctx);
	{
	LINE_NUMBER(93);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = (jobject)SF_java_math_RoundingMode_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_math_RoundingMode, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_math_RoundingMode_valueOf_java_lang_String_R_java_math_RoundingMode(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/RoundingMode:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_RoundingMode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_java_math_RoundingMode)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_math_RoundingMode, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_java_math_RoundingMode_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/RoundingMode:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_RoundingMode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(313);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(314);
	((java_math_RoundingMode *) NULL_CHECK((frame[0].o)))->F_oldMode = (frame[3].i);
	LINE_NUMBER(315);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_math_RoundingMode_valueOf_int_R_java_math_RoundingMode(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/RoundingMode:valueOf", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_RoundingMode(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(326);
	switch((frame[0].i)) {
		case 0: goto label_1;
		case 1: goto label_2;
		case 2: goto label_3;
		case 3: goto label_4;
		case 4: goto label_5;
		case 5: goto label_6;
		case 6: goto label_7;
		case 7: goto label_8;
		default: goto label_9;
	}
	}
label_1:;
	{
	LINE_NUMBER(329);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = (jobject)SF_java_math_RoundingMode_UP;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(332);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = (jobject)SF_java_math_RoundingMode_DOWN;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(335);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = (jobject)SF_java_math_RoundingMode_CEILING;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(338);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = (jobject)SF_java_math_RoundingMode_FLOOR;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(341);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = (jobject)SF_java_math_RoundingMode_HALF_UP;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(344);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = (jobject)SF_java_math_RoundingMode_HALF_DOWN;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(347);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = (jobject)SF_java_math_RoundingMode_HALF_EVEN;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(350);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = (jobject)SF_java_math_RoundingMode_UNNECESSARY;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(353);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"argument out of range"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_java_math_RoundingMode_$values_R_Array1_java_math_RoundingMode(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/RoundingMode:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_RoundingMode(ctx);
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)createArray(ctx, &class_java_math_RoundingMode, (8));
	jint temp0 = jint(0);
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_UP;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_DOWN;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_CEILING;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_FLOOR;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_HALF_UP;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_HALF_DOWN;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_HALF_EVEN;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_java_math_RoundingMode(ctx);
	sp[1].o = (jobject)SF_java_math_RoundingMode_UNNECESSARY;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_math_RoundingMode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/math/RoundingMode:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_math_RoundingMode(ctx);
	{
	LINE_NUMBER(118);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_RoundingMode);
	init_java_math_RoundingMode_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UP"_j))), (jint(0)), (jint(0)));
	clinit_java_math_RoundingMode(ctx);
	SF_java_math_RoundingMode_UP = sp[0].o;
	LINE_NUMBER(142);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_RoundingMode);
	init_java_math_RoundingMode_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DOWN"_j))), (jint(1)), (jint(1)));
	clinit_java_math_RoundingMode(ctx);
	SF_java_math_RoundingMode_DOWN = sp[0].o;
	LINE_NUMBER(167);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_RoundingMode);
	init_java_math_RoundingMode_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CEILING"_j))), (jint(2)), (jint(2)));
	clinit_java_math_RoundingMode(ctx);
	SF_java_math_RoundingMode_CEILING = sp[0].o;
	LINE_NUMBER(192);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_RoundingMode);
	init_java_math_RoundingMode_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FLOOR"_j))), (jint(3)), (jint(3)));
	clinit_java_math_RoundingMode(ctx);
	SF_java_math_RoundingMode_FLOOR = sp[0].o;
	LINE_NUMBER(219);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_RoundingMode);
	init_java_math_RoundingMode_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HALF_UP"_j))), (jint(4)), (jint(4)));
	clinit_java_math_RoundingMode(ctx);
	SF_java_math_RoundingMode_HALF_UP = sp[0].o;
	LINE_NUMBER(245);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_RoundingMode);
	init_java_math_RoundingMode_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HALF_DOWN"_j))), (jint(5)), (jint(5)));
	clinit_java_math_RoundingMode(ctx);
	SF_java_math_RoundingMode_HALF_DOWN = sp[0].o;
	LINE_NUMBER(278);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_RoundingMode);
	init_java_math_RoundingMode_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HALF_EVEN"_j))), (6), (6));
	clinit_java_math_RoundingMode(ctx);
	SF_java_math_RoundingMode_HALF_EVEN = sp[0].o;
	LINE_NUMBER(302);
	clinit_java_math_RoundingMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_math_RoundingMode);
	init_java_math_RoundingMode_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UNNECESSARY"_j))), (7), (7));
	clinit_java_math_RoundingMode(ctx);
	SF_java_math_RoundingMode_UNNECESSARY = sp[0].o;
	LINE_NUMBER(93);
	sp[0].o = (jobject)SM_java_math_RoundingMode_$values_R_Array1_java_math_RoundingMode(ctx);
	clinit_java_math_RoundingMode(ctx);
	SF_java_math_RoundingMode_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_math_RoundingMode[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "UP", &class_java_math_RoundingMode, (intptr_t) &SF_java_math_RoundingMode_UP, "Ljava/math/RoundingMode;", 16409 },
	{ "DOWN", &class_java_math_RoundingMode, (intptr_t) &SF_java_math_RoundingMode_DOWN, "Ljava/math/RoundingMode;", 16409 },
	{ "CEILING", &class_java_math_RoundingMode, (intptr_t) &SF_java_math_RoundingMode_CEILING, "Ljava/math/RoundingMode;", 16409 },
	{ "FLOOR", &class_java_math_RoundingMode, (intptr_t) &SF_java_math_RoundingMode_FLOOR, "Ljava/math/RoundingMode;", 16409 },
	{ "HALF_UP", &class_java_math_RoundingMode, (intptr_t) &SF_java_math_RoundingMode_HALF_UP, "Ljava/math/RoundingMode;", 16409 },
	{ "HALF_DOWN", &class_java_math_RoundingMode, (intptr_t) &SF_java_math_RoundingMode_HALF_DOWN, "Ljava/math/RoundingMode;", 16409 },
	{ "HALF_EVEN", &class_java_math_RoundingMode, (intptr_t) &SF_java_math_RoundingMode_HALF_EVEN, "Ljava/math/RoundingMode;", 16409 },
	{ "UNNECESSARY", &class_java_math_RoundingMode, (intptr_t) &SF_java_math_RoundingMode_UNNECESSARY, "Ljava/math/RoundingMode;", 16409 },
	{ "oldMode", &class_int, offsetof(java_math_RoundingMode, F_oldMode), "I", 16 },
	{ "$VALUES", getArrayClass(&class_java_math_RoundingMode, 1), (intptr_t) &SF_java_math_RoundingMode_$VALUES, "[Ljava/math/RoundingMode;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_java_math_RoundingMode_values_R_Array1_java_math_RoundingMode, 0, "()[Ljava/math/RoundingMode;", 9 },
	{ "valueOf", (intptr_t) SM_java_math_RoundingMode_valueOf_java_lang_String_R_java_math_RoundingMode, 0, "(Ljava/lang/String;)Ljava/math/RoundingMode;", 9 },
	{ "<init>", (intptr_t) init_java_math_RoundingMode_java_lang_String_int_int, 0, "(Ljava/lang/String;II)V", 2 },
	{ "valueOf", (intptr_t) SM_java_math_RoundingMode_valueOf_int_R_java_math_RoundingMode, 0, "(I)Ljava/math/RoundingMode;", 9 },
	{ "$values", (intptr_t) SM_java_math_RoundingMode_$values_R_Array1_java_math_RoundingMode, 0, "()[Ljava/math/RoundingMode;", 4106 },
	{ "<clinit>", (intptr_t) clinit_java_math_RoundingMode, 0, "()V", 8 },
};

Class class_java_math_RoundingMode{
		.nativeName = (intptr_t) "java/math/RoundingMode",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(java_math_RoundingMode),
		.classVtable = (intptr_t) vtable_java_math_RoundingMode,
		.staticInitializer = (intptr_t) clinit_java_math_RoundingMode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_math_RoundingMode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_math_RoundingMode = registerClass(&class_java_math_RoundingMode);

}
