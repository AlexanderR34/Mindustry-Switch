#include "mindustry/mod/ContentParser.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Func_2.h"
#include "mindustry/mod/ContentParser_ParseListener.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Func_3.h"
#include "arc/func/Prov.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/IllegalAccessException.h"
#include "mindustry/mod/ContentParser_invoke_mindustry_mod_ContentParser_TypeParser_9.h"
#include "arc/math/geom/Mat3D.h"
#include "mindustry/graphics/g3d/SunMesh.h"
#include "arc/util/serialization/Json_FieldMetadata.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "mindustry/mod/ClassMap.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/TechTree.h"
#include "java/lang/Runnable.h"
#include "mindustry/mod/Mods.h"
#include "arc/util/serialization/Json.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/world/consumers/ConsumeCoolant.h"
#include "arc/func/Boolf.h"
#include "arc/Core.h"
#include "java/lang/reflect/Modifier.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "arc/math/Interp.h"
#include "mindustry/graphics/g3d/GenericMesh.h"
#include "arc/util/Nullable.h"
#include "arc/struct/ObjectMap_Values.h"
#include "mindustry/entities/units/UnitController.h"
#include "mindustry/world/consumers/ConsumeLiquidFlammable.h"
#include "java/lang/Object.h"
#include "mindustry/content/Planets.h"
#include "mindustry/world/consumers/Consume.h"
#include "mindustry/world/meta/BuildVisibility.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/ctype/Content_ModContentInfo.h"
#include "mindustry/mod/ContentParser_invoke_mindustry_mod_ContentParser_TypeParser_17.h"
#include "arc/struct/OrderedMap.h"
#include "mindustry/graphics/g3d/MultiMesh.h"
#include "mindustry/game/Rules.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_15.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Boolf_5.h"
#include "mindustry/world/consumers/ConsumeItemList.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_19.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Boolf_7.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Boolf_6.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_18.h"
#include "mindustry/game/Objectives_Objective.h"
#include "mindustry/mod/ContentParser_TypeParser.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_17.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Boolf_9.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_16.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Boolf_8.h"
#include "mindustry/mod/ContentParser_UnitReq.h"
#include "mindustry/world/consumers/ConsumePower.h"
#include "arc/func/Cons.h"
#include "mindustry/graphics/g3d/ShaderSphereMesh.h"
#include "mindustry/game/Waves.h"
#include "java/lang/NullPointerException.h"
#include "arc/struct/ObjectSet_ObjectSetIterator.h"
#include "arc/util/serialization/Jval_JsonParseException.h"
#include "mindustry/graphics/g3d/HexSkyMesh.h"
#include "mindustry/entities/units/StatusEntry.h"
#include "mindustry/world/consumers/ConsumeItemFlammable.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_22.h"
#include "java/lang/Number.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_21.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_20.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_26.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_25.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_24.h"
#include "mindustry/io/JsonIO.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_23.h"
#include "mindustry/type/Sector.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_29.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_28.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Prov_27.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/Vars.h"
#include "arc/struct/ObjectIntMap.h"
#include "java/lang/ClassLoader.h"
#include "mindustry/world/consumers/ConsumeItemCharged.h"
#include "arc/struct/ObjectFloatMap.h"
#include "mindustry/world/consumers/ConsumeItemExplosive.h"
#include "mindustry/mod/ContentParser_invoke_mindustry_type_StatusEffect_TransitionHandler_1.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/consumers/ConsumeLiquid.h"
#include "mindustry/world/blocks/units/UnitFactory_UnitPlan.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/gl/Shader.h"
#include "mindustry/type/weather/ParticleWeather.h"
#include "mindustry/core/ContentLoader.h"
#include "arc/util/serialization/SerializationException.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/mod/ContentParser_2.h"
#include "mindustry/mod/ContentParser_1.h"
#include "mindustry/ctype/MappableContent.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "arc/func/Func.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Cons_6.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Cons_5.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/util/serialization/JsonValue_JsonIterator.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Cons_9.h"
#include "mindustry/type/Item.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Cons_8.h"
#include "mindustry/mod/ContentParser_invoke_arc_func_Cons_7.h"
#include "mindustry/game/Objectives_Produce.h"
#include "mindustry/mod/ContentParser.h"
#include "mindustry/type/TeamEntry.h"
#include "arc/util/serialization/JsonValue.h"
#include "mindustry/type/StatusEffect_TransitionHandler.h"
#include "mindustry/mod/ContentParser_invoke_mindustry_mod_ContentParser_TypeParser_13.h"
#include "mindustry/mod/ContentParser_invoke_mindustry_mod_ContentParser_TypeParser_14.h"
#include "mindustry/mod/ContentParser_invoke_mindustry_mod_ContentParser_TypeParser_15.h"
#include "mindustry/mod/ContentParser_invoke_mindustry_mod_ContentParser_TypeParser_16.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/mod/ContentParser_invoke_mindustry_mod_ContentParser_TypeParser_10.h"
#include "mindustry/mod/ContentParser_invoke_mindustry_mod_ContentParser_TypeParser_11.h"
#include "mindustry/mod/ContentParser_invoke_mindustry_mod_ContentParser_TypeParser_12.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/consumers/ConsumeItemExplode.h"
#include "arc/util/serialization/Jval_Jformat.h"
#include "mindustry/type/LiquidStack.h"
#include "mindustry/world/consumers/ConsumeLiquids.h"
#include "arc/files/Fi.h"
#include "mindustry/graphics/g3d/MatMesh.h"
#include "mindustry/world/blocks/units/Reconstructor.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "mindustry/graphics/g3d/NoiseMesh.h"
#include "mindustry/io/SaveFileReader.h"
#include "mindustry/mod/ContentParser_invoke_java_lang_Runnable_23.h"
#include "mindustry/mod/ContentParser_FieldParser.h"
#include "arc/util/serialization/Jval.h"
#include "mindustry/mod/ContentParser_invoke_java_lang_Runnable_21.h"
#include "mindustry/mod/ContentParser_invoke_java_lang_Runnable_22.h"
#include "mindustry/type/Weather.h"
#include "mindustry/mod/ContentParser_invoke_java_lang_Runnable_20.h"
#include "mindustry/type/StatusEffect.h"
#include "java/lang/CharSequence.h"
#include "mindustry/game/SpawnGroup.h"
#include "arc/util/Strings.h"
#include "mindustry/world/blocks/units/UnitFactory.h"
#include "mindustry/world/consumers/ConsumeItemRadioactive.h"
#include "mindustry/entities/part/DrawPart_PartProgress.h"
#include "mindustry/ai/types/FlyingAI.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/type/Planet.h"
#include "mindustry/io/SaveVersion.h"
#include "mindustry/mod/ContentParser_invoke_java_lang_Runnable_14.h"
#include "mindustry/mod/ContentParser_invoke_java_lang_Runnable_15.h"
#include "mindustry/mod/ContentParser_invoke_java_lang_Runnable_12.h"
#include "mindustry/mod/ContentParser_invoke_java_lang_Runnable_13.h"
#include "mindustry/ctype/ContentType.h"
#include "java/lang/Class.h"
#include "mindustry/world/consumers/ConsumeItems.h"
#include "java/util/Objects.h"
#include "mindustry/game/Team.h"
#include "mindustry/mod/ContentParser_invoke_java_lang_Runnable_18.h"
#include "mindustry/mod/ContentParser_invoke_java_lang_Runnable_19.h"
#include "mindustry/mod/ContentParser_invoke_java_lang_Runnable_16.h"
#include "mindustry/mod/ContentParser_invoke_java_lang_Runnable_17.h"

extern "C" {

jbool SF_mindustry_mod_ContentParser_ignoreUnknownFields;
jobject SF_mindustry_mod_ContentParser_typesToSearch;
jobject SF_mindustry_mod_ContentParser_implicitNullable;

void mark_mindustry_mod_ContentParser(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_mod_ContentParser_typesToSearch)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_ContentParser_typesToSearch)->clazz)->markFunction)((jobject) SF_mindustry_mod_ContentParser_typesToSearch, mark, depth + 1);
		if (SF_mindustry_mod_ContentParser_implicitNullable)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_mod_ContentParser_implicitNullable)->clazz)->markFunction)((jobject) SF_mindustry_mod_ContentParser_implicitNullable, mark, depth + 1);
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
	auto self = (mindustry_mod_ContentParser *) object;
	if (self->F_contentTypes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_contentTypes)->clazz)->markFunction)((jobject) self->F_contentTypes, mark, depth + 1);
	if (self->F_listeners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listeners)->clazz)->markFunction)((jobject) self->F_listeners, mark, depth + 1);
	if (self->F_classParsers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_classParsers)->clazz)->markFunction)((jobject) self->F_classParsers, mark, depth + 1);
	if (self->F_reads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_reads)->clazz)->markFunction)((jobject) self->F_reads, mark, depth + 1);
	if (self->F_postreads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_postreads)->clazz)->markFunction)((jobject) self->F_postreads, mark, depth + 1);
	if (self->F_toBeParsed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_toBeParsed)->clazz)->markFunction)((jobject) self->F_toBeParsed, mark, depth + 1);
	if (self->F_currentMod)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentMod)->clazz)->markFunction)((jobject) self->F_currentMod, mark, depth + 1);
	if (self->F_currentContent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentContent)->clazz)->markFunction)((jobject) self->F_currentContent, mark, depth + 1);
	if (self->F_currentFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_currentFile)->clazz)->markFunction)((jobject) self->F_currentFile, mark, depth + 1);
	if (self->F_parser)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parser)->clazz)->markFunction)((jobject) self->F_parser, mark, depth + 1);
	if (self->F_parsers)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parsers)->clazz)->markFunction)((jobject) self->F_parsers, mark, depth + 1);
}

void init_mindustry_mod_ContentParser(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(57);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_contentTypes = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_listeners = (jref) sp[1].o;
	LINE_NUMBER(65);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowClassResolution = (jint(1));
	LINE_NUMBER(67);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowAssetLoading = (jint(1));
	LINE_NUMBER(69);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching = (jint(1));
	LINE_NUMBER(71);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_ContentParser$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_ContentParser$1);
	init_mindustry_mod_ContentParser$1_mindustry_mod_ContentParser(ctx, sp[1].o, (frame[0].o));
	((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_classParsers = (jref) sp[1].o;
	LINE_NUMBER(403);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_reads = (jref) sp[1].o;
	LINE_NUMBER(404);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_postreads = (jref) sp[1].o;
	LINE_NUMBER(405);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_toBeParsed = (jref) sp[1].o;
	LINE_NUMBER(411);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_ContentParser$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_mod_ContentParser$2);
	init_mindustry_mod_ContentParser$2_mindustry_mod_ContentParser(ctx, sp[1].o, (frame[0].o));
	((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_parser = (jref) sp[1].o;
	LINE_NUMBER(577);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (18));
	jint temp0 = jint(0);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_block;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_9(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_9 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_10(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_10 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_10);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_11(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_11 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp6 = 6;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_item;
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = 7;
	sp[2].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[3].o = (jobject)SF_mindustry_ctype_ContentType_item;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Func_2(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Func_2 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Func_2);
		sp[4].o = (jobject) proxy;
	}
	LINE_NUMBER(701);
	sp[2].o = (jobject)((func_mindustry_mod_ContentParser_parser_mindustry_ctype_ContentType_arc_func_Func_R_mindustry_mod_ContentParser$TypeParser) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_mindustry_mod_ContentParser_parser_mindustry_ctype_ContentType_arc_func_Func_R_mindustry_mod_ContentParser$TypeParser])(ctx, sp[2].o, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	jint temp8 = 8;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	ARRAY_ACCESS(jobject, sp[1].o, temp8) = sp[2].o;
	jint temp9 = 9;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_12(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_12 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[1].o, temp9) = sp[2].o;
	jint temp10 = 10;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_status;
	ARRAY_ACCESS(jobject, sp[1].o, temp10) = sp[2].o;
	jint temp11 = 11;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_13(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_13 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[1].o, temp11) = sp[2].o;
	jint temp12 = 12;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_sector;
	ARRAY_ACCESS(jobject, sp[1].o, temp12) = sp[2].o;
	jint temp13 = 13;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_14(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_14 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[1].o, temp13) = sp[2].o;
	jint temp14 = 14;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	ARRAY_ACCESS(jobject, sp[1].o, temp14) = sp[2].o;
	jint temp15 = 15;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_15(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_15 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[1].o, temp15) = sp[2].o;
	jint temp16 = 16;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_team;
	ARRAY_ACCESS(jobject, sp[1].o, temp16) = sp[2].o;
	jint temp17 = 17;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_16(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_16 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_16);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	ARRAY_ACCESS(jobject, sp[1].o, temp17) = sp[2].o;
	LINE_NUMBER(577);
	sp[1].o = (jobject)SM_arc_struct_ObjectMap_of_Array1_java_lang_Object_R_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_mod_ContentParser *) NULL_CHECK(sp[0].o))->F_parsers = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_readBlockConsumers_mindustry_world_Block_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:readBlockConsumers", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(524);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_iterator_R_arc_util_serialization_JsonValue$JsonIterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, sp[0].o));
	LINE_NUMBER(525);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[4].o)))->F_name;
	frame[5].o = sp[0].o;
	frame[6].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[5].o));
	switch(temp0) {
		case -1843066290: goto label_4;
		case -1659724270: goto label_5;
		case -1424809021: goto label_6;
		case -1102567108: goto label_7;
		case -934610812: goto label_8;
		case -170995924: goto label_9;
		case -167641682: goto label_10;
		case -163731196: goto label_11;
		case 2885945: goto label_12;
		case 3242771: goto label_13;
		case 100526016: goto label_14;
		case 106858757: goto label_15;
		case 180158135: goto label_16;
		case 205145501: goto label_17;
		case 952211966: goto label_18;
		case 987486530: goto label_19;
		case 1177280081: goto label_20;
		default: goto label_21;
	}
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"remove"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (jint(0));
	goto label_21;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"item"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (jint(1));
	goto label_21;
	}
label_17:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"itemCharged"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (jint(2));
	goto label_21;
	}
label_19:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"itemFlammable"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (jint(3));
	goto label_21;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"itemRadioactive"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (jint(4));
	goto label_21;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"itemExplosive"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (jint(5));
	goto label_21;
	}
label_20:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"itemList"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (6);
	goto label_21;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"itemExplode"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (7);
	goto label_21;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"items"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (8);
	goto label_21;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"itemsBoost"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (9);
	goto label_21;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"liquidFlammable"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (10);
	goto label_21;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"liquid"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (11);
	goto label_21;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"liquids"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (12);
	goto label_21;
	}
label_18:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"coolant"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (13);
	goto label_21;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"liquidsBoost"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (14);
	goto label_21;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"power"_j))));
	if (temp0 == 0) goto label_21;
	}
	{
	frame[6].i = (15);
	goto label_21;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"powerBuffered"_j))));
	if (temp0 == 0) goto label_21;
	}
	INST_BIPUSH(16);
	INST_ISTORE(6);
label_21:;
	INST_ILOAD(6);
	switch((--sp)->i) {
		case 0: goto label_22;
		case 1: goto label_23;
		case 2: goto label_24;
		case 3: goto label_25;
		case 4: goto label_26;
		case 5: goto label_27;
		case 6: goto label_28;
		case 7: goto label_29;
		case 8: goto label_30;
		case 9: goto label_31;
		case 10: goto label_32;
		case 11: goto label_33;
		case 12: goto label_34;
		case 13: goto label_35;
		case 14: goto label_36;
		case 15: goto label_37;
		case 16: goto label_38;
		default: goto label_39;
	}
label_22:;
	{
	LINE_NUMBER(527);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_40;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(1)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[4].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp += 1;
	goto label_41;
	}
label_40:;
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_arc_util_serialization_JsonValue_asStringArray_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asStringArray_R_Array1_java_lang_String])(ctx, sp[0].o);
	sp++;
label_41:;
	{
	sp -= 1;
	frame[7].o = sp[0].o;
	LINE_NUMBER(528);
	frame[8].o = (frame[7].o);
	frame[9].i = (((jarray) nullCheck(ctx, (frame[8].o)))->length);
	frame[10].i = (jint(0));
	}
label_43:;
	{
	if ((frame[10].i) >= (frame[9].i)) goto label_44;
	}
	{
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, (frame[8].o), (frame[10].i)));
	LINE_NUMBER(529);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[11].o), (((jobject) createStringLiteral(ctx, u8"all"_j))));
	if (temp0 == 0) goto label_46;
	}
	{
	LINE_NUMBER(530);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Boolf_5);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Block_removeConsumers_arc_func_Boolf) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_removeConsumers_arc_func_Boolf])(ctx, sp[0].o, sp[1].o);
	goto label_48;
	}
label_46:;
	{
	LINE_NUMBER(532);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, (frame[11].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Consume\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[0].o, sp[1].o, (((jobject) &class_mindustry_world_consumers_Consume)));
	frame[12].o = sp[0].o;
	LINE_NUMBER(533);
	if ((frame[12].o) == (((jobject) &class_mindustry_world_consumers_Consume))) goto label_50;
	}
	{
	LINE_NUMBER(534);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Boolf_6);
		proxy->F_field0 = (jref) (frame[12].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_world_Block_removeConsumers_arc_func_Boolf) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_removeConsumers_arc_func_Boolf])(ctx, sp[0].o, sp[1].o);
	goto label_48;
	}
label_50:;
	{
	LINE_NUMBER(536);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Unknown consumer type '@' (Class: @) in consume: remove."_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[11].o);
	jint temp0 = jint(1);
	sp[3].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, (frame[11].o));
	sp[3].o = (jobject)concatStringsRecipe(ctx, u8"Consume\u0001"_j.string, 1, sp[3].o);
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	((func_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_48:;
	{
	LINE_NUMBER(528);
	INST_IINC(10, 1);
	goto label_43;
	}
label_44:;
	LINE_NUMBER(540);
	goto label_52;
label_23:;
	{
	LINE_NUMBER(541);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_item;
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[4].o));
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_find_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_find_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consumeItem_mindustry_type_Item_R_mindustry_world_consumers_ConsumeItems])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_type_Item, sp[1].o)));
	goto label_52;
	}
