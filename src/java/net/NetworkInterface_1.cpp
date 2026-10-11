#include "java/net/NetworkInterface_1.h"
#include "java/lang/Object.h"
#include "java/net/NetworkInterface_1.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Enumeration.h"

extern "C" {


void mark_java_net_NetworkInterface$1(jobject object, jint mark, jint depth) {
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
	auto self = (java_net_NetworkInterface$1 *) object;
	if (self->F_val$a)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$a)->clazz)->markFunction)((jobject) self->F_val$a, mark, depth + 1);
}

void clinit_java_net_NetworkInterface$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_net_NetworkInterface$1_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_NetworkInterface$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(174);
	((java_net_NetworkInterface$1 *) NULL_CHECK((frame[0].o)))->F_val$a = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(175);
	((java_net_NetworkInterface$1 *) NULL_CHECK((frame[0].o)))->F_i = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_NetworkInterface$1_nextElement_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface$1:nextElement", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	jint temp0 = (jint)((java_net_NetworkInterface$1 *) NULL_CHECK((frame[0].o)))->F_i;
	sp[0].o = (jobject)((java_net_NetworkInterface$1 *) NULL_CHECK((frame[0].o)))->F_val$a;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((java_net_NetworkInterface$1 *) NULL_CHECK((frame[0].o)))->F_val$a;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_net_NetworkInterface$1 *) NULL_CHECK(sp[1].o))->F_i;
	((java_net_NetworkInterface$1 *) NULL_CHECK(sp[1].o))->F_i = (temp0 + (jint(1)));
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}
label_1:;
	{
	LINE_NUMBER(181);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool M_java_net_NetworkInterface$1_hasMoreElements_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/NetworkInterface$1:hasMoreElements", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(186);
	jint temp0 = (jint)((java_net_NetworkInterface$1 *) NULL_CHECK((frame[0].o)))->F_i;
	sp[0].o = (jobject)((java_net_NetworkInterface$1 *) NULL_CHECK((frame[0].o)))->F_val$a;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
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

void *vtable_java_net_NetworkInterface$1[] {
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
	(void *) M_java_net_NetworkInterface$1_hasMoreElements_R_boolean,
	(void *) M_java_net_NetworkInterface$1_nextElement_R_java_lang_Object,
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
	{ "hasMoreElements", "()Z" },
	{ "nextElement", "()Ljava/lang/Object;" },
};

static jclass interfaces[] { &class_java_util_Enumeration, };

static FieldMetadata fields[] {
	{ "i", &class_int, offsetof(java_net_NetworkInterface$1, F_i), "I", 0 },
	{ "val$a", getArrayClass(&class_java_lang_Object, 1), offsetof(java_net_NetworkInterface$1, F_val$a), "[Ljava/lang/Object;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_net_NetworkInterface$1_Array1_java_lang_Object, 0, "([Ljava/lang/Object;)V", 0 },
	{ "nextElement", (intptr_t) M_java_net_NetworkInterface$1_nextElement_R_java_lang_Object, VTABLE_java_net_NetworkInterface$1_nextElement_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "hasMoreElements", (intptr_t) M_java_net_NetworkInterface$1_hasMoreElements_R_boolean, VTABLE_java_net_NetworkInterface$1_hasMoreElements_R_boolean, "()Z", 1 },
};

Class class_java_net_NetworkInterface$1{
		.nativeName = (intptr_t) "java/net/NetworkInterface$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_NetworkInterface$1),
		.classVtable = (intptr_t) vtable_java_net_NetworkInterface$1,
		.staticInitializer = (intptr_t) clinit_java_net_NetworkInterface$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_net_NetworkInterface$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_java_net_NetworkInterface$1 = registerClass(&class_java_net_NetworkInterface$1);

}

