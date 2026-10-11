#include "rhino/NativeJavaMethod.h"
#include "rhino/Function.h"
#include "java/lang/StringBuilder.h"
#include "rhino/WrapFactory.h"
#include "java/lang/Boolean.h"
#include "rhino/NativeArray.h"
#include "java/lang/reflect/Array.h"
#include "java/util/concurrent/CopyOnWriteArrayList.h"
#include "rhino/Scriptable.h"
#include "rhino/IdScriptableObject.h"
#include "rhino/BaseFunction.h"
#include "rhino/Undefined.h"
#include "rhino/EvaluatorException.h"
#include "rhino/Kit.h"
#include "java/lang/String.h"
#include "java/lang/reflect/Method.h"
#include "rhino/ResolvedOverload.h"
#include "java/util/Iterator.h"
#include "java/lang/Number.h"
#include "rhino/Context.h"
#include "rhino/ScriptableObject.h"
#include "java/lang/Void.h"
#include "rhino/NativeJavaArray.h"
#include "rhino/Wrapper.h"
#include "rhino/MemberBox.h"
#include "rhino/JavaMembers.h"
#include "rhino/NativeJavaObject.h"
#include "java/lang/Object.h"
#include "rhino/ScriptRuntime.h"
#include "rhino/NativeJavaMethod.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"

extern "C" {

jint SF_rhino_NativeJavaMethod_PREFERENCE_EQUAL;
jint SF_rhino_NativeJavaMethod_PREFERENCE_FIRST_ARG;
jint SF_rhino_NativeJavaMethod_PREFERENCE_SECOND_ARG;
jint SF_rhino_NativeJavaMethod_PREFERENCE_AMBIGUOUS;
jbool SF_rhino_NativeJavaMethod_debug;

void mark_rhino_NativeJavaMethod(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_rhino_BaseFunction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (rhino_NativeJavaMethod *) object;
	if (self->F_methods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_methods)->clazz)->markFunction)((jobject) self->F_methods, mark, depth + 1);
	if (self->F_functionName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_functionName)->clazz)->markFunction)((jobject) self->F_functionName, mark, depth + 1);
	if (self->F_overloadCache)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overloadCache)->clazz)->markFunction)((jobject) self->F_overloadCache, mark, depth + 1);
}

void clinit_rhino_NativeJavaMethod(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_rhino_BaseFunction(ctx);
	SF_rhino_NativeJavaMethod_PREFERENCE_EQUAL = jint(0);
	SF_rhino_NativeJavaMethod_PREFERENCE_FIRST_ARG = jint(1);
	SF_rhino_NativeJavaMethod_PREFERENCE_SECOND_ARG = jint(2);
	SF_rhino_NativeJavaMethod_PREFERENCE_AMBIGUOUS = jint(3);
	SF_rhino_NativeJavaMethod_debug = jint(0);
}

void init_rhino_NativeJavaMethod_Array1_rhino_MemberBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaMethod:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaMethod(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(17);
	init_rhino_BaseFunction(ctx, (frame[0].o));
	LINE_NUMBER(525);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList);
	init_java_util_concurrent_CopyOnWriteArrayList(ctx, sp[1].o);
	((rhino_NativeJavaMethod *) NULL_CHECK(sp[0].o))->F_overloadCache = (jref) sp[1].o;
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_rhino_MemberBox_getName_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_rhino_MemberBox_getName_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	((rhino_NativeJavaMethod *) NULL_CHECK(sp[0].o))->F_functionName = (jref) sp[1].o;
	LINE_NUMBER(19);
	((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods = (jref) (frame[1].o);
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeJavaMethod_Array1_rhino_MemberBox_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaMethod:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaMethod(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(22);
	init_rhino_BaseFunction(ctx, (frame[0].o));
	LINE_NUMBER(525);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList);
	init_java_util_concurrent_CopyOnWriteArrayList(ctx, sp[1].o);
	((rhino_NativeJavaMethod *) NULL_CHECK(sp[0].o))->F_overloadCache = (jref) sp[1].o;
	LINE_NUMBER(23);
	((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_functionName = (jref) (frame[2].o);
	LINE_NUMBER(24);
	((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods = (jref) (frame[1].o);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeJavaMethod_rhino_MemberBox_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaMethod:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaMethod(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(27);
	init_rhino_BaseFunction(ctx, (frame[0].o));
	LINE_NUMBER(525);
	sp[0].o = frame[0].o;
	clinit_java_util_concurrent_CopyOnWriteArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_concurrent_CopyOnWriteArrayList);
	init_java_util_concurrent_CopyOnWriteArrayList(ctx, sp[1].o);
	((rhino_NativeJavaMethod *) NULL_CHECK(sp[0].o))->F_overloadCache = (jref) sp[1].o;
	LINE_NUMBER(28);
	((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_functionName = (jref) (frame[2].o);
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_rhino_MemberBox, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	((rhino_NativeJavaMethod *) NULL_CHECK(sp[0].o))->F_methods = (jref) sp[1].o;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeJavaMethod_java_lang_reflect_Method_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaMethod:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaMethod(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_rhino_MemberBox(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_MemberBox);
	init_rhino_MemberBox_java_lang_reflect_Method(ctx, sp[1].o, (frame[1].o));
	init_rhino_NativeJavaMethod_rhino_MemberBox_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[2].o));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaMethod_getFunctionName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaMethod:getFunctionName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_functionName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_NativeJavaMethod_scriptSignature_Array1_java_lang_Object_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaMethod:scriptSignature", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaMethod(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(42);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(43);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	if ((frame[2].i) == (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(44);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[2].i)));
	LINE_NUMBER(47);
	if ((frame[3].o) != nullptr) goto label_6;
	}
	{
	LINE_NUMBER(48);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"null"_j)));
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(49);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Boolean)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(50);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"boolean"_j)));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(51);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_String)) == 0) goto label_13;
	}
	{
	LINE_NUMBER(52);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"string"_j)));
	goto label_9;
	}
label_13:;
	{
	LINE_NUMBER(53);
	if ((isInstance(ctx, (frame[3].o), &class_java_lang_Number)) == 0) goto label_16;
	}
	{
	LINE_NUMBER(54);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"number"_j)));
	goto label_9;
	}
label_16:;
	{
	LINE_NUMBER(55);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Scriptable)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(56);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Undefined)) == 0) goto label_21;
	}
	{
	LINE_NUMBER(57);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"undefined"_j)));
	goto label_9;
	}
label_21:;
	{
	LINE_NUMBER(58);
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Wrapper)) == 0) goto label_24;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[3].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[3].o))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(60);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(61);
	goto label_9;
	}
label_24:;
	{
	if ((isInstance(ctx, (frame[3].o), &class_rhino_Function)) == 0) goto label_28;
	}
	{
	LINE_NUMBER(62);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"function"_j)));
	goto label_9;
	}
label_28:;
	{
	LINE_NUMBER(64);
	frame[4].o = (((jobject) createStringLiteral(ctx, u8"object"_j)));
	goto label_9;
	}
label_19:;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_rhino_JavaMembers_javaSignature_java_lang_Class_R_java_lang_String(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(70);
	if ((frame[2].i) == 0) goto label_32;
	}
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (44));
	}
