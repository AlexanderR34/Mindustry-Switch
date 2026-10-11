#include "mindustry/mod/Mods_ModState.h"
#include "mindustry/mod/Mods_ModState.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/mod/Mods.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_mod_Mods$ModState_enabled;
jobject SF_mindustry_mod_Mods$ModState_contentErrors;
jobject SF_mindustry_mod_Mods$ModState_missingDependencies;
jobject SF_mindustry_mod_Mods$ModState_incompleteDependencies;
jobject SF_mindustry_mod_Mods$ModState_circularDependencies;
jobject SF_mindustry_mod_Mods$ModState_unsupported;
jobject SF_mindustry_mod_Mods$ModState_disabled;
jobject SF_mindustry_mod_Mods$ModState_$VALUES;

void mark_mindustry_mod_Mods$ModState(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_mod_Mods$ModState_enabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_Mods$ModState_enabled)->clazz)->markFunction)((jobject) SF_mindustry_mod_Mods$ModState_enabled, mark, depth + 1);
		if (SF_mindustry_mod_Mods$ModState_contentErrors)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_Mods$ModState_contentErrors)->clazz)->markFunction)((jobject) SF_mindustry_mod_Mods$ModState_contentErrors, mark, depth + 1);
		if (SF_mindustry_mod_Mods$ModState_missingDependencies)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_Mods$ModState_missingDependencies)->clazz)->markFunction)((jobject) SF_mindustry_mod_Mods$ModState_missingDependencies, mark, depth + 1);
		if (SF_mindustry_mod_Mods$ModState_incompleteDependencies)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_Mods$ModState_incompleteDependencies)->clazz)->markFunction)((jobject) SF_mindustry_mod_Mods$ModState_incompleteDependencies, mark, depth + 1);
		if (SF_mindustry_mod_Mods$ModState_circularDependencies)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_Mods$ModState_circularDependencies)->clazz)->markFunction)((jobject) SF_mindustry_mod_Mods$ModState_circularDependencies, mark, depth + 1);
		if (SF_mindustry_mod_Mods$ModState_unsupported)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_Mods$ModState_unsupported)->clazz)->markFunction)((jobject) SF_mindustry_mod_Mods$ModState_unsupported, mark, depth + 1);
		if (SF_mindustry_mod_Mods$ModState_disabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_Mods$ModState_disabled)->clazz)->markFunction)((jobject) SF_mindustry_mod_Mods$ModState_disabled, mark, depth + 1);
		if (SF_mindustry_mod_Mods$ModState_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_Mods$ModState_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_mod_Mods$ModState_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_mod_Mods$ModState *) object;
}

