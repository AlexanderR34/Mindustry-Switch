#include "arc/util/CommandHandler_ResponseType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/util/CommandHandler_ResponseType.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/util/CommandHandler.h"

extern "C" {

jobject SF_arc_util_CommandHandler$ResponseType_noCommand;
jobject SF_arc_util_CommandHandler$ResponseType_unknownCommand;
jobject SF_arc_util_CommandHandler$ResponseType_fewArguments;
jobject SF_arc_util_CommandHandler$ResponseType_manyArguments;
jobject SF_arc_util_CommandHandler$ResponseType_valid;
jobject SF_arc_util_CommandHandler$ResponseType_$VALUES;

void mark_arc_util_CommandHandler$ResponseType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_util_CommandHandler$ResponseType_noCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_CommandHandler$ResponseType_noCommand)->clazz)->markFunction)((jobject) SF_arc_util_CommandHandler$ResponseType_noCommand, mark, depth + 1);
		if (SF_arc_util_CommandHandler$ResponseType_unknownCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_CommandHandler$ResponseType_unknownCommand)->clazz)->markFunction)((jobject) SF_arc_util_CommandHandler$ResponseType_unknownCommand, mark, depth + 1);
		if (SF_arc_util_CommandHandler$ResponseType_fewArguments)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_CommandHandler$ResponseType_fewArguments)->clazz)->markFunction)((jobject) SF_arc_util_CommandHandler$ResponseType_fewArguments, mark, depth + 1);
		if (SF_arc_util_CommandHandler$ResponseType_manyArguments)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_CommandHandler$ResponseType_manyArguments)->clazz)->markFunction)((jobject) SF_arc_util_CommandHandler$ResponseType_manyArguments, mark, depth + 1);
		if (SF_arc_util_CommandHandler$ResponseType_valid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_CommandHandler$ResponseType_valid)->clazz)->markFunction)((jobject) SF_arc_util_CommandHandler$ResponseType_valid, mark, depth + 1);
		if (SF_arc_util_CommandHandler$ResponseType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_util_CommandHandler$ResponseType_$VALUES)->clazz)->markFunction)((jobject) SF_arc_util_CommandHandler$ResponseType_$VALUES, mark, depth + 1);
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
	auto self = (arc_util_CommandHandler$ResponseType *) object;
}