label_32:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(43);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaMethod_decompile_int_int_R_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaMethod:decompile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(80);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(81);
	if ((jint(0)) == ((frame[2].i) & (jint(1)))) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(82);
	if ((frame[4].i) != 0) goto label_5;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"function "_j))));
	LINE_NUMBER(84);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_NativeJavaMethod_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaMethod_getFunctionName_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"() {"_j))));
	}
label_5:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"/*\n"_j))));
	LINE_NUMBER(88);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_rhino_NativeJavaMethod_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaMethod_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(89);
	sp[0].o = frame[3].o;
	sp += 1;
	if ((frame[4].i) == 0) goto label_11;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"*/\n"_j));
	goto label_12;
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"*/}\n"_j));
label_12:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaMethod_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaMethod:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(95);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(96);
	frame[2].i = (jint(0));
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	}
label_3:;
	{
	if ((frame[2].i) == (frame[3].i)) goto label_4;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods;
	jint temp0 = (jint)((func_rhino_MemberBox_isMethod_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_rhino_MemberBox_isMethod_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods;
	sp[0].o = (jobject)((func_rhino_MemberBox_method_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_rhino_MemberBox_method_R_java_lang_reflect_Method])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(100);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, (frame[4].o));
	sp[1].o = (jobject)SM_rhino_JavaMembers_javaSignature_java_lang_Class_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (32));
	LINE_NUMBER(102);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(103);
	goto label_12;
	}
label_6:;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods;
	sp[1].o = (jobject)((func_rhino_MemberBox_getName_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))))->vtable)[VTABLE_rhino_MemberBox_getName_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(106);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods;
	sp[1].o = (jobject)((rhino_MemberBox *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)))))->F_argTypes;
	sp[1].o = (jobject)SM_rhino_JavaMembers_liveConnectSignature_Array1_java_lang_Class_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (10));
	LINE_NUMBER(96);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeJavaMethod_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaMethod:call", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != 0) goto label_1;
	}
	{
	LINE_NUMBER(117);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No methods defined for call"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_rhino_NativeJavaMethod_findCachedFunction_rhino_Context_Array1_java_lang_Object_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaMethod_findCachedFunction_rhino_Context_Array1_java_lang_Object_R_int])(ctx, (frame[0].o), (frame[1].o), (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(121);
	if ((frame[5].i) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods;
	sp[0].o = (jobject)((func_rhino_MemberBox_method_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))))->vtable)[VTABLE_rhino_MemberBox_method_R_java_lang_reflect_Method])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)))));
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(123);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (46));
	sp[1].o = (jobject)((func_rhino_NativeJavaMethod_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeJavaMethod_getFunctionName_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (40));
	sp[1].o = frame[4].o;
	LINE_NUMBER(124);
	sp[1].o = (jobject)SM_rhino_NativeJavaMethod_scriptSignature_Array1_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (41));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError1_java_lang_String_java_lang_Object_R_rhino_EvaluatorException(ctx, (((jobject) createStringLiteral(ctx, u8"msg.java.no_such_method"_j))), (frame[7].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[5].i)));
	LINE_NUMBER(129);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[6].o)))->F_argTypes;
	frame[7].o = sp[0].o;
	LINE_NUMBER(131);
	if (((jint)((rhino_MemberBox *) NULL_CHECK((frame[6].o)))->F_vararg) == 0) goto label_11;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (((jarray) nullCheck(ctx, (frame[7].o)))->length));
	frame[8].o = sp[0].o;
	LINE_NUMBER(134);
	frame[9].i = (jint(0));
	}
label_14:;
	{
	if ((frame[9].i) >= ((((jarray) nullCheck(ctx, (frame[7].o)))->length) - (jint(1)))) goto label_15;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	sp[1].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[9].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(134);
	INST_IINC(9, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(142);
	if ((((jarray) nullCheck(ctx, (frame[4].o)))->length) != (((jarray) nullCheck(ctx, (frame[7].o)))->length)) goto label_18;
	}
	{
	if (((jobject)ARRAY_ACCESS(jobject, (frame[4].o), ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1))))) == nullptr) goto label_19;
	}
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1))))), &class_rhino_NativeArray)) != 0) goto label_19;
	}
	{
	if ((isInstance(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1))))), &class_rhino_NativeJavaArray)) == 0) goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), ((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (jint(1))))), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), ((((jarray) nullCheck(ctx, (frame[7].o)))->length) - (jint(1))))));
	frame[9].o = sp[0].o;
	goto label_21;
	}
label_18:;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[7].o), ((((jarray) nullCheck(ctx, (frame[7].o)))->length) - (jint(1))));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_java_lang_Class_getComponentType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getComponentType_R_java_lang_Class])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(153);
	sp[0].o = (jobject)SM_java_lang_reflect_Array_newInstance_java_lang_Class_int_R_java_lang_Object(ctx, (frame[10].o), (((((jarray) nullCheck(ctx, (frame[4].o)))->length) - (((jarray) nullCheck(ctx, (frame[7].o)))->length)) + (jint(1))));
	frame[9].o = sp[0].o;
	LINE_NUMBER(155);
	frame[11].i = (jint(0));
	}
label_25:;
	{
	jint temp0 = frame[11].i;
	jint temp1 = (jint)SM_java_lang_reflect_Array_getLength_java_lang_Object_R_int(ctx, (frame[9].o));
	if (temp0 >= temp1) goto label_21;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (((((jarray) nullCheck(ctx, (frame[7].o)))->length) - (jint(1))) + (frame[11].i)))), (frame[10].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(158);
	SM_java_lang_reflect_Array_set_java_lang_Object_int_java_lang_Object(ctx, (frame[9].o), (frame[11].i), (frame[12].o));
	LINE_NUMBER(155);
	INST_IINC(11, 1);
	goto label_25;
	}
label_21:;
	{
	LINE_NUMBER(163);
	ARRAY_ACCESS(jobject, (frame[8].o), ((((jarray) nullCheck(ctx, (frame[7].o)))->length) - (jint(1)))) = (frame[9].o);
	LINE_NUMBER(165);
	frame[4].o = (frame[8].o);
	LINE_NUMBER(166);
	goto label_31;
	}
label_11:;
	{
	LINE_NUMBER(168);
	frame[8].o = (frame[4].o);
	LINE_NUMBER(169);
	frame[9].i = (jint(0));
	}
label_33:;
	{
	if ((frame[9].i) >= (((jarray) nullCheck(ctx, (frame[4].o)))->length)) goto label_31;
	}
	{
	LINE_NUMBER(170);
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[9].i)));
	LINE_NUMBER(171);
	sp[0].o = (jobject)SM_rhino_Context_jsToJava_java_lang_Object_java_lang_Class_R_java_lang_Object(ctx, (frame[10].o), ((jobject)ARRAY_ACCESS(jobject, (frame[7].o), (frame[9].i))));
	frame[11].o = sp[0].o;
	LINE_NUMBER(172);
	if ((frame[11].o) == (frame[10].o)) goto label_37;
	}
	{
	LINE_NUMBER(173);
	if ((frame[8].o) != (frame[4].o)) goto label_39;
	}
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[4].o));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	}
label_39:;
	{
	LINE_NUMBER(176);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[9].i)) = (frame[11].o);
	}
