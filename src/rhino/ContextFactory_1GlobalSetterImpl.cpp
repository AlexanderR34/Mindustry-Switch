#include "rhino/ContextFactory_1GlobalSetterImpl.h"
#include "java/lang/Object.h"
#include "rhino/ContextFactory_GlobalSetter.h"
#include "rhino/ContextFactory_1GlobalSetterImpl.h"
#include "rhino/ContextFactory.h"

extern "C" {


void mark_rhino_ContextFactory$1GlobalSetterImpl(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_ContextFactory$1GlobalSetterImpl *) object;
}

void clinit_rhino_ContextFactory$1GlobalSetterImpl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ContextFactory$1GlobalSetterImpl(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory$1GlobalSetterImpl:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ContextFactory$1GlobalSetterImpl(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(176);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ContextFactory$1GlobalSetterImpl_setContextFactoryGlobal_rhino_ContextFactory(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory$1GlobalSetterImpl:setContextFactoryGlobal", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(179);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_rhino_ContextFactory(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_ContextFactory);
	init_rhino_ContextFactory(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(1);
label_2:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_rhino_ContextFactory_access$002_rhino_ContextFactory_R_rhino_ContextFactory(ctx, sp[0].o);
	LINE_NUMBER(180);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ContextFactory$1GlobalSetterImpl_getContextFactoryGlobal_R_rhino_ContextFactory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ContextFactory$1GlobalSetterImpl:getContextFactoryGlobal", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)SM_rhino_ContextFactory_access$000_R_rhino_ContextFactory(ctx);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ContextFactory$1GlobalSetterImpl[] {
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
	(void *) M_rhino_ContextFactory$1GlobalSetterImpl_setContextFactoryGlobal_rhino_ContextFactory,
	(void *) M_rhino_ContextFactory$1GlobalSetterImpl_getContextFactoryGlobal_R_rhino_ContextFactory,
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
	{ "setContextFactoryGlobal", "(Lrhino/ContextFactory;)V" },
	{ "getContextFactoryGlobal", "()Lrhino/ContextFactory;" },
};

static jclass interfaces[] { &class_rhino_ContextFactory$GlobalSetter, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ContextFactory$1GlobalSetterImpl, 0, "()V", 0 },
	{ "setContextFactoryGlobal", (intptr_t) M_rhino_ContextFactory$1GlobalSetterImpl_setContextFactoryGlobal_rhino_ContextFactory, VTABLE_rhino_ContextFactory$1GlobalSetterImpl_setContextFactoryGlobal_rhino_ContextFactory, "(Lrhino/ContextFactory;)V", 1 },
	{ "getContextFactoryGlobal", (intptr_t) M_rhino_ContextFactory$1GlobalSetterImpl_getContextFactoryGlobal_R_rhino_ContextFactory, VTABLE_rhino_ContextFactory$1GlobalSetterImpl_getContextFactoryGlobal_R_rhino_ContextFactory, "()Lrhino/ContextFactory;", 1 },
};

Class class_rhino_ContextFactory$1GlobalSetterImpl{
		.nativeName = (intptr_t) "rhino/ContextFactory$1GlobalSetterImpl",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ContextFactory$1GlobalSetterImpl),
		.classVtable = (intptr_t) vtable_rhino_ContextFactory$1GlobalSetterImpl,
		.staticInitializer = (intptr_t) clinit_rhino_ContextFactory$1GlobalSetterImpl,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ContextFactory$1GlobalSetterImpl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ContextFactory$1GlobalSetterImpl = registerClass(&class_rhino_ContextFactory$1GlobalSetterImpl);

}

