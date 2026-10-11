#include "arc/util/Java16Buffers.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"

extern "C" {


void mark_arc_util_Java16Buffers(jobject object, jint mark, jint depth) {
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
	auto self = (arc_util_Java16Buffers *) object;
}

void clinit_arc_util_Java16Buffers(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_Java16Buffers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Java16Buffers:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Java16Buffers(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Java16Buffers_copy_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int(jcontext ctx, jobject param0, jint param1, jobject param2, jint param3, jint param4) {
	if (!param0 || !param2 || param4 <= 0) return;
	auto srcBuf = (java_nio_ByteBuffer*)param0;
	auto dstBuf = (java_nio_ByteBuffer*)param2;
	
	char* srcPtr = nullptr;
	if (srcBuf->parent.F_address) {
		srcPtr = (char*)srcBuf->parent.F_address + param1;
	} else if (srcBuf->F_array) {
		srcPtr = (char*)((jarray)srcBuf->F_array)->data + param1;
	}
	
	char* dstPtr = nullptr;
	if (dstBuf->parent.F_address) {
		dstPtr = (char*)dstBuf->parent.F_address + param3;
	} else if (dstBuf->F_array) {
		dstPtr = (char*)((jarray)dstBuf->F_array)->data + param3;
	}
	
	if (srcPtr && dstPtr) {
		memmove(dstPtr, srcPtr, param4);
	}
}

}
