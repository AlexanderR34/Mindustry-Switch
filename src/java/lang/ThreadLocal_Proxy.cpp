#include "java/lang/ThreadLocal_Proxy.h"
#include "java/lang/Object.h"
#include "java/util/function/Supplier.h"
#include "java/lang/ThreadLocal.h"
#include "java/lang/ThreadLocal_Proxy.h"

extern "C" {


void mark_java_lang_ThreadLocal$Proxy(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_ThreadLocal(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_ThreadLocal$Proxy *) object;
	if (self->F_supplier)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_supplier)->clazz)->markFunction)((jobject) self->F_supplier, mark, depth + 1);
}

void clinit_java_lang_ThreadLocal$Proxy(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_ThreadLocal(ctx);
}

void init_java_lang_ThreadLocal$Proxy_java_util_function_Supplier(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadLocal$Proxy:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ThreadLocal$Proxy(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_java_lang_ThreadLocal(ctx, (frame[0].o));
	LINE_NUMBER(63);
	((java_lang_ThreadLocal$Proxy *) NULL_CHECK((frame[0].o)))->F_supplier = (jref) (frame[1].o);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_lang_ThreadLocal$Proxy_initialValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ThreadLocal$Proxy:initialValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((java_lang_ThreadLocal$Proxy *) NULL_CHECK((frame[0].o)))->F_supplier;
	sp[0].o = (jobject)((func_java_util_function_Supplier_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_function_Supplier, INDEX_java_util_function_Supplier_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_ThreadLocal$Proxy[] {
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
	(void *) M_java_lang_ThreadLocal$Proxy_initialValue_R_java_lang_Object,
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

static FieldMetadata fields[] {
	{ "supplier", &class_java_util_function_Supplier, offsetof(java_lang_ThreadLocal$Proxy, F_supplier), "Ljava/util/function/Supplier;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_ThreadLocal$Proxy_java_util_function_Supplier, 0, "(Ljava/util/function/Supplier;)V", 1 },
	{ "initialValue", (intptr_t) M_java_lang_ThreadLocal$Proxy_initialValue_R_java_lang_Object, VTABLE_java_lang_ThreadLocal$Proxy_initialValue_R_java_lang_Object, "()Ljava/lang/Object;", 4 },
};

Class class_java_lang_ThreadLocal$Proxy{
		.nativeName = (intptr_t) "java/lang/ThreadLocal$Proxy",
		.parentClass = (intptr_t) &class_java_lang_ThreadLocal,
		.size = sizeof(java_lang_ThreadLocal$Proxy),
		.classVtable = (intptr_t) vtable_java_lang_ThreadLocal$Proxy,
		.staticInitializer = (intptr_t) clinit_java_lang_ThreadLocal$Proxy,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_ThreadLocal$Proxy,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_lang_ThreadLocal,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_ThreadLocal$Proxy = registerClass(&class_java_lang_ThreadLocal$Proxy);

}

