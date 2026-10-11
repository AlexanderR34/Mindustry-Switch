#include "rhino/TopLevel_NativeErrors.h"
#include "rhino/TopLevel_NativeErrors.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "rhino/TopLevel.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_rhino_TopLevel$NativeErrors_Error;
jobject SF_rhino_TopLevel$NativeErrors_EvalError;
jobject SF_rhino_TopLevel$NativeErrors_RangeError;
jobject SF_rhino_TopLevel$NativeErrors_ReferenceError;
jobject SF_rhino_TopLevel$NativeErrors_SyntaxError;
jobject SF_rhino_TopLevel$NativeErrors_TypeError;
jobject SF_rhino_TopLevel$NativeErrors_URIError;
jobject SF_rhino_TopLevel$NativeErrors_InternalError;
jobject SF_rhino_TopLevel$NativeErrors_JavaException;
jobject SF_rhino_TopLevel$NativeErrors_$VALUES;

void mark_rhino_TopLevel$NativeErrors(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_rhino_TopLevel$NativeErrors_Error)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$NativeErrors_Error)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$NativeErrors_Error, mark, depth + 1);
		if (SF_rhino_TopLevel$NativeErrors_EvalError)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$NativeErrors_EvalError)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$NativeErrors_EvalError, mark, depth + 1);
		if (SF_rhino_TopLevel$NativeErrors_RangeError)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$NativeErrors_RangeError)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$NativeErrors_RangeError, mark, depth + 1);
		if (SF_rhino_TopLevel$NativeErrors_ReferenceError)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$NativeErrors_ReferenceError)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$NativeErrors_ReferenceError, mark, depth + 1);
		if (SF_rhino_TopLevel$NativeErrors_SyntaxError)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$NativeErrors_SyntaxError)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$NativeErrors_SyntaxError, mark, depth + 1);
		if (SF_rhino_TopLevel$NativeErrors_TypeError)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$NativeErrors_TypeError)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$NativeErrors_TypeError, mark, depth + 1);
		if (SF_rhino_TopLevel$NativeErrors_URIError)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$NativeErrors_URIError)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$NativeErrors_URIError, mark, depth + 1);
		if (SF_rhino_TopLevel$NativeErrors_InternalError)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$NativeErrors_InternalError)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$NativeErrors_InternalError, mark, depth + 1);
		if (SF_rhino_TopLevel$NativeErrors_JavaException)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$NativeErrors_JavaException)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$NativeErrors_JavaException, mark, depth + 1);
		if (SF_rhino_TopLevel$NativeErrors_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_rhino_TopLevel$NativeErrors_$VALUES)->clazz)->markFunction)((jobject) SF_rhino_TopLevel$NativeErrors_$VALUES, mark, depth + 1);
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
	auto self = (rhino_TopLevel$NativeErrors *) object;
}

