#include "mindustry/mod/ContentParser_1.h"
#include "arc/math/geom/Mat3D.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/UnitSorts.h"
#include "mindustry/game/Objectives_Research.h"
#include "mindustry/content/Fx.h"
#include "arc/util/serialization/Json.h"
#include "mindustry/entities/effect/ParticleEffect.h"
#include "arc/func/Boolf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Sounds.h"
#include "arc/math/Interp.h"
#include "mindustry/world/consumers/ConsumeLiquidBase.h"
#include "mindustry/mod/ContentParser_1_invoke_arc_func_Boolf_1.h"
#include "java/lang/Object.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/meta/BuildVisibility.h"
#include "mindustry/entities/bullet/MassDriverBolt.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "mindustry/ctype/Content_ModContentInfo.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_58.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_59.h"
#include "mindustry/graphics/CacheLayer.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_56.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_57.h"
#include "java/lang/Iterable.h"
#include "mindustry/game/Objectives_Objective.h"
#include "mindustry/entities/bullet/MultiBulletType.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_61.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_60.h"
#include "mindustry/world/draw/DrawBlock.h"
#include "arc/audio/RandomSound.h"
#include "arc/scene/ui/layout/Scl.h"
#include "mindustry/maps/planet/AsteroidGenerator.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_47.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/ai/UnitCommand.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_48.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_45.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_46.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_49.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_50.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_51.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_54.h"
#include "arc/audio/Sound.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_55.h"
#include "mindustry/world/draw/DrawDefault.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_52.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_53.h"
#include "mindustry/entities/pattern/ShootPattern.h"
#include "mindustry/Vars.h"
#include "mindustry/content/Bullets.h"
#include "mindustry/world/meta/Attribute.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_36.h"
#include "mindustry/gen/Musics.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_37.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_34.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_35.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_38.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_39.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_40.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_43.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_44.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_41.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_42.h"
#include "mindustry/mod/ContentParser_1.h"
#include "mindustry/ctype/MappableContent.h"
#include "arc/graphics/Blending.h"
#include "mindustry/ai/UnitStance.h"
#include "mindustry/world/draw/DrawMulti.h"
#include "arc/util/Structs.h"
#include "arc/util/serialization/JsonValue_JsonIterator.h"
#include "arc/assets/AssetManager.h"
#include "mindustry/mod/ContentParser.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_32.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_33.h"
#include "arc/audio/Music.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/mod/ContentParser_1_invoke_mindustry_mod_ContentParser_FieldParser_31.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/entities/part/RegionPart.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "mindustry/core/FileTree.h"
#include "mindustry/entities/Units_Sortf.h"
#include "arc/files/Fi.h"
#include "arc/math/geom/Vec3.h"
#include "java/lang/String.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/entities/abilities/Ability.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "mindustry/gen/Icon.h"
#include "mindustry/content/Loadouts.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/entities/part/DrawPart.h"
#include "arc/util/Strings.h"
#include "mindustry/entities/bullet/BasicBulletType.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/game/Objectives_SectorComplete.h"
#include "mindustry/game/Team.h"
#include "java/lang/Class.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/entities/effect/MultiEffect.h"