label_24:;
	{
	LINE_NUMBER(542);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_ConsumeItemCharged)), (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[1].o)));
	goto label_52;
	}
label_25:;
	{
	LINE_NUMBER(543);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_ConsumeItemFlammable)), (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[1].o)));
	goto label_52;
	}
label_26:;
	{
	LINE_NUMBER(544);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_ConsumeItemRadioactive)), (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[1].o)));
	goto label_52;
	}
label_27:;
	{
	LINE_NUMBER(545);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_ConsumeItemExplosive)), (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[1].o)));
	goto label_52;
	}
label_28:;
	{
	LINE_NUMBER(546);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_ConsumeItemList)), (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[1].o)));
	goto label_52;
	}
label_29:;
	{
	LINE_NUMBER(547);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_ConsumeItemExplode)), (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[1].o)));
	goto label_52;
	}
label_30:;
	{
	LINE_NUMBER(548);
	sp[0].o = frame[1].o;
	LINE_NUMBER(549);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[4].o));
	sp += 1;
	if (temp0 == 0) goto label_54;
	}
	{
	clinit_mindustry_world_consumers_ConsumeItems(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItems);
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) getArrayClass(&class_mindustry_type_ItemStack, 1))), (frame[4].o));
	init_mindustry_world_consumers_ConsumeItems_Array1_mindustry_type_ItemStack(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_mindustry_type_ItemStack, 1), sp[1].o)));
	sp += 1;
	goto label_55;
	}
label_54:;
	{
	LINE_NUMBER(550);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_56;
	}
	{
	clinit_mindustry_world_consumers_ConsumeItems(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItems);
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_ItemStack, (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[2].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[2].o, (((jobject) &class_mindustry_type_ItemStack)), (frame[4].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = (checkCast(ctx, &class_mindustry_type_ItemStack, sp[2].o));
	init_mindustry_world_consumers_ConsumeItems_Array1_mindustry_type_ItemStack(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_55;
	}
label_56:;
	{
	LINE_NUMBER(551);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_world_consumers_ConsumeItems)), (frame[4].o));
	sp[0].o = checkCast(ctx, &class_mindustry_world_consumers_ConsumeItems, sp[0].o);
	sp += 1;
	}
label_55:;
	{
	sp -= 2;
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	goto label_52;
	}
label_31:;
	{
	LINE_NUMBER(552);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[4].o));
	sp += 1;
	if (temp0 == 0) goto label_57;
	}
	{
	clinit_mindustry_world_consumers_ConsumeItems(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeItems);
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) getArrayClass(&class_mindustry_type_ItemStack, 1))), (frame[4].o));
	init_mindustry_world_consumers_ConsumeItems_Array1_mindustry_type_ItemStack(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_mindustry_type_ItemStack, 1), sp[1].o)));
	sp += 1;
	goto label_58;
	}
label_57:;
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_world_consumers_ConsumeItems)), (frame[4].o));
	sp[0].o = checkCast(ctx, &class_mindustry_world_consumers_ConsumeItems, sp[0].o);
	sp += 1;
	}
label_58:;
	{
	sp -= 2;
	LINE_NUMBER(552);
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_mindustry_world_consumers_ConsumeItems, sp[0].o);
	LINE_NUMBER(553);
	sp[0].o = (jobject)((func_mindustry_world_consumers_ConsumeItems_boost_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_consumers_ConsumeItems_boost_R_mindustry_world_consumers_Consume])(ctx, sp[0].o);
	LINE_NUMBER(552);
	goto label_52;
	}
label_32:;
	{
	LINE_NUMBER(555);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_ConsumeLiquidFlammable)), (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[1].o)));
	goto label_52;
	}
label_33:;
	{
	LINE_NUMBER(556);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_ConsumeLiquid)), (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[1].o)));
	goto label_52;
	}
label_34:;
	{
	LINE_NUMBER(557);
	sp[0].o = frame[1].o;
	LINE_NUMBER(558);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[4].o));
	sp += 1;
	if (temp0 == 0) goto label_62;
	}
	{
	clinit_mindustry_world_consumers_ConsumeLiquids(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquids);
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) getArrayClass(&class_mindustry_type_LiquidStack, 1))), (frame[4].o));
	init_mindustry_world_consumers_ConsumeLiquids_Array1_mindustry_type_LiquidStack(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_mindustry_type_LiquidStack, 1), sp[1].o)));
	sp += 1;
	goto label_63;
	}
label_62:;
	{
	LINE_NUMBER(559);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_world_consumers_ConsumeLiquids)), (frame[4].o));
	sp[0].o = checkCast(ctx, &class_mindustry_world_consumers_ConsumeLiquids, sp[0].o);
	sp += 1;
	}
label_63:;
	{
	sp -= 2;
	LINE_NUMBER(557);
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	goto label_52;
	}
label_35:;
	{
	LINE_NUMBER(560);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_ConsumeCoolant)), (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[1].o)));
	goto label_52;
	}
label_36:;
	{
	LINE_NUMBER(561);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[4].o));
	sp += 1;
	if (temp0 == 0) goto label_64;
	}
	{
	clinit_mindustry_world_consumers_ConsumeLiquids(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_consumers_ConsumeLiquids);
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) getArrayClass(&class_mindustry_type_LiquidStack, 1))), (frame[4].o));
	init_mindustry_world_consumers_ConsumeLiquids_Array1_mindustry_type_LiquidStack(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_mindustry_type_LiquidStack, 1), sp[1].o)));
	sp += 1;
	goto label_65;
	}
label_64:;
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_world_consumers_ConsumeLiquids)), (frame[4].o));
	sp[0].o = checkCast(ctx, &class_mindustry_world_consumers_ConsumeLiquids, sp[0].o);
	sp += 1;
	}
label_65:;
	{
	sp -= 2;
	LINE_NUMBER(561);
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, sp[1].o);
	sp[0].o = checkCast(ctx, &class_mindustry_world_consumers_ConsumeLiquids, sp[0].o);
	LINE_NUMBER(562);
	sp[0].o = (jobject)((func_mindustry_world_consumers_ConsumeLiquids_boost_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_consumers_ConsumeLiquids_boost_R_mindustry_world_consumers_Consume])(ctx, sp[0].o);
	LINE_NUMBER(561);
	goto label_52;
	}
label_37:;
	{
	LINE_NUMBER(564);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNumber_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isNumber_R_boolean])(ctx, (frame[4].o));
	if (temp0 == 0) goto label_68;
	}
	{
	LINE_NUMBER(565);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consumePower_float_R_mindustry_world_consumers_ConsumePower])(ctx, sp[0].o, temp0);
	goto label_52;
	}
label_68:;
	{
	LINE_NUMBER(567);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_world_consumers_ConsumePower)), (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consume_mindustry_world_consumers_Consume_R_mindustry_world_consumers_Consume])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_consumers_Consume, sp[1].o)));
	LINE_NUMBER(569);
	goto label_52;
	}
label_38:;
	{
	LINE_NUMBER(570);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_asFloat_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asFloat_R_float])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_consumePowerBuffered_float_R_mindustry_world_consumers_ConsumePower])(ctx, sp[0].o, temp0);
	goto label_52;
	}
label_39:;
	{
	LINE_NUMBER(571);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[4].o)))->F_name;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown consumption type: '\u0001' for block '\u0001'."_j.string, 2, sp[1].o, sp[2].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_52:;
	LINE_NUMBER(573);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(574);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"consumes"_j))));
	LINE_NUMBER(575);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_unitType_arc_util_serialization_JsonValue_R_arc_func_Prov(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:unitType", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(887);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_15(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_15 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_15);
		PUSH_OBJECT((jobject) proxy);
	}
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(888);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	frame[3].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[2].o));
	switch(temp0) {
		case -1271344497: goto label_2;
		case -877151214: goto label_3;
		case -786701938: goto label_4;
		case 3317797: goto label_5;
		case 3347453: goto label_6;
		case 3552490: goto label_7;
		case 94921767: goto label_8;
		case 99469628: goto label_9;
		case 104593550: goto label_10;
		case 1069449510: goto label_11;
		default: goto label_12;
	}
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"flying"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[3].i = (jint(0));
	goto label_12;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"mech"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[3].i = (jint(1));
	goto label_12;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"legs"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[3].i = (jint(2));
	goto label_12;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"naval"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[3].i = (jint(3));
	goto label_12;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"payload"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[3].i = (jint(4));
	goto label_12;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"missile"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[3].i = (jint(5));
	goto label_12;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"tank"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[3].i = (6);
	goto label_12;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"hover"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[3].i = (7);
	goto label_12;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"tether"_j))));
	if (temp0 == 0) goto label_12;
	}
	{
	frame[3].i = (8);
	goto label_12;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"crawl"_j))));
	if (temp0 == 0) goto label_12;
	}
	INST_BIPUSH(9);
	INST_ISTORE(3);
label_12:;
	INST_ILOAD(3);
	switch((--sp)->i) {
		case 0: goto label_13;
		case 1: goto label_14;
		case 2: goto label_15;
		case 3: goto label_16;
		case 4: goto label_17;
		case 5: goto label_18;
		case 6: goto label_19;
		case 7: goto label_20;
		case 8: goto label_21;
		case 9: goto label_22;
		default: goto label_23;
	}
label_13:;
	{
	LINE_NUMBER(889);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_16(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_16 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_16);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_24;
	}
label_14:;
	{
	LINE_NUMBER(890);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_17(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_17 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_17);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_24;
	}
label_15:;
	{
	LINE_NUMBER(891);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_18(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_18 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_18);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_24;
	}
label_16:;
	{
	LINE_NUMBER(892);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_19(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_19 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_19);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_24;
	}
label_17:;
	{
	LINE_NUMBER(893);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_20(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_20 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_20);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_24;
	}
label_18:;
	{
	LINE_NUMBER(894);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_21(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_21 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_21);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_24;
	}
label_19:;
	{
	LINE_NUMBER(895);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_22(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_22 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_22);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_24;
	}
label_20:;
	{
	LINE_NUMBER(896);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_23(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_23 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_23);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_24;
	}
label_21:;
	{
	LINE_NUMBER(897);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_24(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_24 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_24);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(898);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_25(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_25 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_25);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	goto label_24;
	}
label_23:;
	{
	LINE_NUMBER(899);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Invalid unit type: '\u0001'. Must be 'flying/mech/legs/naval/payload/missile/tether/crawl'."_j.string, 1, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_24:;
	LINE_NUMBER(888);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_getString_arc_util_serialization_JsonValue_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:getString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(904);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[1].o), (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(905);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String])(ctx, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(907);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"You are missing a \"\u0001\". It must be added before the file can be parsed."_j.string, 1, (frame[2].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_getType_arc_util_serialization_JsonValue_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:getType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(912);
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_getString_arc_util_serialization_JsonValue_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_getString_arc_util_serialization_JsonValue_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_find_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_Content(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:find", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(916);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(917);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod;
	sp[2].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[2].o))->F_name;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, sp[2].o, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(918);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"No \u0001 found with name '\u0001'"_j.string, 2, sp[1].o, (frame[2].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(919);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_parser_mindustry_ctype_ContentType_arc_func_Func_R_mindustry_mod_ContentParser$TypeParser(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:parser", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(923);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_mindustry_mod_ContentParser$TypeParser_17);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:readBundle", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(939);
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	if ((isInstance(ctx, sp[0].o, &class_mindustry_ctype_UnlockableContent)) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	sp[0].o = checkCast(ctx, &class_mindustry_ctype_UnlockableContent, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(941);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[1].o))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.\u0001-\u0001."_j.string, 3, sp[0].o, sp[1].o, (frame[2].o));
	sp += 1;
	goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[1].o));
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[4].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.\u0001."_j.string, 2, sp[0].o, sp[1].o);
	sp += 1;
	}
label_5:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(942);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	frame[6].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(943);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_getParent_R_arc_util_I18NBundle) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_I18NBundle_getParent_R_arc_util_I18NBundle])(ctx, (frame[6].o));
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_arc_util_I18NBundle_getParent_R_arc_util_I18NBundle) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_I18NBundle_getParent_R_arc_util_I18NBundle])(ctx, (frame[6].o));
	frame[6].o = sp[0].o;
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(945);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(946);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001name"_j.string, 1, (frame[5].o));
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(947);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap])(ctx, (frame[6].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001name"_j.string, 1, (frame[5].o));
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(948);
	if ((frame[4].o) == nullptr) goto label_11;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_localizedName = (jref) sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(950);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"name"_j))));
	}
label_9:;
	{
	LINE_NUMBER(953);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"description"_j))));
	if (temp0 == 0) goto label_14;
	}
	{
	LINE_NUMBER(954);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001description"_j.string, 1, (frame[5].o));
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_16;
	}
	{
	LINE_NUMBER(955);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_I18NBundle_getProperties_R_arc_struct_ObjectMap])(ctx, (frame[6].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001description"_j.string, 1, (frame[5].o));
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"description"_j))));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(956);
	if ((frame[4].o) == nullptr) goto label_16;
	}
	{
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"description"_j))));
	((mindustry_ctype_UnlockableContent *) NULL_CHECK(sp[0].o))->F_description = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(958);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"description"_j))));
	}
label_14:;
	LINE_NUMBER(960);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_read_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:read", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent;
	frame[2].o = sp[0].o;
	LINE_NUMBER(965);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod;
	frame[3].o = sp[0].o;
	LINE_NUMBER(966);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentFile;
	frame[4].o = sp[0].o;
	LINE_NUMBER(967);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_reads;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_java_lang_Runnable_12(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_java_lang_Runnable_12 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_java_lang_Runnable_12);
		proxy->F_field4 = (jref) (frame[1].o);
		proxy->F_field3 = (jref) (frame[2].o);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(979);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_init(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:init", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(982);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_all;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_1:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_2;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(983);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getBy_mindustry_ctype_ContentType_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(984);
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(985);
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o)))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o)));
	frame[6].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(987);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[6].o));
	if (sp[0].o == (((jobject) &class_mindustry_ctype_Content))) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[6].o));
	if (sp[0].o == (((jobject) &class_mindustry_ctype_UnlockableContent))) goto label_8;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_lang_Class_getModifiers_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getModifiers_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)SM_java_lang_reflect_Modifier_isAbstract_int_R_boolean(ctx, temp0);
	if (temp1 != 0) goto label_8;
	}
	{
	LINE_NUMBER(988);
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, (frame[6].o));
	frame[6].o = sp[0].o;
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(991);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_contentTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[6].o), (frame[4].o));
	}
label_5:;
	{
	LINE_NUMBER(982);
	INST_IINC(3, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(994);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_attempt_java_lang_Runnable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:attempt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(998);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[1].o)))(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(1002);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(999);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1001);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent;
	((func_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_java_lang_Throwable])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(1003);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_finishParsing(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:finishParsing", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1006);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_reads;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1007);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_postreads;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_reads;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1009);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_postreads;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(1010);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_toBeParsed;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(1011);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod = (jref) (jobject(nullptr));
	LINE_NUMBER(1012);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentFile = (jref) (jobject(nullptr));
	LINE_NUMBER(1013);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_parse_mindustry_mod_Mods$LoadedMod_java_lang_String_java_lang_String_arc_files_Fi_mindustry_ctype_ContentType_R_mindustry_ctype_Content(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:parse", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(1024);
	((func_mindustry_mod_ContentParser_checkInit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_checkInit])(ctx, (frame[0].o));
	LINE_NUMBER(1027);
	sp[0].o = (jobject)((func_arc_files_Fi_extension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_files_Fi_extension_R_java_lang_String])(ctx, (frame[4].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"json"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(1028);
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"#"_j))), (((jobject) createStringLiteral(ctx, u8"\\#"_j))));
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(1031);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentFile = (jref) (frame[4].o);
	LINE_NUMBER(1032);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod = (jref) (frame[1].o);
	LINE_NUMBER(1034);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = jobject(nullptr);
	sp[2].o = (jobject)SM_arc_util_serialization_Jval_read_java_lang_String_R_arc_util_serialization_Jval(ctx, (frame[3].o));
	clinit_arc_util_serialization_Jval$Jformat(ctx);
	sp[3].o = (jobject)SF_arc_util_serialization_Jval$Jformat_plain;
	sp[2].o = (jobject)((func_arc_util_serialization_Jval_toString_arc_util_serialization_Jval$Jformat_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_Jval_toString_arc_util_serialization_Jval$Jformat_R_java_lang_String])(ctx, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1035);
	if ((isInstance(ctx, (frame[6].o), &class_arc_util_serialization_JsonValue)) == 0) goto label_7;
	}
	{
	frame[7].o = (checkCast(ctx, &class_arc_util_serialization_JsonValue, (frame[6].o)));
	goto label_9;
	}
label_7:;
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Content JSON must be an object, not a single value."_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(1037);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parsers;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(1038);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[5].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"No parsers for content type '\u0001'"_j.string, 1, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(1041);
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching) == 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, (frame[0].o), (frame[5].o), (frame[2].o));
	if (sp[0].o == nullptr) goto label_12;
	}
	INST_ICONST(1);
	goto label_13;
label_12:;
	INST_ICONST(0);
