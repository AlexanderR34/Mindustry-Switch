#include "mindustry/editor/EditorTool_4.h"
#include "arc/func/Cons.h"
#include "mindustry/editor/EditorTool_4.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/editor/EditorTool.h"
#include "mindustry/world/Tile.h"
#include "java/lang/Enum.h"
#include "mindustry/Vars.h"
#include "mindustry/editor/EditorTool_4_invoke_arc_func_Cons_1.h"
#include "mindustry/editor/MapEditor.h"
#include "arc/input/KeyCode.h"

extern "C" {


void mark_mindustry_editor_EditorTool$4(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_EditorTool$4 *) object;
}

void clinit_mindustry_editor_EditorTool$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_editor_EditorTool(ctx);
}

void init_mindustry_editor_EditorTool$4_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$4:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(78);
	init_mindustry_editor_EditorTool_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].o));
	LINE_NUMBER(80);
	((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_edit = (jint(1));
	LINE_NUMBER(81);
	((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_draggable = (jint(1));
	LINE_NUMBER(1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTool$4_touched_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$4:touched", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(86);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$4_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_editor_EditorTool$4_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$4_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_drawCircle_int_int_arc_func_Cons])(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTool$4_lambda$touched$0_mindustry_world_Tile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$4:lambda$touched$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(-1))) goto label_1;
	}
	{
	LINE_NUMBER(89);
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, (frame[1].o));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(90);
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != 0) goto label_3;
	}
	{
	LINE_NUMBER(92);
	((func_mindustry_world_Tile_clearOverlay) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tile_clearOverlay])(ctx, (frame[1].o));
	}
label_3:;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_EditorTool$4[] {
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
	(void *) M_mindustry_editor_EditorTool$4_touched_int_int,
	(void *) M_mindustry_editor_EditorTool_touchedLine_int_int_int_int,
	(void *) M_mindustry_editor_EditorTool$4_lambda$touched$0_mindustry_world_Tile,
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
	{ "lambda$touched$0", "(Lmindustry/world/Tile;)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_EditorTool$4_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String, 0, "(Ljava/lang/String;ILarc/input/KeyCode;[Ljava/lang/String;)V", 130 },
	{ "touched", (intptr_t) M_mindustry_editor_EditorTool$4_touched_int_int, VTABLE_mindustry_editor_EditorTool$4_touched_int_int, "(II)V", 1 },
	{ "lambda$touched$0", (intptr_t) M_mindustry_editor_EditorTool$4_lambda$touched$0_mindustry_world_Tile, VTABLE_mindustry_editor_EditorTool$4_lambda$touched$0_mindustry_world_Tile, "(Lmindustry/world/Tile;)V", 4098 },
};

Class class_mindustry_editor_EditorTool$4{
		.nativeName = (intptr_t) "mindustry/editor/EditorTool$4",
		.parentClass = (intptr_t) &class_mindustry_editor_EditorTool,
		.size = sizeof(mindustry_editor_EditorTool$4),
		.classVtable = (intptr_t) vtable_mindustry_editor_EditorTool$4,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_EditorTool$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_EditorTool$4,
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
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_editor_EditorTool$4 = registerClass(&class_mindustry_editor_EditorTool$4);

}

