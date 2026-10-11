#include "mindustry/maps/Maps_ShuffleMode.h"
#include "mindustry/game/Gamemode.h"
#include "mindustry/maps/Maps_ShuffleMode_invoke_mindustry_maps_Maps_MapProvider_7.h"
#include "mindustry/maps/Map.h"
#include "mindustry/maps/Maps_ShuffleMode_invoke_mindustry_maps_Maps_MapProvider_6.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/maps/Maps_ShuffleMode_invoke_arc_func_Boolf_1.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Structs.h"
#include "java/lang/Enum.h"
#include "arc/files/Fi.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/Object.h"
#include "mindustry/maps/Maps.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/maps/Maps_MapProvider.h"
#include "mindustry/maps/Maps_ShuffleMode.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"
#include "arc/func/Boolf.h"
#include "mindustry/maps/Maps_ShuffleMode_invoke_mindustry_maps_Maps_MapProvider_5.h"
#include "java/lang/SafeVarargs.h"
#include "mindustry/maps/Maps_ShuffleMode_invoke_mindustry_maps_Maps_MapProvider_4.h"

extern "C" {

jobject SF_mindustry_maps_Maps$ShuffleMode_none;
jobject SF_mindustry_maps_Maps$ShuffleMode_all;
jobject SF_mindustry_maps_Maps$ShuffleMode_custom;
jobject SF_mindustry_maps_Maps$ShuffleMode_builtin;
jobject SF_mindustry_maps_Maps$ShuffleMode_$VALUES;

void mark_mindustry_maps_Maps$ShuffleMode(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_maps_Maps$ShuffleMode_none)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_Maps$ShuffleMode_none)->clazz)->markFunction)((jobject) SF_mindustry_maps_Maps$ShuffleMode_none, mark, depth + 1);
		if (SF_mindustry_maps_Maps$ShuffleMode_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_Maps$ShuffleMode_all)->clazz)->markFunction)((jobject) SF_mindustry_maps_Maps$ShuffleMode_all, mark, depth + 1);
		if (SF_mindustry_maps_Maps$ShuffleMode_custom)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_Maps$ShuffleMode_custom)->clazz)->markFunction)((jobject) SF_mindustry_maps_Maps$ShuffleMode_custom, mark, depth + 1);
		if (SF_mindustry_maps_Maps$ShuffleMode_builtin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_Maps$ShuffleMode_builtin)->clazz)->markFunction)((jobject) SF_mindustry_maps_Maps$ShuffleMode_builtin, mark, depth + 1);
		if (SF_mindustry_maps_Maps$ShuffleMode_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_Maps$ShuffleMode_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_maps_Maps$ShuffleMode_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_maps_Maps$ShuffleMode *) object;
	if (self->F_provider)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_provider)->clazz)->markFunction)((jobject) self->F_provider, mark, depth + 1);
}