label_13:;
	{
	sp -= 1;
	frame[8].i = sp[0].i;
	LINE_NUMBER(1042);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parsers;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[5].o));
	sp[0].o = checkCast(ctx, &class_mindustry_mod_ContentParser$TypeParser, sp[0].o);
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[1].o)))->F_name;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$TypeParser_parse_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content) resolveInterfaceMethod(ctx, &class_mindustry_mod_ContentParser$TypeParser, INDEX_mindustry_mod_ContentParser$TypeParser_parse_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[7].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(1043);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[9].o)))->F_minfo;
	((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_sourceFile = (jref) (frame[4].o);
	LINE_NUMBER(1044);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_toBeParsed;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[9].o));
	LINE_NUMBER(1046);
	if ((frame[8].i) != 0) goto label_18;
	}
	{
	LINE_NUMBER(1047);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[9].o)))->F_minfo;
	((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod = (jref) (frame[1].o);
	}
label_18:;
	{
	LINE_NUMBER(1050);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod = (jref) (jobject(nullptr));
	LINE_NUMBER(1051);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentFile = (jref) (jobject(nullptr));
	LINE_NUMBER(1052);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_checkInit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:checkInit", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1056);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_contentTypes;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1057);
	((func_mindustry_mod_ContentParser_init) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_init])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(1059);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:markError", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1062);
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[3].o));
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Error loading content: \u0001"_j.string, 1, sp[0].o);
	SM_arc_util_Log_err_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(1064);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_mod = (jref) (frame[2].o);
	LINE_NUMBER(1065);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_sourceFile = (jref) (frame[3].o);
	LINE_NUMBER(1066);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_makeError_java_lang_Throwable_arc_files_Fi_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_makeError_java_lang_Throwable_arc_files_Fi_R_java_lang_String])(ctx, (frame[0].o), (frame[4].o), (frame[3].o));
	((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_error = (jref) sp[1].o;
	LINE_NUMBER(1067);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_baseError = (jref) (frame[4].o);
	LINE_NUMBER(1068);
	if ((frame[2].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(1069);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[2].o)))->F_erroredContent;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	}
label_6:;
	LINE_NUMBER(1071);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:markError", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1074);
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_ctype_Content_hasErrored_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_Content_hasErrored_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1075);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	sp[2].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[2].o))->F_mod;
	sp[3].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK((frame[1].o)))->F_minfo;
	sp[3].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[3].o))->F_sourceFile;
	((func_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[2].o));
	}
label_1:;
	LINE_NUMBER(1077);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_makeError_java_lang_Throwable_arc_files_Fi_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:makeError", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1080);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1081);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[lightgray]"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"File: "_j))));
	sp[1].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[]\n\n"_j))));
	LINE_NUMBER(1083);
	sp[0].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_arc_util_serialization_Jval$JsonParseException)) == 0) goto label_3;
	}
	{
	LINE_NUMBER(1084);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[accent][[JsonParse][] "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":\n"_j))));
	sp[1].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_3:;
	{
	LINE_NUMBER(1085);
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_NullPointerException)) == 0) goto label_6;
	}
	{
	LINE_NUMBER(1086);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)SM_arc_util_Strings_neatError_java_lang_Throwable_R_java_lang_String(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(1088);
	sp[0].o = (jobject)SM_arc_util_Strings_getCauses_java_lang_Throwable_R_arc_struct_Seq(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1089);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_java_lang_Throwable, sp[0].o));
	LINE_NUMBER(1090);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"[accent][["_j))));
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Exception"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"][] "_j));
	LINE_NUMBER(1091);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1092);
	sp[1].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[6].o));
	sp += 1;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(1093);
	sp[0].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"mindustry."_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"arc."_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp += 1;
	goto label_15;
	}
label_13:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_15:;
	{
	sp -= 2;
	LINE_NUMBER(1092);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"\n"_j));
	LINE_NUMBER(1093);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1094);
	goto label_9;
	}
label_5:;
	{
	LINE_NUMBER(1096);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:locate", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1100);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1101);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	INST_ALOAD(3);
	goto label_3;
label_2:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod;
	sp += 2;
	if (sp[0].o != nullptr) goto label_4;
	}
	INST_ALOAD(2);
	goto label_5;
label_4:;
	{
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod;
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, sp[0].o, (frame[2].o));
	sp += 1;
	}
label_5:;
	POP_N(3); // Pop method args
	sp->o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_locateAny_java_lang_String_R_mindustry_ctype_MappableContent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:locateAny", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1105);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_all;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_1:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_2;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(1106);
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, (frame[0].o), (frame[5].o), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(1107);
	if ((frame[6].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(1108);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_5:;
	{
	LINE_NUMBER(1105);
	INST_IINC(4, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(1111);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_parseMeshes_mindustry_type_Planet_arc_util_serialization_JsonValue_R_Array1_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:parseMeshes", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1115);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_GenericMesh, ((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_size));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1116);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= ((jint)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_size)) goto label_3;
	}
	{
	LINE_NUMBER(1118);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_int_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (frame[4].i));
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_parseMesh_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_parseMesh_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh])(ctx, sp[1].o, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1116);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(1120);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_parseMesh_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:parseMesh", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1124);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1125);
	clinit_mindustry_graphics_g3d_MultiMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_MultiMesh);
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_parseMeshes_mindustry_type_Planet_arc_util_serialization_JsonValue_R_Array1_mindustry_graphics_g3d_GenericMesh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_parseMeshes_mindustry_type_Planet_arc_util_serialization_JsonValue_R_Array1_mindustry_graphics_g3d_GenericMesh])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	init_mindustry_graphics_g3d_MultiMesh_Array1_mindustry_graphics_g3d_GenericMesh(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(1128);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8"NoiseMesh"_j))));
	sp[0].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1130);
	frame[4].o = (frame[3].o);
	frame[5].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[4].o));
	switch(temp0) {
		case -1790109875: goto label_4;
		case -1277447161: goto label_5;
		case -918680781: goto label_6;
		case -193013191: goto label_7;
		case 796801702: goto label_8;
		default: goto label_9;
	}
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"NoiseMesh"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	frame[5].i = (jint(0));
	goto label_9;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"SunMesh"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	frame[5].i = (jint(1));
	goto label_9;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"HexSkyMesh"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	frame[5].i = (jint(2));
	goto label_9;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"MultiMesh"_j))));
	if (temp0 == 0) goto label_9;
	}
	{
	frame[5].i = (jint(3));
	goto label_9;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"MatMesh"_j))));
	if (temp0 == 0) goto label_9;
	}
	INST_ICONST(4);
	INST_ISTORE(5);
label_9:;
	INST_ILOAD(5);
	switch((--sp)->i) {
		case 0: goto label_10;
		case 1: goto label_11;
		case 2: goto label_12;
		case 3: goto label_13;
		case 4: goto label_14;
		default: goto label_15;
	}
label_10:;
	{
	LINE_NUMBER(1131);
	clinit_mindustry_graphics_g3d_NoiseMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_NoiseMesh);
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"seed"_j));
	jint temp0 = jint(0);
	LINE_NUMBER(1132);
	jint temp1 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, sp[2].o, sp[3].o, temp0);
	jint temp2 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"divisions"_j))), (jint(1)));
	jfloat temp3 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"radius"_j))), (jfloat(1)));
	sp[2].o = frame[2].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"octaves"_j));
	jint temp4 = jint(1);
	LINE_NUMBER(1133);
	jint temp5 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, sp[2].o, sp[3].o, temp4);
	jfloat temp6 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"persistence"_j))), (jfloat(0.5f)));
	jfloat temp7 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"scale"_j))), (jfloat(1)));
	jfloat temp8 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"mag"_j))), (jfloat(0.5f)));
	sp[2].o = frame[2].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"color1"_j));
	sp[4].o = frame[2].o;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"color"_j));
	sp[6].o = ((jobject) createStringLiteral(ctx, u8"ffffff"_j));
	LINE_NUMBER(1134);
	sp[4].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[4].o, sp[5].o, sp[6].o);
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[2].o);
	sp[3].o = frame[2].o;
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"color2"_j));
	sp[5].o = frame[2].o;
	sp[6].o = ((jobject) createStringLiteral(ctx, u8"color"_j));
	sp[7].o = ((jobject) createStringLiteral(ctx, u8"ffffff"_j));
	LINE_NUMBER(1135);
	sp[5].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[5].o, sp[6].o, sp[7].o);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[3].o, sp[4].o, sp[5].o);
	sp[3].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[3].o);
	sp[4].o = frame[2].o;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"colorOct"_j));
	jint temp9 = jint(1);
	LINE_NUMBER(1136);
	jint temp10 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, sp[4].o, sp[5].o, temp9);
	jfloat temp11 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"colorPersistence"_j))), (jfloat(0.5f)));
	jfloat temp12 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"colorScale"_j))), (jfloat(1)));
	sp[4].o = frame[2].o;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"colorThreshold"_j));
	jfloat temp13 = jfloat(0.5f);
	LINE_NUMBER(1137);
	jfloat temp14 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, sp[4].o, sp[5].o, temp13);
	init_mindustry_graphics_g3d_NoiseMesh_mindustry_type_Planet_int_int_float_int_float_float_float_arc_graphics_Color_arc_graphics_Color_int_float_float_float(ctx, sp[0].o, sp[1].o, temp1, temp2, temp3, temp5, temp6, temp7, temp8, sp[2].o, sp[3].o, temp10, temp11, temp12, temp14);
	sp += 1;
	goto label_22;
	}
label_11:;
	{
	LINE_NUMBER(1139);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"colors"_j))));
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asStringArray_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_asStringArray_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(1140);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_Color, (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1141);
	frame[8].i = (jint(0));
	}
label_25:;
	{
	if ((frame[8].i) >= (((jarray) nullCheck(ctx, (frame[6].o)))->length)) goto label_26;
	}
	{
	LINE_NUMBER(1142);
	sp[0].o = frame[7].o;
	jint temp0 = frame[8].i;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(1141);
	INST_IINC(8, 1);
	goto label_25;
	}
label_26:;
	{
	LINE_NUMBER(1145);
	clinit_mindustry_graphics_g3d_SunMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_SunMesh);
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"divisions"_j))), (jint(1)));
	jint temp1 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"octaves"_j))), (jint(1)));
	jdouble temp2 = jdouble(temp1);
	jfloat temp3 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"persistence"_j))), (jfloat(0.5f)));
	jdouble temp4 = jdouble(temp3);
	sp[2].o = frame[2].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"scl"_j));
	jfloat temp5 = jfloat(1);
	LINE_NUMBER(1146);
	jfloat temp6 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, sp[2].o, sp[3].o, temp5);
	jdouble temp7 = jdouble(temp6);
	jfloat temp8 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"pow"_j))), (jfloat(1)));
	jdouble temp9 = jdouble(temp8);
	jfloat temp10 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"mag"_j))), (jfloat(0.5f)));
	jdouble temp11 = jdouble(temp10);
	sp[2].o = frame[2].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"colorScale"_j));
	jfloat temp12 = jfloat(1);
	LINE_NUMBER(1147);
	jfloat temp13 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, sp[2].o, sp[3].o, temp12);
	init_mindustry_graphics_g3d_SunMesh_mindustry_type_Planet_int_double_double_double_double_double_float_Array1_arc_graphics_Color(ctx, sp[0].o, sp[1].o, temp0, temp2, temp4, temp7, temp9, temp11, temp13, (frame[7].o));
	sp += 1;
	goto label_22;
	}
label_12:;
	{
	LINE_NUMBER(1149);
	clinit_mindustry_graphics_g3d_HexSkyMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_HexSkyMesh);
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"seed"_j));
	jint temp0 = jint(0);
	LINE_NUMBER(1150);
	jint temp1 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, sp[2].o, sp[3].o, temp0);
	jfloat temp2 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"speed"_j))), (jfloat(0)));
	jfloat temp3 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"radius"_j))), (jfloat(1)));
	sp[2].o = frame[2].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"divisions"_j));
	jint temp4 = jint(3);
	LINE_NUMBER(1151);
	jint temp5 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, sp[2].o, sp[3].o, temp4);
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"color"_j))), (((jobject) createStringLiteral(ctx, u8"ffffff"_j))));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[2].o);
	jint temp6 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"octaves"_j))), (jint(1)));
	sp[3].o = frame[2].o;
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"persistence"_j));
	jfloat temp7 = jfloat(0.5f);
	LINE_NUMBER(1152);
	jfloat temp8 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, sp[3].o, sp[4].o, temp7);
	jfloat temp9 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"scale"_j))), (jfloat(1)));
	jfloat temp10 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"thresh"_j))), (jfloat(0.5f)));
	init_mindustry_graphics_g3d_HexSkyMesh_mindustry_type_Planet_int_float_float_int_arc_graphics_Color_int_float_float_float(ctx, sp[0].o, sp[1].o, temp1, temp2, temp3, temp5, sp[2].o, temp6, temp8, temp9, temp10);
	sp += 1;
	goto label_22;
	}
label_13:;
	{
	LINE_NUMBER(1153);
	clinit_mindustry_graphics_g3d_MultiMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_MultiMesh);
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"meshes"_j))));
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_parseMeshes_mindustry_type_Planet_arc_util_serialization_JsonValue_R_Array1_mindustry_graphics_g3d_GenericMesh) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_parseMeshes_mindustry_type_Planet_arc_util_serialization_JsonValue_R_Array1_mindustry_graphics_g3d_GenericMesh])(ctx, sp[1].o, sp[2].o, sp[3].o);
	init_mindustry_graphics_g3d_MultiMesh_Array1_mindustry_graphics_g3d_GenericMesh(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_22;
	}
label_14:;
	{
	LINE_NUMBER(1154);
	clinit_mindustry_graphics_g3d_MatMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_MatMesh);
	sp[1].o = frame[0].o;
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"mesh"_j))));
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_parseMesh_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_parseMesh_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[2].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[3].o = ((jobject) &class_arc_math_geom_Mat3D);
	sp[4].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"mat"_j))));
	sp[2].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, sp[4].o);
	init_mindustry_graphics_g3d_MatMesh_mindustry_graphics_g3d_GenericMesh_arc_math_geom_Mat3D(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_arc_math_geom_Mat3D, sp[2].o)));
	sp += 1;
	goto label_22;
	}
label_15:;
	{
	LINE_NUMBER(1155);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown mesh type: \u0001"_j.string, 1, (frame[3].o));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_22:;
	LINE_NUMBER(1130);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_parseProgressOp_mindustry_entities_part_DrawPart$PartProgress_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_entities_part_DrawPart$PartProgress(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:parseProgressOp", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(1161);
	frame[4].o = (frame[2].o);
	frame[5].i = (jint(-1));
	jint temp0 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[4].o));
	switch(temp0) {
		case -1851891165: goto label_1;
		case -599266462: goto label_2;
		case 96417: goto label_3;
		case 104433: goto label_4;
		case 108114: goto label_5;
		case 108290: goto label_6;
		case 108484: goto label_7;
		case 113880: goto label_8;
		case 3327652: goto label_9;
		case 92614935: goto label_10;
		case 93823057: goto label_11;
		case 94742715: goto label_12;
		case 95027439: goto label_13;
		case 95467907: goto label_14;
		case 109532587: goto label_15;
		case 2067161637: goto label_16;
		default: goto label_17;
	}
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"inv"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (jint(0));
	goto label_17;
	}
label_15:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"slope"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (jint(1));
	goto label_17;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"clamp"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (jint(2));
	goto label_17;
	}
label_14:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"delay"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (jint(3));
	goto label_17;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"sustain"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (jint(4));
	goto label_17;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"shorten"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (jint(5));
	goto label_17;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"compress"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (6);
	goto label_17;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"add"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (7);
	goto label_17;
	}
label_11:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"blend"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (8);
	goto label_17;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"mul"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (9);
	goto label_17;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"min"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (10);
	goto label_17;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"sin"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (11);
	goto label_17;
	}
label_10:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"absin"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (12);
	goto label_17;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"mod"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (13);
	goto label_17;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"loop"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	frame[5].i = (14);
	goto label_17;
	}
label_13:;
	{
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"curve"_j))));
	if (temp0 == 0) goto label_17;
	}
	INST_BIPUSH(15);
	INST_ISTORE(5);
label_17:;
	INST_ILOAD(5);
	switch((--sp)->i) {
		case 0: goto label_18;
		case 1: goto label_19;
		case 2: goto label_20;
		case 3: goto label_21;
		case 4: goto label_22;
		case 5: goto label_23;
		case 6: goto label_24;
		case 7: goto label_25;
		case 8: goto label_26;
		case 9: goto label_27;
		case 10: goto label_28;
		case 11: goto label_29;
		case 12: goto label_30;
		case 13: goto label_31;
		case 14: goto label_32;
		case 15: goto label_33;
		default: goto label_34;
	}
label_18:;
	{
	LINE_NUMBER(1162);
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_inv_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_inv_R_mindustry_entities_part_DrawPart$PartProgress, (frame[1].o)))(ctx, (frame[1].o));
	sp += 1;
	goto label_35;
	}
label_19:;
	{
	LINE_NUMBER(1163);
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_slope_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_slope_R_mindustry_entities_part_DrawPart$PartProgress, (frame[1].o)))(ctx, (frame[1].o));
	sp += 1;
	goto label_35;
	}
label_20:;
	{
	LINE_NUMBER(1164);
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_clamp_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_clamp_R_mindustry_entities_part_DrawPart$PartProgress, (frame[1].o)))(ctx, (frame[1].o));
	sp += 1;
	goto label_35;
	}
label_21:;
	{
	LINE_NUMBER(1165);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"amount"_j))));
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_delay_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_35;
	}
label_22:;
	{
	LINE_NUMBER(1166);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"offset"_j))), (jfloat(0)));
	jfloat temp1 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"grow"_j))), (jfloat(0)));
	jfloat temp2 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"sustain"_j))));
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_sustain_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_sustain_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, temp0, temp1, temp2);
	sp += 1;
	goto label_35;
	}
label_23:;
	{
	LINE_NUMBER(1167);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"amount"_j))));
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_shorten_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_shorten_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_35;
	}
label_24:;
	{
	LINE_NUMBER(1168);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"start"_j))));
	jfloat temp1 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"end"_j))));
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_compress_float_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_compress_float_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	goto label_35;
	}
label_25:;
	{
	LINE_NUMBER(1169);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"amount"_j))));
	if (temp0 == 0) goto label_36;
	}
	{
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"amount"_j))));
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_add_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_add_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_35;
	}
label_36:;
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[2].o = ((jobject) &class_mindustry_entities_part_DrawPart$PartProgress);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"other"_j))));
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_add_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_add_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, sp[1].o)));
	sp += 1;
	goto label_35;
	}
label_26:;
	{
	LINE_NUMBER(1170);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[2].o = ((jobject) &class_mindustry_entities_part_DrawPart$PartProgress);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"other"_j))));
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[1].o = checkCast(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, sp[1].o);
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"amount"_j))));
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_blend_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_blend_mindustry_entities_part_DrawPart$PartProgress_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0);
	sp += 1;
	goto label_35;
	}
