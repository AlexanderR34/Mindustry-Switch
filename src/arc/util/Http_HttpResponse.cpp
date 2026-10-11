#include "arc/util/Http_HttpResponse.h"
#include "java/util/Iterator.h"
#include "java/net/HttpURLConnection.h"
#include "arc/util/Http_HttpStatus.h"
#include "java/util/Map.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/util/Set.h"
#include "java/lang/String.h"
#include "arc/util/Http.h"
#include "java/net/URLConnection.h"
#include "arc/struct/Seq.h"
#include "java/io/IOException.h"
#include "arc/util/io/Streams.h"
#include "java/io/Closeable.h"
#include "arc/util/Http_HttpResponse.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Throwable.h"
#include "java/util/List.h"

extern "C" {


void mark_arc_util_Http$HttpResponse(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Http$HttpResponse *) object;
	if (self->F_connection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_connection)->clazz)->markFunction)((jobject) self->F_connection, mark, depth + 1);
	if (self->F_status)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_status)->clazz)->markFunction)((jobject) self->F_status, mark, depth + 1);
}

void clinit_arc_util_Http$HttpResponse(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Http$HttpResponse_java_net_HttpURLConnection(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpResponse:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http$HttpResponse(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(59);
	((arc_util_Http$HttpResponse *) NULL_CHECK((frame[0].o)))->F_connection = (jref) (frame[1].o);
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_java_net_HttpURLConnection_getResponseCode_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_net_HttpURLConnection_getResponseCode_R_int])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_arc_util_Http$HttpStatus_byCode_int_R_arc_util_Http$HttpStatus(ctx, temp0);
	((arc_util_Http$HttpResponse *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_arc_util_Http$HttpResponse_getContentLength_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpResponse:getContentLength", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((arc_util_Http$HttpResponse *) NULL_CHECK((frame[0].o)))->F_connection;
	jint temp0 = (jint)((func_java_net_HttpURLConnection_getContentLength_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_HttpURLConnection_getContentLength_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (jlong(temp0));
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpResponse_getResult_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpResponse:getResult", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getResultAsStream_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getResultAsStream_R_java_io_InputStream])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(80);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(81);
	clinit_arc_util_io_Streams(ctx);
	sp[0].o = (jobject)SF_arc_util_io_Streams_emptyBytes;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(85);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_util_Http$HttpResponse *) NULL_CHECK((frame[0].o)))->F_connection;
	jint temp0 = (jint)((func_java_net_HttpURLConnection_getContentLength_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_HttpURLConnection_getContentLength_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_arc_util_io_Streams_copyBytes_java_io_InputStream_int_R_Array1_byte(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(89);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(86);
	frame[2].o = sp[0].o;
	LINE_NUMBER(87);
	clinit_arc_util_io_Streams(ctx);
	sp[0].o = (jobject)SF_arc_util_io_Streams_emptyBytes;
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(89);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(89);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(90);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpResponse:getResultAsString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getResultAsStream_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getResultAsStream_R_java_io_InputStream])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(105);
	if ((frame[1].o) != nullptr) goto label_0;
	}
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(110);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_util_Http$HttpResponse *) NULL_CHECK((frame[0].o)))->F_connection;
	jint temp0 = (jint)((func_java_net_HttpURLConnection_getContentLength_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_net_HttpURLConnection_getContentLength_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_arc_util_io_Streams_copyString_java_io_InputStream_int_R_java_lang_String(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(114);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	sp -= 1;
	LINE_NUMBER(111);
	frame[2].o = sp[0].o;
	LINE_NUMBER(112);
	frame[3].o = (((jobject) createStringLiteral(ctx, u8""_j)));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(114);
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(114);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	SM_arc_util_io_Streams_close_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(115);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpResponse_getResultAsStream_R_java_io_InputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpResponse:getResultAsStream", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((arc_util_Http$HttpResponse *) NULL_CHECK((frame[0].o)))->F_connection;
	sp[0].o = (jobject)((func_java_net_HttpURLConnection_getInputStream_R_java_io_InputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_HttpURLConnection_getInputStream_R_java_io_InputStream])(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(127);
	frame[1].o = sp[0].o;
	LINE_NUMBER(128);
	sp[0].o = (jobject)((arc_util_Http$HttpResponse *) NULL_CHECK((frame[0].o)))->F_connection;
	sp[0].o = (jobject)((func_java_net_HttpURLConnection_getErrorStream_R_java_io_InputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_HttpURLConnection_getErrorStream_R_java_io_InputStream])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpResponse_getStatus_R_arc_util_Http$HttpStatus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpResponse:getStatus", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((arc_util_Http$HttpResponse *) NULL_CHECK((frame[0].o)))->F_status;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpResponse:getHeader", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((arc_util_Http$HttpResponse *) NULL_CHECK((frame[0].o)))->F_connection;
	sp[0].o = (jobject)((func_java_net_HttpURLConnection_getHeaderField_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_HttpURLConnection_getHeaderField_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpResponse_getHeaders_R_arc_struct_ObjectMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpResponse:getHeaders", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(149);
	sp[0].o = (jobject)((arc_util_Http$HttpResponse *) NULL_CHECK((frame[0].o)))->F_connection;
	sp[0].o = (jobject)((func_java_net_HttpURLConnection_getHeaderFields_R_java_util_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_HttpURLConnection_getHeaderFields_R_java_util_Map])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(150);
	sp[0].o = (jobject)((func_java_util_Map_keySet_R_java_util_Set) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_keySet_R_java_util_Set, (frame[2].o)))(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_util_Set_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_Set, INDEX_java_util_Set_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	LINE_NUMBER(151);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(152);
	sp[0].o = frame[1].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((func_java_util_Map_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Map, INDEX_java_util_Map_get_java_lang_Object_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o), (frame[4].o));
	sp[2].o = checkCast(ctx, &class_java_util_List, sp[2].o);
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	sp[2].o = (jobject)((func_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_toArray_Array1_java_lang_Object_R_Array1_java_lang_Object, sp[2].o))(ctx, sp[2].o, sp[3].o);
	sp[2].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[2].o)));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_6:;
	LINE_NUMBER(154);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Http$HttpResponse[] {
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
	(void *) M_arc_util_Http$HttpResponse_getContentLength_R_long,
	(void *) M_arc_util_Http$HttpResponse_getResult_R_Array1_byte,
	(void *) M_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String,
	(void *) M_arc_util_Http$HttpResponse_getResultAsStream_R_java_io_InputStream,
	(void *) M_arc_util_Http$HttpResponse_getStatus_R_arc_util_Http$HttpStatus,
	(void *) M_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String,
	(void *) M_arc_util_Http$HttpResponse_getHeaders_R_arc_struct_ObjectMap,
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
	{ "getContentLength", "()J" },
	{ "getResult", "()[B" },
	{ "getResultAsString", "()Ljava/lang/String;" },
	{ "getResultAsStream", "()Ljava/io/InputStream;" },
	{ "getStatus", "()Larc/util/Http$HttpStatus;" },
	{ "getHeader", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getHeaders", "()Larc/struct/ObjectMap;" },
};

static FieldMetadata fields[] {
	{ "connection", &class_java_net_HttpURLConnection, offsetof(arc_util_Http$HttpResponse, F_connection), "Ljava/net/HttpURLConnection;", 18 },
	{ "status", &class_arc_util_Http$HttpStatus, offsetof(arc_util_Http$HttpResponse, F_status), "Larc/util/Http$HttpStatus;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Http$HttpResponse_java_net_HttpURLConnection, 0, "(Ljava/net/HttpURLConnection;)V", 4 },
	{ "getContentLength", (intptr_t) M_arc_util_Http$HttpResponse_getContentLength_R_long, VTABLE_arc_util_Http$HttpResponse_getContentLength_R_long, "()J", 1 },
	{ "getResult", (intptr_t) M_arc_util_Http$HttpResponse_getResult_R_Array1_byte, VTABLE_arc_util_Http$HttpResponse_getResult_R_Array1_byte, "()[B", 1 },
	{ "getResultAsString", (intptr_t) M_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String, VTABLE_arc_util_Http$HttpResponse_getResultAsString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getResultAsStream", (intptr_t) M_arc_util_Http$HttpResponse_getResultAsStream_R_java_io_InputStream, VTABLE_arc_util_Http$HttpResponse_getResultAsStream_R_java_io_InputStream, "()Ljava/io/InputStream;", 1 },
	{ "getStatus", (intptr_t) M_arc_util_Http$HttpResponse_getStatus_R_arc_util_Http$HttpStatus, VTABLE_arc_util_Http$HttpResponse_getStatus_R_arc_util_Http$HttpStatus, "()Larc/util/Http$HttpStatus;", 1 },
	{ "getHeader", (intptr_t) M_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String, VTABLE_arc_util_Http$HttpResponse_getHeader_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getHeaders", (intptr_t) M_arc_util_Http$HttpResponse_getHeaders_R_arc_struct_ObjectMap, VTABLE_arc_util_Http$HttpResponse_getHeaders_R_arc_struct_ObjectMap, "()Larc/struct/ObjectMap;", 1 },
};

Class class_arc_util_Http$HttpResponse{
		.nativeName = (intptr_t) "arc/util/Http$HttpResponse",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Http$HttpResponse),
		.classVtable = (intptr_t) vtable_arc_util_Http$HttpResponse,
		.staticInitializer = (intptr_t) clinit_arc_util_Http$HttpResponse,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Http$HttpResponse,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_Http,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Http$HttpResponse = registerClass(&class_arc_util_Http$HttpResponse);

}

