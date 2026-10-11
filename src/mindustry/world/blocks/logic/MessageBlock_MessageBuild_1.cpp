#include "mindustry/world/blocks/logic/MessageBlock_MessageBuild_1.h"
#include "arc/Input_TextInput.h"
#include "arc/func/Cons.h"
#include "mindustry/world/blocks/logic/MessageBlock.h"
#include "java/lang/StringBuilder.h"
#include "mindustry/world/blocks/logic/MessageBlock_MessageBuild_1_invoke_arc_func_Cons_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/logic/MessageBlock_MessageBuild.h"
#include "mindustry/world/blocks/logic/MessageBlock_MessageBuild_1.h"
#include "java/lang/CharSequence.h"
#include "mindustry/gen/Building.h"

extern "C" {


void mark_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_Input$TextInput(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_logic_MessageBlock$MessageBuild$1 *) object;
	if (self->F_val$contents)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$contents)->clazz)->markFunction)((jobject) self->F_val$contents, mark, depth + 1);
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_Input$TextInput(ctx);
}

void init_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_mindustry_world_blocks_logic_MessageBlock$MessageBuild_java_lang_StringBuilder(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MessageBlock$MessageBuild$1:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(113);
	((mindustry_world_blocks_logic_MessageBlock$MessageBuild$1 *) NULL_CHECK((frame[0].o)))->F_val$contents = (jref) (frame[2].o);
	((mindustry_world_blocks_logic_MessageBlock$MessageBuild$1 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_arc_Input$TextInput(ctx, (frame[0].o));
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_MessageBlock$MessageBuild$1 *) NULL_CHECK((frame[0].o)))->F_val$contents;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(115);
	((arc_Input$TextInput *) NULL_CHECK((frame[0].o)))->F_multiline = (jint(1));
	LINE_NUMBER(116);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_MessageBlock$MessageBuild$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	sp[1].o = (jobject)((mindustry_world_blocks_logic_MessageBlock$MessageBuild *) NULL_CHECK(sp[1].o))->F_this$0;
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_maxLength = ((jint)((mindustry_world_blocks_logic_MessageBlock *) NULL_CHECK(sp[1].o))->F_maxTextLength);
	LINE_NUMBER(117);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_world_blocks_logic_MessageBlock$MessageBuild$1 *) NULL_CHECK((frame[0].o)))->F_val$contents;
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_invoke_arc_func_Cons_1);
		proxy->F_field1 = (jref) sp[2].o;
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	((arc_Input$TextInput *) NULL_CHECK(sp[0].o))->F_accepted = (jref) sp[1].o;
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_lambda$new$0_java_lang_StringBuilder_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/logic/MessageBlock$MessageBuild$1:lambda$new$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(118);
	jint temp0 = (jint)((func_java_lang_String_contentEquals_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_contentEquals_java_lang_CharSequence_R_boolean])(ctx, (frame[2].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_blocks_logic_MessageBlock$MessageBuild$1 *) NULL_CHECK((frame[0].o)))->F_this$1;
	((func_mindustry_world_blocks_logic_MessageBlock$MessageBuild_configure_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild_configure_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	}
label_1:;
	LINE_NUMBER(119);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1[] {
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
	(void *) M_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_lambda$new$0_java_lang_StringBuilder_java_lang_String,
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
	{ "lambda$new$0", "(Ljava/lang/StringBuilder;Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "val$contents", &class_java_lang_StringBuilder, offsetof(mindustry_world_blocks_logic_MessageBlock$MessageBuild$1, F_val$contents), "Ljava/lang/StringBuilder;", 4112 },
	{ "this$1", &class_mindustry_world_blocks_logic_MessageBlock$MessageBuild, offsetof(mindustry_world_blocks_logic_MessageBlock$MessageBuild$1, F_this$1), "Lmindustry/world/blocks/logic/MessageBlock$MessageBuild;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_mindustry_world_blocks_logic_MessageBlock$MessageBuild_java_lang_StringBuilder, 0, "(Lmindustry/world/blocks/logic/MessageBlock$MessageBuild;Ljava/lang/StringBuilder;)V", 0 },
	{ "lambda$new$0", (intptr_t) M_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_lambda$new$0_java_lang_StringBuilder_java_lang_String, VTABLE_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1_lambda$new$0_java_lang_StringBuilder_java_lang_String, "(Ljava/lang/StringBuilder;Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1{
		.nativeName = (intptr_t) "mindustry/world/blocks/logic/MessageBlock$MessageBuild$1",
		.parentClass = (intptr_t) &class_arc_Input$TextInput,
		.size = sizeof(mindustry_world_blocks_logic_MessageBlock$MessageBuild$1),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1 = registerClass(&class_mindustry_world_blocks_logic_MessageBlock$MessageBuild$1);

}

