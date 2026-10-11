#include "mindustry/core/Platform_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/net/URL.h"
#include "java/lang/ClassNotFoundException.h"
#include "mindustry/core/Platform.h"
#include "java/net/URLClassLoader.h"
#include "mindustry/core/Platform_1.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/lang/ClassLoader.h"

extern "C" {


void mark_mindustry_core_Platform$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_net_URLClassLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_core_Platform$1 *) object;
	if (self->F_val$parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$parent)->clazz)->markFunction)((jobject) self->F_val$parent, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void init_mindustry_core_Platform$1_mindustry_core_Platform_Array1_java_net_URL_java_lang_ClassLoader_java_lang_ClassLoader(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/core/Platform$1:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_core_Platform$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(21);
	((mindustry_core_Platform$1 *) NULL_CHECK((frame[0].o)))->F_val$parent = (jref) (frame[4].o);
	((mindustry_core_Platform$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_net_URLClassLoader_Array1_java_net_URL_java_lang_ClassLoader(ctx, (frame[0].o), (frame[2].o), (frame[3].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_core_Platform$1_loadClass_java_lang_String_boolean_R_java_lang_Class(jcontext ctx, jobject self, jobject param0, jbool param1) {
	return nullptr;
}

}
