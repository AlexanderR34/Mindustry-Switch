#include "arc/Events.h"
#include "arc/func/Prov.h"
#include "arc/Events.h"
#include "java/lang/Enum.h"
#include "arc/Events_invoke_arc_func_Cons_0.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "arc/struct/Seq.h"
#include "arc/Events_invoke_arc_func_Prov_2.h"
#include "arc/struct/ObjectMap.h"
#include "java/lang/Class.h"
#include "arc/Events_invoke_arc_func_Prov_1.h"
#include "arc/Events_invoke_arc_func_Prov_0.h"

extern "C" {

jobject SF_arc_Events_events;

void mark_arc_Events(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_arc_Events_events)
			((gc_mark_ptr) ((jclass) ((jobject) SF_arc_Events_events)->clazz)->markFunction)((jobject) SF_arc_Events_events, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_Events *) object;
}

void init_arc_Events(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Events:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Events(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_Events_on_java_lang_Class_arc_func_Cons(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Events:on", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Events(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(15);
	clinit_arc_Events(ctx);
	sp[0].o = (jobject)SF_arc_Events_events;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_Events_invoke_arc_func_Prov_0(ctx);
		auto proxy = (arc_Events_invoke_arc_func_Prov_0 *) gcAlloc(ctx, &class_arc_Events_invoke_arc_func_Prov_0);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[1].o));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_Events_run_java_lang_Object_java_lang_Runnable(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Events:run", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Events(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(20);
	clinit_arc_Events(ctx);
	sp[0].o = (jobject)SF_arc_Events_events;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_Events_invoke_arc_func_Prov_1(ctx);
		auto proxy = (arc_Events_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_arc_Events_invoke_arc_func_Prov_1);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = checkCast(ctx, &class_arc_struct_Seq, sp[0].o);
	{ /* InvokeDynamic */
		clinit_arc_Events_invoke_arc_func_Cons_0(ctx);
		auto proxy = (arc_Events_invoke_arc_func_Cons_0 *) gcAlloc(ctx, &class_arc_Events_invoke_arc_func_Cons_0);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_arc_Events_remove_java_lang_Class_arc_func_Cons_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Events:remove", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Events(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(25);
	clinit_arc_Events(ctx);
	sp[0].o = (jobject)SF_arc_Events_events;
	sp[1].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_arc_Events_invoke_arc_func_Prov_2(ctx);
		auto proxy = (arc_Events_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_arc_Events_invoke_arc_func_Prov_2);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_arc_Events_fire_java_lang_Enum(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Events:fire", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Events(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(30);
	clinit_arc_Events(ctx);
	sp[0].o = (jobject)SF_arc_Events_events;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(32);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(33);
	frame[2].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size);
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_items;
	frame[3].o = (checkCast(ctx, getArrayClass(&class_arc_func_Cons, 1), sp[0].o));
	LINE_NUMBER(35);
	frame[4].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(36);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))), (frame[0].o));
	LINE_NUMBER(35);
	INST_IINC(4, 1);
	goto label_6;
	}
label_2:;
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_Events_fire_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Events:fire", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Events(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	SM_arc_Events_fire_java_lang_Class_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_arc_Events_fire_java_lang_Class_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Events:fire", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Events(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(47);
	clinit_arc_Events(ctx);
	sp[0].o = (jobject)SF_arc_Events_events;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	frame[2].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(49);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(50);
	frame[3].i = ((jint)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_size);
	LINE_NUMBER(51);
	sp[0].o = (jobject)((arc_struct_Seq *) NULL_CHECK((frame[2].o)))->F_items;
	frame[4].o = (checkCast(ctx, getArrayClass(&class_arc_func_Cons, 1), sp[0].o));
	LINE_NUMBER(52);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_2;
	}
	{
	LINE_NUMBER(53);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))), (frame[1].o));
	LINE_NUMBER(52);
	INST_IINC(5, 1);
	goto label_6;
	}
label_2:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_arc_Events_clear(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Events:clear", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Events(ctx);
	{
	LINE_NUMBER(60);
	clinit_arc_Events(ctx);
	sp[0].o = (jobject)SF_arc_Events_events;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_Events_lambda$remove$0_R_arc_struct_Seq(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Events:lambda$remove$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Events(ctx);
	{
	LINE_NUMBER(25);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[0].o, (((jobject) &class_arc_func_Cons)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_arc_Events_lambda$run$1_java_lang_Runnable_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Events:lambda$run$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Events(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(20);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_arc_Events_lambda$run$0_R_arc_struct_Seq(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Events:lambda$run$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Events(ctx);
	{
	LINE_NUMBER(20);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[0].o, (((jobject) &class_arc_func_Cons)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_arc_Events_lambda$on$0_R_arc_struct_Seq(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Events:lambda$on$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Events(ctx);
	{
	LINE_NUMBER(15);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_java_lang_Class(ctx, sp[0].o, (((jobject) &class_arc_func_Cons)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_arc_Events(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/Events:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_Events(ctx);
	{
	LINE_NUMBER(11);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_arc_Events(ctx);
	SF_arc_Events_events = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_Events[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
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
};

static FieldMetadata fields[] {
	{ "events", &class_arc_struct_ObjectMap, (intptr_t) &SF_arc_Events_events, "Larc/struct/ObjectMap;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_Events, 0, "()V", 1 },
	{ "on", (intptr_t) SM_arc_Events_on_java_lang_Class_arc_func_Cons, 0, "(Ljava/lang/Class;Larc/func/Cons;)V", 9 },
	{ "run", (intptr_t) SM_arc_Events_run_java_lang_Object_java_lang_Runnable, 0, "(Ljava/lang/Object;Ljava/lang/Runnable;)V", 9 },
	{ "remove", (intptr_t) SM_arc_Events_remove_java_lang_Class_arc_func_Cons_R_boolean, 0, "(Ljava/lang/Class;Larc/func/Cons;)Z", 9 },
	{ "fire", (intptr_t) SM_arc_Events_fire_java_lang_Enum, 0, "(Ljava/lang/Enum;)V", 9 },
	{ "fire", (intptr_t) SM_arc_Events_fire_java_lang_Object, 0, "(Ljava/lang/Object;)V", 9 },
	{ "fire", (intptr_t) SM_arc_Events_fire_java_lang_Class_java_lang_Object, 0, "(Ljava/lang/Class;Ljava/lang/Object;)V", 9 },
	{ "clear", (intptr_t) SM_arc_Events_clear, 0, "()V", 9 },
	{ "lambda$remove$0", (intptr_t) SM_arc_Events_lambda$remove$0_R_arc_struct_Seq, 0, "()Larc/struct/Seq;", 4106 },
	{ "lambda$run$1", (intptr_t) SM_arc_Events_lambda$run$1_java_lang_Runnable_java_lang_Object, 0, "(Ljava/lang/Runnable;Ljava/lang/Object;)V", 4106 },
	{ "lambda$run$0", (intptr_t) SM_arc_Events_lambda$run$0_R_arc_struct_Seq, 0, "()Larc/struct/Seq;", 4106 },
	{ "lambda$on$0", (intptr_t) SM_arc_Events_lambda$on$0_R_arc_struct_Seq, 0, "()Larc/struct/Seq;", 4106 },
	{ "<clinit>", (intptr_t) clinit_arc_Events, 0, "()V", 8 },
};

Class class_arc_Events{
		.nativeName = (intptr_t) "arc/Events",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_Events),
		.classVtable = (intptr_t) vtable_arc_Events,
		.staticInitializer = (intptr_t) clinit_arc_Events,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_Events,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_Events = registerClass(&class_arc_Events);

}
