#include "mindustry/logic/LStatements_UnitRadarStatement.h"
#include "mindustry/logic/LVar.h"
#include "mindustry/logic/LStatement.h"
#include "mindustry/logic/LAssembler.h"
#include "mindustry/logic/LExecutor_LInstruction.h"
#include "mindustry/logic/LStatements_RadarStatement.h"
#include "mindustry/logic/LStatements.h"
#include "mindustry/logic/RadarTarget.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/logic/LExecutor_RadarI.h"
#include "mindustry/logic/LCategory.h"
#include "mindustry/logic/RadarSort.h"
#include "mindustry/logic/LStatements_UnitRadarStatement.h"

extern "C" {


void mark_mindustry_logic_LStatements$UnitRadarStatement(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_logic_LStatements$RadarStatement(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_logic_LStatements$UnitRadarStatement *) object;
}

void clinit_mindustry_logic_LStatements$UnitRadarStatement(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_logic_LStatements$RadarStatement(ctx);
}

void init_mindustry_logic_LStatements$UnitRadarStatement(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitRadarStatement:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_logic_LStatements$UnitRadarStatement(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1106);
	init_mindustry_logic_LStatements$RadarStatement(ctx, (frame[0].o));
	LINE_NUMBER(1107);
	((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_radar = (jref) (((jobject) createStringLiteral(ctx, u8"0"_j)));
	LINE_NUMBER(1108);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_logic_LStatements$UnitRadarStatement_buildFrom_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitRadarStatement:buildFrom", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1113);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$UnitRadarStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitRadarStatement:build", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1118);
	clinit_mindustry_logic_LExecutor$RadarI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_logic_LExecutor$RadarI);
	sp[1].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_target1;
	sp[2].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_target2;
	sp[3].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_target3;
	sp[4].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_sort;
	sp[5].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"@unit"_j))));
	sp[6].o = frame[1].o;
	sp[7].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_sortOrder;
	sp[6].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[6].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[6].o, sp[7].o);
	sp[7].o = frame[1].o;
	sp[8].o = (jobject)((mindustry_logic_LStatements$RadarStatement *) NULL_CHECK((frame[0].o)))->F_output;
	sp[7].o = (jobject)((func_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar) ((void **) nullCheck(ctx, sp[7].o)->vtable)[VTABLE_mindustry_logic_LAssembler_var_java_lang_String_R_mindustry_logic_LVar])(ctx, sp[7].o, sp[8].o);
	init_mindustry_logic_LExecutor$RadarI_mindustry_logic_RadarTarget_mindustry_logic_RadarTarget_mindustry_logic_RadarTarget_mindustry_logic_RadarSort_mindustry_logic_LVar_mindustry_logic_LVar_mindustry_logic_LVar(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_logic_LStatements$UnitRadarStatement_category_R_mindustry_logic_LCategory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/logic/LStatements$UnitRadarStatement:category", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1123);
	clinit_mindustry_logic_LCategory(ctx);
	sp[0].o = (jobject)SF_mindustry_logic_LCategory_unit;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_logic_LStatements$UnitRadarStatement[] {
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
	(void *) M_mindustry_logic_LStatements$RadarStatement_build_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$UnitRadarStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction,
	(void *) M_mindustry_logic_LStatements$UnitRadarStatement_category_R_mindustry_logic_LCategory,
	(void *) M_mindustry_logic_LStatement_copy_R_mindustry_logic_LStatement,
	(void *) M_mindustry_logic_LStatement_useWrapping_R_boolean,
	(void *) M_mindustry_logic_LStatement_hidden_R_boolean,
	(void *) M_mindustry_logic_LStatement_privileged_R_boolean,
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
	(void *) M_mindustry_logic_LStatements$UnitRadarStatement_buildFrom_R_boolean,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$10_arc_scene_ui_layout_Table_arc_scene_ui_layout_Table,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$11_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$13_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$14_mindustry_logic_RadarSort,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$12_R_java_lang_CharSequence,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$9_java_lang_String,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$3_arc_func_Prov_int_arc_scene_ui_Button,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$5_arc_scene_ui_Button_arc_func_Prov_int,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$6_int_mindustry_logic_RadarTarget,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$2_int_R_mindustry_logic_RadarTarget,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$1_java_lang_String,
	(void *) M_mindustry_logic_LStatements$RadarStatement_lambda$build$0_java_lang_String,
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
	{ "buildFrom", "()Z" },
	{ "lambda$build$10", "(Larc/scene/ui/layout/Table;Larc/scene/ui/layout/Table;)V" },
	{ "lambda$build$11", "(Larc/scene/ui/Button;)V" },
	{ "lambda$build$13", "(Larc/scene/ui/Button;)V" },
	{ "lambda$build$14", "(Lmindustry/logic/RadarSort;)V" },
	{ "lambda$build$12", "()Ljava/lang/CharSequence;" },
	{ "lambda$build$9", "(Ljava/lang/String;)V" },
	{ "lambda$build$3", "(Larc/func/Prov;ILarc/scene/ui/Button;)V" },
	{ "lambda$build$5", "(Larc/scene/ui/Button;Larc/func/Prov;I)V" },
	{ "lambda$build$6", "(ILmindustry/logic/RadarTarget;)V" },
	{ "lambda$build$2", "(I)Lmindustry/logic/RadarTarget;" },
	{ "lambda$build$1", "(Ljava/lang/String;)V" },
	{ "lambda$build$0", "(Ljava/lang/String;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_logic_LStatements$UnitRadarStatement, 0, "()V", 1 },
	{ "buildFrom", (intptr_t) M_mindustry_logic_LStatements$UnitRadarStatement_buildFrom_R_boolean, VTABLE_mindustry_logic_LStatements$UnitRadarStatement_buildFrom_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_logic_LStatements$UnitRadarStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, VTABLE_mindustry_logic_LStatements$UnitRadarStatement_build_mindustry_logic_LAssembler_R_mindustry_logic_LExecutor$LInstruction, "(Lmindustry/logic/LAssembler;)Lmindustry/logic/LExecutor$LInstruction;", 1 },
	{ "category", (intptr_t) M_mindustry_logic_LStatements$UnitRadarStatement_category_R_mindustry_logic_LCategory, VTABLE_mindustry_logic_LStatements$UnitRadarStatement_category_R_mindustry_logic_LCategory, "()Lmindustry/logic/LCategory;", 1 },
};

Class class_mindustry_logic_LStatements$UnitRadarStatement{
		.nativeName = (intptr_t) "mindustry/logic/LStatements$UnitRadarStatement",
		.parentClass = (intptr_t) &class_mindustry_logic_LStatements$RadarStatement,
		.size = sizeof(mindustry_logic_LStatements$UnitRadarStatement),
		.classVtable = (intptr_t) vtable_mindustry_logic_LStatements$UnitRadarStatement,
		.staticInitializer = (intptr_t) clinit_mindustry_logic_LStatements$UnitRadarStatement,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_logic_LStatements$UnitRadarStatement,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_logic_LStatements,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 49,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_logic_LStatements$UnitRadarStatement = registerClass(&class_mindustry_logic_LStatements$UnitRadarStatement);

}

