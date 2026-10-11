#include "mindustry/maps/filters/GenerateFilter.h"
#include "arc/util/serialization/AllowSerialization.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/Tiles.h"
#include "arc/scene/ui/Image.h"
#include "java/lang/String.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/I18NBundle.h"
#include "arc/util/noise/Ridged.h"
#include "mindustry/world/Tile.h"
#include "arc/util/Pack.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "java/lang/Throwable.h"
#include "mindustry/maps/filters/GenerateFilter_GenerateInput.h"
#include "arc/math/Mathf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/maps/filters/GenerateFilter_PackTileStruct.h"
#include "arc/util/noise/Simplex.h"
#include "java/lang/Cloneable.h"
#include "mindustry/world/blocks/environment/OreBlock.h"
#include "mindustry/maps/filters/FilterOption.h"
#include "java/lang/CloneNotSupportedException.h"
#include "java/lang/CharSequence.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/gen/PackTile.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_maps_filters_GenerateFilter(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_filters_GenerateFilter *) object;
}

void clinit_mindustry_maps_filters_GenerateFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_maps_filters_GenerateFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_GenerateFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	((mindustry_maps_filters_GenerateFilter *) NULL_CHECK((frame[0].o)))->F_seed = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_GenerateFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:apply", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(21);
	jint temp0 = (jint)((func_mindustry_maps_filters_GenerateFilter_isBuffered_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_isBuffered_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(23);
	sp[0].o = (jobject) createArray(ctx, &class_long, (((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_height)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(25);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_height))) goto label_5;
	}
	{
	LINE_NUMBER(26);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, (frame[1].o), (frame[4].i));
	((func_mindustry_maps_filters_GenerateFilter$GenerateInput_set_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_set_mindustry_world_Tile])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(27);
	((func_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(29);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp1 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id;
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[2].o)))->F_floor;
	jint temp2 = (jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id;
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[2].o)))->F_overlay;
	jlong temp3 = (jlong)SM_mindustry_gen_PackTile_get_short_short_short_R_long(ctx, temp1, temp2, ((jint)((mindustry_ctype_Content *) NULL_CHECK(sp[1].o))->F_id));
	ARRAY_ACCESS(jlong, sp[0].o, temp0) = temp3;
	LINE_NUMBER(25);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(33);
	frame[4].i = (jint(0));
	}
label_10:;
	{
	if ((frame[4].i) >= (((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_width) * ((jint)((mindustry_world_Tiles *) NULL_CHECK((frame[1].o)))->F_height))) goto label_11;
	}
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_geti_int_R_mindustry_world_Tile])(ctx, (frame[1].o), (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(35);
	frame[6].l = ((jlong)ARRAY_ACCESS(jlong, (frame[3].o), (frame[4].i)));
	LINE_NUMBER(37);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp0 = (jint)SM_mindustry_gen_PackTile_block_long_R_short(ctx, (frame[6].l));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, temp0);
	frame[8].o = sp[0].o;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp1 = (jint)SM_mindustry_gen_PackTile_floor_long_R_short(ctx, (frame[6].l));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, temp1);
	frame[9].o = sp[0].o;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	jint temp2 = (jint)SM_mindustry_gen_PackTile_overlay_long_R_short(ctx, (frame[6].l));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_block_int_R_mindustry_world_Block])(ctx, sp[0].o, temp2);
	frame[10].o = sp[0].o;
	LINE_NUMBER(39);
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_18;
	}
	{
	frame[11].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[9].o)));
	LINE_NUMBER(40);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, (frame[5].o), (frame[11].o));
	LINE_NUMBER(41);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, (frame[11].o));
	sp += 1;
	if (temp0 != 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[10].o));
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_needsSurface) == 0) goto label_21;
	}
	{
	if ((isInstance(ctx, (frame[10].o), &class_mindustry_world_blocks_environment_OreBlock)) == 0) goto label_21;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	goto label_22;
label_21:;
	INST_ALOAD(10);
label_22:;
	POP_N(2); // Pop method args
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
label_18:;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_23;
	}
	{
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, (frame[8].o));
	if (temp0 != 0) goto label_23;
	}
	{
	LINE_NUMBER(45);
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, (frame[5].o), (frame[8].o));
	}