label_27:;
	{
	LINE_NUMBER(1171);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"amount"_j))));
	if (temp0 == 0) goto label_37;
	}
	{
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"amount"_j))));
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_mul_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_mul_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_35;
	}
label_37:;
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[2].o = ((jobject) &class_mindustry_entities_part_DrawPart$PartProgress);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"other"_j))));
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_mul_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_mul_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, sp[1].o)));
	sp += 1;
	goto label_35;
	}
label_28:;
	{
	LINE_NUMBER(1172);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[2].o = ((jobject) &class_mindustry_entities_part_DrawPart$PartProgress);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"other"_j))));
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_min_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_min_mindustry_entities_part_DrawPart$PartProgress_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, sp[1].o)));
	sp += 1;
	goto label_35;
	}
label_29:;
	{
	LINE_NUMBER(1173);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"offset"_j))));
	sp += 1;
	if (temp0 == 0) goto label_38;
	}
	{
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"offset"_j))));
	sp[0].f = temp0;
	sp += 1;
	goto label_39;
	}
label_38:;
	INST_FCONST(0);
label_39:;
	{
	sp -= 2;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"scl"_j))));
	jfloat temp1 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"mag"_j))));
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_sin_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_sin_float_float_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, sp[1].f, temp0, temp1);
	sp += 1;
	goto label_35;
	}
label_30:;
	{
	LINE_NUMBER(1174);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"scl"_j))));
	jfloat temp1 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"mag"_j))));
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_absin_float_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_absin_float_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	goto label_35;
	}
label_31:;
	{
	LINE_NUMBER(1175);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"amount"_j))));
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_mod_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_mod_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_35;
	}
label_32:;
	{
	LINE_NUMBER(1176);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"time"_j))));
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_loop_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_loop_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, temp0);
	sp += 1;
	goto label_35;
	}
label_33:;
	{
	LINE_NUMBER(1177);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"interp"_j))));
	if (temp0 == 0) goto label_40;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[2].o = ((jobject) &class_arc_math_Interp);
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"interp"_j))));
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_curve_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_curve_arc_math_Interp_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, (checkCast(ctx, &class_arc_math_Interp, sp[1].o)));
	sp += 1;
	goto label_35;
	}
label_40:;
	{
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"offset"_j))));
	jfloat temp1 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"duration"_j))));
	sp[0].o = (jobject)((func_mindustry_entities_part_DrawPart$PartProgress_curve_float_float_R_mindustry_entities_part_DrawPart$PartProgress) resolveInterfaceMethod(ctx, &class_mindustry_entities_part_DrawPart$PartProgress, INDEX_mindustry_entities_part_DrawPart$PartProgress_curve_float_float_R_mindustry_entities_part_DrawPart$PartProgress, sp[0].o))(ctx, sp[0].o, temp0, temp1);
	sp += 1;
	goto label_35;
	}
label_34:;
	{
	LINE_NUMBER(1178);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown operation '\u0001', check PartProgress class for a list of methods."_j.string, 1, (frame[2].o));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_35:;
	LINE_NUMBER(1161);
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:make", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1184);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1185);
	((func_java_lang_reflect_Constructor_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_reflect_Constructor_setAccessible_boolean])(ctx, (frame[2].o), (jint(1)));
	LINE_NUMBER(1186);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1187);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1188);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:make", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1194);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (((jobject) &class_java_lang_String));
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1195);
	((func_java_lang_reflect_Constructor_setAccessible_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_reflect_Constructor_setAccessible_boolean])(ctx, (frame[3].o), (jint(1)));
	LINE_NUMBER(1196);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[2].o);
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1197);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1198);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_supply_java_lang_Class_R_arc_func_Prov(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:supply", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1204);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getDeclaredConstructor_Array1_java_lang_Class_R_java_lang_reflect_Constructor])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1205);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_26(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_26 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_26);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1212);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1213);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_resolveController_java_lang_String_R_arc_func_Prov(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:resolveController", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1219);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (((jobject) &class_mindustry_ai_types_FlyingAI)));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_supply_java_lang_Class_R_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_supply_java_lang_Class_R_arc_func_Prov])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1220);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_27(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_27 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_27);
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:field", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1224);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_field_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_field_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_field_java_lang_Class_java_lang_String_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:field", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1230);
	sp[0].o = (jobject)((func_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field])(ctx, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1231);
	if ((frame[3].o) != nullptr) goto label_5;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001: not found: '\u0001'"_j.string, 2, sp[1].o, (frame[2].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	LINE_NUMBER(1232);
	INST_ALOAD(3);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1233);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1234);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_fieldOpt_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:fieldOpt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1239);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1240);
	frame[3].o = sp[0].o;
	LINE_NUMBER(1241);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_checkNullFields_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:checkNullFields", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1246);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_Number)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_java_lang_String)) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_toBeParsed;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"arc."_j))));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1248);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1261);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:readFields", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1264);
	if ((frame[3].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	}
label_1:;
	{
	LINE_NUMBER(1265);
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(1266);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[26];
	auto stack = &frame[17];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:readFields", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1269);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[2].o));
	if (temp0 != 0) goto label_9;
	}
	{
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[2].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Expecting an object, but found: '\u0001'"_j.string, 1, sp[1].o);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(1270);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"research"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(1272);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_toBeParsed;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1273);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(1274);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_getFields_java_lang_Class_R_arc_struct_OrderedMap])(ctx, sp[0].o, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(1275);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[2].o)))->F_child;
	frame[6].o = sp[0].o;
	}
label_14:;
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_15;
	{
	LINE_NUMBER(1276);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_name_R_java_lang_String])(ctx, (frame[6].o));
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" "_j))), (((jobject) createStringLiteral(ctx, u8"_"_j))));
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[7].o = (checkCast(ctx, &class_arc_util_serialization_Json$FieldMetadata, sp[0].o));
	LINE_NUMBER(1277);
	if ((frame[7].o) != nullptr) goto label_18;
	}
	{
	LINE_NUMBER(1279);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"@Unknown field '@' for class '@'"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(3)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent;
	jobject temp1 = sp[3].o;
	sp[3].o = sp[2].o;
	sp[4].i = temp0;
	sp += 5;
	if (temp1 != nullptr) goto label_20;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_21;
label_20:;
	{
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent;
	sp[0].o = (jobject)((mindustry_ctype_Content *) NULL_CHECK(sp[0].o))->F_minfo;
	sp[0].o = (jobject)((mindustry_ctype_Content$ModContentInfo *) NULL_CHECK(sp[0].o))->F_sourceFile;
	sp[0].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"[\u0001]: "_j.string, 1, sp[0].o);
	sp += 1;
	}
label_21:;
	{
	sp -= 6;
	ARRAY_ACCESS(jobject, sp[2].o, sp[4].i) = sp[5].o;
	jint temp0 = jint(1);
	sp[3].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_name;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	jint temp1 = jint(2);
	sp[3].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[4].o));
	ARRAY_ACCESS(jobject, sp[2].o, temp1) = sp[3].o;
	((func_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1280);
	goto label_23;
	}
label_18:;
	{
	LINE_NUMBER(1287);
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_field;
	frame[8].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalAccessException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_arc_util_serialization_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_RuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_6; }
	}
	{
	LINE_NUMBER(1289);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[6].o));
	if (temp0 == 0) goto label_24;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"add"_j))));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = ((jobject) &class_arc_struct_Seq);
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[8].o));
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_25;
	}
	{
	sp[0].o = ((jobject) &class_arc_struct_ObjectSet);
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[8].o));
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(1290);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[8].o));
	sp[2].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_elementType;
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"add"_j))));
	sp[4].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_keyType;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1291);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[8].o), (frame[1].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1293);
	if ((isInstance(ctx, (frame[10].o), &class_arc_struct_ObjectSet)) == 0) goto label_28;
	}
	{
	frame[12].o = (checkCast(ctx, &class_arc_struct_ObjectSet, (frame[10].o)));
	LINE_NUMBER(1294);
	((func_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_arc_struct_ObjectSet_addAll_arc_struct_ObjectSet])(ctx, (frame[12].o), (checkCast(ctx, &class_arc_struct_ObjectSet, (frame[9].o))));
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(1295);
	if ((isInstance(ctx, (frame[10].o), &class_arc_struct_Seq)) == 0) goto label_31;
	}
	{
	frame[11].o = (checkCast(ctx, &class_arc_struct_Seq, (frame[10].o)));
	LINE_NUMBER(1296);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, (frame[11].o), (checkCast(ctx, &class_arc_struct_Seq, (frame[9].o))));
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(1298);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This should be impossible"_j))));
	throwException(ctx, sp[0].o);	}
label_30:;
	LINE_NUMBER(1300);
	goto label_1;
label_24:;
	{
	LINE_NUMBER(1301);
	sp[0].o = ((jobject) &class_arc_struct_ObjectMap);
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[8].o));
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_33;
	}
	{
	sp[0].o = ((jobject) &class_arc_struct_ObjectIntMap);
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[8].o));
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_33;
	}
	{
	sp[0].o = ((jobject) &class_arc_struct_ObjectFloatMap);
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[8].o));
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_34;
	}
label_33:;
	INST_ICONST(1);
	goto label_35;
label_34:;
	INST_ICONST(0);
label_35:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(1302);
	if ((frame[9].i) == 0) goto label_37;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"add"_j))));
	if (temp0 == 0) goto label_37;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"add"_j))));
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isBoolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_isBoolean_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_37;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_getBoolean_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getBoolean_java_lang_String_boolean_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"add"_j))), (jint(0)));
	if (temp0 == 0) goto label_37;
	}
	INST_ICONST(1);
	goto label_38;
label_37:;
	INST_ICONST(0);
label_38:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(1304);
	if ((frame[10].i) == 0) goto label_40;
	}
	{
	LINE_NUMBER(1305);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"add"_j))));
	}
label_40:;
	{
	LINE_NUMBER(1308);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, (frame[8].o));
	sp[2].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_elementType;
	sp[3].o = frame[6].o;
	sp[4].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[7].o)))->F_keyType;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_java_lang_Class_arc_util_serialization_JsonValue_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(1309);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[8].o), (frame[1].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(1312);
	if ((frame[10].i) == 0) goto label_44;
	}
	{
	if ((isInstance(ctx, (frame[12].o), &class_arc_struct_ObjectMap)) != 0) goto label_45;
	}
	{
	if ((isInstance(ctx, (frame[12].o), &class_arc_struct_ObjectIntMap)) != 0) goto label_45;
	}
	{
	if ((isInstance(ctx, (frame[12].o), &class_arc_struct_ObjectFloatMap)) == 0) goto label_44;
	}
label_45:;
	{
	LINE_NUMBER(1313);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[8].o), (frame[1].o));
	frame[16].o = sp[0].o;
	if ((isInstance(ctx, (frame[16].o), &class_arc_struct_ObjectMap)) == 0) goto label_46;
	}
	{
	frame[13].o = (checkCast(ctx, &class_arc_struct_ObjectMap, (frame[16].o)));
	LINE_NUMBER(1314);
	((func_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_struct_ObjectMap_putAll_arc_struct_ObjectMap])(ctx, (frame[13].o), (checkCast(ctx, &class_arc_struct_ObjectMap, (frame[11].o))));
	goto label_48;
	}
label_46:;
	{
	LINE_NUMBER(1315);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[8].o), (frame[1].o));
	frame[16].o = sp[0].o;
	if ((isInstance(ctx, (frame[16].o), &class_arc_struct_ObjectIntMap)) == 0) goto label_49;
	}
	{
	frame[14].o = (checkCast(ctx, &class_arc_struct_ObjectIntMap, (frame[16].o)));
	LINE_NUMBER(1316);
	((func_arc_struct_ObjectIntMap_putAll_arc_struct_ObjectIntMap) ((void **) nullCheck(ctx, (frame[14].o))->vtable)[VTABLE_arc_struct_ObjectIntMap_putAll_arc_struct_ObjectIntMap])(ctx, (frame[14].o), (checkCast(ctx, &class_arc_struct_ObjectIntMap, (frame[11].o))));
	goto label_48;
	}
label_49:;
	{
	LINE_NUMBER(1317);
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[8].o), (frame[1].o));
	frame[16].o = sp[0].o;
	if ((isInstance(ctx, (frame[16].o), &class_arc_struct_ObjectFloatMap)) == 0) goto label_48;
	}
	{
	frame[15].o = (checkCast(ctx, &class_arc_struct_ObjectFloatMap, (frame[16].o)));
	LINE_NUMBER(1318);
	((func_arc_struct_ObjectFloatMap_putAll_arc_struct_ObjectFloatMap) ((void **) nullCheck(ctx, (frame[15].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_putAll_arc_struct_ObjectFloatMap])(ctx, (frame[15].o), (checkCast(ctx, &class_arc_struct_ObjectFloatMap, (frame[11].o))));
	}
label_48:;
	goto label_1;
label_44:;
	{
	LINE_NUMBER(1321);
	((func_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_set_java_lang_Object_java_lang_Object])(ctx, (frame[8].o), (frame[1].o), (frame[11].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(1334);
	goto label_23;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1324);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1325);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[8].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[4].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Error accessing field: \u0001 (\u0001)"_j.string, 2, sp[1].o, sp[2].o);
	init_arc_util_serialization_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[9].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	sp -= 1;
	LINE_NUMBER(1326);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1327);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[8].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[4].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 (\u0001)"_j.string, 2, sp[1].o, sp[2].o);
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1328);
	throwException(ctx, (frame[9].o));	}
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(1329);
	frame[9].o = sp[0].o;
	LINE_NUMBER(1330);
	clinit_arc_util_serialization_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_serialization_SerializationException);
	init_arc_util_serialization_SerializationException_java_lang_Throwable(ctx, sp[0].o, (frame[9].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(1331);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_trace_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_trace_R_java_lang_String])(ctx, (frame[6].o));
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1332);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, (frame[8].o));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[4].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 (\u0001)"_j.string, 2, sp[1].o, sp[2].o);
	((func_arc_util_serialization_SerializationException_addTrace_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_SerializationException_addTrace_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1333);
	throwException(ctx, (frame[10].o));	}
label_23:;
	{
	LINE_NUMBER(1275);
	sp[0].o = (jobject)((arc_util_serialization_JsonValue *) NULL_CHECK((frame[6].o)))->F_next;
	frame[6].o = sp[0].o;
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(1337);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ctype_UnlockableContent)) == 0) goto label_59;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_ctype_UnlockableContent, (frame[1].o)));
	if ((frame[3].o) == nullptr) goto label_59;
	}
	{
	LINE_NUMBER(1338);
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching) != 0) goto label_62;
	}
	{
	LINE_NUMBER(1339);
	sp[0].o = frame[0].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"Modifying the tech tree is not allowed (@)"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentFile;
	ARRAY_ACCESS(jobject, sp[2].o, temp0) = sp[3].o;
	((func_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1340);
	popStackFrame(ctx);
	return;
	}
label_62:;
	{
	LINE_NUMBER(1348);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_65;
	}
	{
	LINE_NUMBER(1349);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_asString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_asString_R_java_lang_String])(ctx, (frame[3].o));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1350);
	frame[8].o = (jobject(nullptr));
	goto label_69;
	}
label_65:;
	{
	LINE_NUMBER(1352);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"parent"_j))), (jobject(nullptr)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(1353);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"requirements"_j))));
	if (temp0 == 0) goto label_71;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[1].o = ((jobject) getArrayClass(&class_mindustry_type_ItemStack, 1));
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"requirements"_j))));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = checkCast(ctx, getArrayClass(&class_mindustry_type_ItemStack, 1), sp[0].o);
	sp += 1;
	goto label_72;
	}
label_71:;
	INST_ACONST_NULL();
label_72:;
	INST_ASTORE(8);
label_69:;
	{
	LINE_NUMBER(1357);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_all;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Boolf_7);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[9].o = (checkCast(ctx, &class_mindustry_content_TechTree$TechNode, sp[0].o));
	LINE_NUMBER(1358);
	if ((frame[9].o) == nullptr) goto label_74;
	}
	{
	LINE_NUMBER(1359);
	((func_mindustry_content_TechTree$TechNode_remove) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_mindustry_content_TechTree$TechNode_remove])(ctx, (frame[9].o));
	}
label_74:;
	{
	LINE_NUMBER(1362);
	clinit_mindustry_content_TechTree$TechNode(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_content_TechTree$TechNode);
	sp[1].o = jobject(nullptr);
	sp[2].o = frame[6].o;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp1 = sp[2].o;
	sp[2].o = temp0;
	sp[3].o = temp1;
	sp += 4;
	if ((frame[8].o) != nullptr) goto label_76;
	}
	clinit_mindustry_type_ItemStack(ctx);
	(sp++)->o = SF_mindustry_type_ItemStack_empty;
	goto label_77;
label_76:;
	INST_ALOAD(8);
