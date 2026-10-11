#include "java/util/Vector_1.h"
#include "java/lang/Object.h"
#include "java/util/NoSuchElementException.h"
#include "java/util/Vector.h"
#include "java/util/Vector_1.h"
#include "java/util/Enumeration.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_java_util_Vector$1(jobject object, jint mark, jint depth) {
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
	auto self = (java_util_Vector$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_java_util_Vector$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_java_util_Vector$1_java_util_Vector(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_Vector$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(317);
	((java_util_Vector$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(318);
	((java_util_Vector$1 *) NULL_CHECK((frame[0].o)))->F_pos = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_util_Vector$1_hasMoreElements_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector$1:hasMoreElements", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(321);
	jint temp0 = (jint)((java_util_Vector$1 *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((java_util_Vector$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementCount)) goto label_1;
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

jobject M_java_util_Vector$1_nextElement_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/Vector$1:nextElement", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((java_util_Vector$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(327);
	jint temp0 = (jint)((java_util_Vector$1 *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((java_util_Vector$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (temp0 >= ((jint)((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementCount)) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((java_util_Vector$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((java_util_Vector *) NULL_CHECK(sp[0].o))->F_elementData;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((java_util_Vector$1 *) NULL_CHECK(sp[1].o))->F_pos;
	((java_util_Vector$1 *) NULL_CHECK(sp[1].o))->F_pos = (temp0 + (jint(1)));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(330);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_11;
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	INST_ATHROW();
	label_11:;
	{
	LINE_NUMBER(331);
	clinit_java_util_NoSuchElementException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_NoSuchElementException);
	init_java_util_NoSuchElementException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_java_util_Vector$1[] {
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
	(void *) M_java_util_Vector$1_hasMoreElements_R_boolean,
	(void *) M_java_util_Vector$1_nextElement_R_java_lang_Object,
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
	{ "pos", &class_int, offsetof(java_util_Vector$1, F_pos), "I", 0 },
	{ "this$0", &class_java_util_Vector, offsetof(java_util_Vector$1, F_this$0), "Ljava/util/Vector;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_java_util_Vector$1_java_util_Vector, 0, "(Ljava/util/Vector;)V", 0 },
	{ "hasMoreElements", (intptr_t) M_java_util_Vector$1_hasMoreElements_R_boolean, VTABLE_java_util_Vector$1_hasMoreElements_R_boolean, "()Z", 1 },
	{ "nextElement", (intptr_t) M_java_util_Vector$1_nextElement_R_java_lang_Object, VTABLE_java_util_Vector$1_nextElement_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
};

Class class_java_util_Vector$1{
		.nativeName = (intptr_t) "java/util/Vector$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_util_Vector$1),
		.classVtable = (intptr_t) vtable_java_util_Vector$1,
		.staticInitializer = (intptr_t) clinit_java_util_Vector$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_Vector$1,
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
static bool registered_java_util_Vector$1 = registerClass(&class_java_util_Vector$1);

}

