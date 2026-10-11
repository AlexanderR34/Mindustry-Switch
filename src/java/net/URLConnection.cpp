#include "java/net/URLConnection.h"
#include "java/lang/Exception.h"
#include "java/lang/Integer.h"
#include "java/lang/reflect/Field.h"
#include "java/net/ContentHandlerFactory.h"
#include "java/util/Hashtable.h"
#include "java/net/FileNameMap.h"
#include "java/net/URL.h"
#include "java/lang/annotation/Annotation.h"
#include "java/util/Map.h"
#include "java/lang/Long.h"
#include "java/io/OutputStream.h"
#include "java/lang/reflect/Constructor.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/URLConnection.h"
#include "java/lang/reflect/Method.h"
#include "java/security/Permission.h"
#include "java/lang/Class.h"
#include "java/lang/Deprecated.h"

extern "C" {

jobject SF_java_net_URLConnection_contentHandlers;

void mark_java_net_URLConnection(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_net_URLConnection_contentHandlers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_net_URLConnection_contentHandlers)->clazz)->markFunction)((jobject) SF_java_net_URLConnection_contentHandlers, mark, depth + 1);
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
	auto self = (java_net_URLConnection *) object;
	if (self->F_url)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_url)->clazz)->markFunction)((jobject) self->F_url, mark, depth + 1);
}

