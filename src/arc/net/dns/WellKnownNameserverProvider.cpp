#include "arc/net/dns/WellKnownNameserverProvider.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/net/dns/NameserverProvider.h"
#include "arc/struct/Seq.h"
#include "java/net/InetSocketAddress.h"
#include "arc/net/dns/WellKnownNameserverProvider.h"

extern "C" {


void mark_arc_net_dns_WellKnownNameserverProvider(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_dns_WellKnownNameserverProvider *) object;
	if (self->F_nameservers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nameservers)->clazz)->markFunction)((jobject) self->F_nameservers, mark, depth + 1);
}

void clinit_arc_net_dns_WellKnownNameserverProvider(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_dns_WellKnownNameserverProvider(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/WellKnownNameserverProvider:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_dns_WellKnownNameserverProvider(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_net_InetSocketAddress, (jint(2)));
	jint temp0 = jint(0);
	clinit_java_net_InetSocketAddress(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_net_InetSocketAddress);
	init_java_net_InetSocketAddress_java_lang_String_int(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"1.1.1.1"_j))), (53));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_java_net_InetSocketAddress(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_net_InetSocketAddress);
	init_java_net_InetSocketAddress_java_lang_String_int(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"8.8.8.8"_j))), (53));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	((arc_net_dns_WellKnownNameserverProvider *) NULL_CHECK(sp[0].o))->F_nameservers = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_net_dns_WellKnownNameserverProvider_getNameservers_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/WellKnownNameserverProvider:getNameservers", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)((arc_net_dns_WellKnownNameserverProvider *) NULL_CHECK((frame[0].o)))->F_nameservers;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_net_dns_WellKnownNameserverProvider[] {
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
	(void *) M_arc_net_dns_WellKnownNameserverProvider_getNameservers_R_arc_struct_Seq,
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

static jclass interfaces[] { &class_arc_net_dns_NameserverProvider, };

static FieldMetadata fields[] {
	{ "nameservers", &class_arc_struct_Seq, offsetof(arc_net_dns_WellKnownNameserverProvider, F_nameservers), "Larc/struct/Seq;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_net_dns_WellKnownNameserverProvider, 0, "()V", 1 },
	{ "getNameservers", (intptr_t) M_arc_net_dns_WellKnownNameserverProvider_getNameservers_R_arc_struct_Seq, VTABLE_arc_net_dns_WellKnownNameserverProvider_getNameservers_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
};

Class class_arc_net_dns_WellKnownNameserverProvider{
		.nativeName = (intptr_t) "arc/net/dns/WellKnownNameserverProvider",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_dns_WellKnownNameserverProvider),
		.classVtable = (intptr_t) vtable_arc_net_dns_WellKnownNameserverProvider,
		.staticInitializer = (intptr_t) clinit_arc_net_dns_WellKnownNameserverProvider,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_dns_WellKnownNameserverProvider,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_dns_WellKnownNameserverProvider = registerClass(&class_arc_net_dns_WellKnownNameserverProvider);

}