jobject SM_mindustry_mod_Mods$ModState_values_R_Array1_mindustry_mod_Mods$ModState(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$ModState:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mods$ModState(ctx);
	{
	LINE_NUMBER(1491);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_Mods$ModState_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_mod_Mods$ModState, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_Mods$ModState_valueOf_java_lang_String_R_mindustry_mod_Mods$ModState(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$ModState:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mods$ModState(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1491);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_mod_Mods$ModState)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_mod_Mods$ModState, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_mod_Mods$ModState_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$ModState:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mods$ModState(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1491);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_Mods$ModState_$values_R_Array1_mindustry_mod_Mods$ModState(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$ModState:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mods$ModState(ctx);
	{
	LINE_NUMBER(1491);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_mod_Mods$ModState, (7));
	jint temp0 = jint(0);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_enabled;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_contentErrors;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_missingDependencies;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_incompleteDependencies;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_circularDependencies;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_unsupported;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_disabled;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_mod_Mods$ModState(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$ModState:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mods$ModState(ctx);
	{
	LINE_NUMBER(1492);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_Mods$ModState);
	init_mindustry_mod_Mods$ModState_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"enabled"_j))), (jint(0)));
	clinit_mindustry_mod_Mods$ModState(ctx);
	SF_mindustry_mod_Mods$ModState_enabled = sp[0].o;
	LINE_NUMBER(1493);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_Mods$ModState);
	init_mindustry_mod_Mods$ModState_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"contentErrors"_j))), (jint(1)));
	clinit_mindustry_mod_Mods$ModState(ctx);
	SF_mindustry_mod_Mods$ModState_contentErrors = sp[0].o;
	LINE_NUMBER(1494);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_Mods$ModState);
	init_mindustry_mod_Mods$ModState_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"missingDependencies"_j))), (jint(2)));
	clinit_mindustry_mod_Mods$ModState(ctx);
	SF_mindustry_mod_Mods$ModState_missingDependencies = sp[0].o;
	LINE_NUMBER(1495);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_Mods$ModState);
	init_mindustry_mod_Mods$ModState_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"incompleteDependencies"_j))), (jint(3)));
	clinit_mindustry_mod_Mods$ModState(ctx);
	SF_mindustry_mod_Mods$ModState_incompleteDependencies = sp[0].o;
	LINE_NUMBER(1496);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_Mods$ModState);
	init_mindustry_mod_Mods$ModState_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"circularDependencies"_j))), (jint(4)));
	clinit_mindustry_mod_Mods$ModState(ctx);
	SF_mindustry_mod_Mods$ModState_circularDependencies = sp[0].o;
	LINE_NUMBER(1497);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_Mods$ModState);
	init_mindustry_mod_Mods$ModState_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unsupported"_j))), (jint(5)));
	clinit_mindustry_mod_Mods$ModState(ctx);
	SF_mindustry_mod_Mods$ModState_unsupported = sp[0].o;
	LINE_NUMBER(1498);
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_mod_Mods$ModState);
	init_mindustry_mod_Mods$ModState_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"disabled"_j))), (6));
	clinit_mindustry_mod_Mods$ModState(ctx);
	SF_mindustry_mod_Mods$ModState_disabled = sp[0].o;
	LINE_NUMBER(1491);
	sp[0].o = (jobject)SM_mindustry_mod_Mods$ModState_$values_R_Array1_mindustry_mod_Mods$ModState(ctx);
	clinit_mindustry_mod_Mods$ModState(ctx);
	SF_mindustry_mod_Mods$ModState_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_Mods$ModState[] {
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
	{ "enabled", &class_mindustry_mod_Mods$ModState, (intptr_t) &SF_mindustry_mod_Mods$ModState_enabled, "Lmindustry/mod/Mods$ModState;", 16409 },
	{ "contentErrors", &class_mindustry_mod_Mods$ModState, (intptr_t) &SF_mindustry_mod_Mods$ModState_contentErrors, "Lmindustry/mod/Mods$ModState;", 16409 },
	{ "missingDependencies", &class_mindustry_mod_Mods$ModState, (intptr_t) &SF_mindustry_mod_Mods$ModState_missingDependencies, "Lmindustry/mod/Mods$ModState;", 16409 },
	{ "incompleteDependencies", &class_mindustry_mod_Mods$ModState, (intptr_t) &SF_mindustry_mod_Mods$ModState_incompleteDependencies, "Lmindustry/mod/Mods$ModState;", 16409 },
	{ "circularDependencies", &class_mindustry_mod_Mods$ModState, (intptr_t) &SF_mindustry_mod_Mods$ModState_circularDependencies, "Lmindustry/mod/Mods$ModState;", 16409 },
	{ "unsupported", &class_mindustry_mod_Mods$ModState, (intptr_t) &SF_mindustry_mod_Mods$ModState_unsupported, "Lmindustry/mod/Mods$ModState;", 16409 },
	{ "disabled", &class_mindustry_mod_Mods$ModState, (intptr_t) &SF_mindustry_mod_Mods$ModState_disabled, "Lmindustry/mod/Mods$ModState;", 16409 },
	{ "$VALUES", getArrayClass(&class_mindustry_mod_Mods$ModState, 1), (intptr_t) &SF_mindustry_mod_Mods$ModState_$VALUES, "[Lmindustry/mod/Mods$ModState;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_mod_Mods$ModState_values_R_Array1_mindustry_mod_Mods$ModState, 0, "()[Lmindustry/mod/Mods$ModState;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_mod_Mods$ModState_valueOf_java_lang_String_R_mindustry_mod_Mods$ModState, 0, "(Ljava/lang/String;)Lmindustry/mod/Mods$ModState;", 9 },
	{ "<init>", (intptr_t) init_mindustry_mod_Mods$ModState_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_mod_Mods$ModState_$values_R_Array1_mindustry_mod_Mods$ModState, 0, "()[Lmindustry/mod/Mods$ModState;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_mod_Mods$ModState, 0, "()V", 8 },
};

Class class_mindustry_mod_Mods$ModState{
		.nativeName = (intptr_t) "mindustry/mod/Mods$ModState",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_mod_Mods$ModState),
		.classVtable = (intptr_t) vtable_mindustry_mod_Mods$ModState,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_Mods$ModState,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_Mods$ModState,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_mod_Mods,
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
static bool registered_mindustry_mod_Mods$ModState = registerClass(&class_mindustry_mod_Mods$ModState);

}

