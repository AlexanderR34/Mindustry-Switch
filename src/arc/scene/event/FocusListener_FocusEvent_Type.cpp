#include "arc/scene/event/FocusListener_FocusEvent_Type.h"
#include "arc/scene/event/FocusListener_FocusEvent_Type.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/scene/event/FocusListener_FocusEvent.h"

extern "C" {

jobject SF_arc_scene_event_FocusListener$FocusEvent$Type_keyboard;
jobject SF_arc_scene_event_FocusListener$FocusEvent$Type_scroll;
jobject SF_arc_scene_event_FocusListener$FocusEvent$Type_$VALUES;

void mark_arc_scene_event_FocusListener$FocusEvent$Type(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_event_FocusListener$FocusEvent$Type_keyboard)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_FocusListener$FocusEvent$Type_keyboard)->clazz)->markFunction)((jobject) SF_arc_scene_event_FocusListener$FocusEvent$Type_keyboard, mark, depth + 1);
		if (SF_arc_scene_event_FocusListener$FocusEvent$Type_scroll)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_FocusListener$FocusEvent$Type_scroll)->clazz)->markFunction)((jobject) SF_arc_scene_event_FocusListener$FocusEvent$Type_scroll, mark, depth + 1);
		if (SF_arc_scene_event_FocusListener$FocusEvent$Type_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_FocusListener$FocusEvent$Type_$VALUES)->clazz)->markFunction)((jobject) SF_arc_scene_event_FocusListener$FocusEvent$Type_$VALUES, mark, depth + 1);
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
	auto self = (arc_scene_event_FocusListener$FocusEvent$Type *) object;
}

jobject SM_arc_scene_event_FocusListener$FocusEvent$Type_values_R_Array1_arc_scene_event_FocusListener$FocusEvent$Type(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/FocusListener$FocusEvent$Type:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	{
	LINE_NUMBER(49);
	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	sp[0].o = (jobject)SF_arc_scene_event_FocusListener$FocusEvent$Type_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_scene_event_FocusListener$FocusEvent$Type, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_event_FocusListener$FocusEvent$Type_valueOf_java_lang_String_R_arc_scene_event_FocusListener$FocusEvent$Type(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/FocusListener$FocusEvent$Type:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_scene_event_FocusListener$FocusEvent$Type)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_event_FocusListener$FocusEvent$Type, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_scene_event_FocusListener$FocusEvent$Type_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/FocusListener$FocusEvent$Type:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(49);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_event_FocusListener$FocusEvent$Type_$values_R_Array1_arc_scene_event_FocusListener$FocusEvent$Type(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/FocusListener$FocusEvent$Type:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_event_FocusListener$FocusEvent$Type, (jint(2)));
	jint temp0 = jint(0);
	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_FocusListener$FocusEvent$Type_keyboard;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_FocusListener$FocusEvent$Type_scroll;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_scene_event_FocusListener$FocusEvent$Type(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/FocusListener$FocusEvent$Type:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	{
	LINE_NUMBER(50);
	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_FocusListener$FocusEvent$Type);
	init_arc_scene_event_FocusListener$FocusEvent$Type_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"keyboard"_j))), (jint(0)));
	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	SF_arc_scene_event_FocusListener$FocusEvent$Type_keyboard = sp[0].o;
	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_FocusListener$FocusEvent$Type);
	init_arc_scene_event_FocusListener$FocusEvent$Type_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scroll"_j))), (jint(1)));
	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	SF_arc_scene_event_FocusListener$FocusEvent$Type_scroll = sp[0].o;
	LINE_NUMBER(49);
	sp[0].o = (jobject)SM_arc_scene_event_FocusListener$FocusEvent$Type_$values_R_Array1_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	clinit_arc_scene_event_FocusListener$FocusEvent$Type(ctx);
	SF_arc_scene_event_FocusListener$FocusEvent$Type_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_FocusListener$FocusEvent$Type[] {
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
	{ "keyboard", &class_arc_scene_event_FocusListener$FocusEvent$Type, (intptr_t) &SF_arc_scene_event_FocusListener$FocusEvent$Type_keyboard, "Larc/scene/event/FocusListener$FocusEvent$Type;", 16409 },
	{ "scroll", &class_arc_scene_event_FocusListener$FocusEvent$Type, (intptr_t) &SF_arc_scene_event_FocusListener$FocusEvent$Type_scroll, "Larc/scene/event/FocusListener$FocusEvent$Type;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_scene_event_FocusListener$FocusEvent$Type, 1), (intptr_t) &SF_arc_scene_event_FocusListener$FocusEvent$Type_$VALUES, "[Larc/scene/event/FocusListener$FocusEvent$Type;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_scene_event_FocusListener$FocusEvent$Type_values_R_Array1_arc_scene_event_FocusListener$FocusEvent$Type, 0, "()[Larc/scene/event/FocusListener$FocusEvent$Type;", 9 },
	{ "valueOf", (intptr_t) SM_arc_scene_event_FocusListener$FocusEvent$Type_valueOf_java_lang_String_R_arc_scene_event_FocusListener$FocusEvent$Type, 0, "(Ljava/lang/String;)Larc/scene/event/FocusListener$FocusEvent$Type;", 9 },
	{ "<init>", (intptr_t) init_arc_scene_event_FocusListener$FocusEvent$Type_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_scene_event_FocusListener$FocusEvent$Type_$values_R_Array1_arc_scene_event_FocusListener$FocusEvent$Type, 0, "()[Larc/scene/event/FocusListener$FocusEvent$Type;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_event_FocusListener$FocusEvent$Type, 0, "()V", 8 },
};

Class class_arc_scene_event_FocusListener$FocusEvent$Type{
		.nativeName = (intptr_t) "arc/scene/event/FocusListener$FocusEvent$Type",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_scene_event_FocusListener$FocusEvent$Type),
		.classVtable = (intptr_t) vtable_arc_scene_event_FocusListener$FocusEvent$Type,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_FocusListener$FocusEvent$Type,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_FocusListener$FocusEvent$Type,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_event_FocusListener$FocusEvent,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_FocusListener$FocusEvent$Type = registerClass(&class_arc_scene_event_FocusListener$FocusEvent$Type);

}

