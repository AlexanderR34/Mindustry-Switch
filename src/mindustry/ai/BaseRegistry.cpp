#include "mindustry/ai/BaseRegistry.h"
#include "arc/math/geom/Vec2.h"
#include "arc/func/Prov.h"
#include "mindustry/world/Block.h"
#include "mindustry/ai/BaseRegistry_BasePart.h"
#include "mindustry/ai/BaseRegistry_invoke_arc_func_Boolf_1.h"
#include "arc/files/Fi.h"
#include "java/lang/String.h"
#include "mindustry/ai/BaseRegistry_invoke_arc_func_Cons2_1.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/game/Schematic.h"
#include "arc/util/Tmp.h"
#include "mindustry/world/blocks/production/Pump.h"
#include "arc/struct/Seq.h"
#include "java/io/IOException.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "java/lang/Throwable.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "mindustry/world/blocks/production/Drill.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/world/blocks/sandbox/LiquidSource.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/world/blocks/environment/OreBlock.h"
#include "arc/Files.h"
#include "mindustry/ai/BaseRegistry_invoke_arc_func_Floatf_2.h"
#include "mindustry/ai/BaseRegistry_invoke_arc_func_Floatf_3.h"
#include "mindustry/type/Item.h"
#include "mindustry/ai/BaseRegistry_invoke_arc_func_Prov_2.h"
#include "arc/func/Cons2.h"
#include "mindustry/ai/BaseRegistry_invoke_arc_func_Prov_3.h"
#include "mindustry/game/Schematic_Stile.h"
#include "java/lang/Object.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/world/blocks/sandbox/ItemSource.h"
#include "mindustry/world/meta/BuildVisibility.h"
#include "mindustry/ai/BaseRegistry.h"
#include "java/lang/RuntimeException.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/Vars.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"

extern "C" {


void mark_mindustry_ai_BaseRegistry(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_BaseRegistry *) object;
	if (self->F_cores)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cores)->clazz)->markFunction)((jobject) self->F_cores, mark, depth + 1);
	if (self->F_parts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parts)->clazz)->markFunction)((jobject) self->F_parts, mark, depth + 1);
	if (self->F_reqParts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reqParts)->clazz)->markFunction)((jobject) self->F_reqParts, mark, depth + 1);
	if (self->F_ores)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ores)->clazz)->markFunction)((jobject) self->F_ores, mark, depth + 1);
	if (self->F_oreFloors)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_oreFloors)->clazz)->markFunction)((jobject) self->F_oreFloors, mark, depth + 1);
}

void clinit_mindustry_ai_BaseRegistry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ai_BaseRegistry(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseRegistry:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BaseRegistry(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[0].o))->F_cores = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[0].o))->F_parts = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[0].o))->F_reqParts = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[0].o))->F_ores = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_ai_BaseRegistry *) NULL_CHECK(sp[0].o))->F_oreFloors = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseRegistry:forResource", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(32);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_reqParts;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BaseRegistry_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_ai_BaseRegistry_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_ai_BaseRegistry_invoke_arc_func_Prov_2);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	}

	popStackFrame(ctx);
}

void M_mindustry_ai_BaseRegistry_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseRegistry:load", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	printf("[BaseRegistry] BaseRegistry::load() start...\n"); fflush(stdout);
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(37);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(38);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_reqParts;
	((func_arc_struct_ObjectMap_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_clear])(ctx, sp[0].o);
	LINE_NUMBER(41);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(42);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_environment_OreBlock)) == 0) goto label_11;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_environment_OreBlock, (frame[2].o)));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_itemDrop;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	if (((jint)((mindustry_world_blocks_environment_Floor *) NULL_CHECK((frame[3].o)))->F_wallOre) != 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_ores;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_itemDrop;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_ores;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[3].o)))->F_itemDrop;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(44);
	jint temp0 = (jint)((func_mindustry_world_Block_isFloor_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_isFloor_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_itemDrop;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_oreFloors;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_itemDrop;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_oreFloors;
	sp[1].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_itemDrop;
	sp[2].o = (jobject)((func_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_world_Block_asFloor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_14:;
	LINE_NUMBER(47);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(49);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"basepartnames"_j))));
	sp[0].o = (jobject)((func_arc_files_Fi_readString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_readString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\n"_j))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(51);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_17:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_18;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(53);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"baseparts/\u0001"_j.string, 1, (frame[5].o));
	sp[0].o = (jobject)((func_arc_Files_internal_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_internal_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_read_arc_files_Fi_R_mindustry_game_Schematic(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(55);
	clinit_mindustry_ai_BaseRegistry$BasePart(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_BaseRegistry$BasePart);
	init_mindustry_ai_BaseRegistry$BasePart_mindustry_game_Schematic(ctx, sp[0].o, (frame[6].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(56);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[0].o);
	LINE_NUMBER(57);
	frame[8].i = (jint(0));
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[6].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	}
label_23:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[9].o)))(ctx, (frame[9].o));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[9].o)))(ctx, (frame[9].o));
	frame[10].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_26;
	}
	{
	LINE_NUMBER(62);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK(sp[0].o))->F_core = (jref) sp[1].o;
	}