label_23:;
	{
	LINE_NUMBER(33);
	INST_IINC(4, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(48);
	goto label_25;
label_1:;
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_mindustry_world_Tiles_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_world_Tiles_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_26:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_25;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(50);
	((func_mindustry_maps_filters_GenerateFilter$GenerateInput_set_mindustry_world_Tile) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter$GenerateInput_set_mindustry_world_Tile])(ctx, (frame[2].o), (frame[4].o));
	LINE_NUMBER(51);
	((func_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[2].o)))->F_floor;
	frame[6].o = sp[0].o;
	if ((isInstance(ctx, (frame[6].o), &class_mindustry_world_blocks_environment_Floor)) == 0) goto label_30;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_Floor, (frame[6].o)));
	LINE_NUMBER(54);
	((func_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_setFloor_mindustry_world_blocks_environment_Floor])(ctx, (frame[4].o), (frame[5].o));
	LINE_NUMBER(55);
	sp[0].o = frame[4].o;
	jint temp0 = (jint)((func_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_world_blocks_environment_Floor_hasSurface_R_boolean])(ctx, (frame[5].o));
	sp += 1;
	if (temp0 != 0) goto label_33;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[2].o)))->F_overlay;
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, sp[0].o);
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_needsSurface) == 0) goto label_33;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[2].o)))->F_overlay;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_environment_OreBlock)) == 0) goto label_33;
	}
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	goto label_34;
label_33:;
	INST_ALOAD(2);
	sp[-1].o = (jobject) ((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK(sp[-1].o))->F_overlay;
label_34:;
	POP_N(2); // Pop method args
	((func_mindustry_world_Tile_setOverlay_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setOverlay_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
label_30:;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_35;
	}
	{
	sp[0].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[2].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_synthetic_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_synthetic_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_35;
	}
	{
	LINE_NUMBER(59);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[2].o)))->F_block;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block])(ctx, sp[0].o, sp[1].o);
	}
label_35:;
	{
	LINE_NUMBER(61);
	((func_mindustry_world_Tile_setPackedData_long) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_world_Tile_setPackedData_long])(ctx, (frame[4].o), ((jlong)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[2].o)))->F_packedData));
	LINE_NUMBER(62);
	goto label_26;
	}
