#include "mindustry/editor/EditorTool.h"
#include "mindustry/editor/EditorTool_2.h"
#include "mindustry/editor/EditorTool_1.h"
#include "java/lang/Object.h"
#include "mindustry/editor/EditorTool_4.h"
#include "java/lang/String.h"
#include "mindustry/editor/EditorTool_3.h"
#include "mindustry/editor/EditorTool_6.h"
#include "mindustry/editor/EditorTool.h"
#include "mindustry/editor/EditorTool_5.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "arc/input/KeyCode.h"

extern "C" {

jobject SF_mindustry_editor_EditorTool_zoom;
jobject SF_mindustry_editor_EditorTool_pick;
jobject SF_mindustry_editor_EditorTool_line;
jobject SF_mindustry_editor_EditorTool_pencil;
jobject SF_mindustry_editor_EditorTool_eraser;
jobject SF_mindustry_editor_EditorTool_fill;
jobject SF_mindustry_editor_EditorTool_spray;
jobject SF_mindustry_editor_EditorTool_all;
jobject SF_mindustry_editor_EditorTool_$VALUES;

void mark_mindustry_editor_EditorTool(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_editor_EditorTool_zoom)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_EditorTool_zoom)->clazz)->markFunction)((jobject) SF_mindustry_editor_EditorTool_zoom, mark, depth + 1);
		if (SF_mindustry_editor_EditorTool_pick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_EditorTool_pick)->clazz)->markFunction)((jobject) SF_mindustry_editor_EditorTool_pick, mark, depth + 1);
		if (SF_mindustry_editor_EditorTool_line)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_EditorTool_line)->clazz)->markFunction)((jobject) SF_mindustry_editor_EditorTool_line, mark, depth + 1);
		if (SF_mindustry_editor_EditorTool_pencil)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_EditorTool_pencil)->clazz)->markFunction)((jobject) SF_mindustry_editor_EditorTool_pencil, mark, depth + 1);
		if (SF_mindustry_editor_EditorTool_eraser)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_EditorTool_eraser)->clazz)->markFunction)((jobject) SF_mindustry_editor_EditorTool_eraser, mark, depth + 1);
		if (SF_mindustry_editor_EditorTool_fill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_EditorTool_fill)->clazz)->markFunction)((jobject) SF_mindustry_editor_EditorTool_fill, mark, depth + 1);
		if (SF_mindustry_editor_EditorTool_spray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_EditorTool_spray)->clazz)->markFunction)((jobject) SF_mindustry_editor_EditorTool_spray, mark, depth + 1);
		if (SF_mindustry_editor_EditorTool_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_EditorTool_all)->clazz)->markFunction)((jobject) SF_mindustry_editor_EditorTool_all, mark, depth + 1);
		if (SF_mindustry_editor_EditorTool_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_editor_EditorTool_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_editor_EditorTool_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_editor_EditorTool *) object;
	if (self->F_altModes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_altModes)->clazz)->markFunction)((jobject) self->F_altModes, mark, depth + 1);
	if (self->F_key)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key)->clazz)->markFunction)((jobject) self->F_key, mark, depth + 1);
}

