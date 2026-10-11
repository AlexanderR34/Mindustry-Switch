#include "mindustry/logic/CutsceneAction.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/CutsceneAction.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_logic_CutsceneAction_active;
jobject SF_mindustry_logic_CutsceneAction_pan;
jobject SF_mindustry_logic_CutsceneAction_zoom;
jobject SF_mindustry_logic_CutsceneAction_stop;
jobject SF_mindustry_logic_CutsceneAction_shake;
jobject SF_mindustry_logic_CutsceneAction_getHud;
jobject SF_mindustry_logic_CutsceneAction_setHud;
jobject SF_mindustry_logic_CutsceneAction_all;
jobject SF_mindustry_logic_CutsceneAction_$VALUES;

void mark_mindustry_logic_CutsceneAction(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_logic_CutsceneAction_active)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_CutsceneAction_active)->clazz)->markFunction)((jobject) SF_mindustry_logic_CutsceneAction_active, mark, depth + 1);
		if (SF_mindustry_logic_CutsceneAction_pan)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_CutsceneAction_pan)->clazz)->markFunction)((jobject) SF_mindustry_logic_CutsceneAction_pan, mark, depth + 1);
		if (SF_mindustry_logic_CutsceneAction_zoom)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_CutsceneAction_zoom)->clazz)->markFunction)((jobject) SF_mindustry_logic_CutsceneAction_zoom, mark, depth + 1);
		if (SF_mindustry_logic_CutsceneAction_stop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_CutsceneAction_stop)->clazz)->markFunction)((jobject) SF_mindustry_logic_CutsceneAction_stop, mark, depth + 1);
		if (SF_mindustry_logic_CutsceneAction_shake)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_CutsceneAction_shake)->clazz)->markFunction)((jobject) SF_mindustry_logic_CutsceneAction_shake, mark, depth + 1);
		if (SF_mindustry_logic_CutsceneAction_getHud)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_CutsceneAction_getHud)->clazz)->markFunction)((jobject) SF_mindustry_logic_CutsceneAction_getHud, mark, depth + 1);
		if (SF_mindustry_logic_CutsceneAction_setHud)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_CutsceneAction_setHud)->clazz)->markFunction)((jobject) SF_mindustry_logic_CutsceneAction_setHud, mark, depth + 1);
		if (SF_mindustry_logic_CutsceneAction_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_CutsceneAction_all)->clazz)->markFunction)((jobject) SF_mindustry_logic_CutsceneAction_all, mark, depth + 1);
		if (SF_mindustry_logic_CutsceneAction_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_logic_CutsceneAction_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_logic_CutsceneAction_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_logic_CutsceneAction *) object;
}

