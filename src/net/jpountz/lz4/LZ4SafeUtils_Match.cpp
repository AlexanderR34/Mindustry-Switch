#include "net/jpountz/lz4/LZ4SafeUtils_Match.h"
#include "net/jpountz/lz4/LZ4SafeUtils_Match.h"
#include "java/lang/Object.h"
#include "net/jpountz/lz4/LZ4SafeUtils.h"

extern "C" {


void mark_net_jpountz_lz4_LZ4SafeUtils$Match(jobject object, jint mark, jint depth) {
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
	auto self = (net_jpountz_lz4_LZ4SafeUtils$Match *) object;
}

void clinit_net_jpountz_lz4_LZ4SafeUtils$Match(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_net_jpountz_lz4_LZ4SafeUtils$Match(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils$Match:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_net_jpountz_lz4_LZ4SafeUtils$Match(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(165);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_net_jpountz_lz4_LZ4SafeUtils$Match_fix_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils$Match:fix", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK(sp[0].o))->F_start = (((jint)((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK(sp[0].o))->F_start) + (frame[1].i));
	LINE_NUMBER(170);
	sp[0].o = frame[0].o;
	((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK(sp[0].o))->F_ref = (((jint)((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK(sp[0].o))->F_ref) + (frame[1].i));
	LINE_NUMBER(171);
	sp[0].o = frame[0].o;
	((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK(sp[0].o))->F_len = (((jint)((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK(sp[0].o))->F_len) - (frame[1].i));
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_net_jpountz_lz4_LZ4SafeUtils$Match_end_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "net/jpountz/lz4/LZ4SafeUtils$Match:end", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return (((jint)((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK((frame[0].o)))->F_start) + ((jint)((net_jpountz_lz4_LZ4SafeUtils$Match *) NULL_CHECK((frame[0].o)))->F_len));
	}

	popStackFrame(ctx);
}

void *vtable_net_jpountz_lz4_LZ4SafeUtils$Match[] {
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
	(void *) M_net_jpountz_lz4_LZ4SafeUtils$Match_fix_int,
	(void *) M_net_jpountz_lz4_LZ4SafeUtils$Match_end_R_int,
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
	{ "fix", "(I)V" },
	{ "end", "()I" },
};

static FieldMetadata fields[] {
	{ "start", &class_int, offsetof(net_jpountz_lz4_LZ4SafeUtils$Match, F_start), "I", 0 },
	{ "ref", &class_int, offsetof(net_jpountz_lz4_LZ4SafeUtils$Match, F_ref), "I", 0 },
	{ "len", &class_int, offsetof(net_jpountz_lz4_LZ4SafeUtils$Match, F_len), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_net_jpountz_lz4_LZ4SafeUtils$Match, 0, "()V", 0 },
	{ "fix", (intptr_t) M_net_jpountz_lz4_LZ4SafeUtils$Match_fix_int, VTABLE_net_jpountz_lz4_LZ4SafeUtils$Match_fix_int, "(I)V", 0 },
	{ "end", (intptr_t) M_net_jpountz_lz4_LZ4SafeUtils$Match_end_R_int, VTABLE_net_jpountz_lz4_LZ4SafeUtils$Match_end_R_int, "()I", 0 },
};

Class class_net_jpountz_lz4_LZ4SafeUtils$Match{
		.nativeName = (intptr_t) "net/jpountz/lz4/LZ4SafeUtils$Match",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(net_jpountz_lz4_LZ4SafeUtils$Match),
		.classVtable = (intptr_t) vtable_net_jpountz_lz4_LZ4SafeUtils$Match,
		.staticInitializer = (intptr_t) clinit_net_jpountz_lz4_LZ4SafeUtils$Match,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_net_jpountz_lz4_LZ4SafeUtils$Match,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_net_jpountz_lz4_LZ4SafeUtils,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_net_jpountz_lz4_LZ4SafeUtils$Match = registerClass(&class_net_jpountz_lz4_LZ4SafeUtils$Match);

}

