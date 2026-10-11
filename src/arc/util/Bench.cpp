#include "arc/util/Bench.h"
#include "arc/util/Bench_invoke_arc_func_Cons2_0.h"
#include "java/lang/Integer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/Log.h"
#include "arc/util/Bench.h"
#include "arc/util/Time.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Long.h"
#include "arc/func/Cons2.h"

extern "C" {

jlong SF_arc_util_Bench_totalStart;
jobject SF_arc_util_Bench_lastName;
jobject SF_arc_util_Bench_times;
jlong SF_arc_util_Bench_last;

void mark_arc_util_Bench(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_Bench_lastName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Bench_lastName)->clazz)->markFunction)((jobject) SF_arc_util_Bench_lastName, mark, depth + 1);
		if (SF_arc_util_Bench_times)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Bench_times)->clazz)->markFunction)((jobject) SF_arc_util_Bench_times, mark, depth + 1);
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
	auto self = (arc_util_Bench *) object;
}

void init_arc_util_Bench(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Bench:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Bench(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Bench_begin_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Bench:begin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Bench(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(12);
	clinit_arc_util_Bench(ctx);
	sp[0].o = (jobject)SF_arc_util_Bench_lastName;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(13);
	SM_arc_util_Bench_endi(ctx);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(15);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	clinit_arc_util_Bench(ctx);
	SF_arc_util_Bench_totalStart = temp0;
	}
label_3:;
	{
	LINE_NUMBER(17);
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	clinit_arc_util_Bench(ctx);
	SF_arc_util_Bench_last = temp0;
	LINE_NUMBER(18);
	clinit_arc_util_Bench(ctx);
	SF_arc_util_Bench_lastName = (frame[0].o);
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Bench_end(jcontext ctx) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Bench:end", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Bench(ctx);
	{
	LINE_NUMBER(22);
	SM_arc_util_Bench_endi(ctx);
	LINE_NUMBER(23);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, (clinit_arc_util_Bench(ctx), (jlong)SF_arc_util_Bench_totalStart));
	frame[0].l = temp0;
	LINE_NUMBER(25);
	clinit_arc_util_Bench(ctx);
	sp[0].o = (jobject)SF_arc_util_Bench_times;
	{ /* InvokeDynamic */
		clinit_arc_util_Bench_invoke_arc_func_Cons2_0(ctx);
		auto proxy = (arc_util_Bench_invoke_arc_func_Cons2_0 *) gcAlloc(ctx, &class_arc_util_Bench_invoke_arc_func_Cons2_0);
		proxy->F_field0 = (frame[0].l);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(28);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[PERF] TOTAL: @ms"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[2].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (frame[0].l));
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Bench_endi(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Bench:endi", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Bench(ctx);
	{
	LINE_NUMBER(32);
	clinit_arc_util_Bench(ctx);
	sp[0].o = (jobject)SF_arc_util_Bench_times;
	clinit_arc_util_Bench(ctx);
	sp[1].o = (jobject)SF_arc_util_Bench_lastName;
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, (clinit_arc_util_Bench(ctx), (jlong)SF_arc_util_Bench_last));
	sp[2].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp0);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(33);
	clinit_arc_util_Bench(ctx);
	SF_arc_util_Bench_lastName = (jobject(nullptr));
	LINE_NUMBER(34);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_util_Bench_lambda$end$0_long_java_lang_String_java_lang_Long(jcontext ctx, jlong param0, jobject param1, jobject param2) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Bench:lambda$end$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Bench(ctx);
	frame[0].l = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(26);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"[PERF] @: @ms (@%)"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[2].o);
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (frame[3].o);
	jint temp0 = jint(2);
	jlong temp1 = (jlong)((func_java_lang_Long_longValue_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Long_longValue_R_long])(ctx, (frame[3].o));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint((((jfloat(temp1)) / (jfloat((frame[0].l)))) * (jfloat(100.0f))))));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	SM_arc_util_Log_info_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_Bench(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Bench:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Bench(ctx);
	{
	LINE_NUMBER(8);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_arc_util_Bench(ctx);
	SF_arc_util_Bench_times = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Bench[] {
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
	{ "totalStart", &class_long, (intptr_t) &SF_arc_util_Bench_totalStart, "J", 10 },
	{ "lastName", &class_java_lang_String, (intptr_t) &SF_arc_util_Bench_lastName, "Ljava/lang/String;", 10 },
	{ "times", &class_arc_struct_ObjectMap, (intptr_t) &SF_arc_util_Bench_times, "Larc/struct/ObjectMap;", 10 },
	{ "last", &class_long, (intptr_t) &SF_arc_util_Bench_last, "J", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_util_Bench, 0, "()V", 1 },
	{ "begin", (intptr_t) SM_arc_util_Bench_begin_java_lang_String, 0, "(Ljava/lang/String;)V", 9 },
	{ "end", (intptr_t) SM_arc_util_Bench_end, 0, "()V", 9 },
	{ "endi", (intptr_t) SM_arc_util_Bench_endi, 0, "()V", 10 },
	{ "lambda$end$0", (intptr_t) SM_arc_util_Bench_lambda$end$0_long_java_lang_String_java_lang_Long, 0, "(JLjava/lang/String;Ljava/lang/Long;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_util_Bench, 0, "()V", 8 },
};

Class class_arc_util_Bench{
		.nativeName = (intptr_t) "arc/util/Bench",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_util_Bench),
		.classVtable = (intptr_t) vtable_arc_util_Bench,
		.staticInitializer = (intptr_t) clinit_arc_util_Bench,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Bench,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Bench = registerClass(&class_arc_util_Bench);

}
