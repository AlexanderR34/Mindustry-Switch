#include "mindustry/world/blocks/ControlBlock.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/world/blocks/ControlBlock.h"
#include "mindustry/gen/Unitc.h"

extern "C" {


void mark_mindustry_world_blocks_ControlBlock(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_ControlBlock *) object;
}

void clinit_mindustry_world_blocks_ControlBlock(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_mindustry_world_blocks_ControlBlock_isControlled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ControlBlock:isControlled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)((func_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_ControlBlock, INDEX_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit, (frame[0].o)))(ctx, (frame[0].o));
	jint temp0 = (jint)((func_mindustry_gen_Unit_isPlayer_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isPlayer_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_ControlBlock_canControl_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ControlBlock:canControl", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_ControlBlock_shouldAutoTarget_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/ControlBlock:shouldAutoTarget", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_ControlBlock[] {
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
	(void *) nullptr,
	(void *) M_mindustry_world_blocks_ControlBlock_isControlled_R_boolean,
	(void *) M_mindustry_world_blocks_ControlBlock_canControl_R_boolean,
	(void *) M_mindustry_world_blocks_ControlBlock_shouldAutoTarget_R_boolean,
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
	{ "unit", "()Lmindustry/gen/Unit;" },
	{ "isControlled", "()Z" },
	{ "canControl", "()Z" },
	{ "shouldAutoTarget", "()Z" },
};

static MethodMetadata methods[] {
	{ "unit", 0, INDEX_mindustry_world_blocks_ControlBlock_unit_R_mindustry_gen_Unit, "()Lmindustry/gen/Unit;", 1025 },
	{ "isControlled", (intptr_t) M_mindustry_world_blocks_ControlBlock_isControlled_R_boolean, INDEX_mindustry_world_blocks_ControlBlock_isControlled_R_boolean, "()Z", 1 },
	{ "canControl", (intptr_t) M_mindustry_world_blocks_ControlBlock_canControl_R_boolean, INDEX_mindustry_world_blocks_ControlBlock_canControl_R_boolean, "()Z", 1 },
	{ "shouldAutoTarget", (intptr_t) M_mindustry_world_blocks_ControlBlock_shouldAutoTarget_R_boolean, INDEX_mindustry_world_blocks_ControlBlock_shouldAutoTarget_R_boolean, "()Z", 1 },
};

Class class_mindustry_world_blocks_ControlBlock{
		.nativeName = (intptr_t) "mindustry/world/blocks/ControlBlock",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_ControlBlock),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_ControlBlock,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_ControlBlock,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_ControlBlock,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_ControlBlock = registerClass(&class_mindustry_world_blocks_ControlBlock);

}
