#include "arc/util/Http_HttpStatus.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/Http_HttpStatus.h"
#include "arc/util/Http.h"
#include "arc/struct/IntMap.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_util_Http$HttpStatus_UNKNOWN_STATUS;
jobject SF_arc_util_Http$HttpStatus_CONTINUE;
jobject SF_arc_util_Http$HttpStatus_SWITCHING_PROTOCOLS;
jobject SF_arc_util_Http$HttpStatus_PROCESSING;
jobject SF_arc_util_Http$HttpStatus_EARLY_HINTS;
jobject SF_arc_util_Http$HttpStatus_OK;
jobject SF_arc_util_Http$HttpStatus_CREATED;
jobject SF_arc_util_Http$HttpStatus_ACCEPTED;
jobject SF_arc_util_Http$HttpStatus_NON_AUTHORITATIVE_INFORMATION;
jobject SF_arc_util_Http$HttpStatus_NO_CONTENT;
jobject SF_arc_util_Http$HttpStatus_RESET_CONTENT;
jobject SF_arc_util_Http$HttpStatus_PARTIAL_CONTENT;
jobject SF_arc_util_Http$HttpStatus_MULTI_STATUS;
jobject SF_arc_util_Http$HttpStatus_ALREADY_REPORTED;
jobject SF_arc_util_Http$HttpStatus_IM_USED;
jobject SF_arc_util_Http$HttpStatus_MULTIPLE_CHOICES;
jobject SF_arc_util_Http$HttpStatus_MOVED_PERMANENTLY;
jobject SF_arc_util_Http$HttpStatus_MOVED_TEMPORARILY;
jobject SF_arc_util_Http$HttpStatus_SEE_OTHER;
jobject SF_arc_util_Http$HttpStatus_NOT_MODIFIED;
jobject SF_arc_util_Http$HttpStatus_USE_PROXY;
jobject SF_arc_util_Http$HttpStatus_SWITCH_PROXY;
jobject SF_arc_util_Http$HttpStatus_TEMPORARY_REDIRECT;
jobject SF_arc_util_Http$HttpStatus_PERMANENT_REDIRECT;
jobject SF_arc_util_Http$HttpStatus_BAD_REQUEST;
jobject SF_arc_util_Http$HttpStatus_UNAUTHORIZED;
jobject SF_arc_util_Http$HttpStatus_PAYMENT_REQUIRED;
jobject SF_arc_util_Http$HttpStatus_FORBIDDEN;
jobject SF_arc_util_Http$HttpStatus_NOT_FOUND;
jobject SF_arc_util_Http$HttpStatus_METHOD_NOT_ALLOWED;
jobject SF_arc_util_Http$HttpStatus_NOT_ACCEPTABLE;
jobject SF_arc_util_Http$HttpStatus_PROXY_AUTHENTICATION_REQUIRED;
jobject SF_arc_util_Http$HttpStatus_REQUEST_TIMEOUT;
jobject SF_arc_util_Http$HttpStatus_CONFLICT;
jobject SF_arc_util_Http$HttpStatus_GONE;
jobject SF_arc_util_Http$HttpStatus_LENGTH_REQUIRED;
jobject SF_arc_util_Http$HttpStatus_PRECONDITION_FAILED;
jobject SF_arc_util_Http$HttpStatus_REQUEST_TOO_LONG;
jobject SF_arc_util_Http$HttpStatus_REQUEST_URI_TOO_LONG;
jobject SF_arc_util_Http$HttpStatus_UNSUPPORTED_MEDIA_TYPE;
jobject SF_arc_util_Http$HttpStatus_REQUESTED_RANGE_NOT_SATISFIABLE;
jobject SF_arc_util_Http$HttpStatus_EXPECTATION_FAILED;
jobject SF_arc_util_Http$HttpStatus_IM_A_TEAPOT;
jobject SF_arc_util_Http$HttpStatus_INSUFFICIENT_SPACE_ON_RESOURCE;
jobject SF_arc_util_Http$HttpStatus_METHOD_FAILURE;
jobject SF_arc_util_Http$HttpStatus_MISDIRECTED_REQUEST;
jobject SF_arc_util_Http$HttpStatus_UNPROCESSABLE_ENTITY;
jobject SF_arc_util_Http$HttpStatus_LOCKED;
jobject SF_arc_util_Http$HttpStatus_FAILED_DEPENDENCY;
jobject SF_arc_util_Http$HttpStatus_TOO_EARLY;
jobject SF_arc_util_Http$HttpStatus_UPGRADE_REQUIRED;
jobject SF_arc_util_Http$HttpStatus_PRECONDITION_REQUIRED;
jobject SF_arc_util_Http$HttpStatus_TOO_MANY_REQUESTS;
jobject SF_arc_util_Http$HttpStatus_REQUEST_HEADER_FIELDS_TOO_LARGE;
jobject SF_arc_util_Http$HttpStatus_UNAVAILABLE_FOR_LEGAL_REASONS;
jobject SF_arc_util_Http$HttpStatus_INTERNAL_SERVER_ERROR;
jobject SF_arc_util_Http$HttpStatus_NOT_IMPLEMENTED;
jobject SF_arc_util_Http$HttpStatus_BAD_GATEWAY;
jobject SF_arc_util_Http$HttpStatus_SERVICE_UNAVAILABLE;
jobject SF_arc_util_Http$HttpStatus_GATEWAY_TIMEOUT;
jobject SF_arc_util_Http$HttpStatus_HTTP_VERSION_NOT_SUPPORTED;
jobject SF_arc_util_Http$HttpStatus_VARIANT_ALSO_NEGOTIATES;
jobject SF_arc_util_Http$HttpStatus_INSUFFICIENT_STORAGE;
jobject SF_arc_util_Http$HttpStatus_LOOP_DETECTED;
jobject SF_arc_util_Http$HttpStatus_NOT_EXTENDED;
jobject SF_arc_util_Http$HttpStatus_NETWORK_AUTHENTICATION_REQUIRED;
jobject SF_arc_util_Http$HttpStatus_byCode;
jobject SF_arc_util_Http$HttpStatus_$VALUES;

