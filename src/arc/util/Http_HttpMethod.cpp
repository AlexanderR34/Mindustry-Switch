#include "arc/util/Http_HttpMethod.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/Http.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/util/Http_HttpMethod.h"

extern "C" {

jobject SF_arc_util_Http$HttpMethod_GET;
jobject SF_arc_util_Http$HttpMethod_POST;
jobject SF_arc_util_Http$HttpMethod_PUT;
jobject SF_arc_util_Http$HttpMethod_DELETE;
jobject SF_arc_util_Http$HttpMethod_HEAD;
jobject SF_arc_util_Http$HttpMethod_CONNECT;
jobject SF_arc_util_Http$HttpMethod_OPTIONS;
jobject SF_arc_util_Http$HttpMethod_TRACE;
jobject SF_arc_util_Http$HttpMethod_$VALUES;

void mark_arc_util_Http$HttpMethod(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_Http$HttpMethod_GET)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpMethod_GET)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpMethod_GET, mark, depth + 1);
		if (SF_arc_util_Http$HttpMethod_POST)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpMethod_POST)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpMethod_POST, mark, depth + 1);
		if (SF_arc_util_Http$HttpMethod_PUT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpMethod_PUT)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpMethod_PUT, mark, depth + 1);
		if (SF_arc_util_Http$HttpMethod_DELETE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpMethod_DELETE)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpMethod_DELETE, mark, depth + 1);
		if (SF_arc_util_Http$HttpMethod_HEAD)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpMethod_HEAD)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpMethod_HEAD, mark, depth + 1);
		if (SF_arc_util_Http$HttpMethod_CONNECT)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpMethod_CONNECT)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpMethod_CONNECT, mark, depth + 1);
		if (SF_arc_util_Http$HttpMethod_OPTIONS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpMethod_OPTIONS)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpMethod_OPTIONS, mark, depth + 1);
		if (SF_arc_util_Http$HttpMethod_TRACE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpMethod_TRACE)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpMethod_TRACE, mark, depth + 1);
		if (SF_arc_util_Http$HttpMethod_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Http$HttpMethod_$VALUES)->clazz)->markFunction)((jobject) SF_arc_util_Http$HttpMethod_$VALUES, mark, depth + 1);
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
	auto self = (arc_util_Http$HttpMethod *) object;
}

