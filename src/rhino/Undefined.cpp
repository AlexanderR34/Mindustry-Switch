#include "rhino/Undefined.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/lang/Boolean.h"
#include "rhino/Scriptable.h"
#include "rhino/Undefined.h"
#include "java/lang/reflect/Proxy.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/reflect/InvocationHandler.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "rhino/Undefined_invoke_java_lang_reflect_InvocationHandler_0.h"
#include "java/lang/ClassLoader.h"

extern "C" {

jobject SF_rhino_Undefined_instance;
jobject SF_rhino_Undefined_SCRIPTABLE_UNDEFINED;

void mark_rhino_Undefined(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_Undefined_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Undefined_instance)->clazz)->markFunction)((jobject) SF_rhino_Undefined_instance, mark, depth + 1);
		if (SF_rhino_Undefined_SCRIPTABLE_UNDEFINED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_Undefined_SCRIPTABLE_UNDEFINED)->clazz)->markFunction)((jobject) SF_rhino_Undefined_SCRIPTABLE_UNDEFINED, mark, depth + 1);
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
	auto self = (rhino_Undefined *) object;
}

void init_rhino_Undefined(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Undefined:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Undefined(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_Undefined_readResolve_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Undefined:readResolve", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_rhino_Undefined_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Undefined:equals", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	jint temp0 = (jint)M_java_lang_Object_equals_java_lang_Object_R_boolean(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_2;
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

jint M_rhino_Undefined_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Undefined:hashCode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Undefined:isUndefined", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Undefined(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(42);
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o == (frame[0].o)) goto label_1;
	}
	{
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_SCRIPTABLE_UNDEFINED;
	if (sp[0].o != (frame[0].o)) goto label_2;
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

jobject SM_rhino_Undefined_lambda$static$0_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Undefined:lambda$static$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Undefined(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"toString"_j))));
	if (temp0 == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"undefined"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"equals"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(35);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) <= 0) goto label_4;
	}
	{
	jint temp0 = (jint)SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (jint(0)))));
	if (temp0 == 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	POP_N(1); // Pop method args
	sp->o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[0].i);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(37);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"undefined doesn't support "_j))));
	sp[2].o = (jobject)((func_java_lang_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_reflect_Method_getName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void clinit_rhino_Undefined(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/Undefined:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_Undefined(ctx);
	{
	LINE_NUMBER(9);
	clinit_rhino_Undefined(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_Undefined);
	init_rhino_Undefined(ctx, sp[0].o);
	clinit_rhino_Undefined(ctx);
	SF_rhino_Undefined_instance = sp[0].o;
	LINE_NUMBER(32);
	sp[0].o = (jobject)((func_java_lang_Class_getClassLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, (((jobject) &class_rhino_Undefined)))->vtable)[VTABLE_java_lang_Class_getClassLoader_R_java_lang_ClassLoader])(ctx, (((jobject) &class_rhino_Undefined)));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) &class_rhino_Scriptable));
	{ /* InvokeDynamic */
		clinit_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0(ctx);
		auto proxy = (rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0 *) gcAlloc(ctx, &class_rhino_Undefined_invoke_java_lang_reflect_InvocationHandler_0);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_java_lang_reflect_Proxy_newProxyInstance_java_lang_ClassLoader_Array1_java_lang_Class_java_lang_reflect_InvocationHandler_R_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_rhino_Undefined(ctx);
	SF_rhino_Undefined_SCRIPTABLE_UNDEFINED = (checkCast(ctx, &class_rhino_Scriptable, sp[0].o));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_Undefined[] {
	(void *) M_rhino_Undefined_hashCode_R_int,
	(void *) M_rhino_Undefined_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_Undefined_readResolve_R_java_lang_Object,
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
	{ "readResolve", "()Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "instance", &class_java_lang_Object, (intptr_t) &SF_rhino_Undefined_instance, "Ljava/lang/Object;", 25 },
	{ "SCRIPTABLE_UNDEFINED", &class_rhino_Scriptable, (intptr_t) &SF_rhino_Undefined_SCRIPTABLE_UNDEFINED, "Lrhino/Scriptable;", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_Undefined, 0, "()V", 2 },
	{ "readResolve", (intptr_t) M_rhino_Undefined_readResolve_R_java_lang_Object, VTABLE_rhino_Undefined_readResolve_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "equals", (intptr_t) M_rhino_Undefined_equals_java_lang_Object_R_boolean, VTABLE_rhino_Undefined_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_rhino_Undefined_hashCode_R_int, VTABLE_rhino_Undefined_hashCode_R_int, "()I", 1 },
	{ "isUndefined", (intptr_t) SM_rhino_Undefined_isUndefined_java_lang_Object_R_boolean, 0, "(Ljava/lang/Object;)Z", 9 },
	{ "lambda$static$0", (intptr_t) SM_rhino_Undefined_lambda$static$0_java_lang_Object_java_lang_reflect_Method_Array1_java_lang_Object_R_java_lang_Object, 0, "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", 4106 },
	{ "<clinit>", (intptr_t) clinit_rhino_Undefined, 0, "()V", 8 },
};

Class class_rhino_Undefined{
		.nativeName = (intptr_t) "rhino/Undefined",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_Undefined),
		.classVtable = (intptr_t) vtable_rhino_Undefined,
		.staticInitializer = (intptr_t) clinit_rhino_Undefined,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_Undefined,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_Undefined = registerClass(&class_rhino_Undefined);

}
