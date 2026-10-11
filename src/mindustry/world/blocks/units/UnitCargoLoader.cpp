#include "mindustry/world/blocks/units/UnitCargoLoader.h"
#include "mindustry/world/blocks/units/UnitCargoLoader_invoke_arc_func_Prov_2.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "mindustry/world/Block.h"
#include "mindustry/ui/Bar.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "mindustry/world/blocks/units/UnitCargoLoader_invoke_arc_func_Func_1.h"
#include "java/lang/String.h"
#include "mindustry/world/blocks/units/UnitCargoLoader.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/Tile.h"
#include "mindustry/content/UnitTypes.h"
#include "arc/func/Floatp.h"
#include "mindustry/world/blocks/UnitTetherBlock.h"
#include "arc/func/Func.h"
#include "arc/Core.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/world/blocks/units/UnitCargoLoader_UnitTransportSourceBuild.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/world/blocks/units/UnitCargoLoader_invoke_arc_func_Floatp_1.h"
#include "mindustry/gen/Building.h"
#include "java/lang/CharSequence.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "arc/audio/Sound.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/entities/Units.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/world/blocks/units/UnitCargoLoader_invoke_arc_func_Prov_3.h"

extern "C" {


void mark_mindustry_world_blocks_units_UnitCargoLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_world_Block(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_world_blocks_units_UnitCargoLoader *) object;
	if (self->F_unitType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitType)->clazz)->markFunction)((jobject) self->F_unitType, mark, depth + 1);
	if (self->F_polyColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_polyColor)->clazz)->markFunction)((jobject) self->F_polyColor, mark, depth + 1);
}

void clinit_mindustry_world_blocks_units_UnitCargoLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_world_Block(ctx);
}

