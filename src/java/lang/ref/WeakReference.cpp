#include "java/lang/ref/WeakReference.h"
#include "java/lang/Object.h"
#include "java/lang/ref/ReferenceQueue.h"
#include "java/lang/ref/Reference.h"
#include "java/lang/ref/WeakReference.h"

extern "C" {


void mark_java_lang_ref_WeakReference(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_ref_Reference(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_lang_ref_WeakReference *) object;
}

void clinit_java_lang_ref_WeakReference(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_ref_Reference(ctx);
}

void init_java_lang_ref_WeakReference_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ref/WeakReference:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ref_WeakReference(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(38);
	init_java_lang_ref_WeakReference_java_lang_Object_java_lang_ref_ReferenceQueue(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	LINE_NUMBER(39);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_lang_ref_WeakReference_java_lang_Object_java_lang_ref_ReferenceQueue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ref/WeakReference:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ref_WeakReference(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(41);
	init_java_lang_ref_Reference(ctx, (frame[0].o));
	LINE_NUMBER(42);
	M_java_lang_ref_WeakReference_init_java_lang_Object(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_lang_ref_WeakReference_refersTo_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ref/WeakReference:refersTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_java_lang_ref_WeakReference_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_ref_WeakReference_get_R_java_lang_Object])(ctx, (frame[0].o));
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_java_lang_ref_WeakReference[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_ref_WeakReference_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_ref_WeakReference_clear,
	(void *) M_java_lang_ref_WeakReference_get_R_java_lang_Object,
	(void *) M_java_lang_ref_WeakReference_refersTo_java_lang_Object_R_boolean,
	(void *) M_java_lang_ref_WeakReference_init_java_lang_Object,
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
	{ "clear", "()V" },
	{ "get", "()Ljava/lang/Object;" },
	{ "refersTo", "(Ljava/lang/Object;)Z" },
	{ "init", "(Ljava/lang/Object;)V" },
};

static FieldMetadata fields[] {
	{ "ptr", &class_long, offsetof(java_lang_ref_WeakReference, F_ptr), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_lang_ref_WeakReference_java_lang_Object, 0, "(Ljava/lang/Object;)V", 1 },
	{ "<init>", (intptr_t) init_java_lang_ref_WeakReference_java_lang_Object_java_lang_ref_ReferenceQueue, 0, "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V", 1 },
	{ "get", (intptr_t) M_java_lang_ref_WeakReference_get_R_java_lang_Object, VTABLE_java_lang_ref_WeakReference_get_R_java_lang_Object, "()Ljava/lang/Object;", 257 },
	{ "clear", (intptr_t) M_java_lang_ref_WeakReference_clear, VTABLE_java_lang_ref_WeakReference_clear, "()V", 257 },
	{ "refersTo", (intptr_t) M_java_lang_ref_WeakReference_refersTo_java_lang_Object_R_boolean, VTABLE_java_lang_ref_WeakReference_refersTo_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "init", (intptr_t) M_java_lang_ref_WeakReference_init_java_lang_Object, VTABLE_java_lang_ref_WeakReference_init_java_lang_Object, "(Ljava/lang/Object;)V", 258 },
	{ "finalize", (intptr_t) M_java_lang_ref_WeakReference_finalize, VTABLE_java_lang_ref_WeakReference_finalize, "()V", 260 },
};

Class class_java_lang_ref_WeakReference{
		.nativeName = (intptr_t) "java/lang/ref/WeakReference",
		.parentClass = (intptr_t) &class_java_lang_ref_Reference,
		.size = sizeof(java_lang_ref_WeakReference),
		.classVtable = (intptr_t) vtable_java_lang_ref_WeakReference,
		.staticInitializer = (intptr_t) clinit_java_lang_ref_WeakReference,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_ref_WeakReference,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_ref_WeakReference = registerClass(&class_java_lang_ref_WeakReference);

}
