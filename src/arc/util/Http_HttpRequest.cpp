#include "arc/util/Http_HttpRequest.h"
#include "arc/util/Http_HttpRequest.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/charset/Charset.h"
#include "arc/util/Http_HttpStatus.h"
#include "java/io/Writer.h"
#include "java/util/concurrent/Future.h"
#include "java/io/OutputStreamWriter.h"
#include "arc/func/ConsT.h"
#include "arc/util/Http_HttpMethod.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "java/io/InputStream.h"
#include "java/lang/String.h"
#include "arc/util/Http_HttpRequest_invoke_arc_func_Cons2_0.h"
#include "java/lang/Throwable.h"
#include "arc/util/Http_HttpRequest_invoke_java_lang_Runnable_0.h"
#include "java/util/concurrent/ExecutorService.h"
#include "java/net/URL.h"
#include "java/net/HttpURLConnection.h"
#include "java/lang/Enum.h"
#include "arc/func/Cons2.h"
#include "arc/util/Http_HttpStatusException.h"
#include "java/io/OutputStream.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "arc/util/Http_HttpRequest_invoke_arc_func_Cons_0.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/util/Http_HttpRequest_invoke_arc_func_Cons_1.h"
#include "arc/util/Http.h"
#include "java/net/URLConnection.h"
#include "arc/util/io/Streams.h"
#include "arc/struct/ObjectMap.h"
#include "java/util/Objects.h"
#include "arc/util/Http_HttpResponse.h"

extern "C" {


void mark_arc_util_Http$HttpRequest(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Http$HttpRequest *) object;
	if (self->F_method)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_method)->clazz)->markFunction)((jobject) self->F_method, mark, depth + 1);
	if (self->F_url)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_url)->clazz)->markFunction)((jobject) self->F_url, mark, depth + 1);
	if (self->F_headers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_headers)->clazz)->markFunction)((jobject) self->F_headers, mark, depth + 1);
	if (self->F_content)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_content)->clazz)->markFunction)((jobject) self->F_content, mark, depth + 1);
	if (self->F_contentStream)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_contentStream)->clazz)->markFunction)((jobject) self->F_contentStream, mark, depth + 1);
	if (self->F_errorHandler)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errorHandler)->clazz)->markFunction)((jobject) self->F_errorHandler, mark, depth + 1);
}

void clinit_arc_util_Http$HttpRequest(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Http$HttpRequest(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpRequest:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http$HttpRequest(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(185);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpMethod_GET;
	((arc_util_Http$HttpRequest *) NULL_CHECK(sp[0].o))->F_method = (jref) sp[1].o;
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_Http$HttpRequest *) NULL_CHECK(sp[0].o))->F_headers = (jref) sp[1].o;
	LINE_NUMBER(167);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_timeout = (8000);
	LINE_NUMBER(179);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_followRedirects = (jint(1));
	LINE_NUMBER(181);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_includeCredentials = (jint(0));
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_util_Http$HttpRequest_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_util_Http$HttpRequest_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_util_Http$HttpRequest_invoke_arc_func_Cons_0);
		sp[1].o = (jobject) proxy;
	}
	((arc_util_Http$HttpRequest *) NULL_CHECK(sp[0].o))->F_errorHandler = (jref) sp[1].o;
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_util_Http$HttpRequest_arc_util_Http$HttpMethod(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpRequest:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http$HttpRequest(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(189);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpMethod_GET;
	((arc_util_Http$HttpRequest *) NULL_CHECK(sp[0].o))->F_method = (jref) sp[1].o;
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((arc_util_Http$HttpRequest *) NULL_CHECK(sp[0].o))->F_headers = (jref) sp[1].o;
	LINE_NUMBER(167);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_timeout = (8000);
	LINE_NUMBER(179);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_followRedirects = (jint(1));
	LINE_NUMBER(181);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_includeCredentials = (jint(0));
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_util_Http$HttpRequest_invoke_arc_func_Cons_1(ctx);
		auto proxy = (arc_util_Http$HttpRequest_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_arc_util_Http$HttpRequest_invoke_arc_func_Cons_1);
		sp[1].o = (jobject) proxy;
	}
	((arc_util_Http$HttpRequest *) NULL_CHECK(sp[0].o))->F_errorHandler = (jref) sp[1].o;
	LINE_NUMBER(190);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_method = (jref) (frame[1].o);
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpRequest:error", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(194);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_errorHandler = (jref) (frame[1].o);
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpRequest_method_arc_util_Http$HttpMethod_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpRequest:method", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(199);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_method = (jref) (frame[1].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpRequest_url_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpRequest:url", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(204);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_url = (jref) (frame[1].o);
	LINE_NUMBER(205);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpRequest_timeout_int_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpRequest:timeout", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(209);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_timeout = (frame[1].i);
	LINE_NUMBER(210);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpRequest_redirects_boolean_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpRequest:redirects", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(214);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_followRedirects = (frame[1].i);
	LINE_NUMBER(215);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpRequest_credentials_boolean_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpRequest:credentials", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(219);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_includeCredentials = (frame[1].i);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpRequest_header_java_lang_String_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpRequest:header", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(224);
	sp[0].o = (jobject)((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_headers;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpRequest_content_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpRequest:content", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_content = (jref) (frame[1].o);
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Http$HttpRequest_content_java_io_InputStream_R_arc_util_Http$HttpRequest(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpRequest:content", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(234);
	((arc_util_Http$HttpRequest *) NULL_CHECK((frame[0].o)))->F_contentStream = (jref) (frame[1].o);
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_arc_util_Http$HttpRequest_submit_arc_func_ConsT(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpRequest:submit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(240);
	clinit_arc_util_Http(ctx);
	sp[0].o = (jobject)SF_arc_util_Http_exec;
	{ /* InvokeDynamic */
		clinit_arc_util_Http$HttpRequest_invoke_java_lang_Runnable_0(ctx);
		auto proxy = (arc_util_Http$HttpRequest_invoke_java_lang_Runnable_0 *) gcAlloc(ctx, &class_arc_util_Http$HttpRequest_invoke_java_lang_Runnable_0);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_util_Http$HttpRequest_block_arc_func_ConsT(jcontext ctx, jobject self, jobject param0) {
}

}
