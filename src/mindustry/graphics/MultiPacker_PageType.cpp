#include "mindustry/graphics/MultiPacker_PageType.h"
#include "mindustry/graphics/MultiPacker.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "mindustry/graphics/MultiPacker_PageType.h"

extern "C" {

jobject SF_mindustry_graphics_MultiPacker$PageType_main;
jobject SF_mindustry_graphics_MultiPacker$PageType_environment;
jobject SF_mindustry_graphics_MultiPacker$PageType_ui;
jobject SF_mindustry_graphics_MultiPacker$PageType_rubble;
jobject SF_mindustry_graphics_MultiPacker$PageType_all;
jobject SF_mindustry_graphics_MultiPacker$PageType_$VALUES;

void mark_mindustry_graphics_MultiPacker$PageType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_MultiPacker$PageType_main)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_MultiPacker$PageType_main)->clazz)->markFunction)((jobject) SF_mindustry_graphics_MultiPacker$PageType_main, mark, depth + 1);
		if (SF_mindustry_graphics_MultiPacker$PageType_environment)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_MultiPacker$PageType_environment)->clazz)->markFunction)((jobject) SF_mindustry_graphics_MultiPacker$PageType_environment, mark, depth + 1);
		if (SF_mindustry_graphics_MultiPacker$PageType_ui)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_MultiPacker$PageType_ui)->clazz)->markFunction)((jobject) SF_mindustry_graphics_MultiPacker$PageType_ui, mark, depth + 1);
		if (SF_mindustry_graphics_MultiPacker$PageType_rubble)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_MultiPacker$PageType_rubble)->clazz)->markFunction)((jobject) SF_mindustry_graphics_MultiPacker$PageType_rubble, mark, depth + 1);
		if (SF_mindustry_graphics_MultiPacker$PageType_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_MultiPacker$PageType_all)->clazz)->markFunction)((jobject) SF_mindustry_graphics_MultiPacker$PageType_all, mark, depth + 1);
		if (SF_mindustry_graphics_MultiPacker$PageType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_MultiPacker$PageType_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_graphics_MultiPacker$PageType_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_graphics_MultiPacker$PageType *) object;
}

