#include "java/net/URIHelper_NameValuePair.h"
#include "java/net/URIHelper.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/URIHelper_NameValuePair.h"

extern "C" {


void mark_java_net_URIHelper$NameValuePair(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_URIHelper$NameValuePair *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_java_net_URIHelper$NameValuePair(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_URIHelper$NameValuePair_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper$NameValuePair:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URIHelper$NameValuePair(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(328);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(329);
	((java_net_URIHelper$NameValuePair *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(330);
	((java_net_URIHelper$NameValuePair *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[2].o);
	LINE_NUMBER(331);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URIHelper$NameValuePair_getName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper$NameValuePair:getName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((java_net_URIHelper$NameValuePair *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URIHelper$NameValuePair:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((java_net_URIHelper$NameValuePair *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_URIHelper$NameValuePair[] {
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
	(void *) M_java_net_URIHelper$NameValuePair_getName_R_java_lang_String,
	(void *) M_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String,
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
	{ "getName", "()Ljava/lang/String;" },
	{ "getValue", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(java_net_URIHelper$NameValuePair, F_name), "Ljava/lang/String;", 2 },
	{ "value", &class_java_lang_String, offsetof(java_net_URIHelper$NameValuePair, F_value), "Ljava/lang/String;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_URIHelper$NameValuePair_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "getName", (intptr_t) M_java_net_URIHelper$NameValuePair_getName_R_java_lang_String, VTABLE_java_net_URIHelper$NameValuePair_getName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getValue", (intptr_t) M_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String, VTABLE_java_net_URIHelper$NameValuePair_getValue_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_java_net_URIHelper$NameValuePair{
		.nativeName = (intptr_t) "java/net/URIHelper$NameValuePair",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_URIHelper$NameValuePair),
		.classVtable = (intptr_t) vtable_java_net_URIHelper$NameValuePair,
		.staticInitializer = (intptr_t) clinit_java_net_URIHelper$NameValuePair,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_URIHelper$NameValuePair,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_net_URIHelper,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_URIHelper$NameValuePair = registerClass(&class_java_net_URIHelper$NameValuePair);

}

