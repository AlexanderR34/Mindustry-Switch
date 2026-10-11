#include "mindustry/mod/ModClassLoader_1.h"
#include "java/lang/Object.h"
#include "mindustry/mod/ModClassLoader.h"
#include "java/lang/Boolean.h"
#include "java/lang/ThreadLocal.h"
#include "mindustry/mod/ModClassLoader_1.h"

extern "C" {


void mark_mindustry_mod_ModClassLoader$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_ModClassLoader$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_mod_ModClassLoader$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_ThreadLocal(ctx);
}

void init_mindustry_mod_ModClassLoader$1_mindustry_mod_ModClassLoader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ModClassLoader$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ModClassLoader$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	((mindustry_mod_ModClassLoader$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_ThreadLocal(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ModClassLoader$1:initialValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(18);
	clinit_java_lang_Boolean(ctx);
	sp[0].o = (jobject)SF_java_lang_Boolean_FALSE;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ModClassLoader$1:initialValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)((func_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_ModClassLoader$1[] {
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
	(void *) M_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Object,
	(void *) M_java_lang_ThreadLocal_get_R_java_lang_Object,
	(void *) M_java_lang_ThreadLocal_set_java_lang_Object,
	(void *) M_java_lang_ThreadLocal_remove,
	(void *) M_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Boolean,
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
	{ "initialValue", "()Ljava/lang/Boolean;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_mod_ModClassLoader, offsetof(mindustry_mod_ModClassLoader$1, F_this$0), "Lmindustry/mod/ModClassLoader;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_ModClassLoader$1_mindustry_mod_ModClassLoader, 0, "(Lmindustry/mod/ModClassLoader;)V", 0 },
	{ "initialValue", (intptr_t) M_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Boolean, VTABLE_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Boolean, "()Ljava/lang/Boolean;", 4 },
	{ "initialValue", (intptr_t) M_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Object, VTABLE_mindustry_mod_ModClassLoader$1_initialValue_R_java_lang_Object, "()Ljava/lang/Object;", 4164 },
};

Class class_mindustry_mod_ModClassLoader$1{
		.nativeName = (intptr_t) "mindustry/mod/ModClassLoader$1",
		.parentClass = (intptr_t) &class_java_lang_ThreadLocal,
		.size = sizeof(mindustry_mod_ModClassLoader$1),
		.classVtable = (intptr_t) vtable_mindustry_mod_ModClassLoader$1,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_ModClassLoader$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_ModClassLoader$1,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_mod_ModClassLoader$1 = registerClass(&class_mindustry_mod_ModClassLoader$1);

}

