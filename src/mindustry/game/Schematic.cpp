#include "mindustry/game/Schematic.h"
#include "mindustry/type/ItemSeq.h"
#include "mindustry/world/Block.h"
#include "java/lang/Comparable.h"
#include "mindustry/game/Schematic_invoke_arc_func_Boolf_3.h"
#include "mindustry/game/Schematic_invoke_arc_func_Boolf_2.h"
#include "mindustry/game/Schematic_invoke_arc_func_Floatf_2.h"
#include "arc/files/Fi.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/func/Cons.h"
#include "mindustry/world/consumers/ConsumePower.h"
#include "arc/struct/StringMap.h"
#include "java/lang/String.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/game/Schematic_invoke_arc_func_Floatf_3.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/func/Boolf.h"
#include "arc/func/Floatf.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/blocks/power/PowerGenerator.h"
#include "arc/util/Nullable.h"
#include "mindustry/game/Schematic_Stile.h"
#include "java/lang/Object.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/type/Publishable.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "mindustry/game/Schematic_invoke_arc_func_Cons_1.h"

extern "C" {


void mark_mindustry_game_Schematic(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Schematic *) object;
	if (self->F_tiles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tiles)->clazz)->markFunction)((jobject) self->F_tiles, mark, depth + 1);
	if (self->F_labels)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_labels)->clazz)->markFunction)((jobject) self->F_labels, mark, depth + 1);
	if (self->F_tags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tags)->clazz)->markFunction)((jobject) self->F_tags, mark, depth + 1);
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
	if (self->F_mod)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mod)->clazz)->markFunction)((jobject) self->F_mod, mark, depth + 1);
}