label_37:;
	{
	LINE_NUMBER(169);
	INST_IINC(9, 1);
	goto label_33;
	}
label_31:;
	{
	LINE_NUMBER(181);
	jint temp0 = (jint)((func_rhino_MemberBox_isStatic_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_MemberBox_isStatic_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_41;
	}
	{
	LINE_NUMBER(182);
	frame[8].o = (jobject(nullptr));
	goto label_44;
	}
label_41:;
	{
	LINE_NUMBER(184);
	frame[9].o = (frame[3].o);
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_rhino_MemberBox_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_MemberBox_getDeclaringClass_R_java_lang_Class])(ctx, (frame[6].o));
	frame[10].o = sp[0].o;
	}
label_46:;
	{
	LINE_NUMBER(187);
	if ((frame[9].o) != nullptr) goto label_47;
	}
	{
	LINE_NUMBER(188);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.nonjava.method"_j));
	sp[1].o = frame[0].o;
	LINE_NUMBER(189);
	sp[1].o = (jobject)((func_rhino_NativeJavaMethod_getFunctionName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_NativeJavaMethod_getFunctionName_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = frame[3].o;
	LINE_NUMBER(190);
	sp[2].o = (jobject)SM_rhino_ScriptRuntime_toString_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[3].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[10].o));
	LINE_NUMBER(188);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError3_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	throwException(ctx, sp[0].o);	}
label_47:;
	{
	LINE_NUMBER(192);
	if ((isInstance(ctx, (frame[9].o), &class_rhino_Wrapper)) == 0) goto label_52;
	}
	{
	LINE_NUMBER(193);
	sp[0].o = (jobject)((func_rhino_Wrapper_unwrap_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_rhino_Wrapper, INDEX_rhino_Wrapper_unwrap_R_java_lang_Object, (checkCast(ctx, &class_rhino_Wrapper, (frame[9].o)))))(ctx, (checkCast(ctx, &class_rhino_Wrapper, (frame[9].o))));
	frame[8].o = sp[0].o;
	LINE_NUMBER(194);
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[10].o), (frame[8].o));
	if (temp0 == 0) goto label_52;
	}
	LINE_NUMBER(195);
	goto label_44;
label_52:;
	{
	LINE_NUMBER(198);
	sp[0].o = (jobject)((func_rhino_Scriptable_getPrototype_R_rhino_Scriptable) resolveInterfaceMethod(ctx, &class_rhino_Scriptable, INDEX_rhino_Scriptable_getPrototype_R_rhino_Scriptable, (frame[9].o)))(ctx, (frame[9].o));
	frame[9].o = sp[0].o;
	goto label_46;
	}
label_44:;
	{
	LINE_NUMBER(205);
	sp[0].o = (jobject)((func_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_MemberBox_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[6].o), (frame[8].o), (frame[4].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(206);
	sp[0].o = (jobject)((func_rhino_MemberBox_method_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_rhino_MemberBox_method_R_java_lang_reflect_Method])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getReturnType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Method_getReturnType_R_java_lang_Class])(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(216);
	sp[0].o = (jobject)((func_rhino_Context_getWrapFactory_R_rhino_WrapFactory) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_Context_getWrapFactory_R_rhino_WrapFactory])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_WrapFactory_wrap_rhino_Context_rhino_Scriptable_java_lang_Object_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o), (frame[9].o), (frame[10].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(225);
	if ((frame[11].o) != nullptr) goto label_59;
	}
	{
	sp[0].o = frame[10].o;
	clinit_java_lang_Void(ctx);
	sp[1].o = (jobject)SF_java_lang_Void_TYPE;
	if (sp[0].o != sp[1].o) goto label_59;
	}
	{
	LINE_NUMBER(226);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	frame[11].o = sp[0].o;
	}
label_59:;
	{
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return (frame[11].o);
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeJavaMethod_findCachedFunction_rhino_Context_Array1_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaMethod:findCachedFunction", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(232);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) <= (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_overloadCache;
	sp[0].o = (jobject)((func_java_util_concurrent_CopyOnWriteArrayList_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_rhino_ResolvedOverload, sp[0].o));
	LINE_NUMBER(234);
	jint temp0 = (jint)((func_rhino_ResolvedOverload_matches_Array1_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_rhino_ResolvedOverload_matches_Array1_java_lang_Object_R_boolean])(ctx, (frame[4].o), (frame[2].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return ((jint)((rhino_ResolvedOverload *) NULL_CHECK((frame[4].o)))->F_index);
	}
label_6:;
	LINE_NUMBER(237);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(238);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods;
	jint temp0 = (jint)SM_rhino_NativeJavaMethod_findFunction_rhino_Context_Array1_rhino_MemberBox_Array1_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[3].i = temp0;
	LINE_NUMBER(241);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_overloadCache;
	jint temp1 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_size_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods;
	if (temp1 >= ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(2)))) goto label_9;
	}
	{
	LINE_NUMBER(242);
	clinit_rhino_ResolvedOverload(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ResolvedOverload);
	init_rhino_ResolvedOverload_Array1_java_lang_Object_int(ctx, sp[0].o, (frame[2].o), (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(243);
	sp[0].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_overloadCache;
	jint temp0 = (jint)((func_java_util_concurrent_CopyOnWriteArrayList_addIfAbsent_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_CopyOnWriteArrayList_addIfAbsent_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[4].o));
	}
label_9:;
	{
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_1:;
	{
	LINE_NUMBER(247);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((rhino_NativeJavaMethod *) NULL_CHECK((frame[0].o)))->F_methods;
	jint temp0 = (jint)SM_rhino_NativeJavaMethod_findFunction_rhino_Context_Array1_rhino_MemberBox_Array1_java_lang_Object_R_int(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeJavaMethod_findFunction_rhino_Context_Array1_rhino_MemberBox_Array1_java_lang_Object_R_int(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[21];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaMethod:findFunction", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaMethod(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(257);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != 0) goto label_1;
	}
	{
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_1:;
	{
	LINE_NUMBER(259);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) != (jint(1))) goto label_3;
	}
	{
	LINE_NUMBER(260);
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[3].o)))->F_argTypes;
	frame[4].o = sp[0].o;
	LINE_NUMBER(262);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	LINE_NUMBER(264);
	if (((jint)((rhino_MemberBox *) NULL_CHECK((frame[3].o)))->F_vararg) == 0) goto label_8;
	}
	{
	LINE_NUMBER(265);
	INST_IINC(5, -1);
	LINE_NUMBER(266);
	if ((frame[5].i) <= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(267);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_8:;
	{
	LINE_NUMBER(270);
	if ((frame[5].i) == (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_11;
	}
	{
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_11:;
	{
	LINE_NUMBER(274);
	frame[6].i = (jint(0));
	}
label_14:;
	{
	if ((frame[6].i) == (frame[5].i)) goto label_15;
	}
	{
	LINE_NUMBER(275);
	jint temp0 = (jint)SM_rhino_NativeJavaObject_canConvert_java_lang_Object_java_lang_Class_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[6].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i))));
	if (temp0 != 0) goto label_17;
	}
	{
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_17:;
	{
	LINE_NUMBER(274);
	INST_IINC(6, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(282);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(285);
	frame[3].i = (jint(-1));
	LINE_NUMBER(286);
	frame[4].o = (jobject(nullptr));
	LINE_NUMBER(287);
	frame[5].i = (jint(0));
	LINE_NUMBER(290);
	frame[6].i = (jint(0));
	}
label_22:;
	{
	if ((frame[6].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_23;
	}
	{
	LINE_NUMBER(291);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i)));
	LINE_NUMBER(292);
	sp[0].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[7].o)))->F_argTypes;
	frame[8].o = sp[0].o;
	LINE_NUMBER(293);
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	LINE_NUMBER(294);
	if (((jint)((rhino_MemberBox *) NULL_CHECK((frame[7].o)))->F_vararg) == 0) goto label_28;
	}
	{
	LINE_NUMBER(295);
	INST_IINC(9, -1);
	LINE_NUMBER(296);
	if ((frame[9].i) <= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_31;
	}
	LINE_NUMBER(297);
	goto label_33;
label_28:;
	{
	LINE_NUMBER(300);
	if ((frame[9].i) == (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_31;
	}
	LINE_NUMBER(301);
	goto label_33;
label_31:;
	{
	LINE_NUMBER(304);
	frame[10].i = (jint(0));
	}
label_35:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_36;
	}
	{
	LINE_NUMBER(305);
	jint temp0 = (jint)SM_rhino_NativeJavaObject_canConvert_java_lang_Object_java_lang_Class_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[10].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i))));
	if (temp0 != 0) goto label_38;
	}
	LINE_NUMBER(308);
	goto label_33;
