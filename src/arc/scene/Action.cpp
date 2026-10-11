#include "arc/scene/Action.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "java/lang/String.h"
#include "arc/util/pooling/Pool_Poolable.h"
#include "arc/util/pooling/Pool.h"
#include "arc/scene/Action.h"

extern "C" {


void mark_arc_scene_Action(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (arc_scene_Action *) object;
	if (self->F_actor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actor)->clazz)->markFunction)((jobject) self->F_actor, mark, depth + 1);
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
	if (self->F_pool)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pool)->clazz)->markFunction)((jobject) self->F_pool, mark, depth + 1);
}

void clinit_arc_scene_Action(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_scene_Action(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Action:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_scene_Action(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Action_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Action:restart", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_Action_getActor_R_arc_scene_Element(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Action:getActor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_actor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Action_setActor_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Action:setActor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (frame[1].o);
	LINE_NUMBER(52);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	((func_arc_scene_Action_setTarget_arc_scene_Element) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Action_setTarget_arc_scene_Element])(ctx, (frame[0].o), (frame[1].o));
	}
label_2:;
	{
	LINE_NUMBER(53);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_pool;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(55);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_pool;
	((func_arc_util_pooling_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_pooling_Pool_free_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(56);
	((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_pool = (jref) (jobject(nullptr));
	}
label_3:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_arc_scene_Action_getTarget_R_arc_scene_Element(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Action:getTarget", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Action_setTarget_arc_scene_Element(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Action:setTarget", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target = (jref) (frame[1].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Action_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Action:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(84);
	((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (jobject(nullptr));
	LINE_NUMBER(85);
	((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_target = (jref) (jobject(nullptr));
	LINE_NUMBER(86);
	((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_pool = (jref) (jobject(nullptr));
	LINE_NUMBER(87);
	((func_arc_scene_Action_restart) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_scene_Action_restart])(ctx, (frame[0].o));
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Action_getPool_R_arc_util_pooling_Pool(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Action:getPool", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_pool;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_arc_scene_Action_setPool_arc_util_pooling_Pool(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Action:setPool", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	((arc_scene_Action *) NULL_CHECK((frame[0].o)))->F_pool = (jref) (frame[1].o);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_arc_scene_Action_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/Action:toString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@"_j))));
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(107);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (46));
	frame[2].i = temp0;
	LINE_NUMBER(108);
	if ((frame[2].i) == (jint(-1))) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))));
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(109);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"Action"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	jint temp0 = jint(0);
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, sp[0].o, temp0, (temp1 - (6)));
	frame[1].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_Action[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Action_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_scene_Action_reset,
	(void *) nullptr,
	(void *) M_arc_scene_Action_restart,
	(void *) M_arc_scene_Action_getActor_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setActor_arc_scene_Element,
	(void *) M_arc_scene_Action_getTarget_R_arc_scene_Element,
	(void *) M_arc_scene_Action_setTarget_arc_scene_Element,
	(void *) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool,
	(void *) M_arc_scene_Action_setPool_arc_util_pooling_Pool,
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
	{ "reset", "()V" },
	{ "act", "(F)Z" },
	{ "restart", "()V" },
	{ "getActor", "()Larc/scene/Element;" },
	{ "setActor", "(Larc/scene/Element;)V" },
	{ "getTarget", "()Larc/scene/Element;" },
	{ "setTarget", "(Larc/scene/Element;)V" },
	{ "getPool", "()Larc/util/pooling/Pool;" },
	{ "setPool", "(Larc/util/pooling/Pool;)V" },
};

static jclass interfaces[] { &class_arc_util_pooling_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "actor", &class_arc_scene_Element, offsetof(arc_scene_Action, F_actor), "Larc/scene/Element;", 4 },
	{ "target", &class_arc_scene_Element, offsetof(arc_scene_Action, F_target), "Larc/scene/Element;", 4 },
	{ "pool", &class_arc_util_pooling_Pool, offsetof(arc_scene_Action, F_pool), "Larc/util/pooling/Pool;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_scene_Action, 0, "()V", 1 },
	{ "act", 0, VTABLE_arc_scene_Action_act_float_R_boolean, "(F)Z", 1025 },
	{ "restart", (intptr_t) M_arc_scene_Action_restart, VTABLE_arc_scene_Action_restart, "()V", 1 },
	{ "getActor", (intptr_t) M_arc_scene_Action_getActor_R_arc_scene_Element, VTABLE_arc_scene_Action_getActor_R_arc_scene_Element, "()Larc/scene/Element;", 1 },
	{ "setActor", (intptr_t) M_arc_scene_Action_setActor_arc_scene_Element, VTABLE_arc_scene_Action_setActor_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
	{ "getTarget", (intptr_t) M_arc_scene_Action_getTarget_R_arc_scene_Element, VTABLE_arc_scene_Action_getTarget_R_arc_scene_Element, "()Larc/scene/Element;", 1 },
	{ "setTarget", (intptr_t) M_arc_scene_Action_setTarget_arc_scene_Element, VTABLE_arc_scene_Action_setTarget_arc_scene_Element, "(Larc/scene/Element;)V", 1 },
	{ "reset", (intptr_t) M_arc_scene_Action_reset, VTABLE_arc_scene_Action_reset, "()V", 1 },
	{ "getPool", (intptr_t) M_arc_scene_Action_getPool_R_arc_util_pooling_Pool, VTABLE_arc_scene_Action_getPool_R_arc_util_pooling_Pool, "()Larc/util/pooling/Pool;", 1 },
	{ "setPool", (intptr_t) M_arc_scene_Action_setPool_arc_util_pooling_Pool, VTABLE_arc_scene_Action_setPool_arc_util_pooling_Pool, "(Larc/util/pooling/Pool;)V", 1 },
	{ "toString", (intptr_t) M_arc_scene_Action_toString_R_java_lang_String, VTABLE_arc_scene_Action_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_scene_Action{
		.nativeName = (intptr_t) "arc/scene/Action",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_Action),
		.classVtable = (intptr_t) vtable_arc_scene_Action,
		.staticInitializer = (intptr_t) clinit_arc_scene_Action,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_Action,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_Action = registerClass(&class_arc_scene_Action);

}
