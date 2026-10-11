#include "arc/fx/filters/MultipassVfxFilter.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/fx/util/PingPongBuffer.h"
#include "arc/fx/filters/MultipassVfxFilter.h"

extern "C" {


void mark_arc_fx_filters_MultipassVfxFilter(jobject object, jint mark, jint depth) {
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
	auto self = (arc_fx_filters_MultipassVfxFilter *) object;
}

void clinit_arc_fx_filters_MultipassVfxFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_fx_filters_MultipassVfxFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/MultipassVfxFilter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_fx_filters_MultipassVfxFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_fx_filters_MultipassVfxFilter_resize_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/fx/filters/MultipassVfxFilter:resize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	LINE_NUMBER(17);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_fx_filters_MultipassVfxFilter[] {
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
	(void *) nullptr,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_fx_filters_MultipassVfxFilter_resize_int_int,
	(void *) nullptr,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "resize", "(II)V" },
	{ "setParams", "()V" },
	{ "render", "(Larc/fx/util/PingPongBuffer;)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_fx_filters_MultipassVfxFilter, 0, "()V", 1 },
	{ "resize", (intptr_t) M_arc_fx_filters_MultipassVfxFilter_resize_int_int, VTABLE_arc_fx_filters_MultipassVfxFilter_resize_int_int, "(II)V", 1 },
	{ "setParams", 0, VTABLE_arc_fx_filters_MultipassVfxFilter_setParams, "()V", 1025 },
	{ "render", 0, VTABLE_arc_fx_filters_MultipassVfxFilter_render_arc_fx_util_PingPongBuffer, "(Larc/fx/util/PingPongBuffer;)V", 1025 },
};

Class class_arc_fx_filters_MultipassVfxFilter{
		.nativeName = (intptr_t) "arc/fx/filters/MultipassVfxFilter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_fx_filters_MultipassVfxFilter),
		.classVtable = (intptr_t) vtable_arc_fx_filters_MultipassVfxFilter,
		.staticInitializer = (intptr_t) clinit_arc_fx_filters_MultipassVfxFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_fx_filters_MultipassVfxFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_fx_filters_MultipassVfxFilter = registerClass(&class_arc_fx_filters_MultipassVfxFilter);

}
