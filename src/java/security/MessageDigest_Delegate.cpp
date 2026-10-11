#include "java/security/MessageDigest_Delegate.h"
#include "java/security/Provider.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/security/MessageDigest_Delegate_CloneableDelegate.h"
#include "java/security/MessageDigest_1.h"
#include "java/security/MessageDigest.h"
#include "java/lang/Cloneable.h"
#include "java/security/MessageDigestSpi.h"
#include "java/util/Objects.h"
#include "java/lang/CloneNotSupportedException.h"
#include "java/security/MessageDigest_Delegate.h"

extern "C" {


void mark_java_security_MessageDigest$Delegate(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_security_MessageDigest(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_security_MessageDigest$Delegate *) object;
	if (self->F_digestSpi)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_digestSpi)->clazz)->markFunction)((jobject) self->F_digestSpi, mark, depth + 1);
}

void clinit_java_security_MessageDigest$Delegate(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_security_MessageDigest(ctx);
}

jobject SM_java_security_MessageDigest$Delegate_of_java_security_MessageDigestSpi_java_lang_String_java_security_Provider_R_java_security_MessageDigest$Delegate(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest$Delegate:of", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest$Delegate(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(154);
	frame[3].i = (isInstance(ctx, (frame[0].o), &class_java_lang_Cloneable));
	LINE_NUMBER(155);
	if ((frame[3].i) == 0) goto label_7;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_java_security_MessageDigestSpi_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_security_MessageDigestSpi_clone_R_java_lang_Object])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(160);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(158);
	frame[4].o = sp[0].o;
	LINE_NUMBER(159);
	frame[3].i = (jint(0));
	}
