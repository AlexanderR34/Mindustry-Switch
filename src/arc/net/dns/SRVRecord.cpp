#include "arc/net/dns/SRVRecord.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "arc/net/dns/SRVRecord.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"

extern "C" {


void mark_arc_net_dns_SRVRecord(jobject object, jint mark, jint depth) {
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
	auto self = (arc_net_dns_SRVRecord *) object;
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
}

void clinit_arc_net_dns_SRVRecord(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_net_dns_SRVRecord_long_int_int_int_java_lang_String(jcontext ctx, jobject self, jlong param0, jint param1, jint param2, jint param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/SRVRecord:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_net_dns_SRVRecord(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	frame[4].i = param2;
	frame[5].i = param3;
	frame[6].o = param4;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((arc_net_dns_SRVRecord *) NULL_CHECK((frame[0].o)))->F_ttl = (frame[1].l);
	LINE_NUMBER(12);
	((arc_net_dns_SRVRecord *) NULL_CHECK((frame[0].o)))->F_priority = (frame[3].i);
	LINE_NUMBER(13);
	((arc_net_dns_SRVRecord *) NULL_CHECK((frame[0].o)))->F_weight = (frame[4].i);
	LINE_NUMBER(14);
	((arc_net_dns_SRVRecord *) NULL_CHECK((frame[0].o)))->F_port = (frame[5].i);
	LINE_NUMBER(15);
	((arc_net_dns_SRVRecord *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[6].o);
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_net_dns_SRVRecord_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/SRVRecord:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(20);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SRVRecord{ttl="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jlong)((arc_net_dns_SRVRecord *) NULL_CHECK((frame[0].o)))->F_ttl));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", priority="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_net_dns_SRVRecord *) NULL_CHECK((frame[0].o)))->F_priority));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", weight="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_net_dns_SRVRecord *) NULL_CHECK((frame[0].o)))->F_weight));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", port="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((arc_net_dns_SRVRecord *) NULL_CHECK((frame[0].o)))->F_port));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", target='"_j))));
	sp[1].o = (jobject)((arc_net_dns_SRVRecord *) NULL_CHECK((frame[0].o)))->F_target;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (39));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, (125));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_arc_net_dns_SRVRecord_compareTo_arc_net_dns_SRVRecord_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/SRVRecord:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	if (((jint)((arc_net_dns_SRVRecord *) NULL_CHECK((frame[0].o)))->F_priority) == ((jint)((arc_net_dns_SRVRecord *) NULL_CHECK((frame[1].o)))->F_priority)) goto label_1;
	}
	{
	LINE_NUMBER(32);
	jint temp0 = (jint)SM_java_lang_Integer_compare_int_int_R_int(ctx, ((jint)((arc_net_dns_SRVRecord *) NULL_CHECK((frame[0].o)))->F_priority), ((jint)((arc_net_dns_SRVRecord *) NULL_CHECK((frame[1].o)))->F_priority));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(34);
	jint temp0 = (jint)SM_java_lang_Integer_compare_int_int_R_int(ctx, ((jint)((arc_net_dns_SRVRecord *) NULL_CHECK((frame[0].o)))->F_weight), ((jint)((arc_net_dns_SRVRecord *) NULL_CHECK((frame[1].o)))->F_weight));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_net_dns_SRVRecord_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/net/dns/SRVRecord:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3);
	jint temp0 = (jint)((func_arc_net_dns_SRVRecord_compareTo_arc_net_dns_SRVRecord_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_net_dns_SRVRecord_compareTo_arc_net_dns_SRVRecord_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_arc_net_dns_SRVRecord, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}
}


void *vtable_arc_net_dns_SRVRecord[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_net_dns_SRVRecord_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_net_dns_SRVRecord_compareTo_java_lang_Object_R_int,
	(void *) M_arc_net_dns_SRVRecord_compareTo_arc_net_dns_SRVRecord_R_int,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Larc/net/dns/SRVRecord;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, };

static FieldMetadata fields[] {
	{ "ttl", &class_long, offsetof(arc_net_dns_SRVRecord, F_ttl), "J", 17 },
	{ "priority", &class_int, offsetof(arc_net_dns_SRVRecord, F_priority), "I", 17 },
	{ "weight", &class_int, offsetof(arc_net_dns_SRVRecord, F_weight), "I", 17 },
	{ "port", &class_int, offsetof(arc_net_dns_SRVRecord, F_port), "I", 17 },
	{ "target", &class_java_lang_String, offsetof(arc_net_dns_SRVRecord, F_target), "Ljava/lang/String;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_net_dns_SRVRecord_long_int_int_int_java_lang_String, 0, "(JIIILjava/lang/String;)V", 1 },
	{ "toString", (intptr_t) M_arc_net_dns_SRVRecord_toString_R_java_lang_String, VTABLE_arc_net_dns_SRVRecord_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "compareTo", (intptr_t) M_arc_net_dns_SRVRecord_compareTo_arc_net_dns_SRVRecord_R_int, VTABLE_arc_net_dns_SRVRecord_compareTo_arc_net_dns_SRVRecord_R_int, "(Larc/net/dns/SRVRecord;)I", 1 },
	{ "compareTo", (intptr_t) M_arc_net_dns_SRVRecord_compareTo_java_lang_Object_R_int, VTABLE_arc_net_dns_SRVRecord_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_arc_net_dns_SRVRecord{
		.nativeName = (intptr_t) "arc/net/dns/SRVRecord",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_net_dns_SRVRecord),
		.classVtable = (intptr_t) vtable_arc_net_dns_SRVRecord,
		.staticInitializer = (intptr_t) clinit_arc_net_dns_SRVRecord,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_net_dns_SRVRecord,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_net_dns_SRVRecord = registerClass(&class_arc_net_dns_SRVRecord);

}
