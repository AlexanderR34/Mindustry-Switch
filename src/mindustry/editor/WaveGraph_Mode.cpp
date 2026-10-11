#include "mindustry/editor/WaveGraph_Mode.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/editor/WaveGraph.h"
#include "mindustry/editor/WaveGraph_Mode.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_editor_WaveGraph$Mode_counts;
jobject SF_mindustry_editor_WaveGraph$Mode_totals;
jobject SF_mindustry_editor_WaveGraph$Mode_health;
jobject SF_mindustry_editor_WaveGraph$Mode_all;
jobject SF_mindustry_editor_WaveGraph$Mode_$VALUES;

void mark_mindustry_editor_WaveGraph$Mode(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_editor_WaveGraph$Mode_counts)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_WaveGraph$Mode_counts)->clazz)->markFunction)((jobject) SF_mindustry_editor_WaveGraph$Mode_counts, mark, depth + 1);
		if (SF_mindustry_editor_WaveGraph$Mode_totals)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_WaveGraph$Mode_totals)->clazz)->markFunction)((jobject) SF_mindustry_editor_WaveGraph$Mode_totals, mark, depth + 1);
		if (SF_mindustry_editor_WaveGraph$Mode_health)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_WaveGraph$Mode_health)->clazz)->markFunction)((jobject) SF_mindustry_editor_WaveGraph$Mode_health, mark, depth + 1);
		if (SF_mindustry_editor_WaveGraph$Mode_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_WaveGraph$Mode_all)->clazz)->markFunction)((jobject) SF_mindustry_editor_WaveGraph$Mode_all, mark, depth + 1);
		if (SF_mindustry_editor_WaveGraph$Mode_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_WaveGraph$Mode_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_editor_WaveGraph$Mode_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_editor_WaveGraph$Mode *) object;
}

jobject SM_mindustry_editor_WaveGraph$Mode_values_R_Array1_mindustry_editor_WaveGraph$Mode(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph$Mode:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	{
	LINE_NUMBER(359);
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_WaveGraph$Mode_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_editor_WaveGraph$Mode, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_WaveGraph$Mode_valueOf_java_lang_String_R_mindustry_editor_WaveGraph$Mode(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph$Mode:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_editor_WaveGraph$Mode)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_editor_WaveGraph$Mode, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_editor_WaveGraph$Mode_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph$Mode:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(359);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_WaveGraph$Mode_$values_R_Array1_mindustry_editor_WaveGraph$Mode(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph$Mode:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_editor_WaveGraph$Mode, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_WaveGraph$Mode_counts;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_WaveGraph$Mode_totals;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_WaveGraph$Mode_health;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_editor_WaveGraph$Mode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/WaveGraph$Mode:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	{
	LINE_NUMBER(360);
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_WaveGraph$Mode);
	init_mindustry_editor_WaveGraph$Mode_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"counts"_j))), (jint(0)));
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	SF_mindustry_editor_WaveGraph$Mode_counts = sp[0].o;
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_WaveGraph$Mode);
	init_mindustry_editor_WaveGraph$Mode_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"totals"_j))), (jint(1)));
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	SF_mindustry_editor_WaveGraph$Mode_totals = sp[0].o;
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_WaveGraph$Mode);
	init_mindustry_editor_WaveGraph$Mode_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"health"_j))), (jint(2)));
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	SF_mindustry_editor_WaveGraph$Mode_health = sp[0].o;
	LINE_NUMBER(359);
	sp[0].o = (jobject)SM_mindustry_editor_WaveGraph$Mode_$values_R_Array1_mindustry_editor_WaveGraph$Mode(ctx);
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	SF_mindustry_editor_WaveGraph$Mode_$VALUES = sp[0].o;
	LINE_NUMBER(362);
	sp[0].o = (jobject)SM_mindustry_editor_WaveGraph$Mode_values_R_Array1_mindustry_editor_WaveGraph$Mode(ctx);
	clinit_mindustry_editor_WaveGraph$Mode(ctx);
	SF_mindustry_editor_WaveGraph$Mode_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_WaveGraph$Mode[] {
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
	{ "counts", &class_mindustry_editor_WaveGraph$Mode, (intptr_t) &SF_mindustry_editor_WaveGraph$Mode_counts, "Lmindustry/editor/WaveGraph$Mode;", 16409 },
	{ "totals", &class_mindustry_editor_WaveGraph$Mode, (intptr_t) &SF_mindustry_editor_WaveGraph$Mode_totals, "Lmindustry/editor/WaveGraph$Mode;", 16409 },
	{ "health", &class_mindustry_editor_WaveGraph$Mode, (intptr_t) &SF_mindustry_editor_WaveGraph$Mode_health, "Lmindustry/editor/WaveGraph$Mode;", 16409 },
	{ "all", getArrayClass(&class_mindustry_editor_WaveGraph$Mode, 1), (intptr_t) &SF_mindustry_editor_WaveGraph$Mode_all, "[Lmindustry/editor/WaveGraph$Mode;", 8 },
	{ "$VALUES", getArrayClass(&class_mindustry_editor_WaveGraph$Mode, 1), (intptr_t) &SF_mindustry_editor_WaveGraph$Mode_$VALUES, "[Lmindustry/editor/WaveGraph$Mode;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_editor_WaveGraph$Mode_values_R_Array1_mindustry_editor_WaveGraph$Mode, 0, "()[Lmindustry/editor/WaveGraph$Mode;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_editor_WaveGraph$Mode_valueOf_java_lang_String_R_mindustry_editor_WaveGraph$Mode, 0, "(Ljava/lang/String;)Lmindustry/editor/WaveGraph$Mode;", 9 },
	{ "<init>", (intptr_t) init_mindustry_editor_WaveGraph$Mode_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_editor_WaveGraph$Mode_$values_R_Array1_mindustry_editor_WaveGraph$Mode, 0, "()[Lmindustry/editor/WaveGraph$Mode;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_editor_WaveGraph$Mode, 0, "()V", 8 },
};

Class class_mindustry_editor_WaveGraph$Mode{
		.nativeName = (intptr_t) "mindustry/editor/WaveGraph$Mode",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_editor_WaveGraph$Mode),
		.classVtable = (intptr_t) vtable_mindustry_editor_WaveGraph$Mode,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_WaveGraph$Mode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_WaveGraph$Mode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_editor_WaveGraph,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
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
static bool registered_mindustry_editor_WaveGraph$Mode = registerClass(&class_mindustry_editor_WaveGraph$Mode);

}

