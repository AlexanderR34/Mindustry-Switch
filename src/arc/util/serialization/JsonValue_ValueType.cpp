#include "arc/util/serialization/JsonValue_ValueType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/serialization/JsonValue.h"
#include "arc/util/serialization/JsonValue_ValueType.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_util_serialization_JsonValue$ValueType_object;
jobject SF_arc_util_serialization_JsonValue$ValueType_array;
jobject SF_arc_util_serialization_JsonValue$ValueType_stringValue;
jobject SF_arc_util_serialization_JsonValue$ValueType_doubleValue;
jobject SF_arc_util_serialization_JsonValue$ValueType_longValue;
jobject SF_arc_util_serialization_JsonValue$ValueType_booleanValue;
jobject SF_arc_util_serialization_JsonValue$ValueType_nullValue;
jobject SF_arc_util_serialization_JsonValue$ValueType_$VALUES;

void mark_arc_util_serialization_JsonValue$ValueType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_serialization_JsonValue$ValueType_object)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonValue$ValueType_object)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonValue$ValueType_object, mark, depth + 1);
		if (SF_arc_util_serialization_JsonValue$ValueType_array)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonValue$ValueType_array)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonValue$ValueType_array, mark, depth + 1);
		if (SF_arc_util_serialization_JsonValue$ValueType_stringValue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonValue$ValueType_stringValue)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonValue$ValueType_stringValue, mark, depth + 1);
		if (SF_arc_util_serialization_JsonValue$ValueType_doubleValue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonValue$ValueType_doubleValue)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonValue$ValueType_doubleValue, mark, depth + 1);
		if (SF_arc_util_serialization_JsonValue$ValueType_longValue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonValue$ValueType_longValue)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonValue$ValueType_longValue, mark, depth + 1);
		if (SF_arc_util_serialization_JsonValue$ValueType_booleanValue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonValue$ValueType_booleanValue)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonValue$ValueType_booleanValue, mark, depth + 1);
		if (SF_arc_util_serialization_JsonValue$ValueType_nullValue)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonValue$ValueType_nullValue)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonValue$ValueType_nullValue, mark, depth + 1);
		if (SF_arc_util_serialization_JsonValue$ValueType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_JsonValue$ValueType_$VALUES)->clazz)->markFunction)((jobject) SF_arc_util_serialization_JsonValue$ValueType_$VALUES, mark, depth + 1);
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
	auto self = (arc_util_serialization_JsonValue$ValueType *) object;
}

