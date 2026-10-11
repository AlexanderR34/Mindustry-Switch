#include "rhino/NativeError_ProtoProps.h"
#include "java/lang/Integer.h"
#include "rhino/Function.h"
#include "rhino/NativeError_1.h"
#include "rhino/Context.h"
#include "rhino/Scriptable.h"
#include "rhino/NativeError.h"
#include "rhino/Undefined.h"
#include "java/lang/Object.h"
#include "rhino/NativeError_ProtoProps.h"
#include "java/lang/String.h"
#include "java/lang/NoSuchMethodException.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_rhino_NativeError$ProtoProps_KEY;
jobject SF_rhino_NativeError$ProtoProps_GET_STACK_LIMIT;
jobject SF_rhino_NativeError$ProtoProps_SET_STACK_LIMIT;
jobject SF_rhino_NativeError$ProtoProps_GET_PREPARE_STACK;
jobject SF_rhino_NativeError$ProtoProps_SET_PREPARE_STACK;

void mark_rhino_NativeError$ProtoProps(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_NativeError$ProtoProps_KEY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeError$ProtoProps_KEY)->clazz)->markFunction)((jobject) SF_rhino_NativeError$ProtoProps_KEY, mark, depth + 1);
		if (SF_rhino_NativeError$ProtoProps_GET_STACK_LIMIT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeError$ProtoProps_GET_STACK_LIMIT)->clazz)->markFunction)((jobject) SF_rhino_NativeError$ProtoProps_GET_STACK_LIMIT, mark, depth + 1);
		if (SF_rhino_NativeError$ProtoProps_SET_STACK_LIMIT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeError$ProtoProps_SET_STACK_LIMIT)->clazz)->markFunction)((jobject) SF_rhino_NativeError$ProtoProps_SET_STACK_LIMIT, mark, depth + 1);
		if (SF_rhino_NativeError$ProtoProps_GET_PREPARE_STACK)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeError$ProtoProps_GET_PREPARE_STACK)->clazz)->markFunction)((jobject) SF_rhino_NativeError$ProtoProps_GET_PREPARE_STACK, mark, depth + 1);
		if (SF_rhino_NativeError$ProtoProps_SET_PREPARE_STACK)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_NativeError$ProtoProps_SET_PREPARE_STACK)->clazz)->markFunction)((jobject) SF_rhino_NativeError$ProtoProps_SET_PREPARE_STACK, mark, depth + 1);
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
	auto self = (rhino_NativeError$ProtoProps *) object;
	if (self->F_prepareStackTrace)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prepareStackTrace)->clazz)->markFunction)((jobject) self->F_prepareStackTrace, mark, depth + 1);
}

void init_rhino_NativeError$ProtoProps(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError$ProtoProps:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeError$ProtoProps(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(353);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(372);
	((rhino_NativeError$ProtoProps *) NULL_CHECK((frame[0].o)))->F_stackTraceLimit = (jint(-1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_NativeError$ProtoProps_getStackTraceLimit_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError$ProtoProps:getStackTraceLimit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(376);
	if (((jint)((rhino_NativeError$ProtoProps *) NULL_CHECK((frame[0].o)))->F_stackTraceLimit) < 0) goto label_1;
	}
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((jint)((rhino_NativeError$ProtoProps *) NULL_CHECK((frame[0].o)))->F_stackTraceLimit));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)SM_java_lang_Double_valueOf_double_R_java_lang_Double(ctx, (jdouble(std::numeric_limits<double>::infinity())));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeError$ProtoProps_getStackTraceLimit_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError$ProtoProps:getStackTraceLimit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(383);
	popStackFrame(ctx);
	return ((jint)((rhino_NativeError$ProtoProps *) NULL_CHECK((frame[0].o)))->F_stackTraceLimit);
	}

	popStackFrame(ctx);
}

void M_rhino_NativeError$ProtoProps_setStackTraceLimit_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError$ProtoProps:setStackTraceLimit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(387);
	jdouble temp0 = (jdouble)SM_rhino_Context_toNumber_java_lang_Object_R_double(ctx, (frame[2].o));
	frame[3].d = temp0;
	LINE_NUMBER(388);
	jint temp1 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[3].d));
	if (temp1 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isInfinite_double_R_boolean(ctx, (frame[3].d));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(389);
	((rhino_NativeError$ProtoProps *) NULL_CHECK((frame[0].o)))->F_stackTraceLimit = (jint(-1));
	goto label_4;
	}
label_3:;
	{
	LINE_NUMBER(391);
	((rhino_NativeError$ProtoProps *) NULL_CHECK((frame[0].o)))->F_stackTraceLimit = (jint((frame[3].d)));
	}
