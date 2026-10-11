#include "java/util/ArrayDeque_DequeStatus.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/ArrayDeque.h"
#include "java/lang/Enum.h"
#include "java/util/ArrayDeque_DequeStatus.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_java_util_ArrayDeque$DequeStatus_Empty;
jobject SF_java_util_ArrayDeque$DequeStatus_Normal;
jobject SF_java_util_ArrayDeque$DequeStatus_Full;
jobject SF_java_util_ArrayDeque$DequeStatus_$VALUES;

void mark_java_util_ArrayDeque$DequeStatus(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_util_ArrayDeque$DequeStatus_Empty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_ArrayDeque$DequeStatus_Empty)->clazz)->markFunction)((jobject) SF_java_util_ArrayDeque$DequeStatus_Empty, mark, depth + 1);
		if (SF_java_util_ArrayDeque$DequeStatus_Normal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_ArrayDeque$DequeStatus_Normal)->clazz)->markFunction)((jobject) SF_java_util_ArrayDeque$DequeStatus_Normal, mark, depth + 1);
		if (SF_java_util_ArrayDeque$DequeStatus_Full)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_ArrayDeque$DequeStatus_Full)->clazz)->markFunction)((jobject) SF_java_util_ArrayDeque$DequeStatus_Full, mark, depth + 1);
		if (SF_java_util_ArrayDeque$DequeStatus_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_util_ArrayDeque$DequeStatus_$VALUES)->clazz)->markFunction)((jobject) SF_java_util_ArrayDeque$DequeStatus_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (java_util_ArrayDeque$DequeStatus *) object;
}

jobject SM_java_util_ArrayDeque$DequeStatus_values_R_Array1_java_util_ArrayDeque$DequeStatus(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque$DequeStatus:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	{
	LINE_NUMBER(37);
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[0].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_util_ArrayDeque$DequeStatus, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_util_ArrayDeque$DequeStatus_valueOf_java_lang_String_R_java_util_ArrayDeque$DequeStatus(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque$DequeStatus:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_java_util_ArrayDeque$DequeStatus)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_util_ArrayDeque$DequeStatus, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_java_util_ArrayDeque$DequeStatus_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque$DequeStatus:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(37);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_util_ArrayDeque$DequeStatus_$values_R_Array1_java_util_ArrayDeque$DequeStatus(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque$DequeStatus:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)createArray(ctx, &class_java_util_ArrayDeque$DequeStatus, (jint(3)));
	jint temp0 = jint(0);
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Empty;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Normal;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[1].o = (jobject)SF_java_util_ArrayDeque$DequeStatus_Full;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_util_ArrayDeque$DequeStatus(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/util/ArrayDeque$DequeStatus:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	{
	LINE_NUMBER(38);
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayDeque$DequeStatus);
	init_java_util_ArrayDeque$DequeStatus_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Empty"_j))), (jint(0)));
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	SF_java_util_ArrayDeque$DequeStatus_Empty = sp[0].o;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayDeque$DequeStatus);
	init_java_util_ArrayDeque$DequeStatus_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Normal"_j))), (jint(1)));
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	SF_java_util_ArrayDeque$DequeStatus_Normal = sp[0].o;
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayDeque$DequeStatus);
	init_java_util_ArrayDeque$DequeStatus_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Full"_j))), (jint(2)));
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	SF_java_util_ArrayDeque$DequeStatus_Full = sp[0].o;
	LINE_NUMBER(37);
	sp[0].o = (jobject)SM_java_util_ArrayDeque$DequeStatus_$values_R_Array1_java_util_ArrayDeque$DequeStatus(ctx);
	clinit_java_util_ArrayDeque$DequeStatus(ctx);
	SF_java_util_ArrayDeque$DequeStatus_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_util_ArrayDeque$DequeStatus[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
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
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
};

static FieldMetadata fields[] {
	{ "Empty", &class_java_util_ArrayDeque$DequeStatus, (intptr_t) &SF_java_util_ArrayDeque$DequeStatus_Empty, "Ljava/util/ArrayDeque$DequeStatus;", 16409 },
	{ "Normal", &class_java_util_ArrayDeque$DequeStatus, (intptr_t) &SF_java_util_ArrayDeque$DequeStatus_Normal, "Ljava/util/ArrayDeque$DequeStatus;", 16409 },
	{ "Full", &class_java_util_ArrayDeque$DequeStatus, (intptr_t) &SF_java_util_ArrayDeque$DequeStatus_Full, "Ljava/util/ArrayDeque$DequeStatus;", 16409 },
	{ "$VALUES", getArrayClass(&class_java_util_ArrayDeque$DequeStatus, 1), (intptr_t) &SF_java_util_ArrayDeque$DequeStatus_$VALUES, "[Ljava/util/ArrayDeque$DequeStatus;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_java_util_ArrayDeque$DequeStatus_values_R_Array1_java_util_ArrayDeque$DequeStatus, 0, "()[Ljava/util/ArrayDeque$DequeStatus;", 9 },
	{ "valueOf", (intptr_t) SM_java_util_ArrayDeque$DequeStatus_valueOf_java_lang_String_R_java_util_ArrayDeque$DequeStatus, 0, "(Ljava/lang/String;)Ljava/util/ArrayDeque$DequeStatus;", 9 },
	{ "<init>", (intptr_t) init_java_util_ArrayDeque$DequeStatus_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_java_util_ArrayDeque$DequeStatus_$values_R_Array1_java_util_ArrayDeque$DequeStatus, 0, "()[Ljava/util/ArrayDeque$DequeStatus;", 4106 },
	{ "<clinit>", (intptr_t) clinit_java_util_ArrayDeque$DequeStatus, 0, "()V", 8 },
};

Class class_java_util_ArrayDeque$DequeStatus{
		.nativeName = (intptr_t) "java/util/ArrayDeque$DequeStatus",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(java_util_ArrayDeque$DequeStatus),
		.classVtable = (intptr_t) vtable_java_util_ArrayDeque$DequeStatus,
		.staticInitializer = (intptr_t) clinit_java_util_ArrayDeque$DequeStatus,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_util_ArrayDeque$DequeStatus,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_util_ArrayDeque,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_util_ArrayDeque$DequeStatus = registerClass(&class_java_util_ArrayDeque$DequeStatus);

}