jobject SM_rhino_TopLevel$NativeErrors_values_R_Array1_rhino_TopLevel$NativeErrors(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel$NativeErrors:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TopLevel$NativeErrors(ctx);
	{
	LINE_NUMBER(63);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[0].o = (jobject)SF_rhino_TopLevel$NativeErrors_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_rhino_TopLevel$NativeErrors, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_rhino_TopLevel$NativeErrors_valueOf_java_lang_String_R_rhino_TopLevel$NativeErrors(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel$NativeErrors:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TopLevel$NativeErrors(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_rhino_TopLevel$NativeErrors)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_rhino_TopLevel$NativeErrors, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_rhino_TopLevel$NativeErrors_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel$NativeErrors:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TopLevel$NativeErrors(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(63);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_rhino_TopLevel$NativeErrors(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/TopLevel$NativeErrors:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_TopLevel$NativeErrors(ctx);
	{
	LINE_NUMBER(65);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$NativeErrors);
	init_rhino_TopLevel$NativeErrors_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Error"_j))), (jint(0)));
	clinit_rhino_TopLevel$NativeErrors(ctx);
	SF_rhino_TopLevel$NativeErrors_Error = sp[0].o;
	LINE_NUMBER(67);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$NativeErrors);
	init_rhino_TopLevel$NativeErrors_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"EvalError"_j))), (jint(1)));
	clinit_rhino_TopLevel$NativeErrors(ctx);
	SF_rhino_TopLevel$NativeErrors_EvalError = sp[0].o;
	LINE_NUMBER(69);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$NativeErrors);
	init_rhino_TopLevel$NativeErrors_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RangeError"_j))), (jint(2)));
	clinit_rhino_TopLevel$NativeErrors(ctx);
	SF_rhino_TopLevel$NativeErrors_RangeError = sp[0].o;
	LINE_NUMBER(71);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$NativeErrors);
	init_rhino_TopLevel$NativeErrors_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ReferenceError"_j))), (jint(3)));
	clinit_rhino_TopLevel$NativeErrors(ctx);
	SF_rhino_TopLevel$NativeErrors_ReferenceError = sp[0].o;
	LINE_NUMBER(73);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$NativeErrors);
	init_rhino_TopLevel$NativeErrors_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SyntaxError"_j))), (jint(4)));
	clinit_rhino_TopLevel$NativeErrors(ctx);
	SF_rhino_TopLevel$NativeErrors_SyntaxError = sp[0].o;
	LINE_NUMBER(75);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$NativeErrors);
	init_rhino_TopLevel$NativeErrors_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TypeError"_j))), (jint(5)));
	clinit_rhino_TopLevel$NativeErrors(ctx);
	SF_rhino_TopLevel$NativeErrors_TypeError = sp[0].o;
	LINE_NUMBER(77);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$NativeErrors);
	init_rhino_TopLevel$NativeErrors_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"URIError"_j))), (6));
	clinit_rhino_TopLevel$NativeErrors(ctx);
	SF_rhino_TopLevel$NativeErrors_URIError = sp[0].o;
	LINE_NUMBER(79);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$NativeErrors);
	init_rhino_TopLevel$NativeErrors_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"InternalError"_j))), (7));
	clinit_rhino_TopLevel$NativeErrors(ctx);
	SF_rhino_TopLevel$NativeErrors_InternalError = sp[0].o;
	LINE_NUMBER(81);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[0].o = gcAlloc(ctx, &class_rhino_TopLevel$NativeErrors);
	init_rhino_TopLevel$NativeErrors_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"JavaException"_j))), (8));
	clinit_rhino_TopLevel$NativeErrors(ctx);
	SF_rhino_TopLevel$NativeErrors_JavaException = sp[0].o;
	LINE_NUMBER(63);
	sp[0].o = (jobject)createArray(ctx, &class_rhino_TopLevel$NativeErrors, (9));
	jint temp0 = jint(0);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$NativeErrors_Error;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$NativeErrors_EvalError;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$NativeErrors_RangeError;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$NativeErrors_ReferenceError;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$NativeErrors_SyntaxError;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$NativeErrors_TypeError;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$NativeErrors_URIError;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$NativeErrors_InternalError;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_rhino_TopLevel$NativeErrors(ctx);
	sp[1].o = (jobject)SF_rhino_TopLevel$NativeErrors_JavaException;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	clinit_rhino_TopLevel$NativeErrors(ctx);
	SF_rhino_TopLevel$NativeErrors_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_TopLevel$NativeErrors[] {
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
	{ "Error", &class_rhino_TopLevel$NativeErrors, (intptr_t) &SF_rhino_TopLevel$NativeErrors_Error, "Lrhino/TopLevel$NativeErrors;", 16409 },
	{ "EvalError", &class_rhino_TopLevel$NativeErrors, (intptr_t) &SF_rhino_TopLevel$NativeErrors_EvalError, "Lrhino/TopLevel$NativeErrors;", 16409 },
	{ "RangeError", &class_rhino_TopLevel$NativeErrors, (intptr_t) &SF_rhino_TopLevel$NativeErrors_RangeError, "Lrhino/TopLevel$NativeErrors;", 16409 },
	{ "ReferenceError", &class_rhino_TopLevel$NativeErrors, (intptr_t) &SF_rhino_TopLevel$NativeErrors_ReferenceError, "Lrhino/TopLevel$NativeErrors;", 16409 },
	{ "SyntaxError", &class_rhino_TopLevel$NativeErrors, (intptr_t) &SF_rhino_TopLevel$NativeErrors_SyntaxError, "Lrhino/TopLevel$NativeErrors;", 16409 },
	{ "TypeError", &class_rhino_TopLevel$NativeErrors, (intptr_t) &SF_rhino_TopLevel$NativeErrors_TypeError, "Lrhino/TopLevel$NativeErrors;", 16409 },
	{ "URIError", &class_rhino_TopLevel$NativeErrors, (intptr_t) &SF_rhino_TopLevel$NativeErrors_URIError, "Lrhino/TopLevel$NativeErrors;", 16409 },
	{ "InternalError", &class_rhino_TopLevel$NativeErrors, (intptr_t) &SF_rhino_TopLevel$NativeErrors_InternalError, "Lrhino/TopLevel$NativeErrors;", 16409 },
	{ "JavaException", &class_rhino_TopLevel$NativeErrors, (intptr_t) &SF_rhino_TopLevel$NativeErrors_JavaException, "Lrhino/TopLevel$NativeErrors;", 16409 },
	{ "$VALUES", getArrayClass(&class_rhino_TopLevel$NativeErrors, 1), (intptr_t) &SF_rhino_TopLevel$NativeErrors_$VALUES, "[Lrhino/TopLevel$NativeErrors;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_rhino_TopLevel$NativeErrors_values_R_Array1_rhino_TopLevel$NativeErrors, 0, "()[Lrhino/TopLevel$NativeErrors;", 9 },
	{ "valueOf", (intptr_t) SM_rhino_TopLevel$NativeErrors_valueOf_java_lang_String_R_rhino_TopLevel$NativeErrors, 0, "(Ljava/lang/String;)Lrhino/TopLevel$NativeErrors;", 9 },
	{ "<init>", (intptr_t) init_rhino_TopLevel$NativeErrors_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "<clinit>", (intptr_t) clinit_rhino_TopLevel$NativeErrors, 0, "()V", 8 },
};

Class class_rhino_TopLevel$NativeErrors{
		.nativeName = (intptr_t) "rhino/TopLevel$NativeErrors",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(rhino_TopLevel$NativeErrors),
		.classVtable = (intptr_t) vtable_rhino_TopLevel$NativeErrors,
		.staticInitializer = (intptr_t) clinit_rhino_TopLevel$NativeErrors,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_TopLevel$NativeErrors,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_rhino_TopLevel,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_TopLevel$NativeErrors = registerClass(&class_rhino_TopLevel$NativeErrors);

}

