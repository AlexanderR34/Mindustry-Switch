#include "arc/Input_Peripheral.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/Input.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/Input_Peripheral.h"

extern "C" {

jobject SF_arc_Input$Peripheral_hardwareKeyboard;
jobject SF_arc_Input$Peripheral_onscreenKeyboard;
jobject SF_arc_Input$Peripheral_multitouchScreen;
jobject SF_arc_Input$Peripheral_accelerometer;
jobject SF_arc_Input$Peripheral_compass;
jobject SF_arc_Input$Peripheral_vibrator;
jobject SF_arc_Input$Peripheral_gyroscope;
jobject SF_arc_Input$Peripheral_rotationVector;
jobject SF_arc_Input$Peripheral_pressure;
jobject SF_arc_Input$Peripheral_$VALUES;

void mark_arc_Input$Peripheral(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_Input$Peripheral_hardwareKeyboard)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Input$Peripheral_hardwareKeyboard)->clazz)->markFunction)((jobject) SF_arc_Input$Peripheral_hardwareKeyboard, mark, depth + 1);
		if (SF_arc_Input$Peripheral_onscreenKeyboard)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Input$Peripheral_onscreenKeyboard)->clazz)->markFunction)((jobject) SF_arc_Input$Peripheral_onscreenKeyboard, mark, depth + 1);
		if (SF_arc_Input$Peripheral_multitouchScreen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Input$Peripheral_multitouchScreen)->clazz)->markFunction)((jobject) SF_arc_Input$Peripheral_multitouchScreen, mark, depth + 1);
		if (SF_arc_Input$Peripheral_accelerometer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Input$Peripheral_accelerometer)->clazz)->markFunction)((jobject) SF_arc_Input$Peripheral_accelerometer, mark, depth + 1);
		if (SF_arc_Input$Peripheral_compass)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Input$Peripheral_compass)->clazz)->markFunction)((jobject) SF_arc_Input$Peripheral_compass, mark, depth + 1);
		if (SF_arc_Input$Peripheral_vibrator)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Input$Peripheral_vibrator)->clazz)->markFunction)((jobject) SF_arc_Input$Peripheral_vibrator, mark, depth + 1);
		if (SF_arc_Input$Peripheral_gyroscope)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Input$Peripheral_gyroscope)->clazz)->markFunction)((jobject) SF_arc_Input$Peripheral_gyroscope, mark, depth + 1);
		if (SF_arc_Input$Peripheral_rotationVector)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Input$Peripheral_rotationVector)->clazz)->markFunction)((jobject) SF_arc_Input$Peripheral_rotationVector, mark, depth + 1);
		if (SF_arc_Input$Peripheral_pressure)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Input$Peripheral_pressure)->clazz)->markFunction)((jobject) SF_arc_Input$Peripheral_pressure, mark, depth + 1);
		if (SF_arc_Input$Peripheral_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Input$Peripheral_$VALUES)->clazz)->markFunction)((jobject) SF_arc_Input$Peripheral_$VALUES, mark, depth + 1);
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
	auto self = (arc_Input$Peripheral *) object;
}

