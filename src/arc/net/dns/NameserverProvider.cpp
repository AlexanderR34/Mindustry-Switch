#include "arc/net/dns/NameserverProvider.h"
#include "java/lang/Object.h"
#include "arc/net/dns/NameserverProvider.h"
#include "arc/struct/Seq.h"

extern "C" {


void mark_arc_net_dns_NameserverProvider(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_dns_NameserverProvider *) object;
}

void clinit_arc_net_dns_NameserverProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_arc_net_dns_NameserverProvider_isEnabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/NameserverProvider:isEnabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_arc_net_dns_NameserverProvider[] {
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
	(void *) M_arc_net_dns_NameserverProvider_isEnabled_R_boolean,
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

static MethodMetadata methods[] {
	{ "getNameservers", 0, INDEX_arc_net_dns_NameserverProvider_getNameservers_R_arc_struct_Seq, "()Larc/struct/Seq;", 1025 },
	{ "isEnabled", (intptr_t) M_arc_net_dns_NameserverProvider_isEnabled_R_boolean, INDEX_arc_net_dns_NameserverProvider_isEnabled_R_boolean, "()Z", 1 },
};

Class class_arc_net_dns_NameserverProvider{
		.nativeName = (intptr_t) "arc/net/dns/NameserverProvider",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_dns_NameserverProvider),
		.classVtable = (intptr_t) vtable_arc_net_dns_NameserverProvider,
		.staticInitializer = (intptr_t) clinit_arc_net_dns_NameserverProvider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_dns_NameserverProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_dns_NameserverProvider = registerClass(&class_arc_net_dns_NameserverProvider);

}
