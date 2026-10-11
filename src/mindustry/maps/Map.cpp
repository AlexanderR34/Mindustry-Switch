#include "mindustry/maps/Map.h"
#include "java/lang/Integer.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "java/lang/Comparable.h"
#include "arc/Events.h"
#include "java/lang/Boolean.h"
#include "mindustry/game/Rules.h"
#include "mindustry/editor/MapEditorDialog.h"
#include "arc/files/Fi.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/struct/IntSet.h"
#include "arc/struct/StringMap.h"
#include "java/lang/String.h"
#include "mindustry/maps/Maps.h"
#include "mindustry/game/Waves.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/Settings.h"
#include "java/lang/Throwable.h"
#include "mindustry/game/Gamemode.h"
#include "mindustry/maps/Map.h"
#include "java/lang/Exception.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/Log.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/io/JsonIO.h"
#include "arc/graphics/Texture.h"
#include "java/lang/Enum.h"
#include "arc/util/Nullable.h"
#include "mindustry/core/UI.h"
#include "arc/assets/AssetManager.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType_MapPublishEvent.h"
#include "mindustry/content/Planets.h"
#include "mindustry/gen/Player.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/type/Planet.h"
#include "mindustry/type/Publishable.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"
#include "mindustry/editor/MapEditor.h"

extern "C" {


void mark_mindustry_maps_Map(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_Map *) object;
	if (self->F_tags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tags)->clazz)->markFunction)((jobject) self->F_tags, mark, depth + 1);
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_teams)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_teams)->clazz)->markFunction)((jobject) self->F_teams, mark, depth + 1);
	if (self->F_mod)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mod)->clazz)->markFunction)((jobject) self->F_mod, mark, depth + 1);
}