label_26:;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_sandbox_ItemSource)) == 0) goto label_28;
	}
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_config;
	frame[11].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	LINE_NUMBER(68);
	if ((frame[11].o) == nullptr) goto label_28;
	}
	{
	((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[7].o)))->F_required = (jref) (frame[11].o);
	}
label_28:;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_sandbox_LiquidSource)) == 0) goto label_31;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_config;
	frame[11].o = (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	LINE_NUMBER(74);
	if ((frame[11].o) == nullptr) goto label_31;
	}
	{
	((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[7].o)))->F_required = (jref) (frame[11].o);
	}
label_31:;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_production_Drill)) != 0) goto label_34;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_production_Pump)) == 0) goto label_35;
	}
label_34:;
	{
	LINE_NUMBER(79);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp0 = jfloat((((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_x) * (8)));
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	jfloat temp1 = temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset);
	jfloat temp2 = jfloat((((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_y) * (8)));
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[10].o)))->F_block;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_add_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, temp1, (temp2 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)));
	LINE_NUMBER(80);
	INST_IINC(8, 1);
	}
label_35:;
	LINE_NUMBER(82);
	goto label_23;
label_24:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[6].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BaseRegistry_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_ai_BaseRegistry_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_ai_BaseRegistry_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(85);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[6].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BaseRegistry_invoke_arc_func_Floatf_2(ctx);
		auto proxy = (mindustry_ai_BaseRegistry_invoke_arc_func_Floatf_2 *) gcAlloc(ctx, &class_mindustry_ai_BaseRegistry_invoke_arc_func_Floatf_2);
		sp[2].o = (jobject) proxy;
	}
	jfloat temp0 = (jfloat)((func_arc_struct_Seq_sumf_arc_func_Floatf_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_sumf_arc_func_Floatf_R_float])(ctx, sp[1].o, sp[2].o);
	((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK(sp[0].o))->F_tier = temp0;
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[7].o)))->F_core;
	if (sp[0].o == nullptr) goto label_39;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_cores;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[7].o));
	goto label_41;
	}
label_39:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[7].o)))->F_required;
	if (sp[0].o != nullptr) goto label_41;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[7].o));
	}
label_41:;
	{
	LINE_NUMBER(93);
	if ((frame[8].i) <= 0) goto label_43;
	}
	{
	LINE_NUMBER(94);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat(1)) / (jfloat((frame[8].i)))));
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_scl_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat(0.125f)));
	LINE_NUMBER(95);
	sp[0].o = frame[7].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK(sp[0].o))->F_centerX = (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x)));
	LINE_NUMBER(96);
	sp[0].o = frame[7].o;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK(sp[0].o))->F_centerY = (jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y)));
	goto label_47;
	}
label_43:;
	{
	LINE_NUMBER(98);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[7].o)))->F_schematic;
	((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK(sp[0].o))->F_centerX = (((jint)((mindustry_game_Schematic *) NULL_CHECK(sp[1].o))->F_width) / (jint(2)));
	LINE_NUMBER(99);
	sp[0].o = frame[7].o;
	sp[1].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[7].o)))->F_schematic;
	((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK(sp[0].o))->F_centerY = (((jint)((mindustry_game_Schematic *) NULL_CHECK(sp[1].o))->F_height) / (jint(2)));
	}
