#include "java/lang/reflect/Proxy.h"
#include "java/lang/Object.h"
#include "java/lang/IllegalAccessException.h"
#include "java/lang/reflect/InvocationHandler.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/ReflectiveOperationException.h"
#include "java/lang/Class.h"
#include "java/lang/reflect/Proxy.h"
#include "java/lang/ClassLoader.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_java_lang_reflect_Proxy(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_reflect_Proxy *) object;
	if (self->F_h)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_h)->clazz)->markFunction)((jobject) self->F_h, mark, depth + 1);
	if (self->F_methods)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_methods)->clazz)->markFunction)((jobject) self->F_methods, mark, depth + 1);
}

void clinit_java_lang_reflect_Proxy(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_reflect_Proxy_java_lang_reflect_InvocationHandler(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Proxy:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Proxy(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	((java_lang_reflect_Proxy *) NULL_CHECK((frame[0].o)))->F_h = (jref) (frame[1].o);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_reflect_Proxy_newProxyInstance_java_lang_ClassLoader_Array1_java_lang_Class_java_lang_reflect_InvocationHandler_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Proxy:newProxyInstance", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Proxy(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_ReflectiveOperationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_4: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)SM_java_lang_reflect_Proxy_getProxyClass_java_lang_ClassLoader_Array1_java_lang_Class_R_java_lang_Class(ctx, (frame[0].o), (frame[1].o));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) &class_java_lang_reflect_InvocationHandler));
	sp[0].o = (jobject)((func_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[2].o);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(33);
	frame[3].o = sp[0].o;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool SM_java_lang_reflect_Proxy_isProxyClass_java_lang_Class_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Proxy:isProxyClass", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Proxy(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(39);
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, (((jobject) &class_java_lang_reflect_Proxy)))->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, (((jobject) &class_java_lang_reflect_Proxy)), (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_reflect_Proxy_getInvocationHandler_java_lang_Object_R_java_lang_reflect_InvocationHandler(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/reflect/Proxy:getInvocationHandler", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_reflect_Proxy(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(43);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_reflect_Proxy)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(44);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((java_lang_reflect_Proxy *) NULL_CHECK((checkCast(ctx, &class_java_lang_reflect_Proxy, (frame[0].o)))))->F_h;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_reflect_Proxy[] {
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
	{ "h", &class_java_lang_reflect_InvocationHandler, offsetof(java_lang_reflect_Proxy, F_h), "Ljava/lang/reflect/InvocationHandler;", 4 },
	{ "methods", getArrayClass(&class_java_lang_reflect_Method, 1), offsetof(java_lang_reflect_Proxy, F_methods), "[Ljava/lang/reflect/Method;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_reflect_Proxy_java_lang_reflect_InvocationHandler, 0, "(Ljava/lang/reflect/InvocationHandler;)V", 4 },
	{ "getProxyClass", (intptr_t) SM_java_lang_reflect_Proxy_getProxyClass_java_lang_ClassLoader_Array1_java_lang_Class_R_java_lang_Class, 0, "(Ljava/lang/ClassLoader;[Ljava/lang/Class;)Ljava/lang/Class;", 393 },
	{ "newProxyInstance", (intptr_t) SM_java_lang_reflect_Proxy_newProxyInstance_java_lang_ClassLoader_Array1_java_lang_Class_java_lang_reflect_InvocationHandler_R_java_lang_Object, 0, "(Ljava/lang/ClassLoader;[Ljava/lang/Class;Ljava/lang/reflect/InvocationHandler;)Ljava/lang/Object;", 9 },
	{ "isProxyClass", (intptr_t) SM_java_lang_reflect_Proxy_isProxyClass_java_lang_Class_R_boolean, 0, "(Ljava/lang/Class;)Z", 9 },
	{ "getInvocationHandler", (intptr_t) SM_java_lang_reflect_Proxy_getInvocationHandler_java_lang_Object_R_java_lang_reflect_InvocationHandler, 0, "(Ljava/lang/Object;)Ljava/lang/reflect/InvocationHandler;", 9 },
};

Class class_java_lang_reflect_Proxy{
		.nativeName = (intptr_t) "java/lang/reflect/Proxy",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_reflect_Proxy),
		.classVtable = (intptr_t) vtable_java_lang_reflect_Proxy,
		.staticInitializer = (intptr_t) clinit_java_lang_reflect_Proxy,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_reflect_Proxy,
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
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_reflect_Proxy = registerClass(&class_java_lang_reflect_Proxy);

}
