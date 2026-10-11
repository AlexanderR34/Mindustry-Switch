#include "java/lang/Thread_State.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Thread_State.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "java/lang/Thread.h"

extern "C" {

jobject SF_java_lang_Thread$State_NEW;
jobject SF_java_lang_Thread$State_RUNNABLE;
jobject SF_java_lang_Thread$State_BLOCKED;
jobject SF_java_lang_Thread$State_WAITING;
jobject SF_java_lang_Thread$State_TIMED_WAITING;
jobject SF_java_lang_Thread$State_TERMINATED;
jobject SF_java_lang_Thread$State_$VALUES;

void mark_java_lang_Thread$State(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_java_lang_Thread$State_NEW)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Thread$State_NEW)->clazz)->markFunction)((jobject) SF_java_lang_Thread$State_NEW, mark, depth + 1);
		if (SF_java_lang_Thread$State_RUNNABLE)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Thread$State_RUNNABLE)->clazz)->markFunction)((jobject) SF_java_lang_Thread$State_RUNNABLE, mark, depth + 1);
		if (SF_java_lang_Thread$State_BLOCKED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Thread$State_BLOCKED)->clazz)->markFunction)((jobject) SF_java_lang_Thread$State_BLOCKED, mark, depth + 1);
		if (SF_java_lang_Thread$State_WAITING)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Thread$State_WAITING)->clazz)->markFunction)((jobject) SF_java_lang_Thread$State_WAITING, mark, depth + 1);
		if (SF_java_lang_Thread$State_TIMED_WAITING)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Thread$State_TIMED_WAITING)->clazz)->markFunction)((jobject) SF_java_lang_Thread$State_TIMED_WAITING, mark, depth + 1);
		if (SF_java_lang_Thread$State_TERMINATED)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Thread$State_TERMINATED)->clazz)->markFunction)((jobject) SF_java_lang_Thread$State_TERMINATED, mark, depth + 1);
		if (SF_java_lang_Thread$State_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_java_lang_Thread$State_$VALUES)->clazz)->markFunction)((jobject) SF_java_lang_Thread$State_$VALUES, mark, depth + 1);
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
	auto self = (java_lang_Thread$State *) object;
}