jobject SM_java_net_URLConnection_getFileNameMap_R_java_net_FileNameMap(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getFileNameMap", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLConnection(ctx);
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_java_net_URLConnection_setFileNameMap_java_net_FileNameMap(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setFileNameMap", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLConnection(ctx);
	frame[0].o = param0;
	LINE_NUMBER(24);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_net_URLConnection_setConnectTimeout_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setConnectTimeout", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(28);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_net_URLConnection_getConnectTimeout_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getConnectTimeout", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_net_URLConnection_setReadTimeout_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setReadTimeout", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(32);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_java_net_URLConnection_getReadTimeout_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getReadTimeout", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void init_java_net_URLConnection_java_net_URL(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLConnection(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getURL_R_java_net_URL(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getURL", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_net_URLConnection_getContentLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getContentLength", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jlong M_java_net_URLConnection_getContentLengthLong_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getContentLengthLong", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getContentType_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getContentType", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((func_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"content-type"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getContentEncoding_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getContentEncoding", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"content-encoding"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jlong M_java_net_URLConnection_getExpiration_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getExpiration", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	jlong temp0 = (jlong)((func_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"expires"_j))), (jlong(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_net_URLConnection_getDate_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getDate", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	jlong temp0 = (jlong)((func_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"date"_j))), (jlong(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_java_net_URLConnection_getLastModified_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getLastModified", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	jlong temp0 = (jlong)((func_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"last-modified"_j))), (jlong(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getHeaderField", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getHeaderFields_R_java_util_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getHeaderFields", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jint M_java_net_URLConnection_getHeaderFieldInt_java_lang_String_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getHeaderFieldInt", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(73);
	jint temp0 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, (frame[3].o));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(74);
	frame[4].o = sp[0].o;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jlong M_java_net_URLConnection_getHeaderFieldLong_java_lang_String_long_R_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getHeaderFieldLong", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(81);
	jlong temp0 = (jlong)SM_java_lang_Long_parseLong_java_lang_String_R_long(ctx, (frame[4].o));
	sp[0].l = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_LRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(82);
	frame[5].o = sp[0].o;
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (frame[2].l);
	}

	popStackFrame(ctx);
}

jlong M_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long(jcontext ctx, jobject self, jobject param0, jlong param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getHeaderFieldDate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].l = param1;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getHeaderFieldKey_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getHeaderFieldKey", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getHeaderField_int_R_java_lang_String(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getHeaderField", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getContent_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getContent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getContent_Array1_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getContent", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getPermission_R_java_security_Permission(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getPermission", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getInputStream_R_java_io_InputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getInputStream", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getOutputStream_R_java_io_OutputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getOutputStream", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_java_net_URLConnection_setDoInput_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setDoInput", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(105);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_net_URLConnection_getDoInput_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getDoInput", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(107);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_net_URLConnection_setDoOutput_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setDoOutput", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_net_URLConnection_getDoOutput_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getDoOutput", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_net_URLConnection_setAllowUserInteraction_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setAllowUserInteraction", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_net_URLConnection_getAllowUserInteraction_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getAllowUserInteraction", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_java_net_URLConnection_setDefaultAllowUserInteraction_boolean(jcontext ctx, jbool param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setDefaultAllowUserInteraction", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLConnection(ctx);
	frame[0].i = param0;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_java_net_URLConnection_getDefaultAllowUserInteraction_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getDefaultAllowUserInteraction", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLConnection(ctx);
	{
	LINE_NUMBER(119);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_net_URLConnection_setUseCaches_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setUseCaches", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(121);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_java_net_URLConnection_getUseCaches_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getUseCaches", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_net_URLConnection_setIfModifiedSince_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setIfModifiedSince", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	LINE_NUMBER(125);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_java_net_URLConnection_getIfModifiedSince_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getIfModifiedSince", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return (jlong(0));
	}

	popStackFrame(ctx);
}

jbool M_java_net_URLConnection_getDefaultUseCaches_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getDefaultUseCaches", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_net_URLConnection_setDefaultUseCaches_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setDefaultUseCaches", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(131);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_java_net_URLConnection_setDefaultUseCaches_java_lang_String_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setDefaultUseCaches", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLConnection(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_java_net_URLConnection_getDefaultUseCaches_java_lang_String_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getDefaultUseCaches", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLConnection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(135);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_java_net_URLConnection_setRequestProperty_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setRequestProperty", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(137);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_java_net_URLConnection_addRequestProperty_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:addRequestProperty", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(139);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getRequestProperty_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getRequestProperty", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_java_net_URLConnection_getRequestProperties_R_java_util_Map(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getRequestProperties", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_java_net_URLConnection_setDefaultRequestProperty_java_lang_String_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setDefaultRequestProperty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLConnection(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	LINE_NUMBER(146);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_net_URLConnection_getDefaultRequestProperty_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:getDefaultRequestProperty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLConnection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void SM_java_net_URLConnection_setContentHandlerFactory_java_net_ContentHandlerFactory(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:setContentHandlerFactory", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_java_net_URLConnection);

	clinit_java_net_URLConnection(ctx);
	frame[0].o = param0;
	LINE_NUMBER(151);
	popStackFrame(ctx, (jobject) &class_java_net_URLConnection);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_java_net_URLConnection_guessContentTypeFromName_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:guessContentTypeFromName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLConnection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_java_net_URLConnection_guessContentTypeFromStream_java_io_InputStream_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:guessContentTypeFromStream", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLConnection(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void clinit_java_net_URLConnection(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/net/URLConnection:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_net_URLConnection(ctx);
	{
	LINE_NUMBER(20);
	clinit_java_util_Hashtable(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Hashtable);
	init_java_util_Hashtable(ctx, sp[0].o);
	clinit_java_net_URLConnection(ctx);
	SF_java_net_URLConnection_contentHandlers = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_java_net_URLConnection;
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

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method setDefaultRequestProperty
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[48]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	{ // Method getDefaultRequestProperty
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[49]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_java_net_URLConnection[] {
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
	(void *) M_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long,
	(void *) M_java_net_URLConnection_getHeaderFieldKey_int_R_java_lang_String,
	(void *) M_java_net_URLConnection_getHeaderField_int_R_java_lang_String,
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
};

static FieldMetadata fields[] {
	{ "url", &class_java_net_URL, offsetof(java_net_URLConnection, F_url), "Ljava/net/URL;", 4 },
	{ "ifModifiedSince", &class_long, offsetof(java_net_URLConnection, F_ifModifiedSince), "J", 4 },
	{ "useCaches", &class_boolean, offsetof(java_net_URLConnection, F_useCaches), "Z", 4 },
	{ "connected", &class_boolean, offsetof(java_net_URLConnection, F_connected), "Z", 4 },
	{ "doOutput", &class_boolean, offsetof(java_net_URLConnection, F_doOutput), "Z", 4 },
	{ "doInput", &class_boolean, offsetof(java_net_URLConnection, F_doInput), "Z", 4 },
	{ "allowUserInteraction", &class_boolean, offsetof(java_net_URLConnection, F_allowUserInteraction), "Z", 4 },
	{ "contentHandlers", &class_java_util_Hashtable, (intptr_t) &SF_java_net_URLConnection_contentHandlers, "Ljava/util/Hashtable;", 8 },
};

static MethodMetadata methods[] {
	{ "getFileNameMap", (intptr_t) SM_java_net_URLConnection_getFileNameMap_R_java_net_FileNameMap, 0, "()Ljava/net/FileNameMap;", 9 },
	{ "setFileNameMap", (intptr_t) SM_java_net_URLConnection_setFileNameMap_java_net_FileNameMap, 0, "(Ljava/net/FileNameMap;)V", 9 },
	{ "connect", 0, VTABLE_java_net_URLConnection_connect, "()V", 1025 },
	{ "setConnectTimeout", (intptr_t) M_java_net_URLConnection_setConnectTimeout_int, VTABLE_java_net_URLConnection_setConnectTimeout_int, "(I)V", 1 },
	{ "getConnectTimeout", (intptr_t) M_java_net_URLConnection_getConnectTimeout_R_int, VTABLE_java_net_URLConnection_getConnectTimeout_R_int, "()I", 1 },
	{ "setReadTimeout", (intptr_t) M_java_net_URLConnection_setReadTimeout_int, VTABLE_java_net_URLConnection_setReadTimeout_int, "(I)V", 1 },
	{ "getReadTimeout", (intptr_t) M_java_net_URLConnection_getReadTimeout_R_int, VTABLE_java_net_URLConnection_getReadTimeout_R_int, "()I", 1 },
	{ "<init>", (intptr_t) init_java_net_URLConnection_java_net_URL, 0, "(Ljava/net/URL;)V", 4 },
	{ "getURL", (intptr_t) M_java_net_URLConnection_getURL_R_java_net_URL, VTABLE_java_net_URLConnection_getURL_R_java_net_URL, "()Ljava/net/URL;", 1 },
	{ "getContentLength", (intptr_t) M_java_net_URLConnection_getContentLength_R_int, VTABLE_java_net_URLConnection_getContentLength_R_int, "()I", 1 },
	{ "getContentLengthLong", (intptr_t) M_java_net_URLConnection_getContentLengthLong_R_long, VTABLE_java_net_URLConnection_getContentLengthLong_R_long, "()J", 1 },
	{ "getContentType", (intptr_t) M_java_net_URLConnection_getContentType_R_java_lang_String, VTABLE_java_net_URLConnection_getContentType_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getContentEncoding", (intptr_t) M_java_net_URLConnection_getContentEncoding_R_java_lang_String, VTABLE_java_net_URLConnection_getContentEncoding_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getExpiration", (intptr_t) M_java_net_URLConnection_getExpiration_R_long, VTABLE_java_net_URLConnection_getExpiration_R_long, "()J", 1 },
	{ "getDate", (intptr_t) M_java_net_URLConnection_getDate_R_long, VTABLE_java_net_URLConnection_getDate_R_long, "()J", 1 },
	{ "getLastModified", (intptr_t) M_java_net_URLConnection_getLastModified_R_long, VTABLE_java_net_URLConnection_getLastModified_R_long, "()J", 1 },
	{ "getHeaderField", (intptr_t) M_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String, VTABLE_java_net_URLConnection_getHeaderField_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getHeaderFields", (intptr_t) M_java_net_URLConnection_getHeaderFields_R_java_util_Map, VTABLE_java_net_URLConnection_getHeaderFields_R_java_util_Map, "()Ljava/util/Map;", 1 },
	{ "getHeaderFieldInt", (intptr_t) M_java_net_URLConnection_getHeaderFieldInt_java_lang_String_int_R_int, VTABLE_java_net_URLConnection_getHeaderFieldInt_java_lang_String_int_R_int, "(Ljava/lang/String;I)I", 1 },
	{ "getHeaderFieldLong", (intptr_t) M_java_net_URLConnection_getHeaderFieldLong_java_lang_String_long_R_long, VTABLE_java_net_URLConnection_getHeaderFieldLong_java_lang_String_long_R_long, "(Ljava/lang/String;J)J", 1 },
	{ "getHeaderFieldDate", (intptr_t) M_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long, VTABLE_java_net_URLConnection_getHeaderFieldDate_java_lang_String_long_R_long, "(Ljava/lang/String;J)J", 1 },
	{ "getHeaderFieldKey", (intptr_t) M_java_net_URLConnection_getHeaderFieldKey_int_R_java_lang_String, VTABLE_java_net_URLConnection_getHeaderFieldKey_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "getHeaderField", (intptr_t) M_java_net_URLConnection_getHeaderField_int_R_java_lang_String, VTABLE_java_net_URLConnection_getHeaderField_int_R_java_lang_String, "(I)Ljava/lang/String;", 1 },
	{ "getContent", (intptr_t) M_java_net_URLConnection_getContent_R_java_lang_Object, VTABLE_java_net_URLConnection_getContent_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getContent", (intptr_t) M_java_net_URLConnection_getContent_Array1_java_lang_Class_R_java_lang_Object, VTABLE_java_net_URLConnection_getContent_Array1_java_lang_Class_R_java_lang_Object, "([Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "getPermission", (intptr_t) M_java_net_URLConnection_getPermission_R_java_security_Permission, VTABLE_java_net_URLConnection_getPermission_R_java_security_Permission, "()Ljava/security/Permission;", 1 },
	{ "getInputStream", (intptr_t) M_java_net_URLConnection_getInputStream_R_java_io_InputStream, VTABLE_java_net_URLConnection_getInputStream_R_java_io_InputStream, "()Ljava/io/InputStream;", 1 },
	{ "getOutputStream", (intptr_t) M_java_net_URLConnection_getOutputStream_R_java_io_OutputStream, VTABLE_java_net_URLConnection_getOutputStream_R_java_io_OutputStream, "()Ljava/io/OutputStream;", 1 },
	{ "toString", (intptr_t) M_java_net_URLConnection_toString_R_java_lang_String, VTABLE_java_net_URLConnection_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setDoInput", (intptr_t) M_java_net_URLConnection_setDoInput_boolean, VTABLE_java_net_URLConnection_setDoInput_boolean, "(Z)V", 1 },
	{ "getDoInput", (intptr_t) M_java_net_URLConnection_getDoInput_R_boolean, VTABLE_java_net_URLConnection_getDoInput_R_boolean, "()Z", 1 },
	{ "setDoOutput", (intptr_t) M_java_net_URLConnection_setDoOutput_boolean, VTABLE_java_net_URLConnection_setDoOutput_boolean, "(Z)V", 1 },
	{ "getDoOutput", (intptr_t) M_java_net_URLConnection_getDoOutput_R_boolean, VTABLE_java_net_URLConnection_getDoOutput_R_boolean, "()Z", 1 },
	{ "setAllowUserInteraction", (intptr_t) M_java_net_URLConnection_setAllowUserInteraction_boolean, VTABLE_java_net_URLConnection_setAllowUserInteraction_boolean, "(Z)V", 1 },
	{ "getAllowUserInteraction", (intptr_t) M_java_net_URLConnection_getAllowUserInteraction_R_boolean, VTABLE_java_net_URLConnection_getAllowUserInteraction_R_boolean, "()Z", 1 },
	{ "setDefaultAllowUserInteraction", (intptr_t) SM_java_net_URLConnection_setDefaultAllowUserInteraction_boolean, 0, "(Z)V", 9 },
	{ "getDefaultAllowUserInteraction", (intptr_t) SM_java_net_URLConnection_getDefaultAllowUserInteraction_R_boolean, 0, "()Z", 9 },
	{ "setUseCaches", (intptr_t) M_java_net_URLConnection_setUseCaches_boolean, VTABLE_java_net_URLConnection_setUseCaches_boolean, "(Z)V", 1 },
	{ "getUseCaches", (intptr_t) M_java_net_URLConnection_getUseCaches_R_boolean, VTABLE_java_net_URLConnection_getUseCaches_R_boolean, "()Z", 1 },
	{ "setIfModifiedSince", (intptr_t) M_java_net_URLConnection_setIfModifiedSince_long, VTABLE_java_net_URLConnection_setIfModifiedSince_long, "(J)V", 1 },
	{ "getIfModifiedSince", (intptr_t) M_java_net_URLConnection_getIfModifiedSince_R_long, VTABLE_java_net_URLConnection_getIfModifiedSince_R_long, "()J", 1 },
	{ "getDefaultUseCaches", (intptr_t) M_java_net_URLConnection_getDefaultUseCaches_R_boolean, VTABLE_java_net_URLConnection_getDefaultUseCaches_R_boolean, "()Z", 1 },
	{ "setDefaultUseCaches", (intptr_t) M_java_net_URLConnection_setDefaultUseCaches_boolean, VTABLE_java_net_URLConnection_setDefaultUseCaches_boolean, "(Z)V", 1 },
	{ "setDefaultUseCaches", (intptr_t) SM_java_net_URLConnection_setDefaultUseCaches_java_lang_String_boolean, 0, "(Ljava/lang/String;Z)V", 9 },
	{ "getDefaultUseCaches", (intptr_t) SM_java_net_URLConnection_getDefaultUseCaches_java_lang_String_R_boolean, 0, "(Ljava/lang/String;)Z", 9 },
	{ "setRequestProperty", (intptr_t) M_java_net_URLConnection_setRequestProperty_java_lang_String_java_lang_String, VTABLE_java_net_URLConnection_setRequestProperty_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "addRequestProperty", (intptr_t) M_java_net_URLConnection_addRequestProperty_java_lang_String_java_lang_String, VTABLE_java_net_URLConnection_addRequestProperty_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "getRequestProperty", (intptr_t) M_java_net_URLConnection_getRequestProperty_java_lang_String_R_java_lang_String, VTABLE_java_net_URLConnection_getRequestProperty_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "getRequestProperties", (intptr_t) M_java_net_URLConnection_getRequestProperties_R_java_util_Map, VTABLE_java_net_URLConnection_getRequestProperties_R_java_util_Map, "()Ljava/util/Map;", 1 },
	{ "setDefaultRequestProperty", (intptr_t) SM_java_net_URLConnection_setDefaultRequestProperty_java_lang_String_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;)V", 131081 },
	{ "getDefaultRequestProperty", (intptr_t) SM_java_net_URLConnection_getDefaultRequestProperty_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 131081 },
	{ "setContentHandlerFactory", (intptr_t) SM_java_net_URLConnection_setContentHandlerFactory_java_net_ContentHandlerFactory, 0, "(Ljava/net/ContentHandlerFactory;)V", 41 },
	{ "guessContentTypeFromName", (intptr_t) SM_java_net_URLConnection_guessContentTypeFromName_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "guessContentTypeFromStream", (intptr_t) SM_java_net_URLConnection_guessContentTypeFromStream_java_io_InputStream_R_java_lang_String, 0, "(Ljava/io/InputStream;)Ljava/lang/String;", 9 },
	{ "<clinit>", (intptr_t) clinit_java_net_URLConnection, 0, "()V", 8 },
};

Class class_java_net_URLConnection{
		.nativeName = (intptr_t) "java/net/URLConnection",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(java_net_URLConnection),
		.classVtable = (intptr_t) vtable_java_net_URLConnection,
		.staticInitializer = (intptr_t) clinit_java_net_URLConnection,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_java_net_URLConnection,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 55,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 52,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_net_URLConnection = registerClass(&class_java_net_URLConnection);

}
