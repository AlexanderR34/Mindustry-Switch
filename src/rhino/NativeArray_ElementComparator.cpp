#include "rhino/NativeArray_ElementComparator.h"
#include "rhino/NativeArray_ElementComparator.h"
#include "java/lang/Object.h"
#include "rhino/NativeArray.h"
#include "java/util/Comparator.h"
#include "rhino/Scriptable.h"
#include "rhino/Undefined.h"

extern "C" {


void mark_rhino_NativeArray$ElementComparator(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_NativeArray$ElementComparator *) object;
	if (self->F_child)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_child)->clazz)->markFunction)((jobject) self->F_child, mark, depth + 1);
}

void clinit_rhino_NativeArray$ElementComparator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_NativeArray$ElementComparator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray$ElementComparator:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray$ElementComparator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2341);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2342);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_rhino_NativeArray_access$000_R_java_util_Comparator(ctx);
	((rhino_NativeArray$ElementComparator *) NULL_CHECK(sp[0].o))->F_child = (jref) sp[1].o;
	LINE_NUMBER(2343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_NativeArray$ElementComparator_java_util_Comparator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray$ElementComparator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_NativeArray$ElementComparator(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2345);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(2346);
	((rhino_NativeArray$ElementComparator *) NULL_CHECK((frame[0].o)))->F_child = (jref) (frame[1].o);
	LINE_NUMBER(2347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_rhino_NativeArray$ElementComparator_compare_java_lang_Object_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/NativeArray$ElementComparator:compare", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(2353);
	sp[0].o = frame[1].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(2354);
	sp[0].o = frame[2].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(2355);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(2357);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	LINE_NUMBER(2358);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_5:;
	{
	LINE_NUMBER(2360);
	popStackFrame(ctx);
	return (jint(1));
	}
label_1:;
	{
	LINE_NUMBER(2361);
	sp[0].o = frame[1].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(2362);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	INST_ICONST(0);
	goto label_10;
label_9:;
	INST_ICONST(1);
label_10:;
	popStackFrame(ctx);
	INST_IRETURN();
label_7:;
	{
	LINE_NUMBER(2365);
	sp[0].o = frame[2].o;
	clinit_rhino_Scriptable(ctx);
	sp[1].o = (jobject)SF_rhino_Scriptable_NOT_FOUND;
	if (sp[0].o != sp[1].o) goto label_11;
	}
	{
	LINE_NUMBER(2366);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_11:;
	{
	LINE_NUMBER(2368);
	sp[0].o = frame[2].o;
	clinit_rhino_Undefined(ctx);
	sp[1].o = (jobject)SF_rhino_Undefined_instance;
	if (sp[0].o != sp[1].o) goto label_13;
	}
	{
	LINE_NUMBER(2369);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_13:;
	{
	LINE_NUMBER(2372);
	sp[0].o = (jobject)((rhino_NativeArray$ElementComparator *) NULL_CHECK((frame[0].o)))->F_child;
	jint temp0 = (jint)((func_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int) resolveInterfaceMethod(ctx, &class_java_util_Comparator, INDEX_java_util_Comparator_compare_java_lang_Object_java_lang_Object_R_int, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_NativeArray$ElementComparator[] {
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
	(void *) M_rhino_NativeArray$ElementComparator_compare_java_lang_Object_java_lang_Object_R_int,
	(void *) M_java_util_Comparator_reversed_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_java_util_Comparator_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparing_java_util_function_Function_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingInt_java_util_function_ToIntFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingLong_java_util_function_ToLongFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_thenComparingDouble_java_util_function_ToDoubleFunction_R_java_util_Comparator,
	(void *) M_java_util_Comparator_lambda$thenComparing$0_java_util_Comparator_java_lang_Object_java_lang_Object_R_int,
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
	{ "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I" },
	{ "reversed", "()Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;Ljava/util/Comparator;)Ljava/util/Comparator;" },
	{ "thenComparing", "(Ljava/util/function/Function;)Ljava/util/Comparator;" },
	{ "thenComparingInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;" },
	{ "thenComparingLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/Comparator;" },
	{ "thenComparingDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/Comparator;" },
	{ "lambda$thenComparing$0", "(Ljava/util/Comparator;Ljava/lang/Object;Ljava/lang/Object;)I" },
};

static jclass interfaces[] { &class_java_util_Comparator, };

static FieldMetadata fields[] {
	{ "child", &class_java_util_Comparator, offsetof(rhino_NativeArray$ElementComparator, F_child), "Ljava/util/Comparator;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_NativeArray$ElementComparator, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_NativeArray$ElementComparator_java_util_Comparator, 0, "(Ljava/util/Comparator;)V", 1 },
	{ "compare", (intptr_t) M_rhino_NativeArray$ElementComparator_compare_java_lang_Object_java_lang_Object_R_int, VTABLE_rhino_NativeArray$ElementComparator_compare_java_lang_Object_java_lang_Object_R_int, "(Ljava/lang/Object;Ljava/lang/Object;)I", 1 },
};

Class class_rhino_NativeArray$ElementComparator{
		.nativeName = (intptr_t) "rhino/NativeArray$ElementComparator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_NativeArray$ElementComparator),
		.classVtable = (intptr_t) vtable_rhino_NativeArray$ElementComparator,
		.staticInitializer = (intptr_t) clinit_rhino_NativeArray$ElementComparator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_NativeArray$ElementComparator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_NativeArray,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_NativeArray$ElementComparator = registerClass(&class_rhino_NativeArray$ElementComparator);

}