jobject SM_java_lang_Thread$State_values_R_Array1_java_lang_Thread$State(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread$State:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread$State(ctx);
	{
	LINE_NUMBER(312);
	clinit_java_lang_Thread$State(ctx);
	sp[0].o = (jobject)SF_java_lang_Thread$State_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_java_lang_Thread$State, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Thread$State_valueOf_java_lang_String_R_java_lang_Thread$State(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread$State:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread$State(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_java_lang_Thread$State)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_Thread$State, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_java_lang_Thread$State_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread$State:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread$State(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(312);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_java_lang_Thread$State_$values_R_Array1_java_lang_Thread$State(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread$State:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread$State(ctx);
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Thread$State, (6));
	jint temp0 = jint(0);
	clinit_java_lang_Thread$State(ctx);
	sp[1].o = (jobject)SF_java_lang_Thread$State_NEW;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_java_lang_Thread$State(ctx);
	sp[1].o = (jobject)SF_java_lang_Thread$State_RUNNABLE;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_java_lang_Thread$State(ctx);
	sp[1].o = (jobject)SF_java_lang_Thread$State_BLOCKED;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_java_lang_Thread$State(ctx);
	sp[1].o = (jobject)SF_java_lang_Thread$State_WAITING;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_java_lang_Thread$State(ctx);
	sp[1].o = (jobject)SF_java_lang_Thread$State_TIMED_WAITING;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_java_lang_Thread$State(ctx);
	sp[1].o = (jobject)SF_java_lang_Thread$State_TERMINATED;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_java_lang_Thread$State(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "java/lang/Thread$State:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_java_lang_Thread$State(ctx);
	{
	LINE_NUMBER(313);
	clinit_java_lang_Thread$State(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Thread$State);
	init_java_lang_Thread$State_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NEW"_j))), (jint(0)));
	clinit_java_lang_Thread$State(ctx);
	SF_java_lang_Thread$State_NEW = sp[0].o;
	LINE_NUMBER(314);
	clinit_java_lang_Thread$State(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Thread$State);
	init_java_lang_Thread$State_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RUNNABLE"_j))), (jint(1)));
	clinit_java_lang_Thread$State(ctx);
	SF_java_lang_Thread$State_RUNNABLE = sp[0].o;
	LINE_NUMBER(315);
	clinit_java_lang_Thread$State(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Thread$State);
	init_java_lang_Thread$State_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BLOCKED"_j))), (jint(2)));
	clinit_java_lang_Thread$State(ctx);
	SF_java_lang_Thread$State_BLOCKED = sp[0].o;
	LINE_NUMBER(316);
	clinit_java_lang_Thread$State(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Thread$State);
	init_java_lang_Thread$State_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WAITING"_j))), (jint(3)));
	clinit_java_lang_Thread$State(ctx);
	SF_java_lang_Thread$State_WAITING = sp[0].o;
	LINE_NUMBER(317);
	clinit_java_lang_Thread$State(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Thread$State);
	init_java_lang_Thread$State_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TIMED_WAITING"_j))), (jint(4)));
	clinit_java_lang_Thread$State(ctx);
	SF_java_lang_Thread$State_TIMED_WAITING = sp[0].o;
	LINE_NUMBER(318);
	clinit_java_lang_Thread$State(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Thread$State);
	init_java_lang_Thread$State_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"TERMINATED"_j))), (jint(5)));
	clinit_java_lang_Thread$State(ctx);
	SF_java_lang_Thread$State_TERMINATED = sp[0].o;
	LINE_NUMBER(312);
	sp[0].o = (jobject)SM_java_lang_Thread$State_$values_R_Array1_java_lang_Thread$State(ctx);
	clinit_java_lang_Thread$State(ctx);
	SF_java_lang_Thread$State_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_java_lang_Thread$State[] {
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
	{ "NEW", &class_java_lang_Thread$State, (intptr_t) &SF_java_lang_Thread$State_NEW, "Ljava/lang/Thread$State;", 16409 },
	{ "RUNNABLE", &class_java_lang_Thread$State, (intptr_t) &SF_java_lang_Thread$State_RUNNABLE, "Ljava/lang/Thread$State;", 16409 },
	{ "BLOCKED", &class_java_lang_Thread$State, (intptr_t) &SF_java_lang_Thread$State_BLOCKED, "Ljava/lang/Thread$State;", 16409 },
	{ "WAITING", &class_java_lang_Thread$State, (intptr_t) &SF_java_lang_Thread$State_WAITING, "Ljava/lang/Thread$State;", 16409 },
	{ "TIMED_WAITING", &class_java_lang_Thread$State, (intptr_t) &SF_java_lang_Thread$State_TIMED_WAITING, "Ljava/lang/Thread$State;", 16409 },
	{ "TERMINATED", &class_java_lang_Thread$State, (intptr_t) &SF_java_lang_Thread$State_TERMINATED, "Ljava/lang/Thread$State;", 16409 },
	{ "$VALUES", getArrayClass(&class_java_lang_Thread$State, 1), (intptr_t) &SF_java_lang_Thread$State_$VALUES, "[Ljava/lang/Thread$State;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_java_lang_Thread$State_values_R_Array1_java_lang_Thread$State, 0, "()[Ljava/lang/Thread$State;", 9 },
	{ "valueOf", (intptr_t) SM_java_lang_Thread$State_valueOf_java_lang_String_R_java_lang_Thread$State, 0, "(Ljava/lang/String;)Ljava/lang/Thread$State;", 9 },
	{ "<init>", (intptr_t) init_java_lang_Thread$State_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_java_lang_Thread$State_$values_R_Array1_java_lang_Thread$State, 0, "()[Ljava/lang/Thread$State;", 4106 },
	{ "<clinit>", (intptr_t) clinit_java_lang_Thread$State, 0, "()V", 8 },
};

Class class_java_lang_Thread$State{
		.nativeName = (intptr_t) "java/lang/Thread$State",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(java_lang_Thread$State),
		.classVtable = (intptr_t) vtable_java_lang_Thread$State,
		.staticInitializer = (intptr_t) clinit_java_lang_Thread$State,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_java_lang_Thread$State,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_java_lang_Thread,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_java_lang_Thread$State = registerClass(&class_java_lang_Thread$State);

}