jobject SM_mindustry_editor_EditorTool_values_R_Array1_mindustry_editor_EditorTool(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool(ctx);
	{
	LINE_NUMBER(17);
	clinit_mindustry_editor_EditorTool(ctx);
	sp[0].o = (jobject)SF_mindustry_editor_EditorTool_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_editor_EditorTool, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_EditorTool_valueOf_java_lang_String_R_mindustry_editor_EditorTool(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_editor_EditorTool)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_editor_EditorTool, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_editor_EditorTool_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(337);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_editor_EditorTool_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(338);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_editor_EditorTool_java_lang_String_int_arc_input_KeyCode(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(0)));
	init_mindustry_editor_EditorTool_java_lang_String_int_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	LINE_NUMBER(342);
	((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_key = (jref) (frame[3].o);
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_editor_EditorTool_java_lang_String_int_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(345);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	((mindustry_editor_EditorTool *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[1].o;
	LINE_NUMBER(330);
	((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode = (jint(-1));
	LINE_NUMBER(346);
	((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_altModes = (jref) (frame[3].o);
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_editor_EditorTool_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(349);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_unset;
	((mindustry_editor_EditorTool *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[1].o;
	LINE_NUMBER(330);
	((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_mode = (jint(-1));
	LINE_NUMBER(350);
	((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_altModes = (jref) (frame[4].o);
	LINE_NUMBER(351);
	((mindustry_editor_EditorTool *) NULL_CHECK((frame[0].o)))->F_key = (jref) (frame[3].o);
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTool_touched_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool:touched", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	LINE_NUMBER(354);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorTool_touchedLine_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool:touchedLine", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	LINE_NUMBER(356);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_editor_EditorTool_$values_R_Array1_mindustry_editor_EditorTool(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool(ctx);
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_editor_EditorTool, (7));
	jint temp0 = jint(0);
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_zoom;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_pick;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_line;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_pencil;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_eraser;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_fill;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_editor_EditorTool(ctx);
	sp[1].o = (jobject)SF_mindustry_editor_EditorTool_spray;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_editor_EditorTool(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[9];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorTool:<clinit>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorTool(ctx);
	{
	LINE_NUMBER(18);
	clinit_mindustry_editor_EditorTool(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_EditorTool);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"zoom"_j));
	jint temp0 = jint(0);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_v;
	init_mindustry_editor_EditorTool_java_lang_String_int_arc_input_KeyCode(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	clinit_mindustry_editor_EditorTool(ctx);
	SF_mindustry_editor_EditorTool_zoom = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_editor_EditorTool$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_EditorTool$1);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pick"_j));
	jint temp1 = jint(1);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_i;
	init_mindustry_editor_EditorTool$1_java_lang_String_int_arc_input_KeyCode(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	clinit_mindustry_editor_EditorTool(ctx);
	SF_mindustry_editor_EditorTool_pick = sp[0].o;
	LINE_NUMBER(28);
	clinit_mindustry_editor_EditorTool$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_EditorTool$2);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"line"_j));
	jint temp2 = jint(2);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_l;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"replace"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"orthogonal"_j)));
	init_mindustry_editor_EditorTool$2_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp2, sp[2].o, sp[3].o);
	clinit_mindustry_editor_EditorTool(ctx);
	SF_mindustry_editor_EditorTool_line = sp[0].o;
	LINE_NUMBER(52);
	clinit_mindustry_editor_EditorTool$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_EditorTool$3);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pencil"_j));
	jint temp3 = jint(3);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_b;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(4)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"replace"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"square"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"drawteams"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"underliquid"_j)));
	init_mindustry_editor_EditorTool$3_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp3, sp[2].o, sp[3].o);
	clinit_mindustry_editor_EditorTool(ctx);
	SF_mindustry_editor_EditorTool_pencil = sp[0].o;
	LINE_NUMBER(78);
	clinit_mindustry_editor_EditorTool$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_EditorTool$4);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"eraser"_j));
	jint temp4 = jint(4);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_e;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"eraseores"_j)));
	init_mindustry_editor_EditorTool$4_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp4, sp[2].o, sp[3].o);
	clinit_mindustry_editor_EditorTool(ctx);
	SF_mindustry_editor_EditorTool_eraser = sp[0].o;
	LINE_NUMBER(97);
	clinit_mindustry_editor_EditorTool$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_EditorTool$5);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fill"_j));
	jint temp5 = jint(5);
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_g;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"replaceall"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(1))) = (((jobject) createStringLiteral(ctx, u8"fillteams"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(2))) = (((jobject) createStringLiteral(ctx, u8"fillerase"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(3))) = (((jobject) createStringLiteral(ctx, u8"fillcliffs"_j)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(4))) = (((jobject) createStringLiteral(ctx, u8"fillunderliquid"_j)));
	init_mindustry_editor_EditorTool$5_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp5, sp[2].o, sp[3].o);
	clinit_mindustry_editor_EditorTool(ctx);
	SF_mindustry_editor_EditorTool_fill = sp[0].o;
	LINE_NUMBER(297);
	clinit_mindustry_editor_EditorTool$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_editor_EditorTool$6);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"spray"_j));
	jint temp6 = 6;
	clinit_arc_input_KeyCode(ctx);
	sp[2].o = (jobject)SF_arc_input_KeyCode_r;
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, (jint(0))) = (((jobject) createStringLiteral(ctx, u8"replace"_j)));
	init_mindustry_editor_EditorTool$6_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String(ctx, sp[0].o, sp[1].o, temp6, sp[2].o, sp[3].o);
	clinit_mindustry_editor_EditorTool(ctx);
	SF_mindustry_editor_EditorTool_spray = sp[0].o;
	LINE_NUMBER(17);
	sp[0].o = (jobject)SM_mindustry_editor_EditorTool_$values_R_Array1_mindustry_editor_EditorTool(ctx);
	clinit_mindustry_editor_EditorTool(ctx);
	SF_mindustry_editor_EditorTool_$VALUES = sp[0].o;
	LINE_NUMBER(323);
	sp[0].o = (jobject)SM_mindustry_editor_EditorTool_values_R_Array1_mindustry_editor_EditorTool(ctx);
	clinit_mindustry_editor_EditorTool(ctx);
	SF_mindustry_editor_EditorTool_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_editor_EditorTool[] {
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

static FieldMetadata fields[] {
	{ "zoom", &class_mindustry_editor_EditorTool, (intptr_t) &SF_mindustry_editor_EditorTool_zoom, "Lmindustry/editor/EditorTool;", 16409 },
	{ "pick", &class_mindustry_editor_EditorTool, (intptr_t) &SF_mindustry_editor_EditorTool_pick, "Lmindustry/editor/EditorTool;", 16409 },
	{ "line", &class_mindustry_editor_EditorTool, (intptr_t) &SF_mindustry_editor_EditorTool_line, "Lmindustry/editor/EditorTool;", 16409 },
	{ "pencil", &class_mindustry_editor_EditorTool, (intptr_t) &SF_mindustry_editor_EditorTool_pencil, "Lmindustry/editor/EditorTool;", 16409 },
	{ "eraser", &class_mindustry_editor_EditorTool, (intptr_t) &SF_mindustry_editor_EditorTool_eraser, "Lmindustry/editor/EditorTool;", 16409 },
	{ "fill", &class_mindustry_editor_EditorTool, (intptr_t) &SF_mindustry_editor_EditorTool_fill, "Lmindustry/editor/EditorTool;", 16409 },
	{ "spray", &class_mindustry_editor_EditorTool, (intptr_t) &SF_mindustry_editor_EditorTool_spray, "Lmindustry/editor/EditorTool;", 16409 },
	{ "all", getArrayClass(&class_mindustry_editor_EditorTool, 1), (intptr_t) &SF_mindustry_editor_EditorTool_all, "[Lmindustry/editor/EditorTool;", 25 },
	{ "altModes", getArrayClass(&class_java_lang_String, 1), offsetof(mindustry_editor_EditorTool, F_altModes), "[Ljava/lang/String;", 17 },
	{ "key", &class_arc_input_KeyCode, offsetof(mindustry_editor_EditorTool, F_key), "Larc/input/KeyCode;", 1 },
	{ "mode", &class_int, offsetof(mindustry_editor_EditorTool, F_mode), "I", 1 },
	{ "edit", &class_boolean, offsetof(mindustry_editor_EditorTool, F_edit), "Z", 1 },
	{ "draggable", &class_boolean, offsetof(mindustry_editor_EditorTool, F_draggable), "Z", 1 },
	{ "$VALUES", getArrayClass(&class_mindustry_editor_EditorTool, 1), (intptr_t) &SF_mindustry_editor_EditorTool_$VALUES, "[Lmindustry/editor/EditorTool;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_editor_EditorTool_values_R_Array1_mindustry_editor_EditorTool, 0, "()[Lmindustry/editor/EditorTool;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_editor_EditorTool_valueOf_java_lang_String_R_mindustry_editor_EditorTool, 0, "(Ljava/lang/String;)Lmindustry/editor/EditorTool;", 9 },
	{ "<init>", (intptr_t) init_mindustry_editor_EditorTool_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_editor_EditorTool_java_lang_String_int_arc_input_KeyCode, 0, "(Ljava/lang/String;ILarc/input/KeyCode;)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_editor_EditorTool_java_lang_String_int_Array1_java_lang_String, 0, "(Ljava/lang/String;I[Ljava/lang/String;)V", 130 },
	{ "<init>", (intptr_t) init_mindustry_editor_EditorTool_java_lang_String_int_arc_input_KeyCode_Array1_java_lang_String, 0, "(Ljava/lang/String;ILarc/input/KeyCode;[Ljava/lang/String;)V", 130 },
	{ "touched", (intptr_t) M_mindustry_editor_EditorTool_touched_int_int, VTABLE_mindustry_editor_EditorTool_touched_int_int, "(II)V", 1 },
	{ "touchedLine", (intptr_t) M_mindustry_editor_EditorTool_touchedLine_int_int_int_int, VTABLE_mindustry_editor_EditorTool_touchedLine_int_int_int_int, "(IIII)V", 1 },
	{ "$values", (intptr_t) SM_mindustry_editor_EditorTool_$values_R_Array1_mindustry_editor_EditorTool, 0, "()[Lmindustry/editor/EditorTool;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_editor_EditorTool, 0, "()V", 8 },
};

Class class_mindustry_editor_EditorTool{
		.nativeName = (intptr_t) "mindustry/editor/EditorTool",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_editor_EditorTool),
		.classVtable = (intptr_t) vtable_mindustry_editor_EditorTool,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_EditorTool,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_editor_EditorTool,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16417,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 14,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_EditorTool = registerClass(&class_mindustry_editor_EditorTool);

}