extern "C" {


void mark_mindustry_mod_ContentParser$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_struct_ObjectMap(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_mod_ContentParser$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_mod_ContentParser$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_struct_ObjectMap(ctx);
}

void init_mindustry_mod_ContentParser$1_mindustry_mod_ContentParser(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_struct_ObjectMap(ctx, (frame[0].o));
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_entities_Effect);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_31(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_31 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_31);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_entities_Units$Sortf);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_32(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_32 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_32);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_math_Interp);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_33(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_33 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_33);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_graphics_Blending);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_34(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_34 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_34);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_graphics_CacheLayer);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_35(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_35 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_35);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_world_meta_Attribute);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_36(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_36 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_36);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_world_blocks_Attributes);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_37(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_37 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_37);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_world_meta_BuildVisibility);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_38(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_38 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_38);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(106);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_game_Schematic);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_39(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_39 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_39);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_graphics_g2d_TextureRegion);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_40(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_40 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_40);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_graphics_Color);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_41(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_41 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_41);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_type_StatusEffect);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_42);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(155);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_ai_UnitCommand);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_43(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_43 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_43);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(167);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_ai_UnitStance);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_44(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_44 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_44);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(179);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_entities_bullet_BulletType);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_45(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_45 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_45);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_entities_bullet_MassDriverBolt);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_46(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_46 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_46);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(198);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_world_draw_DrawBlock);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_47(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_47 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_47);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_entities_pattern_ShootPattern);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_48(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_48 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_48);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_entities_part_DrawPart);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_49(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_49 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_49);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(227);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_entities_part_DrawPart$PartProgress);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_50(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_50 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_50);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(270);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_maps_generators_PlanetGenerator);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_51(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_51 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_51);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(277);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_math_geom_Mat3D);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_52(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_52 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_52);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(306);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_math_geom_Vec3);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_53(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_53 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_53);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(310);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_audio_Sound);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_54(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_54 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_54);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(327);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_arc_audio_Music);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_55(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_55 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_55);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(343);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_game_Objectives$Objective);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_56(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_56 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_56);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(355);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_entities_abilities_Ability);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_57(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_57 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_57);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(362);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_type_Weapon);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_58(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_58 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_58);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(372);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_world_consumers_Consume);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_59(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_59 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_59);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(379);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_world_consumers_ConsumeLiquidBase);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_60(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_60 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_60);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(386);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) &class_mindustry_game_Team);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_61(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_61 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_mindustry_mod_ContentParser$FieldParser_61);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser$1_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_ContentParser$1_lambda$new$30_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$30", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser$1(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(387);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(388);
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_baseTeams;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser$1_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_mod_ContentParser$1_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser$1_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_Structs_find_Array1_java_lang_Object_arc_func_Boolf_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Team, sp[0].o));
	LINE_NUMBER(389);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown team: \u0001"_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_1:;
	{
	LINE_NUMBER(391);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNumber_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNumber_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(392);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, (frame[1].o));
	clinit_mindustry_game_Team(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Team_all;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, (frame[1].o));
	if (temp0 >= 0) goto label_8;
	}
label_7:;
	{
	LINE_NUMBER(393);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown team: \u0001"_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(395);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_asInt_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asInt_R_int])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_mindustry_game_Team_get_int_R_mindustry_game_Team(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(397);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown team: \u0001. Team must either be a string or a number."_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_ContentParser$1_lambda$new$31_arc_util_serialization_JsonValue_mindustry_game_Team_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$31", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser$1(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$29_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$29", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_mindustry_world_consumers_ConsumeLiquidBase)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(381);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	LINE_NUMBER(382);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_consumers_ConsumeLiquidBase, sp[0].o));
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[4].o), (frame[2].o));
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$28_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$28", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_mindustry_world_consumers_Consume)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(374);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	LINE_NUMBER(375);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[0].o));
	LINE_NUMBER(376);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[4].o), (frame[2].o));
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$27_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$27", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_mindustry_type_Weapon)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	LINE_NUMBER(365);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Weapon, sp[0].o));
	LINE_NUMBER(366);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[4].o), (frame[2].o));
	LINE_NUMBER(367);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_currentMod;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(368);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[1].o))->F_currentMod;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[1].o))->F_name;
	sp[2].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[4].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, sp[1].o, sp[2].o);
	((mindustry_type_Weapon *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$26_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$26", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_R_java_lang_Class])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(357);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	LINE_NUMBER(358);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_abilities_Ability, sp[0].o));
	LINE_NUMBER(359);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[4].o), (frame[2].o));
	LINE_NUMBER(360);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$25_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$25", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(344);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(345);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locateAny_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locateAny_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(346);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown objective content: \u0001"_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(347);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_mindustry_game_Objectives$SectorComplete)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(350);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	LINE_NUMBER(351);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_game_Objectives$Objective, sp[0].o));
	LINE_NUMBER(352);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[4].o), (frame[2].o));
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$24_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$24", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(328);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_fieldOpt_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_fieldOpt_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_gen_Musics)), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(330);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_2;
	}
	{
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(333);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.ogg"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_audio_Music)));
	frame[3].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(334);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.mp3"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_audio_Music)));
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(335);
	if ((frame[3].o) != nullptr) goto label_5;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_audio_Music)));
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_allowAssetLoading) != 0) goto label_6;
	}
	INST_ALOAD(3);
	if ((--sp)->o != nullptr) goto label_6;
	{
	LINE_NUMBER(338);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Music not found: @"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	((func_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(339);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(341);
	if ((frame[3].o) == nullptr) goto label_9;
	}
	INST_ALOAD(3);
	goto label_10;