label_25:;
	LINE_NUMBER(64);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:apply", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(70);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:draw", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:simpleName", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_java_lang_Class_isAnonymousClass_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_isAnonymousClass_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"filter"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:name", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(83);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"filter.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jchar M_mindustry_maps_filters_GenerateFilter_icon_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:icon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_filters_GenerateFilter_randomize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:randomize", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_arc_math_Mathf_random_int_R_int(ctx, (jint(999999999)));
	((mindustry_maps_filters_GenerateFilter *) NULL_CHECK(sp[0].o))->F_seed = temp0;
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_maps_filters_GenerateFilter_isBuffered_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:isBuffered", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_maps_filters_GenerateFilter_isPost_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:isPost", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_GenerateFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float(jcontext ctx, jobject self, jint param0, jobject param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:noise", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(108);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, ((frame[1].i) + ((jint)((mindustry_maps_filters_GenerateFilter *) NULL_CHECK((frame[0].o)))->F_seed)), (jdouble(1)), (jdouble(0)), (jdouble(((jfloat(1)) / (frame[3].f)))), (jdouble((((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[2].o)))->F_x) + (10)))), (jdouble((((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[2].o)))->F_y) + (10)))));
	popStackFrame(ctx);
	return (temp0 * (frame[4].f));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:noise", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(112);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_filters_GenerateFilter *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble(1)), (jdouble(0)), (jdouble(((jfloat(1)) / (frame[2].f)))), (jdouble((((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_x) + (10)))), (jdouble((((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_y) + (10)))));
	popStackFrame(ctx);
	return (temp0 * (frame[3].f));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:noise", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(116);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_filters_GenerateFilter *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble((frame[4].f))), (jdouble((frame[5].f))), (jdouble(((jfloat(1)) / (frame[2].f)))), (jdouble((((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_x) + (10)))), (jdouble((((jint)((mindustry_maps_filters_GenerateFilter$GenerateInput *) NULL_CHECK((frame[1].o)))->F_y) + (10)))));
	popStackFrame(ctx);
	return (temp0 * (frame[3].f));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_GenerateFilter_noise_float_float_float_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:noise", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(120);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Simplex_noise2d_int_double_double_double_double_double_R_float(ctx, ((jint)((mindustry_maps_filters_GenerateFilter *) NULL_CHECK((frame[0].o)))->F_seed), (jdouble((frame[5].f))), (jdouble((frame[6].f))), (jdouble(((jfloat(1)) / (frame[3].f)))), (jdouble(((frame[1].f) + (jfloat(10.0f))))), (jdouble(((frame[2].f) + (jfloat(10.0f))))));
	popStackFrame(ctx);
	return (temp0 * (frame[4].f));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:rnoise", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(124);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Ridged_noise2d_int_double_double_double_R_float(ctx, (((jint)((mindustry_maps_filters_GenerateFilter *) NULL_CHECK((frame[0].o)))->F_seed) + (jint(1))), (jdouble((jint((frame[1].f))))), (jdouble((jint((frame[2].f))))), (jdouble(((jfloat(1)) / (frame[3].f)))));
	popStackFrame(ctx);
	return (temp0 * (frame[4].f));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_int_float_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jint param2, jfloat param3, jfloat param4, jfloat param5) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:rnoise", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	{
	LINE_NUMBER(128);
	jfloat temp0 = (jfloat)SM_arc_util_noise_Ridged_noise2d_int_double_double_int_double_double_R_float(ctx, (((jint)((mindustry_maps_filters_GenerateFilter *) NULL_CHECK((frame[0].o)))->F_seed) + (jint(1))), (jdouble((jint((frame[1].f))))), (jdouble((jint((frame[2].f))))), (frame[3].i), (jdouble((frame[5].f))), (jdouble(((jfloat(1)) / (frame[4].f)))));
	popStackFrame(ctx);
	return (temp0 * (frame[6].f));
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_maps_filters_GenerateFilter_chance_int_int_R_float(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:chance", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(132);
	jlong temp0 = (jlong)SM_arc_util_Pack_longInt_int_int_R_long(ctx, (frame[1].i), ((frame[2].i) + ((jint)((mindustry_maps_filters_GenerateFilter *) NULL_CHECK((frame[0].o)))->F_seed)));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_randomSeed_long_R_float(ctx, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter:copy", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_CloneNotSupportedException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, (frame[0].o));
	sp[0].o = checkCast(ctx, &class_mindustry_maps_filters_GenerateFilter, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(138);
	frame[1].o = sp[0].o;
	LINE_NUMBER(139);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"java is the best language"_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_GenerateFilter[] {
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
	(void *) M_mindustry_maps_filters_GenerateFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) nullptr,
	(void *) M_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput,
	(void *) M_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image,
	(void *) M_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String,
	(void *) M_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String,
	(void *) M_mindustry_maps_filters_GenerateFilter_icon_R_char,
	(void *) M_mindustry_maps_filters_GenerateFilter_randomize,
	(void *) M_mindustry_maps_filters_GenerateFilter_isBuffered_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_isPost_R_boolean,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_noise_float_float_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_int_float_float_float_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_chance_int_int_R_float,
	(void *) M_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter,
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
	{ "apply", "(Lmindustry/world/Tiles;Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V" },
	{ "options", "()[Lmindustry/maps/filters/FilterOption;" },
	{ "apply", "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V" },
	{ "draw", "(Larc/scene/ui/Image;)V" },
	{ "simpleName", "()Ljava/lang/String;" },
	{ "name", "()Ljava/lang/String;" },
	{ "icon", "()C" },
	{ "randomize", "()V" },
	{ "isBuffered", "()Z" },
	{ "isPost", "()Z" },
	{ "noise", "(ILmindustry/maps/filters/GenerateFilter$GenerateInput;FF)F" },
	{ "noise", "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;FF)F" },
	{ "noise", "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;FFFF)F" },
	{ "noise", "(FFFFFF)F" },
	{ "rnoise", "(FFFF)F" },
	{ "rnoise", "(FFIFFF)F" },
	{ "chance", "(II)F" },
	{ "copy", "()Lmindustry/maps/filters/GenerateFilter;" },
};

static jclass interfaces[] { &class_java_lang_Cloneable, &class_arc_util_serialization_AllowSerialization, };

static jclass innerClasses[] {
	&class_mindustry_maps_filters_GenerateFilter$GenerateInput,
	&class_mindustry_maps_filters_GenerateFilter$PackTileStruct,
};

static FieldMetadata fields[] {
	{ "seed", &class_int, offsetof(mindustry_maps_filters_GenerateFilter, F_seed), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_GenerateFilter, 0, "()V", 1 },
	{ "apply", (intptr_t) M_mindustry_maps_filters_GenerateFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput, VTABLE_mindustry_maps_filters_GenerateFilter_apply_mindustry_world_Tiles_mindustry_maps_filters_GenerateFilter$GenerateInput, "(Lmindustry/world/Tiles;Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V", 1 },
	{ "options", 0, VTABLE_mindustry_maps_filters_GenerateFilter_options_R_Array1_mindustry_maps_filters_FilterOption, "()[Lmindustry/maps/filters/FilterOption;", 1025 },
	{ "apply", (intptr_t) M_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, VTABLE_mindustry_maps_filters_GenerateFilter_apply_mindustry_maps_filters_GenerateFilter$GenerateInput, "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image, VTABLE_mindustry_maps_filters_GenerateFilter_draw_arc_scene_ui_Image, "(Larc/scene/ui/Image;)V", 1 },
	{ "simpleName", (intptr_t) M_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String, VTABLE_mindustry_maps_filters_GenerateFilter_simpleName_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "name", (intptr_t) M_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String, VTABLE_mindustry_maps_filters_GenerateFilter_name_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "icon", (intptr_t) M_mindustry_maps_filters_GenerateFilter_icon_R_char, VTABLE_mindustry_maps_filters_GenerateFilter_icon_R_char, "()C", 1 },
	{ "randomize", (intptr_t) M_mindustry_maps_filters_GenerateFilter_randomize, VTABLE_mindustry_maps_filters_GenerateFilter_randomize, "()V", 1 },
	{ "isBuffered", (intptr_t) M_mindustry_maps_filters_GenerateFilter_isBuffered_R_boolean, VTABLE_mindustry_maps_filters_GenerateFilter_isBuffered_R_boolean, "()Z", 1 },
	{ "isPost", (intptr_t) M_mindustry_maps_filters_GenerateFilter_isPost_R_boolean, VTABLE_mindustry_maps_filters_GenerateFilter_isPost_R_boolean, "()Z", 1 },
	{ "noise", (intptr_t) M_mindustry_maps_filters_GenerateFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float, VTABLE_mindustry_maps_filters_GenerateFilter_noise_int_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float, "(ILmindustry/maps/filters/GenerateFilter$GenerateInput;FF)F", 4 },
	{ "noise", (intptr_t) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float, VTABLE_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_R_float, "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;FF)F", 4 },
	{ "noise", (intptr_t) M_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float, VTABLE_mindustry_maps_filters_GenerateFilter_noise_mindustry_maps_filters_GenerateFilter$GenerateInput_float_float_float_float_R_float, "(Lmindustry/maps/filters/GenerateFilter$GenerateInput;FFFF)F", 4 },
	{ "noise", (intptr_t) M_mindustry_maps_filters_GenerateFilter_noise_float_float_float_float_float_float_R_float, VTABLE_mindustry_maps_filters_GenerateFilter_noise_float_float_float_float_float_float_R_float, "(FFFFFF)F", 4 },
	{ "rnoise", (intptr_t) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_float_float_R_float, VTABLE_mindustry_maps_filters_GenerateFilter_rnoise_float_float_float_float_R_float, "(FFFF)F", 4 },
	{ "rnoise", (intptr_t) M_mindustry_maps_filters_GenerateFilter_rnoise_float_float_int_float_float_float_R_float, VTABLE_mindustry_maps_filters_GenerateFilter_rnoise_float_float_int_float_float_float_R_float, "(FFIFFF)F", 4 },
	{ "chance", (intptr_t) M_mindustry_maps_filters_GenerateFilter_chance_int_int_R_float, VTABLE_mindustry_maps_filters_GenerateFilter_chance_int_int_R_float, "(II)F", 4 },
	{ "copy", (intptr_t) M_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter, VTABLE_mindustry_maps_filters_GenerateFilter_copy_R_mindustry_maps_filters_GenerateFilter, "()Lmindustry/maps/filters/GenerateFilter;", 1 },
};

Class class_mindustry_maps_filters_GenerateFilter{
		.nativeName = (intptr_t) "mindustry/maps/filters/GenerateFilter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_filters_GenerateFilter),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_GenerateFilter,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_GenerateFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_GenerateFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 29,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_GenerateFilter = registerClass(&class_mindustry_maps_filters_GenerateFilter);

}