label_38:;
	{
	LINE_NUMBER(304);
	INST_IINC(10, 1);
	goto label_35;
	}
label_36:;
	{
	LINE_NUMBER(311);
	if ((frame[3].i) >= 0) goto label_40;
	}
	{
	LINE_NUMBER(313);
	frame[3].i = (frame[6].i);
	goto label_33;
	}
label_40:;
	{
	LINE_NUMBER(319);
	frame[10].i = (jint(0));
	LINE_NUMBER(321);
	frame[11].i = (jint(0));
	LINE_NUMBER(323);
	frame[12].i = (jint(-1));
	}
label_44:;
	{
	if ((frame[12].i) == (frame[5].i)) goto label_45;
	}
	{
	LINE_NUMBER(325);
	if ((frame[12].i) != (jint(-1))) goto label_47;
	}
	{
	LINE_NUMBER(326);
	frame[13].i = (frame[3].i);
	goto label_50;
	}
label_47:;
	{
	LINE_NUMBER(328);
	frame[13].i = ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[12].i)));
	}
label_50:;
	{
	LINE_NUMBER(330);
	frame[14].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[13].i)));
	LINE_NUMBER(331);
	jint temp0 = (jint)((func_rhino_Context_hasFeature_int_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_Context_hasFeature_int_R_boolean])(ctx, (frame[0].o), (13));
	if (temp0 == 0) goto label_52;
	}
	{
	sp[0].o = frame[14].o;
	LINE_NUMBER(332);
	jint temp0 = (jint)((func_rhino_MemberBox_isPublic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_isPublic_R_boolean])(ctx, sp[0].o);
	jint temp1 = (jint)((func_rhino_MemberBox_isPublic_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_MemberBox_isPublic_R_boolean])(ctx, (frame[7].o));
	if (temp0 == temp1) goto label_52;
	}
	{
	LINE_NUMBER(336);
	jint temp0 = (jint)((func_rhino_MemberBox_isPublic_R_boolean) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_MemberBox_isPublic_R_boolean])(ctx, (frame[14].o));
	if (temp0 != 0) goto label_55;
	}
	{
	LINE_NUMBER(337);
	INST_IINC(10, 1);
	goto label_57;
	}
label_55:;
	{
	LINE_NUMBER(339);
	INST_IINC(11, 1);
	goto label_57;
	}
label_52:;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[2].o;
	sp[1].o = frame[8].o;
	jint temp0 = (jint)((rhino_MemberBox *) NULL_CHECK((frame[7].o)))->F_vararg;
	sp[2].o = (jobject)((rhino_MemberBox *) NULL_CHECK((frame[14].o)))->F_argTypes;
	jint temp1 = (jint)SM_rhino_NativeJavaMethod_preferSignature_Array1_java_lang_Object_Array1_java_lang_Class_boolean_Array1_java_lang_Class_boolean_R_int(ctx, sp[0].o, sp[1].o, temp0, sp[2].o, ((jint)((rhino_MemberBox *) NULL_CHECK((frame[14].o)))->F_vararg));
	frame[15].i = temp1;
	LINE_NUMBER(345);
	if ((frame[15].i) != (jint(3))) goto label_59;
	}
	LINE_NUMBER(346);
	goto label_45;
label_59:;
	{
	LINE_NUMBER(347);
	if ((frame[15].i) != (jint(1))) goto label_61;
	}
	{
	LINE_NUMBER(348);
	INST_IINC(10, 1);
	goto label_57;
	}
label_61:;
	{
	LINE_NUMBER(349);
	if ((frame[15].i) != (jint(2))) goto label_63;
	}
	{
	LINE_NUMBER(350);
	INST_IINC(11, 1);
	goto label_57;
	}
label_63:;
	{
	LINE_NUMBER(352);
	if ((frame[15].i) == 0) goto label_65;
	}
	sp->o = (jobject)SM_rhino_Kit_codeBug_R_java_lang_RuntimeException(ctx);
	sp++;
	INST_POP();
label_65:;
	{
	LINE_NUMBER(358);
	jint temp0 = (jint)((func_rhino_MemberBox_isStatic_R_boolean) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_rhino_MemberBox_isStatic_R_boolean])(ctx, (frame[14].o));
	if (temp0 == 0) goto label_33;
	}
	{
	sp[0].o = frame[14].o;
	LINE_NUMBER(359);
	sp[0].o = (jobject)((func_rhino_MemberBox_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_rhino_MemberBox_getDeclaringClass_R_java_lang_Class])(ctx, sp[0].o);
	sp[1].o = frame[7].o;
	LINE_NUMBER(360);
	sp[1].o = (jobject)((func_rhino_MemberBox_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_rhino_MemberBox_getDeclaringClass_R_java_lang_Class])(ctx, sp[1].o);
	LINE_NUMBER(359);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_33;
	}
	{
	LINE_NUMBER(368);
	if ((frame[12].i) != (jint(-1))) goto label_70;
	}
	{
	LINE_NUMBER(369);
	frame[3].i = (frame[6].i);
	goto label_33;
	}
label_70:;
	{
	LINE_NUMBER(371);
	ARRAY_ACCESS(jint, (frame[4].o), (frame[12].i)) = (frame[6].i);
	goto label_33;
	}
label_57:;
	{
	LINE_NUMBER(323);
	INST_IINC(12, 1);
	goto label_44;
	}
label_45:;
	{
	LINE_NUMBER(382);
	if ((frame[10].i) != ((jint(1)) + (frame[5].i))) goto label_72;
	}
	{
	LINE_NUMBER(386);
	frame[3].i = (frame[6].i);
	LINE_NUMBER(387);
	frame[5].i = (jint(0));
	goto label_33;
	}
label_72:;
	{
	LINE_NUMBER(388);
	if ((frame[11].i) != ((jint(1)) + (frame[5].i))) goto label_75;
	}
	goto label_33;
