#include "java/lang/ThreadLocal.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/util/function/Supplier.h"
#include "java/util/HashMap.h"
#include "java/lang/ThreadLocal_Proxy.h"
#include "java/lang/ThreadLocal.h"
#include "java/util/Map.h"
#include "java/util/HashSet.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_java_lang_ThreadLocal(jobject object, jint mark, jint depth) {
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
	auto self = (java_lang_ThreadLocal *) object;
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
	if (self->F__initialized)
		((gc_mark_ptr) ((jclass) ((jobject) self->F__initialized)->clazz)->markFunction)((jobject) self->F__initialized, mark, depth + 1);
}

void clinit_java_lang_ThreadLocal(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_lang_ThreadLocal(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadLocal:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ThreadLocal(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(24);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_java_util_HashMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashMap);
	init_java_util_HashMap(ctx, sp[1].o);
	((java_lang_ThreadLocal *) NULL_CHECK(sp[0].o))->F_value = (jref) sp[1].o;
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_java_util_HashSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_HashSet);
	init_java_util_HashSet(ctx, sp[1].o);
	((java_lang_ThreadLocal *) NULL_CHECK(sp[0].o))->F__initialized = (jref) sp[1].o;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ThreadLocal_initialValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadLocal:initialValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ThreadLocal_get_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadLocal:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)((java_lang_ThreadLocal *) NULL_CHECK((frame[0].o)))->F__initialized;
	jint temp0 = (jint)((func_java_util_Set_contains_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_contains_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((java_lang_ThreadLocal *) NULL_CHECK((frame[0].o)))->F__initialized;
	jint temp0 = (jint)((func_java_util_Set_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(35);
	sp[0].o = (jobject)((java_lang_ThreadLocal *) NULL_CHECK((frame[0].o)))->F_value;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_java_lang_ThreadLocal_initialValue_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ThreadLocal_initialValue_R_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_2:;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((java_lang_ThreadLocal *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx, self);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_java_lang_ThreadLocal_set_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadLocal:set", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[2].o = sp[0].o;
	LINE_NUMBER(45);
	sp[0].o = (jobject)((java_lang_ThreadLocal *) NULL_CHECK((frame[0].o)))->F__initialized;
	jint temp0 = (jint)((func_java_util_Set_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((java_lang_ThreadLocal *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((func_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_put_java_lang_Object_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	LINE_NUMBER(47);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_java_lang_ThreadLocal_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadLocal:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(51);
	sp[0].o = (jobject)((java_lang_ThreadLocal *) NULL_CHECK((frame[0].o)))->F__initialized;
	jint temp0 = (jint)((func_java_util_Set_remove_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_remove_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(52);
	sp[0].o = (jobject)((java_lang_ThreadLocal *) NULL_CHECK((frame[0].o)))->F_value;
	sp[0].o = (jobject)((func_java_util_Map_remove_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_remove_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(53);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_ThreadLocal_withInitial_java_util_function_Supplier_R_java_lang_ThreadLocal(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadLocal:withInitial", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ThreadLocal(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(56);
	clinit_java_lang_ThreadLocal$Proxy(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ThreadLocal$Proxy);
	init_java_lang_ThreadLocal$Proxy_java_util_function_Supplier(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_ThreadLocal[] {
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
	(void *) M_java_lang_ThreadLocal_initialValue_R_java_lang_Object,
	(void *) M_java_lang_ThreadLocal_get_R_java_lang_Object,
	(void *) M_java_lang_ThreadLocal_set_java_lang_Object,
	(void *) M_java_lang_ThreadLocal_remove,
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
	{ "initialValue", "()Ljava/lang/Object;" },
	{ "get", "()Ljava/lang/Object;" },
	{ "set", "(Ljava/lang/Object;)V" },
	{ "remove", "()V" },
};

static jclass innerClasses[] {
	&class_java_lang_ThreadLocal$Proxy,
};

static FieldMetadata fields[] {
	{ "value", &class_java_util_Map, offsetof(java_lang_ThreadLocal, F_value), "Ljava/util/Map;", 2 },
	{ "_initialized", &class_java_util_Set, offsetof(java_lang_ThreadLocal, F__initialized), "Ljava/util/Set;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_ThreadLocal, 0, "()V", 1 },
	{ "initialValue", (intptr_t) M_java_lang_ThreadLocal_initialValue_R_java_lang_Object, VTABLE_java_lang_ThreadLocal_initialValue_R_java_lang_Object, "()Ljava/lang/Object;", 4 },
	{ "get", (intptr_t) M_java_lang_ThreadLocal_get_R_java_lang_Object, VTABLE_java_lang_ThreadLocal_get_R_java_lang_Object, "()Ljava/lang/Object;", 33 },
	{ "set", (intptr_t) M_java_lang_ThreadLocal_set_java_lang_Object, VTABLE_java_lang_ThreadLocal_set_java_lang_Object, "(Ljava/lang/Object;)V", 33 },
	{ "remove", (intptr_t) M_java_lang_ThreadLocal_remove, VTABLE_java_lang_ThreadLocal_remove, "()V", 33 },
	{ "withInitial", (intptr_t) SM_java_lang_ThreadLocal_withInitial_java_util_function_Supplier_R_java_lang_ThreadLocal, 0, "(Ljava/util/function/Supplier;)Ljava/lang/ThreadLocal;", 9 },
};

Class class_java_lang_ThreadLocal{
		.nativeName = (intptr_t) "java/lang/ThreadLocal",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_lang_ThreadLocal),
		.classVtable = (intptr_t) vtable_java_lang_ThreadLocal,
		.staticInitializer = (intptr_t) clinit_java_lang_ThreadLocal,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_ThreadLocal,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_ThreadLocal = registerClass(&class_java_lang_ThreadLocal);

}