label_77:;
	{
	sp -= 5;
	init_mindustry_content_TechTree$TechNode_mindustry_content_TechTree$TechNode_mindustry_ctype_UnlockableContent_Array1_mindustry_type_ItemStack(ctx, sp[0].o, sp[2].o, sp[3].o, sp[4].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(1363);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod;
	frame[11].o = sp[0].o;
	LINE_NUMBER(1364);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentFile;
	frame[12].o = sp[0].o;
	LINE_NUMBER(1366);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_postreads;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_java_lang_Runnable_13(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_java_lang_Runnable_13 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_java_lang_Runnable_13);
		proxy->F_field7 = (jref) (frame[7].o);
		proxy->F_field6 = (jref) (frame[8].o);
		proxy->F_field5 = (jref) (frame[10].o);
		proxy->F_field4 = (jref) (frame[3].o);
		proxy->F_field3 = (jref) (frame[12].o);
		proxy->F_field2 = (jref) (frame[11].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_59:;
	LINE_NUMBER(1420);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_resolve_java_lang_String_R_java_lang_Class(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:resolve", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1424);
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:resolve", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1429);
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_boolean_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_boolean_R_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_boolean_R_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:resolve", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1435);
	if ((frame[1].o) == nullptr) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_10;
	}
label_9:;
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_10;
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_10:;
	{
	LINE_NUMBER(1438);
	clinit_mindustry_mod_ClassMap(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ClassMap_classes;
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	sp += 1;
	if (temp0 != 0) goto label_11;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_charAt_int_R_char) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_charAt_int_R_char])(ctx, (frame[1].o), (jint(0)));
	jint temp1 = (jint)SM_java_lang_Character_isLowerCase_char_R_boolean(ctx, temp0);
	if (temp1 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	sp += 1;
	goto label_12;
	}
label_11:;
	INST_ALOAD(1);
label_12:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_java_lang_Class, sp[0].o));
	LINE_NUMBER(1439);
	if ((frame[4].o) == nullptr) goto label_14;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_14:;
	{
	LINE_NUMBER(1442);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[1].o), (46));
	if (temp0 == (jint(-1))) goto label_15;
	}
	{
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowClassResolution) == 0) goto label_15;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1444);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	LINE_NUMBER(1445);
	INST_ASTORE(5);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(1448);
	sp[0].o = frame[1].o;
	jint temp0 = jint(1);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_mods;
	sp[1].o = (jobject)((func_mindustry_mod_Mods_mainLoader_R_java_lang_ClassLoader) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_Mods_mainLoader_R_java_lang_ClassLoader])(ctx, sp[1].o);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_boolean_java_lang_ClassLoader_R_java_lang_Class(ctx, sp[0].o, temp0, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	LINE_NUMBER(1449);
	INST_ASTORE(6);
label_15:;
	{
	LINE_NUMBER(1453);
	if ((frame[2].o) == nullptr) goto label_16;
	}
	{
	LINE_NUMBER(1454);
	if ((frame[3].i) == 0) goto label_18;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[@] No type '\u0001' found, defaulting to type '\u0001'"_j.string, 2, sp[1].o, sp[2].o);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[3].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentFile;
	jobject temp1 = sp[3].o;
	sp[3].o = sp[2].o;
	sp[4].i = temp0;
	sp += 5;
	if (temp1 == nullptr) goto label_19;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentFile;
	sp += 1;
	goto label_20;
	}
label_19:;
	{
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod;
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_name;
	sp += 1;
	goto label_20;
	}
label_21:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_20:;
	INST_AASTORE();
	POP_N(3); // Pop method args
	((func_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
label_18:;
	{
	LINE_NUMBER(1455);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_16:;
	{
	LINE_NUMBER(1457);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Type not found: \u0001"_j.string, 1, (frame[1].o));
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:warn", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1461);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent;
	sp[2].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentFile;
	((func_mindustry_mod_ContentParser_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(1462);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:warnContext", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(1465);
	SM_arc_util_Log_warn_java_lang_String_Array1_java_lang_Object(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(1466);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_onNewInstance_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:onNewInstance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(1468);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:getJson", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1471);
	((func_mindustry_mod_ContentParser_checkInit) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_checkInit])(ctx, (frame[0].o));
	LINE_NUMBER(1472);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_lambda$readFields$1_mindustry_ctype_UnlockableContent_mindustry_mod_Mods$LoadedMod_arc_files_Fi_arc_util_serialization_JsonValue_mindustry_content_TechTree$TechNode_Array1_mindustry_type_ItemStack_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$readFields$1", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(1367);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent = (jref) (frame[1].o);
	LINE_NUMBER(1368);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod = (jref) (frame[2].o);
	LINE_NUMBER(1369);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentFile = (jref) (frame[3].o);
	LINE_NUMBER(1372);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"objectives"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(1373);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[5].o)))->F_objectives;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[2].o = ((jobject) getArrayClass(&class_mindustry_game_Objectives$Objective, 1));
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"objectives"_j))));
	sp[1].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_mindustry_game_Objectives$Objective, 1), sp[1].o)));
	}
label_4:;
	{
	LINE_NUMBER(1377);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Item)) != 0) goto label_6;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_type_Liquid)) == 0) goto label_7;
	}
label_6:;
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[5].o)))->F_objectives;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Boolf_8);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(1378);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[5].o)))->F_objectives;
	clinit_mindustry_game_Objectives$Produce(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Produce);
	init_mindustry_game_Objectives$Produce_mindustry_ctype_UnlockableContent(ctx, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(1382);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[5].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	LINE_NUMBER(1383);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[5].o)))->F_parent;
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_children;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	}
label_9:;
	{
	LINE_NUMBER(1386);
	if ((frame[6].o) != nullptr) goto label_11;
	}
	{
	LINE_NUMBER(1387);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack])(ctx, (frame[1].o));
	((func_mindustry_content_TechTree$TechNode_setupRequirements_Array1_mindustry_type_ItemStack) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_content_TechTree$TechNode_setupRequirements_Array1_mindustry_type_ItemStack])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(1390);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"planet"_j))));
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(1391);
	sp[0].o = frame[5].o;
	sp[1].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	sp[3].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"planet"_j))));
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_find_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_Content) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_find_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_Content])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_planet = (jref) (checkCast(ctx, &class_mindustry_type_Planet, sp[1].o));
	}
label_13:;
	{
	LINE_NUMBER(1394);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_getBoolean_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getBoolean_java_lang_String_boolean_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"root"_j))), (jint(0)));
	if (temp0 == 0) goto label_15;
	}
	{
	LINE_NUMBER(1395);
	sp[0].o = frame[5].o;
	sp[1].o = frame[4].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"name"_j));
	sp[3].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(1396);
	sp[0].o = frame[5].o;
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_getBoolean_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getBoolean_java_lang_String_boolean_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"requiresUnlock"_j))), (jint(0)));
	((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_requiresUnlock = temp0;
	LINE_NUMBER(1397);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_roots;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(1399);
	if ((frame[7].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(1401);
	clinit_mindustry_content_TechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_TechTree_all;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Boolf_9);
		proxy->F_field1 = (jref) (frame[7].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[8].o = (checkCast(ctx, &class_mindustry_content_TechTree$TechNode, sp[0].o));
	LINE_NUMBER(1403);
	if ((frame[8].o) != nullptr) goto label_23;
	}
	{
	LINE_NUMBER(1404);
	sp[0].o = frame[0].o;
	sp[1].o = frame[7].o;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Content '\u0001' isn't in the tech tree, but '\u0001' requires it to be researched."_j.string, 2, sp[1].o, sp[2].o);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(1407);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[8].o)))->F_children;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[5].o));
	if (temp0 != 0) goto label_26;
	}
	{
	LINE_NUMBER(1408);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[8].o)))->F_children;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[5].o));
	}
label_26:;
	{
	LINE_NUMBER(1411);
	((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[5].o)))->F_parent = (jref) (frame[8].o);
	LINE_NUMBER(1412);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[8].o)))->F_planet;
	((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	}
label_25:;
	LINE_NUMBER(1414);
	goto label_19;
label_20:;
	{
	LINE_NUMBER(1415);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[1].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001 is not a root node, and does not have a `parent: ` property. Ignoring."_j.string, 1, sp[1].o);
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_19:;
	LINE_NUMBER(1418);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_mod_ContentParser_lambda$readFields$3_java_lang_String_mindustry_content_TechTree$TechNode_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$readFields$3", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(1401);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_content;
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[0].o))->F_name;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_content;
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[0].o))->F_name;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, sp[1].o, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[2].o)))->F_content;
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[0].o))->F_name;
	sp[1].o = (jobject)SM_mindustry_io_SaveFileReader_mapFallback_java_lang_String_R_java_lang_String(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_ContentParser_lambda$readFields$2_mindustry_ctype_UnlockableContent_mindustry_game_Objectives$Objective_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$readFields$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1377);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_game_Objectives$Produce)) == 0) goto label_1;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Objectives$Produce, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_game_Objectives$Produce *) NULL_CHECK((frame[2].o)))->F_content;
	if (sp[0].o != (frame[0].o)) goto label_1;
	}
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_ContentParser_lambda$readFields$0_mindustry_ctype_UnlockableContent_mindustry_content_TechTree$TechNode_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$readFields$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(1357);
	sp[0].o = (jobject)((mindustry_content_TechTree$TechNode *) NULL_CHECK((frame[1].o)))->F_content;
	if (sp[0].o != (frame[0].o)) goto label_1;
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

void SM_mindustry_mod_ContentParser_lambda$checkNullFields$0_java_lang_Object_arc_util_serialization_Json$FieldMetadata(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$checkNullFields$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1250);
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_Class_isPrimitive_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isPrimitive_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1252);
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	jint temp0 = (jint)((func_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_isAnnotationPresent_java_lang_Class_R_boolean])(ctx, sp[0].o, (((jobject) &class_arc_util_Nullable)));
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	sp[0].o = (jobject)((func_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Field_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[0].o));
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	clinit_mindustry_mod_ContentParser(ctx);
	sp[0].o = (jobject)SF_mindustry_mod_ContentParser_implicitNullable;
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getType_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_reflect_Field_getType_R_java_lang_Class])(ctx, sp[1].o);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(1253);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	sp[1].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, sp[1].o);
	LINE_NUMBER(1254);
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_Class_isAnonymousClass_R_boolean) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_Class_isAnonymousClass_R_boolean])(ctx, sp[2].o);
	jobject temp1 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp1;
	sp += 3;
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_Class_getSuperclass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getSuperclass_R_java_lang_Class])(ctx, sp[0].o);
	sp += 1;
	goto label_10;
	}
label_9:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, sp[0].o);
	sp++;
label_10:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[3].o);
	sp[3].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, (frame[0].o));
	sp[4].o = (jobject)((arc_util_serialization_Json$FieldMetadata *) NULL_CHECK((frame[1].o)))->F_field;
	LINE_NUMBER(1255);
	sp[4].o = (jobject)((func_java_lang_reflect_Field_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_java_lang_reflect_Field_getName_R_java_lang_String])(ctx, sp[4].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"'\u0001' in \u0001 is missing! \u0001.\u0001 cannot be null."_j.string, 4, sp[2].o, sp[1].o, sp[3].o, sp[4].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(1259);
	goto label_12;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1257);
	frame[2].o = sp[0].o;
	LINE_NUMBER(1258);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_12:;
	LINE_NUMBER(1260);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_ContentParser_lambda$supply$0_java_lang_reflect_Constructor_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$supply$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(1207);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_reflect_Constructor_newInstance_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(1208);
	frame[1].o = sp[0].o;
	LINE_NUMBER(1209);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_lambda$read$0_arc_files_Fi_mindustry_mod_Mods$LoadedMod_mindustry_ctype_Content_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$read$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(968);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentFile = (jref) (frame[1].o);
	LINE_NUMBER(969);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod = (jref) (frame[2].o);
	LINE_NUMBER(970);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent = (jref) (frame[3].o);
	LINE_NUMBER(971);
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, (frame[4].o)))(ctx, (frame[4].o));
	LINE_NUMBER(974);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(975);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_toBeParsed;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[3].o));
	LINE_NUMBER(976);
	((func_mindustry_mod_ContentParser_checkNullFields_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_checkNullFields_java_lang_Object])(ctx, (frame[0].o), (frame[3].o));
	}
label_5:;
	LINE_NUMBER(978);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_lambda$parser$0_mindustry_ctype_ContentType_arc_func_Func_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$parser$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(925);
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, (frame[0].o), (frame[1].o), (frame[4].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(926);
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, (frame[0].o), (frame[1].o), (frame[4].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(927);
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(929);
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[4].o), (frame[5].o));
	LINE_NUMBER(930);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, (frame[3].o), (frame[4].o));
	sp[0].o = (jobject)((func_arc_func_Func_get_java_lang_Object_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Func, INDEX_arc_func_Func_get_java_lang_Object_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	frame[6].o = (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	}
label_4:;
	{
	LINE_NUMBER(932);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent = (jref) (frame[6].o);
	LINE_NUMBER(933);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_java_lang_Runnable_14(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_java_lang_Runnable_14 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_java_lang_Runnable_14);
		proxy->F_field2 = (jref) (frame[5].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_ContentParser_read_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_read_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(934);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_lambda$parser$1_mindustry_ctype_Content_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$parser$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(933);
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_lambda$new$21_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_TeamEntry(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$21", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(866);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"team"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(867);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_classParsers;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_game_Team)));
	sp[0].o = checkCast(ctx, &class_mindustry_mod_ContentParser$FieldParser, sp[0].o);
	sp[1].o = ((jobject) &class_mindustry_game_Team);
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"team"_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser$FieldParser_parse_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_mindustry_mod_ContentParser$FieldParser, INDEX_mindustry_mod_ContentParser$FieldParser_parse_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[5].o = (checkCast(ctx, &class_mindustry_game_Team, sp[0].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(869);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Team field missing."_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(871);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"team"_j))));
	LINE_NUMBER(873);
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching) == 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_team;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(874);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_team;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_TeamEntry, sp[0].o));
	LINE_NUMBER(875);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_team;
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o));
	goto label_9;
	}
label_6:;
	{
	LINE_NUMBER(877);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_team;
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o));
	LINE_NUMBER(878);
	clinit_mindustry_type_TeamEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_TeamEntry);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, (frame[1].o), (frame[2].o));
	init_mindustry_type_TeamEntry_java_lang_String_mindustry_game_Team(ctx, sp[0].o, sp[1].o, (frame[5].o));
	frame[4].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(880);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent = (jref) (frame[4].o);
	LINE_NUMBER(881);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_java_lang_Runnable_15(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_java_lang_Runnable_15 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_java_lang_Runnable_15);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_ContentParser_read_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_read_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(882);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_lambda$new$22_mindustry_type_TeamEntry_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$22", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(881);
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_lambda$new$16_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Planet(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$16", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(804);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o));
	LINE_NUMBER(805);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	}
label_2:;
	{
	LINE_NUMBER(807);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"parent"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(809);
	clinit_mindustry_type_Planet(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_Planet);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, (frame[1].o), (frame[2].o));
	sp[2].o = frame[4].o;
	jfloat temp0 = (jfloat)((func_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getFloat_java_lang_String_float_R_float])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"radius"_j))), (jfloat(1)));
	jint temp1 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"sectorSize"_j))), (jint(0)));
	init_mindustry_type_Planet_java_lang_String_mindustry_type_Planet_float_int(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1);
	frame[5].o = sp[0].o;
	LINE_NUMBER(811);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"sectorSize"_j))));
	LINE_NUMBER(813);
	jint temp2 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"mesh"_j))));
	if (temp2 == 0) goto label_6;
	}
	{
	LINE_NUMBER(814);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"mesh"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(815);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_9;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Meshes must be objects."_j))));
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(816);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"mesh"_j))));
	LINE_NUMBER(817);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_28(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_28 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_28);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_meshLoader = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(828);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"cloudMesh"_j))));
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(829);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"cloudMesh"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(830);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_14;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isArray_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isArray_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_14;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Meshes must be objects."_j))));
	throwException(ctx, sp[0].o);	}
label_14:;
	{
	LINE_NUMBER(831);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"cloudMesh"_j))));
	LINE_NUMBER(832);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Prov_29(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Prov_29 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Prov_29);
		proxy->F_field2 = (jref) (frame[6].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_cloudMeshLoader = (jref) sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(843);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"rules"_j))));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(844);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"rules"_j))));
	frame[6].o = sp[0].o;
	LINE_NUMBER(845);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_19;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Rules must be an object!"_j))));
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(846);
	sp[0].o = frame[5].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[6].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_ruleSetter = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(857);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[5].o)))->F_sectors;
	clinit_mindustry_type_Sector(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_type_Sector);
	sp[2].o = frame[5].o;
	clinit_mindustry_graphics_g3d_PlanetGrid$Ptile(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid$Ptile_empty;
	init_mindustry_type_Sector_mindustry_type_Planet_mindustry_graphics_g3d_PlanetGrid$Ptile(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(859);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent = (jref) (frame[5].o);
	LINE_NUMBER(860);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_java_lang_Runnable_16(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_java_lang_Runnable_16 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_java_lang_Runnable_16);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_ContentParser_read_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_read_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(861);
	popStackFrame(ctx);
	return (frame[5].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_lambda$new$20_mindustry_type_Planet_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$20", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(860);
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_ContentParser_lambda$new$19_arc_util_serialization_JsonValue_mindustry_game_Rules(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$19", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(849);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(852);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(850);
	frame[2].o = sp[0].o;
	LINE_NUMBER(851);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(853);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_lambda$new$18_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$18", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(835);
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_parseMesh_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_parseMesh_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(836);
	frame[3].o = sp[0].o;
	LINE_NUMBER(837);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[3].o));
	LINE_NUMBER(838);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_lambda$new$17_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$17", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(820);
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_parseMesh_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_parseMesh_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(821);
	frame[3].o = sp[0].o;
	LINE_NUMBER(822);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[3].o));
	LINE_NUMBER(823);
	clinit_mindustry_graphics_g3d_ShaderSphereMesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_ShaderSphereMesh);
	sp[1].o = frame[1].o;
	clinit_mindustry_graphics_Shaders(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_Shaders_unlit;
	init_mindustry_graphics_g3d_ShaderSphereMesh_mindustry_type_Planet_arc_graphics_gl_Shader_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(2)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_lambda$new$13_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_SectorPreset(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$13", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(745);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_sector;
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o));
	LINE_NUMBER(746);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(747);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_sector;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_type_SectorPreset, sp[0].o));
	}
label_2:;
	{
	LINE_NUMBER(751);
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching) == 0) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_sector;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	sp[0].o = checkCast(ctx, &class_mindustry_type_SectorPreset, sp[0].o);
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ACONST_NULL();
label_5:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(753);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(754);
	frame[4].o = (frame[5].o);
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(756);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"sector"_j))));
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"sector"_j))));
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isNumber_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_isNumber_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_12;
	}
label_11:;
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"SectorPresets must have a sector number."_j))));
	throwException(ctx, sp[0].o);	}
label_12:;
	{
	LINE_NUMBER(758);
	clinit_mindustry_type_SectorPreset(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_SectorPreset);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, (frame[1].o), (frame[2].o));
	sp[2].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod;
	init_mindustry_type_SectorPreset_java_lang_String_mindustry_mod_Mods$LoadedMod(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	}
