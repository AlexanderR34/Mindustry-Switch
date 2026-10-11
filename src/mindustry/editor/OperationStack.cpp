#include "mindustry/editor/OperationStack.h"
#include "mindustry/editor/DrawOperation.h"
#include "java/lang/Object.h"
#include "arc/struct/Seq.h"
#include "mindustry/editor/OperationStack.h"

extern "C" {

jint SF_mindustry_editor_OperationStack_maxSize;

void mark_mindustry_editor_OperationStack(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_OperationStack *) object;
	if (self->F_stack)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stack)->clazz)->markFunction)((jobject) self->F_stack, mark, depth + 1);
}

void clinit_mindustry_editor_OperationStack(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_editor_OperationStack_maxSize = jint(30);
}

void init_mindustry_editor_OperationStack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/OperationStack:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_OperationStack(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(7);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_editor_OperationStack *) NULL_CHECK(sp[0].o))->F_stack = (jref) sp[1].o;
	LINE_NUMBER(8);
	((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_OperationStack_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/OperationStack:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(16);
	((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_OperationStack_add_mindustry_editor_DrawOperation(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/OperationStack:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_stack;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, (((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) + ((jint)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_index)));
	LINE_NUMBER(21);
	((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(22);
	sp[0].o = (jobject)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(24);
	sp[0].o = (jobject)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_stack;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (30)) goto label_4;
	}
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_remove_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_int_R_java_lang_Object])(ctx, sp[0].o, (jint(0)));
	}
label_4:;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_editor_OperationStack_canUndo_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/OperationStack:canUndo", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_stack;
	if (((((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1))) + ((jint)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_index)) < 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_editor_OperationStack_canRedo_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/OperationStack:canRedo", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	if (((jint)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_index) > (jint(-1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_stack;
	if ((((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) + ((jint)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_index)) < 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_OperationStack_undo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/OperationStack:undo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	jint temp0 = (jint)((func_mindustry_editor_OperationStack_canUndo_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_OperationStack_canUndo_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))) + ((jint)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_index)));
	((func_mindustry_editor_DrawOperation_undo) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_editor_DrawOperation, sp[0].o)))->vtable)[VTABLE_mindustry_editor_DrawOperation_undo])(ctx, (checkCast(ctx, &class_mindustry_editor_DrawOperation, sp[0].o)));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	((mindustry_editor_OperationStack *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_editor_OperationStack *) NULL_CHECK(sp[0].o))->F_index) - (jint(1)));
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_OperationStack_redo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/OperationStack:redo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	jint temp0 = (jint)((func_mindustry_editor_OperationStack_canRedo_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_OperationStack_canRedo_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	((mindustry_editor_OperationStack *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_editor_OperationStack *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[1].o = (jobject)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_stack;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, ((((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))) + ((jint)((mindustry_editor_OperationStack *) NULL_CHECK((frame[0].o)))->F_index)));
	((func_mindustry_editor_DrawOperation_redo) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_editor_DrawOperation, sp[0].o)))->vtable)[VTABLE_mindustry_editor_DrawOperation_redo])(ctx, (checkCast(ctx, &class_mindustry_editor_DrawOperation, sp[0].o)));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_OperationStack[] {
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
	(void *) M_mindustry_editor_OperationStack_clear,
	(void *) M_mindustry_editor_OperationStack_add_mindustry_editor_DrawOperation,
	(void *) M_mindustry_editor_OperationStack_canUndo_R_boolean,
	(void *) M_mindustry_editor_OperationStack_canRedo_R_boolean,
	(void *) M_mindustry_editor_OperationStack_undo,
	(void *) M_mindustry_editor_OperationStack_redo,
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
	{ "clear", "()V" },
	{ "add", "(Lmindustry/editor/DrawOperation;)V" },
	{ "canUndo", "()Z" },
	{ "canRedo", "()Z" },
	{ "undo", "()V" },
	{ "redo", "()V" },
};

static FieldMetadata fields[] {
	{ "maxSize", &class_int, (intptr_t) &SF_mindustry_editor_OperationStack_maxSize, "I", 26 },
	{ "stack", &class_arc_struct_Seq, offsetof(mindustry_editor_OperationStack, F_stack), "Larc/struct/Seq;", 2 },
	{ "index", &class_int, offsetof(mindustry_editor_OperationStack, F_index), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_OperationStack, 0, "()V", 1 },
	{ "clear", (intptr_t) M_mindustry_editor_OperationStack_clear, VTABLE_mindustry_editor_OperationStack_clear, "()V", 1 },
	{ "add", (intptr_t) M_mindustry_editor_OperationStack_add_mindustry_editor_DrawOperation, VTABLE_mindustry_editor_OperationStack_add_mindustry_editor_DrawOperation, "(Lmindustry/editor/DrawOperation;)V", 1 },
	{ "canUndo", (intptr_t) M_mindustry_editor_OperationStack_canUndo_R_boolean, VTABLE_mindustry_editor_OperationStack_canUndo_R_boolean, "()Z", 1 },
	{ "canRedo", (intptr_t) M_mindustry_editor_OperationStack_canRedo_R_boolean, VTABLE_mindustry_editor_OperationStack_canRedo_R_boolean, "()Z", 1 },
	{ "undo", (intptr_t) M_mindustry_editor_OperationStack_undo, VTABLE_mindustry_editor_OperationStack_undo, "()V", 1 },
	{ "redo", (intptr_t) M_mindustry_editor_OperationStack_redo, VTABLE_mindustry_editor_OperationStack_redo, "()V", 1 },
};

Class class_mindustry_editor_OperationStack{
		.nativeName = (intptr_t) "mindustry/editor/OperationStack",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_OperationStack),
		.classVtable = (intptr_t) vtable_mindustry_editor_OperationStack,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_OperationStack,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_OperationStack,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_OperationStack = registerClass(&class_mindustry_editor_OperationStack);

}
