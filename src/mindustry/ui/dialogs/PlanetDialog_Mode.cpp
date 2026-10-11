#include "mindustry/ui/dialogs/PlanetDialog_Mode.h"
#include "mindustry/ui/dialogs/PlanetDialog_Mode.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"

extern "C" {

jobject SF_mindustry_ui_dialogs_PlanetDialog$Mode_look;
jobject SF_mindustry_ui_dialogs_PlanetDialog$Mode_select;
jobject SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
jobject SF_mindustry_ui_dialogs_PlanetDialog$Mode_$VALUES;

void mark_mindustry_ui_dialogs_PlanetDialog$Mode(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_dialogs_PlanetDialog$Mode_look)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_PlanetDialog$Mode_look)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_PlanetDialog$Mode_look, mark, depth + 1);
		if (SF_mindustry_ui_dialogs_PlanetDialog$Mode_select)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_PlanetDialog$Mode_select)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_PlanetDialog$Mode_select, mark, depth + 1);
		if (SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch, mark, depth + 1);
		if (SF_mindustry_ui_dialogs_PlanetDialog$Mode_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_dialogs_PlanetDialog$Mode_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_ui_dialogs_PlanetDialog$Mode_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_ui_dialogs_PlanetDialog$Mode *) object;
}

jobject SM_mindustry_ui_dialogs_PlanetDialog$Mode_values_R_Array1_mindustry_ui_dialogs_PlanetDialog$Mode(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog$Mode:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	{
	LINE_NUMBER(1455);
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_ui_dialogs_PlanetDialog$Mode, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_PlanetDialog$Mode_valueOf_java_lang_String_R_mindustry_ui_dialogs_PlanetDialog$Mode(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog$Mode:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(1455);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_ui_dialogs_PlanetDialog$Mode)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ui_dialogs_PlanetDialog$Mode, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_dialogs_PlanetDialog$Mode_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog$Mode:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(1455);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_dialogs_PlanetDialog$Mode_$values_R_Array1_mindustry_ui_dialogs_PlanetDialog$Mode(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog$Mode:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	{
	LINE_NUMBER(1455);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ui_dialogs_PlanetDialog$Mode, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_look;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_select;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_ui_dialogs_PlanetDialog$Mode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog$Mode:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	{
	LINE_NUMBER(1457);
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog$Mode);
	init_mindustry_ui_dialogs_PlanetDialog$Mode_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"look"_j))), (jint(0)));
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	SF_mindustry_ui_dialogs_PlanetDialog$Mode_look = sp[0].o;
	LINE_NUMBER(1459);
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog$Mode);
	init_mindustry_ui_dialogs_PlanetDialog$Mode_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"select"_j))), (jint(1)));
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	SF_mindustry_ui_dialogs_PlanetDialog$Mode_select = sp[0].o;
	LINE_NUMBER(1461);
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_dialogs_PlanetDialog$Mode);
	init_mindustry_ui_dialogs_PlanetDialog$Mode_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"planetLaunch"_j))), (jint(2)));
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch = sp[0].o;
	LINE_NUMBER(1455);
	sp[0].o = (jobject)SM_mindustry_ui_dialogs_PlanetDialog$Mode_$values_R_Array1_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	clinit_mindustry_ui_dialogs_PlanetDialog$Mode(ctx);
	SF_mindustry_ui_dialogs_PlanetDialog$Mode_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_PlanetDialog$Mode[] {
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
	{ "look", &class_mindustry_ui_dialogs_PlanetDialog$Mode, (intptr_t) &SF_mindustry_ui_dialogs_PlanetDialog$Mode_look, "Lmindustry/ui/dialogs/PlanetDialog$Mode;", 16409 },
	{ "select", &class_mindustry_ui_dialogs_PlanetDialog$Mode, (intptr_t) &SF_mindustry_ui_dialogs_PlanetDialog$Mode_select, "Lmindustry/ui/dialogs/PlanetDialog$Mode;", 16409 },
	{ "planetLaunch", &class_mindustry_ui_dialogs_PlanetDialog$Mode, (intptr_t) &SF_mindustry_ui_dialogs_PlanetDialog$Mode_planetLaunch, "Lmindustry/ui/dialogs/PlanetDialog$Mode;", 16409 },
	{ "$VALUES", getArrayClass(&class_mindustry_ui_dialogs_PlanetDialog$Mode, 1), (intptr_t) &SF_mindustry_ui_dialogs_PlanetDialog$Mode_$VALUES, "[Lmindustry/ui/dialogs/PlanetDialog$Mode;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog$Mode_values_R_Array1_mindustry_ui_dialogs_PlanetDialog$Mode, 0, "()[Lmindustry/ui/dialogs/PlanetDialog$Mode;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog$Mode_valueOf_java_lang_String_R_mindustry_ui_dialogs_PlanetDialog$Mode, 0, "(Ljava/lang/String;)Lmindustry/ui/dialogs/PlanetDialog$Mode;", 9 },
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_PlanetDialog$Mode_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_ui_dialogs_PlanetDialog$Mode_$values_R_Array1_mindustry_ui_dialogs_PlanetDialog$Mode, 0, "()[Lmindustry/ui/dialogs/PlanetDialog$Mode;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_dialogs_PlanetDialog$Mode, 0, "()V", 8 },
};

Class class_mindustry_ui_dialogs_PlanetDialog$Mode{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/PlanetDialog$Mode",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_ui_dialogs_PlanetDialog$Mode),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_PlanetDialog$Mode,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_PlanetDialog$Mode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_PlanetDialog$Mode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_PlanetDialog,
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
static bool registered_mindustry_ui_dialogs_PlanetDialog$Mode = registerClass(&class_mindustry_ui_dialogs_PlanetDialog$Mode);

}