label_47:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[7].o)))->F_required;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[7].o)))->F_core;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_reqParts;
	sp[1].o = (jobject)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[7].o)))->F_required;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BaseRegistry_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_ai_BaseRegistry_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_ai_BaseRegistry_invoke_arc_func_Prov_3);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[7].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(108);
	goto label_50;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(106);
	frame[6].o = sp[0].o;
	LINE_NUMBER(107);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_50:;
	{
	LINE_NUMBER(51);
	INST_IINC(4, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_cores;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BaseRegistry_invoke_arc_func_Floatf_3(ctx);
		auto proxy = (mindustry_ai_BaseRegistry_invoke_arc_func_Floatf_3 *) gcAlloc(ctx, &class_mindustry_ai_BaseRegistry_invoke_arc_func_Floatf_3);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(112);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_parts;
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_ai_BaseRegistry *) NULL_CHECK((frame[0].o)))->F_reqParts;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_BaseRegistry_invoke_arc_func_Cons2_1(ctx);
		auto proxy = (mindustry_ai_BaseRegistry_invoke_arc_func_Cons2_1 *) gcAlloc(ctx, &class_mindustry_ai_BaseRegistry_invoke_arc_func_Cons2_1);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	printf("[BaseRegistry] BaseRegistry::load() completed successfully!\n"); fflush(stdout);
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_BaseRegistry_lambda$load$3_mindustry_ctype_Content_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseRegistry:lambda$load$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BaseRegistry(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ai_BaseRegistry_lambda$load$2_mindustry_ai_BaseRegistry$BasePart_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseRegistry:lambda$load$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BaseRegistry(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(111);
	popStackFrame(ctx);
	return ((jfloat)((mindustry_ai_BaseRegistry$BasePart *) NULL_CHECK((frame[0].o)))->F_tier);
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_ai_BaseRegistry_lambda$load$1_mindustry_game_Schematic$Stile_R_float(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseRegistry:lambda$load$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BaseRegistry(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp0 = (jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildTime;
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_pow_float_float_R_float(ctx, (temp0 / ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildCostMultiplier)), (jfloat(1.4f)));
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ai_BaseRegistry_lambda$load$0_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/BaseRegistry:lambda$load$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_BaseRegistry(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_sandboxOnly;
	if (sp[0].o != sp[1].o) goto label_1;
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

void *vtable_mindustry_ai_BaseRegistry[] {
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
	(void *) M_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq,
	(void *) M_mindustry_ai_BaseRegistry_load,
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
	{ "forResource", "(Lmindustry/ctype/Content;)Larc/struct/Seq;" },
	{ "load", "()V" },
};

static jclass innerClasses[] {
	&class_mindustry_ai_BaseRegistry$BasePart,
};

static FieldMetadata fields[] {
	{ "cores", &class_arc_struct_Seq, offsetof(mindustry_ai_BaseRegistry, F_cores), "Larc/struct/Seq;", 1 },
	{ "parts", &class_arc_struct_Seq, offsetof(mindustry_ai_BaseRegistry, F_parts), "Larc/struct/Seq;", 1 },
	{ "reqParts", &class_arc_struct_ObjectMap, offsetof(mindustry_ai_BaseRegistry, F_reqParts), "Larc/struct/ObjectMap;", 1 },
	{ "ores", &class_arc_struct_ObjectMap, offsetof(mindustry_ai_BaseRegistry, F_ores), "Larc/struct/ObjectMap;", 1 },
	{ "oreFloors", &class_arc_struct_ObjectMap, offsetof(mindustry_ai_BaseRegistry, F_oreFloors), "Larc/struct/ObjectMap;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_BaseRegistry, 0, "()V", 1 },
	{ "forResource", (intptr_t) M_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq, VTABLE_mindustry_ai_BaseRegistry_forResource_mindustry_ctype_Content_R_arc_struct_Seq, "(Lmindustry/ctype/Content;)Larc/struct/Seq;", 1 },
	{ "load", (intptr_t) M_mindustry_ai_BaseRegistry_load, VTABLE_mindustry_ai_BaseRegistry_load, "()V", 1 },
	{ "lambda$load$3", (intptr_t) SM_mindustry_ai_BaseRegistry_lambda$load$3_mindustry_ctype_Content_arc_struct_Seq, 0, "(Lmindustry/ctype/Content;Larc/struct/Seq;)V", 4106 },
	{ "lambda$load$2", (intptr_t) SM_mindustry_ai_BaseRegistry_lambda$load$2_mindustry_ai_BaseRegistry$BasePart_R_float, 0, "(Lmindustry/ai/BaseRegistry$BasePart;)F", 4106 },
	{ "lambda$load$1", (intptr_t) SM_mindustry_ai_BaseRegistry_lambda$load$1_mindustry_game_Schematic$Stile_R_float, 0, "(Lmindustry/game/Schematic$Stile;)F", 4106 },
	{ "lambda$load$0", (intptr_t) SM_mindustry_ai_BaseRegistry_lambda$load$0_mindustry_game_Schematic$Stile_R_boolean, 0, "(Lmindustry/game/Schematic$Stile;)Z", 4106 },
};

Class class_mindustry_ai_BaseRegistry{
		.nativeName = (intptr_t) "mindustry/ai/BaseRegistry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_BaseRegistry),
		.classVtable = (intptr_t) vtable_mindustry_ai_BaseRegistry,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_BaseRegistry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_BaseRegistry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_BaseRegistry = registerClass(&class_mindustry_ai_BaseRegistry);

}