label_10:;
	{
	LINE_NUMBER(761);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent = (jref) (frame[4].o);
	LINE_NUMBER(762);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_java_lang_Runnable_17(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_java_lang_Runnable_17 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_java_lang_Runnable_17);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_ContentParser_read_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_read_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(801);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_lambda$new$14_mindustry_type_SectorPreset_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$14", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(763);
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[1].o)))->F_planet;
	if (sp[0].o != nullptr) goto label_1;
	}
	clinit_mindustry_content_Planets(ctx);
	(sp++)->o = SF_mindustry_content_Planets_serpulo;
	goto label_2;
label_1:;
	INST_ALOAD(1);
	sp[-1].o = (jobject) ((mindustry_type_SectorPreset *) NULL_CHECK(sp[-1].o))->F_planet;
label_2:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(764);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"planet"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(765);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"planet"_j))), (((jobject) createStringLiteral(ctx, u8"serpulo"_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Planet, sp[0].o));
	LINE_NUMBER(767);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"planet"_j))));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Planet '\u0001' not found."_j.string, 1, sp[1].o);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(770);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"sector"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(772);
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK((frame[1].o)))->F_sector;
	frame[4].o = sp[0].o;
	LINE_NUMBER(773);
	if ((frame[4].o) == nullptr) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset;
	if (sp[0].o != (frame[1].o)) goto label_10;
	}
	{
	LINE_NUMBER(774);
	((mindustry_type_Sector *) NULL_CHECK((frame[4].o)))->F_preset = (jref) (jobject(nullptr));
	}
label_10:;
	{
	LINE_NUMBER(776);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getInt_java_lang_String_int_R_int])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"sector"_j))), (jint(0)));
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[3].o)))->F_sectors;
	frame[5].i = (temp0 % ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size));
	LINE_NUMBER(777);
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching) != 0) goto label_13;
	}
	INST_ILOAD(5);
	if ((--sp)->i <= 0) goto label_13;
	{
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK((frame[3].o)))->F_sectors;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[5].i));
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK((checkCast(ctx, &class_mindustry_type_Sector, sp[0].o))))->F_preset;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(778);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Overwriting existing sectors is not allowed."_j))));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(780);
	((func_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_SectorPreset_initialize_mindustry_type_Planet_int_boolean])(ctx, (frame[1].o), (frame[3].o), (frame[5].i), (jint(1)));
	}
label_7:;
	{
	LINE_NUMBER(783);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"sector"_j))));
	LINE_NUMBER(784);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"planet"_j))));
	LINE_NUMBER(786);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"rules"_j))));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(787);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"rules"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(788);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, (frame[4].o));
	if (temp0 != 0) goto label_20;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Rules must be an object!"_j))));
	throwException(ctx, sp[0].o);	}
label_20:;
	{
	LINE_NUMBER(789);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_rules = (jref) sp[1].o;
	}
label_17:;
	{
	LINE_NUMBER(799);
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(800);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_ContentParser_lambda$new$15_arc_util_serialization_JsonValue_mindustry_game_Rules(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$15", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(792);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	((func_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(795);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(793);
	frame[2].o = sp[0].o;
	LINE_NUMBER(794);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	}
label_4:;
	LINE_NUMBER(796);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_lambda$new$9_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_StatusEffect(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$9", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(718);
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_status;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(719);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_status;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, sp[0].o));
	LINE_NUMBER(720);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_status;
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(722);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_status;
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o));
	LINE_NUMBER(723);
	clinit_mindustry_type_StatusEffect(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_type_StatusEffect);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, (frame[1].o), (frame[2].o));
	init_mindustry_type_StatusEffect_java_lang_String(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(725);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent = (jref) (frame[4].o);
	LINE_NUMBER(726);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_java_lang_Runnable_18(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_java_lang_Runnable_18 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_java_lang_Runnable_18);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_ContentParser_read_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_read_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(728);
	sp[0].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_java_lang_Runnable_19(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_java_lang_Runnable_19 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_java_lang_Runnable_19);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_type_StatusEffect_init_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_init_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(742);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_mod_ContentParser_lambda$new$11_mindustry_type_StatusEffect(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$11", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(729);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_opposites;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(730);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_opposites;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(731);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectSet_toSeq_R_arc_struct_Seq])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[1].o, (((jobject) &class_mindustry_type_StatusEffect)));
	((func_mindustry_type_StatusEffect_opposite_Array1_mindustry_type_StatusEffect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_opposite_Array1_mindustry_type_StatusEffect])(ctx, sp[0].o, (checkCast(ctx, getArrayClass(&class_mindustry_type_StatusEffect, 1), sp[1].o)));
	LINE_NUMBER(733);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_affinities;
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_copy_R_arc_struct_ObjectSet])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(734);
	sp[0].o = (jobject)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_affinities;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(735);
	sp[0].o = (jobject)((func_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectSet_iterator_R_arc_struct_ObjectSet$ObjectSetIterator])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_StatusEffect, sp[0].o));
	LINE_NUMBER(736);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_mindustry_type_StatusEffect$TransitionHandler_1(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_mindustry_type_StatusEffect$TransitionHandler_1 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_mindustry_type_StatusEffect$TransitionHandler_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_type_StatusEffect_affinity_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_StatusEffect_affinity_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(739);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(740);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_mod_ContentParser_lambda$new$12_mindustry_type_StatusEffect_mindustry_gen_Unit_mindustry_entities_units_StatusEntry_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$12", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(737);
	((func_mindustry_gen_Unit_damagePierce_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_damagePierce_float])(ctx, (frame[1].o), ((jfloat)((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_transitionDamage));
	LINE_NUMBER(738);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_lambda$new$10_mindustry_type_StatusEffect_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$10", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(726);
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_lambda$new$7_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Liquid(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$7", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(704);
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(705);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	LINE_NUMBER(706);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(708);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o));
	LINE_NUMBER(709);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (jobject(nullptr)));
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[1].o, sp[2].o, (((jobject) &class_mindustry_type_Liquid)));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Liquid, sp[0].o));
	LINE_NUMBER(710);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	}
label_4:;
	{
	LINE_NUMBER(712);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent = (jref) (frame[4].o);
	LINE_NUMBER(713);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_java_lang_Runnable_20(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_java_lang_Runnable_20 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_java_lang_Runnable_20);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_ContentParser_read_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_read_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(714);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_lambda$new$8_mindustry_type_Liquid_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$8", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(713);
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_lambda$new$5_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Weather(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$5", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(689);
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching) == 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(690);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Weather, sp[0].o));
	LINE_NUMBER(691);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(693);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o));
	LINE_NUMBER(694);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_mindustry_mod_ContentParser_getType_arc_util_serialization_JsonValue_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_getType_arc_util_serialization_JsonValue_R_java_lang_String])(ctx, (frame[0].o), (frame[3].o));
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[1].o, sp[2].o, (((jobject) &class_mindustry_type_weather_ParticleWeather)));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_type_Weather, sp[0].o));
	LINE_NUMBER(695);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	}
label_4:;
	{
	LINE_NUMBER(697);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent = (jref) (frame[4].o);
	LINE_NUMBER(698);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_java_lang_Runnable_21(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_java_lang_Runnable_21 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_java_lang_Runnable_21);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_ContentParser_read_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_read_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(699);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_lambda$new$6_mindustry_type_Weather_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$6", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(698);
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue])(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_lambda$new$2_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$2", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(617);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o));
	LINE_NUMBER(620);
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	if (sp[0].o != nullptr) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(622);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"template"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[1].o, sp[2].o, (((jobject) &class_mindustry_type_UnitType)));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	LINE_NUMBER(624);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"template"_j))));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(625);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"template"_j))));
	}
label_5:;
	{
	LINE_NUMBER(628);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(629);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[4].o)))->F_constructor;
	if (sp[0].o == nullptr) goto label_8;
	}
	INST_ALOAD(5);
	if ((--sp)->o == nullptr) goto label_9;
label_8:;
	{
	LINE_NUMBER(630);
	if ((frame[5].o) == nullptr) goto label_10;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isString_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_isString_R_boolean])(ctx, (frame[5].o));
	if (temp0 != 0) goto label_10;
	}
	{
	LINE_NUMBER(631);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unit '\u0001' has an incorrect type. Types must be strings."_j.string, 1, (frame[2].o));
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(634);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_unitType_arc_util_serialization_JsonValue_R_arc_func_Prov) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_unitType_arc_util_serialization_JsonValue_R_arc_func_Prov])(ctx, (frame[0].o), (frame[5].o));
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_constructor = (jref) sp[1].o;
	}
label_9:;
	LINE_NUMBER(636);
	goto label_12;
label_3:;
	{
	LINE_NUMBER(637);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	}
label_12:;
	{
	LINE_NUMBER(640);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent = (jref) (frame[4].o);
	LINE_NUMBER(641);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_java_lang_Runnable_22(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_java_lang_Runnable_22 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_java_lang_Runnable_22);
		proxy->F_field2 = (jref) (frame[3].o);
		proxy->F_field1 = (jref) (frame[4].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_ContentParser_read_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_read_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(685);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_lambda$new$3_mindustry_type_UnitType_arc_util_serialization_JsonValue(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$3", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(642);
	((func_mindustry_type_UnitType_beforeParse) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_type_UnitType_beforeParse])(ctx, (frame[1].o));
	LINE_NUMBER(644);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"requirements"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(645);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"requirements"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(647);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_mindustry_mod_ContentParser$UnitReq)), (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_mod_ContentParser$UnitReq, sp[0].o));
	LINE_NUMBER(649);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$UnitReq *) NULL_CHECK((frame[4].o)))->F_block;
	frame[7].o = sp[0].o;
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_world_blocks_units_Reconstructor)) == 0) goto label_7;
	}
	{
	frame[6].o = (checkCast(ctx, &class_mindustry_world_blocks_units_Reconstructor, (frame[7].o)));
	LINE_NUMBER(650);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$UnitReq *) NULL_CHECK((frame[4].o)))->F_previous;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(651);
	sp[0].o = (jobject)((mindustry_world_blocks_units_Reconstructor *) NULL_CHECK((frame[6].o)))->F_upgrades;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_UnitType, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_mod_ContentParser$UnitReq *) NULL_CHECK((frame[4].o)))->F_previous;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	ARRAY_ACCESS(jobject, sp[1].o, (jint(1))) = (frame[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_2;
	}
label_7:;
	{
	LINE_NUMBER(653);
	sp[0].o = (jobject)((mindustry_mod_ContentParser$UnitReq *) NULL_CHECK((frame[4].o)))->F_block;
	frame[7].o = sp[0].o;
	if ((isInstance(ctx, (frame[7].o), &class_mindustry_world_blocks_units_UnitFactory)) == 0) goto label_11;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_units_UnitFactory, (frame[7].o)));
	LINE_NUMBER(654);
	sp[0].o = (jobject)((mindustry_world_blocks_units_UnitFactory *) NULL_CHECK((frame[5].o)))->F_plans;
	clinit_mindustry_world_blocks_units_UnitFactory$UnitPlan(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_units_UnitFactory$UnitPlan);
	sp[2].o = frame[1].o;
	jfloat temp0 = (jfloat)((mindustry_mod_ContentParser$UnitReq *) NULL_CHECK((frame[4].o)))->F_time;
	sp[3].o = (jobject)((mindustry_mod_ContentParser$UnitReq *) NULL_CHECK((frame[4].o)))->F_requirements;
	init_mindustry_world_blocks_units_UnitFactory$UnitPlan_mindustry_type_UnitType_float_Array1_mindustry_type_ItemStack(ctx, sp[1].o, sp[2].o, temp0, sp[3].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	goto label_2;
	}
label_11:;
	{
	LINE_NUMBER(656);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Missing a valid 'block' in 'requirements'"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(660);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"controller"_j))));
	if (temp0 != 0) goto label_13;
	}
	{
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"aiController"_j))));
	if (temp0 == 0) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(661);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[2].o;
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"controller"_j));
	sp[4].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"aiController"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[2].o, sp[3].o, sp[4].o);
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_resolveController_java_lang_String_R_arc_func_Prov) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolveController_java_lang_String_R_arc_func_Prov])(ctx, sp[1].o, sp[2].o);
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_aiController = (jref) sp[1].o;
	LINE_NUMBER(662);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"controller"_j))));
	}
label_14:;
	{
	LINE_NUMBER(665);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"defaultController"_j))));
	if (temp0 == 0) goto label_16;
	}
	{
	LINE_NUMBER(666);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_R_java_lang_String])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"defaultController"_j))));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_resolveController_java_lang_String_R_arc_func_Prov) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolveController_java_lang_String_R_arc_func_Prov])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(667);
	sp[0].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_arc_func_Func_3(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_arc_func_Func_3 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_arc_func_Func_3);
		proxy->F_field0 = (jref) (frame[3].o);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(668);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"defaultController"_j))));
	}
label_16:;
	{
	LINE_NUMBER(672);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"waves"_j))));
	if (temp0 == 0) goto label_20;
	}
	{
	LINE_NUMBER(673);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8"waves"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(674);
	sp[0].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_parser;
	sp[0].o = (jobject)((func_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_readValue_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object])(ctx, sp[0].o, (((jobject) getArrayClass(&class_mindustry_game_SpawnGroup, 1))), (frame[3].o));
	frame[4].o = (checkCast(ctx, getArrayClass(&class_mindustry_game_SpawnGroup, 1), sp[0].o));
	LINE_NUMBER(675);
	frame[5].o = (frame[4].o);
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_26:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_27;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(676);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[8].o)))->F_type = (jref) (frame[1].o);
	LINE_NUMBER(675);
	INST_IINC(7, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(679);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_waves;
	sp[0].o = (jobject)((func_mindustry_game_Waves_get_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Waves_get_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[4].o));
	}
label_20:;
	{
	LINE_NUMBER(682);
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jint(1)));
	LINE_NUMBER(683);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_mod_ContentParser_lambda$new$4_arc_func_Prov_mindustry_gen_Unit_R_mindustry_entities_units_UnitController(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$4", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_entities_units_UnitController, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_ContentParser_lambda$new$0_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(579);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	((func_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, (frame[2].o), (frame[3].o));
	LINE_NUMBER(583);
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(584);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"type"_j))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(585);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentMod;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[1].o))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Warning: '\u0001-\u0001' re-declares a type. This will be interpreted as a new block. If you wish to override a vanilla block, omit the 'type' section, as vanilla block `type`s cannot be changed."_j.string, 2, sp[1].o, (frame[2].o));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	((func_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(586);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[1].o, sp[2].o, (((jobject) &class_mindustry_world_Block)));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(588);
	sp[0].o = frame[0].o;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	goto label_8;
	}
label_2:;
	{
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"type"_j))), (((jobject) createStringLiteral(ctx, u8"Block"_j))));
	sp += 3;
	if (((jint)((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_allowPatching) == 0) goto label_10;
	}
	(sp++)->o = ((jobject) &class_mindustry_world_Block);
	goto label_11;
label_10:;
	INST_ACONST_NULL();
label_11:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-\u0001"_j.string, 2, (frame[1].o), (frame[2].o));
	sp[0].o = (jobject)((func_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	}
label_8:;
	{
	LINE_NUMBER(594);
	((mindustry_mod_ContentParser *) NULL_CHECK((frame[0].o)))->F_currentContent = (jref) (frame[4].o);
	LINE_NUMBER(596);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_mod_ContentParser_invoke_java_lang_Runnable_23(ctx);
		auto proxy = (mindustry_mod_ContentParser_invoke_java_lang_Runnable_23 *) gcAlloc(ctx, &class_mindustry_mod_ContentParser_invoke_java_lang_Runnable_23);
		proxy->F_field2 = (jref) (frame[4].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_mod_ContentParser_read_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_read_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(614);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_ContentParser_lambda$new$1_arc_util_serialization_JsonValue_mindustry_world_Block(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$new$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(597);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"consumes"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"consumes"_j))));
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_isObject_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_JsonValue_isObject_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(598);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((func_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_get_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"consumes"_j))));
	((func_mindustry_mod_ContentParser_readBlockConsumers_mindustry_world_Block_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_ContentParser_readBlockConsumers_mindustry_world_Block_arc_util_serialization_JsonValue])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(599);
	sp[0].o = (jobject)((func_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_remove_java_lang_String_R_arc_util_serialization_JsonValue])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"consumes"_j))));
	}
