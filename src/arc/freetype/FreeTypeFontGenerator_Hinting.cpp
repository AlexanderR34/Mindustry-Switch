#include "arc/freetype/FreeTypeFontGenerator_Hinting.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/freetype/FreeTypeFontGenerator.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/freetype/FreeTypeFontGenerator_Hinting.h"

extern "C" {

jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_none;
jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_slight;
jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_medium;
jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_full;
jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoSlight;
jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoMedium;
jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoFull;
jobject SF_arc_freetype_FreeTypeFontGenerator$Hinting_$VALUES;

void mark_arc_freetype_FreeTypeFontGenerator$Hinting(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_freetype_FreeTypeFontGenerator$Hinting_none)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_none)->clazz)->markFunction)((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_none, mark, depth + 1);
		if (SF_arc_freetype_FreeTypeFontGenerator$Hinting_slight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_slight)->clazz)->markFunction)((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_slight, mark, depth + 1);
		if (SF_arc_freetype_FreeTypeFontGenerator$Hinting_medium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_medium)->clazz)->markFunction)((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_medium, mark, depth + 1);
		if (SF_arc_freetype_FreeTypeFontGenerator$Hinting_full)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_full)->clazz)->markFunction)((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_full, mark, depth + 1);
		if (SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoSlight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoSlight)->clazz)->markFunction)((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoSlight, mark, depth + 1);
		if (SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoMedium)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoMedium)->clazz)->markFunction)((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoMedium, mark, depth + 1);
		if (SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoFull)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoFull)->clazz)->markFunction)((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoFull, mark, depth + 1);
		if (SF_arc_freetype_FreeTypeFontGenerator$Hinting_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_$VALUES)->clazz)->markFunction)((jobject) SF_arc_freetype_FreeTypeFontGenerator$Hinting_$VALUES, mark, depth + 1);
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
	auto self = (arc_freetype_FreeTypeFontGenerator$Hinting *) object;
}