jobject SM_mindustry_maps_Maps$ShuffleMode_values_R_Array1_mindustry_maps_Maps$ShuffleMode(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps$ShuffleMode:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	{
	LINE_NUMBER(495);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_Maps$ShuffleMode_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_maps_Maps$ShuffleMode, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_Maps$ShuffleMode_valueOf_java_lang_String_R_mindustry_maps_Maps$ShuffleMode(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps$ShuffleMode:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_maps_Maps$ShuffleMode)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_maps_Maps$ShuffleMode, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_maps_Maps$ShuffleMode_java_lang_String_int_mindustry_maps_Maps$MapProvider(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps$ShuffleMode:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(503);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(504);
	((mindustry_maps_Maps$ShuffleMode *) NULL_CHECK((frame[0].o)))->F_provider = (jref) (frame[3].o);
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_Array1_arc_struct_Seq_R_mindustry_maps_Map(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps$ShuffleMode:next", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(509);
	sp[0].o = (jobject)SM_arc_struct_Seq_withArrays_Array1_java_lang_Object_R_arc_struct_Seq(ctx, (checkCast(ctx, getArrayClass(&class_java_lang_Object, 1), (frame[2].o))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(510);
	sp[0].o = (jobject)((func_arc_struct_Seq_shuffle_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_shuffle_R_arc_struct_Seq])(ctx, (frame[3].o));
	LINE_NUMBER(512);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps$ShuffleMode_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_maps_Maps$ShuffleMode_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_maps_Maps$ShuffleMode_invoke_arc_func_Boolf_1);
		proxy->F_field2 = (jref) (frame[0].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_maps_Map, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_Maps$ShuffleMode_valid_mindustry_game_Gamemode_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps$ShuffleMode:valid", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(516);
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_custom) != 0) goto label_1;
	}
	{
	clinit_mindustry_maps_Maps(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_Maps_pvpMaps;
	sp[1].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_file;
	sp[1].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[1].o);
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(517);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Gamemode(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Gamemode_survival;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Gamemode(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Gamemode_attack;
	if (sp[0].o == sp[1].o) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Gamemode(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Gamemode_sandbox;
	if (sp[0].o != sp[1].o) goto label_5;
	}
label_4:;
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_6;
	INST_ICONST(1);
	goto label_7;
label_6:;
	INST_ICONST(0);
label_7:;
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Gamemode(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Gamemode_pvp;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_custom) != 0) goto label_9;
	}
	INST_ILOAD(2);
	if ((--sp)->i == 0) goto label_10;
label_9:;
	INST_ICONST(1);
	goto label_11;
label_10:;
	INST_ICONST(0);
label_11:;
	popStackFrame(ctx);
	INST_IRETURN();
label_8:;
	{
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps$ShuffleMode:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(524);
	sp[0].o = (jobject)((mindustry_maps_Maps$ShuffleMode *) NULL_CHECK((frame[0].o)))->F_provider;
	sp[0].o = (jobject)((func_mindustry_maps_Maps$MapProvider_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map) resolveInterfaceMethod(ctx, &class_mindustry_maps_Maps$MapProvider, INDEX_mindustry_maps_Maps$MapProvider_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map, sp[0].o))(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_Maps$ShuffleMode_$values_R_Array1_mindustry_maps_Maps$ShuffleMode(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps$ShuffleMode:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_Maps$ShuffleMode, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_Maps$ShuffleMode_none;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_Maps$ShuffleMode_all;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_Maps$ShuffleMode_custom;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	sp[1].o = (jobject)SF_mindustry_maps_Maps$ShuffleMode_builtin;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_maps_Maps$ShuffleMode_lambda$next$0_mindustry_maps_Map_arc_struct_Seq_mindustry_game_Gamemode_mindustry_maps_Map_R_boolean(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps$ShuffleMode:lambda$next$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(512);
	if ((frame[3].o) != (frame[0].o)) goto label_1;
	}
	{
	if (((jint)((arc_struct_Seq *) NULL_CHECK((frame[1].o)))->F_size) != (jint(1))) goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint)SM_mindustry_maps_Maps$ShuffleMode_valid_mindustry_game_Gamemode_mindustry_maps_Map_R_boolean(ctx, (frame[2].o), (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_Maps$ShuffleMode_lambda$static$3_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps$ShuffleMode:lambda$static$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(499);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_maps;
	sp[3].o = (jobject)((func_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq])(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	sp[0].o = (jobject)SM_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_Array1_arc_struct_Seq_R_mindustry_maps_Map(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_Maps$ShuffleMode_lambda$static$2_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps$ShuffleMode:lambda$static$2", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(498);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_maps;
	sp[3].o = (jobject)((func_mindustry_maps_Maps_customMaps_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_maps_Maps_customMaps_R_arc_struct_Seq])(ctx, sp[3].o);
	jint temp1 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[3].o);
	sp[3].o = sp[2].o;
	sp[4].i = temp0;
	sp += 5;
	if (temp1 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	sp[0].o = (jobject)((func_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_maps;
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_maps_Maps_customMaps_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_customMaps_R_arc_struct_Seq])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 6;
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[5].o;
	sp[0].o = (jobject)SM_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_Array1_arc_struct_Seq_R_mindustry_maps_Map(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_Maps$ShuffleMode_lambda$static$1_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps$ShuffleMode:lambda$static$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(497);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_maps;
	sp[3].o = (jobject)((func_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_maps_Maps_defaultMaps_R_arc_struct_Seq])(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	clinit_mindustry_Vars(ctx);
	sp[3].o = (jobject)SF_mindustry_Vars_maps;
	sp[3].o = (jobject)((func_mindustry_maps_Maps_customMaps_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_maps_Maps_customMaps_R_arc_struct_Seq])(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	sp[0].o = (jobject)SM_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_Array1_arc_struct_Seq_R_mindustry_maps_Map(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_Maps$ShuffleMode_lambda$static$0_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps$ShuffleMode:lambda$static$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(496);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_maps_Maps$ShuffleMode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Maps$ShuffleMode:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	{
	LINE_NUMBER(496);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_Maps$ShuffleMode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"none"_j));
	jint temp0 = jint(0);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps$ShuffleMode_invoke_mindustry_maps_Maps$MapProvider_4(ctx);
		auto proxy = (mindustry_maps_Maps$ShuffleMode_invoke_mindustry_maps_Maps$MapProvider_4 *) gcAlloc(ctx, &class_mindustry_maps_Maps$ShuffleMode_invoke_mindustry_maps_Maps$MapProvider_4);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_maps_Maps$ShuffleMode_java_lang_String_int_mindustry_maps_Maps$MapProvider(ctx, sp[0].o, sp[1].o, temp0, sp[2].o);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	SF_mindustry_maps_Maps$ShuffleMode_none = sp[0].o;
	LINE_NUMBER(497);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_Maps$ShuffleMode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"all"_j));
	jint temp1 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps$ShuffleMode_invoke_mindustry_maps_Maps$MapProvider_5(ctx);
		auto proxy = (mindustry_maps_Maps$ShuffleMode_invoke_mindustry_maps_Maps$MapProvider_5 *) gcAlloc(ctx, &class_mindustry_maps_Maps$ShuffleMode_invoke_mindustry_maps_Maps$MapProvider_5);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_maps_Maps$ShuffleMode_java_lang_String_int_mindustry_maps_Maps$MapProvider(ctx, sp[0].o, sp[1].o, temp1, sp[2].o);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	SF_mindustry_maps_Maps$ShuffleMode_all = sp[0].o;
	LINE_NUMBER(498);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_Maps$ShuffleMode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"custom"_j));
	jint temp2 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps$ShuffleMode_invoke_mindustry_maps_Maps$MapProvider_6(ctx);
		auto proxy = (mindustry_maps_Maps$ShuffleMode_invoke_mindustry_maps_Maps$MapProvider_6 *) gcAlloc(ctx, &class_mindustry_maps_Maps$ShuffleMode_invoke_mindustry_maps_Maps$MapProvider_6);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_maps_Maps$ShuffleMode_java_lang_String_int_mindustry_maps_Maps$MapProvider(ctx, sp[0].o, sp[1].o, temp2, sp[2].o);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	SF_mindustry_maps_Maps$ShuffleMode_custom = sp[0].o;
	LINE_NUMBER(499);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_Maps$ShuffleMode);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"builtin"_j));
	jint temp3 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_Maps$ShuffleMode_invoke_mindustry_maps_Maps$MapProvider_7(ctx);
		auto proxy = (mindustry_maps_Maps$ShuffleMode_invoke_mindustry_maps_Maps$MapProvider_7 *) gcAlloc(ctx, &class_mindustry_maps_Maps$ShuffleMode_invoke_mindustry_maps_Maps$MapProvider_7);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_maps_Maps$ShuffleMode_java_lang_String_int_mindustry_maps_Maps$MapProvider(ctx, sp[0].o, sp[1].o, temp3, sp[2].o);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	SF_mindustry_maps_Maps$ShuffleMode_builtin = sp[0].o;
	LINE_NUMBER(495);
	sp[0].o = (jobject)SM_mindustry_maps_Maps$ShuffleMode_$values_R_Array1_mindustry_maps_Maps$ShuffleMode(ctx);
	clinit_mindustry_maps_Maps$ShuffleMode(ctx);
	SF_mindustry_maps_Maps$ShuffleMode_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_maps_Maps$ShuffleMode;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method next
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_SafeVarargs);
	}

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_maps_Maps$ShuffleMode[] {
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
	(void *) M_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map,
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
	{ "next", "(Lmindustry/game/Gamemode;Lmindustry/maps/Map;)Lmindustry/maps/Map;" },
};

static jclass interfaces[] { &class_mindustry_maps_Maps$MapProvider, };

static FieldMetadata fields[] {
	{ "none", &class_mindustry_maps_Maps$ShuffleMode, (intptr_t) &SF_mindustry_maps_Maps$ShuffleMode_none, "Lmindustry/maps/Maps$ShuffleMode;", 16409 },
	{ "all", &class_mindustry_maps_Maps$ShuffleMode, (intptr_t) &SF_mindustry_maps_Maps$ShuffleMode_all, "Lmindustry/maps/Maps$ShuffleMode;", 16409 },
	{ "custom", &class_mindustry_maps_Maps$ShuffleMode, (intptr_t) &SF_mindustry_maps_Maps$ShuffleMode_custom, "Lmindustry/maps/Maps$ShuffleMode;", 16409 },
	{ "builtin", &class_mindustry_maps_Maps$ShuffleMode, (intptr_t) &SF_mindustry_maps_Maps$ShuffleMode_builtin, "Lmindustry/maps/Maps$ShuffleMode;", 16409 },
	{ "provider", &class_mindustry_maps_Maps$MapProvider, offsetof(mindustry_maps_Maps$ShuffleMode, F_provider), "Lmindustry/maps/Maps$MapProvider;", 18 },
	{ "$VALUES", getArrayClass(&class_mindustry_maps_Maps$ShuffleMode, 1), (intptr_t) &SF_mindustry_maps_Maps$ShuffleMode_$VALUES, "[Lmindustry/maps/Maps$ShuffleMode;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_maps_Maps$ShuffleMode_values_R_Array1_mindustry_maps_Maps$ShuffleMode, 0, "()[Lmindustry/maps/Maps$ShuffleMode;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_maps_Maps$ShuffleMode_valueOf_java_lang_String_R_mindustry_maps_Maps$ShuffleMode, 0, "(Ljava/lang/String;)Lmindustry/maps/Maps$ShuffleMode;", 9 },
	{ "<init>", (intptr_t) init_mindustry_maps_Maps$ShuffleMode_java_lang_String_int_mindustry_maps_Maps$MapProvider, 0, "(Ljava/lang/String;ILmindustry/maps/Maps$MapProvider;)V", 2 },
	{ "next", (intptr_t) SM_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_Array1_arc_struct_Seq_R_mindustry_maps_Map, 0, "(Lmindustry/game/Gamemode;Lmindustry/maps/Map;[Larc/struct/Seq;)Lmindustry/maps/Map;", 138 },
	{ "valid", (intptr_t) SM_mindustry_maps_Maps$ShuffleMode_valid_mindustry_game_Gamemode_mindustry_maps_Map_R_boolean, 0, "(Lmindustry/game/Gamemode;Lmindustry/maps/Map;)Z", 10 },
	{ "next", (intptr_t) M_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map, VTABLE_mindustry_maps_Maps$ShuffleMode_next_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map, "(Lmindustry/game/Gamemode;Lmindustry/maps/Map;)Lmindustry/maps/Map;", 1 },
	{ "$values", (intptr_t) SM_mindustry_maps_Maps$ShuffleMode_$values_R_Array1_mindustry_maps_Maps$ShuffleMode, 0, "()[Lmindustry/maps/Maps$ShuffleMode;", 4106 },
	{ "lambda$next$0", (intptr_t) SM_mindustry_maps_Maps$ShuffleMode_lambda$next$0_mindustry_maps_Map_arc_struct_Seq_mindustry_game_Gamemode_mindustry_maps_Map_R_boolean, 0, "(Lmindustry/maps/Map;Larc/struct/Seq;Lmindustry/game/Gamemode;Lmindustry/maps/Map;)Z", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_maps_Maps$ShuffleMode_lambda$static$3_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map, 0, "(Lmindustry/game/Gamemode;Lmindustry/maps/Map;)Lmindustry/maps/Map;", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_maps_Maps$ShuffleMode_lambda$static$2_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map, 0, "(Lmindustry/game/Gamemode;Lmindustry/maps/Map;)Lmindustry/maps/Map;", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_maps_Maps$ShuffleMode_lambda$static$1_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map, 0, "(Lmindustry/game/Gamemode;Lmindustry/maps/Map;)Lmindustry/maps/Map;", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_maps_Maps$ShuffleMode_lambda$static$0_mindustry_game_Gamemode_mindustry_maps_Map_R_mindustry_maps_Map, 0, "(Lmindustry/game/Gamemode;Lmindustry/maps/Map;)Lmindustry/maps/Map;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_maps_Maps$ShuffleMode, 0, "()V", 8 },
};

Class class_mindustry_maps_Maps$ShuffleMode{
		.nativeName = (intptr_t) "mindustry/maps/Maps$ShuffleMode",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_maps_Maps$ShuffleMode),
		.classVtable = (intptr_t) vtable_mindustry_maps_Maps$ShuffleMode,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_Maps$ShuffleMode,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_maps_Maps$ShuffleMode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_maps_Maps,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_Maps$ShuffleMode = registerClass(&class_mindustry_maps_Maps$ShuffleMode);

}

