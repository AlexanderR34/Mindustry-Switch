#include "arc/scene/event/Touchable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/scene/event/Touchable.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_arc_scene_event_Touchable_enabled;
jobject SF_arc_scene_event_Touchable_disabled;
jobject SF_arc_scene_event_Touchable_childrenOnly;
jobject SF_arc_scene_event_Touchable_$VALUES;

void mark_arc_scene_event_Touchable(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_scene_event_Touchable_enabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_Touchable_enabled)->clazz)->markFunction)((jobject) SF_arc_scene_event_Touchable_enabled, mark, depth + 1);
		if (SF_arc_scene_event_Touchable_disabled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_Touchable_disabled)->clazz)->markFunction)((jobject) SF_arc_scene_event_Touchable_disabled, mark, depth + 1);
		if (SF_arc_scene_event_Touchable_childrenOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_Touchable_childrenOnly)->clazz)->markFunction)((jobject) SF_arc_scene_event_Touchable_childrenOnly, mark, depth + 1);
		if (SF_arc_scene_event_Touchable_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_scene_event_Touchable_$VALUES)->clazz)->markFunction)((jobject) SF_arc_scene_event_Touchable_$VALUES, mark, depth + 1);
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
	auto self = (arc_scene_event_Touchable *) object;
}

jobject SM_arc_scene_event_Touchable_values_R_Array1_arc_scene_event_Touchable(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/Touchable:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_Touchable(ctx);
	{
	LINE_NUMBER(7);
	clinit_arc_scene_event_Touchable(ctx);
	sp[0].o = (jobject)SF_arc_scene_event_Touchable_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_arc_scene_event_Touchable, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_event_Touchable_valueOf_java_lang_String_R_arc_scene_event_Touchable(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/Touchable:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_Touchable(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_arc_scene_event_Touchable)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_event_Touchable, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_arc_scene_event_Touchable_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/Touchable:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_Touchable(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(7);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_scene_event_Touchable_$values_R_Array1_arc_scene_event_Touchable(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/Touchable:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_Touchable(ctx);
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject)createArray(ctx, &class_arc_scene_event_Touchable, (jint(3)));
	jint temp0 = jint(0);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_enabled;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_disabled;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_scene_event_Touchable(ctx);
	sp[1].o = (jobject)SF_arc_scene_event_Touchable_childrenOnly;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_scene_event_Touchable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/event/Touchable:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_event_Touchable(ctx);
	{
	LINE_NUMBER(9);
	clinit_arc_scene_event_Touchable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_Touchable);
	init_arc_scene_event_Touchable_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"enabled"_j))), (jint(0)));
	clinit_arc_scene_event_Touchable(ctx);
	SF_arc_scene_event_Touchable_enabled = sp[0].o;
	LINE_NUMBER(11);
	clinit_arc_scene_event_Touchable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_Touchable);
	init_arc_scene_event_Touchable_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"disabled"_j))), (jint(1)));
	clinit_arc_scene_event_Touchable(ctx);
	SF_arc_scene_event_Touchable_disabled = sp[0].o;
	LINE_NUMBER(16);
	clinit_arc_scene_event_Touchable(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_scene_event_Touchable);
	init_arc_scene_event_Touchable_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"childrenOnly"_j))), (jint(2)));
	clinit_arc_scene_event_Touchable(ctx);
	SF_arc_scene_event_Touchable_childrenOnly = sp[0].o;
	LINE_NUMBER(7);
	sp[0].o = (jobject)SM_arc_scene_event_Touchable_$values_R_Array1_arc_scene_event_Touchable(ctx);
	clinit_arc_scene_event_Touchable(ctx);
	SF_arc_scene_event_Touchable_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_event_Touchable[] {
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
	{ "enabled", &class_arc_scene_event_Touchable, (intptr_t) &SF_arc_scene_event_Touchable_enabled, "Larc/scene/event/Touchable;", 16409 },
	{ "disabled", &class_arc_scene_event_Touchable, (intptr_t) &SF_arc_scene_event_Touchable_disabled, "Larc/scene/event/Touchable;", 16409 },
	{ "childrenOnly", &class_arc_scene_event_Touchable, (intptr_t) &SF_arc_scene_event_Touchable_childrenOnly, "Larc/scene/event/Touchable;", 16409 },
	{ "$VALUES", getArrayClass(&class_arc_scene_event_Touchable, 1), (intptr_t) &SF_arc_scene_event_Touchable_$VALUES, "[Larc/scene/event/Touchable;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_arc_scene_event_Touchable_values_R_Array1_arc_scene_event_Touchable, 0, "()[Larc/scene/event/Touchable;", 9 },
	{ "valueOf", (intptr_t) SM_arc_scene_event_Touchable_valueOf_java_lang_String_R_arc_scene_event_Touchable, 0, "(Ljava/lang/String;)Larc/scene/event/Touchable;", 9 },
	{ "<init>", (intptr_t) init_arc_scene_event_Touchable_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_arc_scene_event_Touchable_$values_R_Array1_arc_scene_event_Touchable, 0, "()[Larc/scene/event/Touchable;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_scene_event_Touchable, 0, "()V", 8 },
};

Class class_arc_scene_event_Touchable{
		.nativeName = (intptr_t) "arc/scene/event/Touchable",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(arc_scene_event_Touchable),
		.classVtable = (intptr_t) vtable_arc_scene_event_Touchable,
		.staticInitializer = (intptr_t) clinit_arc_scene_event_Touchable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_event_Touchable,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
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
static bool registered_arc_scene_event_Touchable = registerClass(&class_arc_scene_event_Touchable);

}