label_4:;
	LINE_NUMBER(393);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeError$ProtoProps_getPrepareStackTrace_rhino_Scriptable_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError$ProtoProps:getPrepareStackTrace", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(396);
	sp[0].o = (jobject)((func_rhino_NativeError$ProtoProps_getPrepareStackTrace_R_rhino_Function) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_rhino_NativeError$ProtoProps_getPrepareStackTrace_R_rhino_Function])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(397);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	clinit_rhino_Undefined(ctx);
	(sp++)->o = SF_rhino_Undefined_instance;
	goto label_3;
label_2:;
	INST_ALOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_rhino_NativeError$ProtoProps_getPrepareStackTrace_R_rhino_Function(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError$ProtoProps:getPrepareStackTrace", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((rhino_NativeError$ProtoProps *) NULL_CHECK((frame[0].o)))->F_prepareStackTrace;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_rhino_NativeError$ProtoProps_setPrepareStackTrace_rhino_Scriptable_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError$ProtoProps:setPrepareStackTrace", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(405);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	clinit_rhino_Undefined(ctx);
	sp[0].o = (jobject)SF_rhino_Undefined_instance;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(406);
	((rhino_NativeError$ProtoProps *) NULL_CHECK((frame[0].o)))->F_prepareStackTrace = (jref) (jobject(nullptr));
	goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(407);
	if ((isInstance(ctx, (frame[2].o), &class_rhino_Function)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(408);
	((rhino_NativeError$ProtoProps *) NULL_CHECK((frame[0].o)))->F_prepareStackTrace = (jref) (checkCast(ctx, &class_rhino_Function, (frame[2].o)));
	}
label_3:;
	LINE_NUMBER(410);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_rhino_NativeError$ProtoProps_rhino_NativeError$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError$ProtoProps:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeError$ProtoProps(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(353);
	init_rhino_NativeError$ProtoProps(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_rhino_NativeError$ProtoProps(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_rhino_NativeError$ProtoProps_KEY = ((jobject) createStringLiteral(ctx, u8"_ErrorPrototypeProps"_j));
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeError$ProtoProps:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeError$ProtoProps(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NoSuchMethodException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(363);
	sp[0].o = ((jobject) &class_rhino_NativeError$ProtoProps);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"getStackTraceLimit"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) &class_rhino_Scriptable));
	sp[0].o = (jobject)((func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_rhino_NativeError$ProtoProps(ctx);
	SF_rhino_NativeError$ProtoProps_GET_STACK_LIMIT = sp[0].o;
	LINE_NUMBER(364);
	sp[0].o = ((jobject) &class_rhino_NativeError$ProtoProps);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"setStackTraceLimit"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) &class_rhino_Scriptable));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) &class_java_lang_Object));
	sp[0].o = (jobject)((func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_rhino_NativeError$ProtoProps(ctx);
	SF_rhino_NativeError$ProtoProps_SET_STACK_LIMIT = sp[0].o;
	LINE_NUMBER(365);
	sp[0].o = ((jobject) &class_rhino_NativeError$ProtoProps);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"getPrepareStackTrace"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) &class_rhino_Scriptable));
	sp[0].o = (jobject)((func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_rhino_NativeError$ProtoProps(ctx);
	SF_rhino_NativeError$ProtoProps_GET_PREPARE_STACK = sp[0].o;
	LINE_NUMBER(366);
	sp[0].o = ((jobject) &class_rhino_NativeError$ProtoProps);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"setPrepareStackTrace"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (((jobject) &class_rhino_Scriptable));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (((jobject) &class_java_lang_Object));
	sp[0].o = (jobject)((func_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getMethod_java_lang_String_Array1_java_lang_Class_R_java_lang_reflect_Method])(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_rhino_NativeError$ProtoProps(ctx);
	SF_rhino_NativeError$ProtoProps_SET_PREPARE_STACK = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(369);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(367);
	frame[0].o = sp[0].o;
	LINE_NUMBER(368);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[0].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(370);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_rhino_NativeError$ProtoProps[] {
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
	(void *) M_rhino_NativeError$ProtoProps_getStackTraceLimit_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeError$ProtoProps_getStackTraceLimit_R_int,
	(void *) M_rhino_NativeError$ProtoProps_setStackTraceLimit_rhino_Scriptable_java_lang_Object,
	(void *) M_rhino_NativeError$ProtoProps_getPrepareStackTrace_rhino_Scriptable_R_java_lang_Object,
	(void *) M_rhino_NativeError$ProtoProps_getPrepareStackTrace_R_rhino_Function,
	(void *) M_rhino_NativeError$ProtoProps_setPrepareStackTrace_rhino_Scriptable_java_lang_Object,
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
	{ "getStackTraceLimit", "(Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "getStackTraceLimit", "()I" },
	{ "setStackTraceLimit", "(Lrhino/Scriptable;Ljava/lang/Object;)V" },
	{ "getPrepareStackTrace", "(Lrhino/Scriptable;)Ljava/lang/Object;" },
	{ "getPrepareStackTrace", "()Lrhino/Function;" },
	{ "setPrepareStackTrace", "(Lrhino/Scriptable;Ljava/lang/Object;)V" },
};

static FieldMetadata fields[] {
	{ "KEY", &class_java_lang_String, (intptr_t) &SF_rhino_NativeError$ProtoProps_KEY, "Ljava/lang/String;", 24 },
	{ "GET_STACK_LIMIT", &class_java_lang_reflect_Method, (intptr_t) &SF_rhino_NativeError$ProtoProps_GET_STACK_LIMIT, "Ljava/lang/reflect/Method;", 24 },
	{ "SET_STACK_LIMIT", &class_java_lang_reflect_Method, (intptr_t) &SF_rhino_NativeError$ProtoProps_SET_STACK_LIMIT, "Ljava/lang/reflect/Method;", 24 },
	{ "GET_PREPARE_STACK", &class_java_lang_reflect_Method, (intptr_t) &SF_rhino_NativeError$ProtoProps_GET_PREPARE_STACK, "Ljava/lang/reflect/Method;", 24 },
	{ "SET_PREPARE_STACK", &class_java_lang_reflect_Method, (intptr_t) &SF_rhino_NativeError$ProtoProps_SET_PREPARE_STACK, "Ljava/lang/reflect/Method;", 24 },
	{ "stackTraceLimit", &class_int, offsetof(rhino_NativeError$ProtoProps, F_stackTraceLimit), "I", 2 },
	{ "prepareStackTrace", &class_rhino_Function, offsetof(rhino_NativeError$ProtoProps, F_prepareStackTrace), "Lrhino/Function;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeError$ProtoProps, 0, "()V", 2 },
	{ "getStackTraceLimit", (intptr_t) M_rhino_NativeError$ProtoProps_getStackTraceLimit_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeError$ProtoProps_getStackTraceLimit_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "getStackTraceLimit", (intptr_t) M_rhino_NativeError$ProtoProps_getStackTraceLimit_R_int, VTABLE_rhino_NativeError$ProtoProps_getStackTraceLimit_R_int, "()I", 1 },
	{ "setStackTraceLimit", (intptr_t) M_rhino_NativeError$ProtoProps_setStackTraceLimit_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeError$ProtoProps_setStackTraceLimit_rhino_Scriptable_java_lang_Object, "(Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "getPrepareStackTrace", (intptr_t) M_rhino_NativeError$ProtoProps_getPrepareStackTrace_rhino_Scriptable_R_java_lang_Object, VTABLE_rhino_NativeError$ProtoProps_getPrepareStackTrace_rhino_Scriptable_R_java_lang_Object, "(Lrhino/Scriptable;)Ljava/lang/Object;", 1 },
	{ "getPrepareStackTrace", (intptr_t) M_rhino_NativeError$ProtoProps_getPrepareStackTrace_R_rhino_Function, VTABLE_rhino_NativeError$ProtoProps_getPrepareStackTrace_R_rhino_Function, "()Lrhino/Function;", 1 },
	{ "setPrepareStackTrace", (intptr_t) M_rhino_NativeError$ProtoProps_setPrepareStackTrace_rhino_Scriptable_java_lang_Object, VTABLE_rhino_NativeError$ProtoProps_setPrepareStackTrace_rhino_Scriptable_java_lang_Object, "(Lrhino/Scriptable;Ljava/lang/Object;)V", 1 },
	{ "<init>", (intptr_t) init_rhino_NativeError$ProtoProps_rhino_NativeError$1, 0, "(Lrhino/NativeError$1;)V", 4096 },
	{ "<clinit>", (intptr_t) clinit_rhino_NativeError$ProtoProps, 0, "()V", 8 },
};

Class class_rhino_NativeError$ProtoProps{
		.nativeName = (intptr_t) "rhino/NativeError$ProtoProps",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_NativeError$ProtoProps),
		.classVtable = (intptr_t) vtable_rhino_NativeError$ProtoProps,
		.staticInitializer = (intptr_t) clinit_rhino_NativeError$ProtoProps,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeError$ProtoProps,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_NativeError,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeError$ProtoProps = registerClass(&class_rhino_NativeError$ProtoProps);

}

