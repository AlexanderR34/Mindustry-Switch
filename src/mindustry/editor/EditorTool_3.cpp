#include "mindustry/editor/EditorTool_3.h"
#include "mindustry/editor/EditorTool_3_invoke_arc_func_Boolf_2.h"
#include "mindustry/world/Block.h"
#include "mindustry/editor/EditorTool.h"
#include "mindustry/editor/EditorTool_3_invoke_arc_func_Boolf_3.h"
#include "java/lang/Enum.h"
#include "arc/input/KeyCode.h"
#include "arc/func/Cons.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/editor/EditorTool_3.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/editor/EditorTool_3_invoke_arc_func_Cons_1.h"
#include "mindustry/editor/MapEditor.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_editor_EditorTool$3(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_editor_EditorTool(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_editor_EditorTool$3 *) object;
}

void clinit_mindustry_editor_EditorTool$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_editor_EditorTool(ctx);
}

void init_mindustry_editor_EditorTool$3_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$3:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(52);
	init_mindustry_editor_EditorTool_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].o));
	LINE_NUMBER(54);
	((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_edit = (jint(1));
	LINE_NUMBER(55);
	((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_draggable = (jint(1));
	LINE_NUMBER(1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTool$3_touched_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$3:touched", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(60);
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(62);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_drawBlocks_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(63);
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != 0) goto label_4;
	}
	{
	LINE_NUMBER(65);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_drawBlocksReplace_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_drawBlocksReplace_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(66);
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(1))) goto label_6;
	}
	{
	LINE_NUMBER(68);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = jint(1);
	jint temp3 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$3_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_editor_EditorTool$3_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$3_invoke_arc_func_Boolf_2);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	goto label_3;
	}
label_6:;
	{
	LINE_NUMBER(69);
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(2))) goto label_8;
	}
	{
	LINE_NUMBER(71);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$3_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_editor_EditorTool$3_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$3_invoke_arc_func_Cons_1);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	goto label_3;
	}
label_8:;
	{
	LINE_NUMBER(72);
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(3))) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	frame[4].o = sp[0].o;
	if ((isInstance(ctx, (frame[4].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_10;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[4].o)));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[3].o)))->F_isLiquid) != 0) goto label_3;
	}
label_10:;
	{
	LINE_NUMBER(73);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = jint(0);
	jint temp3 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$3_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_editor_EditorTool$3_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$3_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int_boolean_boolean_arc_func_Boolf])(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	}
label_3:;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_EditorTool$3_lambda$touched$2_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$3:lambda$touched$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$3(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return ((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_isLiquid);
	}

	popStackFrame(ctx);
}

void SM_mindustry_editor_EditorTool$3_lambda$touched$1_mindustry_world_Tile(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$3:lambda$touched$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$3(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawTeam;
	((func_mindustry_world_Tile_setTeam_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setTeam_mindustry_game_Team])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_editor_EditorTool$3_lambda$touched$0_mindustry_world_Tile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$3:lambda$touched$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$3(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_EditorTool$3[] {
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
	(void *) M_mindustry_editor_EditorTool$3_touched_int_int,
	(void *) M_mindustry_editor_EditorTool_touchedLine_int_int_int_int,
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
	{ "touched", "(II)V" },
	{ "touchedLine", "(IIII)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_EditorTool$3_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String, 0, "(Ljava/lang/String;ILarc/input/KeyCode;[Ljava/lang/String;)V", 130 },
	{ "touched", (intptr_t) M_mindustry_editor_EditorTool$3_touched_int_int, VTABLE_mindustry_editor_EditorTool$3_touched_int_int, "(II)V", 1 },
	{ "lambda$touched$2", (intptr_t) SM_mindustry_editor_EditorTool$3_lambda$touched$2_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
	{ "lambda$touched$1", (intptr_t) SM_mindustry_editor_EditorTool$3_lambda$touched$1_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;)V", 4106 },
	{ "lambda$touched$0", (intptr_t) SM_mindustry_editor_EditorTool$3_lambda$touched$0_mindustry_world_Tile_R_boolean, 0, "(Lmindustry/world/Tile;)Z", 4106 },
};

Class class_mindustry_editor_EditorTool$3{
		.nativeName = (intptr_t) "mindustry/editor/EditorTool$3",
		.parentClass = (intptr_t) &class_mindustry_editor_EditorTool,
		.size = sizeof(mindustry_editor_EditorTool$3),
		.classVtable = (intptr_t) vtable_mindustry_editor_EditorTool$3,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_EditorTool$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_EditorTool$3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_editor_EditorTool$3 = registerClass(&class_mindustry_editor_EditorTool$3);

}

