#include "arc/util/Http.h"
#include "arc/util/Http_HttpRequest.h"
#include "java/util/concurrent/ExecutorService.h"
#include "arc/util/Http_HttpStatus.h"
#include "arc/func/ConsT.h"
#include "arc/util/Http_HttpMethod.h"
#include "arc/util/Http_HttpStatusException.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/Threads.h"
#include "arc/util/Http.h"
#include "java/lang/NullPointerException.h"
#include "arc/util/Http_HttpResponse.h"

extern "C" {

jobject SF_arc_util_Http_exec;

void mark_arc_util_Http(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_Http_exec)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http_exec)->clazz)->markFunction)((jobject) SF_arc_util_Http_exec, mark, depth + 1);
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
	auto self = (arc_util_Http *) object;
}

void init_arc_util_Http(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Http_request_arc_util_Http$HttpMethod_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http:request", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(18);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"url cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(19);
	clinit_arc_util_Http$HttpRequest(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpRequest);
	init_arc_util_Http$HttpRequest_arc_util_Http$HttpMethod(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_Http$HttpRequest_url_java_lang_String_R_arc_util_Http$HttpRequest) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_url_java_lang_String_R_arc_util_Http$HttpRequest])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Http_get_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(24);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"url cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(25);
	clinit_arc_util_Http$HttpRequest(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpRequest);
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpMethod_GET;
	init_arc_util_Http$HttpRequest_arc_util_Http$HttpMethod(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_Http$HttpRequest_url_java_lang_String_R_arc_util_Http$HttpRequest) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_url_java_lang_String_R_arc_util_Http$HttpRequest])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Http_get_java_lang_String_arc_func_ConsT(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)SM_arc_util_Http_get_java_lang_String_R_arc_util_Http$HttpRequest(ctx, (frame[0].o));
	((func_arc_util_Http$HttpRequest_submit_arc_func_ConsT) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_submit_arc_func_ConsT])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Http_get_java_lang_String_arc_func_ConsT_arc_func_Cons(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(35);
	sp[0].o = (jobject)SM_arc_util_Http_get_java_lang_String_R_arc_util_Http$HttpRequest(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest])(ctx, sp[0].o, (frame[2].o));
	((func_arc_util_Http$HttpRequest_submit_arc_func_ConsT) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_submit_arc_func_ConsT])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Http_post_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http:post", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)SM_arc_util_Http_post_java_lang_String_java_lang_String_R_arc_util_Http$HttpRequest(ctx, (frame[0].o), (checkCast(ctx, &class_java_lang_String, (jobject(nullptr)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Http_post_java_lang_String_arc_func_ConsT(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http:post", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)SM_arc_util_Http_post_java_lang_String_R_arc_util_Http$HttpRequest(ctx, (frame[0].o));
	((func_arc_util_Http$HttpRequest_submit_arc_func_ConsT) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_submit_arc_func_ConsT])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Http_post_java_lang_String_java_lang_String_R_arc_util_Http$HttpRequest(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http:post", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(50);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_NullPointerException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_NullPointerException);
	init_java_lang_NullPointerException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"url cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(51);
	clinit_arc_util_Http$HttpRequest(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpRequest);
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpMethod_POST;
	init_arc_util_Http$HttpRequest_arc_util_Http$HttpMethod(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_Http$HttpRequest_url_java_lang_String_R_arc_util_Http$HttpRequest) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_url_java_lang_String_R_arc_util_Http$HttpRequest])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_util_Http$HttpRequest_content_java_lang_String_R_arc_util_Http$HttpRequest) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_content_java_lang_String_R_arc_util_Http$HttpRequest])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_Http(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http(ctx);
	{
	LINE_NUMBER(14);
	sp[0].o = (jobject)SM_arc_util_Threads_unboundedExecutor_java_lang_String_int_R_java_util_concurrent_ExecutorService(ctx, (((jobject) createStringLiteral(ctx, u8"HTTP"_j))), (jint(1)));
	clinit_arc_util_Http(ctx);
	SF_arc_util_Http_exec = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Http[] {
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
};

static jclass innerClasses[] {
	&class_arc_util_Http$HttpRequest,
	&class_arc_util_Http$HttpMethod,
	&class_arc_util_Http$HttpStatus,
	&class_arc_util_Http$HttpStatusException,
	&class_arc_util_Http$HttpResponse,
};

static FieldMetadata fields[] {
	{ "exec", &class_java_util_concurrent_ExecutorService, (intptr_t) &SF_arc_util_Http_exec, "Ljava/util/concurrent/ExecutorService;", 12 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Http, 0, "()V", 1 },
	{ "request", (intptr_t) SM_arc_util_Http_request_arc_util_Http$HttpMethod_java_lang_String_R_arc_util_Http$HttpRequest, 0, "(Larc/util/Http$HttpMethod;Ljava/lang/String;)Larc/util/Http$HttpRequest;", 9 },
	{ "get", (intptr_t) SM_arc_util_Http_get_java_lang_String_R_arc_util_Http$HttpRequest, 0, "(Ljava/lang/String;)Larc/util/Http$HttpRequest;", 9 },
	{ "get", (intptr_t) SM_arc_util_Http_get_java_lang_String_arc_func_ConsT, 0, "(Ljava/lang/String;Larc/func/ConsT;)V", 9 },
	{ "get", (intptr_t) SM_arc_util_Http_get_java_lang_String_arc_func_ConsT_arc_func_Cons, 0, "(Ljava/lang/String;Larc/func/ConsT;Larc/func/Cons;)V", 9 },
	{ "post", (intptr_t) SM_arc_util_Http_post_java_lang_String_R_arc_util_Http$HttpRequest, 0, "(Ljava/lang/String;)Larc/util/Http$HttpRequest;", 9 },
	{ "post", (intptr_t) SM_arc_util_Http_post_java_lang_String_arc_func_ConsT, 0, "(Ljava/lang/String;Larc/func/ConsT;)V", 9 },
	{ "post", (intptr_t) SM_arc_util_Http_post_java_lang_String_java_lang_String_R_arc_util_Http$HttpRequest, 0, "(Ljava/lang/String;Ljava/lang/String;)Larc/util/Http$HttpRequest;", 9 },
	{ "<clinit>", (intptr_t) clinit_arc_util_Http, 0, "()V", 8 },
};

Class class_arc_util_Http{
		.nativeName = (intptr_t) "arc/util/Http",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Http),
		.classVtable = (intptr_t) vtable_arc_util_Http,
		.staticInitializer = (intptr_t) clinit_arc_util_Http,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Http,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 5,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Http = registerClass(&class_arc_util_Http);

}
