#include "java/lang/annotation/ElementType.h"
#include "java/lang/annotation/ElementType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_java_lang_annotation_ElementType_ANNOTATION_TYPE;
jobject SF_java_lang_annotation_ElementType_CONSTRUCTOR;
jobject SF_java_lang_annotation_ElementType_FIELD;
jobject SF_java_lang_annotation_ElementType_LOCAL_VARIABLE;
jobject SF_java_lang_annotation_ElementType_METHOD;
jobject SF_java_lang_annotation_ElementType_PACKAGE;
jobject SF_java_lang_annotation_ElementType_PARAMETER;
jobject SF_java_lang_annotation_ElementType_TYPE;
jobject SF_java_lang_annotation_ElementType_TYPE_PARAMETER;
jobject SF_java_lang_annotation_ElementType_TYPE_USE;
jobject SF_java_lang_annotation_ElementType_$VALUES;

void mark_java_lang_annotation_ElementType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_annotation_ElementType_ANNOTATION_TYPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_ElementType_ANNOTATION_TYPE)->clazz)->markFunction)((jobject) SF_java_lang_annotation_ElementType_ANNOTATION_TYPE, mark, depth + 1);
		if (SF_java_lang_annotation_ElementType_CONSTRUCTOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_ElementType_CONSTRUCTOR)->clazz)->markFunction)((jobject) SF_java_lang_annotation_ElementType_CONSTRUCTOR, mark, depth + 1);
		if (SF_java_lang_annotation_ElementType_FIELD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_ElementType_FIELD)->clazz)->markFunction)((jobject) SF_java_lang_annotation_ElementType_FIELD, mark, depth + 1);
		if (SF_java_lang_annotation_ElementType_LOCAL_VARIABLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_ElementType_LOCAL_VARIABLE)->clazz)->markFunction)((jobject) SF_java_lang_annotation_ElementType_LOCAL_VARIABLE, mark, depth + 1);
		if (SF_java_lang_annotation_ElementType_METHOD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_ElementType_METHOD)->clazz)->markFunction)((jobject) SF_java_lang_annotation_ElementType_METHOD, mark, depth + 1);
		if (SF_java_lang_annotation_ElementType_PACKAGE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_ElementType_PACKAGE)->clazz)->markFunction)((jobject) SF_java_lang_annotation_ElementType_PACKAGE, mark, depth + 1);
		if (SF_java_lang_annotation_ElementType_PARAMETER)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_ElementType_PARAMETER)->clazz)->markFunction)((jobject) SF_java_lang_annotation_ElementType_PARAMETER, mark, depth + 1);
		if (SF_java_lang_annotation_ElementType_TYPE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_ElementType_TYPE)->clazz)->markFunction)((jobject) SF_java_lang_annotation_ElementType_TYPE, mark, depth + 1);
		if (SF_java_lang_annotation_ElementType_TYPE_PARAMETER)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_ElementType_TYPE_PARAMETER)->clazz)->markFunction)((jobject) SF_java_lang_annotation_ElementType_TYPE_PARAMETER, mark, depth + 1);
		if (SF_java_lang_annotation_ElementType_TYPE_USE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_ElementType_TYPE_USE)->clazz)->markFunction)((jobject) SF_java_lang_annotation_ElementType_TYPE_USE, mark, depth + 1);
		if (SF_java_lang_annotation_ElementType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_annotation_ElementType_$VALUES)->clazz)->markFunction)((jobject) SF_java_lang_annotation_ElementType_$VALUES, mark, depth + 1);
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
	auto self = (java_lang_annotation_ElementType *) object;
}

