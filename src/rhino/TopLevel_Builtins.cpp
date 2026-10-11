#include "rhino/TopLevel_Builtins.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/TopLevel.h"
#include "rhino/TopLevel_Builtins.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_rhino_TopLevel$Builtins_Object;
jobject SF_rhino_TopLevel$Builtins_Array;
jobject SF_rhino_TopLevel$Builtins_Function;
jobject SF_rhino_TopLevel$Builtins_String;
jobject SF_rhino_TopLevel$Builtins_Number;
jobject SF_rhino_TopLevel$Builtins_Boolean;
jobject SF_rhino_TopLevel$Builtins_RegExp;
jobject SF_rhino_TopLevel$Builtins_Error;
jobject SF_rhino_TopLevel$Builtins_Symbol;
jobject SF_rhino_TopLevel$Builtins_GeneratorFunction;
jobject SF_rhino_TopLevel$Builtins_$VALUES;

void mark_rhino_TopLevel$Builtins(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_TopLevel$Builtins_Object)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$Builtins_Object)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$Builtins_Object, mark, depth + 1);
		if (SF_rhino_TopLevel$Builtins_Array)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$Builtins_Array)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$Builtins_Array, mark, depth + 1);
		if (SF_rhino_TopLevel$Builtins_Function)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$Builtins_Function)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$Builtins_Function, mark, depth + 1);
		if (SF_rhino_TopLevel$Builtins_String)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$Builtins_String)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$Builtins_String, mark, depth + 1);
		if (SF_rhino_TopLevel$Builtins_Number)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$Builtins_Number)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$Builtins_Number, mark, depth + 1);
		if (SF_rhino_TopLevel$Builtins_Boolean)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$Builtins_Boolean)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$Builtins_Boolean, mark, depth + 1);
		if (SF_rhino_TopLevel$Builtins_RegExp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$Builtins_RegExp)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$Builtins_RegExp, mark, depth + 1);
		if (SF_rhino_TopLevel$Builtins_Error)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$Builtins_Error)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$Builtins_Error, mark, depth + 1);
		if (SF_rhino_TopLevel$Builtins_Symbol)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$Builtins_Symbol)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$Builtins_Symbol, mark, depth + 1);
		if (SF_rhino_TopLevel$Builtins_GeneratorFunction)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$Builtins_GeneratorFunction)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$Builtins_GeneratorFunction, mark, depth + 1);
		if (SF_rhino_TopLevel$Builtins_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$Builtins_$VALUES)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$Builtins_$VALUES, mark, depth + 1);
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
	auto self = (rhino_TopLevel$Builtins *) object;
}