jobject SM_mindustry_graphics_MultiPacker$PageType_values_R_Array1_mindustry_graphics_MultiPacker$PageType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker$PageType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	{
	LINE_NUMBER(127);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_graphics_MultiPacker$PageType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_MultiPacker$PageType_valueOf_java_lang_String_R_mindustry_graphics_MultiPacker$PageType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker$PageType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_graphics_MultiPacker$PageType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_graphics_MultiPacker$PageType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_graphics_MultiPacker$PageType_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker$PageType:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(139);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(137);
	((mindustry_graphics_MultiPacker$PageType *) NULL_CHECK((frame[0].o)))->F_width = (2048);
	((mindustry_graphics_MultiPacker$PageType *) NULL_CHECK((frame[0].o)))->F_height = (2048);
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	jint temp0 = frame[3].i;
	((mindustry_graphics_MultiPacker$PageType *) NULL_CHECK(sp[1].o))->F_height = temp0;
	((mindustry_graphics_MultiPacker$PageType *) NULL_CHECK(sp[0].o))->F_width = temp0;
	LINE_NUMBER(141);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_graphics_MultiPacker$PageType_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker$PageType:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(143);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(137);
	((mindustry_graphics_MultiPacker$PageType *) NULL_CHECK((frame[0].o)))->F_width = (2048);
	((mindustry_graphics_MultiPacker$PageType *) NULL_CHECK((frame[0].o)))->F_height = (2048);
	LINE_NUMBER(144);
	((mindustry_graphics_MultiPacker$PageType *) NULL_CHECK((frame[0].o)))->F_width = (frame[3].i);
	LINE_NUMBER(145);
	((mindustry_graphics_MultiPacker$PageType *) NULL_CHECK((frame[0].o)))->F_height = (frame[4].i);
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_graphics_MultiPacker$PageType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker$PageType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(148);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(137);
	((mindustry_graphics_MultiPacker$PageType *) NULL_CHECK((frame[0].o)))->F_width = (2048);
	((mindustry_graphics_MultiPacker$PageType *) NULL_CHECK((frame[0].o)))->F_height = (2048);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_MultiPacker$PageType_$values_R_Array1_mindustry_graphics_MultiPacker$PageType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker$PageType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_graphics_MultiPacker$PageType, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_main;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_environment;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_ui;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_MultiPacker$PageType_rubble;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_MultiPacker$PageType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/MultiPacker$PageType:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	{
	LINE_NUMBER(129);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_MultiPacker$PageType);
	init_mindustry_graphics_MultiPacker$PageType_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"main"_j))), (jint(0)), (4096));
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	SF_mindustry_graphics_MultiPacker$PageType_main = sp[0].o;
	LINE_NUMBER(131);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_MultiPacker$PageType);
	init_mindustry_graphics_MultiPacker$PageType_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"environment"_j))), (jint(1)), (4096));
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	SF_mindustry_graphics_MultiPacker$PageType_environment = sp[0].o;
	LINE_NUMBER(132);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_MultiPacker$PageType);
	init_mindustry_graphics_MultiPacker$PageType_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ui"_j))), (jint(2)), (4096));
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	SF_mindustry_graphics_MultiPacker$PageType_ui = sp[0].o;
	LINE_NUMBER(133);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_MultiPacker$PageType);
	init_mindustry_graphics_MultiPacker$PageType_java_lang_String_int_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"rubble"_j))), (jint(3)), (4096), (2048));
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	SF_mindustry_graphics_MultiPacker$PageType_rubble = sp[0].o;
	LINE_NUMBER(127);
	sp[0].o = (jobject)SM_mindustry_graphics_MultiPacker$PageType_$values_R_Array1_mindustry_graphics_MultiPacker$PageType(ctx);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	SF_mindustry_graphics_MultiPacker$PageType_$VALUES = sp[0].o;
	LINE_NUMBER(135);
	sp[0].o = (jobject)SM_mindustry_graphics_MultiPacker$PageType_values_R_Array1_mindustry_graphics_MultiPacker$PageType(ctx);
	clinit_mindustry_graphics_MultiPacker$PageType(ctx);
	SF_mindustry_graphics_MultiPacker$PageType_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_MultiPacker$PageType[] {
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
	{ "main", &class_mindustry_graphics_MultiPacker$PageType, (intptr_t) &SF_mindustry_graphics_MultiPacker$PageType_main, "Lmindustry/graphics/MultiPacker$PageType;", 16409 },
	{ "environment", &class_mindustry_graphics_MultiPacker$PageType, (intptr_t) &SF_mindustry_graphics_MultiPacker$PageType_environment, "Lmindustry/graphics/MultiPacker$PageType;", 16409 },
	{ "ui", &class_mindustry_graphics_MultiPacker$PageType, (intptr_t) &SF_mindustry_graphics_MultiPacker$PageType_ui, "Lmindustry/graphics/MultiPacker$PageType;", 16409 },
	{ "rubble", &class_mindustry_graphics_MultiPacker$PageType, (intptr_t) &SF_mindustry_graphics_MultiPacker$PageType_rubble, "Lmindustry/graphics/MultiPacker$PageType;", 16409 },
	{ "all", getArrayClass(&class_mindustry_graphics_MultiPacker$PageType, 1), (intptr_t) &SF_mindustry_graphics_MultiPacker$PageType_all, "[Lmindustry/graphics/MultiPacker$PageType;", 25 },
	{ "width", &class_int, offsetof(mindustry_graphics_MultiPacker$PageType, F_width), "I", 1 },
	{ "height", &class_int, offsetof(mindustry_graphics_MultiPacker$PageType, F_height), "I", 1 },
	{ "$VALUES", getArrayClass(&class_mindustry_graphics_MultiPacker$PageType, 1), (intptr_t) &SF_mindustry_graphics_MultiPacker$PageType_$VALUES, "[Lmindustry/graphics/MultiPacker$PageType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_graphics_MultiPacker$PageType_values_R_Array1_mindustry_graphics_MultiPacker$PageType, 0, "()[Lmindustry/graphics/MultiPacker$PageType;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_graphics_MultiPacker$PageType_valueOf_java_lang_String_R_mindustry_graphics_MultiPacker$PageType, 0, "(Ljava/lang/String;)Lmindustry/graphics/MultiPacker$PageType;", 9 },
	{ "<init>", (intptr_t) init_mindustry_graphics_MultiPacker$PageType_java_lang_String_int_int, 0, "(Ljava/lang/String;II)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_graphics_MultiPacker$PageType_java_lang_String_int_int_int, 0, "(Ljava/lang/String;III)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_graphics_MultiPacker$PageType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_graphics_MultiPacker$PageType_$values_R_Array1_mindustry_graphics_MultiPacker$PageType, 0, "()[Lmindustry/graphics/MultiPacker$PageType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_MultiPacker$PageType, 0, "()V", 8 },
};

Class class_mindustry_graphics_MultiPacker$PageType{
		.nativeName = (intptr_t) "mindustry/graphics/MultiPacker$PageType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_graphics_MultiPacker$PageType),
		.classVtable = (intptr_t) vtable_mindustry_graphics_MultiPacker$PageType,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_MultiPacker$PageType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_MultiPacker$PageType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_MultiPacker,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_MultiPacker$PageType = registerClass(&class_mindustry_graphics_MultiPacker$PageType);

}

