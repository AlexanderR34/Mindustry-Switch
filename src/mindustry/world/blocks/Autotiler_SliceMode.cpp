#include "mindustry/world/blocks/Autotiler_SliceMode.h"
#include "java/lang/Object.h"
#include "mindustry/world/blocks/Autotiler.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/Autotiler_SliceMode.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_world_blocks_Autotiler$SliceMode_none;
jobject SF_mindustry_world_blocks_Autotiler$SliceMode_bottom;
jobject SF_mindustry_world_blocks_Autotiler$SliceMode_top;
jobject SF_mindustry_world_blocks_Autotiler$SliceMode_$VALUES;

void mark_mindustry_world_blocks_Autotiler$SliceMode(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_blocks_Autotiler$SliceMode_none)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_Autotiler$SliceMode_none)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_Autotiler$SliceMode_none, mark, depth + 1);
		if (SF_mindustry_world_blocks_Autotiler$SliceMode_bottom)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_Autotiler$SliceMode_bottom)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_Autotiler$SliceMode_bottom, mark, depth + 1);
		if (SF_mindustry_world_blocks_Autotiler$SliceMode_top)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_Autotiler$SliceMode_top)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_Autotiler$SliceMode_top, mark, depth + 1);
		if (SF_mindustry_world_blocks_Autotiler$SliceMode_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_blocks_Autotiler$SliceMode_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_world_blocks_Autotiler$SliceMode_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_world_blocks_Autotiler$SliceMode *) object;
}

jobject SM_mindustry_world_blocks_Autotiler$SliceMode_values_R_Array1_mindustry_world_blocks_Autotiler$SliceMode(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler$SliceMode:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	{
	LINE_NUMBER(44);
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	sp[0].o = (jobject)SF_mindustry_world_blocks_Autotiler$SliceMode_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_world_blocks_Autotiler$SliceMode, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_Autotiler$SliceMode_valueOf_java_lang_String_R_mindustry_world_blocks_Autotiler$SliceMode(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler$SliceMode:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_world_blocks_Autotiler$SliceMode)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_blocks_Autotiler$SliceMode, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_world_blocks_Autotiler$SliceMode_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler$SliceMode:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(44);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_Autotiler$SliceMode_$values_R_Array1_mindustry_world_blocks_Autotiler$SliceMode(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler$SliceMode:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_world_blocks_Autotiler$SliceMode, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_Autotiler$SliceMode_none;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_Autotiler$SliceMode_bottom;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	sp[1].o = (jobject)SF_mindustry_world_blocks_Autotiler$SliceMode_top;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_blocks_Autotiler$SliceMode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/Autotiler$SliceMode:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	{
	LINE_NUMBER(45);
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_Autotiler$SliceMode);
	init_mindustry_world_blocks_Autotiler$SliceMode_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"none"_j))), (jint(0)));
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	SF_mindustry_world_blocks_Autotiler$SliceMode_none = sp[0].o;
	LINE_NUMBER(46);
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_Autotiler$SliceMode);
	init_mindustry_world_blocks_Autotiler$SliceMode_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bottom"_j))), (jint(1)));
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	SF_mindustry_world_blocks_Autotiler$SliceMode_bottom = sp[0].o;
	LINE_NUMBER(47);
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_Autotiler$SliceMode);
	init_mindustry_world_blocks_Autotiler$SliceMode_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"top"_j))), (jint(2)));
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	SF_mindustry_world_blocks_Autotiler$SliceMode_top = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject)SM_mindustry_world_blocks_Autotiler$SliceMode_$values_R_Array1_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	clinit_mindustry_world_blocks_Autotiler$SliceMode(ctx);
	SF_mindustry_world_blocks_Autotiler$SliceMode_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_Autotiler$SliceMode[] {
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
	{ "none", &class_mindustry_world_blocks_Autotiler$SliceMode, (intptr_t) &SF_mindustry_world_blocks_Autotiler$SliceMode_none, "Lmindustry/world/blocks/Autotiler$SliceMode;", 16409 },
	{ "bottom", &class_mindustry_world_blocks_Autotiler$SliceMode, (intptr_t) &SF_mindustry_world_blocks_Autotiler$SliceMode_bottom, "Lmindustry/world/blocks/Autotiler$SliceMode;", 16409 },
	{ "top", &class_mindustry_world_blocks_Autotiler$SliceMode, (intptr_t) &SF_mindustry_world_blocks_Autotiler$SliceMode_top, "Lmindustry/world/blocks/Autotiler$SliceMode;", 16409 },
	{ "$VALUES", getArrayClass(&class_mindustry_world_blocks_Autotiler$SliceMode, 1), (intptr_t) &SF_mindustry_world_blocks_Autotiler$SliceMode_$VALUES, "[Lmindustry/world/blocks/Autotiler$SliceMode;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_world_blocks_Autotiler$SliceMode_values_R_Array1_mindustry_world_blocks_Autotiler$SliceMode, 0, "()[Lmindustry/world/blocks/Autotiler$SliceMode;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_world_blocks_Autotiler$SliceMode_valueOf_java_lang_String_R_mindustry_world_blocks_Autotiler$SliceMode, 0, "(Ljava/lang/String;)Lmindustry/world/blocks/Autotiler$SliceMode;", 9 },
	{ "<init>", (intptr_t) init_mindustry_world_blocks_Autotiler$SliceMode_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_world_blocks_Autotiler$SliceMode_$values_R_Array1_mindustry_world_blocks_Autotiler$SliceMode, 0, "()[Lmindustry/world/blocks/Autotiler$SliceMode;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_blocks_Autotiler$SliceMode, 0, "()V", 8 },
};

Class class_mindustry_world_blocks_Autotiler$SliceMode{
		.nativeName = (intptr_t) "mindustry/world/blocks/Autotiler$SliceMode",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_world_blocks_Autotiler$SliceMode),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_Autotiler$SliceMode,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_Autotiler$SliceMode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_Autotiler$SliceMode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_world_blocks_Autotiler,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_Autotiler$SliceMode = registerClass(&class_mindustry_world_blocks_Autotiler$SliceMode);

}

