#include "arc/util/serialization/Jval_Jformat.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/serialization/Jval.h"
#include "arc/util/serialization/Jval_Jformat.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_util_serialization_Jval$Jformat_plain;
jobject SF_arc_util_serialization_Jval$Jformat_minimal;
jobject SF_arc_util_serialization_Jval$Jformat_formatted;
jobject SF_arc_util_serialization_Jval$Jformat_hjson;
jobject SF_arc_util_serialization_Jval$Jformat_$VALUES;

void mark_arc_util_serialization_Jval$Jformat(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_serialization_Jval$Jformat_plain)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval$Jformat_plain)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval$Jformat_plain, mark, depth + 1);
		if (SF_arc_util_serialization_Jval$Jformat_minimal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval$Jformat_minimal)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval$Jformat_minimal, mark, depth + 1);
		if (SF_arc_util_serialization_Jval$Jformat_formatted)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval$Jformat_formatted)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval$Jformat_formatted, mark, depth + 1);
		if (SF_arc_util_serialization_Jval$Jformat_hjson)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval$Jformat_hjson)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval$Jformat_hjson, mark, depth + 1);
		if (SF_arc_util_serialization_Jval$Jformat_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_serialization_Jval$Jformat_$VALUES)->clazz)->markFunction)((jobject) SF_arc_util_serialization_Jval$Jformat_$VALUES, mark, depth + 1);
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
	auto self = (arc_util_serialization_Jval$Jformat *) object;
}

jobject SM_arc_util_serialization_Jval$Jformat_values_R_Array1_arc_util_serialization_Jval$Jformat(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jformat:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jformat(ctx);
	{
	LINE_NUMBER(429);
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[0].o = (jobject)SF_arc_util_serialization_Jval$Jformat_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_util_serialization_Jval$Jformat, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval$Jformat_valueOf_java_lang_String_R_arc_util_serialization_Jval$Jformat(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jformat:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jformat(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_util_serialization_Jval$Jformat)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_serialization_Jval$Jformat, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_util_serialization_Jval$Jformat_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jformat:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jformat(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(429);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_serialization_Jval$Jformat_$values_R_Array1_arc_util_serialization_Jval$Jformat(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jformat:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jformat(ctx);
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)createArray(ctx, &class_arc_util_serialization_Jval$Jformat, (jint(4)));
	jint temp0 = jint(0);
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jformat_plain;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jformat_minimal;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jformat_formatted;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[1].o = (jobject)SF_arc_util_serialization_Jval$Jformat_hjson;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_serialization_Jval$Jformat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/serialization/Jval$Jformat:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_serialization_Jval$Jformat(ctx);
	{
	LINE_NUMBER(431);
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$Jformat);
	init_arc_util_serialization_Jval$Jformat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"plain"_j))), (jint(0)));
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	SF_arc_util_serialization_Jval$Jformat_plain = sp[0].o;
	LINE_NUMBER(433);
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$Jformat);
	init_arc_util_serialization_Jval$Jformat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"minimal"_j))), (jint(1)));
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	SF_arc_util_serialization_Jval$Jformat_minimal = sp[0].o;
	LINE_NUMBER(435);
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$Jformat);
	init_arc_util_serialization_Jval$Jformat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"formatted"_j))), (jint(2)));
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	SF_arc_util_serialization_Jval$Jformat_formatted = sp[0].o;
	LINE_NUMBER(437);
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_Jval$Jformat);
	init_arc_util_serialization_Jval$Jformat_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"hjson"_j))), (jint(3)));
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	SF_arc_util_serialization_Jval$Jformat_hjson = sp[0].o;
	LINE_NUMBER(429);
	sp[0].o = (jobject)SM_arc_util_serialization_Jval$Jformat_$values_R_Array1_arc_util_serialization_Jval$Jformat(ctx);
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	SF_arc_util_serialization_Jval$Jformat_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_serialization_Jval$Jformat[] {
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
	{ "plain", &class_arc_util_serialization_Jval$Jformat, (intptr_t) &SF_arc_util_serialization_Jval$Jformat_plain, "Larc/util/serialization/Jval$Jformat;", 16409 },
	{ "minimal", &class_arc_util_serialization_Jval$Jformat, (intptr_t) &SF_arc_util_serialization_Jval$Jformat_minimal, "Larc/util/serialization/Jval$Jformat;", 16409 },
	{ "formatted", &class_arc_util_serialization_Jval$Jformat, (intptr_t) &SF_arc_util_serialization_Jval$Jformat_formatted, "Larc/util/serialization/Jval$Jformat;", 16409 },
	{ "hjson", &class_arc_util_serialization_Jval$Jformat, (intptr_t) &SF_arc_util_serialization_Jval$Jformat_hjson, "Larc/util/serialization/Jval$Jformat;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_util_serialization_Jval$Jformat, 1), (intptr_t) &SF_arc_util_serialization_Jval$Jformat_$VALUES, "[Larc/util/serialization/Jval$Jformat;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_util_serialization_Jval$Jformat_values_R_Array1_arc_util_serialization_Jval$Jformat, 0, "()[Larc/util/serialization/Jval$Jformat;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_serialization_Jval$Jformat_valueOf_java_lang_String_R_arc_util_serialization_Jval$Jformat, 0, "(Ljava/lang/String;)Larc/util/serialization/Jval$Jformat;", 9 },
	{ "<init>", (intptr_t) init_arc_util_serialization_Jval$Jformat_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_util_serialization_Jval$Jformat_$values_R_Array1_arc_util_serialization_Jval$Jformat, 0, "()[Larc/util/serialization/Jval$Jformat;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_util_serialization_Jval$Jformat, 0, "()V", 8 },
};

Class class_arc_util_serialization_Jval$Jformat{
		.nativeName = (intptr_t) "arc/util/serialization/Jval$Jformat",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_util_serialization_Jval$Jformat),
		.classVtable = (intptr_t) vtable_arc_util_serialization_Jval$Jformat,
		.staticInitializer = (intptr_t) clinit_arc_util_serialization_Jval$Jformat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_serialization_Jval$Jformat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_serialization_Jval,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_util_serialization_Jval$Jformat = registerClass(&class_arc_util_serialization_Jval$Jformat);

}

