#include "java/net/HttpURLConnection.h"
#include "java/lang/Exception.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/UnsupportedOperationException.h"
#include "java/net/URL.h"
#include "java/net/HttpURLConnection.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/util/Date.h"
#include "java/lang/reflect/Constructor.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/NumberFormatException.h"
#include "java/net/Authenticator.h"
#include "java/net/URLConnection.h"
#include "java/lang/IllegalStateException.h"
#include "java/net/ProtocolException.h"
#include "java/io/IOException.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/Deprecated.h"

extern "C" {

jint SF_java_net_HttpURLConnection_DEFAULT_CHUNK_SIZE;
jbool SF_java_net_HttpURLConnection_followRedirects;
jobject SF_java_net_HttpURLConnection_methods;
jint SF_java_net_HttpURLConnection_HTTP_OK;
jint SF_java_net_HttpURLConnection_HTTP_CREATED;
jint SF_java_net_HttpURLConnection_HTTP_ACCEPTED;
jint SF_java_net_HttpURLConnection_HTTP_NOT_AUTHORITATIVE;
jint SF_java_net_HttpURLConnection_HTTP_NO_CONTENT;
jint SF_java_net_HttpURLConnection_HTTP_RESET;
jint SF_java_net_HttpURLConnection_HTTP_PARTIAL;
jint SF_java_net_HttpURLConnection_HTTP_MULT_CHOICE;
jint SF_java_net_HttpURLConnection_HTTP_MOVED_PERM;
jint SF_java_net_HttpURLConnection_HTTP_MOVED_TEMP;
jint SF_java_net_HttpURLConnection_HTTP_SEE_OTHER;
jint SF_java_net_HttpURLConnection_HTTP_NOT_MODIFIED;
jint SF_java_net_HttpURLConnection_HTTP_USE_PROXY;
jint SF_java_net_HttpURLConnection_HTTP_BAD_REQUEST;
jint SF_java_net_HttpURLConnection_HTTP_UNAUTHORIZED;
jint SF_java_net_HttpURLConnection_HTTP_PAYMENT_REQUIRED;
jint SF_java_net_HttpURLConnection_HTTP_FORBIDDEN;
jint SF_java_net_HttpURLConnection_HTTP_NOT_FOUND;
jint SF_java_net_HttpURLConnection_HTTP_BAD_METHOD;
jint SF_java_net_HttpURLConnection_HTTP_NOT_ACCEPTABLE;
jint SF_java_net_HttpURLConnection_HTTP_PROXY_AUTH;
jint SF_java_net_HttpURLConnection_HTTP_CLIENT_TIMEOUT;
jint SF_java_net_HttpURLConnection_HTTP_CONFLICT;
jint SF_java_net_HttpURLConnection_HTTP_GONE;
jint SF_java_net_HttpURLConnection_HTTP_LENGTH_REQUIRED;
jint SF_java_net_HttpURLConnection_HTTP_PRECON_FAILED;
jint SF_java_net_HttpURLConnection_HTTP_ENTITY_TOO_LARGE;
jint SF_java_net_HttpURLConnection_HTTP_REQ_TOO_LONG;
jint SF_java_net_HttpURLConnection_HTTP_UNSUPPORTED_TYPE;
jint SF_java_net_HttpURLConnection_HTTP_SERVER_ERROR;
jint SF_java_net_HttpURLConnection_HTTP_INTERNAL_ERROR;
jint SF_java_net_HttpURLConnection_HTTP_NOT_IMPLEMENTED;
jint SF_java_net_HttpURLConnection_HTTP_BAD_GATEWAY;
jint SF_java_net_HttpURLConnection_HTTP_UNAVAILABLE;
jint SF_java_net_HttpURLConnection_HTTP_GATEWAY_TIMEOUT;
jint SF_java_net_HttpURLConnection_HTTP_VERSION;

void mark_java_net_HttpURLConnection(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_net_HttpURLConnection_methods)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_HttpURLConnection_methods)->clazz)->markFunction)((jobject) SF_java_net_HttpURLConnection_methods, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_net_URLConnection(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_net_HttpURLConnection *) object;
	if (self->F_method)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_method)->clazz)->markFunction)((jobject) self->F_method, mark, depth + 1);
	if (self->F_responseMessage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_responseMessage)->clazz)->markFunction)((jobject) self->F_responseMessage, mark, depth + 1);
}

