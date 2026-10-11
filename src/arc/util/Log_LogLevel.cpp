#include "arc/util/Log_LogLevel.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/Log.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/util/Log_LogLevel.h"

extern "C" {

jobject SF_arc_util_Log$LogLevel_debug;
jobject SF_arc_util_Log$LogLevel_info;
jobject SF_arc_util_Log$LogLevel_warn;
jobject SF_arc_util_Log$LogLevel_err;
jobject SF_arc_util_Log$LogLevel_none;
jobject SF_arc_util_Log$LogLevel_$VALUES;

void mark_arc_util_Log$LogLevel(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_Log$LogLevel_debug)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Log$LogLevel_debug)->clazz)->markFunction)((jobject) SF_arc_util_Log$LogLevel_debug, mark, depth + 1);
		if (SF_arc_util_Log$LogLevel_info)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Log$LogLevel_info)->clazz)->markFunction)((jobject) SF_arc_util_Log$LogLevel_info, mark, depth + 1);
		if (SF_arc_util_Log$LogLevel_warn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Log$LogLevel_warn)->clazz)->markFunction)((jobject) SF_arc_util_Log$LogLevel_warn, mark, depth + 1);
		if (SF_arc_util_Log$LogLevel_err)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Log$LogLevel_err)->clazz)->markFunction)((jobject) SF_arc_util_Log$LogLevel_err, mark, depth + 1);
		if (SF_arc_util_Log$LogLevel_none)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Log$LogLevel_none)->clazz)->markFunction)((jobject) SF_arc_util_Log$LogLevel_none, mark, depth + 1);
		if (SF_arc_util_Log$LogLevel_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_Log$LogLevel_$VALUES)->clazz)->markFunction)((jobject) SF_arc_util_Log$LogLevel_$VALUES, mark, depth + 1);
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
	auto self = (arc_util_Log$LogLevel *) object;
}

jobject SM_arc_util_Log$LogLevel_values_R_Array1_arc_util_Log$LogLevel(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log$LogLevel:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log$LogLevel(ctx);
	{
	LINE_NUMBER(97);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = (jobject)SF_arc_util_Log$LogLevel_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_util_Log$LogLevel, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Log$LogLevel_valueOf_java_lang_String_R_arc_util_Log$LogLevel(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log$LogLevel:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log$LogLevel(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_util_Log$LogLevel)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_Log$LogLevel, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_util_Log$LogLevel_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log$LogLevel:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log$LogLevel(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(97);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_Log$LogLevel_$values_R_Array1_arc_util_Log$LogLevel(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log$LogLevel:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log$LogLevel(ctx);
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)createArray(ctx, &class_arc_util_Log$LogLevel, (jint(5)));
	jint temp0 = jint(0);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[1].o = (jobject)SF_arc_util_Log$LogLevel_debug;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[1].o = (jobject)SF_arc_util_Log$LogLevel_info;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[1].o = (jobject)SF_arc_util_Log$LogLevel_warn;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[1].o = (jobject)SF_arc_util_Log$LogLevel_err;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[1].o = (jobject)SF_arc_util_Log$LogLevel_none;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_Log$LogLevel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/Log$LogLevel:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_Log$LogLevel(ctx);
	{
	LINE_NUMBER(98);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Log$LogLevel);
	init_arc_util_Log$LogLevel_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"debug"_j))), (jint(0)));
	clinit_arc_util_Log$LogLevel(ctx);
	SF_arc_util_Log$LogLevel_debug = sp[0].o;
	LINE_NUMBER(99);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Log$LogLevel);
	init_arc_util_Log$LogLevel_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"info"_j))), (jint(1)));
	clinit_arc_util_Log$LogLevel(ctx);
	SF_arc_util_Log$LogLevel_info = sp[0].o;
	LINE_NUMBER(100);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Log$LogLevel);
	init_arc_util_Log$LogLevel_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"warn"_j))), (jint(2)));
	clinit_arc_util_Log$LogLevel(ctx);
	SF_arc_util_Log$LogLevel_warn = sp[0].o;
	LINE_NUMBER(101);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Log$LogLevel);
	init_arc_util_Log$LogLevel_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"err"_j))), (jint(3)));
	clinit_arc_util_Log$LogLevel(ctx);
	SF_arc_util_Log$LogLevel_err = sp[0].o;
	LINE_NUMBER(102);
	clinit_arc_util_Log$LogLevel(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_Log$LogLevel);
	init_arc_util_Log$LogLevel_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"none"_j))), (jint(4)));
	clinit_arc_util_Log$LogLevel(ctx);
	SF_arc_util_Log$LogLevel_none = sp[0].o;
	LINE_NUMBER(97);
	sp[0].o = (jobject)SM_arc_util_Log$LogLevel_$values_R_Array1_arc_util_Log$LogLevel(ctx);
	clinit_arc_util_Log$LogLevel(ctx);
	SF_arc_util_Log$LogLevel_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_Log$LogLevel[] {
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
	{ "debug", &class_arc_util_Log$LogLevel, (intptr_t) &SF_arc_util_Log$LogLevel_debug, "Larc/util/Log$LogLevel;", 16409 },
	{ "info", &class_arc_util_Log$LogLevel, (intptr_t) &SF_arc_util_Log$LogLevel_info, "Larc/util/Log$LogLevel;", 16409 },
	{ "warn", &class_arc_util_Log$LogLevel, (intptr_t) &SF_arc_util_Log$LogLevel_warn, "Larc/util/Log$LogLevel;", 16409 },
	{ "err", &class_arc_util_Log$LogLevel, (intptr_t) &SF_arc_util_Log$LogLevel_err, "Larc/util/Log$LogLevel;", 16409 },
	{ "none", &class_arc_util_Log$LogLevel, (intptr_t) &SF_arc_util_Log$LogLevel_none, "Larc/util/Log$LogLevel;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_util_Log$LogLevel, 1), (intptr_t) &SF_arc_util_Log$LogLevel_$VALUES, "[Larc/util/Log$LogLevel;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_util_Log$LogLevel_values_R_Array1_arc_util_Log$LogLevel, 0, "()[Larc/util/Log$LogLevel;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_Log$LogLevel_valueOf_java_lang_String_R_arc_util_Log$LogLevel, 0, "(Ljava/lang/String;)Larc/util/Log$LogLevel;", 9 },
	{ "<init>", (intptr_t) init_arc_util_Log$LogLevel_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_util_Log$LogLevel_$values_R_Array1_arc_util_Log$LogLevel, 0, "()[Larc/util/Log$LogLevel;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_util_Log$LogLevel, 0, "()V", 8 },
};

Class class_arc_util_Log$LogLevel{
		.nativeName = (intptr_t) "arc/util/Log$LogLevel",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_util_Log$LogLevel),
		.classVtable = (intptr_t) vtable_arc_util_Log$LogLevel,
		.staticInitializer = (intptr_t) clinit_arc_util_Log$LogLevel,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_Log$LogLevel,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_Log,
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
static bool registered_arc_util_Log$LogLevel = registerClass(&class_arc_util_Log$LogLevel);

}

