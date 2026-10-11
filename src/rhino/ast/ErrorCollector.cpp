#include "rhino/ast/ErrorCollector.h"
#include "rhino/ast/ParseProblem.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "java/util/Iterator.h"
#include "java/lang/UnsupportedOperationException.h"
#include "rhino/ast/ParseProblem_Type.h"
#include "rhino/ast/ErrorCollector.h"
#include "java/util/ArrayList.h"
#include "rhino/ast/IdeErrorReporter.h"
#include "java/util/List.h"
#include "rhino/EvaluatorException.h"

extern "C" {


void mark_rhino_ast_ErrorCollector(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (rhino_ast_ErrorCollector *) object;
	if (self->F_errors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errors)->clazz)->markFunction)((jobject) self->F_errors, mark, depth + 1);
}

void clinit_rhino_ast_ErrorCollector(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_rhino_ast_ErrorCollector(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ErrorCollector:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_rhino_ast_ErrorCollector(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_java_util_ArrayList(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList(ctx, sp[1].o);
	((rhino_ast_ErrorCollector *) NULL_CHECK(sp[0].o))->F_errors = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ErrorCollector:warning", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(25);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ErrorCollector:warning", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(33);
	sp[0].o = (jobject)((rhino_ast_ErrorCollector *) NULL_CHECK((frame[0].o)))->F_errors;
	clinit_rhino_ast_ParseProblem(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ast_ParseProblem);
	clinit_rhino_ast_ParseProblem$Type(ctx);
	sp[2].o = (jobject)SF_rhino_ast_ParseProblem$Type_Warning;
	init_rhino_ast_ParseProblem_rhino_ast_ParseProblem$Type_java_lang_String_java_lang_String_int_int(ctx, sp[1].o, sp[2].o, (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ErrorCollector:error", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(45);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ErrorCollector:error", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((rhino_ast_ErrorCollector *) NULL_CHECK((frame[0].o)))->F_errors;
	clinit_rhino_ast_ParseProblem(ctx);
	sp[1].o = gcAlloc(ctx, &class_rhino_ast_ParseProblem);
	clinit_rhino_ast_ParseProblem$Type(ctx);
	sp[2].o = (jobject)SF_rhino_ast_ParseProblem$Type_Error;
	init_rhino_ast_ParseProblem_rhino_ast_ParseProblem$Type_java_lang_String_java_lang_String_int_int(ctx, sp[1].o, sp[2].o, (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].i));
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ErrorCollector_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jobject param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ErrorCollector:runtimeError", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(66);
	clinit_java_lang_UnsupportedOperationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_UnsupportedOperationException);
	init_java_lang_UnsupportedOperationException(ctx, sp[0].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ErrorCollector_getErrors_R_java_util_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ErrorCollector:getErrors", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((rhino_ast_ErrorCollector *) NULL_CHECK((frame[0].o)))->F_errors;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_rhino_ast_ErrorCollector_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "rhino/ast/ErrorCollector:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(78);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	sp[1].o = (jobject)((rhino_ast_ErrorCollector *) NULL_CHECK((frame[0].o)))->F_errors;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[1].o))(ctx, sp[1].o);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (temp0 * (100)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(79);
	sp[0].o = (jobject)((rhino_ast_ErrorCollector *) NULL_CHECK((frame[0].o)))->F_errors;
	sp[0].o = (jobject)((func_java_util_List_iterator_R_java_util_Iterator) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_iterator_R_java_util_Iterator, sp[0].o))(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_rhino_ast_ParseProblem, sp[0].o));
	LINE_NUMBER(80);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_rhino_ast_ParseProblem_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_rhino_ast_ParseProblem_toString_R_java_lang_String])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	LINE_NUMBER(81);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_rhino_ast_ErrorCollector[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_rhino_ast_ErrorCollector_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_java_lang_String_int,
	(void *) M_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_java_lang_String_int,
	(void *) M_rhino_ast_ErrorCollector_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException,
	(void *) M_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_int,
	(void *) M_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_int,
	(void *) M_rhino_ast_ErrorCollector_getErrors_R_java_util_List,
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
	{ "warning", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V" },
	{ "error", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V" },
	{ "runtimeError", "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)Lrhino/EvaluatorException;" },
	{ "warning", "(Ljava/lang/String;Ljava/lang/String;II)V" },
	{ "error", "(Ljava/lang/String;Ljava/lang/String;II)V" },
	{ "getErrors", "()Ljava/util/List;" },
};

static jclass interfaces[] { &class_rhino_ast_IdeErrorReporter, };

static FieldMetadata fields[] {
	{ "errors", &class_java_util_List, offsetof(rhino_ast_ErrorCollector, F_errors), "Ljava/util/List;", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_rhino_ast_ErrorCollector, 0, "()V", 1 },
	{ "warning", (intptr_t) M_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_java_lang_String_int, VTABLE_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_java_lang_String_int, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V", 1 },
	{ "warning", (intptr_t) M_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_int, VTABLE_rhino_ast_ErrorCollector_warning_java_lang_String_java_lang_String_int_int, "(Ljava/lang/String;Ljava/lang/String;II)V", 1 },
	{ "error", (intptr_t) M_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_java_lang_String_int, VTABLE_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_java_lang_String_int, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V", 1 },
	{ "error", (intptr_t) M_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_int, VTABLE_rhino_ast_ErrorCollector_error_java_lang_String_java_lang_String_int_int, "(Ljava/lang/String;Ljava/lang/String;II)V", 1 },
	{ "runtimeError", (intptr_t) M_rhino_ast_ErrorCollector_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException, VTABLE_rhino_ast_ErrorCollector_runtimeError_java_lang_String_java_lang_String_int_java_lang_String_int_R_rhino_EvaluatorException, "(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)Lrhino/EvaluatorException;", 1 },
	{ "getErrors", (intptr_t) M_rhino_ast_ErrorCollector_getErrors_R_java_util_List, VTABLE_rhino_ast_ErrorCollector_getErrors_R_java_util_List, "()Ljava/util/List;", 1 },
	{ "toString", (intptr_t) M_rhino_ast_ErrorCollector_toString_R_java_lang_String, VTABLE_rhino_ast_ErrorCollector_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_rhino_ast_ErrorCollector{
		.nativeName = (intptr_t) "rhino/ast/ErrorCollector",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(rhino_ast_ErrorCollector),
		.classVtable = (intptr_t) vtable_rhino_ast_ErrorCollector,
		.staticInitializer = (intptr_t) clinit_rhino_ast_ErrorCollector,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_rhino_ast_ErrorCollector,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_rhino_ast_ErrorCollector = registerClass(&class_rhino_ast_ErrorCollector);

}
