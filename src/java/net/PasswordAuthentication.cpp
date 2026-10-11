#include "java/net/PasswordAuthentication.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/PasswordAuthentication.h"

extern "C" {


void mark_java_net_PasswordAuthentication(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_PasswordAuthentication *) object;
	if (self->F_userName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_userName)->clazz)->markFunction)((jobject) self->F_userName, mark, depth + 1);
	if (self->F_password)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_password)->clazz)->markFunction)((jobject) self->F_password, mark, depth + 1);
}

void clinit_java_net_PasswordAuthentication(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_PasswordAuthentication_java_lang_String_Array1_char(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/PasswordAuthentication:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_PasswordAuthentication(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(55);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(56);
	((java_net_PasswordAuthentication *) NULL_CHECK((frame[0].o)))->F_userName = (jref) (frame[1].o);
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[2].o));
	((java_net_PasswordAuthentication *) NULL_CHECK(sp[0].o))->F_password = (jref) (checkCast(ctx, getArrayClass(&class_char, 1), sp[1].o));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_PasswordAuthentication_getUserName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/PasswordAuthentication:getUserName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((java_net_PasswordAuthentication *) NULL_CHECK((frame[0].o)))->F_userName;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_PasswordAuthentication_getPassword_R_Array1_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/PasswordAuthentication:getPassword", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((java_net_PasswordAuthentication *) NULL_CHECK((frame[0].o)))->F_password;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_java_net_PasswordAuthentication[] {
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
	(void *) M_java_net_PasswordAuthentication_getUserName_R_java_lang_String,
	(void *) M_java_net_PasswordAuthentication_getPassword_R_Array1_char,
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
	{ "getUserName", "()Ljava/lang/String;" },
	{ "getPassword", "()[C" },
};

static FieldMetadata fields[] {
	{ "userName", &class_java_lang_String, offsetof(java_net_PasswordAuthentication, F_userName), "Ljava/lang/String;", 2 },
	{ "password", getArrayClass(&class_char, 1), offsetof(java_net_PasswordAuthentication, F_password), "[C", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_PasswordAuthentication_java_lang_String_Array1_char, 0, "(Ljava/lang/String;[C)V", 1 },
	{ "getUserName", (intptr_t) M_java_net_PasswordAuthentication_getUserName_R_java_lang_String, VTABLE_java_net_PasswordAuthentication_getUserName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getPassword", (intptr_t) M_java_net_PasswordAuthentication_getPassword_R_Array1_char, VTABLE_java_net_PasswordAuthentication_getPassword_R_Array1_char, "()[C", 1 },
};

Class class_java_net_PasswordAuthentication{
		.nativeName = (intptr_t) "java/net/PasswordAuthentication",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_PasswordAuthentication),
		.classVtable = (intptr_t) vtable_java_net_PasswordAuthentication,
		.staticInitializer = (intptr_t) clinit_java_net_PasswordAuthentication,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_PasswordAuthentication,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
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
static bool registered_java_net_PasswordAuthentication = registerClass(&class_java_net_PasswordAuthentication);

}