jobject SM_mindustry_logic_CutsceneAction_values_R_Array1_mindustry_logic_CutsceneAction(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/CutsceneAction:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_CutsceneAction(ctx);
	{
	LINE_NUMBER(3);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_CutsceneAction_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_logic_CutsceneAction, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_CutsceneAction_valueOf_java_lang_String_R_mindustry_logic_CutsceneAction(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/CutsceneAction:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_CutsceneAction(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_logic_CutsceneAction)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_logic_CutsceneAction, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_logic_CutsceneAction_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/CutsceneAction:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_CutsceneAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_logic_CutsceneAction_$values_R_Array1_mindustry_logic_CutsceneAction(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/CutsceneAction:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_CutsceneAction(ctx);
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_logic_CutsceneAction, (7));
	jint temp0 = jint(0);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_active;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_pan;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_zoom;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_stop;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_shake;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_getHud;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[1].o = (jobject)SF_mindustry_logic_CutsceneAction_setHud;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_logic_CutsceneAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/CutsceneAction:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_CutsceneAction(ctx);
	{
	LINE_NUMBER(4);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_CutsceneAction);
	init_mindustry_logic_CutsceneAction_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"active"_j))), (jint(0)));
	clinit_mindustry_logic_CutsceneAction(ctx);
	SF_mindustry_logic_CutsceneAction_active = sp[0].o;
	LINE_NUMBER(5);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_CutsceneAction);
	init_mindustry_logic_CutsceneAction_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pan"_j))), (jint(1)));
	clinit_mindustry_logic_CutsceneAction(ctx);
	SF_mindustry_logic_CutsceneAction_pan = sp[0].o;
	LINE_NUMBER(6);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_CutsceneAction);
	init_mindustry_logic_CutsceneAction_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"zoom"_j))), (jint(2)));
	clinit_mindustry_logic_CutsceneAction(ctx);
	SF_mindustry_logic_CutsceneAction_zoom = sp[0].o;
	LINE_NUMBER(7);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_CutsceneAction);
	init_mindustry_logic_CutsceneAction_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"stop"_j))), (jint(3)));
	clinit_mindustry_logic_CutsceneAction(ctx);
	SF_mindustry_logic_CutsceneAction_stop = sp[0].o;
	LINE_NUMBER(8);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_CutsceneAction);
	init_mindustry_logic_CutsceneAction_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"shake"_j))), (jint(4)));
	clinit_mindustry_logic_CutsceneAction(ctx);
	SF_mindustry_logic_CutsceneAction_shake = sp[0].o;
	LINE_NUMBER(9);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_CutsceneAction);
	init_mindustry_logic_CutsceneAction_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"getHud"_j))), (jint(5)));
	clinit_mindustry_logic_CutsceneAction(ctx);
	SF_mindustry_logic_CutsceneAction_getHud = sp[0].o;
	LINE_NUMBER(10);
	clinit_mindustry_logic_CutsceneAction(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_CutsceneAction);
	init_mindustry_logic_CutsceneAction_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"setHud"_j))), (6));
	clinit_mindustry_logic_CutsceneAction(ctx);
	SF_mindustry_logic_CutsceneAction_setHud = sp[0].o;
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_mindustry_logic_CutsceneAction_$values_R_Array1_mindustry_logic_CutsceneAction(ctx);
	clinit_mindustry_logic_CutsceneAction(ctx);
	SF_mindustry_logic_CutsceneAction_$VALUES = sp[0].o;
	LINE_NUMBER(12);
	sp[0].o = (jobject)SM_mindustry_logic_CutsceneAction_values_R_Array1_mindustry_logic_CutsceneAction(ctx);
	clinit_mindustry_logic_CutsceneAction(ctx);
	SF_mindustry_logic_CutsceneAction_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_CutsceneAction[] {
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
	{ "active", &class_mindustry_logic_CutsceneAction, (intptr_t) &SF_mindustry_logic_CutsceneAction_active, "Lmindustry/logic/CutsceneAction;", 16409 },
	{ "pan", &class_mindustry_logic_CutsceneAction, (intptr_t) &SF_mindustry_logic_CutsceneAction_pan, "Lmindustry/logic/CutsceneAction;", 16409 },
	{ "zoom", &class_mindustry_logic_CutsceneAction, (intptr_t) &SF_mindustry_logic_CutsceneAction_zoom, "Lmindustry/logic/CutsceneAction;", 16409 },
	{ "stop", &class_mindustry_logic_CutsceneAction, (intptr_t) &SF_mindustry_logic_CutsceneAction_stop, "Lmindustry/logic/CutsceneAction;", 16409 },
	{ "shake", &class_mindustry_logic_CutsceneAction, (intptr_t) &SF_mindustry_logic_CutsceneAction_shake, "Lmindustry/logic/CutsceneAction;", 16409 },
	{ "getHud", &class_mindustry_logic_CutsceneAction, (intptr_t) &SF_mindustry_logic_CutsceneAction_getHud, "Lmindustry/logic/CutsceneAction;", 16409 },
	{ "setHud", &class_mindustry_logic_CutsceneAction, (intptr_t) &SF_mindustry_logic_CutsceneAction_setHud, "Lmindustry/logic/CutsceneAction;", 16409 },
	{ "all", getArrayClass(&class_mindustry_logic_CutsceneAction, 1), (intptr_t) &SF_mindustry_logic_CutsceneAction_all, "[Lmindustry/logic/CutsceneAction;", 25 },
	{ "$VALUES", getArrayClass(&class_mindustry_logic_CutsceneAction, 1), (intptr_t) &SF_mindustry_logic_CutsceneAction_$VALUES, "[Lmindustry/logic/CutsceneAction;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_logic_CutsceneAction_values_R_Array1_mindustry_logic_CutsceneAction, 0, "()[Lmindustry/logic/CutsceneAction;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_logic_CutsceneAction_valueOf_java_lang_String_R_mindustry_logic_CutsceneAction, 0, "(Ljava/lang/String;)Lmindustry/logic/CutsceneAction;", 9 },
	{ "<init>", (intptr_t) init_mindustry_logic_CutsceneAction_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_mindustry_logic_CutsceneAction_$values_R_Array1_mindustry_logic_CutsceneAction, 0, "()[Lmindustry/logic/CutsceneAction;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_logic_CutsceneAction, 0, "()V", 8 },
};

Class class_mindustry_logic_CutsceneAction{
		.nativeName = (intptr_t) "mindustry/logic/CutsceneAction",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_logic_CutsceneAction),
		.classVtable = (intptr_t) vtable_mindustry_logic_CutsceneAction,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_CutsceneAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_CutsceneAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
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
static bool registered_mindustry_logic_CutsceneAction = registerClass(&class_mindustry_logic_CutsceneAction);

}