jobject SM_arc_util_serialization_JsonValue$ValueType_values_R_Array1_arc_util_serialization_JsonValue$ValueType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue$ValueType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	{
	LINE_NUMBER(1279);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_util_serialization_JsonValue$ValueType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonValue$ValueType_valueOf_java_lang_String_R_arc_util_serialization_JsonValue$ValueType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue$ValueType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1279);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_util_serialization_JsonValue$ValueType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_serialization_JsonValue$ValueType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_JsonValue$ValueType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue$ValueType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1279);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_JsonValue$ValueType_$values_R_Array1_arc_util_serialization_JsonValue$ValueType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue$ValueType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	{
	LINE_NUMBER(1279);
	sp[0].o = (jobject)createArray(ctx, &class_arc_util_serialization_JsonValue$ValueType, (7));
	jint temp0 = jint(0);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_object;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_array;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_stringValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_doubleValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_longValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_booleanValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_JsonValue$ValueType_nullValue;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_serialization_JsonValue$ValueType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/JsonValue$ValueType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	{
	LINE_NUMBER(1280);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue$ValueType);
	init_arc_util_serialization_JsonValue$ValueType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"object"_j))), (jint(0)));
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	SF_arc_util_serialization_JsonValue$ValueType_object = sp[0].o;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue$ValueType);
	init_arc_util_serialization_JsonValue$ValueType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"array"_j))), (jint(1)));
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	SF_arc_util_serialization_JsonValue$ValueType_array = sp[0].o;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue$ValueType);
	init_arc_util_serialization_JsonValue$ValueType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"stringValue"_j))), (jint(2)));
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	SF_arc_util_serialization_JsonValue$ValueType_stringValue = sp[0].o;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue$ValueType);
	init_arc_util_serialization_JsonValue$ValueType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"doubleValue"_j))), (jint(3)));
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	SF_arc_util_serialization_JsonValue$ValueType_doubleValue = sp[0].o;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue$ValueType);
	init_arc_util_serialization_JsonValue$ValueType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"longValue"_j))), (jint(4)));
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	SF_arc_util_serialization_JsonValue$ValueType_longValue = sp[0].o;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue$ValueType);
	init_arc_util_serialization_JsonValue$ValueType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"booleanValue"_j))), (jint(5)));
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	SF_arc_util_serialization_JsonValue$ValueType_booleanValue = sp[0].o;
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_JsonValue$ValueType);
	init_arc_util_serialization_JsonValue$ValueType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nullValue"_j))), (6));
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	SF_arc_util_serialization_JsonValue$ValueType_nullValue = sp[0].o;
	LINE_NUMBER(1279);
	sp[0].o = (jobject)SM_arc_util_serialization_JsonValue$ValueType_$values_R_Array1_arc_util_serialization_JsonValue$ValueType(ctx);
	clinit_arc_util_serialization_JsonValue$ValueType(ctx);
	SF_arc_util_serialization_JsonValue$ValueType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_JsonValue$ValueType[] {
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
	{ "object", &class_arc_util_serialization_JsonValue$ValueType, (intptr_t) &SF_arc_util_serialization_JsonValue$ValueType_object, "Larc/util/serialization/JsonValue$ValueType;", 16409 },
	{ "array", &class_arc_util_serialization_JsonValue$ValueType, (intptr_t) &SF_arc_util_serialization_JsonValue$ValueType_array, "Larc/util/serialization/JsonValue$ValueType;", 16409 },
	{ "stringValue", &class_arc_util_serialization_JsonValue$ValueType, (intptr_t) &SF_arc_util_serialization_JsonValue$ValueType_stringValue, "Larc/util/serialization/JsonValue$ValueType;", 16409 },
	{ "doubleValue", &class_arc_util_serialization_JsonValue$ValueType, (intptr_t) &SF_arc_util_serialization_JsonValue$ValueType_doubleValue, "Larc/util/serialization/JsonValue$ValueType;", 16409 },
	{ "longValue", &class_arc_util_serialization_JsonValue$ValueType, (intptr_t) &SF_arc_util_serialization_JsonValue$ValueType_longValue, "Larc/util/serialization/JsonValue$ValueType;", 16409 },
	{ "booleanValue", &class_arc_util_serialization_JsonValue$ValueType, (intptr_t) &SF_arc_util_serialization_JsonValue$ValueType_booleanValue, "Larc/util/serialization/JsonValue$ValueType;", 16409 },
	{ "nullValue", &class_arc_util_serialization_JsonValue$ValueType, (intptr_t) &SF_arc_util_serialization_JsonValue$ValueType_nullValue, "Larc/util/serialization/JsonValue$ValueType;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_util_serialization_JsonValue$ValueType, 1), (intptr_t) &SF_arc_util_serialization_JsonValue$ValueType_$VALUES, "[Larc/util/serialization/JsonValue$ValueType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_util_serialization_JsonValue$ValueType_values_R_Array1_arc_util_serialization_JsonValue$ValueType, 0, "()[Larc/util/serialization/JsonValue$ValueType;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_serialization_JsonValue$ValueType_valueOf_java_lang_String_R_arc_util_serialization_JsonValue$ValueType, 0, "(Ljava/lang/String;)Larc/util/serialization/JsonValue$ValueType;", 9 },
	{ "<init>", (intptr_t) init_arc_util_serialization_JsonValue$ValueType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_util_serialization_JsonValue$ValueType_$values_R_Array1_arc_util_serialization_JsonValue$ValueType, 0, "()[Larc/util/serialization/JsonValue$ValueType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_util_serialization_JsonValue$ValueType, 0, "()V", 8 },
};

Class class_arc_util_serialization_JsonValue$ValueType{
		.nativeName = (intptr_t) "arc/util/serialization/JsonValue$ValueType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_util_serialization_JsonValue$ValueType),
		.classVtable = (intptr_t) vtable_arc_util_serialization_JsonValue$ValueType,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_JsonValue$ValueType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_JsonValue$ValueType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_JsonValue,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_JsonValue$ValueType = registerClass(&class_arc_util_serialization_JsonValue$ValueType);

}