label_1:;
	{
	LINE_NUMBER(602);
	((func_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue_boolean])(ctx, (frame[0].o), (frame[2].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(604);
	if (((jint)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_size) <= (16)) goto label_5;
	}
	{
	LINE_NUMBER(605);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Blocks cannot be larger than 16"_j))));
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(609);
	jint temp0 = (jint)((func_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_util_serialization_JsonValue_has_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"requirements"_j))));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[2].o)))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_hidden;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(610);
	sp[0].o = frame[2].o;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_shown;
	((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildVisibility = (jref) sp[1].o;
	}
label_7:;
	LINE_NUMBER(612);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_ContentParser_lambda$readBlockConsumers$1_java_lang_Class_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$readBlockConsumers$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(534);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_isAssignableFrom_java_lang_Class_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_mod_ContentParser_lambda$readBlockConsumers$0_mindustry_world_consumers_Consume_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:lambda$readBlockConsumers$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_mod_ContentParser(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_mod_ContentParser_ignoreUnknownFields = jint(1);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/ContentParser:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_ContentParser(ctx);
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ctype_ContentType, (jint(5)));
	jint temp0 = jint(0);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_item;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_unit;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_liquid;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_planet;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	clinit_mindustry_mod_ContentParser(ctx);
	SF_mindustry_mod_ContentParser_typesToSearch = sp[0].o;
	LINE_NUMBER(60);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Class, (jint(4)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) &class_arc_graphics_g2d_TextureRegion));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) getArrayClass(&class_arc_graphics_g2d_TextureRegion, 1)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) getArrayClass(&class_arc_graphics_g2d_TextureRegion, 2)));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) getArrayClass(&class_arc_graphics_g2d_TextureRegion, 3)));
	sp[0].o = (jobject)SM_arc_struct_ObjectSet_with_Array1_java_lang_Object_R_arc_struct_ObjectSet(ctx, sp[0].o);
	clinit_mindustry_mod_ContentParser(ctx);
	SF_mindustry_mod_ContentParser_implicitNullable = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_ContentParser;
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

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field currentMod
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field currentContent
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[13]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field currentFile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[14]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[65]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[66]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[67]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[68]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[69]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[70]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[71]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[72]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_mod_ContentParser[] {
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
	(void *) M_mindustry_mod_ContentParser_readBlockConsumers_mindustry_world_Block_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_unitType_arc_util_serialization_JsonValue_R_arc_func_Prov,
	(void *) M_mindustry_mod_ContentParser_getString_arc_util_serialization_JsonValue_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_mod_ContentParser_getType_arc_util_serialization_JsonValue_R_java_lang_String,
	(void *) M_mindustry_mod_ContentParser_find_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_Content,
	(void *) M_mindustry_mod_ContentParser_parser_mindustry_ctype_ContentType_arc_func_Func_R_mindustry_mod_ContentParser$TypeParser,
	(void *) M_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_read_java_lang_Runnable,
	(void *) M_mindustry_mod_ContentParser_init,
	(void *) M_mindustry_mod_ContentParser_attempt_java_lang_Runnable,
	(void *) M_mindustry_mod_ContentParser_finishParsing,
	(void *) M_mindustry_mod_ContentParser_parse_mindustry_mod_Mods$LoadedMod_java_lang_String_java_lang_String_arc_files_Fi_mindustry_ctype_ContentType_R_mindustry_ctype_Content,
	(void *) M_mindustry_mod_ContentParser_checkInit,
	(void *) M_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable,
	(void *) M_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_java_lang_Throwable,
	(void *) M_mindustry_mod_ContentParser_makeError_java_lang_Throwable_arc_files_Fi_R_java_lang_String,
	(void *) M_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent,
	(void *) M_mindustry_mod_ContentParser_locateAny_java_lang_String_R_mindustry_ctype_MappableContent,
	(void *) M_mindustry_mod_ContentParser_parseMeshes_mindustry_type_Planet_arc_util_serialization_JsonValue_R_Array1_mindustry_graphics_g3d_GenericMesh,
	(void *) M_mindustry_mod_ContentParser_parseMesh_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh,
	(void *) M_mindustry_mod_ContentParser_parseProgressOp_mindustry_entities_part_DrawPart$PartProgress_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_entities_part_DrawPart$PartProgress,
	(void *) M_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_supply_java_lang_Class_R_arc_func_Prov,
	(void *) M_mindustry_mod_ContentParser_resolveController_java_lang_String_R_arc_func_Prov,
	(void *) M_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_field_java_lang_Class_java_lang_String_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_fieldOpt_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_checkNullFields_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue_boolean,
	(void *) M_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_resolve_java_lang_String_R_java_lang_Class,
	(void *) M_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class,
	(void *) M_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_boolean_R_java_lang_Class,
	(void *) M_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object,
	(void *) M_mindustry_mod_ContentParser_onNewInstance_java_lang_Object_java_lang_Class,
	(void *) M_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json,
	(void *) M_mindustry_mod_ContentParser_lambda$readFields$1_mindustry_ctype_UnlockableContent_mindustry_mod_Mods$LoadedMod_arc_files_Fi_arc_util_serialization_JsonValue_mindustry_content_TechTree$TechNode_Array1_mindustry_type_ItemStack_java_lang_String,
	(void *) M_mindustry_mod_ContentParser_lambda$readFields$3_java_lang_String_mindustry_content_TechTree$TechNode_R_boolean,
	(void *) M_mindustry_mod_ContentParser_lambda$read$0_arc_files_Fi_mindustry_mod_Mods$LoadedMod_mindustry_ctype_Content_java_lang_Runnable,
	(void *) M_mindustry_mod_ContentParser_lambda$parser$0_mindustry_ctype_ContentType_arc_func_Func_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content,
	(void *) M_mindustry_mod_ContentParser_lambda$parser$1_mindustry_ctype_Content_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$21_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_TeamEntry,
	(void *) M_mindustry_mod_ContentParser_lambda$new$22_mindustry_type_TeamEntry_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$16_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Planet,
	(void *) M_mindustry_mod_ContentParser_lambda$new$20_mindustry_type_Planet_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$18_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh,
	(void *) M_mindustry_mod_ContentParser_lambda$new$17_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh,
	(void *) M_mindustry_mod_ContentParser_lambda$new$13_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_SectorPreset,
	(void *) M_mindustry_mod_ContentParser_lambda$new$14_mindustry_type_SectorPreset_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$9_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_StatusEffect,
	(void *) M_mindustry_mod_ContentParser_lambda$new$10_mindustry_type_StatusEffect_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$7_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Liquid,
	(void *) M_mindustry_mod_ContentParser_lambda$new$8_mindustry_type_Liquid_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$5_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Weather,
	(void *) M_mindustry_mod_ContentParser_lambda$new$6_mindustry_type_Weather_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$2_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_UnitType,
	(void *) M_mindustry_mod_ContentParser_lambda$new$3_mindustry_type_UnitType_arc_util_serialization_JsonValue,
	(void *) M_mindustry_mod_ContentParser_lambda$new$0_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_world_Block,
	(void *) M_mindustry_mod_ContentParser_lambda$new$1_arc_util_serialization_JsonValue_mindustry_world_Block,
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
	{ "readBlockConsumers", "(Lmindustry/world/Block;Larc/util/serialization/JsonValue;)V" },
	{ "unitType", "(Larc/util/serialization/JsonValue;)Larc/func/Prov;" },
	{ "getString", "(Larc/util/serialization/JsonValue;Ljava/lang/String;)Ljava/lang/String;" },
	{ "getType", "(Larc/util/serialization/JsonValue;)Ljava/lang/String;" },
	{ "find", "(Lmindustry/ctype/ContentType;Ljava/lang/String;)Lmindustry/ctype/Content;" },
	{ "parser", "(Lmindustry/ctype/ContentType;Larc/func/Func;)Lmindustry/mod/ContentParser$TypeParser;" },
	{ "readBundle", "(Lmindustry/ctype/ContentType;Ljava/lang/String;Larc/util/serialization/JsonValue;)V" },
	{ "read", "(Ljava/lang/Runnable;)V" },
	{ "init", "()V" },
	{ "attempt", "(Ljava/lang/Runnable;)V" },
	{ "finishParsing", "()V" },
	{ "parse", "(Lmindustry/mod/Mods$LoadedMod;Ljava/lang/String;Ljava/lang/String;Larc/files/Fi;Lmindustry/ctype/ContentType;)Lmindustry/ctype/Content;" },
	{ "checkInit", "()V" },
	{ "markError", "(Lmindustry/ctype/Content;Lmindustry/mod/Mods$LoadedMod;Larc/files/Fi;Ljava/lang/Throwable;)V" },
	{ "markError", "(Lmindustry/ctype/Content;Ljava/lang/Throwable;)V" },
	{ "makeError", "(Ljava/lang/Throwable;Larc/files/Fi;)Ljava/lang/String;" },
	{ "locate", "(Lmindustry/ctype/ContentType;Ljava/lang/String;)Lmindustry/ctype/MappableContent;" },
	{ "locateAny", "(Ljava/lang/String;)Lmindustry/ctype/MappableContent;" },
	{ "parseMeshes", "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)[Lmindustry/graphics/g3d/GenericMesh;" },
	{ "parseMesh", "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)Lmindustry/graphics/g3d/GenericMesh;" },
	{ "parseProgressOp", "(Lmindustry/entities/part/DrawPart$PartProgress;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/entities/part/DrawPart$PartProgress;" },
	{ "make", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "make", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;" },
	{ "supply", "(Ljava/lang/Class;)Larc/func/Prov;" },
	{ "resolveController", "(Ljava/lang/String;)Larc/func/Prov;" },
	{ "field", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "field", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;" },
	{ "fieldOpt", "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;" },
	{ "checkNullFields", "(Ljava/lang/Object;)V" },
	{ "readFields", "(Ljava/lang/Object;Larc/util/serialization/JsonValue;Z)V" },
	{ "readFields", "(Ljava/lang/Object;Larc/util/serialization/JsonValue;)V" },
	{ "resolve", "(Ljava/lang/String;)Ljava/lang/Class;" },
	{ "resolve", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Class;" },
	{ "resolve", "(Ljava/lang/String;Ljava/lang/Class;Z)Ljava/lang/Class;" },
	{ "warn", "(Ljava/lang/String;[Ljava/lang/Object;)V" },
	{ "warnContext", "(Lmindustry/ctype/Content;Larc/files/Fi;Ljava/lang/String;[Ljava/lang/Object;)V" },
	{ "onNewInstance", "(Ljava/lang/Object;Ljava/lang/Class;)V" },
	{ "getJson", "()Larc/util/serialization/Json;" },
	{ "lambda$readFields$1", "(Lmindustry/ctype/UnlockableContent;Lmindustry/mod/Mods$LoadedMod;Larc/files/Fi;Larc/util/serialization/JsonValue;Lmindustry/content/TechTree$TechNode;[Lmindustry/type/ItemStack;Ljava/lang/String;)V" },
	{ "lambda$readFields$3", "(Ljava/lang/String;Lmindustry/content/TechTree$TechNode;)Z" },
	{ "lambda$read$0", "(Larc/files/Fi;Lmindustry/mod/Mods$LoadedMod;Lmindustry/ctype/Content;Ljava/lang/Runnable;)V" },
	{ "lambda$parser$0", "(Lmindustry/ctype/ContentType;Larc/func/Func;Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/ctype/Content;" },
	{ "lambda$parser$1", "(Lmindustry/ctype/Content;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$21", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/TeamEntry;" },
	{ "lambda$new$22", "(Lmindustry/type/TeamEntry;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$16", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/Planet;" },
	{ "lambda$new$20", "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$18", "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)Lmindustry/graphics/g3d/GenericMesh;" },
	{ "lambda$new$17", "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)Lmindustry/graphics/g3d/GenericMesh;" },
	{ "lambda$new$13", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/SectorPreset;" },
	{ "lambda$new$14", "(Lmindustry/type/SectorPreset;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$9", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/StatusEffect;" },
	{ "lambda$new$10", "(Lmindustry/type/StatusEffect;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$7", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/Liquid;" },
	{ "lambda$new$8", "(Lmindustry/type/Liquid;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$5", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/Weather;" },
	{ "lambda$new$6", "(Lmindustry/type/Weather;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$2", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/UnitType;" },
	{ "lambda$new$3", "(Lmindustry/type/UnitType;Larc/util/serialization/JsonValue;)V" },
	{ "lambda$new$0", "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/world/Block;" },
	{ "lambda$new$1", "(Larc/util/serialization/JsonValue;Lmindustry/world/Block;)V" },
};

static jclass innerClasses[] {
	&class_mindustry_mod_ContentParser$TypeParser,
	&class_mindustry_mod_ContentParser$FieldParser,
	&class_mindustry_mod_ContentParser$UnitReq,
	&class_mindustry_mod_ContentParser$ParseListener,
};

static FieldMetadata fields[] {
	{ "ignoreUnknownFields", &class_boolean, (intptr_t) &SF_mindustry_mod_ContentParser_ignoreUnknownFields, "Z", 26 },
	{ "typesToSearch", getArrayClass(&class_mindustry_ctype_ContentType, 1), (intptr_t) &SF_mindustry_mod_ContentParser_typesToSearch, "[Lmindustry/ctype/ContentType;", 26 },
	{ "implicitNullable", &class_arc_struct_ObjectSet, (intptr_t) &SF_mindustry_mod_ContentParser_implicitNullable, "Larc/struct/ObjectSet;", 24 },
	{ "contentTypes", &class_arc_struct_ObjectMap, offsetof(mindustry_mod_ContentParser, F_contentTypes), "Larc/struct/ObjectMap;", 0 },
	{ "listeners", &class_arc_struct_Seq, offsetof(mindustry_mod_ContentParser, F_listeners), "Larc/struct/Seq;", 0 },
	{ "allowClassResolution", &class_boolean, offsetof(mindustry_mod_ContentParser, F_allowClassResolution), "Z", 0 },
	{ "allowAssetLoading", &class_boolean, offsetof(mindustry_mod_ContentParser, F_allowAssetLoading), "Z", 0 },
	{ "allowPatching", &class_boolean, offsetof(mindustry_mod_ContentParser, F_allowPatching), "Z", 0 },
	{ "classParsers", &class_arc_struct_ObjectMap, offsetof(mindustry_mod_ContentParser, F_classParsers), "Larc/struct/ObjectMap;", 0 },
	{ "reads", &class_arc_struct_Seq, offsetof(mindustry_mod_ContentParser, F_reads), "Larc/struct/Seq;", 2 },
	{ "postreads", &class_arc_struct_Seq, offsetof(mindustry_mod_ContentParser, F_postreads), "Larc/struct/Seq;", 2 },
	{ "toBeParsed", &class_arc_struct_ObjectSet, offsetof(mindustry_mod_ContentParser, F_toBeParsed), "Larc/struct/ObjectSet;", 2 },
	{ "currentMod", &class_mindustry_mod_Mods$LoadedMod, offsetof(mindustry_mod_ContentParser, F_currentMod), "Lmindustry/mod/Mods$LoadedMod;", 0 },
	{ "currentContent", &class_mindustry_ctype_Content, offsetof(mindustry_mod_ContentParser, F_currentContent), "Lmindustry/ctype/Content;", 0 },
	{ "currentFile", &class_arc_files_Fi, offsetof(mindustry_mod_ContentParser, F_currentFile), "Larc/files/Fi;", 0 },
	{ "parser", &class_arc_util_serialization_Json, offsetof(mindustry_mod_ContentParser, F_parser), "Larc/util/serialization/Json;", 2 },
	{ "parsers", &class_arc_struct_ObjectMap, offsetof(mindustry_mod_ContentParser, F_parsers), "Larc/struct/ObjectMap;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_ContentParser, 0, "()V", 1 },
	{ "readBlockConsumers", (intptr_t) M_mindustry_mod_ContentParser_readBlockConsumers_mindustry_world_Block_arc_util_serialization_JsonValue, VTABLE_mindustry_mod_ContentParser_readBlockConsumers_mindustry_world_Block_arc_util_serialization_JsonValue, "(Lmindustry/world/Block;Larc/util/serialization/JsonValue;)V", 1 },
	{ "unitType", (intptr_t) M_mindustry_mod_ContentParser_unitType_arc_util_serialization_JsonValue_R_arc_func_Prov, VTABLE_mindustry_mod_ContentParser_unitType_arc_util_serialization_JsonValue_R_arc_func_Prov, "(Larc/util/serialization/JsonValue;)Larc/func/Prov;", 0 },
	{ "getString", (intptr_t) M_mindustry_mod_ContentParser_getString_arc_util_serialization_JsonValue_java_lang_String_R_java_lang_String, VTABLE_mindustry_mod_ContentParser_getString_arc_util_serialization_JsonValue_java_lang_String_R_java_lang_String, "(Larc/util/serialization/JsonValue;Ljava/lang/String;)Ljava/lang/String;", 2 },
	{ "getType", (intptr_t) M_mindustry_mod_ContentParser_getType_arc_util_serialization_JsonValue_R_java_lang_String, VTABLE_mindustry_mod_ContentParser_getType_arc_util_serialization_JsonValue_R_java_lang_String, "(Larc/util/serialization/JsonValue;)Ljava/lang/String;", 2 },
	{ "find", (intptr_t) M_mindustry_mod_ContentParser_find_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_Content, VTABLE_mindustry_mod_ContentParser_find_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_Content, "(Lmindustry/ctype/ContentType;Ljava/lang/String;)Lmindustry/ctype/Content;", 2 },
	{ "parser", (intptr_t) M_mindustry_mod_ContentParser_parser_mindustry_ctype_ContentType_arc_func_Func_R_mindustry_mod_ContentParser$TypeParser, VTABLE_mindustry_mod_ContentParser_parser_mindustry_ctype_ContentType_arc_func_Func_R_mindustry_mod_ContentParser$TypeParser, "(Lmindustry/ctype/ContentType;Larc/func/Func;)Lmindustry/mod/ContentParser$TypeParser;", 2 },
	{ "readBundle", (intptr_t) M_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue, VTABLE_mindustry_mod_ContentParser_readBundle_mindustry_ctype_ContentType_java_lang_String_arc_util_serialization_JsonValue, "(Lmindustry/ctype/ContentType;Ljava/lang/String;Larc/util/serialization/JsonValue;)V", 2 },
	{ "read", (intptr_t) M_mindustry_mod_ContentParser_read_java_lang_Runnable, VTABLE_mindustry_mod_ContentParser_read_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 2 },
	{ "init", (intptr_t) M_mindustry_mod_ContentParser_init, VTABLE_mindustry_mod_ContentParser_init, "()V", 2 },
	{ "attempt", (intptr_t) M_mindustry_mod_ContentParser_attempt_java_lang_Runnable, VTABLE_mindustry_mod_ContentParser_attempt_java_lang_Runnable, "(Ljava/lang/Runnable;)V", 2 },
	{ "finishParsing", (intptr_t) M_mindustry_mod_ContentParser_finishParsing, VTABLE_mindustry_mod_ContentParser_finishParsing, "()V", 1 },
	{ "parse", (intptr_t) M_mindustry_mod_ContentParser_parse_mindustry_mod_Mods$LoadedMod_java_lang_String_java_lang_String_arc_files_Fi_mindustry_ctype_ContentType_R_mindustry_ctype_Content, VTABLE_mindustry_mod_ContentParser_parse_mindustry_mod_Mods$LoadedMod_java_lang_String_java_lang_String_arc_files_Fi_mindustry_ctype_ContentType_R_mindustry_ctype_Content, "(Lmindustry/mod/Mods$LoadedMod;Ljava/lang/String;Ljava/lang/String;Larc/files/Fi;Lmindustry/ctype/ContentType;)Lmindustry/ctype/Content;", 1 },
	{ "checkInit", (intptr_t) M_mindustry_mod_ContentParser_checkInit, VTABLE_mindustry_mod_ContentParser_checkInit, "()V", 1 },
	{ "markError", (intptr_t) M_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable, VTABLE_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_mindustry_mod_Mods$LoadedMod_arc_files_Fi_java_lang_Throwable, "(Lmindustry/ctype/Content;Lmindustry/mod/Mods$LoadedMod;Larc/files/Fi;Ljava/lang/Throwable;)V", 1 },
	{ "markError", (intptr_t) M_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_java_lang_Throwable, VTABLE_mindustry_mod_ContentParser_markError_mindustry_ctype_Content_java_lang_Throwable, "(Lmindustry/ctype/Content;Ljava/lang/Throwable;)V", 1 },
	{ "makeError", (intptr_t) M_mindustry_mod_ContentParser_makeError_java_lang_Throwable_arc_files_Fi_R_java_lang_String, VTABLE_mindustry_mod_ContentParser_makeError_java_lang_Throwable_arc_files_Fi_R_java_lang_String, "(Ljava/lang/Throwable;Larc/files/Fi;)Ljava/lang/String;", 2 },
	{ "locate", (intptr_t) M_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent, VTABLE_mindustry_mod_ContentParser_locate_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent, "(Lmindustry/ctype/ContentType;Ljava/lang/String;)Lmindustry/ctype/MappableContent;", 2 },
	{ "locateAny", (intptr_t) M_mindustry_mod_ContentParser_locateAny_java_lang_String_R_mindustry_ctype_MappableContent, VTABLE_mindustry_mod_ContentParser_locateAny_java_lang_String_R_mindustry_ctype_MappableContent, "(Ljava/lang/String;)Lmindustry/ctype/MappableContent;", 2 },
	{ "parseMeshes", (intptr_t) M_mindustry_mod_ContentParser_parseMeshes_mindustry_type_Planet_arc_util_serialization_JsonValue_R_Array1_mindustry_graphics_g3d_GenericMesh, VTABLE_mindustry_mod_ContentParser_parseMeshes_mindustry_type_Planet_arc_util_serialization_JsonValue_R_Array1_mindustry_graphics_g3d_GenericMesh, "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)[Lmindustry/graphics/g3d/GenericMesh;", 2 },
	{ "parseMesh", (intptr_t) M_mindustry_mod_ContentParser_parseMesh_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh, VTABLE_mindustry_mod_ContentParser_parseMesh_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh, "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)Lmindustry/graphics/g3d/GenericMesh;", 2 },
	{ "parseProgressOp", (intptr_t) M_mindustry_mod_ContentParser_parseProgressOp_mindustry_entities_part_DrawPart$PartProgress_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_entities_part_DrawPart$PartProgress, VTABLE_mindustry_mod_ContentParser_parseProgressOp_mindustry_entities_part_DrawPart$PartProgress_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_entities_part_DrawPart$PartProgress, "(Lmindustry/entities/part/DrawPart$PartProgress;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/entities/part/DrawPart$PartProgress;", 2 },
	{ "make", (intptr_t) M_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 0 },
	{ "make", (intptr_t) M_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser_make_java_lang_Class_java_lang_String_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", 2 },
	{ "supply", (intptr_t) M_mindustry_mod_ContentParser_supply_java_lang_Class_R_arc_func_Prov, VTABLE_mindustry_mod_ContentParser_supply_java_lang_Class_R_arc_func_Prov, "(Ljava/lang/Class;)Larc/func/Prov;", 2 },
	{ "resolveController", (intptr_t) M_mindustry_mod_ContentParser_resolveController_java_lang_String_R_arc_func_Prov, VTABLE_mindustry_mod_ContentParser_resolveController_java_lang_String_R_arc_func_Prov, "(Ljava/lang/String;)Larc/func/Prov;", 0 },
	{ "field", (intptr_t) M_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser_field_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 0 },
	{ "field", (intptr_t) M_mindustry_mod_ContentParser_field_java_lang_Class_java_lang_String_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser_field_java_lang_Class_java_lang_String_R_java_lang_Object, "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", 2 },
	{ "fieldOpt", (intptr_t) M_mindustry_mod_ContentParser_fieldOpt_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, VTABLE_mindustry_mod_ContentParser_fieldOpt_java_lang_Class_arc_util_serialization_JsonValue_R_java_lang_Object, "(Ljava/lang/Class;Larc/util/serialization/JsonValue;)Ljava/lang/Object;", 0 },
	{ "checkNullFields", (intptr_t) M_mindustry_mod_ContentParser_checkNullFields_java_lang_Object, VTABLE_mindustry_mod_ContentParser_checkNullFields_java_lang_Object, "(Ljava/lang/Object;)V", 0 },
	{ "readFields", (intptr_t) M_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue_boolean, VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue_boolean, "(Ljava/lang/Object;Larc/util/serialization/JsonValue;Z)V", 2 },
	{ "readFields", (intptr_t) M_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue, VTABLE_mindustry_mod_ContentParser_readFields_java_lang_Object_arc_util_serialization_JsonValue, "(Ljava/lang/Object;Larc/util/serialization/JsonValue;)V", 0 },
	{ "resolve", (intptr_t) M_mindustry_mod_ContentParser_resolve_java_lang_String_R_java_lang_Class, VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_R_java_lang_Class, "(Ljava/lang/String;)Ljava/lang/Class;", 0 },
	{ "resolve", (intptr_t) M_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class, VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_R_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Class;", 0 },
	{ "resolve", (intptr_t) M_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_boolean_R_java_lang_Class, VTABLE_mindustry_mod_ContentParser_resolve_java_lang_String_java_lang_Class_boolean_R_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Class;Z)Ljava/lang/Class;", 0 },
	{ "warn", (intptr_t) M_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object, VTABLE_mindustry_mod_ContentParser_warn_java_lang_String_Array1_java_lang_Object, "(Ljava/lang/String;[Ljava/lang/Object;)V", 128 },
	{ "warnContext", (intptr_t) M_mindustry_mod_ContentParser_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object, VTABLE_mindustry_mod_ContentParser_warnContext_mindustry_ctype_Content_arc_files_Fi_java_lang_String_Array1_java_lang_Object, "(Lmindustry/ctype/Content;Larc/files/Fi;Ljava/lang/String;[Ljava/lang/Object;)V", 128 },
	{ "onNewInstance", (intptr_t) M_mindustry_mod_ContentParser_onNewInstance_java_lang_Object_java_lang_Class, VTABLE_mindustry_mod_ContentParser_onNewInstance_java_lang_Object_java_lang_Class, "(Ljava/lang/Object;Ljava/lang/Class;)V", 0 },
	{ "getJson", (intptr_t) M_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json, VTABLE_mindustry_mod_ContentParser_getJson_R_arc_util_serialization_Json, "()Larc/util/serialization/Json;", 1 },
	{ "lambda$readFields$1", (intptr_t) M_mindustry_mod_ContentParser_lambda$readFields$1_mindustry_ctype_UnlockableContent_mindustry_mod_Mods$LoadedMod_arc_files_Fi_arc_util_serialization_JsonValue_mindustry_content_TechTree$TechNode_Array1_mindustry_type_ItemStack_java_lang_String, VTABLE_mindustry_mod_ContentParser_lambda$readFields$1_mindustry_ctype_UnlockableContent_mindustry_mod_Mods$LoadedMod_arc_files_Fi_arc_util_serialization_JsonValue_mindustry_content_TechTree$TechNode_Array1_mindustry_type_ItemStack_java_lang_String, "(Lmindustry/ctype/UnlockableContent;Lmindustry/mod/Mods$LoadedMod;Larc/files/Fi;Larc/util/serialization/JsonValue;Lmindustry/content/TechTree$TechNode;[Lmindustry/type/ItemStack;Ljava/lang/String;)V", 4098 },
	{ "lambda$readFields$3", (intptr_t) M_mindustry_mod_ContentParser_lambda$readFields$3_java_lang_String_mindustry_content_TechTree$TechNode_R_boolean, VTABLE_mindustry_mod_ContentParser_lambda$readFields$3_java_lang_String_mindustry_content_TechTree$TechNode_R_boolean, "(Ljava/lang/String;Lmindustry/content/TechTree$TechNode;)Z", 4098 },
	{ "lambda$readFields$2", (intptr_t) SM_mindustry_mod_ContentParser_lambda$readFields$2_mindustry_ctype_UnlockableContent_mindustry_game_Objectives$Objective_R_boolean, 0, "(Lmindustry/ctype/UnlockableContent;Lmindustry/game/Objectives$Objective;)Z", 4106 },
	{ "lambda$readFields$0", (intptr_t) SM_mindustry_mod_ContentParser_lambda$readFields$0_mindustry_ctype_UnlockableContent_mindustry_content_TechTree$TechNode_R_boolean, 0, "(Lmindustry/ctype/UnlockableContent;Lmindustry/content/TechTree$TechNode;)Z", 4106 },
	{ "lambda$checkNullFields$0", (intptr_t) SM_mindustry_mod_ContentParser_lambda$checkNullFields$0_java_lang_Object_arc_util_serialization_Json$FieldMetadata, 0, "(Ljava/lang/Object;Larc/util/serialization/Json$FieldMetadata;)V", 4106 },
	{ "lambda$supply$0", (intptr_t) SM_mindustry_mod_ContentParser_lambda$supply$0_java_lang_reflect_Constructor_R_java_lang_Object, 0, "(Ljava/lang/reflect/Constructor;)Ljava/lang/Object;", 4106 },
	{ "lambda$read$0", (intptr_t) M_mindustry_mod_ContentParser_lambda$read$0_arc_files_Fi_mindustry_mod_Mods$LoadedMod_mindustry_ctype_Content_java_lang_Runnable, VTABLE_mindustry_mod_ContentParser_lambda$read$0_arc_files_Fi_mindustry_mod_Mods$LoadedMod_mindustry_ctype_Content_java_lang_Runnable, "(Larc/files/Fi;Lmindustry/mod/Mods$LoadedMod;Lmindustry/ctype/Content;Ljava/lang/Runnable;)V", 4098 },
	{ "lambda$parser$0", (intptr_t) M_mindustry_mod_ContentParser_lambda$parser$0_mindustry_ctype_ContentType_arc_func_Func_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content, VTABLE_mindustry_mod_ContentParser_lambda$parser$0_mindustry_ctype_ContentType_arc_func_Func_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_ctype_Content, "(Lmindustry/ctype/ContentType;Larc/func/Func;Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/ctype/Content;", 4098 },
	{ "lambda$parser$1", (intptr_t) M_mindustry_mod_ContentParser_lambda$parser$1_mindustry_ctype_Content_arc_util_serialization_JsonValue, VTABLE_mindustry_mod_ContentParser_lambda$parser$1_mindustry_ctype_Content_arc_util_serialization_JsonValue, "(Lmindustry/ctype/Content;Larc/util/serialization/JsonValue;)V", 4098 },
	{ "lambda$new$21", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$21_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_TeamEntry, VTABLE_mindustry_mod_ContentParser_lambda$new$21_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_TeamEntry, "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/TeamEntry;", 4098 },
	{ "lambda$new$22", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$22_mindustry_type_TeamEntry_arc_util_serialization_JsonValue, VTABLE_mindustry_mod_ContentParser_lambda$new$22_mindustry_type_TeamEntry_arc_util_serialization_JsonValue, "(Lmindustry/type/TeamEntry;Larc/util/serialization/JsonValue;)V", 4098 },
	{ "lambda$new$16", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$16_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Planet, VTABLE_mindustry_mod_ContentParser_lambda$new$16_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Planet, "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/Planet;", 4098 },
	{ "lambda$new$20", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$20_mindustry_type_Planet_arc_util_serialization_JsonValue, VTABLE_mindustry_mod_ContentParser_lambda$new$20_mindustry_type_Planet_arc_util_serialization_JsonValue, "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)V", 4098 },
	{ "lambda$new$19", (intptr_t) SM_mindustry_mod_ContentParser_lambda$new$19_arc_util_serialization_JsonValue_mindustry_game_Rules, 0, "(Larc/util/serialization/JsonValue;Lmindustry/game/Rules;)V", 4106 },
	{ "lambda$new$18", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$18_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh, VTABLE_mindustry_mod_ContentParser_lambda$new$18_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh, "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)Lmindustry/graphics/g3d/GenericMesh;", 4098 },
	{ "lambda$new$17", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$17_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh, VTABLE_mindustry_mod_ContentParser_lambda$new$17_mindustry_type_Planet_arc_util_serialization_JsonValue_R_mindustry_graphics_g3d_GenericMesh, "(Lmindustry/type/Planet;Larc/util/serialization/JsonValue;)Lmindustry/graphics/g3d/GenericMesh;", 4098 },
	{ "lambda$new$13", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$13_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_SectorPreset, VTABLE_mindustry_mod_ContentParser_lambda$new$13_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_SectorPreset, "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/SectorPreset;", 4098 },
	{ "lambda$new$14", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$14_mindustry_type_SectorPreset_arc_util_serialization_JsonValue, VTABLE_mindustry_mod_ContentParser_lambda$new$14_mindustry_type_SectorPreset_arc_util_serialization_JsonValue, "(Lmindustry/type/SectorPreset;Larc/util/serialization/JsonValue;)V", 4098 },
	{ "lambda$new$15", (intptr_t) SM_mindustry_mod_ContentParser_lambda$new$15_arc_util_serialization_JsonValue_mindustry_game_Rules, 0, "(Larc/util/serialization/JsonValue;Lmindustry/game/Rules;)V", 4106 },
	{ "lambda$new$9", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$9_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_StatusEffect, VTABLE_mindustry_mod_ContentParser_lambda$new$9_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_StatusEffect, "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/StatusEffect;", 4098 },
	{ "lambda$new$11", (intptr_t) SM_mindustry_mod_ContentParser_lambda$new$11_mindustry_type_StatusEffect, 0, "(Lmindustry/type/StatusEffect;)V", 4106 },
	{ "lambda$new$12", (intptr_t) SM_mindustry_mod_ContentParser_lambda$new$12_mindustry_type_StatusEffect_mindustry_gen_Unit_mindustry_entities_units_StatusEntry_float, 0, "(Lmindustry/type/StatusEffect;Lmindustry/gen/Unit;Lmindustry/entities/units/StatusEntry;F)V", 4106 },
	{ "lambda$new$10", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$10_mindustry_type_StatusEffect_arc_util_serialization_JsonValue, VTABLE_mindustry_mod_ContentParser_lambda$new$10_mindustry_type_StatusEffect_arc_util_serialization_JsonValue, "(Lmindustry/type/StatusEffect;Larc/util/serialization/JsonValue;)V", 4098 },
	{ "lambda$new$7", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$7_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Liquid, VTABLE_mindustry_mod_ContentParser_lambda$new$7_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Liquid, "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/Liquid;", 4098 },
	{ "lambda$new$8", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$8_mindustry_type_Liquid_arc_util_serialization_JsonValue, VTABLE_mindustry_mod_ContentParser_lambda$new$8_mindustry_type_Liquid_arc_util_serialization_JsonValue, "(Lmindustry/type/Liquid;Larc/util/serialization/JsonValue;)V", 4098 },
	{ "lambda$new$5", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$5_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Weather, VTABLE_mindustry_mod_ContentParser_lambda$new$5_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_Weather, "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/Weather;", 4098 },
	{ "lambda$new$6", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$6_mindustry_type_Weather_arc_util_serialization_JsonValue, VTABLE_mindustry_mod_ContentParser_lambda$new$6_mindustry_type_Weather_arc_util_serialization_JsonValue, "(Lmindustry/type/Weather;Larc/util/serialization/JsonValue;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$2_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_UnitType, VTABLE_mindustry_mod_ContentParser_lambda$new$2_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_type_UnitType, "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/type/UnitType;", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$3_mindustry_type_UnitType_arc_util_serialization_JsonValue, VTABLE_mindustry_mod_ContentParser_lambda$new$3_mindustry_type_UnitType_arc_util_serialization_JsonValue, "(Lmindustry/type/UnitType;Larc/util/serialization/JsonValue;)V", 4098 },
	{ "lambda$new$4", (intptr_t) SM_mindustry_mod_ContentParser_lambda$new$4_arc_func_Prov_mindustry_gen_Unit_R_mindustry_entities_units_UnitController, 0, "(Larc/func/Prov;Lmindustry/gen/Unit;)Lmindustry/entities/units/UnitController;", 4106 },
	{ "lambda$new$0", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$0_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_world_Block, VTABLE_mindustry_mod_ContentParser_lambda$new$0_java_lang_String_java_lang_String_arc_util_serialization_JsonValue_R_mindustry_world_Block, "(Ljava/lang/String;Ljava/lang/String;Larc/util/serialization/JsonValue;)Lmindustry/world/Block;", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_mod_ContentParser_lambda$new$1_arc_util_serialization_JsonValue_mindustry_world_Block, VTABLE_mindustry_mod_ContentParser_lambda$new$1_arc_util_serialization_JsonValue_mindustry_world_Block, "(Larc/util/serialization/JsonValue;Lmindustry/world/Block;)V", 4098 },
	{ "lambda$readBlockConsumers$1", (intptr_t) SM_mindustry_mod_ContentParser_lambda$readBlockConsumers$1_java_lang_Class_mindustry_world_consumers_Consume_R_boolean, 0, "(Ljava/lang/Class;Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "lambda$readBlockConsumers$0", (intptr_t) SM_mindustry_mod_ContentParser_lambda$readBlockConsumers$0_mindustry_world_consumers_Consume_R_boolean, 0, "(Lmindustry/world/consumers/Consume;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_mod_ContentParser, 0, "()V", 8 },
};

Class class_mindustry_mod_ContentParser{
		.nativeName = (intptr_t) "mindustry/mod/ContentParser",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_ContentParser),
		.classVtable = (intptr_t) vtable_mindustry_mod_ContentParser,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_ContentParser,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_ContentParser,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 74,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 72,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_ContentParser = registerClass(&class_mindustry_mod_ContentParser);

}
