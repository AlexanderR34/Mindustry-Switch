#include "mindustry/editor/EditorTool_2.h"
#include "mindustry/editor/EditorTool_2.h"
#include "java/lang/Math.h"
#include "arc/func/Intc2.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/editor/EditorTool.h"
#include "mindustry/editor/EditorTool_2_invoke_arc_func_Intc2_1.h"
#include "java/lang/Enum.h"
#include "mindustry/Vars.h"
#include "mindustry/editor/MapEditor.h"
#include "arc/input/KeyCode.h"
#include "arc/math/geom/Bresenham2.h"

extern "C" {


void mark_mindustry_editor_EditorTool$2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_EditorTool$2 *) object;
}

void clinit_mindustry_editor_EditorTool$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_editor_EditorTool(ctx);
}

void init_mindustry_editor_EditorTool$2_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$2:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(28);
	init_mindustry_editor_EditorTool_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].o), (frame[4].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTool$2_touchedLine_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$2:touchedLine", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(33);
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(34);
	jint temp0 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[3].i) - (frame[1].i)));
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, ((frame[4].i) - (frame[2].i)));
	if (temp0 <= temp1) goto label_3;
	}
	{
	LINE_NUMBER(35);
	frame[4].i = (frame[2].i);
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(37);
	frame[3].i = (frame[1].i);
	}
label_1:;
	{
	LINE_NUMBER(41);
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = frame[3].i;
	jint temp3 = frame[4].i;
	{ /* InvokeDynamic */
		clinit_mindustry_editor_EditorTool$2_invoke_arc_func_Intc2_1(ctx);
		auto proxy = (mindustry_editor_EditorTool$2_invoke_arc_func_Intc2_1 *) gcAlloc(ctx, &class_mindustry_editor_EditorTool$2_invoke_arc_func_Intc2_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_math_geom_Bresenham2_line_int_int_int_int_arc_func_Intc2(ctx, temp0, temp1, temp2, temp3, sp[0].o);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTool$2_lambda$touchedLine$0_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool$2:lambda$touchedLine$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(42);
	if (((jint)((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode) != 0) goto label_1;
	}
	{
	LINE_NUMBER(44);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_drawBlocksReplace_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_drawBlocksReplace_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(47);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	((func_mindustry_editor_MapEditor_drawBlocks_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditor_drawBlocks_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	}
label_3:;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_EditorTool$2[] {
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
	(void *) M_mindustry_editor_EditorTool_touched_int_int,
	(void *) M_mindustry_editor_EditorTool$2_touchedLine_int_int_int_int,
	(void *) M_mindustry_editor_EditorTool$2_lambda$touchedLine$0_int_int,
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
	{ "lambda$touchedLine$0", "(II)V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_EditorTool$2_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String, 0, "(Ljava/lang/String;ILarc/input/KeyCode;[Ljava/lang/String;)V", 130 },
	{ "touchedLine", (intptr_t) M_mindustry_editor_EditorTool$2_touchedLine_int_int_int_int, VTABLE_mindustry_editor_EditorTool$2_touchedLine_int_int_int_int, "(IIII)V", 1 },
	{ "lambda$touchedLine$0", (intptr_t) M_mindustry_editor_EditorTool$2_lambda$touchedLine$0_int_int, VTABLE_mindustry_editor_EditorTool$2_lambda$touchedLine$0_int_int, "(II)V", 4098 },
};

Class class_mindustry_editor_EditorTool$2{
		.nativeName = (intptr_t) "mindustry/editor/EditorTool$2",
		.parentClass = (intptr_t) &class_mindustry_editor_EditorTool,
		.size = sizeof(mindustry_editor_EditorTool$2),
		.classVtable = (intptr_t) vtable_mindustry_editor_EditorTool$2,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_EditorTool$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_EditorTool$2,
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
static bool registered_mindustry_editor_EditorTool$2 = registerClass(&class_mindustry_editor_EditorTool$2);

}

