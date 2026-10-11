#include "arc/util/UnsafeBuffers.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "arc/util/UnsafeBuffers.h"
#include "java/nio/Buffer.h"
#include "sun/misc/Unsafe.h"
#include "java/lang/reflect/Method.h"
#include "java/lang/Class.h"
#include "java/lang/Long.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_arc_util_UnsafeBuffers_unsafe;
jlong SF_arc_util_UnsafeBuffers_bufferOffset;
jbool SF_arc_util_UnsafeBuffers_failed;
jbool SF_arc_util_UnsafeBuffers_initialized;

void mark_arc_util_UnsafeBuffers(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_UnsafeBuffers_unsafe)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_UnsafeBuffers_unsafe)->clazz)->markFunction)((jobject) SF_arc_util_UnsafeBuffers_unsafe, mark, depth + 1);
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
	auto self = (arc_util_UnsafeBuffers *) object;
}

void clinit_arc_util_UnsafeBuffers(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_util_UnsafeBuffers(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/UnsafeBuffers:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_UnsafeBuffers(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_UnsafeBuffers_checkInit(jcontext ctx) {
}

}