jobject SM_arc_freetype_FreeTypeFontGenerator$Hinting_values_R_Array1_arc_freetype_FreeTypeFontGenerator$Hinting(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$Hinting:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	{
	LINE_NUMBER(663);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = (jobject)SF_arc_freetype_FreeTypeFontGenerator$Hinting_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_freetype_FreeTypeFontGenerator$Hinting, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_freetype_FreeTypeFontGenerator$Hinting_valueOf_java_lang_String_R_arc_freetype_FreeTypeFontGenerator$Hinting(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$Hinting:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_freetype_FreeTypeFontGenerator$Hinting)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_freetype_FreeTypeFontGenerator$Hinting, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$Hinting:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(663);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_freetype_FreeTypeFontGenerator$Hinting_$values_R_Array1_arc_freetype_FreeTypeFontGenerator$Hinting(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$Hinting:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)createArray(ctx, &class_arc_freetype_FreeTypeFontGenerator$Hinting, (7));
	jint temp0 = jint(0);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_arc_freetype_FreeTypeFontGenerator$Hinting_none;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_arc_freetype_FreeTypeFontGenerator$Hinting_slight;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_arc_freetype_FreeTypeFontGenerator$Hinting_medium;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_arc_freetype_FreeTypeFontGenerator$Hinting_full;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoSlight;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoMedium;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[1].o = (jobject)SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoFull;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_freetype_FreeTypeFontGenerator$Hinting(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/freetype/FreeTypeFontGenerator$Hinting:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	{
	LINE_NUMBER(665);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$Hinting);
	init_arc_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"none"_j))), (jint(0)));
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_arc_freetype_FreeTypeFontGenerator$Hinting_none = sp[0].o;
	LINE_NUMBER(667);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$Hinting);
	init_arc_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"slight"_j))), (jint(1)));
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_arc_freetype_FreeTypeFontGenerator$Hinting_slight = sp[0].o;
	LINE_NUMBER(669);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$Hinting);
	init_arc_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"medium"_j))), (jint(2)));
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_arc_freetype_FreeTypeFontGenerator$Hinting_medium = sp[0].o;
	LINE_NUMBER(671);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$Hinting);
	init_arc_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"full"_j))), (jint(3)));
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_arc_freetype_FreeTypeFontGenerator$Hinting_full = sp[0].o;
	LINE_NUMBER(673);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$Hinting);
	init_arc_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"autoSlight"_j))), (jint(4)));
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoSlight = sp[0].o;
	LINE_NUMBER(675);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$Hinting);
	init_arc_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"autoMedium"_j))), (jint(5)));
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoMedium = sp[0].o;
	LINE_NUMBER(677);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_freetype_FreeTypeFontGenerator$Hinting);
	init_arc_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"autoFull"_j))), (6));
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoFull = sp[0].o;
	LINE_NUMBER(663);
	sp[0].o = (jobject)SM_arc_freetype_FreeTypeFontGenerator$Hinting_$values_R_Array1_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	clinit_arc_freetype_FreeTypeFontGenerator$Hinting(ctx);
	SF_arc_freetype_FreeTypeFontGenerator$Hinting_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_freetype_FreeTypeFontGenerator$Hinting[] {
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
	{ "none", &class_arc_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_arc_freetype_FreeTypeFontGenerator$Hinting_none, "Larc/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "slight", &class_arc_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_arc_freetype_FreeTypeFontGenerator$Hinting_slight, "Larc/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "medium", &class_arc_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_arc_freetype_FreeTypeFontGenerator$Hinting_medium, "Larc/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "full", &class_arc_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_arc_freetype_FreeTypeFontGenerator$Hinting_full, "Larc/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "autoSlight", &class_arc_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoSlight, "Larc/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "autoMedium", &class_arc_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoMedium, "Larc/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "autoFull", &class_arc_freetype_FreeTypeFontGenerator$Hinting, (intptr_t) &SF_arc_freetype_FreeTypeFontGenerator$Hinting_autoFull, "Larc/freetype/FreeTypeFontGenerator$Hinting;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_freetype_FreeTypeFontGenerator$Hinting, 1), (intptr_t) &SF_arc_freetype_FreeTypeFontGenerator$Hinting_$VALUES, "[Larc/freetype/FreeTypeFontGenerator$Hinting;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_freetype_FreeTypeFontGenerator$Hinting_values_R_Array1_arc_freetype_FreeTypeFontGenerator$Hinting, 0, "()[Larc/freetype/FreeTypeFontGenerator$Hinting;", 9 },
	{ "valueOf", (intptr_t) SM_arc_freetype_FreeTypeFontGenerator$Hinting_valueOf_java_lang_String_R_arc_freetype_FreeTypeFontGenerator$Hinting, 0, "(Ljava/lang/String;)Larc/freetype/FreeTypeFontGenerator$Hinting;", 9 },
	{ "<init>", (intptr_t) init_arc_freetype_FreeTypeFontGenerator$Hinting_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_freetype_FreeTypeFontGenerator$Hinting_$values_R_Array1_arc_freetype_FreeTypeFontGenerator$Hinting, 0, "()[Larc/freetype/FreeTypeFontGenerator$Hinting;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_freetype_FreeTypeFontGenerator$Hinting, 0, "()V", 8 },
};

Class class_arc_freetype_FreeTypeFontGenerator$Hinting{
		.nativeName = (intptr_t) "arc/freetype/FreeTypeFontGenerator$Hinting",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_freetype_FreeTypeFontGenerator$Hinting),
		.classVtable = (intptr_t) vtable_arc_freetype_FreeTypeFontGenerator$Hinting,
		.staticInitializer = (intptr_t) clinit_arc_freetype_FreeTypeFontGenerator$Hinting,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_freetype_FreeTypeFontGenerator$Hinting,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_freetype_FreeTypeFontGenerator,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_freetype_FreeTypeFontGenerator$Hinting = registerClass(&class_arc_freetype_FreeTypeFontGenerator$Hinting);

}