jobject SM_arc_util_Http$HttpMethod_values_R_Array1_arc_util_Http$HttpMethod(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpMethod:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http$HttpMethod(ctx);
	{
	LINE_NUMBER(336);
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[0].o = (jobject)SF_arc_util_Http$HttpMethod_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_util_Http$HttpMethod, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Http$HttpMethod_valueOf_java_lang_String_R_arc_util_Http$HttpMethod(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpMethod:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http$HttpMethod(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_util_Http$HttpMethod)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_Http$HttpMethod, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_util_Http$HttpMethod_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpMethod:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http$HttpMethod(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(336);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Http$HttpMethod_$values_R_Array1_arc_util_Http$HttpMethod(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpMethod:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http$HttpMethod(ctx);
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)createArray(ctx, &class_arc_util_Http$HttpMethod, (8));
	jint temp0 = jint(0);
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpMethod_GET;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpMethod_POST;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpMethod_PUT;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpMethod_DELETE;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpMethod_HEAD;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpMethod_CONNECT;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpMethod_OPTIONS;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpMethod_TRACE;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_Http$HttpMethod(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Http$HttpMethod:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Http$HttpMethod(ctx);
	{
	LINE_NUMBER(337);
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpMethod);
	init_arc_util_Http$HttpMethod_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GET"_j))), (jint(0)));
	clinit_arc_util_Http$HttpMethod(ctx);
	SF_arc_util_Http$HttpMethod_GET = sp[0].o;
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpMethod);
	init_arc_util_Http$HttpMethod_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"POST"_j))), (jint(1)));
	clinit_arc_util_Http$HttpMethod(ctx);
	SF_arc_util_Http$HttpMethod_POST = sp[0].o;
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpMethod);
	init_arc_util_Http$HttpMethod_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PUT"_j))), (jint(2)));
	clinit_arc_util_Http$HttpMethod(ctx);
	SF_arc_util_Http$HttpMethod_PUT = sp[0].o;
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpMethod);
	init_arc_util_Http$HttpMethod_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"DELETE"_j))), (jint(3)));
	clinit_arc_util_Http$HttpMethod(ctx);
	SF_arc_util_Http$HttpMethod_DELETE = sp[0].o;
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpMethod);
	init_arc_util_Http$HttpMethod_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"HEAD"_j))), (jint(4)));
	clinit_arc_util_Http$HttpMethod(ctx);
	SF_arc_util_Http$HttpMethod_HEAD = sp[0].o;
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpMethod);
	init_arc_util_Http$HttpMethod_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"CONNECT"_j))), (jint(5)));
	clinit_arc_util_Http$HttpMethod(ctx);
	SF_arc_util_Http$HttpMethod_CONNECT = sp[0].o;
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpMethod);
	init_arc_util_Http$HttpMethod_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"OPTIONS"_j))), (6));
	clinit_arc_util_Http$HttpMethod(ctx);
	SF_arc_util_Http$HttpMethod_OPTIONS = sp[0].o;
	clinit_arc_util_Http$HttpMethod(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Http$HttpMethod);
	init_arc_util_Http$HttpMethod_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TRACE"_j))), (7));
	clinit_arc_util_Http$HttpMethod(ctx);
	SF_arc_util_Http$HttpMethod_TRACE = sp[0].o;
	LINE_NUMBER(336);
	sp[0].o = (jobject)SM_arc_util_Http$HttpMethod_$values_R_Array1_arc_util_Http$HttpMethod(ctx);
	clinit_arc_util_Http$HttpMethod(ctx);
	SF_arc_util_Http$HttpMethod_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Http$HttpMethod[] {
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
	{ "GET", &class_arc_util_Http$HttpMethod, (intptr_t) &SF_arc_util_Http$HttpMethod_GET, "Larc/util/Http$HttpMethod;", 16409 },
	{ "POST", &class_arc_util_Http$HttpMethod, (intptr_t) &SF_arc_util_Http$HttpMethod_POST, "Larc/util/Http$HttpMethod;", 16409 },
	{ "PUT", &class_arc_util_Http$HttpMethod, (intptr_t) &SF_arc_util_Http$HttpMethod_PUT, "Larc/util/Http$HttpMethod;", 16409 },
	{ "DELETE", &class_arc_util_Http$HttpMethod, (intptr_t) &SF_arc_util_Http$HttpMethod_DELETE, "Larc/util/Http$HttpMethod;", 16409 },
	{ "HEAD", &class_arc_util_Http$HttpMethod, (intptr_t) &SF_arc_util_Http$HttpMethod_HEAD, "Larc/util/Http$HttpMethod;", 16409 },
	{ "CONNECT", &class_arc_util_Http$HttpMethod, (intptr_t) &SF_arc_util_Http$HttpMethod_CONNECT, "Larc/util/Http$HttpMethod;", 16409 },
	{ "OPTIONS", &class_arc_util_Http$HttpMethod, (intptr_t) &SF_arc_util_Http$HttpMethod_OPTIONS, "Larc/util/Http$HttpMethod;", 16409 },
	{ "TRACE", &class_arc_util_Http$HttpMethod, (intptr_t) &SF_arc_util_Http$HttpMethod_TRACE, "Larc/util/Http$HttpMethod;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_util_Http$HttpMethod, 1), (intptr_t) &SF_arc_util_Http$HttpMethod_$VALUES, "[Larc/util/Http$HttpMethod;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_util_Http$HttpMethod_values_R_Array1_arc_util_Http$HttpMethod, 0, "()[Larc/util/Http$HttpMethod;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_Http$HttpMethod_valueOf_java_lang_String_R_arc_util_Http$HttpMethod, 0, "(Ljava/lang/String;)Larc/util/Http$HttpMethod;", 9 },
	{ "<init>", (intptr_t) init_arc_util_Http$HttpMethod_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_util_Http$HttpMethod_$values_R_Array1_arc_util_Http$HttpMethod, 0, "()[Larc/util/Http$HttpMethod;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_util_Http$HttpMethod, 0, "()V", 8 },
};

Class class_arc_util_Http$HttpMethod{
		.nativeName = (intptr_t) "arc/util/Http$HttpMethod",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_util_Http$HttpMethod),
		.classVtable = (intptr_t) vtable_arc_util_Http$HttpMethod,
		.staticInitializer = (intptr_t) clinit_arc_util_Http$HttpMethod,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Http$HttpMethod,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_Http,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_Http$HttpMethod = registerClass(&class_arc_util_Http$HttpMethod);

}

