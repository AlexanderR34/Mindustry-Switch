#include "java/lang/annotation/RetentionPolicy.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/annotation/RetentionPolicy.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_java_lang_annotation_RetentionPolicy_CLASS;
jobject SF_java_lang_annotation_RetentionPolicy_RUNTIME;
jobject SF_java_lang_annotation_RetentionPolicy_SOURCE;
jobject SF_java_lang_annotation_RetentionPolicy_$VALUES;

void mark_java_lang_annotation_RetentionPolicy(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_annotation_RetentionPolicy_CLASS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_RetentionPolicy_CLASS)->clazz)->markFunction)((jobject) SF_java_lang_annotation_RetentionPolicy_CLASS, mark, depth + 1);
		if (SF_java_lang_annotation_RetentionPolicy_RUNTIME)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_RetentionPolicy_RUNTIME)->clazz)->markFunction)((jobject) SF_java_lang_annotation_RetentionPolicy_RUNTIME, mark, depth + 1);
		if (SF_java_lang_annotation_RetentionPolicy_SOURCE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_RetentionPolicy_SOURCE)->clazz)->markFunction)((jobject) SF_java_lang_annotation_RetentionPolicy_SOURCE, mark, depth + 1);
		if (SF_java_lang_annotation_RetentionPolicy_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_RetentionPolicy_$VALUES)->clazz)->markFunction)((jobject) SF_java_lang_annotation_RetentionPolicy_$VALUES, mark, depth + 1);
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
	auto self = (java_lang_annotation_RetentionPolicy *) object;
}

jobject SM_java_lang_annotation_RetentionPolicy_values_R_Array1_java_lang_annotation_RetentionPolicy(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/annotation/RetentionPolicy:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_annotation_RetentionPolicy(ctx);
	{
	LINE_NUMBER(33);
	clinit_java_lang_annotation_RetentionPolicy(ctx);
	sp[0].o = (jobject)SF_java_lang_annotation_RetentionPolicy_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_annotation_RetentionPolicy, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_annotation_RetentionPolicy_valueOf_java_lang_String_R_java_lang_annotation_RetentionPolicy(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/annotation/RetentionPolicy:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_annotation_RetentionPolicy(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_java_lang_annotation_RetentionPolicy)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_annotation_RetentionPolicy, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_java_lang_annotation_RetentionPolicy_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/annotation/RetentionPolicy:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_annotation_RetentionPolicy(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(33);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_annotation_RetentionPolicy_$values_R_Array1_java_lang_annotation_RetentionPolicy(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/annotation/RetentionPolicy:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_annotation_RetentionPolicy(ctx);
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_annotation_RetentionPolicy, (jint(3)));
	jint temp0 = jint(0);
	clinit_java_lang_annotation_RetentionPolicy(ctx);
	sp[1].o = (jobject)SF_java_lang_annotation_RetentionPolicy_CLASS;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_lang_annotation_RetentionPolicy(ctx);
	sp[1].o = (jobject)SF_java_lang_annotation_RetentionPolicy_RUNTIME;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_java_lang_annotation_RetentionPolicy(ctx);
	sp[1].o = (jobject)SF_java_lang_annotation_RetentionPolicy_SOURCE;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_annotation_RetentionPolicy(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/annotation/RetentionPolicy:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_annotation_RetentionPolicy(ctx);
	{
	LINE_NUMBER(34);
	clinit_java_lang_annotation_RetentionPolicy(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_annotation_RetentionPolicy);
	init_java_lang_annotation_RetentionPolicy_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CLASS"_j))), (jint(0)));
	clinit_java_lang_annotation_RetentionPolicy(ctx);
	SF_java_lang_annotation_RetentionPolicy_CLASS = sp[0].o;
	LINE_NUMBER(35);
	clinit_java_lang_annotation_RetentionPolicy(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_annotation_RetentionPolicy);
	init_java_lang_annotation_RetentionPolicy_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RUNTIME"_j))), (jint(1)));
	clinit_java_lang_annotation_RetentionPolicy(ctx);
	SF_java_lang_annotation_RetentionPolicy_RUNTIME = sp[0].o;
	LINE_NUMBER(36);
	clinit_java_lang_annotation_RetentionPolicy(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_annotation_RetentionPolicy);
	init_java_lang_annotation_RetentionPolicy_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SOURCE"_j))), (jint(2)));
	clinit_java_lang_annotation_RetentionPolicy(ctx);
	SF_java_lang_annotation_RetentionPolicy_SOURCE = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)SM_java_lang_annotation_RetentionPolicy_$values_R_Array1_java_lang_annotation_RetentionPolicy(ctx);
	clinit_java_lang_annotation_RetentionPolicy(ctx);
	SF_java_lang_annotation_RetentionPolicy_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_annotation_RetentionPolicy[] {
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
	{ "CLASS", &class_java_lang_annotation_RetentionPolicy, (intptr_t) &SF_java_lang_annotation_RetentionPolicy_CLASS, "Ljava/lang/annotation/RetentionPolicy;", 16409 },
	{ "RUNTIME", &class_java_lang_annotation_RetentionPolicy, (intptr_t) &SF_java_lang_annotation_RetentionPolicy_RUNTIME, "Ljava/lang/annotation/RetentionPolicy;", 16409 },
	{ "SOURCE", &class_java_lang_annotation_RetentionPolicy, (intptr_t) &SF_java_lang_annotation_RetentionPolicy_SOURCE, "Ljava/lang/annotation/RetentionPolicy;", 16409 },
	{ "$VALUES", getArrayClass(&class_java_lang_annotation_RetentionPolicy, 1), (intptr_t) &SF_java_lang_annotation_RetentionPolicy_$VALUES, "[Ljava/lang/annotation/RetentionPolicy;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_java_lang_annotation_RetentionPolicy_values_R_Array1_java_lang_annotation_RetentionPolicy, 0, "()[Ljava/lang/annotation/RetentionPolicy;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_annotation_RetentionPolicy_valueOf_java_lang_String_R_java_lang_annotation_RetentionPolicy, 0, "(Ljava/lang/String;)Ljava/lang/annotation/RetentionPolicy;", 9 },
	{ "<init>", (intptr_t) init_java_lang_annotation_RetentionPolicy_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_java_lang_annotation_RetentionPolicy_$values_R_Array1_java_lang_annotation_RetentionPolicy, 0, "()[Ljava/lang/annotation/RetentionPolicy;", 4106 },
	{ "<clinit>", (intptr_t) clinit_java_lang_annotation_RetentionPolicy, 0, "()V", 8 },
};

Class class_java_lang_annotation_RetentionPolicy{
		.nativeName = (intptr_t) "java/lang/annotation/RetentionPolicy",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(java_lang_annotation_RetentionPolicy),
		.classVtable = (intptr_t) vtable_java_lang_annotation_RetentionPolicy,
		.staticInitializer = (intptr_t) clinit_java_lang_annotation_RetentionPolicy,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_annotation_RetentionPolicy,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
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
static bool registered_java_lang_annotation_RetentionPolicy = registerClass(&class_java_lang_annotation_RetentionPolicy);

}
