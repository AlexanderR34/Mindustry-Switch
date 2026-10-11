#include "mindustry/ui/dialogs/FileChooserDialog_FileHistory.h"
#include "java/lang/Object.h"
#include "arc/struct/Seq.h"
#include "mindustry/ui/dialogs/FileChooserDialog.h"
#include "mindustry/ui/dialogs/FileChooserDialog_FileHistory.h"
#include "arc/files/Fi.h"

extern "C" {


void mark_mindustry_ui_dialogs_FileChooserDialog$FileHistory(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_FileChooserDialog$FileHistory *) object;
	if (self->F_history)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_history)->clazz)->markFunction)((jobject) self->F_history, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_FileChooserDialog$FileHistory(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_dialogs_FileChooserDialog$FileHistory_mindustry_ui_dialogs_FileChooserDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog$FileHistory:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_FileChooserDialog$FileHistory(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(270);
	((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK(sp[0].o))->F_history = (jref) sp[1].o;
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_push_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog$FileHistory:push", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(275);
	jint temp0 = (jint)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_history;
	if (temp0 == ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_history;
	((func_arc_struct_Seq_truncate_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_truncate_int])(ctx, sp[0].o, ((jint)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_index));
	}
label_1:;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_history;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_back(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog$FileHistory:back", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(281);
	jint temp0 = (jint)((func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canBack_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canBack_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK(sp[0].o))->F_index) - (jint(1)));
	LINE_NUMBER(283);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_history;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (((jint)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_index) - (jint(1))));
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_directory = (jref) (checkCast(ctx, &class_arc_files_Fi, sp[1].o));
	LINE_NUMBER(284);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_directory;
	SM_mindustry_ui_dialogs_FileChooserDialog_setLastDirectory_arc_files_Fi(ctx, sp[0].o);
	LINE_NUMBER(285);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_forward(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog$FileHistory:forward", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(289);
	jint temp0 = (jint)((func_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canForward_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canForward_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_history;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_index));
	((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_directory = (jref) (checkCast(ctx, &class_arc_files_Fi, sp[1].o));
	LINE_NUMBER(291);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog *) NULL_CHECK(sp[0].o))->F_directory;
	SM_mindustry_ui_dialogs_FileChooserDialog_setLastDirectory_arc_files_Fi(ctx, sp[0].o);
	LINE_NUMBER(292);
	sp[0].o = frame[0].o;
	((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_FileChooserDialog_updateFiles_boolean])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(294);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canForward_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog$FileHistory:canForward", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(297);
	jint temp0 = (jint)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_history;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_1;
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

jbool M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canBack_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/FileChooserDialog$FileHistory:canBack", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(301);
	if (((jint)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_index) == (jint(1))) goto label_1;
	}
	{
	if (((jint)((mindustry_ui_dialogs_FileChooserDialog$FileHistory *) NULL_CHECK((frame[0].o)))->F_index) <= 0) goto label_1;
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

void *vtable_mindustry_ui_dialogs_FileChooserDialog$FileHistory[] {
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
	(void *) M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_push_arc_files_Fi,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_back,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_forward,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canForward_R_boolean,
	(void *) M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canBack_R_boolean,
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
	{ "push", "(Larc/files/Fi;)V" },
	{ "back", "()V" },
	{ "forward", "()V" },
	{ "canForward", "()Z" },
	{ "canBack", "()Z" },
};

static FieldMetadata fields[] {
	{ "history", &class_arc_struct_Seq, offsetof(mindustry_ui_dialogs_FileChooserDialog$FileHistory, F_history), "Larc/struct/Seq;", 2 },
	{ "index", &class_int, offsetof(mindustry_ui_dialogs_FileChooserDialog$FileHistory, F_index), "I", 2 },
	{ "this$0", &class_mindustry_ui_dialogs_FileChooserDialog, offsetof(mindustry_ui_dialogs_FileChooserDialog$FileHistory, F_this$0), "Lmindustry/ui/dialogs/FileChooserDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_FileChooserDialog$FileHistory_mindustry_ui_dialogs_FileChooserDialog, 0, "(Lmindustry/ui/dialogs/FileChooserDialog;)V", 1 },
	{ "push", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_push_arc_files_Fi, VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_push_arc_files_Fi, "(Larc/files/Fi;)V", 1 },
	{ "back", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_back, VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_back, "()V", 1 },
	{ "forward", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_forward, VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_forward, "()V", 1 },
	{ "canForward", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canForward_R_boolean, VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canForward_R_boolean, "()Z", 1 },
	{ "canBack", (intptr_t) M_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canBack_R_boolean, VTABLE_mindustry_ui_dialogs_FileChooserDialog$FileHistory_canBack_R_boolean, "()Z", 1 },
};

Class class_mindustry_ui_dialogs_FileChooserDialog$FileHistory{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/FileChooserDialog$FileHistory",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_dialogs_FileChooserDialog$FileHistory),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_FileChooserDialog$FileHistory,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_FileChooserDialog$FileHistory,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_FileChooserDialog$FileHistory,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_dialogs_FileChooserDialog,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_FileChooserDialog$FileHistory = registerClass(&class_mindustry_ui_dialogs_FileChooserDialog$FileHistory);

}

