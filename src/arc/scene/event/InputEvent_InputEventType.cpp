#include "arc/scene/event/InputEvent_InputEventType.h"
#include "arc/scene/event/InputEvent_InputEventType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/scene/event/InputEvent.h"

extern "C" {

jobject SF_arc_scene_event_InputEvent$InputEventType_touchDown;
jobject SF_arc_scene_event_InputEvent$InputEventType_touchUp;
jobject SF_arc_scene_event_InputEvent$InputEventType_touchDragged;
jobject SF_arc_scene_event_InputEvent$InputEventType_mouseMoved;
jobject SF_arc_scene_event_InputEvent$InputEventType_enter;
jobject SF_arc_scene_event_InputEvent$InputEventType_exit;
jobject SF_arc_scene_event_InputEvent$InputEventType_scrolled;
jobject SF_arc_scene_event_InputEvent$InputEventType_keyDown;
jobject SF_arc_scene_event_InputEvent$InputEventType_keyUp;
jobject SF_arc_scene_event_InputEvent$InputEventType_keyTyped;
jobject SF_arc_scene_event_InputEvent$InputEventType_$VALUES;

void mark_arc_scene_event_InputEvent$InputEventType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_event_InputEvent$InputEventType_touchDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_InputEvent$InputEventType_touchDown)->clazz)->markFunction)((jobject) SF_arc_scene_event_InputEvent$InputEventType_touchDown, mark, depth + 1);
		if (SF_arc_scene_event_InputEvent$InputEventType_touchUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_InputEvent$InputEventType_touchUp)->clazz)->markFunction)((jobject) SF_arc_scene_event_InputEvent$InputEventType_touchUp, mark, depth + 1);
		if (SF_arc_scene_event_InputEvent$InputEventType_touchDragged)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_InputEvent$InputEventType_touchDragged)->clazz)->markFunction)((jobject) SF_arc_scene_event_InputEvent$InputEventType_touchDragged, mark, depth + 1);
		if (SF_arc_scene_event_InputEvent$InputEventType_mouseMoved)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_InputEvent$InputEventType_mouseMoved)->clazz)->markFunction)((jobject) SF_arc_scene_event_InputEvent$InputEventType_mouseMoved, mark, depth + 1);
		if (SF_arc_scene_event_InputEvent$InputEventType_enter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_InputEvent$InputEventType_enter)->clazz)->markFunction)((jobject) SF_arc_scene_event_InputEvent$InputEventType_enter, mark, depth + 1);
		if (SF_arc_scene_event_InputEvent$InputEventType_exit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_InputEvent$InputEventType_exit)->clazz)->markFunction)((jobject) SF_arc_scene_event_InputEvent$InputEventType_exit, mark, depth + 1);
		if (SF_arc_scene_event_InputEvent$InputEventType_scrolled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_InputEvent$InputEventType_scrolled)->clazz)->markFunction)((jobject) SF_arc_scene_event_InputEvent$InputEventType_scrolled, mark, depth + 1);
		if (SF_arc_scene_event_InputEvent$InputEventType_keyDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_InputEvent$InputEventType_keyDown)->clazz)->markFunction)((jobject) SF_arc_scene_event_InputEvent$InputEventType_keyDown, mark, depth + 1);
		if (SF_arc_scene_event_InputEvent$InputEventType_keyUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_InputEvent$InputEventType_keyUp)->clazz)->markFunction)((jobject) SF_arc_scene_event_InputEvent$InputEventType_keyUp, mark, depth + 1);
		if (SF_arc_scene_event_InputEvent$InputEventType_keyTyped)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_InputEvent$InputEventType_keyTyped)->clazz)->markFunction)((jobject) SF_arc_scene_event_InputEvent$InputEventType_keyTyped, mark, depth + 1);
		if (SF_arc_scene_event_InputEvent$InputEventType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_InputEvent$InputEventType_$VALUES)->clazz)->markFunction)((jobject) SF_arc_scene_event_InputEvent$InputEventType_$VALUES, mark, depth + 1);
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
	auto self = (arc_scene_event_InputEvent$InputEventType *) object;
}