void clinit_mindustry_game_Schematic(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_Schematic_arc_struct_Seq_arc_struct_StringMap_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematic(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(18);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_game_Schematic *) NULL_CHECK(sp[0].o))->F_labels = (jref) sp[1].o;
	LINE_NUMBER(27);
	((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles = (jref) (frame[1].o);
	LINE_NUMBER(28);
	((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tags = (jref) (frame[2].o);
	LINE_NUMBER(29);
	((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_width = (frame[3].i);
	LINE_NUMBER(30);
	((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_height = (frame[4].i);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_Schematic_powerProduction_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:powerProduction", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematic_invoke_arc_func_Floatf_2(ctx);
		auto proxy = (mindustry_game_Schematic_invoke_arc_func_Floatf_2 *) gcAlloc(ctx, &class_mindustry_game_Schematic_invoke_arc_func_Floatf_2);
		sp[1].o = (jobject) proxy;
	}
	jfloat temp0 = (jfloat)((func_arc_struct_Seq_sumf_arc_func_Floatf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sumf_arc_func_Floatf_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_game_Schematic_powerConsumption_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:powerConsumption", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematic_invoke_arc_func_Floatf_3(ctx);
		auto proxy = (mindustry_game_Schematic_invoke_arc_func_Floatf_3 *) gcAlloc(ctx, &class_mindustry_game_Schematic_invoke_arc_func_Floatf_3);
		sp[1].o = (jobject) proxy;
	}
	jfloat temp0 = (jfloat)((func_arc_struct_Seq_sumf_arc_func_Floatf_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sumf_arc_func_Floatf_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematic_requirements_R_mindustry_type_ItemSeq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:requirements", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(42);
	clinit_mindustry_type_ItemSeq(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_ItemSeq);
	init_mindustry_type_ItemSeq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematic_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_game_Schematic_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_game_Schematic_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Schematic_hasCore_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:hasCore", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematic_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_game_Schematic_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_game_Schematic_invoke_arc_func_Boolf_2);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematic_findCore_R_mindustry_world_blocks_storage_CoreBlock(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:findCore", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematic_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_game_Schematic_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_game_Schematic_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(59);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Schematic is missing a core!"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[1].o)))->F_block;
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematic_name_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:name", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name"_j))), (((jobject) createStringLiteral(ctx, u8"unknown"_j))));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematic_description_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:description", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"description"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematic_save(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:save", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	((func_mindustry_game_Schematics_saveChanges_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_saveChanges_mindustry_game_Schematic])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematic_getSteamID_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:getSteamID", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematic_addSteamID_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:addSteamID", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))), (frame[1].o));
	LINE_NUMBER(83);
	((func_mindustry_game_Schematic_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematic_save])(ctx, (frame[0].o));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematic_removeSteamID(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:removeSteamID", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))));
	LINE_NUMBER(89);
	((func_mindustry_game_Schematic_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematic_save])(ctx, (frame[0].o));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematic_steamTitle_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:steamTitle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((func_mindustry_game_Schematic_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematic_name_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematic_steamDescription_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:steamDescription", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_mindustry_game_Schematic_description_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematic_description_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematic_steamTag_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:steamTag", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"schematic"_j)));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematic_createSteamFolder_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:createSteamFolder", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tmpDirectory;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"schematic_\u0001"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"schematic.msch"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_file;
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematic_createSteamPreview_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:createSteamPreview", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(116);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tmpDirectory;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"schematic_preview_\u0001.png"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(117);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematics;
	((func_mindustry_game_Schematics_savePreview_mindustry_game_Schematic_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_savePreview_mindustry_game_Schematic_arc_files_Fi])(ctx, sp[0].o, (frame[0].o), (frame[2].o));
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jint M_mindustry_game_Schematic_compareTo_mindustry_game_Schematic_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((func_mindustry_game_Schematic_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematic_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_mindustry_game_Schematic_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Schematic_name_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_mindustry_game_Schematic_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	jint temp0 = (jint)((func_mindustry_game_Schematic_compareTo_mindustry_game_Schematic_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematic_compareTo_mindustry_game_Schematic_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_game_Schematic, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Schematic_lambda$findCore$0_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:lambda$findCore$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Schematic_lambda$hasCore$0_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:lambda$hasCore$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock));
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematic_lambda$requirements$0_mindustry_type_ItemSeq_mindustry_game_Schematic$Stile(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:lambda$requirements$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematic(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[1].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_requirements;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_3:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_4;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(46);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_item;
	((func_mindustry_type_ItemSeq_add_mindustry_type_Item_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_ItemSeq_add_mindustry_type_Item_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_type_ItemStack *) NULL_CHECK((frame[5].o)))->F_amount));
	LINE_NUMBER(45);
	INST_IINC(4, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_game_Schematic_lambda$powerConsumption$0_mindustry_game_Schematic$Stile_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:lambda$powerConsumption$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_consPower;
	jfloat temp0 = (jfloat)((mindustry_world_consumers_ConsumePower *) NULL_CHECK(sp[0].o))->F_usage;
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(0);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_game_Schematic_lambda$powerProduction$0_mindustry_game_Schematic$Stile_R_float(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic:lambda$powerProduction$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematic(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	frame[2].o = sp[0].o;
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_power_PowerGenerator)) == 0) goto label_2;
	}
	{
	frame[1].o = (checkCast(ctx, &class_mindustry_world_blocks_power_PowerGenerator, (frame[2].o)));
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_power_PowerGenerator_getDisplayedPowerProduction_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_blocks_power_PowerGenerator_getDisplayedPowerProduction_R_float])(ctx, (frame[1].o));
	sp[0].f = temp0;
	sp += 1;
	goto label_4;
	}
label_2:;
	INST_FCONST(0);
label_4:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_Schematic;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field file
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field mod
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_Schematic[] {
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
	(void *) M_mindustry_game_Schematic_getSteamID_R_java_lang_String,
	(void *) M_mindustry_game_Schematic_addSteamID_java_lang_String,
	(void *) M_mindustry_game_Schematic_removeSteamID,
	(void *) M_mindustry_game_Schematic_steamTitle_R_java_lang_String,
	(void *) M_mindustry_game_Schematic_steamDescription_R_java_lang_String,
	(void *) M_mindustry_game_Schematic_steamTag_R_java_lang_String,
	(void *) M_mindustry_game_Schematic_createSteamFolder_java_lang_String_R_arc_files_Fi,
	(void *) M_mindustry_game_Schematic_createSteamPreview_java_lang_String_R_arc_files_Fi,
	(void *) M_mindustry_type_Publishable_extraTags_R_arc_struct_Seq,
	(void *) M_mindustry_type_Publishable_hasSteamID_R_boolean,
	(void *) M_mindustry_type_Publishable_prePublish_R_boolean,
	(void *) M_mindustry_game_Schematic_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_game_Schematic_powerProduction_R_float,
	(void *) M_mindustry_game_Schematic_powerConsumption_R_float,
	(void *) M_mindustry_game_Schematic_requirements_R_mindustry_type_ItemSeq,
	(void *) M_mindustry_game_Schematic_hasCore_R_boolean,
	(void *) M_mindustry_game_Schematic_findCore_R_mindustry_world_blocks_storage_CoreBlock,
	(void *) M_mindustry_game_Schematic_name_R_java_lang_String,
	(void *) M_mindustry_game_Schematic_description_R_java_lang_String,
	(void *) M_mindustry_game_Schematic_save,
	(void *) M_mindustry_game_Schematic_compareTo_mindustry_game_Schematic_R_int,
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
	{ "getSteamID", "()Ljava/lang/String;" },
	{ "addSteamID", "(Ljava/lang/String;)V" },
	{ "removeSteamID", "()V" },
	{ "steamTitle", "()Ljava/lang/String;" },
	{ "steamDescription", "()Ljava/lang/String;" },
	{ "steamTag", "()Ljava/lang/String;" },
	{ "createSteamFolder", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "createSteamPreview", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "extraTags", "()Larc/struct/Seq;" },
	{ "hasSteamID", "()Z" },
	{ "prePublish", "()Z" },
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "powerProduction", "()F" },
	{ "powerConsumption", "()F" },
	{ "requirements", "()Lmindustry/type/ItemSeq;" },
	{ "hasCore", "()Z" },
	{ "findCore", "()Lmindustry/world/blocks/storage/CoreBlock;" },
	{ "name", "()Ljava/lang/String;" },
	{ "description", "()Ljava/lang/String;" },
	{ "save", "()V" },
	{ "compareTo", "(Lmindustry/game/Schematic;)I" },
};

