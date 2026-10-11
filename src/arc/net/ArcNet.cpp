#include "arc/net/ArcNet.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/net/ArcNet.h"
#include "arc/net/ArcNet_invoke_arc_func_Cons_0.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_arc_net_ArcNet_errorHandler;

void mark_arc_net_ArcNet(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_net_ArcNet_errorHandler)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_net_ArcNet_errorHandler)->clazz)->markFunction)((jobject) SF_arc_net_ArcNet_errorHandler, mark, depth + 1);
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
	auto self = (arc_net_ArcNet *) object;
}

void init_arc_net_ArcNet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/ArcNet:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_ArcNet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_net_ArcNet_handleError_java_lang_Throwable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/ArcNet:handleError", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_ArcNet(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(9);
	clinit_arc_net_ArcNet(ctx);
	sp[0].o = (jobject)SF_arc_net_ArcNet_errorHandler;
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_net_ArcNet_lambda$static$0_java_lang_Throwable(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/ArcNet:lambda$static$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_ArcNet(ctx);
	frame[0].o = param0;
	LINE_NUMBER(6);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_arc_net_ArcNet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/ArcNet:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_ArcNet(ctx);
	{
	LINE_NUMBER(6);
	{ /* InvokeDynamic */
		clinit_arc_net_ArcNet_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_net_ArcNet_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_net_ArcNet_invoke_arc_func_Cons_0);
		sp[0].o = (jobject) proxy;
	}
	clinit_arc_net_ArcNet(ctx);
	SF_arc_net_ArcNet_errorHandler = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_net_ArcNet[] {
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

static FieldMetadata fields[] {
	{ "errorHandler", &class_arc_func_Cons, (intptr_t) &SF_arc_net_ArcNet_errorHandler, "Larc/func/Cons;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_net_ArcNet, 0, "()V", 1 },
	{ "handleError", (intptr_t) SM_arc_net_ArcNet_handleError_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 9 },
	{ "lambda$static$0", (intptr_t) SM_arc_net_ArcNet_lambda$static$0_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_net_ArcNet, 0, "()V", 8 },
};

Class class_arc_net_ArcNet{
		.nativeName = (intptr_t) "arc/net/ArcNet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_ArcNet),
		.classVtable = (intptr_t) vtable_arc_net_ArcNet,
		.staticInitializer = (intptr_t) clinit_arc_net_ArcNet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_ArcNet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_ArcNet = registerClass(&class_arc_net_ArcNet);

}
