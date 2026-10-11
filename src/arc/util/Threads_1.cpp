#include "arc/util/Threads_1.h"
#include "arc/func/Prov.h"
#include "java/lang/Object.h"
#include "java/lang/ThreadLocal.h"
#include "arc/util/Threads_1.h"

extern "C" {


void mark_arc_util_Threads$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_ThreadLocal(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_util_Threads$1 *) object;
	if (self->F_val$prov)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$prov)->clazz)->markFunction)((jobject) self->F_val$prov, mark, depth + 1);
}

void clinit_arc_util_Threads$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_ThreadLocal(ctx);
}

void init_arc_util_Threads$1_arc_func_Prov(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Threads$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	((arc_util_Threads$1 *) NULL_CHECK((frame[0].o)))->F_val$prov = (jref) (frame[1].o);
	init_java_lang_ThreadLocal(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_util_Threads$1_initialValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Threads$1:initialValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((arc_util_Threads$1 *) NULL_CHECK((frame[0].o)))->F_val$prov;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Threads$1[] {
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
	(void *) M_arc_util_Threads$1_initialValue_R_java_lang_Object,
	(void *) M_java_lang_ThreadLocal_get_R_java_lang_Object,
	(void *) M_java_lang_ThreadLocal_set_java_lang_Object,
	(void *) M_java_lang_ThreadLocal_remove,
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
	{ "initialValue", "()Ljava/lang/Object;" },
	{ "get", "()Ljava/lang/Object;" },
	{ "set", "(Ljava/lang/Object;)V" },
	{ "remove", "()V" },
};

static FieldMetadata fields[] {
	{ "val$prov", &class_arc_func_Prov, offsetof(arc_util_Threads$1, F_val$prov), "Larc/func/Prov;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Threads$1_arc_func_Prov, 0, "(Larc/func/Prov;)V", 0 },
	{ "initialValue", (intptr_t) M_arc_util_Threads$1_initialValue_R_java_lang_Object, VTABLE_arc_util_Threads$1_initialValue_R_java_lang_Object, "()Ljava/lang/Object;", 4 },
};

Class class_arc_util_Threads$1{
		.nativeName = (intptr_t) "arc/util/Threads$1",
		.parentClass = (intptr_t) &class_java_lang_ThreadLocal,
		.size = sizeof(arc_util_Threads$1),
		.classVtable = (intptr_t) vtable_arc_util_Threads$1,
		.staticInitializer = (intptr_t) clinit_arc_util_Threads$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Threads$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_util_Threads$1 = registerClass(&class_arc_util_Threads$1);

}