void init_mindustry_world_blocks_units_UnitCargoLoader_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitCargoLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitCargoLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	init_mindustry_world_Block_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_UnitTypes(ctx);
	sp[1].o = (jobject)SF_mindustry_content_UnitTypes_manifold;
	((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK(sp[0].o))->F_unitType = (jref) sp[1].o;
	LINE_NUMBER(25);
	((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK((frame[0].o)))->F_unitBuildTime = (jfloat(480.0f));
	LINE_NUMBER(27);
	((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK((frame[0].o)))->F_polyStroke = (jfloat(1.8f));
	((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK((frame[0].o)))->F_polyRadius = (jfloat(8.0f));
	LINE_NUMBER(28);
	((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK((frame[0].o)))->F_polySides = (6);
	LINE_NUMBER(29);
	((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK((frame[0].o)))->F_polyRotateSpeed = (jfloat(1));
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_Pal_accent;
	((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK(sp[0].o))->F_polyColor = (jref) sp[1].o;
	LINE_NUMBER(35);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_solid = (jint(1));
	LINE_NUMBER(36);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_update = (jint(1));
	LINE_NUMBER(37);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_hasItems = (jint(1));
	LINE_NUMBER(38);
	((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_itemCapacity = (200);
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_loopUnitBuilding;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_ambientSound = (jref) sp[1].o;
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitCargoLoader_outputsItems_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitCargoLoader:outputsItems", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_world_blocks_units_UnitCargoLoader_setBars(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitCargoLoader:setBars", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	M_mindustry_world_Block_setBars(ctx, (frame[0].o));
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"units"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitCargoLoader_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitCargoLoader_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitCargoLoader_invoke_arc_func_Func_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_world_blocks_units_UnitCargoLoader_addBar_java_lang_String_arc_func_Func) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitCargoLoader_addBar_java_lang_String_arc_func_Func])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_world_blocks_units_UnitCargoLoader_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitCargoLoader:canPlaceOn", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(66);
	jint temp0 = (jint)M_mindustry_world_Block_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK((frame[0].o)))->F_unitType;
	jint temp0 = (jint)SM_mindustry_entities_Units_canCreate_mindustry_game_Team_mindustry_type_UnitType_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
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

void M_mindustry_world_blocks_units_UnitCargoLoader_drawPlace_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitCargoLoader:drawPlace", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(71);
	M_mindustry_world_Block_drawPlace_int_int_int_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(73);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK((frame[0].o)))->F_unitType;
	jint temp0 = (jint)SM_mindustry_entities_Units_canCreate_mindustry_game_Team_mindustry_type_UnitType_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bar.cargounitcap"_j))));
	jfloat temp0 = (jfloat)((func_mindustry_world_blocks_units_UnitCargoLoader_drawPlaceText_java_lang_String_int_int_boolean_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_units_UnitCargoLoader_drawPlaceText_java_lang_String_int_int_boolean_R_float])(ctx, sp[0].o, sp[1].o, (frame[1].i), (frame[2].i), (frame[4].i));
	}
label_2:;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_world_blocks_units_UnitCargoLoader_unitTetherBlockSpawned_mindustry_world_Tile_int(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitCargoLoader:unitTetherBlockSpawned", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitCargoLoader(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(80);
	if ((frame[0].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_build;
	frame[3].o = sp[0].o;
	if ((isInstance(ctx, (frame[3].o), &class_mindustry_world_blocks_UnitTetherBlock)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_UnitTetherBlock, (frame[3].o)));
	goto label_3;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(81);
	((func_mindustry_world_blocks_UnitTetherBlock_spawned_int) resolveInterfaceMethod(ctx, &class_mindustry_world_blocks_UnitTetherBlock, INDEX_mindustry_world_blocks_UnitTetherBlock_spawned_int, (frame[2].o)))(ctx, (frame[2].o), (frame[1].i));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$0_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild_R_mindustry_ui_Bar(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitCargoLoader:lambda$setBars$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(52);
	clinit_mindustry_ui_Bar(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_Bar);
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitCargoLoader_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitCargoLoader_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitCargoLoader_invoke_arc_func_Prov_2);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitCargoLoader_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitCargoLoader_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitCargoLoader_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_world_blocks_units_UnitCargoLoader_invoke_arc_func_Floatp_1(ctx);
		auto proxy = (mindustry_world_blocks_units_UnitCargoLoader_invoke_arc_func_Floatp_1 *) gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitCargoLoader_invoke_arc_func_Floatp_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_Bar_arc_func_Prov_arc_func_Prov_arc_func_Floatp(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$3_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitCargoLoader:lambda$setBars$3", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK((frame[0].o)))->F_unitType;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_useUnitCap) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK((frame[0].o)))->F_unitType;
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = jfloat(temp0);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	jint temp2 = (jint)SM_mindustry_entities_Units_getCap_mindustry_game_Team_R_int(ctx, sp[0].o);
	jfloat temp3 = temp1 / (jfloat(temp2));
	sp[0].f = temp3;
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_FCONST(1);
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$2_R_arc_graphics_Color(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitCargoLoader:lambda$setBars$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_blocks_units_UnitCargoLoader(ctx);
	{
	LINE_NUMBER(59);
	clinit_mindustry_graphics_Pal(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Pal_power;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$1_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild_R_java_lang_CharSequence(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/units/UnitCargoLoader:lambda$setBars$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(54);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bar.unitcap"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK((frame[0].o)))->F_unitType;
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[3].o))->F_name;
	LINE_NUMBER(55);
	sp[3].o = (jobject)SM_mindustry_ui_Fonts_getUnicodeStr_java_lang_String_R_java_lang_String(ctx, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(1);
	sp[3].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	LINE_NUMBER(56);
	sp[3].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[3].o);
	sp[4].o = (jobject)((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK((frame[0].o)))->F_unitType;
	jint temp2 = (jint)((func_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_countType_mindustry_type_UnitType_R_int])(ctx, sp[3].o, sp[4].o);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, temp2);
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	jint temp3 = jint(2);
	LINE_NUMBER(57);
	sp[3].o = (jobject)((mindustry_world_blocks_units_UnitCargoLoader *) NULL_CHECK((frame[0].o)))->F_unitType;
	jobject temp4 = sp[3].o;
	sp[3].o = sp[2].o;
	sp[4].i = temp3;
	sp += 5;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(temp4))->F_useUnitCap) == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)SM_mindustry_entities_Units_getStringCap_mindustry_game_Team_R_java_lang_String(ctx, sp[0].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"\u221e"_j));
label_5:;
	{
	sp -= 6;
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[5].o;
	LINE_NUMBER(54);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_blocks_units_UnitCargoLoader[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_world_Block_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_world_Block_init,
	(void *) M_mindustry_world_Block_postInit,
	(void *) M_mindustry_world_Block_afterPatch,
	(void *) M_mindustry_world_Block_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_world_Block_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_world_Block_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_world_Block_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_world_Block_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_world_Block_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_world_Block_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_world_Block_sense_mindustry_logic_LAccess_R_double,
	(void *) M_mindustry_world_Block_sense_mindustry_ctype_Content_R_double,
	(void *) M_mindustry_world_Block_senseObject_mindustry_logic_LAccess_R_java_lang_Object,
	(void *) M_mindustry_world_Block_drawBase_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawBaseCached_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_drawShadow_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_percentSolid_int_int_R_float,
	(void *) M_mindustry_world_Block_drawEnvironmentLight_mindustry_world_Tile,
	(void *) M_mindustry_world_blocks_units_UnitCargoLoader_drawPlace_int_int_int_boolean,
	(void *) M_mindustry_world_Block_drawSideRegion_arc_graphics_g2d_TextureRegion_float_float_int,
	(void *) M_mindustry_world_Block_drawPotentialLinks_int_int,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_boolean_R_float,
	(void *) M_mindustry_world_Block_drawPlaceText_java_lang_String_int_int_arc_graphics_Color_boolean_R_float,
	(void *) M_mindustry_world_Block_drawOverlay_float_float_int,
	(void *) M_mindustry_world_Block_displayShadow_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_sumAttribute_mindustry_world_meta_Attribute_int_int_R_float,
	(void *) M_mindustry_world_Block_getDisplayIcon_mindustry_world_Tile_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getDisplayName_mindustry_world_Tile_R_java_lang_String,
	(void *) M_mindustry_world_Block_minimapColor_mindustry_world_Tile_R_int,
	(void *) M_mindustry_world_Block_getColor_mindustry_world_Tile_R_arc_graphics_Color,
	(void *) M_mindustry_world_blocks_units_UnitCargoLoader_outputsItems_R_boolean,
	(void *) M_mindustry_world_blocks_units_UnitCargoLoader_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean,
	(void *) M_mindustry_world_Block_canBreak_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_R_boolean,
	(void *) M_mindustry_world_Block_rotatedOutput_int_int_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_synthetic_R_boolean,
	(void *) M_mindustry_world_Block_checkForceDark_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_isDarkened_mindustry_world_Tile_R_boolean,
	(void *) M_mindustry_world_Block_addBar_java_lang_String_arc_func_Func,
	(void *) M_mindustry_world_Block_removeBar_java_lang_String,
	(void *) M_mindustry_world_Block_listBars_R_java_lang_Iterable,
	(void *) M_mindustry_world_Block_addLiquidBar_mindustry_type_Liquid,
	(void *) M_mindustry_world_Block_addLiquidBar_arc_func_Func,
	(void *) M_mindustry_world_blocks_units_UnitCargoLoader_setBars,
	(void *) M_mindustry_world_Block_consumesItem_mindustry_type_Item_R_boolean,
	(void *) M_mindustry_world_Block_consumesLiquid_mindustry_type_Liquid_R_boolean,
	(void *) M_mindustry_world_Block_canReplace_mindustry_world_Block_R_boolean,
	(void *) M_mindustry_world_Block_getReplacement_mindustry_entities_units_BuildPlan_arc_struct_Seq_R_mindustry_world_Block,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int_boolean,
	(void *) M_mindustry_world_Block_changePlacementPath_arc_struct_Seq_int,
	(void *) M_mindustry_world_Block_handlePlacementLine_arc_struct_Seq,
	(void *) M_mindustry_world_Block_configSenseable_R_boolean,
	(void *) M_mindustry_world_Block_nextConfig_R_java_lang_Object,
	(void *) M_mindustry_world_Block_onNewPlan_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean,
	(void *) M_mindustry_world_Block_drawPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_boolean_float,
	(void *) M_mindustry_world_Block_drawOtherPlayerPlan_mindustry_entities_units_BuildPlan_arc_util_Eachable_float,
	(void *) M_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawDefaultPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_getPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable_R_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_drawPlanConfig_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String_boolean,
	(void *) M_mindustry_world_Block_drawPlanConfigCenter_mindustry_entities_units_BuildPlan_java_lang_Object_java_lang_String,
	(void *) M_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable,
	(void *) M_mindustry_world_Block_planConfigClipSize_R_float,
	(void *) M_mindustry_world_Block_pointConfig_java_lang_Object_arc_func_Cons_R_java_lang_Object,
	(void *) M_mindustry_world_Block_configClear_arc_func_Cons,
	(void *) M_mindustry_world_Block_config_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_isAccessible_R_boolean,
	(void *) M_mindustry_world_Block_nearbySide_int_int_int_int_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_getInsideEdges_R_Array1_arc_math_geom_Point2,
	(void *) M_mindustry_world_Block_iterateTaken_int_int_arc_func_Intc2,
	(void *) M_mindustry_world_Block_makeIconRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_icons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_getRegionsToOutline_arc_struct_Seq,
	(void *) M_mindustry_world_Block_getGeneratedIcons_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_resetGeneratedIcons,
	(void *) M_mindustry_world_Block_variantRegions_R_Array1_arc_graphics_g2d_TextureRegion,
	(void *) M_mindustry_world_Block_hasBuilding_R_boolean,
	(void *) M_mindustry_world_Block_newBuilding_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_updateClipRadius_float,
	(void *) M_mindustry_world_Block_bounds_int_int_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_mindustry_world_Block_isMultiblock_R_boolean,
	(void *) M_mindustry_world_Block_isVisible_R_boolean,
	(void *) M_mindustry_world_Block_isPlaceable_R_boolean,
	(void *) M_mindustry_world_Block_isOverPlacementLimit_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_world_Block_supportsEnv_int_R_boolean,
	(void *) M_mindustry_world_Block_buildEditorConfig_arc_scene_ui_layout_Table,
	(void *) M_mindustry_world_Block_onPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_getConfig_mindustry_world_Tile_R_java_lang_Object,
	(void *) M_mindustry_world_Block_blockChanged_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_placeBegan_mindustry_world_Tile_mindustry_world_Block_mindustry_gen_Unit,
	(void *) M_mindustry_world_Block_placeEnded_mindustry_world_Tile_mindustry_gen_Unit_int_java_lang_Object,
	(void *) M_mindustry_world_Block_beforePlaceBegan_mindustry_world_Tile_mindustry_world_Block,
	(void *) M_mindustry_world_Block_editorPicked_mindustry_world_Tile,
	(void *) M_mindustry_world_Block_isFloor_R_boolean,
	(void *) M_mindustry_world_Block_isOverlay_R_boolean,
	(void *) M_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor,
	(void *) M_mindustry_world_Block_isAir_R_boolean,
	(void *) M_mindustry_world_Block_canBeBuilt_R_boolean,
	(void *) M_mindustry_world_Block_environmentBuildable_R_boolean,
	(void *) M_mindustry_world_Block_isStatic_R_boolean,
	(void *) M_mindustry_world_Block_findConsumer_arc_func_Boolf_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_hasConsumer_mindustry_world_consumers_Consume_R_boolean,
	(void *) M_mindustry_world_Block_removeConsumer_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_removeConsumers_arc_func_Boolf,
	(void *) M_mindustry_world_Block_consumeLiquid_mindustry_type_Liquid_float_R_mindustry_world_consumers_ConsumeLiquid,
	(void *) M_mindustry_world_Block_consumeLiquids_Array1_mindustry_type_LiquidStack_R_mindustry_world_consumers_ConsumeLiquids,
	(void *) M_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerCond_float_arc_func_Boolf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerDynamic_float_arc_func_Floatf_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItem_mindustry_type_Item_int_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeItems_Array1_mindustry_type_ItemStack_R_mindustry_world_consumers_ConsumeItems,
	(void *) M_mindustry_world_Block_consumeCoolant_float_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consumeCoolant_float_boolean_boolean_R_mindustry_world_consumers_ConsumeCoolant,
	(void *) M_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_setupRequirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack_boolean,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_requirements_mindustry_type_Category_mindustry_world_meta_BuildVisibility_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_world_Block_initBuilding,
	(void *) M_mindustry_world_Block_reinitializeConsumers,
	(void *) M_mindustry_world_Block_checkContentArrayCapacity_int_int,
	(void *) M_mindustry_world_Block_planRotation_int_R_int,
	(void *) M_mindustry_world_Block_flipRotation_mindustry_entities_units_BuildPlan_boolean,
	(void *) M_mindustry_world_Block_getPlanConfigs_arc_struct_Seq,
	(void *) M_mindustry_world_Block_lambda$init$3_java_lang_Class_arc_func_Cons2,
	(void *) M_mindustry_world_Block_lambda$initBuilding$1_java_lang_reflect_Constructor_R_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$setBars$5_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$8_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$setBars$1_boolean_float_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$setBars$4_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$3_arc_func_Func_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$6_arc_func_Func_mindustry_gen_Building_R_float,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$0_mindustry_type_Liquid_mindustry_gen_Building_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_Block_lambda$addLiquidBar$2_mindustry_gen_Building_mindustry_type_Liquid_R_float,
	(void *) M_mindustry_world_Block_lambda$sumAttribute$0_mindustry_world_meta_Attribute_mindustry_world_Tile_R_float,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$1_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_Block_lambda$drawPotentialLinks$0_int_int_mindustry_gen_Building,
	(void *) M_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$0_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild_R_mindustry_ui_Bar,
	(void *) M_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$3_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild_R_float,
	(void *) M_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$1_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild_R_java_lang_CharSequence,
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
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "sense", "(Lmindustry/logic/LAccess;)D" },
	{ "sense", "(Lmindustry/ctype/Content;)D" },
	{ "senseObject", "(Lmindustry/logic/LAccess;)Ljava/lang/Object;" },
	{ "drawBase", "(Lmindustry/world/Tile;)V" },
	{ "drawBaseCached", "(Lmindustry/world/Tile;)V" },
	{ "drawShadow", "(Lmindustry/world/Tile;)V" },
	{ "percentSolid", "(II)F" },
	{ "drawEnvironmentLight", "(Lmindustry/world/Tile;)V" },
	{ "drawPlace", "(IIIZ)V" },
	{ "drawSideRegion", "(Larc/graphics/g2d/TextureRegion;FFI)V" },
	{ "drawPotentialLinks", "(II)V" },
	{ "drawPlaceText", "(Ljava/lang/String;IIZ)F" },
	{ "drawPlaceText", "(Ljava/lang/String;IILarc/graphics/Color;Z)F" },
	{ "drawOverlay", "(FFI)V" },
	{ "displayShadow", "(Lmindustry/world/Tile;)Z" },
	{ "sumAttribute", "(Lmindustry/world/meta/Attribute;II)F" },
	{ "getDisplayIcon", "(Lmindustry/world/Tile;)Larc/graphics/g2d/TextureRegion;" },
	{ "getDisplayName", "(Lmindustry/world/Tile;)Ljava/lang/String;" },
	{ "minimapColor", "(Lmindustry/world/Tile;)I" },
	{ "getColor", "(Lmindustry/world/Tile;)Larc/graphics/Color;" },
	{ "outputsItems", "()Z" },
	{ "canPlaceOn", "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z" },
	{ "canBreak", "(Lmindustry/world/Tile;)Z" },
	{ "rotatedOutput", "(II)Z" },
	{ "rotatedOutput", "(IILmindustry/world/Tile;)Z" },
	{ "synthetic", "()Z" },
	{ "checkForceDark", "(Lmindustry/world/Tile;)Z" },
	{ "isDarkened", "(Lmindustry/world/Tile;)Z" },
	{ "addBar", "(Ljava/lang/String;Larc/func/Func;)V" },
	{ "removeBar", "(Ljava/lang/String;)V" },
	{ "listBars", "()Ljava/lang/Iterable;" },
	{ "addLiquidBar", "(Lmindustry/type/Liquid;)V" },
	{ "addLiquidBar", "(Larc/func/Func;)V" },
	{ "setBars", "()V" },
	{ "consumesItem", "(Lmindustry/type/Item;)Z" },
	{ "consumesLiquid", "(Lmindustry/type/Liquid;)Z" },
	{ "canReplace", "(Lmindustry/world/Block;)Z" },
	{ "getReplacement", "(Lmindustry/entities/units/BuildPlan;Larc/struct/Seq;)Lmindustry/world/Block;" },
	{ "changePlacementPath", "(Larc/struct/Seq;IZ)V" },
	{ "changePlacementPath", "(Larc/struct/Seq;I)V" },
	{ "handlePlacementLine", "(Larc/struct/Seq;)V" },
	{ "configSenseable", "()Z" },
	{ "nextConfig", "()Ljava/lang/Object;" },
	{ "onNewPlan", "(Lmindustry/entities/units/BuildPlan;)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;Z)V" },
	{ "drawPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;ZF)V" },
	{ "drawOtherPlayerPlan", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;F)V" },
	{ "drawPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawDefaultPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "getPlanRegion", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)Larc/graphics/g2d/TextureRegion;" },
	{ "drawPlanConfig", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;Z)V" },
	{ "drawPlanConfigCenter", "(Lmindustry/entities/units/BuildPlan;Ljava/lang/Object;Ljava/lang/String;)V" },
	{ "drawPlanConfigTop", "(Lmindustry/entities/units/BuildPlan;Larc/util/Eachable;)V" },
	{ "planConfigClipSize", "()F" },
	{ "pointConfig", "(Ljava/lang/Object;Larc/func/Cons;)Ljava/lang/Object;" },
	{ "configClear", "(Larc/func/Cons;)V" },
	{ "config", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "isAccessible", "()Z" },
	{ "nearbySide", "(IIIILarc/math/geom/Point2;)V" },
	{ "getEdges", "()[Larc/math/geom/Point2;" },
	{ "getInsideEdges", "()[Larc/math/geom/Point2;" },
	{ "iterateTaken", "(IILarc/func/Intc2;)V" },
	{ "makeIconRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "icons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "getRegionsToOutline", "(Larc/struct/Seq;)V" },
	{ "getGeneratedIcons", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "resetGeneratedIcons", "()V" },
	{ "variantRegions", "()[Larc/graphics/g2d/TextureRegion;" },
	{ "hasBuilding", "()Z" },
	{ "newBuilding", "()Lmindustry/gen/Building;" },
	{ "updateClipRadius", "(F)V" },
	{ "bounds", "(IILarc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "isMultiblock", "()Z" },
	{ "isVisible", "()Z" },
	{ "isPlaceable", "()Z" },
	{ "isOverPlacementLimit", "(Lmindustry/game/Team;)Z" },
	{ "supportsEnv", "(I)Z" },
	{ "buildEditorConfig", "(Larc/scene/ui/layout/Table;)V" },
	{ "onPicked", "(Lmindustry/world/Tile;)V" },
	{ "getConfig", "(Lmindustry/world/Tile;)Ljava/lang/Object;" },
	{ "blockChanged", "(Lmindustry/world/Tile;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "placeBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;Lmindustry/gen/Unit;)V" },
	{ "placeEnded", "(Lmindustry/world/Tile;Lmindustry/gen/Unit;ILjava/lang/Object;)V" },
	{ "beforePlaceBegan", "(Lmindustry/world/Tile;Lmindustry/world/Block;)V" },
	{ "editorPicked", "(Lmindustry/world/Tile;)V" },
	{ "isFloor", "()Z" },
	{ "isOverlay", "()Z" },
	{ "asFloor", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "isAir", "()Z" },
	{ "canBeBuilt", "()Z" },
	{ "environmentBuildable", "()Z" },
	{ "isStatic", "()Z" },
	{ "findConsumer", "(Larc/func/Boolf;)Lmindustry/world/consumers/Consume;" },
	{ "hasConsumer", "(Lmindustry/world/consumers/Consume;)Z" },
	{ "removeConsumer", "(Lmindustry/world/consumers/Consume;)V" },
	{ "removeConsumers", "(Larc/func/Boolf;)V" },
	{ "consumeLiquid", "(Lmindustry/type/Liquid;F)Lmindustry/world/consumers/ConsumeLiquid;" },
	{ "consumeLiquids", "([Lmindustry/type/LiquidStack;)Lmindustry/world/consumers/ConsumeLiquids;" },
	{ "consumePower", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerCond", "(FLarc/func/Boolf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(Larc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerDynamic", "(FLarc/func/Floatf;)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumePowerBuffered", "(F)Lmindustry/world/consumers/ConsumePower;" },
	{ "consumeItem", "(Lmindustry/type/Item;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItem", "(Lmindustry/type/Item;I)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeItems", "([Lmindustry/type/ItemStack;)Lmindustry/world/consumers/ConsumeItems;" },
	{ "consumeCoolant", "(F)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consumeCoolant", "(FZZ)Lmindustry/world/consumers/ConsumeCoolant;" },
	{ "consume", "(Lmindustry/world/consumers/Consume;)Lmindustry/world/consumers/Consume;" },
	{ "setupRequirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "setupRequirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;Z)V" },
	{ "requirements", "(Lmindustry/type/Category;[Lmindustry/type/ItemStack;)V" },
	{ "requirements", "(Lmindustry/type/Category;Lmindustry/world/meta/BuildVisibility;[Lmindustry/type/ItemStack;)V" },
	{ "initBuilding", "()V" },
	{ "reinitializeConsumers", "()V" },
	{ "checkContentArrayCapacity", "(II)V" },
	{ "planRotation", "(I)I" },
	{ "flipRotation", "(Lmindustry/entities/units/BuildPlan;Z)V" },
	{ "getPlanConfigs", "(Larc/struct/Seq;)V" },
	{ "lambda$init$3", "(Ljava/lang/Class;Larc/func/Cons2;)V" },
	{ "lambda$initBuilding$1", "(Ljava/lang/reflect/Constructor;)Lmindustry/gen/Building;" },
	{ "lambda$setBars$5", "(Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$8", "(Lmindustry/gen/Building;)F" },
	{ "lambda$setBars$1", "(ZFLmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$4", "(Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$3", "(Larc/func/Func;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$6", "(Larc/func/Func;Lmindustry/gen/Building;)F" },
	{ "lambda$addLiquidBar$0", "(Lmindustry/type/Liquid;Lmindustry/gen/Building;)Lmindustry/ui/Bar;" },
	{ "lambda$addLiquidBar$2", "(Lmindustry/gen/Building;Lmindustry/type/Liquid;)F" },
	{ "lambda$sumAttribute$0", "(Lmindustry/world/meta/Attribute;Lmindustry/world/Tile;)F" },
	{ "lambda$drawPotentialLinks$1", "(IILmindustry/gen/Building;)V" },
	{ "lambda$drawPotentialLinks$0", "(IILmindustry/gen/Building;)V" },
	{ "lambda$setBars$0", "(Lmindustry/world/blocks/units/UnitCargoLoader$UnitTransportSourceBuild;)Lmindustry/ui/Bar;" },
	{ "lambda$setBars$3", "(Lmindustry/world/blocks/units/UnitCargoLoader$UnitTransportSourceBuild;)F" },
	{ "lambda$setBars$1", "(Lmindustry/world/blocks/units/UnitCargoLoader$UnitTransportSourceBuild;)Ljava/lang/CharSequence;" },
};

static jclass innerClasses[] {
	&class_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild,
};

static FieldMetadata fields[] {
	{ "unitType", &class_mindustry_type_UnitType, offsetof(mindustry_world_blocks_units_UnitCargoLoader, F_unitType), "Lmindustry/type/UnitType;", 1 },
	{ "unitBuildTime", &class_float, offsetof(mindustry_world_blocks_units_UnitCargoLoader, F_unitBuildTime), "F", 1 },
	{ "polyStroke", &class_float, offsetof(mindustry_world_blocks_units_UnitCargoLoader, F_polyStroke), "F", 1 },
	{ "polyRadius", &class_float, offsetof(mindustry_world_blocks_units_UnitCargoLoader, F_polyRadius), "F", 1 },
	{ "polySides", &class_int, offsetof(mindustry_world_blocks_units_UnitCargoLoader, F_polySides), "I", 1 },
	{ "polyRotateSpeed", &class_float, offsetof(mindustry_world_blocks_units_UnitCargoLoader, F_polyRotateSpeed), "F", 1 },
	{ "polyColor", &class_arc_graphics_Color, offsetof(mindustry_world_blocks_units_UnitCargoLoader, F_polyColor), "Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_blocks_units_UnitCargoLoader_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "outputsItems", (intptr_t) M_mindustry_world_blocks_units_UnitCargoLoader_outputsItems_R_boolean, VTABLE_mindustry_world_blocks_units_UnitCargoLoader_outputsItems_R_boolean, "()Z", 1 },
	{ "setBars", (intptr_t) M_mindustry_world_blocks_units_UnitCargoLoader_setBars, VTABLE_mindustry_world_blocks_units_UnitCargoLoader_setBars, "()V", 1 },
	{ "canPlaceOn", (intptr_t) M_mindustry_world_blocks_units_UnitCargoLoader_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean, VTABLE_mindustry_world_blocks_units_UnitCargoLoader_canPlaceOn_mindustry_world_Tile_mindustry_game_Team_int_R_boolean, "(Lmindustry/world/Tile;Lmindustry/game/Team;I)Z", 1 },
	{ "drawPlace", (intptr_t) M_mindustry_world_blocks_units_UnitCargoLoader_drawPlace_int_int_int_boolean, VTABLE_mindustry_world_blocks_units_UnitCargoLoader_drawPlace_int_int_int_boolean, "(IIIZ)V", 1 },
	{ "unitTetherBlockSpawned", (intptr_t) SM_mindustry_world_blocks_units_UnitCargoLoader_unitTetherBlockSpawned_mindustry_world_Tile_int, 0, "(Lmindustry/world/Tile;I)V", 9 },
	{ "lambda$setBars$0", (intptr_t) M_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$0_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild_R_mindustry_ui_Bar, VTABLE_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$0_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild_R_mindustry_ui_Bar, "(Lmindustry/world/blocks/units/UnitCargoLoader$UnitTransportSourceBuild;)Lmindustry/ui/Bar;", 4098 },
	{ "lambda$setBars$3", (intptr_t) M_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$3_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild_R_float, VTABLE_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$3_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild_R_float, "(Lmindustry/world/blocks/units/UnitCargoLoader$UnitTransportSourceBuild;)F", 4098 },
	{ "lambda$setBars$2", (intptr_t) SM_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$2_R_arc_graphics_Color, 0, "()Larc/graphics/Color;", 4106 },
	{ "lambda$setBars$1", (intptr_t) M_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$1_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild_R_java_lang_CharSequence, VTABLE_mindustry_world_blocks_units_UnitCargoLoader_lambda$setBars$1_mindustry_world_blocks_units_UnitCargoLoader$UnitTransportSourceBuild_R_java_lang_CharSequence, "(Lmindustry/world/blocks/units/UnitCargoLoader$UnitTransportSourceBuild;)Ljava/lang/CharSequence;", 4098 },
};

Class class_mindustry_world_blocks_units_UnitCargoLoader{
		.nativeName = (intptr_t) "mindustry/world/blocks/units/UnitCargoLoader",
		.parentClass = (intptr_t) &class_mindustry_world_Block,
		.size = sizeof(mindustry_world_blocks_units_UnitCargoLoader),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_units_UnitCargoLoader,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_units_UnitCargoLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_units_UnitCargoLoader,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 192,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_units_UnitCargoLoader = registerClass(&class_mindustry_world_blocks_units_UnitCargoLoader);

}