label_75:;
	{
	LINE_NUMBER(396);
	if ((frame[4].o) != nullptr) goto label_76;
	}
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject) createArray(ctx, &class_int, ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1))));
	frame[4].o = sp[0].o;
	}
label_76:;
	{
	LINE_NUMBER(400);
	ARRAY_ACCESS(jint, (frame[4].o), (frame[5].i)) = (frame[6].i);
	LINE_NUMBER(401);
	INST_IINC(5, 1);
	}
label_33:;
	{
	LINE_NUMBER(290);
	INST_IINC(6, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(406);
	if ((frame[3].i) >= 0) goto label_79;
	}
	{
	LINE_NUMBER(408);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_79:;
	{
	LINE_NUMBER(409);
	if ((frame[5].i) != 0) goto label_81;
	}
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_81:;
	{
	LINE_NUMBER(415);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(416);
	frame[7].i = (jint(-1));
	}
label_84:;
	{
	if ((frame[7].i) == (frame[5].i)) goto label_85;
	}
	{
	LINE_NUMBER(418);
	if ((frame[7].i) != (jint(-1))) goto label_87;
	}
	{
	LINE_NUMBER(419);
	frame[8].i = (frame[3].i);
	goto label_90;
	}
label_87:;
	{
	LINE_NUMBER(421);
	frame[8].i = ((jint)ARRAY_ACCESS(jint, (frame[4].o), (frame[7].i)));
	}
label_90:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"\n    "_j))));
	LINE_NUMBER(424);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_rhino_MemberBox_toJavaDeclaration_R_java_lang_String) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[8].i))))->vtable)[VTABLE_rhino_MemberBox_toJavaDeclaration_R_java_lang_String])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[8].i))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(416);
	INST_IINC(7, 1);
	goto label_84;
	}
label_85:;
	{
	LINE_NUMBER(427);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_rhino_MemberBox_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_MemberBox_getName_R_java_lang_String])(ctx, (frame[7].o));
	frame[8].o = sp[0].o;
	LINE_NUMBER(429);
	sp[0].o = (jobject)((func_rhino_MemberBox_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_rhino_MemberBox_getDeclaringClass_R_java_lang_Class])(ctx, (frame[7].o));
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(431);
	jint temp0 = (jint)((func_rhino_MemberBox_isCtor_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_rhino_MemberBox_isCtor_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	if (temp0 == 0) goto label_96;
	}
	{
	LINE_NUMBER(432);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.constructor.ambiguous"_j));
	sp[1].o = frame[8].o;
	sp[2].o = frame[2].o;
	LINE_NUMBER(434);
	sp[2].o = (jobject)SM_rhino_NativeJavaMethod_scriptSignature_Array1_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[3].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[6].o));
	LINE_NUMBER(432);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError3_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	throwException(ctx, sp[0].o);	}
label_96:;
	{
	LINE_NUMBER(436);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"msg.method.ambiguous"_j));
	sp[1].o = frame[9].o;
	sp[2].o = frame[8].o;
	sp[3].o = frame[2].o;
	LINE_NUMBER(438);
	sp[3].o = (jobject)SM_rhino_NativeJavaMethod_scriptSignature_Array1_java_lang_Object_R_java_lang_String(ctx, sp[3].o);
	sp[4].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[6].o));
	LINE_NUMBER(436);
	sp[0].o = (jobject)SM_rhino_Context_reportRuntimeError4_java_lang_String_java_lang_Object_java_lang_Object_java_lang_Object_java_lang_Object_R_rhino_EvaluatorException(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_rhino_NativeJavaMethod_preferSignature_Array1_java_lang_Object_Array1_java_lang_Class_boolean_Array1_java_lang_Class_boolean_R_int(jcontext ctx, jobject param0, jobject param1, jbool param2, jobject param3, jbool param4) {
	jtype frame[16];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaMethod:preferSignature", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaMethod(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(458);
	frame[5].i = (jint(0));
	LINE_NUMBER(459);
	frame[6].i = (jint(0));
	}
label_2:;
	{
	if ((frame[6].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(460);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	if ((frame[6].i) < (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_5;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((((jarray) nullCheck(ctx, (frame[1].o)))->length) - (jint(1))));
	sp += 1;
	goto label_6;
	}
label_5:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[6].i));
	sp += 1;
	}
label_6:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(461);
	if ((frame[4].i) == 0) goto label_8;
	}
	{
	if ((frame[6].i) < (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_8;
	}
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), ((((jarray) nullCheck(ctx, (frame[3].o)))->length) - (jint(1))));
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i));
	sp += 1;
	}
label_9:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(462);
	if ((frame[7].o) != (frame[8].o)) goto label_11;
	}
	LINE_NUMBER(463);
	goto label_13;
label_11:;
	{
	LINE_NUMBER(465);
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[6].i)));
	LINE_NUMBER(469);
	jint temp0 = (jint)SM_rhino_NativeJavaObject_getConversionWeight_java_lang_Object_java_lang_Class_R_int(ctx, (frame[9].o), (frame[7].o));
	frame[10].i = temp0;
	LINE_NUMBER(470);
	jint temp1 = (jint)SM_rhino_NativeJavaObject_getConversionWeight_java_lang_Object_java_lang_Class_R_int(ctx, (frame[9].o), (frame[8].o));
	frame[11].i = temp1;
	LINE_NUMBER(473);
	if ((frame[10].i) >= (frame[11].i)) goto label_17;
	}
	{
	LINE_NUMBER(474);
	frame[12].i = (jint(1));
	goto label_20;
	}
label_17:;
	{
	LINE_NUMBER(475);
	if ((frame[10].i) <= (frame[11].i)) goto label_21;
	}
	{
	LINE_NUMBER(476);
	frame[12].i = (jint(2));
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(479);
	if ((frame[10].i) != 0) goto label_24;
	}
	{
	LINE_NUMBER(480);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (frame[7].o), (frame[8].o));
	if (temp0 == 0) goto label_26;
	}
	{
	LINE_NUMBER(481);
	frame[12].i = (jint(2));
	goto label_20;
	}
label_26:;
	{
	LINE_NUMBER(482);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (frame[8].o), (frame[7].o));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(483);
	frame[12].i = (jint(1));
	goto label_20;
	}
label_29:;
	{
	LINE_NUMBER(485);
	frame[12].i = (jint(3));
	goto label_20;
	}
label_24:;
	{
	LINE_NUMBER(488);
	frame[12].i = (jint(3));
	}
label_20:;
	{
	LINE_NUMBER(492);
	frame[5].i = ((frame[5].i) | (frame[12].i));
	LINE_NUMBER(494);
	if ((frame[5].i) != (jint(3))) goto label_13;
	}
	LINE_NUMBER(495);
	goto label_3;
label_13:;
	{
	LINE_NUMBER(459);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(498);
	popStackFrame(ctx);
	return (frame[5].i);
	}

	popStackFrame(ctx);
}