void clinit_mindustry_maps_Map(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jbool param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Map(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(44);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[1].o);
	((mindustry_maps_Map *) NULL_CHECK(sp[0].o))->F_teams = (jref) sp[1].o;
	LINE_NUMBER(40);
	((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_spawns = (jint(0));
	LINE_NUMBER(45);
	((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_custom = (frame[5].i);
	LINE_NUMBER(46);
	((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags = (jref) (frame[4].o);
	LINE_NUMBER(47);
	((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(48);
	((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_width = (frame[2].i);
	LINE_NUMBER(49);
	((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_height = (frame[3].i);
	LINE_NUMBER(50);
	((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_version = (frame[6].i);
	LINE_NUMBER(51);
	((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_build = (frame[7].i);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jbool param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Map(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(55);
	init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].o), (frame[5].i), (frame[6].i), (jint(-1)));
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jbool param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:<init>", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Map(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(59);
	init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].o), (frame[5].i), (jint(-1)));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_maps_Map_arc_struct_StringMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_Map(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_customMapDirectory;
	sp[2].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"name"_j))), (((jobject) createStringLiteral(ctx, u8"unknown"_j))));
	sp[1].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean(ctx, sp[0].o, sp[1].o, (jint(0)), (jint(0)), (frame[1].o), (jint(1)));
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_mindustry_maps_Map_getHighScore_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:getHighScore", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[2].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"hiscore\u0001\u0001"_j.string, 2, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	jint temp0 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:safeTexture", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_texture;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_get_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sprites/error.png"_j))));
	sp[0].o = checkCast(ctx, &class_arc_graphics_Texture, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_maps_Map *) NULL_CHECK(sp[-1].o))->F_texture;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_previewFile_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:previewFile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mapPreviewDirectory;
	sp += 1;
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_workshop) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001_v2.png"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_cacheFile_R_arc_files_Fi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:cacheFile", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mapPreviewDirectory;
	sp += 1;
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_workshop) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-workshop-cache.dat"_j.string, 1, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-cache_v2.dat"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_2:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	sp++;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_Map_setHighScore_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:setHighScore", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(83);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[2].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"hiscore\u0001\u0001"_j.string, 2, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_applyRules_mindustry_game_Gamemode_R_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:applyRules", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(89);
	clinit_mindustry_game_Rules(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Rules);
	init_mindustry_game_Rules(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_mindustry_game_Gamemode_apply_mindustry_game_Rules_R_mindustry_game_Rules) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Gamemode_apply_mindustry_game_Rules_R_mindustry_game_Rules])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(93);
	sp[0].o = (jobject)((func_mindustry_maps_Map_rules_mindustry_game_Rules_R_mindustry_game_Rules) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_rules_mindustry_game_Rules_R_mindustry_game_Rules])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_rules_R_mindustry_game_Rules(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:rules", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Rules(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Rules);
	init_mindustry_game_Rules(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_maps_Map_rules_mindustry_game_Rules_R_mindustry_game_Rules) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Map_rules_mindustry_game_Rules_R_mindustry_game_Rules])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_rules_mindustry_game_Rules_R_mindustry_game_Rules(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:rules", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(103);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"rules"_j))), (((jobject) createStringLiteral(ctx, u8"{}"_j))));
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Object_java_lang_String_R_java_lang_Object(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Rules, sp[0].o));
	LINE_NUMBER(106);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_planet;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	jint temp0 = (jint)((func_mindustry_game_Rules_hasEnv_int_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Rules_hasEnv_int_R_boolean])(ctx, (frame[2].o), (16));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_erekir;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_planet;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK((frame[2].o)))->F_spawns;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = frame[2].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_waves;
	sp[1].o = (jobject)((func_mindustry_game_Waves_get_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Waves_get_R_arc_struct_Seq])(ctx, sp[1].o);
	((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_spawns = (jref) sp[1].o;
	}
label_8:;
	LINE_NUMBER(111);
	INST_ALOAD(2);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(112);
	frame[2].o = sp[0].o;
	LINE_NUMBER(114);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(115);
	clinit_mindustry_game_Rules(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Rules);
	init_mindustry_game_Rules(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_filters_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:filters", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	jint temp0 = (jint)((func_arc_struct_StringMap_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"build"_j))), (jint(-1)));
	if (temp0 >= (83)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	jint temp0 = (jint)((func_arc_struct_StringMap_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"build"_j))), (jint(-1)));
	if (temp0 == (jint(-1))) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"genfilters"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_maps_filters_GenerateFilter, (jint(0)));
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(124);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	sp[1].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"genfilters"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_mindustry_maps_Maps_readFilters_java_lang_String_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_readFilters_java_lang_String_R_arc_struct_Seq])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_name_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:name", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(128);
	sp[0].o = (jobject)((func_mindustry_maps_Map_tag_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_tag_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_author_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:author", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((func_mindustry_maps_Map_tag_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_tag_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"author"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_description_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:description", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_mindustry_maps_Map_tag_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_tag_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"description"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_plainName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:plainName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_plainAuthor_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:plainAuthor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(144);
	sp[0].o = (jobject)((func_mindustry_maps_Map_author_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_author_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_plainDescription_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:plainDescription", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_mindustry_maps_Map_description_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_description_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_tag_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:tag", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	jint temp0 = (jint)((func_mindustry_maps_Map_hasTag_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_hasTag_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = checkCast(ctx, &class_java_lang_String, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"unknown"_j))), (((jobject) createStringLiteral(ctx, u8"unknown"_j))));
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_maps_Map_hasTag_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:hasTag", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (checkCast(ctx, &class_java_lang_String, sp[0].o)));
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
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

jobject M_mindustry_maps_Map_getSteamID_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:getSteamID", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(161);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Map_addSteamID_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:addSteamID", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))), (frame[1].o));
	LINE_NUMBER(167);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))), (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(170);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	sp[0].o = (jobject)((func_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(173);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(171);
	frame[2].o = sp[0].o;
	LINE_NUMBER(172);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	}
label_6:;
	{
	LINE_NUMBER(175);
	clinit_mindustry_game_EventType$MapPublishEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$MapPublishEvent);
	init_mindustry_game_EventType$MapPublishEvent(ctx, sp[0].o);
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(176);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_Map_removeSteamID(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:removeSteamID", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))));
	LINE_NUMBER(181);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"steamid"_j))));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(184);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	sp[0].o = (jobject)((func_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map])(ctx, sp[0].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(187);
	goto label_6;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(185);
	frame[1].o = sp[0].o;
	LINE_NUMBER(186);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[1].o));
	}