void mark_arc_util_Http$HttpStatus(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_Http$HttpStatus_UNKNOWN_STATUS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_UNKNOWN_STATUS)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_UNKNOWN_STATUS, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_CONTINUE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_CONTINUE)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_CONTINUE, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_SWITCHING_PROTOCOLS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_SWITCHING_PROTOCOLS)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_SWITCHING_PROTOCOLS, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_PROCESSING)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_PROCESSING)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_PROCESSING, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_EARLY_HINTS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_EARLY_HINTS)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_EARLY_HINTS, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_OK)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_OK)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_OK, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_CREATED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_CREATED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_CREATED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_ACCEPTED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_ACCEPTED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_ACCEPTED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_NON_AUTHORITATIVE_INFORMATION)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_NON_AUTHORITATIVE_INFORMATION)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_NON_AUTHORITATIVE_INFORMATION, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_NO_CONTENT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_NO_CONTENT)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_NO_CONTENT, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_RESET_CONTENT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_RESET_CONTENT)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_RESET_CONTENT, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_PARTIAL_CONTENT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_PARTIAL_CONTENT)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_PARTIAL_CONTENT, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_MULTI_STATUS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_MULTI_STATUS)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_MULTI_STATUS, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_ALREADY_REPORTED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_ALREADY_REPORTED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_ALREADY_REPORTED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_IM_USED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_IM_USED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_IM_USED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_MULTIPLE_CHOICES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_MULTIPLE_CHOICES)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_MULTIPLE_CHOICES, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_MOVED_PERMANENTLY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_MOVED_PERMANENTLY)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_MOVED_PERMANENTLY, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_MOVED_TEMPORARILY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_MOVED_TEMPORARILY)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_MOVED_TEMPORARILY, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_SEE_OTHER)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_SEE_OTHER)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_SEE_OTHER, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_NOT_MODIFIED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_NOT_MODIFIED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_NOT_MODIFIED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_USE_PROXY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_USE_PROXY)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_USE_PROXY, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_SWITCH_PROXY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_SWITCH_PROXY)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_SWITCH_PROXY, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_TEMPORARY_REDIRECT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_TEMPORARY_REDIRECT)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_TEMPORARY_REDIRECT, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_PERMANENT_REDIRECT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_PERMANENT_REDIRECT)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_PERMANENT_REDIRECT, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_BAD_REQUEST)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_BAD_REQUEST)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_BAD_REQUEST, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_UNAUTHORIZED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_UNAUTHORIZED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_UNAUTHORIZED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_PAYMENT_REQUIRED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_PAYMENT_REQUIRED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_PAYMENT_REQUIRED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_FORBIDDEN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_FORBIDDEN)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_FORBIDDEN, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_NOT_FOUND)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_NOT_FOUND)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_NOT_FOUND, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_METHOD_NOT_ALLOWED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_METHOD_NOT_ALLOWED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_METHOD_NOT_ALLOWED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_NOT_ACCEPTABLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_NOT_ACCEPTABLE)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_NOT_ACCEPTABLE, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_PROXY_AUTHENTICATION_REQUIRED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_PROXY_AUTHENTICATION_REQUIRED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_PROXY_AUTHENTICATION_REQUIRED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_REQUEST_TIMEOUT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_REQUEST_TIMEOUT)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_REQUEST_TIMEOUT, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_CONFLICT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_CONFLICT)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_CONFLICT, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_GONE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_GONE)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_GONE, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_LENGTH_REQUIRED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_LENGTH_REQUIRED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_LENGTH_REQUIRED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_PRECONDITION_FAILED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_PRECONDITION_FAILED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_PRECONDITION_FAILED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_REQUEST_TOO_LONG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_REQUEST_TOO_LONG)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_REQUEST_TOO_LONG, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_REQUEST_URI_TOO_LONG)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_REQUEST_URI_TOO_LONG)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_REQUEST_URI_TOO_LONG, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_UNSUPPORTED_MEDIA_TYPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_UNSUPPORTED_MEDIA_TYPE)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_UNSUPPORTED_MEDIA_TYPE, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_REQUESTED_RANGE_NOT_SATISFIABLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_REQUESTED_RANGE_NOT_SATISFIABLE)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_REQUESTED_RANGE_NOT_SATISFIABLE, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_EXPECTATION_FAILED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_EXPECTATION_FAILED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_EXPECTATION_FAILED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_IM_A_TEAPOT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_IM_A_TEAPOT)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_IM_A_TEAPOT, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_INSUFFICIENT_SPACE_ON_RESOURCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_INSUFFICIENT_SPACE_ON_RESOURCE)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_INSUFFICIENT_SPACE_ON_RESOURCE, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_METHOD_FAILURE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_METHOD_FAILURE)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_METHOD_FAILURE, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_MISDIRECTED_REQUEST)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_MISDIRECTED_REQUEST)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_MISDIRECTED_REQUEST, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_UNPROCESSABLE_ENTITY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_UNPROCESSABLE_ENTITY)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_UNPROCESSABLE_ENTITY, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_LOCKED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_LOCKED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_LOCKED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_FAILED_DEPENDENCY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_FAILED_DEPENDENCY)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_FAILED_DEPENDENCY, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_TOO_EARLY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_TOO_EARLY)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_TOO_EARLY, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_UPGRADE_REQUIRED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_UPGRADE_REQUIRED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_UPGRADE_REQUIRED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_PRECONDITION_REQUIRED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_PRECONDITION_REQUIRED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_PRECONDITION_REQUIRED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_TOO_MANY_REQUESTS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_TOO_MANY_REQUESTS)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_TOO_MANY_REQUESTS, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_REQUEST_HEADER_FIELDS_TOO_LARGE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_REQUEST_HEADER_FIELDS_TOO_LARGE)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_REQUEST_HEADER_FIELDS_TOO_LARGE, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_UNAVAILABLE_FOR_LEGAL_REASONS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_UNAVAILABLE_FOR_LEGAL_REASONS)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_UNAVAILABLE_FOR_LEGAL_REASONS, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_INTERNAL_SERVER_ERROR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_INTERNAL_SERVER_ERROR)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_INTERNAL_SERVER_ERROR, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_NOT_IMPLEMENTED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_NOT_IMPLEMENTED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_NOT_IMPLEMENTED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_BAD_GATEWAY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_BAD_GATEWAY)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_BAD_GATEWAY, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_SERVICE_UNAVAILABLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_SERVICE_UNAVAILABLE)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_SERVICE_UNAVAILABLE, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_GATEWAY_TIMEOUT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_GATEWAY_TIMEOUT)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_GATEWAY_TIMEOUT, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_HTTP_VERSION_NOT_SUPPORTED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_HTTP_VERSION_NOT_SUPPORTED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_HTTP_VERSION_NOT_SUPPORTED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_VARIANT_ALSO_NEGOTIATES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_VARIANT_ALSO_NEGOTIATES)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_VARIANT_ALSO_NEGOTIATES, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_INSUFFICIENT_STORAGE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_INSUFFICIENT_STORAGE)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_INSUFFICIENT_STORAGE, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_LOOP_DETECTED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_LOOP_DETECTED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_LOOP_DETECTED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_NOT_EXTENDED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_NOT_EXTENDED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_NOT_EXTENDED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_NETWORK_AUTHENTICATION_REQUIRED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_NETWORK_AUTHENTICATION_REQUIRED)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_NETWORK_AUTHENTICATION_REQUIRED, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_byCode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_byCode)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_byCode, mark, depth + 1);
		if (SF_arc_util_Http$HttpStatus_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpStatus_$VALUES)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpStatus_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_Http$HttpStatus *) object;
}