jobject SM_arc_Input$Peripheral_values_R_Array1_arc_Input$Peripheral(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input$Peripheral:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Input$Peripheral(ctx);
	{
	LINE_NUMBER(375);
	clinit_arc_Input$Peripheral(ctx);
	sp[0].o = (jobject)SF_arc_Input$Peripheral_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_Input$Peripheral, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_Input$Peripheral_valueOf_java_lang_String_R_arc_Input$Peripheral(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input$Peripheral:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Input$Peripheral(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_Input$Peripheral)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_Input$Peripheral, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_Input$Peripheral_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input$Peripheral:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Input$Peripheral(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(375);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_Input$Peripheral_$values_R_Array1_arc_Input$Peripheral(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input$Peripheral:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Input$Peripheral(ctx);
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)createArray(ctx, &class_arc_Input$Peripheral, (9));
	jint temp0 = jint(0);
	clinit_arc_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_arc_Input$Peripheral_hardwareKeyboard;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_arc_Input$Peripheral_onscreenKeyboard;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_arc_Input$Peripheral_multitouchScreen;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_arc_Input$Peripheral_accelerometer;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_arc_Input$Peripheral_compass;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_arc_Input$Peripheral_vibrator;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_arc_Input$Peripheral_gyroscope;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_arc_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_arc_Input$Peripheral_rotationVector;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_arc_Input$Peripheral(ctx);
	sp[1].o = (jobject)SF_arc_Input$Peripheral_pressure;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_Input$Peripheral(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Input$Peripheral:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Input$Peripheral(ctx);
	{
	LINE_NUMBER(376);
	clinit_arc_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Input$Peripheral);
	init_arc_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hardwareKeyboard"_j))), (jint(0)));
	clinit_arc_Input$Peripheral(ctx);
	SF_arc_Input$Peripheral_hardwareKeyboard = sp[0].o;
	clinit_arc_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Input$Peripheral);
	init_arc_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"onscreenKeyboard"_j))), (jint(1)));
	clinit_arc_Input$Peripheral(ctx);
	SF_arc_Input$Peripheral_onscreenKeyboard = sp[0].o;
	clinit_arc_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Input$Peripheral);
	init_arc_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"multitouchScreen"_j))), (jint(2)));
	clinit_arc_Input$Peripheral(ctx);
	SF_arc_Input$Peripheral_multitouchScreen = sp[0].o;
	clinit_arc_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Input$Peripheral);
	init_arc_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"accelerometer"_j))), (jint(3)));
	clinit_arc_Input$Peripheral(ctx);
	SF_arc_Input$Peripheral_accelerometer = sp[0].o;
	clinit_arc_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Input$Peripheral);
	init_arc_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"compass"_j))), (jint(4)));
	clinit_arc_Input$Peripheral(ctx);
	SF_arc_Input$Peripheral_compass = sp[0].o;
	clinit_arc_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Input$Peripheral);
	init_arc_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vibrator"_j))), (jint(5)));
	clinit_arc_Input$Peripheral(ctx);
	SF_arc_Input$Peripheral_vibrator = sp[0].o;
	clinit_arc_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Input$Peripheral);
	init_arc_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"gyroscope"_j))), (6));
	clinit_arc_Input$Peripheral(ctx);
	SF_arc_Input$Peripheral_gyroscope = sp[0].o;
	clinit_arc_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Input$Peripheral);
	init_arc_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rotationVector"_j))), (7));
	clinit_arc_Input$Peripheral(ctx);
	SF_arc_Input$Peripheral_rotationVector = sp[0].o;
	clinit_arc_Input$Peripheral(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_Input$Peripheral);
	init_arc_Input$Peripheral_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pressure"_j))), (8));
	clinit_arc_Input$Peripheral(ctx);
	SF_arc_Input$Peripheral_pressure = sp[0].o;
	LINE_NUMBER(375);
	sp[0].o = (jobject)SM_arc_Input$Peripheral_$values_R_Array1_arc_Input$Peripheral(ctx);
	clinit_arc_Input$Peripheral(ctx);
	SF_arc_Input$Peripheral_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_Input$Peripheral[] {
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
	{ "hardwareKeyboard", &class_arc_Input$Peripheral, (intptr_t) &SF_arc_Input$Peripheral_hardwareKeyboard, "Larc/Input$Peripheral;", 16409 },
	{ "onscreenKeyboard", &class_arc_Input$Peripheral, (intptr_t) &SF_arc_Input$Peripheral_onscreenKeyboard, "Larc/Input$Peripheral;", 16409 },
	{ "multitouchScreen", &class_arc_Input$Peripheral, (intptr_t) &SF_arc_Input$Peripheral_multitouchScreen, "Larc/Input$Peripheral;", 16409 },
	{ "accelerometer", &class_arc_Input$Peripheral, (intptr_t) &SF_arc_Input$Peripheral_accelerometer, "Larc/Input$Peripheral;", 16409 },
	{ "compass", &class_arc_Input$Peripheral, (intptr_t) &SF_arc_Input$Peripheral_compass, "Larc/Input$Peripheral;", 16409 },
	{ "vibrator", &class_arc_Input$Peripheral, (intptr_t) &SF_arc_Input$Peripheral_vibrator, "Larc/Input$Peripheral;", 16409 },
	{ "gyroscope", &class_arc_Input$Peripheral, (intptr_t) &SF_arc_Input$Peripheral_gyroscope, "Larc/Input$Peripheral;", 16409 },
	{ "rotationVector", &class_arc_Input$Peripheral, (intptr_t) &SF_arc_Input$Peripheral_rotationVector, "Larc/Input$Peripheral;", 16409 },
	{ "pressure", &class_arc_Input$Peripheral, (intptr_t) &SF_arc_Input$Peripheral_pressure, "Larc/Input$Peripheral;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_Input$Peripheral, 1), (intptr_t) &SF_arc_Input$Peripheral_$VALUES, "[Larc/Input$Peripheral;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_Input$Peripheral_values_R_Array1_arc_Input$Peripheral, 0, "()[Larc/Input$Peripheral;", 9 },
	{ "valueOf", (intptr_t) SM_arc_Input$Peripheral_valueOf_java_lang_String_R_arc_Input$Peripheral, 0, "(Ljava/lang/String;)Larc/Input$Peripheral;", 9 },
	{ "<init>", (intptr_t) init_arc_Input$Peripheral_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_Input$Peripheral_$values_R_Array1_arc_Input$Peripheral, 0, "()[Larc/Input$Peripheral;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_Input$Peripheral, 0, "()V", 8 },
};

Class class_arc_Input$Peripheral{
		.nativeName = (intptr_t) "arc/Input$Peripheral",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_Input$Peripheral),
		.classVtable = (intptr_t) vtable_arc_Input$Peripheral,
		.staticInitializer = (intptr_t) clinit_arc_Input$Peripheral,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_Input$Peripheral,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_Input,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_Input$Peripheral = registerClass(&class_arc_Input$Peripheral);

}