label_6:;
	LINE_NUMBER(188);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_steamTitle_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:steamTitle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_steamDescription_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:steamDescription", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((func_mindustry_maps_Map_description_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_description_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_steamTag_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:steamTag", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(202);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"map"_j)));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_createSteamFolder_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:createSteamFolder", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(207);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tmpDirectory;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"map_\u0001"_j.string, 1, (frame[1].o));
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"map.msav"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	((func_arc_files_Fi_copyTo_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_copyTo_arc_files_Fi])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_createSteamPreview_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:createSteamPreview", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(215);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mapPreviewDirectory;
	sp += 1;
	if (((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_workshop) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_files_Fi_extEquals_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_extEquals_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_2:;
	{
	sp -= 2;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001_v2.png"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_extraTags_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:extraTags", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(220);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_attack;
	jint temp0 = (jint)((func_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean])(ctx, sp[0].o, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	clinit_mindustry_game_Gamemode(ctx);
	(sp++)->o = SF_mindustry_game_Gamemode_attack;
	goto label_2;
label_1:;
	clinit_mindustry_game_Gamemode(ctx);
	(sp++)->o = SF_mindustry_game_Gamemode_survival;
label_2:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(221);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_mindustry_game_Gamemode_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Gamemode_name_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_maps_Map_prePublish_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:prePublish", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"author"_j));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[2].o))->F_name;
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(227);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_editor;
	sp[0].o = (jobject)((mindustry_editor_MapEditor *) NULL_CHECK(sp[0].o))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"author"_j));
	clinit_mindustry_Vars(ctx);
	sp[2].o = (jobject)SF_mindustry_Vars_player;
	sp[2].o = (jobject)((mindustry_gen_Player *) NULL_CHECK(sp[2].o))->F_name;
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(229);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_editor;
	sp[0].o = (jobject)((func_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_editor_MapEditorDialog_save_R_mindustry_maps_Map])(ctx, sp[0].o);
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_mindustry_maps_Map_compareTo_mindustry_maps_Map_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:compareTo", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(235);
	jint temp0 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_workshop), ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_workshop));
	frame[2].i = (-temp0);
	LINE_NUMBER(236);
	if ((frame[2].i) == 0) goto label_2;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(237);
	jint temp0 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_custom), ((jint)((mindustry_maps_Map *) NULL_CHECK((frame[1].o)))->F_custom));
	frame[3].i = (-temp0);
	LINE_NUMBER(238);
	if ((frame[3].i) == 0) goto label_4;
	}
	INST_ILOAD(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(239);
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_pvp;
	jint temp0 = (jint)((func_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean])(ctx, sp[0].o, (frame[0].o));
	clinit_mindustry_game_Gamemode(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Gamemode_pvp;
	jint temp1 = (jint)((func_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Gamemode_valid_mindustry_maps_Map_R_boolean])(ctx, sp[0].o, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Boolean_compare_boolean_boolean_R_int(ctx, temp0, temp1);
	frame[4].i = temp2;
	LINE_NUMBER(240);
	if ((frame[4].i) == 0) goto label_6;
	}
	INST_ILOAD(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(242);
	sp[0].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((func_mindustry_maps_Map_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_maps_Map_name_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[1].o);
	jint temp0 = (jint)((func_java_lang_String_compareTo_java_lang_String_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_compareTo_java_lang_String_R_int])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_Map_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_maps_Map *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Map{file='\u0001'}"_j.string, 1, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_mindustry_maps_Map_compareTo_java_lang_Object_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/Map:compareTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(20);
	jint temp0 = (jint)((func_mindustry_maps_Map_compareTo_mindustry_maps_Map_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_Map_compareTo_mindustry_maps_Map_R_int])(ctx, (frame[0].o), (checkCast(ctx, &class_mindustry_maps_Map, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_maps_Map;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field texture
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[7]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field mod
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_maps_Map[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_maps_Map_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_maps_Map_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_maps_Map_getSteamID_R_java_lang_String,
	(void *) M_mindustry_maps_Map_addSteamID_java_lang_String,
	(void *) M_mindustry_maps_Map_removeSteamID,
	(void *) M_mindustry_maps_Map_steamTitle_R_java_lang_String,
	(void *) M_mindustry_maps_Map_steamDescription_R_java_lang_String,
	(void *) M_mindustry_maps_Map_steamTag_R_java_lang_String,
	(void *) M_mindustry_maps_Map_createSteamFolder_java_lang_String_R_arc_files_Fi,
	(void *) M_mindustry_maps_Map_createSteamPreview_java_lang_String_R_arc_files_Fi,
	(void *) M_mindustry_maps_Map_extraTags_R_arc_struct_Seq,
	(void *) M_mindustry_type_Publishable_hasSteamID_R_boolean,
	(void *) M_mindustry_maps_Map_prePublish_R_boolean,
	(void *) M_mindustry_maps_Map_getHighScore_R_int,
	(void *) M_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture,
	(void *) M_mindustry_maps_Map_previewFile_R_arc_files_Fi,
	(void *) M_mindustry_maps_Map_cacheFile_R_arc_files_Fi,
	(void *) M_mindustry_maps_Map_setHighScore_int,
	(void *) M_mindustry_maps_Map_applyRules_mindustry_game_Gamemode_R_mindustry_game_Rules,
	(void *) M_mindustry_maps_Map_rules_R_mindustry_game_Rules,
	(void *) M_mindustry_maps_Map_rules_mindustry_game_Rules_R_mindustry_game_Rules,
	(void *) M_mindustry_maps_Map_filters_R_arc_struct_Seq,
	(void *) M_mindustry_maps_Map_name_R_java_lang_String,
	(void *) M_mindustry_maps_Map_author_R_java_lang_String,
	(void *) M_mindustry_maps_Map_description_R_java_lang_String,
	(void *) M_mindustry_maps_Map_plainName_R_java_lang_String,
	(void *) M_mindustry_maps_Map_plainAuthor_R_java_lang_String,
	(void *) M_mindustry_maps_Map_plainDescription_R_java_lang_String,
	(void *) M_mindustry_maps_Map_tag_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_maps_Map_hasTag_java_lang_String_R_boolean,
	(void *) M_mindustry_maps_Map_compareTo_mindustry_maps_Map_R_int,
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
	{ "getHighScore", "()I" },
	{ "safeTexture", "()Larc/graphics/Texture;" },
	{ "previewFile", "()Larc/files/Fi;" },
	{ "cacheFile", "()Larc/files/Fi;" },
	{ "setHighScore", "(I)V" },
	{ "applyRules", "(Lmindustry/game/Gamemode;)Lmindustry/game/Rules;" },
	{ "rules", "()Lmindustry/game/Rules;" },
	{ "rules", "(Lmindustry/game/Rules;)Lmindustry/game/Rules;" },
	{ "filters", "()Larc/struct/Seq;" },
	{ "name", "()Ljava/lang/String;" },
	{ "author", "()Ljava/lang/String;" },
	{ "description", "()Ljava/lang/String;" },
	{ "plainName", "()Ljava/lang/String;" },
	{ "plainAuthor", "()Ljava/lang/String;" },
	{ "plainDescription", "()Ljava/lang/String;" },
	{ "tag", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "hasTag", "(Ljava/lang/String;)Z" },
	{ "compareTo", "(Lmindustry/maps/Map;)I" },
};

static jclass interfaces[] { &class_java_lang_Comparable, &class_mindustry_type_Publishable, };

static FieldMetadata fields[] {
	{ "custom", &class_boolean, offsetof(mindustry_maps_Map, F_custom), "Z", 17 },
	{ "tags", &class_arc_struct_StringMap, offsetof(mindustry_maps_Map, F_tags), "Larc/struct/StringMap;", 17 },
	{ "file", &class_arc_files_Fi, offsetof(mindustry_maps_Map, F_file), "Larc/files/Fi;", 17 },
	{ "version", &class_int, offsetof(mindustry_maps_Map, F_version), "I", 17 },
	{ "workshop", &class_boolean, offsetof(mindustry_maps_Map, F_workshop), "Z", 1 },
	{ "width", &class_int, offsetof(mindustry_maps_Map, F_width), "I", 1 },
	{ "height", &class_int, offsetof(mindustry_maps_Map, F_height), "I", 1 },
	{ "texture", &class_arc_graphics_Texture, offsetof(mindustry_maps_Map, F_texture), "Larc/graphics/Texture;", 1 },
	{ "build", &class_int, offsetof(mindustry_maps_Map, F_build), "I", 1 },
	{ "teams", &class_arc_struct_IntSet, offsetof(mindustry_maps_Map, F_teams), "Larc/struct/IntSet;", 1 },
	{ "spawns", &class_int, offsetof(mindustry_maps_Map, F_spawns), "I", 1 },
	{ "mod", &class_mindustry_mod_Mods$LoadedMod, offsetof(mindustry_maps_Map, F_mod), "Lmindustry/mod/Mods$LoadedMod;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean_int_int, 0, "(Larc/files/Fi;IILarc/struct/StringMap;ZII)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean_int, 0, "(Larc/files/Fi;IILarc/struct/StringMap;ZI)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_maps_Map_arc_files_Fi_int_int_arc_struct_StringMap_boolean, 0, "(Larc/files/Fi;IILarc/struct/StringMap;Z)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_maps_Map_arc_struct_StringMap, 0, "(Larc/struct/StringMap;)V", 1 },
	{ "getHighScore", (intptr_t) M_mindustry_maps_Map_getHighScore_R_int, VTABLE_mindustry_maps_Map_getHighScore_R_int, "()I", 1 },
	{ "safeTexture", (intptr_t) M_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture, VTABLE_mindustry_maps_Map_safeTexture_R_arc_graphics_Texture, "()Larc/graphics/Texture;", 1 },
	{ "previewFile", (intptr_t) M_mindustry_maps_Map_previewFile_R_arc_files_Fi, VTABLE_mindustry_maps_Map_previewFile_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "cacheFile", (intptr_t) M_mindustry_maps_Map_cacheFile_R_arc_files_Fi, VTABLE_mindustry_maps_Map_cacheFile_R_arc_files_Fi, "()Larc/files/Fi;", 1 },
	{ "setHighScore", (intptr_t) M_mindustry_maps_Map_setHighScore_int, VTABLE_mindustry_maps_Map_setHighScore_int, "(I)V", 1 },
	{ "applyRules", (intptr_t) M_mindustry_maps_Map_applyRules_mindustry_game_Gamemode_R_mindustry_game_Rules, VTABLE_mindustry_maps_Map_applyRules_mindustry_game_Gamemode_R_mindustry_game_Rules, "(Lmindustry/game/Gamemode;)Lmindustry/game/Rules;", 1 },
	{ "rules", (intptr_t) M_mindustry_maps_Map_rules_R_mindustry_game_Rules, VTABLE_mindustry_maps_Map_rules_R_mindustry_game_Rules, "()Lmindustry/game/Rules;", 1 },
	{ "rules", (intptr_t) M_mindustry_maps_Map_rules_mindustry_game_Rules_R_mindustry_game_Rules, VTABLE_mindustry_maps_Map_rules_mindustry_game_Rules_R_mindustry_game_Rules, "(Lmindustry/game/Rules;)Lmindustry/game/Rules;", 1 },
	{ "filters", (intptr_t) M_mindustry_maps_Map_filters_R_arc_struct_Seq, VTABLE_mindustry_maps_Map_filters_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "name", (intptr_t) M_mindustry_maps_Map_name_R_java_lang_String, VTABLE_mindustry_maps_Map_name_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "author", (intptr_t) M_mindustry_maps_Map_author_R_java_lang_String, VTABLE_mindustry_maps_Map_author_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "description", (intptr_t) M_mindustry_maps_Map_description_R_java_lang_String, VTABLE_mindustry_maps_Map_description_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "plainName", (intptr_t) M_mindustry_maps_Map_plainName_R_java_lang_String, VTABLE_mindustry_maps_Map_plainName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "plainAuthor", (intptr_t) M_mindustry_maps_Map_plainAuthor_R_java_lang_String, VTABLE_mindustry_maps_Map_plainAuthor_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "plainDescription", (intptr_t) M_mindustry_maps_Map_plainDescription_R_java_lang_String, VTABLE_mindustry_maps_Map_plainDescription_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "tag", (intptr_t) M_mindustry_maps_Map_tag_java_lang_String_R_java_lang_String, VTABLE_mindustry_maps_Map_tag_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "hasTag", (intptr_t) M_mindustry_maps_Map_hasTag_java_lang_String_R_boolean, VTABLE_mindustry_maps_Map_hasTag_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "getSteamID", (intptr_t) M_mindustry_maps_Map_getSteamID_R_java_lang_String, VTABLE_mindustry_maps_Map_getSteamID_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "addSteamID", (intptr_t) M_mindustry_maps_Map_addSteamID_java_lang_String, VTABLE_mindustry_maps_Map_addSteamID_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "removeSteamID", (intptr_t) M_mindustry_maps_Map_removeSteamID, VTABLE_mindustry_maps_Map_removeSteamID, "()V", 1 },
	{ "steamTitle", (intptr_t) M_mindustry_maps_Map_steamTitle_R_java_lang_String, VTABLE_mindustry_maps_Map_steamTitle_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "steamDescription", (intptr_t) M_mindustry_maps_Map_steamDescription_R_java_lang_String, VTABLE_mindustry_maps_Map_steamDescription_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "steamTag", (intptr_t) M_mindustry_maps_Map_steamTag_R_java_lang_String, VTABLE_mindustry_maps_Map_steamTag_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "createSteamFolder", (intptr_t) M_mindustry_maps_Map_createSteamFolder_java_lang_String_R_arc_files_Fi, VTABLE_mindustry_maps_Map_createSteamFolder_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "createSteamPreview", (intptr_t) M_mindustry_maps_Map_createSteamPreview_java_lang_String_R_arc_files_Fi, VTABLE_mindustry_maps_Map_createSteamPreview_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "extraTags", (intptr_t) M_mindustry_maps_Map_extraTags_R_arc_struct_Seq, VTABLE_mindustry_maps_Map_extraTags_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "prePublish", (intptr_t) M_mindustry_maps_Map_prePublish_R_boolean, VTABLE_mindustry_maps_Map_prePublish_R_boolean, "()Z", 1 },
	{ "compareTo", (intptr_t) M_mindustry_maps_Map_compareTo_mindustry_maps_Map_R_int, VTABLE_mindustry_maps_Map_compareTo_mindustry_maps_Map_R_int, "(Lmindustry/maps/Map;)I", 1 },
	{ "toString", (intptr_t) M_mindustry_maps_Map_toString_R_java_lang_String, VTABLE_mindustry_maps_Map_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "compareTo", (intptr_t) M_mindustry_maps_Map_compareTo_java_lang_Object_R_int, VTABLE_mindustry_maps_Map_compareTo_java_lang_Object_R_int, "(Ljava/lang/Object;)I", 4161 },
};

Class class_mindustry_maps_Map{
		.nativeName = (intptr_t) "mindustry/maps/Map",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_Map),
		.classVtable = (intptr_t) vtable_mindustry_maps_Map,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_Map,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_maps_Map,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 34,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_Map = registerClass(&class_mindustry_maps_Map);

}
