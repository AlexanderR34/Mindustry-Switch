#include "mindustry/logic/LStatements_PlayMusicStatement.h"
#include "mindustry/logic/LStatements_PlayMusicStatement.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LStatement.h"
#include "arc/scene/ui/layout/Table.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LCanvas.h"
#include "arc/func/Cons.h"
#include "mindustry/logic/LStatements_PlayMusicStatement_invoke_arc_func_Cons_3.h"
#include "mindustry/logic/LStatements.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/LExecutor_PlayMusicI.h"
#include "mindustry/logic/LStatements_PlayMusicStatement_invoke_arc_func_Cons_2.h"
#include "mindustry/logic/LCategory.h"
#include "arc/scene/ui/layout/Cell.h"

extern "C" {


void mark_mindustry_logic_LStatements$PlayMusicStatement(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_logic_LStatement(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_logic_LStatements$PlayMusicStatement *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_interrupt)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_interrupt)->clazz)->markFunction)((jobject) self->F_interrupt, mark, depth + 1);
}

void clinit_mindustry_logic_LStatements$PlayMusicStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatement(ctx);
}

void init_mindustry_logic_LStatements$PlayMusicStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlayMusicStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$PlayMusicStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(2421);
	init_mindustry_logic_LStatement(ctx, (frame[0].o));
	LINE_NUMBER(2422);
	((mindustry_logic_LStatements$PlayMusicStatement *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"\"game1\""_j)));
	((mindustry_logic_LStatements$PlayMusicStatement *) NULL_CHECK((frame[0].o)))->F_interrupt = (jref) (((jobject) createStringLiteral(ctx, u8"true"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlayMusicStatement_build_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlayMusicStatement:build", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2426);
	jint temp0 = (jint)SM_mindustry_logic_LCanvas_isCompact_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	(sp++)->f = jfloat(100.0f);
	goto label_2;
label_1:;
	(sp++)->f = jfloat(190.0f);
label_2:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(2428);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"music"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$PlayMusicStatement *) NULL_CHECK((frame[0].o)))->F_name;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlayMusicStatement_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_logic_LStatements$PlayMusicStatement_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlayMusicStatement_invoke_arc_func_Cons_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$PlayMusicStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$PlayMusicStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	LINE_NUMBER(2430);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"interrupt"_j));
	sp[3].o = (jobject)((mindustry_logic_LStatements$PlayMusicStatement *) NULL_CHECK((frame[0].o)))->F_interrupt;
	{ /* InvokeDynamic */
		clinit_mindustry_logic_LStatements$PlayMusicStatement_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_logic_LStatements$PlayMusicStatement_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_logic_LStatements$PlayMusicStatement_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_logic_LStatements$PlayMusicStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_logic_LStatements$PlayMusicStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Cell_width_float_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, (frame[2].f));
	LINE_NUMBER(2431);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatements$PlayMusicStatement_privileged_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlayMusicStatement:privileged", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2435);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$PlayMusicStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlayMusicStatement:build", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2440);
	clinit_mindustry_logic_LExecutor$PlayMusicI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$PlayMusicI);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_logic_LStatements$PlayMusicStatement *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[1].o, sp[2].o);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((mindustry_logic_LStatements$PlayMusicStatement *) NULL_CHECK((frame[0].o)))->F_interrupt;
	sp[2].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[2].o, sp[3].o);
	init_mindustry_logic_LExecutor$PlayMusicI_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$PlayMusicStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlayMusicStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(2445);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_world;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlayMusicStatement_lambda$build$1_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlayMusicStatement:lambda$build$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2430);
	((mindustry_logic_LStatements$PlayMusicStatement *) NULL_CHECK((frame[0].o)))->F_interrupt = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_logic_LStatements$PlayMusicStatement_lambda$build$0_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$PlayMusicStatement:lambda$build$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2428);
	((mindustry_logic_LStatements$PlayMusicStatement *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$PlayMusicStatement[] {
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
	(void *) M_mindustry_logic_LStatements$PlayMusicStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$PlayMusicStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$PlayMusicStatement_category_R_mindustry_logic_LCategory,
	(void *) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement,
	(void *) M_mindustry_logic_LStatement_useWrapping_R_boolean,
	(void *) M_mindustry_logic_LStatement_hidden_R_boolean,
	(void *) M_mindustry_logic_LStatements$PlayMusicStatement_privileged_R_boolean,
	(void *) M_mindustry_logic_LStatement_nonPrivileged_R_boolean,
	(void *) M_mindustry_logic_LStatement_param_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_field_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_fields_arc_scene_ui_layout_Table_java_lang_String_boolean_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_col_arc_scene_ui_layout_Table_java_lang_String_arc_func_Cons_R_arc_scene_ui_layout_Cell,
	(void *) M_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons_int_arc_func_Cons,
	(void *) M_mindustry_logic_LStatement_showSelect_arc_scene_ui_Button_Array1_java_lang_Object_java_lang_Object_arc_func_Cons,
	(void *) M_mindustry_logic_LStatement_fieldAlignSelect_arc_scene_ui_layout_Table_arc_func_Prov_arc_func_Cons_boolean_boolean,
	(void *) M_mindustry_logic_LStatement_afterRead,
	(void *) M_mindustry_logic_LStatement_write_java_lang_StringBuilder,
	(void *) M_mindustry_logic_LStatement_setupUI,
	(void *) M_mindustry_logic_LStatement_saveUI,
	(void *) M_mindustry_logic_LStatement_typeName_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_statementKey_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_localizedName_R_java_lang_String,
	(void *) M_mindustry_logic_LStatement_name_R_java_lang_String,
	(void *) M_mindustry_logic_LStatements$PlayMusicStatement_lambda$build$1_java_lang_String,
	(void *) M_mindustry_logic_LStatements$PlayMusicStatement_lambda$build$0_java_lang_String,
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
	{ "build", "(Larc/scene/ui/layout/Table;)V" },
	{ "build", "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;" },
	{ "category", "()Lmindustry/logic/LCategory;" },
	{ "copy", "()Lmindustry/logic/LStatement;" },
	{ "useWrapping", "()Z" },
	{ "hidden", "()Z" },
	{ "privileged", "()Z" },
	{ "nonPrivileged", "()Z" },
	{ "param", "(Larc/scene/ui/layout/Cell;)V" },
	{ "field", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "fields", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "fields", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "fields", "(Larc/scene/ui/layout/Table;Ljava/lang/String;ZLjava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "col", "(Larc/scene/ui/layout/Table;Ljava/lang/String;Larc/func/Cons;)Larc/scene/ui/layout/Cell;" },
	{ "showSelect", "(Larc/scene/ui/Button;[Ljava/lang/Object;Ljava/lang/Object;Larc/func/Cons;ILarc/func/Cons;)V" },
	{ "showSelect", "(Larc/scene/ui/Button;[Ljava/lang/Object;Ljava/lang/Object;Larc/func/Cons;)V" },
	{ "fieldAlignSelect", "(Larc/scene/ui/layout/Table;Larc/func/Prov;Larc/func/Cons;ZZ)V" },
	{ "afterRead", "()V" },
	{ "write", "(Ljava/lang/StringBuilder;)V" },
	{ "setupUI", "()V" },
	{ "saveUI", "()V" },
	{ "typeName", "()Ljava/lang/String;" },
	{ "statementKey", "()Ljava/lang/String;" },
	{ "localizedName", "()Ljava/lang/String;" },
	{ "name", "()Ljava/lang/String;" },
	{ "lambda$build$1", "(Ljava/lang/String;)V" },
	{ "lambda$build$0", "(Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(mindustry_logic_LStatements$PlayMusicStatement, F_name), "Ljava/lang/String;", 1 },
	{ "interrupt", &class_java_lang_String, offsetof(mindustry_logic_LStatements$PlayMusicStatement, F_interrupt), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$PlayMusicStatement, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$PlayMusicStatement_build_arc_scene_ui_layout_Table, VTABLE_mindustry_logic_LStatements$PlayMusicStatement_build_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "privileged", (intptr_t) M_mindustry_logic_LStatements$PlayMusicStatement_privileged_R_boolean, VTABLE_mindustry_logic_LStatements$PlayMusicStatement_privileged_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$PlayMusicStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$PlayMusicStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$PlayMusicStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$PlayMusicStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
	{ "lambda$build$1", (intptr_t) M_mindustry_logic_LStatements$PlayMusicStatement_lambda$build$1_java_lang_String, VTABLE_mindustry_logic_LStatements$PlayMusicStatement_lambda$build$1_java_lang_String, "(Ljava/lang/String;)V", 4098 },
	{ "lambda$build$0", (intptr_t) M_mindustry_logic_LStatements$PlayMusicStatement_lambda$build$0_java_lang_String, VTABLE_mindustry_logic_LStatements$PlayMusicStatement_lambda$build$0_java_lang_String, "(Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_logic_LStatements$PlayMusicStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$PlayMusicStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatement,
		.size = sizeof(mindustry_logic_LStatements$PlayMusicStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$PlayMusicStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$PlayMusicStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$PlayMusicStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$PlayMusicStatement = registerClass(&class_mindustry_logic_LStatements$PlayMusicStatement);

}