label_9:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tree;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_core_FileTree_loadMusic_java_lang_String_R_arc_audio_Music) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_FileTree_loadMusic_java_lang_String_R_arc_audio_Music])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_10:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$23_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$23", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(311);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_audio_RandomSound(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_RandomSound);
	sp[1].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[1].o))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) getArrayClass(&class_arc_audio_Sound, 1))), (frame[2].o));
	init_arc_audio_RandomSound_Array1_arc_audio_Sound(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_arc_audio_Sound, 1), sp[1].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(313);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_2;
	}
	clinit_mindustry_gen_Sounds(ctx);
	(sp++)->o = SF_mindustry_gen_Sounds_none;
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(315);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_fieldOpt_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_fieldOpt_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_gen_Sounds)), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(317);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.ogg"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_audio_Sound)));
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(318);
	if ((frame[3].o) != nullptr) goto label_5;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.mp3"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_audio_Sound)));
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(319);
	if ((frame[3].o) != nullptr) goto label_6;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_getOrNull_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_arc_audio_Sound)));
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_allowAssetLoading) != 0) goto label_7;
	}
	INST_ALOAD(3);
	if ((--sp)->o != nullptr) goto label_7;
	{
	LINE_NUMBER(322);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Sound not found: @"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	((func_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(323);
	clinit_mindustry_gen_Sounds(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Sounds_none;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(325);
	if ((frame[3].o) == nullptr) goto label_10;
	}
	INST_ALOAD(3);
	goto label_11;
label_10:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tree;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_core_FileTree_loadSound_java_lang_String_R_arc_audio_Sound) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_FileTree_loadSound_java_lang_String_R_arc_audio_Sound])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_11:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_ContentParser$1_lambda$new$22_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$22", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser$1(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(307);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asFloatArray_R_Array1_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloatArray_R_Array1_float])(ctx, (frame[1].o));
	init_arc_math_geom_Vec3_Array1_float(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(308);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"x"_j))), (jfloat(0)));
	jfloat temp1 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"y"_j))), (jfloat(0)));
	jfloat temp2 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"z"_j))), (jfloat(0)));
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[0].o, temp0, temp1, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$21_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$21", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(278);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(281);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"x"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"y"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"z"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(282);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[0].o);
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"x"_j))), (jfloat(0)));
	jfloat temp1 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"y"_j))), (jfloat(0)));
	jfloat temp2 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"z"_j))), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_translate_float_float_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_translate_float_float_float_R_arc_math_geom_Mat3D])(ctx, sp[0].o, temp0, temp1, temp2);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(286);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	if (((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_size) != (jint(3))) goto label_4;
	}
	{
	LINE_NUMBER(287);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[0].o);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_asFloatArray_R_Array1_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloatArray_R_Array1_float])(ctx, (frame[2].o));
	init_arc_math_geom_Vec3_Array1_float(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_setToTranslation_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(290);
	clinit_arc_math_geom_Mat3D(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Mat3D);
	init_arc_math_geom_Mat3D(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(293);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, sp[0].o));
	LINE_NUMBER(294);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[5].o)))->F_name;
	frame[6].o = sp[0].o;
	frame[7].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[6].o));
	switch(temp0) {
		case -925180581: goto label_12;
		case 120: goto label_13;
		case 121: goto label_14;
		case 122: goto label_15;
		case 108484: goto label_16;
		case 113111: goto label_17;
		case 113692: goto label_18;
		case 109250890: goto label_19;
		case 110621352: goto label_20;
		case 653829668: goto label_21;
		case 1052832078: goto label_22;
		default: goto label_23;
	}
	}
label_22:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"translate"_j))));
	if (temp0 == 0) goto label_23;
	}
	{
	frame[7].i = (jint(0));
	goto label_23;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"trans"_j))));
	if (temp0 == 0) goto label_23;
	}
	{
	frame[7].i = (jint(1));
	goto label_23;
	}
label_19:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"scale"_j))));
	if (temp0 == 0) goto label_23;
	}
	{
	frame[7].i = (jint(2));
	goto label_23;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"scl"_j))));
	if (temp0 == 0) goto label_23;
	}
	{
	frame[7].i = (jint(3));
	goto label_23;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"rotate"_j))));
	if (temp0 == 0) goto label_23;
	}
	{
	frame[7].i = (jint(4));
	goto label_23;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"rot"_j))));
	if (temp0 == 0) goto label_23;
	}
	{
	frame[7].i = (jint(5));
	goto label_23;
	}
