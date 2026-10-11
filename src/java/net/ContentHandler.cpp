#include "java/net/ContentHandler.h"
#include "java/lang/Object.h"
#include "java/net/ContentHandler.h"
#include "java/net/URLConnection.h"
#include "java/lang/Class.h"

extern "C" {


void mark_java_net_ContentHandler(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_ContentHandler *) object;
}

void clinit_java_net_ContentHandler(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_ContentHandler(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/ContentHandler:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_ContentHandler(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(84);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_ContentHandler_getContent_java_net_URLConnection_Array1_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/ContentHandler:getContent", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_java_net_ContentHandler_getContent_java_net_URLConnection_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_ContentHandler_getContent_java_net_URLConnection_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(117);
	frame[4].o = (frame[2].o);
	frame[5].i = (((jarray) nullCheck(ctx, (frame[4].o)))->length);
	frame[6].i = (jint(0));
	}
label_2:;
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_3;
	}
	{
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[6].i)));
	LINE_NUMBER(118);
	jint temp0 = (jint)((func_java_lang_Class_isInstance_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_Class_isInstance_java_lang_Object_R_boolean])(ctx, (frame[7].o), (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_5:;
	{
	LINE_NUMBER(117);
	INST_IINC(6, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void *vtable_java_net_ContentHandler[] {
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
	(void *) nullptr,
	(void *) M_java_net_ContentHandler_getContent_java_net_URLConnection_Array1_java_lang_Class_R_java_lang_Object,
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
	{ "getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;" },
	{ "getContent", "(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_ContentHandler, 0, "()V", 1 },
	{ "getContent", 0, VTABLE_java_net_ContentHandler_getContent_java_net_URLConnection_R_java_lang_Object, "(Ljava/net/URLConnection;)Ljava/lang/Object;", 1025 },
	{ "getContent", (intptr_t) M_java_net_ContentHandler_getContent_java_net_URLConnection_Array1_java_lang_Class_R_java_lang_Object, VTABLE_java_net_ContentHandler_getContent_java_net_URLConnection_Array1_java_lang_Class_R_java_lang_Object, "(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;", 1 },
};

Class class_java_net_ContentHandler{
		.nativeName = (intptr_t) "java/net/ContentHandler",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_ContentHandler),
		.classVtable = (intptr_t) vtable_java_net_ContentHandler,
		.staticInitializer = (intptr_t) clinit_java_net_ContentHandler,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_ContentHandler,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_ContentHandler = registerClass(&class_java_net_ContentHandler);

}
