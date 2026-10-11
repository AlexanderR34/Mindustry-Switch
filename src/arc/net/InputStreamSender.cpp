#include "arc/net/InputStreamSender.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "arc/net/ArcNetException.h"
#include "arc/net/NetListener.h"
#include "java/io/IOException.h"
#include "arc/net/TcpIdleSender.h"
#include "java/lang/Throwable.h"
#include "arc/net/InputStreamSender.h"
#include "java/lang/System.h"

extern "C" {


void mark_arc_net_InputStreamSender(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_net_TcpIdleSender(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_net_InputStreamSender *) object;
	if (self->F_input)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_input)->clazz)->markFunction)((jobject) self->F_input, mark, depth + 1);
	if (self->F_chunk)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chunk)->clazz)->markFunction)((jobject) self->F_chunk, mark, depth + 1);
}

void clinit_arc_net_InputStreamSender(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_net_TcpIdleSender(ctx);
}

void init_arc_net_InputStreamSender_java_io_InputStream_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/InputStreamSender:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_InputStreamSender(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(12);
	init_arc_net_TcpIdleSender(ctx, (frame[0].o));
	LINE_NUMBER(13);
	((arc_net_InputStreamSender *) NULL_CHECK((frame[0].o)))->F_input = (jref) (frame[1].o);
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_byte, (frame[2].i));
	((arc_net_InputStreamSender *) NULL_CHECK(sp[0].o))->F_chunk = (jref) sp[1].o;
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_net_InputStreamSender_next_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/InputStreamSender:next", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[2]{};

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_10; }
	{
	LINE_NUMBER(20);
	frame[1].i = (jint(0));
	}
label_10:;
	{
	LINE_NUMBER(21);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_net_InputStreamSender *) NULL_CHECK((frame[0].o)))->F_chunk;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_8
	}
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((arc_net_InputStreamSender *) NULL_CHECK((frame[0].o)))->F_input;
	sp[1].o = (jobject)((arc_net_InputStreamSender *) NULL_CHECK((frame[0].o)))->F_chunk;
	jint temp0 = frame[1].i;
	sp[2].o = (jobject)((arc_net_InputStreamSender *) NULL_CHECK((frame[0].o)))->F_chunk;
	jint temp1 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, sp[0].o, sp[1].o, temp0, ((((jarray) nullCheck(ctx, sp[2].o))->length) - (frame[1].i)));
	frame[2].i = temp1;
	LINE_NUMBER(23);
	if ((frame[2].i) >= 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(24);
	if ((frame[1].i) != 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(25);
	INST_ACONST_NULL();
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(27);
	sp[0].o = (jobject)((arc_net_InputStreamSender *) NULL_CHECK((frame[0].o)))->F_chunk;
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, sp[0].o, (jint(0)), (frame[3].o), (jint(0)), (frame[1].i));
	LINE_NUMBER(28);
	sp[0].o = (jobject)((func_arc_net_InputStreamSender_next_Array1_byte_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_net_InputStreamSender_next_Array1_byte_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	{
	LINE_NUMBER(30);
	frame[1].i = ((frame[1].i) + (frame[2].i));
	LINE_NUMBER(31);
	{ popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_3; } // goto label_10
	}
label_8:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(34);
	goto label_18;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(32);
	frame[1].o = sp[0].o;
	LINE_NUMBER(33);
	clinit_arc_net_ArcNetException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_net_ArcNetException);
	init_arc_net_ArcNetException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_net_InputStreamSender *) NULL_CHECK((frame[0].o)))->F_chunk;
	sp[0].o = (jobject)((func_arc_net_InputStreamSender_next_Array1_byte_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_InputStreamSender_next_Array1_byte_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_net_InputStreamSender[] {
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
	(void *) M_arc_net_NetListener_connected_arc_net_Connection,
	(void *) M_arc_net_NetListener_disconnected_arc_net_Connection_arc_net_DcReason,
	(void *) M_arc_net_NetListener_received_arc_net_Connection_java_lang_Object,
	(void *) M_arc_net_TcpIdleSender_idle_arc_net_Connection,
	(void *) M_arc_net_TcpIdleSender_start,
	(void *) M_arc_net_InputStreamSender_next_R_java_lang_Object,
	(void *) nullptr,
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
	{ "connected", "(Larc/net/Connection;)V" },
	{ "disconnected", "(Larc/net/Connection;Larc/net/DcReason;)V" },
	{ "received", "(Larc/net/Connection;Ljava/lang/Object;)V" },
	{ "idle", "(Larc/net/Connection;)V" },
	{ "start", "()V" },
	{ "next", "()Ljava/lang/Object;" },
	{ "next", "([B)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "input", &class_java_io_InputStream, offsetof(arc_net_InputStreamSender, F_input), "Ljava/io/InputStream;", 18 },
	{ "chunk", getArrayClass(&class_byte, 1), offsetof(arc_net_InputStreamSender, F_chunk), "[B", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_net_InputStreamSender_java_io_InputStream_int, 0, "(Ljava/io/InputStream;I)V", 1 },
	{ "next", (intptr_t) M_arc_net_InputStreamSender_next_R_java_lang_Object, VTABLE_arc_net_InputStreamSender_next_R_java_lang_Object, "()Ljava/lang/Object;", 20 },
	{ "next", 0, VTABLE_arc_net_InputStreamSender_next_Array1_byte_R_java_lang_Object, "([B)Ljava/lang/Object;", 1028 },
};

Class class_arc_net_InputStreamSender{
		.nativeName = (intptr_t) "arc/net/InputStreamSender",
		.parentClass = (intptr_t) &class_arc_net_TcpIdleSender,
		.size = sizeof(arc_net_InputStreamSender),
		.classVtable = (intptr_t) vtable_arc_net_InputStreamSender,
		.staticInitializer = (intptr_t) clinit_arc_net_InputStreamSender,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_InputStreamSender,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_InputStreamSender = registerClass(&class_arc_net_InputStreamSender);

}