jobject SM_arc_util_CommandHandler$ResponseType_values_R_Array1_arc_util_CommandHandler$ResponseType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler$ResponseType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_CommandHandler$ResponseType(ctx);
	{
	LINE_NUMBER(136);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[0].o = (jobject)SF_arc_util_CommandHandler$ResponseType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_util_CommandHandler$ResponseType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_CommandHandler$ResponseType_valueOf_java_lang_String_R_arc_util_CommandHandler$ResponseType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler$ResponseType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_CommandHandler$ResponseType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_util_CommandHandler$ResponseType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_util_CommandHandler$ResponseType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_util_CommandHandler$ResponseType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler$ResponseType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_CommandHandler$ResponseType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(136);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_util_CommandHandler$ResponseType_$values_R_Array1_arc_util_CommandHandler$ResponseType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler$ResponseType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_CommandHandler$ResponseType(ctx);
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)createArray(ctx, &class_arc_util_CommandHandler$ResponseType, (jint(5)));
	jint temp0 = jint(0);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_noCommand;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_unknownCommand;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_fewArguments;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_manyArguments;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[1].o = (jobject)SF_arc_util_CommandHandler$ResponseType_valid;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_util_CommandHandler$ResponseType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/util/CommandHandler$ResponseType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_util_CommandHandler$ResponseType(ctx);
	{
	LINE_NUMBER(137);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_CommandHandler$ResponseType);
	init_arc_util_CommandHandler$ResponseType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"noCommand"_j))), (jint(0)));
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	SF_arc_util_CommandHandler$ResponseType_noCommand = sp[0].o;
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_CommandHandler$ResponseType);
	init_arc_util_CommandHandler$ResponseType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unknownCommand"_j))), (jint(1)));
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	SF_arc_util_CommandHandler$ResponseType_unknownCommand = sp[0].o;
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_CommandHandler$ResponseType);
	init_arc_util_CommandHandler$ResponseType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fewArguments"_j))), (jint(2)));
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	SF_arc_util_CommandHandler$ResponseType_fewArguments = sp[0].o;
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_CommandHandler$ResponseType);
	init_arc_util_CommandHandler$ResponseType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"manyArguments"_j))), (jint(3)));
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	SF_arc_util_CommandHandler$ResponseType_manyArguments = sp[0].o;
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_CommandHandler$ResponseType);
	init_arc_util_CommandHandler$ResponseType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"valid"_j))), (jint(4)));
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	SF_arc_util_CommandHandler$ResponseType_valid = sp[0].o;
	LINE_NUMBER(136);
	sp[0].o = (jobject)SM_arc_util_CommandHandler$ResponseType_$values_R_Array1_arc_util_CommandHandler$ResponseType(ctx);
	clinit_arc_util_CommandHandler$ResponseType(ctx);
	SF_arc_util_CommandHandler$ResponseType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_util_CommandHandler$ResponseType[] {
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
	{ "noCommand", &class_arc_util_CommandHandler$ResponseType, (intptr_t) &SF_arc_util_CommandHandler$ResponseType_noCommand, "Larc/util/CommandHandler$ResponseType;", 16409 },
	{ "unknownCommand", &class_arc_util_CommandHandler$ResponseType, (intptr_t) &SF_arc_util_CommandHandler$ResponseType_unknownCommand, "Larc/util/CommandHandler$ResponseType;", 16409 },
	{ "fewArguments", &class_arc_util_CommandHandler$ResponseType, (intptr_t) &SF_arc_util_CommandHandler$ResponseType_fewArguments, "Larc/util/CommandHandler$ResponseType;", 16409 },
	{ "manyArguments", &class_arc_util_CommandHandler$ResponseType, (intptr_t) &SF_arc_util_CommandHandler$ResponseType_manyArguments, "Larc/util/CommandHandler$ResponseType;", 16409 },
	{ "valid", &class_arc_util_CommandHandler$ResponseType, (intptr_t) &SF_arc_util_CommandHandler$ResponseType_valid, "Larc/util/CommandHandler$ResponseType;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_util_CommandHandler$ResponseType, 1), (intptr_t) &SF_arc_util_CommandHandler$ResponseType_$VALUES, "[Larc/util/CommandHandler$ResponseType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_util_CommandHandler$ResponseType_values_R_Array1_arc_util_CommandHandler$ResponseType, 0, "()[Larc/util/CommandHandler$ResponseType;", 9 },
	{ "valueOf", (intptr_t) SM_arc_util_CommandHandler$ResponseType_valueOf_java_lang_String_R_arc_util_CommandHandler$ResponseType, 0, "(Ljava/lang/String;)Larc/util/CommandHandler$ResponseType;", 9 },
	{ "<init>", (intptr_t) init_arc_util_CommandHandler$ResponseType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_util_CommandHandler$ResponseType_$values_R_Array1_arc_util_CommandHandler$ResponseType, 0, "()[Larc/util/CommandHandler$ResponseType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_util_CommandHandler$ResponseType, 0, "()V", 8 },
};

Class class_arc_util_CommandHandler$ResponseType{
		.nativeName = (intptr_t) "arc/util/CommandHandler$ResponseType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_util_CommandHandler$ResponseType),
		.classVtable = (intptr_t) vtable_arc_util_CommandHandler$ResponseType,
		.staticInitializer = (intptr_t) clinit_arc_util_CommandHandler$ResponseType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_util_CommandHandler$ResponseType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_util_CommandHandler,
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
static bool registered_arc_util_CommandHandler$ResponseType = registerClass(&class_arc_util_CommandHandler$ResponseType);

}

