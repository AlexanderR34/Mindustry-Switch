#include "rhino/VMBridge.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/Boolean.h"
#include "rhino/Scriptable.h"
#include "java/lang/reflect/Proxy.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "java/lang/reflect/InvocationHandler.h"
#include "java/lang/NoSuchMethodException.h"
#include "rhino/ContextFactory.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Throwable.h"
#include "rhino/VMBridge.h"
#include "java/lang/Exception.h"
#include "java/lang/ThreadLocal.h"
#include "rhino/Context.h"
#include "java/lang/InstantiationException.h"
#include "java/lang/reflect/InvocationTargetException.h"
#include "java/lang/Object.h"
#include "rhino/VMBridge_invoke_java_lang_reflect_InvocationHandler_0.h"
#include "java/lang/IllegalStateException.h"
#include "rhino/InterfaceAdapter.h"
#include "java/lang/reflect/AccessibleObject.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jobject SF_rhino_VMBridge_contextLocal;

void mark_rhino_VMBridge(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_VMBridge_contextLocal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_VMBridge_contextLocal)->clazz)->markFunction)((jobject) SF_rhino_VMBridge_contextLocal, mark, depth + 1);
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
	auto self = (rhino_VMBridge *) object;
}

void init_rhino_VMBridge(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/VMBridge:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_VMBridge(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_VMBridge_getThreadContextHelper_R_java_lang_Object(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/VMBridge:getThreadContextHelper", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_VMBridge(ctx);
	{
	LINE_NUMBER(29);
	clinit_rhino_VMBridge(ctx);
	sp[0].o = (jobject)SF_rhino_VMBridge_contextLocal;
	sp[0].o = (jobject)((func_java_lang_ThreadLocal_get_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object])(ctx, sp[0].o);
	frame[0].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), sp[0].o));
	LINE_NUMBER(30);
	if ((frame[0].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	frame[0].o = sp[0].o;
	LINE_NUMBER(32);
	clinit_rhino_VMBridge(ctx);
	sp[0].o = (jobject)SF_rhino_VMBridge_contextLocal;
	((func_java_lang_ThreadLocal_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_ThreadLocal_set_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_VMBridge_getContext_java_lang_Object_R_rhino_Context(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/VMBridge:getContext", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_VMBridge(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(44);
	frame[1].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[0].o)))));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_Context, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))))));
	}

	popStackFrame(ctx);
}