jobject SM_java_lang_annotation_ElementType_values_R_Array1_java_lang_annotation_ElementType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/annotation/ElementType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_annotation_ElementType(ctx);
	{
	LINE_NUMBER(33);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[0].o = (jobject)SF_java_lang_annotation_ElementType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_annotation_ElementType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_annotation_ElementType_valueOf_java_lang_String_R_java_lang_annotation_ElementType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/annotation/ElementType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_annotation_ElementType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_java_lang_annotation_ElementType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_annotation_ElementType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_java_lang_annotation_ElementType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/annotation/ElementType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_annotation_ElementType(ctx);
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

jobject SM_java_lang_annotation_ElementType_$values_R_Array1_java_lang_annotation_ElementType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/annotation/ElementType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_annotation_ElementType(ctx);
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_annotation_ElementType, (10));
	jint temp0 = jint(0);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[1].o = (jobject)SF_java_lang_annotation_ElementType_ANNOTATION_TYPE;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[1].o = (jobject)SF_java_lang_annotation_ElementType_CONSTRUCTOR;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[1].o = (jobject)SF_java_lang_annotation_ElementType_FIELD;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[1].o = (jobject)SF_java_lang_annotation_ElementType_LOCAL_VARIABLE;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[1].o = (jobject)SF_java_lang_annotation_ElementType_METHOD;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[1].o = (jobject)SF_java_lang_annotation_ElementType_PACKAGE;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_java_lang_annotation_ElementType(ctx);
	sp[1].o = (jobject)SF_java_lang_annotation_ElementType_PARAMETER;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_java_lang_annotation_ElementType(ctx);
	sp[1].o = (jobject)SF_java_lang_annotation_ElementType_TYPE;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_java_lang_annotation_ElementType(ctx);
	sp[1].o = (jobject)SF_java_lang_annotation_ElementType_TYPE_PARAMETER;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_java_lang_annotation_ElementType(ctx);
	sp[1].o = (jobject)SF_java_lang_annotation_ElementType_TYPE_USE;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_annotation_ElementType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/annotation/ElementType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_annotation_ElementType(ctx);
	{
	LINE_NUMBER(34);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_annotation_ElementType);
	init_java_lang_annotation_ElementType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ANNOTATION_TYPE"_j))), (jint(0)));
	clinit_java_lang_annotation_ElementType(ctx);
	SF_java_lang_annotation_ElementType_ANNOTATION_TYPE = sp[0].o;
	LINE_NUMBER(35);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_annotation_ElementType);
	init_java_lang_annotation_ElementType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CONSTRUCTOR"_j))), (jint(1)));
	clinit_java_lang_annotation_ElementType(ctx);
	SF_java_lang_annotation_ElementType_CONSTRUCTOR = sp[0].o;
	LINE_NUMBER(36);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_annotation_ElementType);
	init_java_lang_annotation_ElementType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"FIELD"_j))), (jint(2)));
	clinit_java_lang_annotation_ElementType(ctx);
	SF_java_lang_annotation_ElementType_FIELD = sp[0].o;
	LINE_NUMBER(37);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_annotation_ElementType);
	init_java_lang_annotation_ElementType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LOCAL_VARIABLE"_j))), (jint(3)));
	clinit_java_lang_annotation_ElementType(ctx);
	SF_java_lang_annotation_ElementType_LOCAL_VARIABLE = sp[0].o;
	LINE_NUMBER(38);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_annotation_ElementType);
	init_java_lang_annotation_ElementType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"METHOD"_j))), (jint(4)));
	clinit_java_lang_annotation_ElementType(ctx);
	SF_java_lang_annotation_ElementType_METHOD = sp[0].o;
	LINE_NUMBER(39);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_annotation_ElementType);
	init_java_lang_annotation_ElementType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PACKAGE"_j))), (jint(5)));
	clinit_java_lang_annotation_ElementType(ctx);
	SF_java_lang_annotation_ElementType_PACKAGE = sp[0].o;
	LINE_NUMBER(40);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_annotation_ElementType);
	init_java_lang_annotation_ElementType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PARAMETER"_j))), (6));
	clinit_java_lang_annotation_ElementType(ctx);
	SF_java_lang_annotation_ElementType_PARAMETER = sp[0].o;
	LINE_NUMBER(41);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_annotation_ElementType);
	init_java_lang_annotation_ElementType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TYPE"_j))), (7));
	clinit_java_lang_annotation_ElementType(ctx);
	SF_java_lang_annotation_ElementType_TYPE = sp[0].o;
	LINE_NUMBER(42);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_annotation_ElementType);
	init_java_lang_annotation_ElementType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TYPE_PARAMETER"_j))), (8));
	clinit_java_lang_annotation_ElementType(ctx);
	SF_java_lang_annotation_ElementType_TYPE_PARAMETER = sp[0].o;
	LINE_NUMBER(43);
	clinit_java_lang_annotation_ElementType(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_annotation_ElementType);
	init_java_lang_annotation_ElementType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TYPE_USE"_j))), (9));
	clinit_java_lang_annotation_ElementType(ctx);
	SF_java_lang_annotation_ElementType_TYPE_USE = sp[0].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)SM_java_lang_annotation_ElementType_$values_R_Array1_java_lang_annotation_ElementType(ctx);
	clinit_java_lang_annotation_ElementType(ctx);
	SF_java_lang_annotation_ElementType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_annotation_ElementType[] {
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
	{ "ANNOTATION_TYPE", &class_java_lang_annotation_ElementType, (intptr_t) &SF_java_lang_annotation_ElementType_ANNOTATION_TYPE, "Ljava/lang/annotation/ElementType;", 16409 },
	{ "CONSTRUCTOR", &class_java_lang_annotation_ElementType, (intptr_t) &SF_java_lang_annotation_ElementType_CONSTRUCTOR, "Ljava/lang/annotation/ElementType;", 16409 },
	{ "FIELD", &class_java_lang_annotation_ElementType, (intptr_t) &SF_java_lang_annotation_ElementType_FIELD, "Ljava/lang/annotation/ElementType;", 16409 },
	{ "LOCAL_VARIABLE", &class_java_lang_annotation_ElementType, (intptr_t) &SF_java_lang_annotation_ElementType_LOCAL_VARIABLE, "Ljava/lang/annotation/ElementType;", 16409 },
	{ "METHOD", &class_java_lang_annotation_ElementType, (intptr_t) &SF_java_lang_annotation_ElementType_METHOD, "Ljava/lang/annotation/ElementType;", 16409 },
	{ "PACKAGE", &class_java_lang_annotation_ElementType, (intptr_t) &SF_java_lang_annotation_ElementType_PACKAGE, "Ljava/lang/annotation/ElementType;", 16409 },
	{ "PARAMETER", &class_java_lang_annotation_ElementType, (intptr_t) &SF_java_lang_annotation_ElementType_PARAMETER, "Ljava/lang/annotation/ElementType;", 16409 },
	{ "TYPE", &class_java_lang_annotation_ElementType, (intptr_t) &SF_java_lang_annotation_ElementType_TYPE, "Ljava/lang/annotation/ElementType;", 16409 },
	{ "TYPE_PARAMETER", &class_java_lang_annotation_ElementType, (intptr_t) &SF_java_lang_annotation_ElementType_TYPE_PARAMETER, "Ljava/lang/annotation/ElementType;", 16409 },
	{ "TYPE_USE", &class_java_lang_annotation_ElementType, (intptr_t) &SF_java_lang_annotation_ElementType_TYPE_USE, "Ljava/lang/annotation/ElementType;", 16409 },
	{ "$VALUES", getArrayClass(&class_java_lang_annotation_ElementType, 1), (intptr_t) &SF_java_lang_annotation_ElementType_$VALUES, "[Ljava/lang/annotation/ElementType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_java_lang_annotation_ElementType_values_R_Array1_java_lang_annotation_ElementType, 0, "()[Ljava/lang/annotation/ElementType;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_annotation_ElementType_valueOf_java_lang_String_R_java_lang_annotation_ElementType, 0, "(Ljava/lang/String;)Ljava/lang/annotation/ElementType;", 9 },
	{ "<init>", (intptr_t) init_java_lang_annotation_ElementType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_java_lang_annotation_ElementType_$values_R_Array1_java_lang_annotation_ElementType, 0, "()[Ljava/lang/annotation/ElementType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_java_lang_annotation_ElementType, 0, "()V", 8 },
};

Class class_java_lang_annotation_ElementType{
		.nativeName = (intptr_t) "java/lang/annotation/ElementType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(java_lang_annotation_ElementType),
		.classVtable = (intptr_t) vtable_java_lang_annotation_ElementType,
		.staticInitializer = (intptr_t) clinit_java_lang_annotation_ElementType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_annotation_ElementType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_annotation_ElementType = registerClass(&class_java_lang_annotation_ElementType);

}
