#include "rhino/StackStyle.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "rhino/StackStyle.h"

extern "C" {

jobject SF_rhino_StackStyle_RHINO;
jobject SF_rhino_StackStyle_MOZILLA;
jobject SF_rhino_StackStyle_V8;
jobject SF_rhino_StackStyle_$VALUES;

void mark_rhino_StackStyle(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_StackStyle_RHINO)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_StackStyle_RHINO)->clazz)->markFunction)((jobject) SF_rhino_StackStyle_RHINO, mark, depth + 1);
		if (SF_rhino_StackStyle_MOZILLA)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_StackStyle_MOZILLA)->clazz)->markFunction)((jobject) SF_rhino_StackStyle_MOZILLA, mark, depth + 1);
		if (SF_rhino_StackStyle_V8)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_StackStyle_V8)->clazz)->markFunction)((jobject) SF_rhino_StackStyle_V8, mark, depth + 1);
		if (SF_rhino_StackStyle_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_StackStyle_$VALUES)->clazz)->markFunction)((jobject) SF_rhino_StackStyle_$VALUES, mark, depth + 1);
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
	auto self = (rhino_StackStyle *) object;
}

jobject SM_rhino_StackStyle_values_R_Array1_rhino_StackStyle(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/StackStyle:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_StackStyle(ctx);
	{
	LINE_NUMBER(7);
	clinit_rhino_StackStyle(ctx);
	sp[0].o = (jobject)SF_rhino_StackStyle_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_rhino_StackStyle, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_StackStyle_valueOf_java_lang_String_R_rhino_StackStyle(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/StackStyle:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_StackStyle(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_rhino_StackStyle)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_StackStyle, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_rhino_StackStyle_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/StackStyle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_StackStyle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(7);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_rhino_StackStyle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/StackStyle:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_StackStyle(ctx);
	{
	LINE_NUMBER(12);
	clinit_rhino_StackStyle(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_StackStyle);
	init_rhino_StackStyle_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RHINO"_j))), (jint(0)));
	clinit_rhino_StackStyle(ctx);
	SF_rhino_StackStyle_RHINO = sp[0].o;
	LINE_NUMBER(18);
	clinit_rhino_StackStyle(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_StackStyle);
	init_rhino_StackStyle_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MOZILLA"_j))), (jint(1)));
	clinit_rhino_StackStyle(ctx);
	SF_rhino_StackStyle_MOZILLA = sp[0].o;
	LINE_NUMBER(26);
	clinit_rhino_StackStyle(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_StackStyle);
	init_rhino_StackStyle_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"V8"_j))), (jint(2)));
	clinit_rhino_StackStyle(ctx);
	SF_rhino_StackStyle_V8 = sp[0].o;
	LINE_NUMBER(7);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_StackStyle, (jint(3)));
	jint temp0 = jint(0);
	clinit_rhino_StackStyle(ctx);
	sp[1].o = (jobject)SF_rhino_StackStyle_RHINO;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_rhino_StackStyle(ctx);
	sp[1].o = (jobject)SF_rhino_StackStyle_MOZILLA;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_rhino_StackStyle(ctx);
	sp[1].o = (jobject)SF_rhino_StackStyle_V8;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	clinit_rhino_StackStyle(ctx);
	SF_rhino_StackStyle_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_StackStyle[] {
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
	{ "RHINO", &class_rhino_StackStyle, (intptr_t) &SF_rhino_StackStyle_RHINO, "Lrhino/StackStyle;", 16409 },
	{ "MOZILLA", &class_rhino_StackStyle, (intptr_t) &SF_rhino_StackStyle_MOZILLA, "Lrhino/StackStyle;", 16409 },
	{ "V8", &class_rhino_StackStyle, (intptr_t) &SF_rhino_StackStyle_V8, "Lrhino/StackStyle;", 16409 },
	{ "$VALUES", getArrayClass(&class_rhino_StackStyle, 1), (intptr_t) &SF_rhino_StackStyle_$VALUES, "[Lrhino/StackStyle;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_rhino_StackStyle_values_R_Array1_rhino_StackStyle, 0, "()[Lrhino/StackStyle;", 9 },
	{ "valueOf", (intptr_t) SM_rhino_StackStyle_valueOf_java_lang_String_R_rhino_StackStyle, 0, "(Ljava/lang/String;)Lrhino/StackStyle;", 9 },
	{ "<init>", (intptr_t) init_rhino_StackStyle_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "<clinit>", (intptr_t) clinit_rhino_StackStyle, 0, "()V", 8 },
};

Class class_rhino_StackStyle{
		.nativeName = (intptr_t) "rhino/StackStyle",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(rhino_StackStyle),
		.classVtable = (intptr_t) vtable_rhino_StackStyle,
		.staticInitializer = (intptr_t) clinit_rhino_StackStyle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_StackStyle,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_StackStyle = registerClass(&class_rhino_StackStyle);

}