static jclass interfaces[] { &class_mindustry_type_Publishable, &class_java_lang_Comparable, };

static jclass innerClasses[] {
	&class_mindustry_game_Schematic$Stile,
};

static FieldMetadata fields[] {
	{ "tiles", &class_arc_struct_Seq, offsetof(mindustry_game_Schematic, F_tiles), "Larc/struct/Seq;", 17 },
	{ "labels", &class_arc_struct_Seq, offsetof(mindustry_game_Schematic, F_labels), "Larc/struct/Seq;", 1 },
	{ "tags", &class_arc_struct_StringMap, offsetof(mindustry_game_Schematic, F_tags), "Larc/struct/StringMap;", 1 },
	{ "width", &class_int, offsetof(mindustry_game_Schematic, F_width), "I", 1 },
	{ "height", &class_int, offsetof(mindustry_game_Schematic, F_height), "I", 1 },
	{ "file", &class_arc_files_Fi, offsetof(mindustry_game_Schematic, F_file), "Larc/files/Fi;", 1 },
	{ "mod", &class_mindustry_mod_Mods$LoadedMod, offsetof(mindustry_game_Schematic, F_mod), "Lmindustry/mod/Mods$LoadedMod;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Schematic_arc_struct_Seq_arc_struct_StringMap_int_int, 0, "(Larc/struct/Seq;Larc/struct/StringMap;II)V", 1 },
	{ "powerProduction", (intptr_t) M_mindustry_game_Schematic_powerProduction_R_float, VTABLE_mindustry_game_Schematic_powerProduction_R_float, "()F", 1 },
	{ "powerConsumption", (intptr_t) M_mindustry_game_Schematic_powerConsumption_R_float, VTABLE_mindustry_game_Schematic_powerConsumption_R_float, "()F", 1 },
	{ "requirements", (intptr_t) M_mindustry_game_Schematic_requirements_R_mindustry_type_ItemSeq, VTABLE_mindustry_game_Schematic_requirements_R_mindustry_type_ItemSeq, "()Lmindustry/type/ItemSeq;", 1 },
	{ "hasCore", (intptr_t) M_mindustry_game_Schematic_hasCore_R_boolean, VTABLE_mindustry_game_Schematic_hasCore_R_boolean, "()Z", 1 },
	{ "findCore", (intptr_t) M_mindustry_game_Schematic_findCore_R_mindustry_world_blocks_storage_CoreBlock, VTABLE_mindustry_game_Schematic_findCore_R_mindustry_world_blocks_storage_CoreBlock, "()Lmindustry/world/blocks/storage/CoreBlock;", 1 },
	{ "name", (intptr_t) M_mindustry_game_Schematic_name_R_java_lang_String, VTABLE_mindustry_game_Schematic_name_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "description", (intptr_t) M_mindustry_game_Schematic_description_R_java_lang_String, VTABLE_mindustry_game_Schematic_description_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "save", (intptr_t) M_mindustry_game_Schematic_save, VTABLE_mindustry_game_Schematic_save, "()V", 1 },
	{ "getSteamID", (intptr_t) M_mindustry_game_Schematic_getSteamID_R_java_lang_String, VTABLE_mindustry_game_Schematic_getSteamID_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "addSteamID", (intptr_t) M_mindustry_game_Schematic_addSteamID_java_lang_String, VTABLE_mindustry_game_Schematic_addSteamID_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "removeSteamID", (intptr_t) M_mindustry_game_Schematic_removeSteamID, VTABLE_mindustry_game_Schematic_removeSteamID, "()V", 1 },
	{ "steamTitle", (intptr_t) M_mindustry_game_Schematic_steamTitle_R_java_lang_String, VTABLE_mindustry_game_Schematic_steamTitle_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "steamDescription", (intptr_t) M_mindustry_game_Schematic_steamDescription_R_java_lang_String, VTABLE_mindustry_game_Schematic_steamDescription_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "steamTag", (intptr_t) M_mindustry_game_Schematic_steamTag_R_java_lang_String, VTABLE_mindustry_game_Schematic_steamTag_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "createSteamFolder", (intptr_t) M_mindustry_game_Schematic_createSteamFolder_java_lang_String_R_arc_files_Fi, VTABLE_mindustry_game_Schematic_createSteamFolder_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "createSteamPreview", (intptr_t) M_mindustry_game_Schematic_createSteamPreview_java_lang_String_R_arc_files_Fi, VTABLE_mindustry_game_Schematic_createSteamPreview_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "compareTo", (intptr_t) M_mindustry_game_Schematic_compareTo_mindustry_game_Schematic_R_int, VTABLE_mindustry_game_Schematic_compareTo_mindustry_game_Schematic_R_int, "(Lmindustry/game/Schematic;)I", 1 },
	{ "compareTo", (intptr_t) M_mindustry_game_Schematic_compareTo_java_lang_Object_R_int, VTABLE_mindustry_game_Schematic_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
	{ "lambda$findCore$0", (intptr_t) SM_mindustry_game_Schematic_lambda$findCore$0_mindustry_game_Schematic$Stile_R_boolean, 0, "(Lmindustry/game/Schematic$Stile;)Z", 4106 },
	{ "lambda$hasCore$0", (intptr_t) SM_mindustry_game_Schematic_lambda$hasCore$0_mindustry_game_Schematic$Stile_R_boolean, 0, "(Lmindustry/game/Schematic$Stile;)Z", 4106 },
	{ "lambda$requirements$0", (intptr_t) SM_mindustry_game_Schematic_lambda$requirements$0_mindustry_type_ItemSeq_mindustry_game_Schematic$Stile, 0, "(Lmindustry/type/ItemSeq;Lmindustry/game/Schematic$Stile;)V", 4106 },
	{ "lambda$powerConsumption$0", (intptr_t) SM_mindustry_game_Schematic_lambda$powerConsumption$0_mindustry_game_Schematic$Stile_R_float, 0, "(Lmindustry/game/Schematic$Stile;)F", 4106 },
	{ "lambda$powerProduction$0", (intptr_t) SM_mindustry_game_Schematic_lambda$powerProduction$0_mindustry_game_Schematic$Stile_R_float, 0, "(Lmindustry/game/Schematic$Stile;)F", 4106 },
};

Class class_mindustry_game_Schematic{
		.nativeName = (intptr_t) "mindustry/game/Schematic",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Schematic),
		.classVtable = (intptr_t) vtable_mindustry_game_Schematic,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Schematic,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_Schematic,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 32,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Schematic = registerClass(&class_mindustry_game_Schematic);

}
