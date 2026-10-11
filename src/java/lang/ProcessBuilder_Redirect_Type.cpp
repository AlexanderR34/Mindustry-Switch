#include "java/lang/ProcessBuilder_Redirect_Type.h"
#include "java/lang/ProcessBuilder_Redirect.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/ProcessBuilder_Redirect_Type.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_java_lang_ProcessBuilder$Redirect$Type_PIPE;
jobject SF_java_lang_ProcessBuilder$Redirect$Type_INHERIT;
jobject SF_java_lang_ProcessBuilder$Redirect$Type_READ;
jobject SF_java_lang_ProcessBuilder$Redirect$Type_WRITE;
jobject SF_java_lang_ProcessBuilder$Redirect$Type_APPEND;
jobject SF_java_lang_ProcessBuilder$Redirect$Type_$VALUES;

void mark_java_lang_ProcessBuilder$Redirect$Type(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_ProcessBuilder$Redirect$Type_PIPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ProcessBuilder$Redirect$Type_PIPE)->clazz)->markFunction)((jobject) SF_java_lang_ProcessBuilder$Redirect$Type_PIPE, mark, depth + 1);
		if (SF_java_lang_ProcessBuilder$Redirect$Type_INHERIT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ProcessBuilder$Redirect$Type_INHERIT)->clazz)->markFunction)((jobject) SF_java_lang_ProcessBuilder$Redirect$Type_INHERIT, mark, depth + 1);
		if (SF_java_lang_ProcessBuilder$Redirect$Type_READ)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ProcessBuilder$Redirect$Type_READ)->clazz)->markFunction)((jobject) SF_java_lang_ProcessBuilder$Redirect$Type_READ, mark, depth + 1);
		if (SF_java_lang_ProcessBuilder$Redirect$Type_WRITE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ProcessBuilder$Redirect$Type_WRITE)->clazz)->markFunction)((jobject) SF_java_lang_ProcessBuilder$Redirect$Type_WRITE, mark, depth + 1);
		if (SF_java_lang_ProcessBuilder$Redirect$Type_APPEND)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ProcessBuilder$Redirect$Type_APPEND)->clazz)->markFunction)((jobject) SF_java_lang_ProcessBuilder$Redirect$Type_APPEND, mark, depth + 1);
		if (SF_java_lang_ProcessBuilder$Redirect$Type_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_ProcessBuilder$Redirect$Type_$VALUES)->clazz)->markFunction)((jobject) SF_java_lang_ProcessBuilder$Redirect$Type_$VALUES, mark, depth + 1);
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
	auto self = (java_lang_ProcessBuilder$Redirect$Type *) object;
}