jobject SM_arc_scene_event_InputEvent$InputEventType_values_R_Array1_arc_scene_event_InputEvent$InputEventType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputEvent$InputEventType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	{
	LINE_NUMBER(48);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[0].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_scene_event_InputEvent$InputEventType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_event_InputEvent$InputEventType_valueOf_java_lang_String_R_arc_scene_event_InputEvent$InputEventType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputEvent$InputEventType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_scene_event_InputEvent$InputEventType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_event_InputEvent$InputEventType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_scene_event_InputEvent$InputEventType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputEvent$InputEventType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(48);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_event_InputEvent$InputEventType_$values_R_Array1_arc_scene_event_InputEvent$InputEventType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputEvent$InputEventType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_event_InputEvent$InputEventType, (10));
	jint temp0 = jint(0);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_touchDown;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_touchUp;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_touchDragged;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_mouseMoved;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_enter;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_exit;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_scrolled;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_keyDown;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_keyUp;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_InputEvent$InputEventType_keyTyped;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_scene_event_InputEvent$InputEventType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/InputEvent$InputEventType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	{
	LINE_NUMBER(50);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_InputEvent$InputEventType);
	init_arc_scene_event_InputEvent$InputEventType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"touchDown"_j))), (jint(0)));
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	SF_arc_scene_event_InputEvent$InputEventType_touchDown = sp[0].o;
	LINE_NUMBER(52);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_InputEvent$InputEventType);
	init_arc_scene_event_InputEvent$InputEventType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"touchUp"_j))), (jint(1)));
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	SF_arc_scene_event_InputEvent$InputEventType_touchUp = sp[0].o;
	LINE_NUMBER(54);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_InputEvent$InputEventType);
	init_arc_scene_event_InputEvent$InputEventType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"touchDragged"_j))), (jint(2)));
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	SF_arc_scene_event_InputEvent$InputEventType_touchDragged = sp[0].o;
	LINE_NUMBER(56);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_InputEvent$InputEventType);
	init_arc_scene_event_InputEvent$InputEventType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mouseMoved"_j))), (jint(3)));
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	SF_arc_scene_event_InputEvent$InputEventType_mouseMoved = sp[0].o;
	LINE_NUMBER(58);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_InputEvent$InputEventType);
	init_arc_scene_event_InputEvent$InputEventType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"enter"_j))), (jint(4)));
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	SF_arc_scene_event_InputEvent$InputEventType_enter = sp[0].o;
	LINE_NUMBER(60);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_InputEvent$InputEventType);
	init_arc_scene_event_InputEvent$InputEventType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"exit"_j))), (jint(5)));
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	SF_arc_scene_event_InputEvent$InputEventType_exit = sp[0].o;
	LINE_NUMBER(62);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_InputEvent$InputEventType);
	init_arc_scene_event_InputEvent$InputEventType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"scrolled"_j))), (6));
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	SF_arc_scene_event_InputEvent$InputEventType_scrolled = sp[0].o;
	LINE_NUMBER(64);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_InputEvent$InputEventType);
	init_arc_scene_event_InputEvent$InputEventType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"keyDown"_j))), (7));
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	SF_arc_scene_event_InputEvent$InputEventType_keyDown = sp[0].o;
	LINE_NUMBER(66);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_InputEvent$InputEventType);
	init_arc_scene_event_InputEvent$InputEventType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"keyUp"_j))), (8));
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	SF_arc_scene_event_InputEvent$InputEventType_keyUp = sp[0].o;
	LINE_NUMBER(68);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_InputEvent$InputEventType);
	init_arc_scene_event_InputEvent$InputEventType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"keyTyped"_j))), (9));
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	SF_arc_scene_event_InputEvent$InputEventType_keyTyped = sp[0].o;
	LINE_NUMBER(48);
	sp[0].o = (jobject)SM_arc_scene_event_InputEvent$InputEventType_$values_R_Array1_arc_scene_event_InputEvent$InputEventType(ctx);
	clinit_arc_scene_event_InputEvent$InputEventType(ctx);
	SF_arc_scene_event_InputEvent$InputEventType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_InputEvent$InputEventType[] {
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
	{ "touchDown", &class_arc_scene_event_InputEvent$InputEventType, (intptr_t) &SF_arc_scene_event_InputEvent$InputEventType_touchDown, "Larc/scene/event/InputEvent$InputEventType;", 16409 },
	{ "touchUp", &class_arc_scene_event_InputEvent$InputEventType, (intptr_t) &SF_arc_scene_event_InputEvent$InputEventType_touchUp, "Larc/scene/event/InputEvent$InputEventType;", 16409 },
	{ "touchDragged", &class_arc_scene_event_InputEvent$InputEventType, (intptr_t) &SF_arc_scene_event_InputEvent$InputEventType_touchDragged, "Larc/scene/event/InputEvent$InputEventType;", 16409 },
	{ "mouseMoved", &class_arc_scene_event_InputEvent$InputEventType, (intptr_t) &SF_arc_scene_event_InputEvent$InputEventType_mouseMoved, "Larc/scene/event/InputEvent$InputEventType;", 16409 },
	{ "enter", &class_arc_scene_event_InputEvent$InputEventType, (intptr_t) &SF_arc_scene_event_InputEvent$InputEventType_enter, "Larc/scene/event/InputEvent$InputEventType;", 16409 },
	{ "exit", &class_arc_scene_event_InputEvent$InputEventType, (intptr_t) &SF_arc_scene_event_InputEvent$InputEventType_exit, "Larc/scene/event/InputEvent$InputEventType;", 16409 },
	{ "scrolled", &class_arc_scene_event_InputEvent$InputEventType, (intptr_t) &SF_arc_scene_event_InputEvent$InputEventType_scrolled, "Larc/scene/event/InputEvent$InputEventType;", 16409 },
	{ "keyDown", &class_arc_scene_event_InputEvent$InputEventType, (intptr_t) &SF_arc_scene_event_InputEvent$InputEventType_keyDown, "Larc/scene/event/InputEvent$InputEventType;", 16409 },
	{ "keyUp", &class_arc_scene_event_InputEvent$InputEventType, (intptr_t) &SF_arc_scene_event_InputEvent$InputEventType_keyUp, "Larc/scene/event/InputEvent$InputEventType;", 16409 },
	{ "keyTyped", &class_arc_scene_event_InputEvent$InputEventType, (intptr_t) &SF_arc_scene_event_InputEvent$InputEventType_keyTyped, "Larc/scene/event/InputEvent$InputEventType;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_scene_event_InputEvent$InputEventType, 1), (intptr_t) &SF_arc_scene_event_InputEvent$InputEventType_$VALUES, "[Larc/scene/event/InputEvent$InputEventType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_scene_event_InputEvent$InputEventType_values_R_Array1_arc_scene_event_InputEvent$InputEventType, 0, "()[Larc/scene/event/InputEvent$InputEventType;", 9 },
	{ "valueOf", (intptr_t) SM_arc_scene_event_InputEvent$InputEventType_valueOf_java_lang_String_R_arc_scene_event_InputEvent$InputEventType, 0, "(Ljava/lang/String;)Larc/scene/event/InputEvent$InputEventType;", 9 },
	{ "<init>", (intptr_t) init_arc_scene_event_InputEvent$InputEventType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_scene_event_InputEvent$InputEventType_$values_R_Array1_arc_scene_event_InputEvent$InputEventType, 0, "()[Larc/scene/event/InputEvent$InputEventType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_event_InputEvent$InputEventType, 0, "()V", 8 },
};

Class class_arc_scene_event_InputEvent$InputEventType{
		.nativeName = (intptr_t) "arc/scene/event/InputEvent$InputEventType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_scene_event_InputEvent$InputEventType),
		.classVtable = (intptr_t) vtable_arc_scene_event_InputEvent$InputEventType,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_InputEvent$InputEventType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_InputEvent$InputEventType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_scene_event_InputEvent,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_event_InputEvent$InputEventType = registerClass(&class_arc_scene_event_InputEvent$InputEventType);

}