void SM_rhino_NativeJavaMethod_printDebug_java_lang_String_rhino_MemberBox_Array1_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeJavaMethod:printDebug", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeJavaMethod(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	LINE_NUMBER(521);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_NativeJavaMethod[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_NativeJavaMethod_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_BaseFunction_getClassName_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_get_java_lang_String_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_get_int_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_java_lang_String_rhino_Scriptable_R_boolean,
	(void *) M_rhino_ScriptableObject_has_int_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_put_int_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_java_lang_String,
	(void *) M_rhino_ScriptableObject_delete_int,
	(void *) M_rhino_ScriptableObject_getPrototype_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setPrototype_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getParentScope_R_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_setParentScope_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_getIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_getDefaultValue_java_lang_Class_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_hasInstance_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_get_rhino_Symbol_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_has_rhino_Symbol_rhino_Scriptable_R_boolean,
	(void *) M_rhino_IdScriptableObject_put_rhino_Symbol_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_delete_rhino_Symbol,
	(void *) M_rhino_ScriptableObject_getAllIds_R_Array1_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putConst_java_lang_String_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineConst_java_lang_String_rhino_Scriptable,
	(void *) M_rhino_ScriptableObject_isConst_java_lang_String_R_boolean,
	(void *) M_rhino_ScriptableObject_createSlotMap_int_R_rhino_SlotMapContainer,
	(void *) M_rhino_BaseFunction_getTypeOf_R_java_lang_String,
	(void *) M_rhino_IdScriptableObject_getAttributes_java_lang_String_R_int,
	(void *) M_rhino_ScriptableObject_getAttributes_int_R_int,
	(void *) M_rhino_IdScriptableObject_getAttributes_rhino_Symbol_R_int,
	(void *) M_rhino_IdScriptableObject_setAttributes_java_lang_String_int,
	(void *) M_rhino_ScriptableObject_setAttributes_int_int,
	(void *) M_rhino_ScriptableObject_setAttributes_rhino_Symbol_int,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean,
	(void *) M_rhino_ScriptableObject_setGetterOrSetter_java_lang_String_int_rhino_Callable_boolean_boolean,
	(void *) M_rhino_ScriptableObject_getGetterOrSetter_java_lang_String_int_boolean_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_isGetterOrSetter_java_lang_String_int_boolean_R_boolean,
	(void *) M_rhino_ScriptableObject_addLazilyInitializedValue_java_lang_String_int_rhino_LazilyLoadedCtor_int,
	(void *) M_rhino_ScriptableObject_setExternalArrayData_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayData_R_rhino_ExternalArrayData,
	(void *) M_rhino_ScriptableObject_getExternalArrayLength_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_avoidObjectDetection_R_boolean,
	(void *) M_rhino_ScriptableObject_equivalentValues_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_defineProperty_java_lang_String_java_lang_Object_java_lang_reflect_Method_java_lang_reflect_Method_int,
	(void *) M_rhino_ScriptableObject_defineOwnProperties_rhino_Context_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_defineOwnProperty_rhino_Context_java_lang_Object_rhino_ScriptableObject_boolean,
	(void *) M_rhino_ScriptableObject_checkPropertyDefinition_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_checkPropertyChange_java_lang_Object_rhino_ScriptableObject_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_sameValue_java_lang_Object_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_applyDescriptorToAttributeBitset_int_rhino_ScriptableObject_R_int,
	(void *) M_rhino_ScriptableObject_isDataDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isAccessorDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_isGenericDescriptor_rhino_ScriptableObject_R_boolean,
	(void *) M_rhino_ScriptableObject_defineFunctionProperties_Array1_java_lang_String_java_lang_Class_int,
	(void *) M_rhino_ScriptableObject_isExtensible_R_boolean,
	(void *) M_rhino_ScriptableObject_preventExtensions,
	(void *) M_rhino_ScriptableObject_sealObject,
	(void *) M_rhino_ScriptableObject_isSealed_R_boolean,
	(void *) M_rhino_ScriptableObject_checkNotSealed_java_lang_Object_int,
	(void *) M_rhino_ScriptableObject_getAssociatedValue_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_associateValue_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_ScriptableObject_putImpl_java_lang_Object_int_rhino_Scriptable_java_lang_Object_R_boolean,
	(void *) M_rhino_ScriptableObject_putConstImpl_java_lang_String_int_rhino_Scriptable_java_lang_Object_int_R_boolean,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_java_lang_String_int_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_findAttributeSlot_rhino_Symbol_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_IdScriptableObject_getIds_boolean_boolean_R_Array1_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_getOwnPropertyDescriptor_rhino_Context_java_lang_Object_R_rhino_ScriptableObject,
	(void *) M_rhino_ScriptableObject_getSlot_rhino_Context_java_lang_Object_rhino_ScriptableObject$SlotAccess_R_rhino_ScriptableObject$Slot,
	(void *) M_rhino_ScriptableObject_size_R_int,
	(void *) M_rhino_ScriptableObject_isEmpty_R_boolean,
	(void *) M_rhino_ScriptableObject_get_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_execIdCall_rhino_IdFunctionObject_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultHas_java_lang_String_R_boolean,
	(void *) M_rhino_IdScriptableObject_defaultGet_java_lang_String_R_java_lang_Object,
	(void *) M_rhino_IdScriptableObject_defaultPut_java_lang_String_java_lang_Object,
	(void *) M_rhino_BaseFunction_getMaxInstanceId_R_int,
	(void *) M_rhino_BaseFunction_findInstanceIdInfo_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findInstanceIdInfo_rhino_Symbol_R_int,
	(void *) M_rhino_BaseFunction_getInstanceIdName_int_R_java_lang_String,
	(void *) M_rhino_BaseFunction_getInstanceIdValue_int_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_setInstanceIdValue_int_java_lang_Object,
	(void *) M_rhino_BaseFunction_setInstanceIdAttributes_int_int,
	(void *) M_rhino_IdScriptableObject_exportAsJSClass_int_rhino_Scriptable_boolean_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_hasPrototypeMap_R_boolean,
	(void *) M_rhino_IdScriptableObject_activatePrototypeMap_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_java_lang_String_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeMethod_java_lang_Object_int_rhino_Symbol_java_lang_String_int_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeConstructor_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_java_lang_String_java_lang_Object_int,
	(void *) M_rhino_IdScriptableObject_initPrototypeValue_int_rhino_Symbol_java_lang_Object_int,
	(void *) M_rhino_BaseFunction_initPrototypeId_int,
	(void *) M_rhino_BaseFunction_findPrototypeId_java_lang_String_R_int,
	(void *) M_rhino_IdScriptableObject_findPrototypeId_rhino_Symbol_R_int,
	(void *) M_rhino_BaseFunction_fillConstructorProperties_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_addIdFunctionProperty_rhino_Scriptable_java_lang_Object_int_java_lang_String_int,
	(void *) M_rhino_IdScriptableObject_newIdFunction_java_lang_Object_int_java_lang_String_int_rhino_Scriptable_R_rhino_IdFunctionObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_java_lang_String_R_rhino_ScriptableObject,
	(void *) M_rhino_IdScriptableObject_getBuiltInDescriptor_rhino_Symbol_R_rhino_ScriptableObject,
	(void *) M_rhino_NativeJavaMethod_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_construct_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_isGeneratorFunction_R_boolean,
	(void *) M_rhino_BaseFunction_realFunction_rhino_Scriptable_rhino_IdFunctionObject_R_rhino_BaseFunction,
	(void *) M_rhino_BaseFunction_setImmunePrototypeProperty_java_lang_Object,
	(void *) M_rhino_BaseFunction_getClassPrototype_R_rhino_Scriptable,
	(void *) M_rhino_BaseFunction_createObject_rhino_Context_rhino_Scriptable_R_rhino_Scriptable,
	(void *) M_rhino_NativeJavaMethod_decompile_int_int_R_java_lang_String,
	(void *) M_rhino_BaseFunction_getArity_R_int,
	(void *) M_rhino_BaseFunction_getLength_R_int,
	(void *) M_rhino_NativeJavaMethod_getFunctionName_R_java_lang_String,
	(void *) M_rhino_BaseFunction_hasPrototypeProperty_R_boolean,
	(void *) M_rhino_BaseFunction_getPrototypeProperty_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_setupDefaultPrototype_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_getArguments_R_java_lang_Object,
	(void *) M_rhino_BaseFunction_jsConstructor_rhino_Context_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object,
	(void *) M_rhino_NativeJavaMethod_findCachedFunction_rhino_Context_Array1_java_lang_Object_R_int,
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
	{ "getClassName", "()Ljava/lang/String;" },
	{ "get", "(Ljava/lang/String;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "get", "(ILrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Ljava/lang/String;Lrhino/Scriptable;)Z" },
	{ "has", "(ILrhino/Scriptable;)Z" },
	{ "put", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "put", "(ILrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Ljava/lang/String;)V" },
	{ "delete", "(I)V" },
	{ "getPrototype", "()Lrhino/Scriptable;" },
	{ "setPrototype", "(Lrhino/Scriptable;)V" },
	{ "getParentScope", "()Lrhino/Scriptable;" },
	{ "setParentScope", "(Lrhino/Scriptable;)V" },
	{ "getIds", "()[Ljava/lang/Object;" },
	{ "getDefaultValue", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "hasInstance", "(Lrhino/Scriptable;)Z" },
	{ "get", "(Lrhino/Symbol;Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "has", "(Lrhino/Symbol;Lrhino/Scriptable;)Z" },
	{ "put", "(Lrhino/Symbol;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "delete", "(Lrhino/Symbol;)V" },
	{ "getAllIds", "()[Ljava/lang/Object;" },
	{ "putConst", "(Ljava/lang/String;Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "defineConst", "(Ljava/lang/String;Lrhino/Scriptable;)V" },
	{ "isConst", "(Ljava/lang/String;)Z" },
	{ "createSlotMap", "(I)Lrhino/SlotMapContainer;" },
	{ "getTypeOf", "()Ljava/lang/String;" },
	{ "getAttributes", "(Ljava/lang/String;)I" },
	{ "getAttributes", "(I)I" },
	{ "getAttributes", "(Lrhino/Symbol;)I" },
	{ "setAttributes", "(Ljava/lang/String;I)V" },
	{ "setAttributes", "(II)V" },
	{ "setAttributes", "(Lrhino/Symbol;I)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;Z)V" },
	{ "setGetterOrSetter", "(Ljava/lang/String;ILrhino/Callable;ZZ)V" },
	{ "getGetterOrSetter", "(Ljava/lang/String;IZ)Ljava/lang/Object;" },
	{ "isGetterOrSetter", "(Ljava/lang/String;IZ)Z" },
	{ "addLazilyInitializedValue", "(Ljava/lang/String;ILrhino/LazilyLoadedCtor;I)V" },
	{ "setExternalArrayData", "(Lrhino/ExternalArrayData;)V" },
	{ "getExternalArrayData", "()Lrhino/ExternalArrayData;" },
	{ "getExternalArrayLength", "()Ljava/lang/Object;" },
	{ "avoidObjectDetection", "()Z" },
	{ "equivalentValues", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Lrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "defineProperty", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/reflect/Method;Ljava/lang/reflect/Method;I)V" },
	{ "defineOwnProperties", "(Lrhino/Context;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;)V" },
	{ "defineOwnProperty", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject;Z)V" },
	{ "checkPropertyDefinition", "(Lrhino/ScriptableObject;)V" },
	{ "checkPropertyChange", "(Ljava/lang/Object;Lrhino/ScriptableObject;Lrhino/ScriptableObject;)V" },
	{ "sameValue", "(Ljava/lang/Object;Ljava/lang/Object;)Z" },
	{ "applyDescriptorToAttributeBitset", "(ILrhino/ScriptableObject;)I" },
	{ "isDataDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isAccessorDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "isGenericDescriptor", "(Lrhino/ScriptableObject;)Z" },
	{ "defineFunctionProperties", "([Ljava/lang/String;Ljava/lang/Class;I)V" },
	{ "isExtensible", "()Z" },
	{ "preventExtensions", "()V" },
	{ "sealObject", "()V" },
	{ "isSealed", "()Z" },
	{ "checkNotSealed", "(Ljava/lang/Object;I)V" },
	{ "getAssociatedValue", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "associateValue", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putImpl", "(Ljava/lang/Object;ILrhino/Scriptable;Ljava/lang/Object;)Z" },
	{ "putConstImpl", "(Ljava/lang/String;ILrhino/Scriptable;Ljava/lang/Object;I)Z" },
	{ "findAttributeSlot", "(Ljava/lang/String;ILrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "findAttributeSlot", "(Lrhino/Symbol;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "getIds", "(ZZ)[Ljava/lang/Object;" },
	{ "getOwnPropertyDescriptor", "(Lrhino/Context;Ljava/lang/Object;)Lrhino/ScriptableObject;" },
	{ "getSlot", "(Lrhino/Context;Ljava/lang/Object;Lrhino/ScriptableObject$SlotAccess;)Lrhino/ScriptableObject$Slot;" },
	{ "size", "()I" },
	{ "isEmpty", "()Z" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "execIdCall", "(Lrhino/IdFunctionObject;Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "defaultHas", "(Ljava/lang/String;)Z" },
	{ "defaultGet", "(Ljava/lang/String;)Ljava/lang/Object;" },
	{ "defaultPut", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "getMaxInstanceId", "()I" },
	{ "findInstanceIdInfo", "(Ljava/lang/String;)I" },
	{ "findInstanceIdInfo", "(Lrhino/Symbol;)I" },
	{ "getInstanceIdName", "(I)Ljava/lang/String;" },
	{ "getInstanceIdValue", "(I)Ljava/lang/Object;" },
	{ "setInstanceIdValue", "(ILjava/lang/Object;)V" },
	{ "setInstanceIdAttributes", "(II)V" },
	{ "exportAsJSClass", "(ILrhino/Scriptable;Z)Lrhino/IdFunctionObject;" },
	{ "hasPrototypeMap", "()Z" },
	{ "activatePrototypeMap", "(I)V" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILjava/lang/String;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeMethod", "(Ljava/lang/Object;ILrhino/Symbol;Ljava/lang/String;I)Lrhino/IdFunctionObject;" },
	{ "initPrototypeConstructor", "(Lrhino/IdFunctionObject;)V" },
	{ "initPrototypeValue", "(ILjava/lang/String;Ljava/lang/Object;I)V" },
	{ "initPrototypeValue", "(ILrhino/Symbol;Ljava/lang/Object;I)V" },
	{ "initPrototypeId", "(I)V" },
	{ "findPrototypeId", "(Ljava/lang/String;)I" },
	{ "findPrototypeId", "(Lrhino/Symbol;)I" },
	{ "fillConstructorProperties", "(Lrhino/IdFunctionObject;)V" },
	{ "addIdFunctionProperty", "(Lrhino/Scriptable;Ljava/lang/Object;ILjava/lang/String;I)V" },
	{ "newIdFunction", "(Ljava/lang/Object;ILjava/lang/String;ILrhino/Scriptable;)Lrhino/IdFunctionObject;" },
	{ "getBuiltInDescriptor", "(Ljava/lang/String;)Lrhino/ScriptableObject;" },
	{ "getBuiltInDescriptor", "(Lrhino/Symbol;)Lrhino/ScriptableObject;" },
	{ "call", "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "construct", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Lrhino/Scriptable;" },
	{ "isGeneratorFunction", "()Z" },
	{ "realFunction", "(Lrhino/Scriptable;Lrhino/IdFunctionObject;)Lrhino/BaseFunction;" },
	{ "setImmunePrototypeProperty", "(Ljava/lang/Object;)V" },
	{ "getClassPrototype", "()Lrhino/Scriptable;" },
	{ "createObject", "(Lrhino/Context;Lrhino/Scriptable;)Lrhino/Scriptable;" },
	{ "decompile", "(II)Ljava/lang/String;" },
	{ "getArity", "()I" },
	{ "getLength", "()I" },
	{ "getFunctionName", "()Ljava/lang/String;" },
	{ "hasPrototypeProperty", "()Z" },
	{ "getPrototypeProperty", "()Ljava/lang/Object;" },
	{ "setupDefaultPrototype", "()Ljava/lang/Object;" },
	{ "getArguments", "()Ljava/lang/Object;" },
	{ "jsConstructor", "(Lrhino/Context;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "findCachedFunction", "(Lrhino/Context;[Ljava/lang/Object;)I" },
};

static FieldMetadata fields[] {
	{ "PREFERENCE_EQUAL", &class_int, (intptr_t) &SF_rhino_NativeJavaMethod_PREFERENCE_EQUAL, "I", 26 },
	{ "PREFERENCE_FIRST_ARG", &class_int, (intptr_t) &SF_rhino_NativeJavaMethod_PREFERENCE_FIRST_ARG, "I", 26 },
	{ "PREFERENCE_SECOND_ARG", &class_int, (intptr_t) &SF_rhino_NativeJavaMethod_PREFERENCE_SECOND_ARG, "I", 26 },
	{ "PREFERENCE_AMBIGUOUS", &class_int, (intptr_t) &SF_rhino_NativeJavaMethod_PREFERENCE_AMBIGUOUS, "I", 26 },
	{ "debug", &class_boolean, (intptr_t) &SF_rhino_NativeJavaMethod_debug, "Z", 26 },
	{ "methods", getArrayClass(&class_rhino_MemberBox, 1), offsetof(rhino_NativeJavaMethod, F_methods), "[Lrhino/MemberBox;", 0 },
	{ "functionName", &class_java_lang_String, offsetof(rhino_NativeJavaMethod, F_functionName), "Ljava/lang/String;", 18 },
	{ "overloadCache", &class_java_util_concurrent_CopyOnWriteArrayList, offsetof(rhino_NativeJavaMethod, F_overloadCache), "Ljava/util/concurrent/CopyOnWriteArrayList;", 146 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeJavaMethod_Array1_rhino_MemberBox, 0, "([Lrhino/MemberBox;)V", 0 },
	{ "<init>", (intptr_t) init_rhino_NativeJavaMethod_Array1_rhino_MemberBox_java_lang_String, 0, "([Lrhino/MemberBox;Ljava/lang/String;)V", 0 },
	{ "<init>", (intptr_t) init_rhino_NativeJavaMethod_rhino_MemberBox_java_lang_String, 0, "(Lrhino/MemberBox;Ljava/lang/String;)V", 0 },
	{ "<init>", (intptr_t) init_rhino_NativeJavaMethod_java_lang_reflect_Method_java_lang_String, 0, "(Ljava/lang/reflect/Method;Ljava/lang/String;)V", 1 },
	{ "getFunctionName", (intptr_t) M_rhino_NativeJavaMethod_getFunctionName_R_java_lang_String, VTABLE_rhino_NativeJavaMethod_getFunctionName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "scriptSignature", (intptr_t) SM_rhino_NativeJavaMethod_scriptSignature_Array1_java_lang_Object_R_java_lang_String, 0, "([Ljava/lang/Object;)Ljava/lang/String;", 8 },
	{ "decompile", (intptr_t) M_rhino_NativeJavaMethod_decompile_int_int_R_java_lang_String, VTABLE_rhino_NativeJavaMethod_decompile_int_int_R_java_lang_String, "(II)Ljava/lang/String;", 0 },
	{ "toString", (intptr_t) M_rhino_NativeJavaMethod_toString_R_java_lang_String, VTABLE_rhino_NativeJavaMethod_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "call", (intptr_t) M_rhino_NativeJavaMethod_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, VTABLE_rhino_NativeJavaMethod_call_rhino_Context_rhino_Scriptable_rhino_Scriptable_Array1_java_lang_Object_R_java_lang_Object, "(Lrhino/Context;Lrhino/Scriptable;Lrhino/Scriptable;[Ljava/lang/Object;)Ljava/lang/Object;", 1 },
	{ "findCachedFunction", (intptr_t) M_rhino_NativeJavaMethod_findCachedFunction_rhino_Context_Array1_java_lang_Object_R_int, VTABLE_rhino_NativeJavaMethod_findCachedFunction_rhino_Context_Array1_java_lang_Object_R_int, "(Lrhino/Context;[Ljava/lang/Object;)I", 0 },
	{ "findFunction", (intptr_t) SM_rhino_NativeJavaMethod_findFunction_rhino_Context_Array1_rhino_MemberBox_Array1_java_lang_Object_R_int, 0, "(Lrhino/Context;[Lrhino/MemberBox;[Ljava/lang/Object;)I", 8 },
	{ "preferSignature", (intptr_t) SM_rhino_NativeJavaMethod_preferSignature_Array1_java_lang_Object_Array1_java_lang_Class_boolean_Array1_java_lang_Class_boolean_R_int, 0, "([Ljava/lang/Object;[Ljava/lang/Class;Z[Ljava/lang/Class;Z)I", 10 },
	{ "printDebug", (intptr_t) SM_rhino_NativeJavaMethod_printDebug_java_lang_String_rhino_MemberBox_Array1_java_lang_Object, 0, "(Ljava/lang/String;Lrhino/MemberBox;[Ljava/lang/Object;)V", 10 },
};

Class class_rhino_NativeJavaMethod{
		.nativeName = (intptr_t) "rhino/NativeJavaMethod",
		.parentClass = (intptr_t) &class_rhino_BaseFunction,
		.size = sizeof(rhino_NativeJavaMethod),
		.classVtable = (intptr_t) vtable_rhino_NativeJavaMethod,
		.staticInitializer = (intptr_t) clinit_rhino_NativeJavaMethod,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeJavaMethod,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 130,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeJavaMethod = registerClass(&class_rhino_NativeJavaMethod);

}
