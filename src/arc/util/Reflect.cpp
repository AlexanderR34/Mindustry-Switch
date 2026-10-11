#include "arc/util/Reflect.h"
#include "java/lang/Integer.h"
#include "java/lang/Exception.h"
#include "arc/func/Prov.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/Byte.h"
#include "java/lang/Boolean.h"
#include "java/lang/reflect/Array.h"
#include "java/lang/Float.h"
#include "java/lang/Long.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Short.h"
#include "arc/util/Reflect.h"
#include "java/lang/Object.h"
#include "java/lang/Character.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "arc/util/Reflect_invoke_arc_func_Prov_0.h"
#include "java/lang/Double.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_arc_util_Reflect(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Reflect *) object;
}

void clinit_arc_util_Reflect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Reflect(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_newArray_java_lang_Class_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:newArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[0].o), (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_newArray_Array1_java_lang_Object_int_R_Array1_java_lang_Object(jcontext ctx, jobject param0, jint param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:newArray", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jbool SM_arc_util_Reflect_isWrapper_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:isWrapper", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(19);
	if ((frame[0].o) == (((jobject) &class_java_lang_Byte))) goto label_1;
	}
	{
	if ((frame[0].o) == (((jobject) &class_java_lang_Short))) goto label_1;
	}
	{
	if ((frame[0].o) == (((jobject) &class_java_lang_Integer))) goto label_1;
	}
	{
	if ((frame[0].o) == (((jobject) &class_java_lang_Long))) goto label_1;
	}
	{
	if ((frame[0].o) == (((jobject) &class_java_lang_Character))) goto label_1;
	}
	{
	if ((frame[0].o) == (((jobject) &class_java_lang_Boolean))) goto label_1;
	}
	{
	if ((frame[0].o) == (((jobject) &class_java_lang_Float))) goto label_1;
	}
	{
	if ((frame[0].o) != (((jobject) &class_java_lang_Double))) goto label_2;
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

jobject SM_arc_util_Reflect_cons_java_lang_Class_R_arc_func_Prov(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:cons", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(25);
	((func_java_lang_reflect_Constructor_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Constructor_setAccessible_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(26);
	{ /* InvokeDynamic */
		clinit_arc_util_Reflect_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_util_Reflect_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_util_Reflect_invoke_arc_func_Prov_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(33);
	frame[1].o = sp[0].o;
	LINE_NUMBER(34);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_get_java_lang_reflect_Field_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(ctx, (jobject(nullptr)), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:get", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[0].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(45);
	frame[2].o = sp[0].o;
	LINE_NUMBER(46);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_get_java_lang_Class_java_lang_Object_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field])(ctx, (frame[0].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(53);
	((func_java_lang_reflect_Field_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Field_setAccessible_boolean])(ctx, (frame[3].o), (jint(1)));
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(55);
	frame[3].o = sp[0].o;
	LINE_NUMBER(56);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_get_java_lang_Object_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Class_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_get_java_lang_Class_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Class_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Reflect_set_java_lang_Class_java_lang_Object_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(70);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredField_java_lang_String_R_java_lang_reflect_Field])(ctx, (frame[0].o), (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(71);
	((func_java_lang_reflect_Field_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_reflect_Field_setAccessible_boolean])(ctx, (frame[4].o), (jint(1)));
	LINE_NUMBER(72);
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, (frame[4].o), (frame[1].o), (frame[3].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(75);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(73);
	frame[4].o = sp[0].o;
	LINE_NUMBER(74);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_Reflect_set_java_lang_Object_java_lang_reflect_Field_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(80);
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, (frame[1].o), (frame[0].o), (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(83);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(81);
	frame[3].o = sp[0].o;
	LINE_NUMBER(82);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(84);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_util_Reflect_set_java_lang_Object_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	SM_arc_util_Reflect_set_java_lang_Class_java_lang_Object_java_lang_String_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Reflect_set_java_lang_Class_java_lang_String_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:set", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(91);
	SM_arc_util_Reflect_set_java_lang_Class_java_lang_Object_java_lang_String_java_lang_Object(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o), (frame[2].o));
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_invoke_java_lang_Class_java_lang_Object_java_lang_String_Array1_java_lang_Object_Array1_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:invoke", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(96);
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Class_getDeclaredMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, (frame[0].o), (frame[2].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(97);
	((func_java_lang_reflect_Method_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Method_setAccessible_boolean])(ctx, (frame[5].o), (jint(1)));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[5].o), (frame[1].o), (frame[3].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(99);
	frame[5].o = sp[0].o;
	LINE_NUMBER(100);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_invoke_java_lang_Class_java_lang_String_Array1_java_lang_Object_Array1_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:invoke", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)SM_arc_util_Reflect_invoke_java_lang_Class_java_lang_Object_java_lang_String_Array1_java_lang_Object_Array1_java_lang_Class_R_java_lang_Object(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_invoke_java_lang_Class_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:invoke", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)SM_arc_util_Reflect_invoke_java_lang_Class_java_lang_String_Array1_java_lang_Object_Array1_java_lang_Class_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_invoke_java_lang_Object_java_lang_String_Array1_java_lang_Object_Array1_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:invoke", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_arc_util_Reflect_invoke_java_lang_Class_java_lang_Object_java_lang_String_Array1_java_lang_Object_Array1_java_lang_Class_R_java_lang_Object(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_invoke_java_lang_Object_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:invoke", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = jobject(nullptr);
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)SM_arc_util_Reflect_invoke_java_lang_Object_java_lang_String_Array1_java_lang_Object_Array1_java_lang_Class_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_make_java_lang_String_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:make", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(123);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(124);
	frame[1].o = sp[0].o;
	LINE_NUMBER(125);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Reflect_lambda$cons$0_java_lang_reflect_Constructor_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Reflect:lambda$cons$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Reflect(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(29);
	frame[1].o = sp[0].o;
	LINE_NUMBER(30);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Reflect[] {
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Reflect, 0, "()V", 1 },
	{ "newArray", (intptr_t) SM_arc_util_Reflect_newArray_java_lang_Class_int_R_Array1_java_lang_Object, 0, "(Ljava/lang/Class;I)[Ljava/lang/Object;", 9 },
	{ "newArray", (intptr_t) SM_arc_util_Reflect_newArray_Array1_java_lang_Object_int_R_Array1_java_lang_Object, 0, "([Ljava/lang/Object;I)[Ljava/lang/Object;", 9 },
	{ "isWrapper", (intptr_t) SM_arc_util_Reflect_isWrapper_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 9 },
	{ "cons", (intptr_t) SM_arc_util_Reflect_cons_java_lang_Class_R_arc_func_Prov, 0, "(Ljava/lang/Class;)Larc/func/Prov;", 9 },
	{ "get", (intptr_t) SM_arc_util_Reflect_get_java_lang_reflect_Field_R_java_lang_Object, 0, "(Ljava/lang/reflect/Field;)Ljava/lang/Object;", 9 },
	{ "get", (intptr_t) SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/reflect/Field;)Ljava/lang/Object;", 9 },
	{ "get", (intptr_t) SM_arc_util_Reflect_get_java_lang_Class_java_lang_Object_java_lang_String_R_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "get", (intptr_t) SM_arc_util_Reflect_get_java_lang_Object_java_lang_String_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "get", (intptr_t) SM_arc_util_Reflect_get_java_lang_Class_java_lang_String_R_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "set", (intptr_t) SM_arc_util_Reflect_set_java_lang_Class_java_lang_Object_java_lang_String_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V", 9 },
	{ "set", (intptr_t) SM_arc_util_Reflect_set_java_lang_Object_java_lang_reflect_Field_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/reflect/Field;Ljava/lang/Object;)V", 9 },
	{ "set", (intptr_t) SM_arc_util_Reflect_set_java_lang_Object_java_lang_String_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V", 9 },
	{ "set", (intptr_t) SM_arc_util_Reflect_set_java_lang_Class_java_lang_String_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;)V", 9 },
	{ "invoke", (intptr_t) SM_arc_util_Reflect_invoke_java_lang_Class_java_lang_Object_java_lang_String_Array1_java_lang_Object_Array1_java_lang_Class_R_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;", 137 },
	{ "invoke", (intptr_t) SM_arc_util_Reflect_invoke_java_lang_Class_java_lang_String_Array1_java_lang_Object_Array1_java_lang_Class_R_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;", 137 },
	{ "invoke", (intptr_t) SM_arc_util_Reflect_invoke_java_lang_Class_java_lang_String_R_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "invoke", (intptr_t) SM_arc_util_Reflect_invoke_java_lang_Object_java_lang_String_Array1_java_lang_Object_Array1_java_lang_Class_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;", 137 },
	{ "invoke", (intptr_t) SM_arc_util_Reflect_invoke_java_lang_Object_java_lang_String_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "make", (intptr_t) SM_arc_util_Reflect_make_java_lang_String_R_java_lang_Object, 0, "(Ljava/lang/String;)Ljava/lang/Object;", 9 },
	{ "lambda$cons$0", (intptr_t) SM_arc_util_Reflect_lambda$cons$0_java_lang_reflect_Constructor_R_java_lang_Object, 0, "(Ljava/lang/reflect/Constructor;)Ljava/lang/Object;", 4106 },
};

Class class_arc_util_Reflect{
		.nativeName = (intptr_t) "arc/util/Reflect",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Reflect),
		.classVtable = (intptr_t) vtable_arc_util_Reflect,
		.staticInitializer = (intptr_t) clinit_arc_util_Reflect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Reflect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 21,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Reflect = registerClass(&class_arc_util_Reflect);

}