label_21:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"multiply"_j))));
	if (temp0 == 0) goto label_23;
	}
	{
	frame[7].i = (6);
	goto label_23;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"mul"_j))));
	if (temp0 == 0) goto label_23;
	}
	{
	frame[7].i = (7);
	goto label_23;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"x"_j))));
	if (temp0 == 0) goto label_23;
	}
	{
	frame[7].i = (8);
	goto label_23;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"y"_j))));
	if (temp0 == 0) goto label_23;
	}
	{
	frame[7].i = (9);
	goto label_23;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"z"_j))));
	if (temp0 == 0) goto label_23;
	}
	INST_BIPUSH(10);
	INST_ISTORE(7);
label_23:;
	INST_ILOAD(7);
	switch((--sp)->i) {
		case 0: goto label_24;
		case 1: goto label_24;
		case 2: goto label_25;
		case 3: goto label_25;
		case 4: goto label_26;
		case 5: goto label_26;
		case 6: goto label_27;
		case 7: goto label_27;
		case 8: goto label_28;
		case 9: goto label_28;
		case 10: goto label_28;
		default: goto label_29;
	}
label_24:;
	{
	LINE_NUMBER(295);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[1].o))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_math_geom_Vec3)), (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_translate_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_translate_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[0].o, (checkCast(ctx, &class_arc_math_geom_Vec3, sp[1].o)));
	goto label_30;
	}
label_25:;
	{
	LINE_NUMBER(296);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[1].o))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_math_geom_Vec3)), (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_scale_arc_math_geom_Vec3_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_scale_arc_math_geom_Vec3_R_arc_math_geom_Mat3D])(ctx, sp[0].o, (checkCast(ctx, &class_arc_math_geom_Vec3, sp[1].o)));
	goto label_30;
	}
label_26:;
	{
	LINE_NUMBER(297);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[1].o))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_math_geom_Vec3)), (frame[2].o));
	sp[1].o = checkCast(ctx, &class_arc_math_geom_Vec3, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"degrees"_j))), (jfloat(0)));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_rotate_arc_math_geom_Vec3_float_R_arc_math_geom_Mat3D])(ctx, sp[0].o, sp[1].o, temp0);
	goto label_30;
	}
label_27:;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[1].o))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_arc_math_geom_Mat3D)), (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Mat3D_mul_arc_math_geom_Mat3D_R_arc_math_geom_Mat3D])(ctx, sp[0].o, (checkCast(ctx, &class_arc_math_geom_Mat3D, sp[1].o)));
	goto label_30;
	}
label_28:;
	LINE_NUMBER(299);
	goto label_30;
label_29:;
	{
	LINE_NUMBER(300);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[5].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown matrix transformation: '\u0001'"_j.string, 1, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_30:;
	LINE_NUMBER(302);
	goto label_7;
label_8:;
	{
	LINE_NUMBER(304);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$20_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$20", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(271);
	clinit_mindustry_maps_planet_AsteroidGenerator(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_maps_planet_AsteroidGenerator);
	init_mindustry_maps_planet_AsteroidGenerator(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(272);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[3].o), (frame[2].o));
	}
label_2:;
	{
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$19_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$19", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(229);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = ((jobject) &class_mindustry_entities_part_DrawPart$PartProgress);
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_field_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_field_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(230);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNumber_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNumber_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_mindustry_entities_part_DrawPart$PartProgress_constant_float_R_mindustry_entities_part_DrawPart$PartProgress(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(232);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	if (temp0 != 0) goto label_3;
	}
	{
	LINE_NUMBER(233);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PartProgress object need a 'type' string field. Check the PartProgress class for a list of constants."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = ((jobject) &class_mindustry_entities_part_DrawPart$PartProgress);
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_field_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_field_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, sp[0].o));
	LINE_NUMBER(239);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"operation"_j))));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"operation"_j))));
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	LINE_NUMBER(240);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"op"_j))));
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"op"_j))));
	sp += 1;
	goto label_7;
	}
label_8:;
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(243);
	if ((frame[4].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(245);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"operations"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"operations"_j))));
	sp += 1;
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(246);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"ops"_j))));
	if (temp0 == 0) goto label_14;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"ops"_j))));
	sp += 1;
	goto label_13;
	}