jobject SM_java_lang_ProcessBuilder$Redirect$Type_values_R_Array1_java_lang_ProcessBuilder$Redirect$Type(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect$Type:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	{
	LINE_NUMBER(427);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[0].o = (jobject)SF_java_lang_ProcessBuilder$Redirect$Type_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_ProcessBuilder$Redirect$Type, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_ProcessBuilder$Redirect$Type_valueOf_java_lang_String_R_java_lang_ProcessBuilder$Redirect$Type(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect$Type:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_java_lang_ProcessBuilder$Redirect$Type)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_ProcessBuilder$Redirect$Type, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_java_lang_ProcessBuilder$Redirect$Type_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect$Type:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(434);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(435);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_ProcessBuilder$Redirect$Type_$values_R_Array1_java_lang_ProcessBuilder$Redirect$Type(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect$Type:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_ProcessBuilder$Redirect$Type, (jint(5)));
	jint temp0 = jint(0);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[1].o = (jobject)SF_java_lang_ProcessBuilder$Redirect$Type_PIPE;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[1].o = (jobject)SF_java_lang_ProcessBuilder$Redirect$Type_INHERIT;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[1].o = (jobject)SF_java_lang_ProcessBuilder$Redirect$Type_READ;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[1].o = (jobject)SF_java_lang_ProcessBuilder$Redirect$Type_WRITE;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[1].o = (jobject)SF_java_lang_ProcessBuilder$Redirect$Type_APPEND;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_ProcessBuilder$Redirect$Type(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/ProcessBuilder$Redirect$Type:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	{
	LINE_NUMBER(428);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$Redirect$Type);
	init_java_lang_ProcessBuilder$Redirect$Type_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PIPE"_j))), (jint(0)));
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	SF_java_lang_ProcessBuilder$Redirect$Type_PIPE = sp[0].o;
	LINE_NUMBER(429);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$Redirect$Type);
	init_java_lang_ProcessBuilder$Redirect$Type_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"INHERIT"_j))), (jint(1)));
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	SF_java_lang_ProcessBuilder$Redirect$Type_INHERIT = sp[0].o;
	LINE_NUMBER(430);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$Redirect$Type);
	init_java_lang_ProcessBuilder$Redirect$Type_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"READ"_j))), (jint(2)));
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	SF_java_lang_ProcessBuilder$Redirect$Type_READ = sp[0].o;
	LINE_NUMBER(431);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$Redirect$Type);
	init_java_lang_ProcessBuilder$Redirect$Type_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WRITE"_j))), (jint(3)));
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	SF_java_lang_ProcessBuilder$Redirect$Type_WRITE = sp[0].o;
	LINE_NUMBER(432);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_ProcessBuilder$Redirect$Type);
	init_java_lang_ProcessBuilder$Redirect$Type_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"APPEND"_j))), (jint(4)));
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	SF_java_lang_ProcessBuilder$Redirect$Type_APPEND = sp[0].o;
	LINE_NUMBER(427);
	sp[0].o = (jobject)SM_java_lang_ProcessBuilder$Redirect$Type_$values_R_Array1_java_lang_ProcessBuilder$Redirect$Type(ctx);
	clinit_java_lang_ProcessBuilder$Redirect$Type(ctx);
	SF_java_lang_ProcessBuilder$Redirect$Type_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_ProcessBuilder$Redirect$Type[] {
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
	{ "PIPE", &class_java_lang_ProcessBuilder$Redirect$Type, (intptr_t) &SF_java_lang_ProcessBuilder$Redirect$Type_PIPE, "Ljava/lang/ProcessBuilder$Redirect$Type;", 16409 },
	{ "INHERIT", &class_java_lang_ProcessBuilder$Redirect$Type, (intptr_t) &SF_java_lang_ProcessBuilder$Redirect$Type_INHERIT, "Ljava/lang/ProcessBuilder$Redirect$Type;", 16409 },
	{ "READ", &class_java_lang_ProcessBuilder$Redirect$Type, (intptr_t) &SF_java_lang_ProcessBuilder$Redirect$Type_READ, "Ljava/lang/ProcessBuilder$Redirect$Type;", 16409 },
	{ "WRITE", &class_java_lang_ProcessBuilder$Redirect$Type, (intptr_t) &SF_java_lang_ProcessBuilder$Redirect$Type_WRITE, "Ljava/lang/ProcessBuilder$Redirect$Type;", 16409 },
	{ "APPEND", &class_java_lang_ProcessBuilder$Redirect$Type, (intptr_t) &SF_java_lang_ProcessBuilder$Redirect$Type_APPEND, "Ljava/lang/ProcessBuilder$Redirect$Type;", 16409 },
	{ "$VALUES", getArrayClass(&class_java_lang_ProcessBuilder$Redirect$Type, 1), (intptr_t) &SF_java_lang_ProcessBuilder$Redirect$Type_$VALUES, "[Ljava/lang/ProcessBuilder$Redirect$Type;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_java_lang_ProcessBuilder$Redirect$Type_values_R_Array1_java_lang_ProcessBuilder$Redirect$Type, 0, "()[Ljava/lang/ProcessBuilder$Redirect$Type;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_ProcessBuilder$Redirect$Type_valueOf_java_lang_String_R_java_lang_ProcessBuilder$Redirect$Type, 0, "(Ljava/lang/String;)Ljava/lang/ProcessBuilder$Redirect$Type;", 9 },
	{ "<init>", (intptr_t) init_java_lang_ProcessBuilder$Redirect$Type_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_java_lang_ProcessBuilder$Redirect$Type_$values_R_Array1_java_lang_ProcessBuilder$Redirect$Type, 0, "()[Ljava/lang/ProcessBuilder$Redirect$Type;", 4106 },
	{ "<clinit>", (intptr_t) clinit_java_lang_ProcessBuilder$Redirect$Type, 0, "()V", 8 },
};

Class class_java_lang_ProcessBuilder$Redirect$Type{
		.nativeName = (intptr_t) "java/lang/ProcessBuilder$Redirect$Type",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(java_lang_ProcessBuilder$Redirect$Type),
		.classVtable = (intptr_t) vtable_java_lang_ProcessBuilder$Redirect$Type,
		.staticInitializer = (intptr_t) clinit_java_lang_ProcessBuilder$Redirect$Type,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_ProcessBuilder$Redirect$Type,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_lang_ProcessBuilder$Redirect,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_ProcessBuilder$Redirect$Type = registerClass(&class_java_lang_ProcessBuilder$Redirect$Type);

}

