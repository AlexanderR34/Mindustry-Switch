#include "mindustry/editor/EditorTool_6.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/Block.h"
#include "mindustry/editor/EditorTool.h"
#include "java/lang/Enum.h"
#include "arc/input/KeyCode.h"
#include "arc/func/Cons.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/editor/EditorTool_6_invoke_arc_func_Boolf_2.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/editor/EditorTool_6_invoke_arc_func_Boolf_3.h"
#include "mindustry/editor/EditorTool_6.h"
#include "mindustry/editor/EditorTool_6_invoke_arc_func_Cons_1.h"
#include "mindustry/world/Tile.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "mindustry/Vars.h"
#include "mindustry/editor/MapEditor.h"
#include "arc/func/Boolf.h"

extern "C" {


void mark_mindustry_editor_EditorTool$6(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_EditorTool$6 *) object;
}

void clinit_mindustry_editor_EditorTool$6(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_editor_EditorTool(ctx);
}

void init_mindustry_editor_EditorTool$6_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$6:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$6(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(297);
	init_mindustry_editor_EditorTool_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].o));
	LINE_NUMBER(298);
	((mindustry_editor_EditorTool$6 *) NULL_CHECK((frame[0].o)))->F_chance = (jdouble(0.012));
	LINE_NUMBER(301);
	((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_edit = (jint(1));
	LINE_NUMBER(302);
	((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_draggable = (jint(1));
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTool$6_touched_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$6:touched", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(309);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_drawBlock;
	jint temp0 = (jint)((func_mindustry_world_Block_isFloor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isFloor_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(310);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$6_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_editor_EditorTool$6_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$6_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(315);
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != 0) goto label_4;
	}
	{
	LINE_NUMBER(316);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$6_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_editor_EditorTool$6_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$6_invoke_arc_func_Boolf_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditor_drawBlocks_int_int_arc_func_Boolf) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int_arc_func_Boolf])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(318);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$6_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_editor_EditorTool$6_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$6_invoke_arc_func_Boolf_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditor_drawBlocks_int_int_arc_func_Boolf) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int_arc_func_Boolf])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	}
label_3:;
	LINE_NUMBER(320);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_editor_EditorTool$6_lambda$touched$2_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$6:lambda$touched$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(318);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.012)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_EditorTool$6_lambda$touched$1_mindustry_world_Tile_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$6:lambda$touched$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(316);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.012)));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[1].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_1;
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

void M_mindustry_editor_EditorTool$6_lambda$touched$0_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$6:lambda$touched$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(311);
	jint temp0 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble(0.012)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(312);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_editor;
	sp[1].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[1].o))->F_drawBlock;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[1].o);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(314);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_EditorTool$6[] {
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
	(void *) M_mindustry_editor_EditorTool$6_touched_int_int,
	(void *) M_mindustry_editor_EditorTool_touchedLine_int_int_int_int,
	(void *) M_mindustry_editor_EditorTool$6_lambda$touched$2_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_editor_EditorTool$6_lambda$touched$1_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_editor_EditorTool$6_lambda$touched$0_mindustry_world_Tile,
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
	{ "lambda$touched$2", "(Lmindustry/world/Tile;)Z" },
	{ "lambda$touched$1", "(Lmindustry/world/Tile;)Z" },
	{ "lambda$touched$0", "(Lmindustry/world/Tile;)V" },
};

static FieldMetadata fields[] {
	{ "chance", &class_double, offsetof(mindustry_editor_EditorTool$6, F_chance), "D", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_EditorTool$6_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String, 0, "(Ljava/lang/String;ILarc/input/KeyCode;[Ljava/lang/String;)V", 130 },
	{ "touched", (intptr_t) M_mindustry_editor_EditorTool$6_touched_int_int, VTABLE_mindustry_editor_EditorTool$6_touched_int_int, "(II)V", 1 },
	{ "lambda$touched$2", (intptr_t) M_mindustry_editor_EditorTool$6_lambda$touched$2_mindustry_world_Tile_R_boolean, VTABLE_mindustry_editor_EditorTool$6_lambda$touched$2_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 4098 },
	{ "lambda$touched$1", (intptr_t) M_mindustry_editor_EditorTool$6_lambda$touched$1_mindustry_world_Tile_R_boolean, VTABLE_mindustry_editor_EditorTool$6_lambda$touched$1_mindustry_world_Tile_R_boolean, "(Lmindustry/world/Tile;)Z", 4098 },
	{ "lambda$touched$0", (intptr_t) M_mindustry_editor_EditorTool$6_lambda$touched$0_mindustry_world_Tile, VTABLE_mindustry_editor_EditorTool$6_lambda$touched$0_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 4098 },
};

Class class_mindustry_editor_EditorTool$6{
		.nativeName = (intptr_t) "mindustry/editor/EditorTool$6",
		.parentClass = (intptr_t) &class_mindustry_editor_EditorTool,
		.size = sizeof(mindustry_editor_EditorTool$6),
		.classVtable = (intptr_t) vtable_mindustry_editor_EditorTool$6,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_EditorTool$6,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_EditorTool$6,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16440,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_editor_EditorTool$6 = registerClass(&class_mindustry_editor_EditorTool$6);

}