label_14:;
	INST_ACONST_NULL();
label_13:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(248);
	if ((frame[5].o) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(249);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_18;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Chained PartProgress operations must be an array."_j))));
	throwException(ctx, sp[0].o);	}
label_18:;
	{
	LINE_NUMBER(250);
	frame[6].i = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[5].o), (frame[6].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(253);
	if ((frame[7].o) != nullptr) goto label_21;
	}
	goto label_16;
label_21:;
	{
	LINE_NUMBER(254);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"operation"_j))));
	if (temp0 == 0) goto label_22;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"operation"_j))));
	sp += 1;
	goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(255);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"op"_j))));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[7].o), (((jobject) createStringLiteral(ctx, u8"op"_j))));
	sp += 1;
	goto label_23;
	}
label_24:;
	INST_ACONST_NULL();
label_23:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[8].o));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_parseProgressOp_mindustry_entities_part_DrawPart$PartProgress_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_entities_part_DrawPart$PartProgress) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_parseProgressOp_mindustry_entities_part_DrawPart$PartProgress_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_entities_part_DrawPart$PartProgress])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[7].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(258);
	INST_IINC(6, 1);
	LINE_NUMBER(259);
	goto label_19;
	}
label_16:;
	{
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_10:;
	{
	LINE_NUMBER(266);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_parseProgressOp_mindustry_entities_part_DrawPart$PartProgress_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_entities_part_DrawPart$PartProgress) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_parseProgressOp_mindustry_entities_part_DrawPart$PartProgress_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_entities_part_DrawPart$PartProgress])(ctx, sp[0].o, (frame[3].o), (frame[5].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$18_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$18", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(221);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_mindustry_entities_part_RegionPart)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	LINE_NUMBER(223);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(224);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[4].o), (frame[2].o));
	LINE_NUMBER(225);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$17_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$17", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_mindustry_entities_pattern_ShootPattern)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(215);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_pattern_ShootPattern, sp[0].o));
	LINE_NUMBER(217);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[4].o), (frame[2].o));
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$16_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$16", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(199);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_R_java_lang_Class])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(204);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(205);
	clinit_mindustry_world_draw_DrawMulti(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_draw_DrawMulti);
	sp[1].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[1].o))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) getArrayClass(&class_mindustry_world_draw_DrawBlock, 1))), (frame[2].o));
	init_mindustry_world_draw_DrawMulti_Array1_mindustry_world_draw_DrawBlock(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_mindustry_world_draw_DrawBlock, 1), sp[1].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_mindustry_world_draw_DrawDefault)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(208);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	LINE_NUMBER(209);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_draw_DrawBlock, sp[0].o));
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[4].o), (frame[2].o));
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$15_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$15", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(194);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_entities_bullet_MassDriverBolt)));
	frame[3].o = (checkCast(ctx, &class_mindustry_entities_bullet_MassDriverBolt, sp[0].o));
	LINE_NUMBER(195);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[3].o), (frame[2].o));
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$14_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$14", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_content_Bullets)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(183);
	clinit_mindustry_entities_bullet_MultiBulletType(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_bullet_MultiBulletType);
	sp[1].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[1].o))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) getArrayClass(&class_mindustry_entities_bullet_BulletType, 1))), (frame[2].o));
	init_mindustry_entities_bullet_MultiBulletType_Array1_mindustry_entities_bullet_BulletType(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_mindustry_entities_bullet_BulletType, 1), sp[1].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8"basic"_j))));
	sp[1].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001BulletType"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_boolean_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_boolean_R_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_java_lang_Object)), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(186);
	if ((frame[3].o) != (((jobject) &class_java_lang_Object))) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_mindustry_entities_bullet_BasicBulletType)));
	sp += 1;
	goto label_7;
	}
label_6:;
	INST_ALOAD(3);
