#include "rhino/module/provider/DefaultUrlConnectionExpiryCalculator.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/module/provider/UrlConnectionExpiryCalculator.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/net/URLConnection.h"
#include "rhino/module/provider/DefaultUrlConnectionExpiryCalculator.h"
#include "java/lang/System.h"

extern "C" {


void mark_rhino_module_provider_DefaultUrlConnectionExpiryCalculator(jobject object, jint mark, jint depth) {
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
	auto self = (rhino_module_provider_DefaultUrlConnectionExpiryCalculator *) object;
}

void clinit_rhino_module_provider_DefaultUrlConnectionExpiryCalculator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_module_provider_DefaultUrlConnectionExpiryCalculator(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/DefaultUrlConnectionExpiryCalculator:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_DefaultUrlConnectionExpiryCalculator(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_rhino_module_provider_DefaultUrlConnectionExpiryCalculator_long(ctx, (frame[0].o), (jlong(60000ll)));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_rhino_module_provider_DefaultUrlConnectionExpiryCalculator_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/DefaultUrlConnectionExpiryCalculator:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_module_provider_DefaultUrlConnectionExpiryCalculator(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(28);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	if ((longCompare((frame[1].l), (jlong(0)))) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(30);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"relativeExpiry < 0"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(32);
	((rhino_module_provider_DefaultUrlConnectionExpiryCalculator *) NULL_CHECK((frame[0].o)))->F_relativeExpiry = (frame[1].l);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jlong M_rhino_module_provider_DefaultUrlConnectionExpiryCalculator_calculateExpiry_java_net_URLConnection_R_long(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/module/provider/DefaultUrlConnectionExpiryCalculator:calculateExpiry", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	popStackFrame(ctx);
	return (temp0 + ((jlong)((rhino_module_provider_DefaultUrlConnectionExpiryCalculator *) NULL_CHECK((frame[0].o)))->F_relativeExpiry));
	}

	popStackFrame(ctx);
}

void *vtable_rhino_module_provider_DefaultUrlConnectionExpiryCalculator[] {
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
	(void *) M_rhino_module_provider_DefaultUrlConnectionExpiryCalculator_calculateExpiry_java_net_URLConnection_R_long,
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
	{ "calculateExpiry", "(Ljava/net/URLConnection;)J" },
};

static jclass interfaces[] { &class_rhino_module_provider_UrlConnectionExpiryCalculator, };

static FieldMetadata fields[] {
	{ "relativeExpiry", &class_long, offsetof(rhino_module_provider_DefaultUrlConnectionExpiryCalculator, F_relativeExpiry), "J", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_module_provider_DefaultUrlConnectionExpiryCalculator, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_rhino_module_provider_DefaultUrlConnectionExpiryCalculator_long, 0, "(J)V", 1 },
	{ "calculateExpiry", (intptr_t) M_rhino_module_provider_DefaultUrlConnectionExpiryCalculator_calculateExpiry_java_net_URLConnection_R_long, VTABLE_rhino_module_provider_DefaultUrlConnectionExpiryCalculator_calculateExpiry_java_net_URLConnection_R_long, "(Ljava/net/URLConnection;)J", 1 },
};

Class class_rhino_module_provider_DefaultUrlConnectionExpiryCalculator{
		.nativeName = (intptr_t) "rhino/module/provider/DefaultUrlConnectionExpiryCalculator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_module_provider_DefaultUrlConnectionExpiryCalculator),
		.classVtable = (intptr_t) vtable_rhino_module_provider_DefaultUrlConnectionExpiryCalculator,
		.staticInitializer = (intptr_t) clinit_rhino_module_provider_DefaultUrlConnectionExpiryCalculator,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_module_provider_DefaultUrlConnectionExpiryCalculator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_module_provider_DefaultUrlConnectionExpiryCalculator = registerClass(&class_rhino_module_provider_DefaultUrlConnectionExpiryCalculator);

}