jobject SM_arc_util_Http$HttpStatus_values_R_Array1_arc_util_Http$HttpStatus(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpStatus:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http$HttpStatus(ctx);
	{
	LINE_NUMBER(341);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = (jobject)SF_arc_util_Http$HttpStatus_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_util_Http$HttpStatus, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Http$HttpStatus_valueOf_java_lang_String_R_arc_util_Http$HttpStatus(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpStatus:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http$HttpStatus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_util_Http$HttpStatus)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_Http$HttpStatus, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_util_Http$HttpStatus_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpStatus:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http$HttpStatus(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(423);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(424);
	((arc_util_Http$HttpStatus *) NULL_CHECK((frame[0].o)))->F_code = (frame[3].i);
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Http$HttpStatus_byCode_int_R_arc_util_Http$HttpStatus(jcontext ctx, jint param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpStatus:byCode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_arc_util_Http$HttpStatus);

	clinit_arc_util_Http$HttpStatus(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(429);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = (jobject)SF_arc_util_Http$HttpStatus_byCode;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(430);
	clinit_arc_struct_IntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[0].o);
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_byCode = sp[0].o;
	LINE_NUMBER(431);
	sp[0].o = (jobject)SM_arc_util_Http$HttpStatus_values_R_Array1_arc_util_Http$HttpStatus(ctx);
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_1;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(432);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = (jobject)SF_arc_util_Http$HttpStatus_byCode;
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, ((jint)((arc_util_Http$HttpStatus *) NULL_CHECK((frame[4].o)))->F_code), (frame[4].o));
	LINE_NUMBER(431);
	INST_IINC(3, 1);
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(435);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = (jobject)SF_arc_util_Http$HttpStatus_byCode;
	jint temp0 = frame[0].i;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_UNKNOWN_STATUS;
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	popStackFrame(ctx, (jobject) &class_arc_util_Http$HttpStatus);
	return (checkCast(ctx, &class_arc_util_Http$HttpStatus, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Http$HttpStatus_$values_R_Array1_arc_util_Http$HttpStatus(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpStatus:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http$HttpStatus(ctx);
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)createArray(ctx, &class_arc_util_Http$HttpStatus, (66));
	jint temp0 = jint(0);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_UNKNOWN_STATUS;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_CONTINUE;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_SWITCHING_PROTOCOLS;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_PROCESSING;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_EARLY_HINTS;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_OK;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_CREATED;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_ACCEPTED;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_NON_AUTHORITATIVE_INFORMATION;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_NO_CONTENT;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_RESET_CONTENT;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_PARTIAL_CONTENT;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_MULTI_STATUS;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_ALREADY_REPORTED;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_IM_USED;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_MULTIPLE_CHOICES;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_MOVED_PERMANENTLY;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_MOVED_TEMPORARILY;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_SEE_OTHER;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_NOT_MODIFIED;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_USE_PROXY;
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 21;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_SWITCH_PROXY;
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 22;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_TEMPORARY_REDIRECT;
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 23;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_PERMANENT_REDIRECT;
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 24;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_BAD_REQUEST;
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 25;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_UNAUTHORIZED;
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 26;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_PAYMENT_REQUIRED;
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	jint temp27 = 27;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_FORBIDDEN;
	ARRAY_ACCESS(jobject, sp[0].o, temp27) = sp[1].o;
	jint temp28 = 28;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_NOT_FOUND;
	ARRAY_ACCESS(jobject, sp[0].o, temp28) = sp[1].o;
	jint temp29 = 29;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_METHOD_NOT_ALLOWED;
	ARRAY_ACCESS(jobject, sp[0].o, temp29) = sp[1].o;
	jint temp30 = 30;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_NOT_ACCEPTABLE;
	ARRAY_ACCESS(jobject, sp[0].o, temp30) = sp[1].o;
	jint temp31 = 31;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_PROXY_AUTHENTICATION_REQUIRED;
	ARRAY_ACCESS(jobject, sp[0].o, temp31) = sp[1].o;
	jint temp32 = 32;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_REQUEST_TIMEOUT;
	ARRAY_ACCESS(jobject, sp[0].o, temp32) = sp[1].o;
	jint temp33 = 33;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_CONFLICT;
	ARRAY_ACCESS(jobject, sp[0].o, temp33) = sp[1].o;
	jint temp34 = 34;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_GONE;
	ARRAY_ACCESS(jobject, sp[0].o, temp34) = sp[1].o;
	jint temp35 = 35;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_LENGTH_REQUIRED;
	ARRAY_ACCESS(jobject, sp[0].o, temp35) = sp[1].o;
	jint temp36 = 36;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_PRECONDITION_FAILED;
	ARRAY_ACCESS(jobject, sp[0].o, temp36) = sp[1].o;
	jint temp37 = 37;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_REQUEST_TOO_LONG;
	ARRAY_ACCESS(jobject, sp[0].o, temp37) = sp[1].o;
	jint temp38 = 38;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_REQUEST_URI_TOO_LONG;
	ARRAY_ACCESS(jobject, sp[0].o, temp38) = sp[1].o;
	jint temp39 = 39;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_UNSUPPORTED_MEDIA_TYPE;
	ARRAY_ACCESS(jobject, sp[0].o, temp39) = sp[1].o;
	jint temp40 = 40;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_REQUESTED_RANGE_NOT_SATISFIABLE;
	ARRAY_ACCESS(jobject, sp[0].o, temp40) = sp[1].o;
	jint temp41 = 41;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_EXPECTATION_FAILED;
	ARRAY_ACCESS(jobject, sp[0].o, temp41) = sp[1].o;
	jint temp42 = 42;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_IM_A_TEAPOT;
	ARRAY_ACCESS(jobject, sp[0].o, temp42) = sp[1].o;
	jint temp43 = 43;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_INSUFFICIENT_SPACE_ON_RESOURCE;
	ARRAY_ACCESS(jobject, sp[0].o, temp43) = sp[1].o;
	jint temp44 = 44;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_METHOD_FAILURE;
	ARRAY_ACCESS(jobject, sp[0].o, temp44) = sp[1].o;
	jint temp45 = 45;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_MISDIRECTED_REQUEST;
	ARRAY_ACCESS(jobject, sp[0].o, temp45) = sp[1].o;
	jint temp46 = 46;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_UNPROCESSABLE_ENTITY;
	ARRAY_ACCESS(jobject, sp[0].o, temp46) = sp[1].o;
	jint temp47 = 47;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_LOCKED;
	ARRAY_ACCESS(jobject, sp[0].o, temp47) = sp[1].o;
	jint temp48 = 48;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_FAILED_DEPENDENCY;
	ARRAY_ACCESS(jobject, sp[0].o, temp48) = sp[1].o;
	jint temp49 = 49;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_TOO_EARLY;
	ARRAY_ACCESS(jobject, sp[0].o, temp49) = sp[1].o;
	jint temp50 = 50;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_UPGRADE_REQUIRED;
	ARRAY_ACCESS(jobject, sp[0].o, temp50) = sp[1].o;
	jint temp51 = 51;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_PRECONDITION_REQUIRED;
	ARRAY_ACCESS(jobject, sp[0].o, temp51) = sp[1].o;
	jint temp52 = 52;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_TOO_MANY_REQUESTS;
	ARRAY_ACCESS(jobject, sp[0].o, temp52) = sp[1].o;
	jint temp53 = 53;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_REQUEST_HEADER_FIELDS_TOO_LARGE;
	ARRAY_ACCESS(jobject, sp[0].o, temp53) = sp[1].o;
	jint temp54 = 54;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_UNAVAILABLE_FOR_LEGAL_REASONS;
	ARRAY_ACCESS(jobject, sp[0].o, temp54) = sp[1].o;
	jint temp55 = 55;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_INTERNAL_SERVER_ERROR;
	ARRAY_ACCESS(jobject, sp[0].o, temp55) = sp[1].o;
	jint temp56 = 56;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_NOT_IMPLEMENTED;
	ARRAY_ACCESS(jobject, sp[0].o, temp56) = sp[1].o;
	jint temp57 = 57;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_BAD_GATEWAY;
	ARRAY_ACCESS(jobject, sp[0].o, temp57) = sp[1].o;
	jint temp58 = 58;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_SERVICE_UNAVAILABLE;
	ARRAY_ACCESS(jobject, sp[0].o, temp58) = sp[1].o;
	jint temp59 = 59;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_GATEWAY_TIMEOUT;
	ARRAY_ACCESS(jobject, sp[0].o, temp59) = sp[1].o;
	jint temp60 = 60;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_HTTP_VERSION_NOT_SUPPORTED;
	ARRAY_ACCESS(jobject, sp[0].o, temp60) = sp[1].o;
	jint temp61 = 61;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_VARIANT_ALSO_NEGOTIATES;
	ARRAY_ACCESS(jobject, sp[0].o, temp61) = sp[1].o;
	jint temp62 = 62;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_INSUFFICIENT_STORAGE;
	ARRAY_ACCESS(jobject, sp[0].o, temp62) = sp[1].o;
	jint temp63 = 63;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_LOOP_DETECTED;
	ARRAY_ACCESS(jobject, sp[0].o, temp63) = sp[1].o;
	jint temp64 = 64;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_NOT_EXTENDED;
	ARRAY_ACCESS(jobject, sp[0].o, temp64) = sp[1].o;
	jint temp65 = 65;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_NETWORK_AUTHENTICATION_REQUIRED;
	ARRAY_ACCESS(jobject, sp[0].o, temp65) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_Http$HttpStatus(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpStatus:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http$HttpStatus(ctx);
	{
	LINE_NUMBER(342);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UNKNOWN_STATUS"_j))), (jint(0)), (jint(-1)));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_UNKNOWN_STATUS = sp[0].o;
	LINE_NUMBER(345);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CONTINUE"_j))), (jint(1)), (100));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_CONTINUE = sp[0].o;
	LINE_NUMBER(346);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SWITCHING_PROTOCOLS"_j))), (jint(2)), (101));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_SWITCHING_PROTOCOLS = sp[0].o;
	LINE_NUMBER(347);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PROCESSING"_j))), (jint(3)), (102));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_PROCESSING = sp[0].o;
	LINE_NUMBER(348);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"EARLY_HINTS"_j))), (jint(4)), (103));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_EARLY_HINTS = sp[0].o;
	LINE_NUMBER(351);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OK"_j))), (jint(5)), (200));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_OK = sp[0].o;
	LINE_NUMBER(352);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CREATED"_j))), (6), (201));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_CREATED = sp[0].o;
	LINE_NUMBER(353);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ACCEPTED"_j))), (7), (202));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_ACCEPTED = sp[0].o;
	LINE_NUMBER(354);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NON_AUTHORITATIVE_INFORMATION"_j))), (8), (203));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_NON_AUTHORITATIVE_INFORMATION = sp[0].o;
	LINE_NUMBER(355);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NO_CONTENT"_j))), (9), (204));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_NO_CONTENT = sp[0].o;
	LINE_NUMBER(356);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RESET_CONTENT"_j))), (10), (205));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_RESET_CONTENT = sp[0].o;
	LINE_NUMBER(357);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PARTIAL_CONTENT"_j))), (11), (206));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_PARTIAL_CONTENT = sp[0].o;
	LINE_NUMBER(358);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MULTI_STATUS"_j))), (12), (207));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_MULTI_STATUS = sp[0].o;
	LINE_NUMBER(359);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ALREADY_REPORTED"_j))), (13), (208));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_ALREADY_REPORTED = sp[0].o;
	LINE_NUMBER(360);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"IM_USED"_j))), (14), (226));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_IM_USED = sp[0].o;
	LINE_NUMBER(363);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MULTIPLE_CHOICES"_j))), (15), (300));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_MULTIPLE_CHOICES = sp[0].o;
	LINE_NUMBER(364);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MOVED_PERMANENTLY"_j))), (16), (301));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_MOVED_PERMANENTLY = sp[0].o;
	LINE_NUMBER(365);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MOVED_TEMPORARILY"_j))), (17), (302));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_MOVED_TEMPORARILY = sp[0].o;
	LINE_NUMBER(366);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SEE_OTHER"_j))), (18), (303));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_SEE_OTHER = sp[0].o;
	LINE_NUMBER(367);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NOT_MODIFIED"_j))), (19), (304));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_NOT_MODIFIED = sp[0].o;
	LINE_NUMBER(368);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"USE_PROXY"_j))), (20), (305));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_USE_PROXY = sp[0].o;
	LINE_NUMBER(369);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SWITCH_PROXY"_j))), (21), (306));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_SWITCH_PROXY = sp[0].o;
	LINE_NUMBER(370);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TEMPORARY_REDIRECT"_j))), (22), (307));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_TEMPORARY_REDIRECT = sp[0].o;
	LINE_NUMBER(371);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PERMANENT_REDIRECT"_j))), (23), (308));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_PERMANENT_REDIRECT = sp[0].o;
	LINE_NUMBER(374);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BAD_REQUEST"_j))), (24), (400));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_BAD_REQUEST = sp[0].o;
	LINE_NUMBER(375);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UNAUTHORIZED"_j))), (25), (401));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_UNAUTHORIZED = sp[0].o;
	LINE_NUMBER(376);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PAYMENT_REQUIRED"_j))), (26), (402));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_PAYMENT_REQUIRED = sp[0].o;
	LINE_NUMBER(377);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FORBIDDEN"_j))), (27), (403));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_FORBIDDEN = sp[0].o;
	LINE_NUMBER(378);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NOT_FOUND"_j))), (28), (404));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_NOT_FOUND = sp[0].o;
	LINE_NUMBER(379);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"METHOD_NOT_ALLOWED"_j))), (29), (405));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_METHOD_NOT_ALLOWED = sp[0].o;
	LINE_NUMBER(380);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NOT_ACCEPTABLE"_j))), (30), (406));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_NOT_ACCEPTABLE = sp[0].o;
	LINE_NUMBER(381);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PROXY_AUTHENTICATION_REQUIRED"_j))), (31), (407));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_PROXY_AUTHENTICATION_REQUIRED = sp[0].o;
	LINE_NUMBER(382);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"REQUEST_TIMEOUT"_j))), (32), (408));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_REQUEST_TIMEOUT = sp[0].o;
	LINE_NUMBER(383);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CONFLICT"_j))), (33), (409));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_CONFLICT = sp[0].o;
	LINE_NUMBER(384);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GONE"_j))), (34), (410));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_GONE = sp[0].o;
	LINE_NUMBER(385);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LENGTH_REQUIRED"_j))), (35), (411));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_LENGTH_REQUIRED = sp[0].o;
	LINE_NUMBER(386);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PRECONDITION_FAILED"_j))), (36), (412));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_PRECONDITION_FAILED = sp[0].o;
	LINE_NUMBER(387);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"REQUEST_TOO_LONG"_j))), (37), (413));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_REQUEST_TOO_LONG = sp[0].o;
	LINE_NUMBER(388);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"REQUEST_URI_TOO_LONG"_j))), (38), (414));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_REQUEST_URI_TOO_LONG = sp[0].o;
	LINE_NUMBER(389);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UNSUPPORTED_MEDIA_TYPE"_j))), (39), (415));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_UNSUPPORTED_MEDIA_TYPE = sp[0].o;
	LINE_NUMBER(390);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"REQUESTED_RANGE_NOT_SATISFIABLE"_j))), (40), (416));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_REQUESTED_RANGE_NOT_SATISFIABLE = sp[0].o;
	LINE_NUMBER(391);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"EXPECTATION_FAILED"_j))), (41), (417));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_EXPECTATION_FAILED = sp[0].o;
	LINE_NUMBER(392);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"IM_A_TEAPOT"_j))), (42), (418));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_IM_A_TEAPOT = sp[0].o;
	LINE_NUMBER(393);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"INSUFFICIENT_SPACE_ON_RESOURCE"_j))), (43), (419));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_INSUFFICIENT_SPACE_ON_RESOURCE = sp[0].o;
	LINE_NUMBER(394);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"METHOD_FAILURE"_j))), (44), (420));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_METHOD_FAILURE = sp[0].o;
	LINE_NUMBER(395);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MISDIRECTED_REQUEST"_j))), (45), (421));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_MISDIRECTED_REQUEST = sp[0].o;
	LINE_NUMBER(396);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UNPROCESSABLE_ENTITY"_j))), (46), (422));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_UNPROCESSABLE_ENTITY = sp[0].o;
	LINE_NUMBER(397);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LOCKED"_j))), (47), (423));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_LOCKED = sp[0].o;
	LINE_NUMBER(398);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FAILED_DEPENDENCY"_j))), (48), (424));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_FAILED_DEPENDENCY = sp[0].o;
	LINE_NUMBER(399);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TOO_EARLY"_j))), (49), (425));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_TOO_EARLY = sp[0].o;
	LINE_NUMBER(400);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UPGRADE_REQUIRED"_j))), (50), (426));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_UPGRADE_REQUIRED = sp[0].o;
	LINE_NUMBER(401);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PRECONDITION_REQUIRED"_j))), (51), (428));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_PRECONDITION_REQUIRED = sp[0].o;
	LINE_NUMBER(402);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TOO_MANY_REQUESTS"_j))), (52), (429));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_TOO_MANY_REQUESTS = sp[0].o;
	LINE_NUMBER(403);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"REQUEST_HEADER_FIELDS_TOO_LARGE"_j))), (53), (431));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_REQUEST_HEADER_FIELDS_TOO_LARGE = sp[0].o;
	LINE_NUMBER(404);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"UNAVAILABLE_FOR_LEGAL_REASONS"_j))), (54), (451));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_UNAVAILABLE_FOR_LEGAL_REASONS = sp[0].o;
	LINE_NUMBER(407);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"INTERNAL_SERVER_ERROR"_j))), (55), (500));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_INTERNAL_SERVER_ERROR = sp[0].o;
	LINE_NUMBER(408);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NOT_IMPLEMENTED"_j))), (56), (501));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_NOT_IMPLEMENTED = sp[0].o;
	LINE_NUMBER(409);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BAD_GATEWAY"_j))), (57), (502));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_BAD_GATEWAY = sp[0].o;
	LINE_NUMBER(410);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SERVICE_UNAVAILABLE"_j))), (58), (503));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_SERVICE_UNAVAILABLE = sp[0].o;
	LINE_NUMBER(411);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GATEWAY_TIMEOUT"_j))), (59), (504));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_GATEWAY_TIMEOUT = sp[0].o;
	LINE_NUMBER(412);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HTTP_VERSION_NOT_SUPPORTED"_j))), (60), (505));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_HTTP_VERSION_NOT_SUPPORTED = sp[0].o;
	LINE_NUMBER(413);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"VARIANT_ALSO_NEGOTIATES"_j))), (61), (506));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_VARIANT_ALSO_NEGOTIATES = sp[0].o;
	LINE_NUMBER(414);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"INSUFFICIENT_STORAGE"_j))), (62), (507));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_INSUFFICIENT_STORAGE = sp[0].o;
	LINE_NUMBER(415);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LOOP_DETECTED"_j))), (63), (508));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_LOOP_DETECTED = sp[0].o;
	LINE_NUMBER(416);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NOT_EXTENDED"_j))), (64), (510));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_NOT_EXTENDED = sp[0].o;
	LINE_NUMBER(417);
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpStatus);
	init_arc_util_Http$HttpStatus_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NETWORK_AUTHENTICATION_REQUIRED"_j))), (65), (511));
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_NETWORK_AUTHENTICATION_REQUIRED = sp[0].o;
	LINE_NUMBER(341);
	sp[0].o = (jobject)SM_arc_util_Http$HttpStatus_$values_R_Array1_arc_util_Http$HttpStatus(ctx);
	clinit_arc_util_Http$HttpStatus(ctx);
	SF_arc_util_Http$HttpStatus_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Http$HttpStatus[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "UNKNOWN_STATUS", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_UNKNOWN_STATUS, "Larc/util/Http$HttpStatus;", 16409 },
	{ "CONTINUE", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_CONTINUE, "Larc/util/Http$HttpStatus;", 16409 },
	{ "SWITCHING_PROTOCOLS", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_SWITCHING_PROTOCOLS, "Larc/util/Http$HttpStatus;", 16409 },
	{ "PROCESSING", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_PROCESSING, "Larc/util/Http$HttpStatus;", 16409 },
	{ "EARLY_HINTS", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_EARLY_HINTS, "Larc/util/Http$HttpStatus;", 16409 },
	{ "OK", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_OK, "Larc/util/Http$HttpStatus;", 16409 },
	{ "CREATED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_CREATED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "ACCEPTED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_ACCEPTED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "NON_AUTHORITATIVE_INFORMATION", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_NON_AUTHORITATIVE_INFORMATION, "Larc/util/Http$HttpStatus;", 16409 },
	{ "NO_CONTENT", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_NO_CONTENT, "Larc/util/Http$HttpStatus;", 16409 },
	{ "RESET_CONTENT", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_RESET_CONTENT, "Larc/util/Http$HttpStatus;", 16409 },
	{ "PARTIAL_CONTENT", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_PARTIAL_CONTENT, "Larc/util/Http$HttpStatus;", 16409 },
	{ "MULTI_STATUS", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_MULTI_STATUS, "Larc/util/Http$HttpStatus;", 16409 },
	{ "ALREADY_REPORTED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_ALREADY_REPORTED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "IM_USED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_IM_USED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "MULTIPLE_CHOICES", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_MULTIPLE_CHOICES, "Larc/util/Http$HttpStatus;", 16409 },
	{ "MOVED_PERMANENTLY", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_MOVED_PERMANENTLY, "Larc/util/Http$HttpStatus;", 16409 },
	{ "MOVED_TEMPORARILY", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_MOVED_TEMPORARILY, "Larc/util/Http$HttpStatus;", 16409 },
	{ "SEE_OTHER", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_SEE_OTHER, "Larc/util/Http$HttpStatus;", 16409 },
	{ "NOT_MODIFIED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_NOT_MODIFIED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "USE_PROXY", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_USE_PROXY, "Larc/util/Http$HttpStatus;", 16409 },
	{ "SWITCH_PROXY", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_SWITCH_PROXY, "Larc/util/Http$HttpStatus;", 16409 },
	{ "TEMPORARY_REDIRECT", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_TEMPORARY_REDIRECT, "Larc/util/Http$HttpStatus;", 16409 },
	{ "PERMANENT_REDIRECT", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_PERMANENT_REDIRECT, "Larc/util/Http$HttpStatus;", 16409 },
	{ "BAD_REQUEST", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_BAD_REQUEST, "Larc/util/Http$HttpStatus;", 16409 },
	{ "UNAUTHORIZED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_UNAUTHORIZED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "PAYMENT_REQUIRED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_PAYMENT_REQUIRED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "FORBIDDEN", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_FORBIDDEN, "Larc/util/Http$HttpStatus;", 16409 },
	{ "NOT_FOUND", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_NOT_FOUND, "Larc/util/Http$HttpStatus;", 16409 },
	{ "METHOD_NOT_ALLOWED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_METHOD_NOT_ALLOWED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "NOT_ACCEPTABLE", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_NOT_ACCEPTABLE, "Larc/util/Http$HttpStatus;", 16409 },
	{ "PROXY_AUTHENTICATION_REQUIRED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_PROXY_AUTHENTICATION_REQUIRED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "REQUEST_TIMEOUT", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_REQUEST_TIMEOUT, "Larc/util/Http$HttpStatus;", 16409 },
	{ "CONFLICT", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_CONFLICT, "Larc/util/Http$HttpStatus;", 16409 },
	{ "GONE", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_GONE, "Larc/util/Http$HttpStatus;", 16409 },
	{ "LENGTH_REQUIRED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_LENGTH_REQUIRED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "PRECONDITION_FAILED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_PRECONDITION_FAILED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "REQUEST_TOO_LONG", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_REQUEST_TOO_LONG, "Larc/util/Http$HttpStatus;", 16409 },
	{ "REQUEST_URI_TOO_LONG", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_REQUEST_URI_TOO_LONG, "Larc/util/Http$HttpStatus;", 16409 },
	{ "UNSUPPORTED_MEDIA_TYPE", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_UNSUPPORTED_MEDIA_TYPE, "Larc/util/Http$HttpStatus;", 16409 },
	{ "REQUESTED_RANGE_NOT_SATISFIABLE", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_REQUESTED_RANGE_NOT_SATISFIABLE, "Larc/util/Http$HttpStatus;", 16409 },
	{ "EXPECTATION_FAILED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_EXPECTATION_FAILED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "IM_A_TEAPOT", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_IM_A_TEAPOT, "Larc/util/Http$HttpStatus;", 16409 },
	{ "INSUFFICIENT_SPACE_ON_RESOURCE", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_INSUFFICIENT_SPACE_ON_RESOURCE, "Larc/util/Http$HttpStatus;", 16409 },
	{ "METHOD_FAILURE", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_METHOD_FAILURE, "Larc/util/Http$HttpStatus;", 16409 },
	{ "MISDIRECTED_REQUEST", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_MISDIRECTED_REQUEST, "Larc/util/Http$HttpStatus;", 16409 },
	{ "UNPROCESSABLE_ENTITY", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_UNPROCESSABLE_ENTITY, "Larc/util/Http$HttpStatus;", 16409 },
	{ "LOCKED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_LOCKED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "FAILED_DEPENDENCY", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_FAILED_DEPENDENCY, "Larc/util/Http$HttpStatus;", 16409 },
	{ "TOO_EARLY", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_TOO_EARLY, "Larc/util/Http$HttpStatus;", 16409 },
	{ "UPGRADE_REQUIRED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_UPGRADE_REQUIRED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "PRECONDITION_REQUIRED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_PRECONDITION_REQUIRED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "TOO_MANY_REQUESTS", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_TOO_MANY_REQUESTS, "Larc/util/Http$HttpStatus;", 16409 },
	{ "REQUEST_HEADER_FIELDS_TOO_LARGE", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_REQUEST_HEADER_FIELDS_TOO_LARGE, "Larc/util/Http$HttpStatus;", 16409 },
	{ "UNAVAILABLE_FOR_LEGAL_REASONS", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_UNAVAILABLE_FOR_LEGAL_REASONS, "Larc/util/Http$HttpStatus;", 16409 },
	{ "INTERNAL_SERVER_ERROR", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_INTERNAL_SERVER_ERROR, "Larc/util/Http$HttpStatus;", 16409 },
	{ "NOT_IMPLEMENTED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_NOT_IMPLEMENTED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "BAD_GATEWAY", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_BAD_GATEWAY, "Larc/util/Http$HttpStatus;", 16409 },
	{ "SERVICE_UNAVAILABLE", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_SERVICE_UNAVAILABLE, "Larc/util/Http$HttpStatus;", 16409 },
	{ "GATEWAY_TIMEOUT", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_GATEWAY_TIMEOUT, "Larc/util/Http$HttpStatus;", 16409 },
	{ "HTTP_VERSION_NOT_SUPPORTED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_HTTP_VERSION_NOT_SUPPORTED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "VARIANT_ALSO_NEGOTIATES", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_VARIANT_ALSO_NEGOTIATES, "Larc/util/Http$HttpStatus;", 16409 },
	{ "INSUFFICIENT_STORAGE", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_INSUFFICIENT_STORAGE, "Larc/util/Http$HttpStatus;", 16409 },
	{ "LOOP_DETECTED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_LOOP_DETECTED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "NOT_EXTENDED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_NOT_EXTENDED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "NETWORK_AUTHENTICATION_REQUIRED", &class_arc_util_Http$HttpStatus, (intptr_t) &SF_arc_util_Http$HttpStatus_NETWORK_AUTHENTICATION_REQUIRED, "Larc/util/Http$HttpStatus;", 16409 },
	{ "byCode", &class_arc_struct_IntMap, (intptr_t) &SF_arc_util_Http$HttpStatus_byCode, "Larc/struct/IntMap;", 10 },
	{ "code", &class_int, offsetof(arc_util_Http$HttpStatus, F_code), "I", 17 },
	{ "$VALUES", getArrayClass(&class_arc_util_Http$HttpStatus, 1), (intptr_t) &SF_arc_util_Http$HttpStatus_$VALUES, "[Larc/util/Http$HttpStatus;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_util_Http$HttpStatus_values_R_Array1_arc_util_Http$HttpStatus, 0, "()[Larc/util/Http$HttpStatus;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_Http$HttpStatus_valueOf_java_lang_String_R_arc_util_Http$HttpStatus, 0, "(Ljava/lang/String;)Larc/util/Http$HttpStatus;", 9 },
	{ "<init>", (intptr_t) init_arc_util_Http$HttpStatus_java_lang_String_int_int, 0, "(Ljava/lang/String;II)V", 2 },
	{ "byCode", (intptr_t) SM_arc_util_Http$HttpStatus_byCode_int_R_arc_util_Http$HttpStatus, 0, "(I)Larc/util/Http$HttpStatus;", 41 },
	{ "$values", (intptr_t) SM_arc_util_Http$HttpStatus_$values_R_Array1_arc_util_Http$HttpStatus, 0, "()[Larc/util/Http$HttpStatus;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_util_Http$HttpStatus, 0, "()V", 8 },
};

Class class_arc_util_Http$HttpStatus{
		.nativeName = (intptr_t) "arc/util/Http$HttpStatus",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_util_Http$HttpStatus),
		.classVtable = (intptr_t) vtable_arc_util_Http$HttpStatus,
		.staticInitializer = (intptr_t) clinit_arc_util_Http$HttpStatus,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Http$HttpStatus,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_Http,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 69,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Http$HttpStatus = registerClass(&class_arc_util_Http$HttpStatus);

}