label_7:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(187);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	LINE_NUMBER(188);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	LINE_NUMBER(189);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[5].o)))->F_minfo;
	sp[1].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[1].o))->F_currentMod;
	((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod = (jref) sp[1].o;
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[5].o), (frame[2].o));
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_ContentParser$1_lambda$new$13_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$13", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser$1(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(168);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(169);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unitStance_java_lang_String_R_mindustry_ai_UnitStance) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitStance_java_lang_String_R_mindustry_ai_UnitStance])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(170);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_4:;
	{
	LINE_NUMBER(173);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown unit stance name: \u0001"_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(176);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unit stances must be strings."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_ContentParser$1_lambda$new$12_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$12", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser$1(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(156);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(157);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_unitCommand_java_lang_String_R_mindustry_ai_UnitCommand) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_unitCommand_java_lang_String_R_mindustry_ai_UnitCommand])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(158);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_4:;
	{
	LINE_NUMBER(161);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown unit command name: \u0001"_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(164);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unit commands must be strings."_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$11_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$11", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_status;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, sp[0].o));
	LINE_NUMBER(147);
	if ((frame[3].o) == nullptr) goto label_4;
	}
	INST_ALOAD(3);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(148);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown status effect: '\u0001'"_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(150);
	clinit_mindustry_type_StatusEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_StatusEffect);
	sp[1].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[1].o))->F_currentMod;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp += 2;
	if (temp0 != nullptr) goto label_5;
	}
	INST_ACONST_NULL();
	goto label_6;
label_5:;
	{
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_currentMod;
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-"_j.string, 1, sp[0].o);
	sp += 1;
	}