label_7:;
	{
	LINE_NUMBER(163);
	if ((frame[3].i) == 0) goto label_9;
	}
	{
	clinit_java_security_MessageDigest$Delegate$CloneableDelegate(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_security_MessageDigest$Delegate$CloneableDelegate);
	init_java_security_MessageDigest$Delegate$CloneableDelegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider_java_security_MessageDigest$1(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	sp += 1;
	goto label_10;
	}
label_9:;
	{
	clinit_java_security_MessageDigest$Delegate(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_security_MessageDigest$Delegate);
	init_java_security_MessageDigest$Delegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider(ctx, sp[0].o, (frame[0].o), (frame[1].o), (frame[2].o));
	sp += 1;
	}
label_10:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void init_java_security_MessageDigest$Delegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest$Delegate:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest$Delegate(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(167);
	init_java_security_MessageDigest_java_lang_String_java_security_Provider_java_security_MessageDigest$1(ctx, (frame[0].o), (frame[2].o), (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(168);
	((java_security_MessageDigest$Delegate *) NULL_CHECK((frame[0].o)))->F_digestSpi = (jref) (frame[1].o);
	LINE_NUMBER(169);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_security_MessageDigest$Delegate_clone_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest$Delegate:clone", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	if ((isInstance(ctx, (frame[0].o), &class_java_lang_Cloneable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(173);
	clinit_java_security_MessageDigest$Delegate$CloneableDelegate(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_security_MessageDigest$Delegate$CloneableDelegate);
	sp[1].o = (jobject)((java_security_MessageDigest$Delegate *) NULL_CHECK((frame[0].o)))->F_digestSpi;
	sp[1].o = (jobject)((func_java_security_MessageDigestSpi_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_security_MessageDigestSpi_clone_R_java_lang_Object])(ctx, sp[1].o);
	sp[1].o = checkCast(ctx, &class_java_security_MessageDigestSpi, sp[1].o);
	sp[2].o = (jobject)SM_java_security_MessageDigest_access$200_java_security_MessageDigest_R_java_lang_String(ctx, (frame[0].o));
	sp[3].o = (jobject)SM_java_security_MessageDigest_access$300_java_security_MessageDigest_R_java_security_Provider(ctx, (frame[0].o));
	init_java_security_MessageDigest$Delegate$CloneableDelegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider_java_security_MessageDigest$1(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(175);
	clinit_java_lang_CloneNotSupportedException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_CloneNotSupportedException);
	init_java_lang_CloneNotSupportedException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint M_java_security_MessageDigest$Delegate_engineGetDigestLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest$Delegate:engineGetDigestLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((java_security_MessageDigest$Delegate *) NULL_CHECK((frame[0].o)))->F_digestSpi;
	jint temp0 = (jint)((func_java_security_MessageDigestSpi_engineGetDigestLength_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_MessageDigestSpi_engineGetDigestLength_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_security_MessageDigest$Delegate_engineUpdate_byte(jcontext ctx, jobject self, jbyte param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest$Delegate:engineUpdate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((java_security_MessageDigest$Delegate *) NULL_CHECK((frame[0].o)))->F_digestSpi;
	((func_java_security_MessageDigestSpi_engineUpdate_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_MessageDigestSpi_engineUpdate_byte])(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_security_MessageDigest$Delegate_engineUpdate_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest$Delegate:engineUpdate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(188);
	sp[0].o = (jobject)((java_security_MessageDigest$Delegate *) NULL_CHECK((frame[0].o)))->F_digestSpi;
	((func_java_security_MessageDigestSpi_engineUpdate_Array1_byte_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_MessageDigestSpi_engineUpdate_Array1_byte_int_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(189);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_security_MessageDigest$Delegate_engineUpdate_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest$Delegate:engineUpdate", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((java_security_MessageDigest$Delegate *) NULL_CHECK((frame[0].o)))->F_digestSpi;
	((func_java_security_MessageDigestSpi_engineUpdate_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_MessageDigestSpi_engineUpdate_java_nio_ByteBuffer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(193);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_security_MessageDigest$Delegate_engineDigest_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest$Delegate:engineDigest", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)((java_security_MessageDigest$Delegate *) NULL_CHECK((frame[0].o)))->F_digestSpi;
	sp[0].o = (jobject)((func_java_security_MessageDigestSpi_engineDigest_R_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_MessageDigestSpi_engineDigest_R_Array1_byte])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_security_MessageDigest$Delegate_engineDigest_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest$Delegate:engineDigest", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((java_security_MessageDigest$Delegate *) NULL_CHECK((frame[0].o)))->F_digestSpi;
	jint temp0 = (jint)((func_java_security_MessageDigestSpi_engineDigest_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_MessageDigestSpi_engineDigest_Array1_byte_int_int_R_int])(ctx, sp[0].o, (frame[1].o), (frame[2].i), (frame[3].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_java_security_MessageDigest$Delegate_engineReset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest$Delegate:engineReset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((java_security_MessageDigest$Delegate *) NULL_CHECK((frame[0].o)))->F_digestSpi;
	((func_java_security_MessageDigestSpi_engineReset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_security_MessageDigestSpi_engineReset])(ctx, sp[0].o);
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_java_security_MessageDigest$Delegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider_java_security_MessageDigest$1(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/security/MessageDigest$Delegate:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_security_MessageDigest$Delegate(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(149);
	init_java_security_MessageDigest$Delegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_security_MessageDigest$Delegate[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_security_MessageDigest$Delegate_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_security_MessageDigest_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_security_MessageDigest$Delegate_engineGetDigestLength_R_int,
	(void *) M_java_security_MessageDigest$Delegate_engineUpdate_byte,
	(void *) M_java_security_MessageDigest$Delegate_engineUpdate_Array1_byte_int_int,
	(void *) M_java_security_MessageDigest$Delegate_engineUpdate_java_nio_ByteBuffer,
	(void *) M_java_security_MessageDigest$Delegate_engineDigest_R_Array1_byte,
	(void *) M_java_security_MessageDigest$Delegate_engineDigest_Array1_byte_int_int_R_int,
	(void *) M_java_security_MessageDigest$Delegate_engineReset,
	(void *) M_java_security_MessageDigest_getProvider_R_java_security_Provider,
	(void *) M_java_security_MessageDigest_update_byte,
	(void *) M_java_security_MessageDigest_update_Array1_byte_int_int,
	(void *) M_java_security_MessageDigest_update_Array1_byte,
	(void *) M_java_security_MessageDigest_update_java_nio_ByteBuffer,
	(void *) M_java_security_MessageDigest_digest_R_Array1_byte,
	(void *) M_java_security_MessageDigest_digest_Array1_byte_int_int_R_int,
	(void *) M_java_security_MessageDigest_digest_Array1_byte_R_Array1_byte,
	(void *) M_java_security_MessageDigest_getProviderName_R_java_lang_String,
	(void *) M_java_security_MessageDigest_reset,
	(void *) M_java_security_MessageDigest_getAlgorithm_R_java_lang_String,
	(void *) M_java_security_MessageDigest_getDigestLength_R_int,
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
	{ "engineGetDigestLength", "()I" },
	{ "engineUpdate", "(B)V" },
	{ "engineUpdate", "([BII)V" },
	{ "engineUpdate", "(Ljava/nio/ByteBuffer;)V" },
	{ "engineDigest", "()[B" },
	{ "engineDigest", "([BII)I" },
	{ "engineReset", "()V" },
	{ "getProvider", "()Ljava/security/Provider;" },
	{ "update", "(B)V" },
	{ "update", "([BII)V" },
	{ "update", "([B)V" },
	{ "update", "(Ljava/nio/ByteBuffer;)V" },
	{ "digest", "()[B" },
	{ "digest", "([BII)I" },
	{ "digest", "([B)[B" },
	{ "getProviderName", "()Ljava/lang/String;" },
	{ "reset", "()V" },
	{ "getAlgorithm", "()Ljava/lang/String;" },
	{ "getDigestLength", "()I" },
};

static jclass innerClasses[] {
	&class_java_security_MessageDigest$Delegate$CloneableDelegate,
};

static FieldMetadata fields[] {
	{ "digestSpi", &class_java_security_MessageDigestSpi, offsetof(java_security_MessageDigest$Delegate, F_digestSpi), "Ljava/security/MessageDigestSpi;", 18 },
};

static MethodMetadata methods[] {
	{ "of", (intptr_t) SM_java_security_MessageDigest$Delegate_of_java_security_MessageDigestSpi_java_lang_String_java_security_Provider_R_java_security_MessageDigest$Delegate, 0, "(Ljava/security/MessageDigestSpi;Ljava/lang/String;Ljava/security/Provider;)Ljava/security/MessageDigest$Delegate;", 8 },
	{ "<init>", (intptr_t) init_java_security_MessageDigest$Delegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider, 0, "(Ljava/security/MessageDigestSpi;Ljava/lang/String;Ljava/security/Provider;)V", 2 },
	{ "clone", (intptr_t) M_java_security_MessageDigest$Delegate_clone_R_java_lang_Object, VTABLE_java_security_MessageDigest$Delegate_clone_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "engineGetDigestLength", (intptr_t) M_java_security_MessageDigest$Delegate_engineGetDigestLength_R_int, VTABLE_java_security_MessageDigest$Delegate_engineGetDigestLength_R_int, "()I", 4 },
	{ "engineUpdate", (intptr_t) M_java_security_MessageDigest$Delegate_engineUpdate_byte, VTABLE_java_security_MessageDigest$Delegate_engineUpdate_byte, "(B)V", 4 },
	{ "engineUpdate", (intptr_t) M_java_security_MessageDigest$Delegate_engineUpdate_Array1_byte_int_int, VTABLE_java_security_MessageDigest$Delegate_engineUpdate_Array1_byte_int_int, "([BII)V", 4 },
	{ "engineUpdate", (intptr_t) M_java_security_MessageDigest$Delegate_engineUpdate_java_nio_ByteBuffer, VTABLE_java_security_MessageDigest$Delegate_engineUpdate_java_nio_ByteBuffer, "(Ljava/nio/ByteBuffer;)V", 4 },
	{ "engineDigest", (intptr_t) M_java_security_MessageDigest$Delegate_engineDigest_R_Array1_byte, VTABLE_java_security_MessageDigest$Delegate_engineDigest_R_Array1_byte, "()[B", 4 },
	{ "engineDigest", (intptr_t) M_java_security_MessageDigest$Delegate_engineDigest_Array1_byte_int_int_R_int, VTABLE_java_security_MessageDigest$Delegate_engineDigest_Array1_byte_int_int_R_int, "([BII)I", 4 },
	{ "engineReset", (intptr_t) M_java_security_MessageDigest$Delegate_engineReset, VTABLE_java_security_MessageDigest$Delegate_engineReset, "()V", 4 },
	{ "<init>", (intptr_t) init_java_security_MessageDigest$Delegate_java_security_MessageDigestSpi_java_lang_String_java_security_Provider_java_security_MessageDigest$1, 0, "(Ljava/security/MessageDigestSpi;Ljava/lang/String;Ljava/security/Provider;Ljava/security/MessageDigest$1;)V", 4096 },
};

Class class_java_security_MessageDigest$Delegate{
		.nativeName = (intptr_t) "java/security/MessageDigest$Delegate",
		.parentClass = (intptr_t) &class_java_security_MessageDigest,
		.size = sizeof(java_security_MessageDigest$Delegate),
		.classVtable = (intptr_t) vtable_java_security_MessageDigest$Delegate,
		.staticInitializer = (intptr_t) clinit_java_security_MessageDigest$Delegate,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_security_MessageDigest$Delegate,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_security_MessageDigest,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 30,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_security_MessageDigest$Delegate = registerClass(&class_java_security_MessageDigest$Delegate);

}