jobject SM_rhino_TopLevel$Builtins_values_R_Array1_rhino_TopLevel$Builtins(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel$Builtins:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TopLevel$Builtins(ctx);
	{
	LINE_NUMBER(37);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[0].o = (jobject)SF_rhino_TopLevel$Builtins_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_rhino_TopLevel$Builtins, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_TopLevel$Builtins_valueOf_java_lang_String_R_rhino_TopLevel$Builtins(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel$Builtins:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TopLevel$Builtins(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_rhino_TopLevel$Builtins)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_TopLevel$Builtins, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_rhino_TopLevel$Builtins_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel$Builtins:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TopLevel$Builtins(ctx);
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

void clinit_rhino_TopLevel$Builtins(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel$Builtins:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TopLevel$Builtins(ctx);
	{
	LINE_NUMBER(39);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$Builtins);
	init_rhino_TopLevel$Builtins_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Object"_j))), (jint(0)));
	clinit_rhino_TopLevel$Builtins(ctx);
	SF_rhino_TopLevel$Builtins_Object = sp[0].o;
	LINE_NUMBER(41);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$Builtins);
	init_rhino_TopLevel$Builtins_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Array"_j))), (jint(1)));
	clinit_rhino_TopLevel$Builtins(ctx);
	SF_rhino_TopLevel$Builtins_Array = sp[0].o;
	LINE_NUMBER(43);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$Builtins);
	init_rhino_TopLevel$Builtins_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Function"_j))), (jint(2)));
	clinit_rhino_TopLevel$Builtins(ctx);
	SF_rhino_TopLevel$Builtins_Function = sp[0].o;
	LINE_NUMBER(45);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$Builtins);
	init_rhino_TopLevel$Builtins_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"String"_j))), (jint(3)));
	clinit_rhino_TopLevel$Builtins(ctx);
	SF_rhino_TopLevel$Builtins_String = sp[0].o;
	LINE_NUMBER(47);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$Builtins);
	init_rhino_TopLevel$Builtins_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Number"_j))), (jint(4)));
	clinit_rhino_TopLevel$Builtins(ctx);
	SF_rhino_TopLevel$Builtins_Number = sp[0].o;
	LINE_NUMBER(49);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$Builtins);
	init_rhino_TopLevel$Builtins_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Boolean"_j))), (jint(5)));
	clinit_rhino_TopLevel$Builtins(ctx);
	SF_rhino_TopLevel$Builtins_Boolean = sp[0].o;
	LINE_NUMBER(51);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$Builtins);
	init_rhino_TopLevel$Builtins_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RegExp"_j))), (6));
	clinit_rhino_TopLevel$Builtins(ctx);
	SF_rhino_TopLevel$Builtins_RegExp = sp[0].o;
	LINE_NUMBER(53);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$Builtins);
	init_rhino_TopLevel$Builtins_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error"_j))), (7));
	clinit_rhino_TopLevel$Builtins(ctx);
	SF_rhino_TopLevel$Builtins_Error = sp[0].o;
	LINE_NUMBER(55);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$Builtins);
	init_rhino_TopLevel$Builtins_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Symbol"_j))), (8));
	clinit_rhino_TopLevel$Builtins(ctx);
	SF_rhino_TopLevel$Builtins_Symbol = sp[0].o;
	LINE_NUMBER(57);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$Builtins);
	init_rhino_TopLevel$Builtins_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GeneratorFunction"_j))), (9));
	clinit_rhino_TopLevel$Builtins(ctx);
	SF_rhino_TopLevel$Builtins_GeneratorFunction = sp[0].o;
	LINE_NUMBER(37);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_TopLevel$Builtins, (10));
	jint temp0 = jint(0);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_Object;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_Array;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_Function;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_String;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_Number;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_Boolean;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_RegExp;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_Error;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_Symbol;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_rhino_TopLevel$Builtins(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$Builtins_GeneratorFunction;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	clinit_rhino_TopLevel$Builtins(ctx);
	SF_rhino_TopLevel$Builtins_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_TopLevel$Builtins[] {
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
	{ "Object", &class_rhino_TopLevel$Builtins, (intptr_t) &SF_rhino_TopLevel$Builtins_Object, "Lrhino/TopLevel$Builtins;", 16409 },
	{ "Array", &class_rhino_TopLevel$Builtins, (intptr_t) &SF_rhino_TopLevel$Builtins_Array, "Lrhino/TopLevel$Builtins;", 16409 },
	{ "Function", &class_rhino_TopLevel$Builtins, (intptr_t) &SF_rhino_TopLevel$Builtins_Function, "Lrhino/TopLevel$Builtins;", 16409 },
	{ "String", &class_rhino_TopLevel$Builtins, (intptr_t) &SF_rhino_TopLevel$Builtins_String, "Lrhino/TopLevel$Builtins;", 16409 },
	{ "Number", &class_rhino_TopLevel$Builtins, (intptr_t) &SF_rhino_TopLevel$Builtins_Number, "Lrhino/TopLevel$Builtins;", 16409 },
	{ "Boolean", &class_rhino_TopLevel$Builtins, (intptr_t) &SF_rhino_TopLevel$Builtins_Boolean, "Lrhino/TopLevel$Builtins;", 16409 },
	{ "RegExp", &class_rhino_TopLevel$Builtins, (intptr_t) &SF_rhino_TopLevel$Builtins_RegExp, "Lrhino/TopLevel$Builtins;", 16409 },
	{ "Error", &class_rhino_TopLevel$Builtins, (intptr_t) &SF_rhino_TopLevel$Builtins_Error, "Lrhino/TopLevel$Builtins;", 16409 },
	{ "Symbol", &class_rhino_TopLevel$Builtins, (intptr_t) &SF_rhino_TopLevel$Builtins_Symbol, "Lrhino/TopLevel$Builtins;", 16409 },
	{ "GeneratorFunction", &class_rhino_TopLevel$Builtins, (intptr_t) &SF_rhino_TopLevel$Builtins_GeneratorFunction, "Lrhino/TopLevel$Builtins;", 16409 },
	{ "$VALUES", getArrayClass(&class_rhino_TopLevel$Builtins, 1), (intptr_t) &SF_rhino_TopLevel$Builtins_$VALUES, "[Lrhino/TopLevel$Builtins;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_rhino_TopLevel$Builtins_values_R_Array1_rhino_TopLevel$Builtins, 0, "()[Lrhino/TopLevel$Builtins;", 9 },
	{ "valueOf", (intptr_t) SM_rhino_TopLevel$Builtins_valueOf_java_lang_String_R_rhino_TopLevel$Builtins, 0, "(Ljava/lang/String;)Lrhino/TopLevel$Builtins;", 9 },
	{ "<init>", (intptr_t) init_rhino_TopLevel$Builtins_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "<clinit>", (intptr_t) clinit_rhino_TopLevel$Builtins, 0, "()V", 8 },
};

Class class_rhino_TopLevel$Builtins{
		.nativeName = (intptr_t) "rhino/TopLevel$Builtins",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(rhino_TopLevel$Builtins),
		.classVtable = (intptr_t) vtable_rhino_TopLevel$Builtins,
		.staticInitializer = (intptr_t) clinit_rhino_TopLevel$Builtins,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_TopLevel$Builtins,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_TopLevel,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_TopLevel$Builtins = registerClass(&class_rhino_TopLevel$Builtins);

}