label_6:;
	{
	sp -= 3;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, sp[1].o);
	init_mindustry_type_StatusEffect_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(151);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[3].o)))->F_minfo;
	sp[1].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[1].o))->F_currentMod;
	((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod = (jref) sp[1].o;
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[3].o), (frame[2].o));
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$10_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$10", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(136);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNumber_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNumber_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(138);
	if ((frame[3].i) == (6)) goto label_1;
	}
	{
	if ((frame[3].i) == (8)) goto label_1;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@Colors should strings, not numbers. Make sure you have quotes around the value, or they will not be parsed correctly: '@'"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[3].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[3].o))->F_currentContent;
	jobject temp1 = sp[3].o;
	sp[3].o = sp[2].o;
	sp[4].i = temp0;
	sp += 5;
	if (temp1 != nullptr) goto label_5;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_6;
label_5:;
	{
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_currentContent;
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_sourceFile;
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[\u0001]: "_j.string, 1, sp[0].o);
	sp += 1;
	}
label_6:;
	{
	sp -= 6;
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[5].o;
	ARRAY_ACCESS(jobject, sp[2].o, (jint(1))) = (frame[2].o);
	((func_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$9_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$9", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(120);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(122);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"icon-"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(123);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = frame[3].o;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"icon-"_j))))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (((jobject) createStringLiteral(ctx, u8"icon-"_j))));
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[1].o, temp0);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o));
	LINE_NUMBER(124);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(125);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[4].o));
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(1)));
	((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_scale = (temp0 / temp1);
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_scene_style_TextureRegionDrawable_getRegion_R_arc_graphics_g2d_TextureRegion])(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(129);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(130);
	jint temp0 = (jint)((func_arc_graphics_g2d_TextureRegion_found_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_found_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Sprite not found: '\u0001'"_j.string, 1, (frame[3].o));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_9:;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$8_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$8", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_fieldOpt_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_fieldOpt_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_content_Loadouts)), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(108);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(109);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_2:;
	{
	LINE_NUMBER(111);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(112);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"bXNjaA"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_readBase64_java_lang_String_R_mindustry_game_Schematic(ctx, (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(115);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_tree;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"schematics/\u0001.msch"_j.string, 1, (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_FileTree_get_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_read_arc_files_Fi_R_mindustry_game_Schematic(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$7_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$7", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_world_meta_BuildVisibility)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_ContentParser$1_lambda$new$6_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$6", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser$1(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(95);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(96);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Attribute definitions must be objects, e.g. {heat: 10}"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(98);
	clinit_mindustry_world_blocks_Attributes(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_blocks_Attributes);
	init_mindustry_world_blocks_Attributes(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, sp[0].o));
	LINE_NUMBER(100);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[4].o)))->F_name;
	jint temp0 = (jint)SM_mindustry_world_meta_Attribute_exists_java_lang_String_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[4].o)))->F_name;
	sp[0].o = (jobject)SM_mindustry_world_meta_Attribute_get_java_lang_String_R_mindustry_world_meta_Attribute(ctx, sp[0].o);
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[4].o)))->F_name;
	sp[0].o = (jobject)SM_mindustry_world_meta_Attribute_add_java_lang_String_R_mindustry_world_meta_Attribute(ctx, sp[0].o);
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(101);
	sp[0].o = frame[2].o;
	sp[1].o = frame[5].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, (frame[4].o));
	((func_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_blocks_Attributes_set_mindustry_world_meta_Attribute_float])(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(102);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_ContentParser$1_lambda$new$5_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$5", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser$1(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(91);
	jint temp0 = (jint)SM_mindustry_world_meta_Attribute_exists_java_lang_String_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)SM_mindustry_world_meta_Attribute_get_java_lang_String_R_mindustry_world_meta_Attribute(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)SM_mindustry_world_meta_Attribute_add_java_lang_String_R_mindustry_world_meta_Attribute(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$4_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$4", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_graphics_CacheLayer)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$3_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_arc_graphics_Blending)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$2_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_arc_math_Interp)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$1_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_entities_UnitSorts)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser$1_lambda$new$0_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser$1:lambda$new$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(73);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_content_Fx)), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	LINE_NUMBER(77);
	clinit_mindustry_entities_effect_MultiEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_effect_MultiEffect);
	sp[1].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK(sp[1].o))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) getArrayClass(&class_mindustry_entities_Effect, 1))), (frame[2].o));
	init_mindustry_entities_effect_MultiEffect_Array1_mindustry_entities_Effect(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_mindustry_entities_Effect, 1), sp[1].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_mindustry_entities_effect_ParticleEffect)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_entities_Effect, sp[0].o));
	LINE_NUMBER(82);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[4].o), (frame[2].o));
	LINE_NUMBER(83);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_ContentParser$1[] {
	(void *) M_arc_struct_ObjectMap_hashCode_R_int,
	(void *) M_arc_struct_ObjectMap_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_struct_ObjectMap_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_struct_ObjectMap_iterator_R_java_util_Iterator,
	(void *) M_java_lang_Iterable_forEach_java_util_function_Consumer,
	(void *) M_java_lang_Iterable_spliterator_R_java_util_Spliterator,
	(void *) M_arc_struct_ObjectMap_place_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectMap_locateKey_java_lang_Object_R_int,
	(void *) M_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_putMissing_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_putAll_Array1_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_merge_arc_struct_ObjectMap_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_each_arc_func_Cons2,
	(void *) M_arc_struct_ObjectMap_copy_R_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_set_arc_struct_ObjectMap,
	(void *) M_arc_struct_ObjectMap_putResize_java_lang_Object_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_getThrow_java_lang_Object_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_remove_java_lang_Object_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_notEmpty_R_boolean,
	(void *) M_arc_struct_ObjectMap_isEmpty_R_boolean,
	(void *) M_arc_struct_ObjectMap_shrink_int,
	(void *) M_arc_struct_ObjectMap_clear_int,
	(void *) M_arc_struct_ObjectMap_clear,
	(void *) M_arc_struct_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean,
	(void *) M_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean,
	(void *) M_arc_struct_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object,
	(void *) M_arc_struct_ObjectMap_ensureCapacity_int,
	(void *) M_arc_struct_ObjectMap_resize_int,
	(void *) M_arc_struct_ObjectMap_toString_java_lang_String_R_java_lang_String,
	(void *) M_arc_struct_ObjectMap_toString_java_lang_String_boolean_R_java_lang_String,
	(void *) M_arc_struct_ObjectMap_iterator_R_arc_struct_ObjectMap$Entries,
	(void *) M_arc_struct_ObjectMap_entries_R_arc_struct_ObjectMap$Entries,
	(void *) M_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values,
	(void *) M_arc_struct_ObjectMap_keys_R_arc_struct_ObjectMap$Keys,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$29_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$28_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$27_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$26_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$25_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$24_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$23_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$21_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$20_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$19_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$18_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$17_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$16_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$15_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$14_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$11_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$10_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$9_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$8_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$7_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$4_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$3_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$2_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$1_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser$1_lambda$new$0_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
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
	{ "iterator", "()Ljava/util/Iterator;" },
	{ "forEach", "(Ljava/util/function/Consumer;)V" },
	{ "spliterator", "()Ljava/util/Spliterator;" },
	{ "place", "(Ljava/lang/Object;)I" },
	{ "locateKey", "(Ljava/lang/Object;)I" },
	{ "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putMissing", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "putAll", "([Ljava/lang/Object;)V" },
	{ "putAll", "(Larc/struct/ObjectMap;)V" },
	{ "merge", "(Larc/struct/ObjectMap;)Larc/struct/ObjectMap;" },
	{ "each", "(Larc/func/Cons2;)V" },
	{ "copy", "()Larc/struct/ObjectMap;" },
	{ "set", "(Larc/struct/ObjectMap;)V" },
	{ "putResize", "(Ljava/lang/Object;Ljava/lang/Object;)V" },
	{ "getThrow", "(Ljava/lang/Object;Larc/func/Prov;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;Larc/func/Prov;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" },
	{ "notEmpty", "()Z" },
	{ "isEmpty", "()Z" },
	{ "shrink", "(I)V" },
	{ "clear", "(I)V" },
	{ "clear", "()V" },
	{ "containsValue", "(Ljava/lang/Object;Z)Z" },
	{ "containsKey", "(Ljava/lang/Object;)Z" },
	{ "findKey", "(Ljava/lang/Object;Z)Ljava/lang/Object;" },
	{ "ensureCapacity", "(I)V" },
	{ "resize", "(I)V" },
	{ "toString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "toString", "(Ljava/lang/String;Z)Ljava/lang/String;" },
	{ "iterator", "()Larc/struct/ObjectMap$Entries;" },
	{ "entries", "()Larc/struct/ObjectMap$Entries;" },
	{ "values", "()Larc/struct/ObjectMap$Values;" },
	{ "keys", "()Larc/struct/ObjectMap$Keys;" },
	{ "lambda$new$29", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$28", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$27", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$26", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$25", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$24", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$23", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$21", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$20", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$19", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$18", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$17", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$16", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$15", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$14", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$11", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$10", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$9", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$8", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$7", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$4", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$3", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$2", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$1", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "lambda$new$0", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_mod_ContentParser, offsetof(mindustry_mod_ContentParser$1, F_this$0), "Lmindustry/mod/ContentParser;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_ContentParser$1_mindustry_mod_ContentParser, 0, "(Lmindustry/mod/ContentParser;)V", 0 },
	{ "lambda$new$30", (intptr_t) SM_mindustry_mod_ContentParser$1_lambda$new$30_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, 0, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4106 },
	{ "lambda$new$31", (intptr_t) SM_mindustry_mod_ContentParser$1_lambda$new$31_arc_util_serialization_JsonValue_mindustry_game_Team_R_boolean, 0, "(Larc/util/serialization/JsonValue;Lmindustry/game/Team;)Z", 4106 },
	{ "lambda$new$29", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$29_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$29_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$28", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$28_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$28_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$27", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$27_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$27_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$26", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$26_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$26_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$25", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$25_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$25_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$24", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$24_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$24_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$23", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$23_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$23_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$22", (intptr_t) SM_mindustry_mod_ContentParser$1_lambda$new$22_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, 0, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4106 },
	{ "lambda$new$21", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$21_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$21_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$20", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$20_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$20_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$19", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$19_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$19_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$18", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$18_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$18_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$17", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$17_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$17_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$16", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$16_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$16_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$15", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$15_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$15_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$14", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$14_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$14_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$13", (intptr_t) SM_mindustry_mod_ContentParser$1_lambda$new$13_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, 0, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4106 },
	{ "lambda$new$12", (intptr_t) SM_mindustry_mod_ContentParser$1_lambda$new$12_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, 0, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4106 },
	{ "lambda$new$11", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$11_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$11_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$10", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$10_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$10_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$9", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$9_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$9_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$8", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$8_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$8_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$7", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$7_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$7_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$6", (intptr_t) SM_mindustry_mod_ContentParser$1_lambda$new$6_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, 0, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4106 },
	{ "lambda$new$5", (intptr_t) SM_mindustry_mod_ContentParser$1_lambda$new$5_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, 0, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4106 },
	{ "lambda$new$4", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$4_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$4_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$3_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$3_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$2_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$2_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$1_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$1_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_mod_ContentParser$1_lambda$new$0_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser$1_lambda$new$0_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 4098 },
};

Class class_mindustry_mod_ContentParser$1{
		.nativeName = (intptr_t) "mindustry/mod/ContentParser$1",
		.parentClass = (intptr_t) &class_arc_struct_ObjectMap,
		.size = sizeof(mindustry_mod_ContentParser$1),
		.classVtable = (intptr_t) vtable_mindustry_mod_ContentParser$1,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_ContentParser$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_ContentParser$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 33,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 71,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_mod_ContentParser$1 = registerClass(&class_mindustry_mod_ContentParser$1);

}

