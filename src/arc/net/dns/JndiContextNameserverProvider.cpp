#include "arc/net/dns/JndiContextNameserverProvider.h"
#include "arc/net/dns/JndiContextNameserverProvider.h"
#include "java/lang/Object.h"
#include "arc/net/dns/NameserverProvider.h"
#include "arc/struct/Seq.h"
#include "arc/util/OS.h"
#include "java/lang/Throwable.h"
#include "arc/net/dns/JndiContextNameserverProvider_Inner.h"

extern "C" {


void mark_arc_net_dns_JndiContextNameserverProvider(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_dns_JndiContextNameserverProvider *) object;
}

void clinit_arc_net_dns_JndiContextNameserverProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_dns_JndiContextNameserverProvider(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/JndiContextNameserverProvider:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_dns_JndiContextNameserverProvider(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_net_dns_JndiContextNameserverProvider_getNameservers_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/JndiContextNameserverProvider:getNameservers", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(26);
	clinit_arc_net_dns_JndiContextNameserverProvider$Inner(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_net_dns_JndiContextNameserverProvider$Inner);
	init_arc_net_dns_JndiContextNameserverProvider$Inner(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_net_dns_JndiContextNameserverProvider$Inner_getNameservers_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_net_dns_JndiContextNameserverProvider$Inner_getNameservers_R_arc_struct_Seq])(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(27);
	frame[1].o = sp[0].o;
	LINE_NUMBER(28);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_arc_net_dns_JndiContextNameserverProvider_isEnabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/JndiContextNameserverProvider:isEnabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	if ((clinit_arc_util_OS(ctx), (jint)SF_arc_util_OS_isAndroid) != 0) goto label_1;
	}
	clinit_arc_util_OS(ctx);
	(sp++)->i = SF_arc_util_OS_isIos;
	if ((--sp)->i != 0) goto label_1;
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void *vtable_arc_net_dns_JndiContextNameserverProvider[] {
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
	(void *) M_arc_net_dns_JndiContextNameserverProvider_getNameservers_R_arc_struct_Seq,
	(void *) M_arc_net_dns_JndiContextNameserverProvider_isEnabled_R_boolean,
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
	{ "getNameservers", "()Larc/struct/Seq;" },
	{ "isEnabled", "()Z" },
};

static jclass interfaces[] { &class_arc_net_dns_NameserverProvider, };

static jclass innerClasses[] {
	&class_arc_net_dns_JndiContextNameserverProvider$Inner,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_net_dns_JndiContextNameserverProvider, 0, "()V", 1 },
	{ "getNameservers", (intptr_t) M_arc_net_dns_JndiContextNameserverProvider_getNameservers_R_arc_struct_Seq, VTABLE_arc_net_dns_JndiContextNameserverProvider_getNameservers_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "isEnabled", (intptr_t) M_arc_net_dns_JndiContextNameserverProvider_isEnabled_R_boolean, VTABLE_arc_net_dns_JndiContextNameserverProvider_isEnabled_R_boolean, "()Z", 1 },
};

Class class_arc_net_dns_JndiContextNameserverProvider{
		.nativeName = (intptr_t) "arc/net/dns/JndiContextNameserverProvider",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_dns_JndiContextNameserverProvider),
		.classVtable = (intptr_t) vtable_arc_net_dns_JndiContextNameserverProvider,
		.staticInitializer = (intptr_t) clinit_arc_net_dns_JndiContextNameserverProvider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_dns_JndiContextNameserverProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
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
static bool registered_arc_net_dns_JndiContextNameserverProvider = registerClass(&class_arc_net_dns_JndiContextNameserverProvider);

}
