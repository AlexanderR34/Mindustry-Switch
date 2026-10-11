#include "arc/util/serialization/Jval_Jtype.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/serialization/Jval.h"
#include "arc/util/serialization/Jval_Jtype.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_util_serialization_Jval$Jtype_string;
jobject SF_arc_util_serialization_Jval$Jtype_number;
jobject SF_arc_util_serialization_Jval$Jtype_object;
jobject SF_arc_util_serialization_Jval$Jtype_array;
jobject SF_arc_util_serialization_Jval$Jtype_bool;
jobject SF_arc_util_serialization_Jval$Jtype_nil;
jobject SF_arc_util_serialization_Jval$Jtype_$VALUES;

void mark_arc_util_serialization_Jval$Jtype(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_serialization_Jval$Jtype_string)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval$Jtype_string)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval$Jtype_string, mark, depth + 1);
		if (SF_arc_util_serialization_Jval$Jtype_number)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval$Jtype_number)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval$Jtype_number, mark, depth + 1);
		if (SF_arc_util_serialization_Jval$Jtype_object)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval$Jtype_object)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval$Jtype_object, mark, depth + 1);
		if (SF_arc_util_serialization_Jval$Jtype_array)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval$Jtype_array)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval$Jtype_array, mark, depth + 1);
		if (SF_arc_util_serialization_Jval$Jtype_bool)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval$Jtype_bool)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval$Jtype_bool, mark, depth + 1);
		if (SF_arc_util_serialization_Jval$Jtype_nil)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval$Jtype_nil)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval$Jtype_nil, mark, depth + 1);
		if (SF_arc_util_serialization_Jval$Jtype_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval$Jtype_$VALUES)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval$Jtype_$VALUES, mark, depth + 1);
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
	auto self = (arc_util_serialization_Jval$Jtype *) object;
}

jobject SM_arc_util_serialization_Jval$Jtype_values_R_Array1_arc_util_serialization_Jval$Jtype(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jtype:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jtype(ctx);
	{
	LINE_NUMBER(444);
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_Jval$Jtype_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_util_serialization_Jval$Jtype, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval$Jtype_valueOf_java_lang_String_R_arc_util_serialization_Jval$Jtype(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jtype:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jtype(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_util_serialization_Jval$Jtype)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_serialization_Jval$Jtype, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_Jval$Jtype_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jtype:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jtype(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(444);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval$Jtype_$values_R_Array1_arc_util_serialization_Jval$Jtype(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jtype:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jtype(ctx);
	{
	LINE_NUMBER(444);
	sp[0].o = (jobject)createArray(ctx, &class_arc_util_serialization_Jval$Jtype, (6));
	jint temp0 = jint(0);
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jtype_string;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jtype_number;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jtype_object;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jtype_array;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jtype_bool;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jtype_nil;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_serialization_Jval$Jtype(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jtype:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jtype(ctx);
	{
	LINE_NUMBER(445);
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$Jtype);
	init_arc_util_serialization_Jval$Jtype_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"string"_j))), (jint(0)));
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	SF_arc_util_serialization_Jval$Jtype_string = sp[0].o;
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$Jtype);
	init_arc_util_serialization_Jval$Jtype_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"number"_j))), (jint(1)));
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	SF_arc_util_serialization_Jval$Jtype_number = sp[0].o;
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$Jtype);
	init_arc_util_serialization_Jval$Jtype_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"object"_j))), (jint(2)));
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	SF_arc_util_serialization_Jval$Jtype_object = sp[0].o;
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$Jtype);
	init_arc_util_serialization_Jval$Jtype_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"array"_j))), (jint(3)));
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	SF_arc_util_serialization_Jval$Jtype_array = sp[0].o;
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$Jtype);
	init_arc_util_serialization_Jval$Jtype_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bool"_j))), (jint(4)));
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	SF_arc_util_serialization_Jval$Jtype_bool = sp[0].o;
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$Jtype);
	init_arc_util_serialization_Jval$Jtype_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nil"_j))), (jint(5)));
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	SF_arc_util_serialization_Jval$Jtype_nil = sp[0].o;
	LINE_NUMBER(444);
	sp[0].o = (jobject)SM_arc_util_serialization_Jval$Jtype_$values_R_Array1_arc_util_serialization_Jval$Jtype(ctx);
	clinit_arc_util_serialization_Jval$Jtype(ctx);
	SF_arc_util_serialization_Jval$Jtype_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_Jval$Jtype[] {
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
	{ "string", &class_arc_util_serialization_Jval$Jtype, (intptr_t) &SF_arc_util_serialization_Jval$Jtype_string, "Larc/util/serialization/Jval$Jtype;", 16409 },
	{ "number", &class_arc_util_serialization_Jval$Jtype, (intptr_t) &SF_arc_util_serialization_Jval$Jtype_number, "Larc/util/serialization/Jval$Jtype;", 16409 },
	{ "object", &class_arc_util_serialization_Jval$Jtype, (intptr_t) &SF_arc_util_serialization_Jval$Jtype_object, "Larc/util/serialization/Jval$Jtype;", 16409 },
	{ "array", &class_arc_util_serialization_Jval$Jtype, (intptr_t) &SF_arc_util_serialization_Jval$Jtype_array, "Larc/util/serialization/Jval$Jtype;", 16409 },
	{ "bool", &class_arc_util_serialization_Jval$Jtype, (intptr_t) &SF_arc_util_serialization_Jval$Jtype_bool, "Larc/util/serialization/Jval$Jtype;", 16409 },
	{ "nil", &class_arc_util_serialization_Jval$Jtype, (intptr_t) &SF_arc_util_serialization_Jval$Jtype_nil, "Larc/util/serialization/Jval$Jtype;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_util_serialization_Jval$Jtype, 1), (intptr_t) &SF_arc_util_serialization_Jval$Jtype_$VALUES, "[Larc/util/serialization/Jval$Jtype;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_util_serialization_Jval$Jtype_values_R_Array1_arc_util_serialization_Jval$Jtype, 0, "()[Larc/util/serialization/Jval$Jtype;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_serialization_Jval$Jtype_valueOf_java_lang_String_R_arc_util_serialization_Jval$Jtype, 0, "(Ljava/lang/String;)Larc/util/serialization/Jval$Jtype;", 9 },
	{ "<init>", (intptr_t) init_arc_util_serialization_Jval$Jtype_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_util_serialization_Jval$Jtype_$values_R_Array1_arc_util_serialization_Jval$Jtype, 0, "()[Larc/util/serialization/Jval$Jtype;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_util_serialization_Jval$Jtype, 0, "()V", 8 },
};

Class class_arc_util_serialization_Jval$Jtype{
		.nativeName = (intptr_t) "arc/util/serialization/Jval$Jtype",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_util_serialization_Jval$Jtype),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Jval$Jtype,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Jval$Jtype,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_Jval$Jtype,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_Jval,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Jval$Jtype = registerClass(&class_arc_util_serialization_Jval$Jtype);

}