void SM_rhino_VMBridge_setContext_java_lang_Object_rhino_Context(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/VMBridge:setContext", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_VMBridge(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(55);
	frame[2].o = (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[0].o)))));
	LINE_NUMBER(56);
	ARRAY_ACCESS(jobject, (frame[2].o), (jint(0))) = (frame[1].o);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_rhino_VMBridge_tryToMakeAccessible_java_lang_reflect_AccessibleObject_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/VMBridge:tryToMakeAccessible", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_VMBridge(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(68);
	jint temp0 = (jint)((func_java_lang_reflect_AccessibleObject_isAccessible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_AccessibleObject_isAccessible_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_0;
	}
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (jint(1));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(72);
	((func_java_lang_reflect_AccessibleObject_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_AccessibleObject_setAccessible_boolean])(ctx, (frame[0].o), (jint(1)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(74);
	goto label_6;
label_2:;
	LINE_NUMBER(73);
	INST_ASTORE(1);
label_6:;
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)((func_java_lang_reflect_AccessibleObject_isAccessible_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_reflect_AccessibleObject_isAccessible_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_rhino_VMBridge_getInterfaceProxyHelper_rhino_ContextFactory_Array1_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/VMBridge:getInterfaceProxyHelper", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_VMBridge(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_java_lang_Class_getClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))))->vtable)[VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0)))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(94);
	sp[0].o = (jobject)SM_java_lang_reflect_Proxy_getProxyClass_java_lang_ClassLoader_Array1_java_lang_Class_R_java_lang_Class(ctx, (frame[2].o), (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchMethodException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(97);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) &class_java_lang_reflect_InvocationHandler));
	sp[0].o = (jobject)((func_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(101);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(98);
	frame[5].o = sp[0].o;
	LINE_NUMBER(100);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_VMBridge_newInterfaceProxy_java_lang_Object_rhino_ContextFactory_rhino_InterfaceAdapter_java_lang_Object_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/VMBridge:newInterfaceProxy", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_VMBridge(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(119);
	frame[5].o = (checkCast(ctx, &class_java_lang_reflect_Constructor, (frame[0].o)));
	LINE_NUMBER(121);
	{ /* InvokeDynamic */
		clinit_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0(ctx);
		auto proxy = (rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0 *) gcAlloc(ctx, &class_rhino_VMBridge_invoke_java_lang_reflect_InvocationHandler_0);
		proxy->F_field3 = (jref) (frame[4].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[2].o);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[0].o = (jobject) proxy;
	}
	frame[6].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_reflect_InvocationTargetException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_InstantiationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_4; }
	}
	{
	LINE_NUMBER(146);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[6].o);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[7].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(152);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(147);
	frame[8].o = sp[0].o;
	LINE_NUMBER(148);
	sp[0].o = (jobject)SM_rhino_Context_throwAsScriptRuntimeEx_java_lang_Throwable_R_java_lang_RuntimeException(ctx, (frame[8].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(149);
	frame[8].o = sp[0].o;
	LINE_NUMBER(151);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[8].o));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (frame[7].o);
	}

	popStackFrame(ctx);
}

jobject SM_rhino_VMBridge_lambda$newInterfaceProxy$0_java_lang_Object_rhino_InterfaceAdapter_rhino_ContextFactory_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/VMBridge:lambda$newInterfaceProxy$0", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_VMBridge(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Method_getDeclaringClass_R_java_lang_Class])(ctx, (frame[5].o));
	if (sp[0].o != (((jobject) &class_java_lang_Object))) goto label_1;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[5].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(127);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"equals"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(128);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(0))));
	LINE_NUMBER(133);
	if ((frame[4].o) != (frame[8].o)) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(135);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"hashCode"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)((func_java_lang_Object_hashCode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_hashCode_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(138);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"toString"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(139);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Proxy["_j))));
	sp[1].o = (jobject)((func_java_lang_Object_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_toString_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_rhino_InterfaceAdapter_invoke_rhino_ContextFactory_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_rhino_InterfaceAdapter_invoke_rhino_ContextFactory_java_lang_Object_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].o), (frame[0].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_rhino_VMBridge(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/VMBridge:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_VMBridge(ctx);
	{
	LINE_NUMBER(8);
	clinit_java_lang_ThreadLocal(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ThreadLocal);
	init_java_lang_ThreadLocal(ctx, sp[0].o);
	clinit_rhino_VMBridge(ctx);
	SF_rhino_VMBridge_contextLocal = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_VMBridge[] {
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

static FieldMetadata fields[] {
	{ "contextLocal", &class_java_lang_ThreadLocal, (intptr_t) &SF_rhino_VMBridge_contextLocal, "Ljava/lang/ThreadLocal;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_VMBridge, 0, "()V", 1 },
	{ "getThreadContextHelper", (intptr_t) SM_rhino_VMBridge_getThreadContextHelper_R_java_lang_Object, 0, "()Ljava/lang/Object;", 9 },
	{ "getContext", (intptr_t) SM_rhino_VMBridge_getContext_java_lang_Object_R_rhino_Context, 0, "(Ljava/lang/Object;)Lrhino/Context;", 9 },
	{ "setContext", (intptr_t) SM_rhino_VMBridge_setContext_java_lang_Object_rhino_Context, 0, "(Ljava/lang/Object;Lrhino/Context;)V", 9 },
	{ "tryToMakeAccessible", (intptr_t) SM_rhino_VMBridge_tryToMakeAccessible_java_lang_reflect_AccessibleObject_R_boolean, 0, "(Ljava/lang/reflect/AccessibleObject;)Z", 9 },
	{ "getInterfaceProxyHelper", (intptr_t) SM_rhino_VMBridge_getInterfaceProxyHelper_rhino_ContextFactory_Array1_java_lang_Class_R_java_lang_Object, 0, "(Lrhino/ContextFactory;[Ljava/lang/Class;)Ljava/lang/Object;", 9 },
	{ "newInterfaceProxy", (intptr_t) SM_rhino_VMBridge_newInterfaceProxy_java_lang_Object_rhino_ContextFactory_rhino_InterfaceAdapter_java_lang_Object_rhino_Scriptable_R_java_lang_Object, 0, "(Ljava/lang/Object;Lrhino/ContextFactory;Lrhino/InterfaceAdapter;Ljava/lang/Object;Lrhino/Scriptable;)Ljava/lang/Object;", 9 },
	{ "lambda$newInterfaceProxy$0", (intptr_t) SM_rhino_VMBridge_lambda$newInterfaceProxy$0_java_lang_Object_rhino_InterfaceAdapter_rhino_ContextFactory_rhino_Scriptable_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;Lrhino/InterfaceAdapter;Lrhino/ContextFactory;Lrhino/Scriptable;Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", 4106 },
	{ "<clinit>", (intptr_t) clinit_rhino_VMBridge, 0, "()V", 8 },
};

Class class_rhino_VMBridge{
		.nativeName = (intptr_t) "rhino/VMBridge",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_VMBridge),
		.classVtable = (intptr_t) vtable_rhino_VMBridge,
		.staticInitializer = (intptr_t) clinit_rhino_VMBridge,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_VMBridge,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_VMBridge = registerClass(&class_rhino_VMBridge);

}