void M_java_net_HttpURLConnection_setAuthenticator_java_net_Authenticator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:setAuthenticator", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Supplying an authenticator is not supported by "_j))));
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_UnsupportedOperationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_net_HttpURLConnection_getHeaderFieldKey_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:getHeaderFieldKey", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_net_HttpURLConnection_setFixedLengthStreamingMode_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:setFixedLengthStreamingMode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(71);
	if (((jint)((java_net_URLConnection *) NULL_CHECK((frame[0].o)))->F_connected) == 0) goto label_1;
	}
	{
	LINE_NUMBER(72);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Already connected"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(73);
	if (((jint)((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_chunkLength) == (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(74);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Chunked encoding streaming mode set"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(75);
	if ((frame[1].i) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(76);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invalid content length"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(78);
	((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_fixedContentLength = (frame[1].i);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_net_HttpURLConnection_setFixedLengthStreamingMode_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:setFixedLengthStreamingMode", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(83);
	if (((jint)((java_net_URLConnection *) NULL_CHECK((frame[0].o)))->F_connected) == 0) goto label_1;
	}
	{
	LINE_NUMBER(84);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Already connected"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(85);
	if (((jint)((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_chunkLength) == (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(86);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Chunked encoding streaming mode set"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(87);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_5;
	}
	{
	LINE_NUMBER(88);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"invalid content length"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(90);
	((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_fixedContentLengthLong = (frame[1].l);
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_java_net_HttpURLConnection_setChunkedStreamingMode_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:setChunkedStreamingMode", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(95);
	if (((jint)((java_net_URLConnection *) NULL_CHECK((frame[0].o)))->F_connected) == 0) goto label_1;
	}
	{
	LINE_NUMBER(96);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can't set streaming mode: already connected"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(97);
	if (((jint)((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_fixedContentLength) != (jint(-1))) goto label_3;
	}
	{
	if ((longCompare(((jlong)((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_fixedContentLengthLong), (jlong(-1ll)))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) > 0) goto label_5;
	}
	INST_SIPUSH(4096);
	goto label_6;
label_5:;
	INST_ILOAD(1);
label_6:;
	sp -= 2;
	((java_net_HttpURLConnection *) NULL_CHECK(sp[0].o))->F_chunkLength = sp[1].i;
	goto label_7;
label_3:;
	{
	LINE_NUMBER(100);
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Fixed length streaming mode set"_j))));
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(102);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_net_HttpURLConnection_getHeaderField_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:getHeaderField", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void init_java_net_HttpURLConnection_java_net_URL(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_HttpURLConnection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	init_java_net_URLConnection_java_net_URL(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(13);
	((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_method = (jref) (((jobject) createStringLiteral(ctx, u8"GET"_j)));
	LINE_NUMBER(14);
	((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_chunkLength = (jint(-1));
	LINE_NUMBER(15);
	((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_fixedContentLength = (jint(-1));
	LINE_NUMBER(16);
	((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_fixedContentLengthLong = (jlong(-1ll));
	LINE_NUMBER(18);
	((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_responseCode = (jint(-1));
	LINE_NUMBER(19);
	((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_responseMessage = (jref) (jobject(nullptr));
	LINE_NUMBER(110);
	((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_instanceFollowRedirects = (clinit_java_net_HttpURLConnection(ctx), (jint)SF_java_net_HttpURLConnection_followRedirects);
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_java_net_HttpURLConnection_setFollowRedirects_boolean(jcontext ctx, jbool param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:setFollowRedirects", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_HttpURLConnection(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(119);
	clinit_java_net_HttpURLConnection(ctx);
	SF_java_net_HttpURLConnection_followRedirects = (frame[0].i);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_java_net_HttpURLConnection_getFollowRedirects_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:getFollowRedirects", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_HttpURLConnection(ctx);
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (clinit_java_net_HttpURLConnection(ctx), (jint)SF_java_net_HttpURLConnection_followRedirects);
	}

	popStackFrame(ctx);
}

void M_java_net_HttpURLConnection_setInstanceFollowRedirects_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:setInstanceFollowRedirects", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(127);
	((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_instanceFollowRedirects = (frame[1].i);
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_java_net_HttpURLConnection_getInstanceFollowRedirects_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:getInstanceFollowRedirects", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(131);
	popStackFrame(ctx);
	return ((jint)((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_instanceFollowRedirects);
	}

	popStackFrame(ctx);
}

void M_java_net_HttpURLConnection_setRequestMethod_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:setRequestMethod", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(135);
	if (((jint)((java_net_URLConnection *) NULL_CHECK((frame[0].o)))->F_connected) == 0) goto label_1;
	}
	{
	LINE_NUMBER(136);
	clinit_java_net_ProtocolException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_ProtocolException);
	init_java_net_ProtocolException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can't reset method: already connected"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(138);
	frame[2].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[2].i;
	clinit_java_net_HttpURLConnection(ctx);
	sp[0].o = (jobject)SF_java_net_HttpURLConnection_methods;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_4;
	}
	{
	LINE_NUMBER(139);
	clinit_java_net_HttpURLConnection(ctx);
	sp[0].o = (jobject)SF_java_net_HttpURLConnection_methods;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))), (frame[1].o));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(140);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"TRACE"_j))));
	if (temp0 == 0) goto label_8;
	}
label_8:;
	{
	LINE_NUMBER(147);
	((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_method = (jref) (frame[1].o);
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}
label_6:;
	{
	LINE_NUMBER(138);
	INST_IINC(2, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(152);
	clinit_java_net_ProtocolException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_ProtocolException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Invalid HTTP method: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_net_ProtocolException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_java_net_HttpURLConnection_getRequestMethod_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:getRequestMethod", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_method;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_java_net_HttpURLConnection_getResponseCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:getResponseCode", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	if (((jint)((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_responseCode) == (jint(-1))) goto label_9;
	}
	{
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return ((jint)((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_responseCode);
	}
label_9:;
	{
	LINE_NUMBER(164);
	frame[1].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((func_java_net_HttpURLConnection_getInputStream_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_HttpURLConnection_getInputStream_R_java_io_InputStream])(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(171);
	goto label_11;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(168);
	frame[2].o = sp[0].o;
	LINE_NUMBER(169);
	frame[3].o = (frame[2].o);
	LINE_NUMBER(170);
	frame[1].o = (frame[3].o);
	}
label_11:;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((func_java_net_HttpURLConnection_getHeaderField_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_HttpURLConnection_getHeaderField_int_R_java_lang_String])(ctx, (frame[0].o), (jint(0)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(174);
	if ((frame[2].o) != nullptr) goto label_15;
	}
	{
	LINE_NUMBER(175);
	if ((frame[1].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(176);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_RuntimeException)) == 0) goto label_19;
	}
	{
	LINE_NUMBER(177);
	throwException(ctx, (checkCast(ctx, &class_java_lang_RuntimeException, (frame[1].o))));	}
label_19:;
	{
	LINE_NUMBER(179);
	throwException(ctx, (checkCast(ctx, &class_java_io_IOException, (frame[1].o))));	}
label_17:;
	{
	LINE_NUMBER(182);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_15:;
	{
	LINE_NUMBER(185);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"HTTP/1."_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	LINE_NUMBER(186);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[2].o), (32));
	frame[3].i = temp0;
	LINE_NUMBER(187);
	if ((frame[3].i) <= 0) goto label_21;
	}
	{
	LINE_NUMBER(188);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[2].o), (32), ((frame[3].i) + (jint(1))));
	frame[4].i = temp0;
	LINE_NUMBER(189);
	if ((frame[4].i) <= 0) goto label_26;
	}
	{
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	if (temp0 >= temp1) goto label_26;
	}
	{
	LINE_NUMBER(190);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[2].o), ((frame[4].i) + (jint(1))));
	((java_net_HttpURLConnection *) NULL_CHECK(sp[0].o))->F_responseMessage = (jref) sp[1].o;
	}
label_26:;
	{
	LINE_NUMBER(193);
	if ((frame[4].i) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(194);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[2].o));
	frame[4].i = temp0;
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[2].o), ((frame[3].i) + (jint(1))), (frame[4].i));
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, sp[1].o);
	((java_net_HttpURLConnection *) NULL_CHECK(sp[0].o))->F_responseCode = temp0;
	LINE_NUMBER(199);
	jint temp1 = (jint)((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_responseCode;
	sp[0].i = temp1;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	LINE_NUMBER(200);
	INST_ASTORE(5);
label_21:;
	{
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jobject M_java_net_HttpURLConnection_getResponseMessage_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:getResponseMessage", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(211);
	jint temp0 = (jint)((func_java_net_HttpURLConnection_getResponseCode_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_HttpURLConnection_getResponseCode_R_int])(ctx, (frame[0].o));
	LINE_NUMBER(212);
	sp[0].o = (jobject)((java_net_HttpURLConnection *) NULL_CHECK((frame[0].o)))->F_responseMessage;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_java_net_HttpURLConnection_getHeaderFieldDate_java_lang_String_long_R_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:getHeaderFieldDate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((func_java_net_HttpURLConnection_getHeaderField_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_HttpURLConnection_getHeaderField_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(219);
	jint temp0 = (jint)((func_java_lang_String_indexOf_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_indexOf_java_lang_String_R_int])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"GMT"_j))));
	if (temp0 != (jint(-1))) goto label_5;
	}
	{
	LINE_NUMBER(220);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[4].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" GMT"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(223);
	jlong temp0 = (jlong)SM_java_util_Date_parse_java_lang_String_R_long(ctx, (frame[4].o));
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(224);
	frame[5].o = sp[0].o;
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return (frame[2].l);
	}

	popStackFrame(ctx);
}

jobject M_java_net_HttpURLConnection_getErrorStream_R_java_io_InputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:getErrorStream", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void clinit_java_net_HttpURLConnection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_net_URLConnection(ctx);
	SF_java_net_HttpURLConnection_DEFAULT_CHUNK_SIZE = jint(4096);
	SF_java_net_HttpURLConnection_HTTP_OK = jint(200);
	SF_java_net_HttpURLConnection_HTTP_CREATED = jint(201);
	SF_java_net_HttpURLConnection_HTTP_ACCEPTED = jint(202);
	SF_java_net_HttpURLConnection_HTTP_NOT_AUTHORITATIVE = jint(203);
	SF_java_net_HttpURLConnection_HTTP_NO_CONTENT = jint(204);
	SF_java_net_HttpURLConnection_HTTP_RESET = jint(205);
	SF_java_net_HttpURLConnection_HTTP_PARTIAL = jint(206);
	SF_java_net_HttpURLConnection_HTTP_MULT_CHOICE = jint(300);
	SF_java_net_HttpURLConnection_HTTP_MOVED_PERM = jint(301);
	SF_java_net_HttpURLConnection_HTTP_MOVED_TEMP = jint(302);
	SF_java_net_HttpURLConnection_HTTP_SEE_OTHER = jint(303);
	SF_java_net_HttpURLConnection_HTTP_NOT_MODIFIED = jint(304);
	SF_java_net_HttpURLConnection_HTTP_USE_PROXY = jint(305);
	SF_java_net_HttpURLConnection_HTTP_BAD_REQUEST = jint(400);
	SF_java_net_HttpURLConnection_HTTP_UNAUTHORIZED = jint(401);
	SF_java_net_HttpURLConnection_HTTP_PAYMENT_REQUIRED = jint(402);
	SF_java_net_HttpURLConnection_HTTP_FORBIDDEN = jint(403);
	SF_java_net_HttpURLConnection_HTTP_NOT_FOUND = jint(404);
	SF_java_net_HttpURLConnection_HTTP_BAD_METHOD = jint(405);
	SF_java_net_HttpURLConnection_HTTP_NOT_ACCEPTABLE = jint(406);
	SF_java_net_HttpURLConnection_HTTP_PROXY_AUTH = jint(407);
	SF_java_net_HttpURLConnection_HTTP_CLIENT_TIMEOUT = jint(408);
	SF_java_net_HttpURLConnection_HTTP_CONFLICT = jint(409);
	SF_java_net_HttpURLConnection_HTTP_GONE = jint(410);
	SF_java_net_HttpURLConnection_HTTP_LENGTH_REQUIRED = jint(411);
	SF_java_net_HttpURLConnection_HTTP_PRECON_FAILED = jint(412);
	SF_java_net_HttpURLConnection_HTTP_ENTITY_TOO_LARGE = jint(413);
	SF_java_net_HttpURLConnection_HTTP_REQ_TOO_LONG = jint(414);
	SF_java_net_HttpURLConnection_HTTP_UNSUPPORTED_TYPE = jint(415);
	SF_java_net_HttpURLConnection_HTTP_SERVER_ERROR = jint(500);
	SF_java_net_HttpURLConnection_HTTP_INTERNAL_ERROR = jint(500);
	SF_java_net_HttpURLConnection_HTTP_NOT_IMPLEMENTED = jint(501);
	SF_java_net_HttpURLConnection_HTTP_BAD_GATEWAY = jint(502);
	SF_java_net_HttpURLConnection_HTTP_UNAVAILABLE = jint(503);
	SF_java_net_HttpURLConnection_HTTP_GATEWAY_TIMEOUT = jint(504);
	SF_java_net_HttpURLConnection_HTTP_VERSION = jint(505);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/HttpURLConnection:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_HttpURLConnection(ctx);
	{
	LINE_NUMBER(20);
	clinit_java_net_HttpURLConnection(ctx);
	SF_java_net_HttpURLConnection_followRedirects = (jint(1));
	LINE_NUMBER(22);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (7));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"GET"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"POST"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"HEAD"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"OPTIONS"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"PUT"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) createStringLiteral(ctx, u8"DELETE"_j)));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) createStringLiteral(ctx, u8"TRACE"_j)));
	clinit_java_net_HttpURLConnection(ctx);
	SF_java_net_HttpURLConnection_methods = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_java_net_HttpURLConnection;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field HTTP_SERVER_ERROR
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[39]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	fields[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_java_net_HttpURLConnection[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_net_URLConnection_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) nullptr,
	(void *) M_java_net_URLConnection_setConnectTimeout_int,
	(void *) M_java_net_URLConnection_getConnectTimeout_R_int,
	(void *) M_java_net_URLConnection_setReadTimeout_int,
	(void *) M_java_net_URLConnection_getReadTimeout_R_int,
	(void *) M_java_net_URLConnection_getURL_R_java_net_URL,
	(void *) M_java_net_URLConnection_getContentLength_R_int,
	(void *) M_java_net_URLConnection_getContentLengthLong_R_long,
	(void *) M_java_net_URLConnection_getContentType_R_java_lang_String,
	(void *) M_java_net_URLConnection_getContentEncoding_R_java_lang_String,
	(void *) M_java_net_URLConnection_getExpiration_R_long,
	(void *) M_java_net_URLConnection_getDate_R_long,
	(void *) M_java_net_URLConnection_getLastModified_R_long,
	(void *) M_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String,
	(void *) M_java_net_URLConnection_getHeaderFields_R_java_util_Map,
	(void *) M_java_net_URLConnection_getHeaderFieldInt_java_lang_String_int_R_int,
	(void *) M_java_net_URLConnection_getHeaderFieldLong_java_lang_String_long_R_long,
	(void *) M_java_net_HttpURLConnection_getHeaderFieldDate_java_lang_String_long_R_long,
	(void *) M_java_net_HttpURLConnection_getHeaderFieldKey_int_R_java_lang_String,
	(void *) M_java_net_HttpURLConnection_getHeaderField_int_R_java_lang_String,
	(void *) M_java_net_URLConnection_getContent_R_java_lang_Object,
	(void *) M_java_net_URLConnection_getContent_Array1_java_lang_Class_R_java_lang_Object,
	(void *) M_java_net_URLConnection_getPermission_R_java_security_Permission,
	(void *) M_java_net_URLConnection_getInputStream_R_java_io_InputStream,
	(void *) M_java_net_URLConnection_getOutputStream_R_java_io_OutputStream,
	(void *) M_java_net_URLConnection_setDoInput_boolean,
	(void *) M_java_net_URLConnection_getDoInput_R_boolean,
	(void *) M_java_net_URLConnection_setDoOutput_boolean,
	(void *) M_java_net_URLConnection_getDoOutput_R_boolean,
	(void *) M_java_net_URLConnection_setAllowUserInteraction_boolean,
	(void *) M_java_net_URLConnection_getAllowUserInteraction_R_boolean,
	(void *) M_java_net_URLConnection_setUseCaches_boolean,
	(void *) M_java_net_URLConnection_getUseCaches_R_boolean,
	(void *) M_java_net_URLConnection_setIfModifiedSince_long,
	(void *) M_java_net_URLConnection_getIfModifiedSince_R_long,
	(void *) M_java_net_URLConnection_getDefaultUseCaches_R_boolean,
	(void *) M_java_net_URLConnection_setDefaultUseCaches_boolean,
	(void *) M_java_net_URLConnection_setRequestProperty_java_lang_String_java_lang_String,
	(void *) M_java_net_URLConnection_addRequestProperty_java_lang_String_java_lang_String,
	(void *) M_java_net_URLConnection_getRequestProperty_java_lang_String_R_java_lang_String,
	(void *) M_java_net_URLConnection_getRequestProperties_R_java_util_Map,
	(void *) M_java_net_HttpURLConnection_setAuthenticator_java_net_Authenticator,
	(void *) M_java_net_HttpURLConnection_setFixedLengthStreamingMode_int,
	(void *) M_java_net_HttpURLConnection_setFixedLengthStreamingMode_long,
	(void *) M_java_net_HttpURLConnection_setChunkedStreamingMode_int,
	(void *) M_java_net_HttpURLConnection_setInstanceFollowRedirects_boolean,
	(void *) M_java_net_HttpURLConnection_getInstanceFollowRedirects_R_boolean,
	(void *) M_java_net_HttpURLConnection_setRequestMethod_java_lang_String,
	(void *) M_java_net_HttpURLConnection_getRequestMethod_R_java_lang_String,
	(void *) M_java_net_HttpURLConnection_getResponseCode_R_int,
	(void *) M_java_net_HttpURLConnection_getResponseMessage_R_java_lang_String,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_java_net_HttpURLConnection_getErrorStream_R_java_io_InputStream,
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
	{ "connect", "()V" },
	{ "setConnectTimeout", "(I)V" },
	{ "getConnectTimeout", "()I" },
	{ "setReadTimeout", "(I)V" },
	{ "getReadTimeout", "()I" },
	{ "getURL", "()Ljava/net/URL;" },
	{ "getContentLength", "()I" },
	{ "getContentLengthLong", "()J" },
	{ "getContentType", "()Ljava/lang/String;" },
	{ "getContentEncoding", "()Ljava/lang/String;" },
	{ "getExpiration", "()J" },
	{ "getDate", "()J" },
	{ "getLastModified", "()J" },
	{ "getHeaderField", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getHeaderFields", "()Ljava/util/Map;" },
	{ "getHeaderFieldInt", "(Ljava/lang/String;I)I" },
	{ "getHeaderFieldLong", "(Ljava/lang/String;J)J" },
	{ "getHeaderFieldDate", "(Ljava/lang/String;J)J" },
	{ "getHeaderFieldKey", "(I)Ljava/lang/String;" },
	{ "getHeaderField", "(I)Ljava/lang/String;" },
	{ "getContent", "()Ljava/lang/Object;" },
	{ "getContent", "([Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "getPermission", "()Ljava/security/Permission;" },
	{ "getInputStream", "()Ljava/io/InputStream;" },
	{ "getOutputStream", "()Ljava/io/OutputStream;" },
	{ "setDoInput", "(Z)V" },
	{ "getDoInput", "()Z" },
	{ "setDoOutput", "(Z)V" },
	{ "getDoOutput", "()Z" },
	{ "setAllowUserInteraction", "(Z)V" },
	{ "getAllowUserInteraction", "()Z" },
	{ "setUseCaches", "(Z)V" },
	{ "getUseCaches", "()Z" },
	{ "setIfModifiedSince", "(J)V" },
	{ "getIfModifiedSince", "()J" },
	{ "getDefaultUseCaches", "()Z" },
	{ "setDefaultUseCaches", "(Z)V" },
	{ "setRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "addRequestProperty", "(Ljava/lang/String;Ljava/lang/String;)V" },
	{ "getRequestProperty", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "getRequestProperties", "()Ljava/util/Map;" },
	{ "setAuthenticator", "(Ljava/net/Authenticator;)V" },
	{ "setFixedLengthStreamingMode", "(I)V" },
	{ "setFixedLengthStreamingMode", "(J)V" },
	{ "setChunkedStreamingMode", "(I)V" },
	{ "setInstanceFollowRedirects", "(Z)V" },
	{ "getInstanceFollowRedirects", "()Z" },
	{ "setRequestMethod", "(Ljava/lang/String;)V" },
	{ "getRequestMethod", "()Ljava/lang/String;" },
	{ "getResponseCode", "()I" },
	{ "getResponseMessage", "()Ljava/lang/String;" },
	{ "disconnect", "()V" },
	{ "usingProxy", "()Z" },
	{ "getErrorStream", "()Ljava/io/InputStream;" },
};

static FieldMetadata fields[] {
	{ "method", &class_java_lang_String, offsetof(java_net_HttpURLConnection, F_method), "Ljava/lang/String;", 4 },
	{ "chunkLength", &class_int, offsetof(java_net_HttpURLConnection, F_chunkLength), "I", 4 },
	{ "fixedContentLength", &class_int, offsetof(java_net_HttpURLConnection, F_fixedContentLength), "I", 4 },
	{ "fixedContentLengthLong", &class_long, offsetof(java_net_HttpURLConnection, F_fixedContentLengthLong), "J", 4 },
	{ "DEFAULT_CHUNK_SIZE", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_DEFAULT_CHUNK_SIZE, "I", 26 },
	{ "responseCode", &class_int, offsetof(java_net_HttpURLConnection, F_responseCode), "I", 4 },
	{ "responseMessage", &class_java_lang_String, offsetof(java_net_HttpURLConnection, F_responseMessage), "Ljava/lang/String;", 4 },
	{ "followRedirects", &class_boolean, (intptr_t) &SF_java_net_HttpURLConnection_followRedirects, "Z", 10 },
	{ "instanceFollowRedirects", &class_boolean, offsetof(java_net_HttpURLConnection, F_instanceFollowRedirects), "Z", 4 },
	{ "methods", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_java_net_HttpURLConnection_methods, "[Ljava/lang/String;", 26 },
	{ "HTTP_OK", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_OK, "I", 25 },
	{ "HTTP_CREATED", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_CREATED, "I", 25 },
	{ "HTTP_ACCEPTED", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_ACCEPTED, "I", 25 },
	{ "HTTP_NOT_AUTHORITATIVE", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_NOT_AUTHORITATIVE, "I", 25 },
	{ "HTTP_NO_CONTENT", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_NO_CONTENT, "I", 25 },
	{ "HTTP_RESET", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_RESET, "I", 25 },
	{ "HTTP_PARTIAL", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_PARTIAL, "I", 25 },
	{ "HTTP_MULT_CHOICE", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_MULT_CHOICE, "I", 25 },
	{ "HTTP_MOVED_PERM", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_MOVED_PERM, "I", 25 },
	{ "HTTP_MOVED_TEMP", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_MOVED_TEMP, "I", 25 },
	{ "HTTP_SEE_OTHER", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_SEE_OTHER, "I", 25 },
	{ "HTTP_NOT_MODIFIED", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_NOT_MODIFIED, "I", 25 },
	{ "HTTP_USE_PROXY", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_USE_PROXY, "I", 25 },
	{ "HTTP_BAD_REQUEST", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_BAD_REQUEST, "I", 25 },
	{ "HTTP_UNAUTHORIZED", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_UNAUTHORIZED, "I", 25 },
	{ "HTTP_PAYMENT_REQUIRED", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_PAYMENT_REQUIRED, "I", 25 },
	{ "HTTP_FORBIDDEN", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_FORBIDDEN, "I", 25 },
	{ "HTTP_NOT_FOUND", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_NOT_FOUND, "I", 25 },
	{ "HTTP_BAD_METHOD", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_BAD_METHOD, "I", 25 },
	{ "HTTP_NOT_ACCEPTABLE", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_NOT_ACCEPTABLE, "I", 25 },
	{ "HTTP_PROXY_AUTH", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_PROXY_AUTH, "I", 25 },
	{ "HTTP_CLIENT_TIMEOUT", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_CLIENT_TIMEOUT, "I", 25 },
	{ "HTTP_CONFLICT", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_CONFLICT, "I", 25 },
	{ "HTTP_GONE", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_GONE, "I", 25 },
	{ "HTTP_LENGTH_REQUIRED", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_LENGTH_REQUIRED, "I", 25 },
	{ "HTTP_PRECON_FAILED", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_PRECON_FAILED, "I", 25 },
	{ "HTTP_ENTITY_TOO_LARGE", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_ENTITY_TOO_LARGE, "I", 25 },
	{ "HTTP_REQ_TOO_LONG", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_REQ_TOO_LONG, "I", 25 },
	{ "HTTP_UNSUPPORTED_TYPE", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_UNSUPPORTED_TYPE, "I", 25 },
	{ "HTTP_SERVER_ERROR", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_SERVER_ERROR, "I", 131097 },
	{ "HTTP_INTERNAL_ERROR", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_INTERNAL_ERROR, "I", 25 },
	{ "HTTP_NOT_IMPLEMENTED", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_NOT_IMPLEMENTED, "I", 25 },
	{ "HTTP_BAD_GATEWAY", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_BAD_GATEWAY, "I", 25 },
	{ "HTTP_UNAVAILABLE", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_UNAVAILABLE, "I", 25 },
	{ "HTTP_GATEWAY_TIMEOUT", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_GATEWAY_TIMEOUT, "I", 25 },
	{ "HTTP_VERSION", &class_int, (intptr_t) &SF_java_net_HttpURLConnection_HTTP_VERSION, "I", 25 },
};

static MethodMetadata methods[] {
	{ "setAuthenticator", (intptr_t) M_java_net_HttpURLConnection_setAuthenticator_java_net_Authenticator, VTABLE_java_net_HttpURLConnection_setAuthenticator_java_net_Authenticator, "(Ljava/net/Authenticator;)V", 1 },
	{ "getHeaderFieldKey", (intptr_t) M_java_net_HttpURLConnection_getHeaderFieldKey_int_R_java_lang_String, VTABLE_java_net_HttpURLConnection_getHeaderFieldKey_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "setFixedLengthStreamingMode", (intptr_t) M_java_net_HttpURLConnection_setFixedLengthStreamingMode_int, VTABLE_java_net_HttpURLConnection_setFixedLengthStreamingMode_int, "(I)V", 1 },
	{ "setFixedLengthStreamingMode", (intptr_t) M_java_net_HttpURLConnection_setFixedLengthStreamingMode_long, VTABLE_java_net_HttpURLConnection_setFixedLengthStreamingMode_long, "(J)V", 1 },
	{ "setChunkedStreamingMode", (intptr_t) M_java_net_HttpURLConnection_setChunkedStreamingMode_int, VTABLE_java_net_HttpURLConnection_setChunkedStreamingMode_int, "(I)V", 1 },
	{ "getHeaderField", (intptr_t) M_java_net_HttpURLConnection_getHeaderField_int_R_java_lang_String, VTABLE_java_net_HttpURLConnection_getHeaderField_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "<init>", (intptr_t) init_java_net_HttpURLConnection_java_net_URL, 0, "(Ljava/net/URL;)V", 4 },
	{ "setFollowRedirects", (intptr_t) SM_java_net_HttpURLConnection_setFollowRedirects_boolean, 0, "(Z)V", 9 },
	{ "getFollowRedirects", (intptr_t) SM_java_net_HttpURLConnection_getFollowRedirects_R_boolean, 0, "()Z", 9 },
	{ "setInstanceFollowRedirects", (intptr_t) M_java_net_HttpURLConnection_setInstanceFollowRedirects_boolean, VTABLE_java_net_HttpURLConnection_setInstanceFollowRedirects_boolean, "(Z)V", 1 },
	{ "getInstanceFollowRedirects", (intptr_t) M_java_net_HttpURLConnection_getInstanceFollowRedirects_R_boolean, VTABLE_java_net_HttpURLConnection_getInstanceFollowRedirects_R_boolean, "()Z", 1 },
	{ "setRequestMethod", (intptr_t) M_java_net_HttpURLConnection_setRequestMethod_java_lang_String, VTABLE_java_net_HttpURLConnection_setRequestMethod_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "getRequestMethod", (intptr_t) M_java_net_HttpURLConnection_getRequestMethod_R_java_lang_String, VTABLE_java_net_HttpURLConnection_getRequestMethod_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getResponseCode", (intptr_t) M_java_net_HttpURLConnection_getResponseCode_R_int, VTABLE_java_net_HttpURLConnection_getResponseCode_R_int, "()I", 1 },
	{ "getResponseMessage", (intptr_t) M_java_net_HttpURLConnection_getResponseMessage_R_java_lang_String, VTABLE_java_net_HttpURLConnection_getResponseMessage_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getHeaderFieldDate", (intptr_t) M_java_net_HttpURLConnection_getHeaderFieldDate_java_lang_String_long_R_long, VTABLE_java_net_HttpURLConnection_getHeaderFieldDate_java_lang_String_long_R_long, "(Ljava/lang/String;J)J", 1 },
	{ "disconnect", 0, VTABLE_java_net_HttpURLConnection_disconnect, "()V", 1025 },
	{ "usingProxy", 0, VTABLE_java_net_HttpURLConnection_usingProxy_R_boolean, "()Z", 1025 },
	{ "getErrorStream", (intptr_t) M_java_net_HttpURLConnection_getErrorStream_R_java_io_InputStream, VTABLE_java_net_HttpURLConnection_getErrorStream_R_java_io_InputStream, "()Ljava/io/InputStream;", 1 },
	{ "<clinit>", (intptr_t) clinit_java_net_HttpURLConnection, 0, "()V", 8 },
};

Class class_java_net_HttpURLConnection{
		.nativeName = (intptr_t) "java/net/HttpURLConnection",
		.parentClass = (intptr_t) &class_java_net_URLConnection,
		.size = sizeof(java_net_HttpURLConnection),
		.classVtable = (intptr_t) vtable_java_net_HttpURLConnection,
		.staticInitializer = (intptr_t) clinit_java_net_HttpURLConnection,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_java_net_HttpURLConnection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 46,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 65,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_HttpURLConnection = registerClass(&class_java_net_HttpURLConnection);

}
