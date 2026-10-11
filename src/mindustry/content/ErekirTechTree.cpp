#include "mindustry/content/ErekirTechTree.h"
#include "mindustry/content/TechTree_TechNode.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_170.h"
#include "mindustry/content/TechTree.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_171.h"
#include "java/lang/Runnable.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_174.h"
#include "mindustry/game/Objectives_Research.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_175.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_172.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_173.h"
#include "mindustry/content/SectorPresets.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_178.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_211.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_179.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_212.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_176.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_177.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_210.h"
#include "arc/struct/Seq.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_215.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_216.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_213.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_214.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_219.h"
#include "arc/func/Boolf.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_217.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_218.h"
#include "java/util/Iterator.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_160.h"
#include "arc/struct/ObjectMap_Values.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_163.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_164.h"
#include "java/lang/Object.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_161.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_162.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_167.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_200.h"
#include "mindustry/content/Planets.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_168.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_201.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_165.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_166.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_204.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_205.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_169.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_202.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_203.h"
#include "mindustry/entities/bullet/BulletType.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_208.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_209.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_206.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_207.h"
#include "mindustry/world/blocks/defense/turrets/ContinuousLiquidTurret.h"
#include "mindustry/game/Objectives_Objective.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_270.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_152.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_273.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_153.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_274.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_150.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_271.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_151.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_272.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_156.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_277.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_157.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_278.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_154.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_275.h"
#include "mindustry/world/blocks/defense/turrets/ContinuousTurret.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_155.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_276.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_158.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_279.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_159.h"
#include "mindustry/content/UnitTypes.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_141.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_262.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_142.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_263.h"
#include "mindustry/game/Objectives_OnPlanet.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_260.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_140.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_261.h"
#include "mindustry/type/ItemStack.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_145.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_266.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_146.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_267.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_143.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_264.h"
#include "mindustry/type/unit/ErekirUnitType.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_144.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_265.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_149.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_147.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_268.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_148.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_269.h"
#include "mindustry/content/ErekirTechTree.h"
#include "mindustry/Vars.h"
#include "arc/struct/ObjectFloatMap.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_251.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_252.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_250.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_255.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_256.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_253.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_254.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_259.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_257.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_258.h"
#include "mindustry/type/Liquid.h"
#include "arc/util/Structs.h"
#include "mindustry/type/Item.h"
#include "mindustry/world/blocks/defense/turrets/ItemTurret.h"
#include "mindustry/content/Items.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_240.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_241.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_244.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_245.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_242.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_243.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_248.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_249.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_246.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_247.h"
#include "mindustry/content/Liquids.h"
#include "mindustry/type/SectorPreset.h"
#include "mindustry/content/ErekirTechTree_invoke_arc_func_Boolf_2.h"
#include "mindustry/type/Weapon.h"
#include "mindustry/world/Block.h"
#include "mindustry/content/ErekirTechTree_invoke_arc_func_Boolf_3.h"
#include "mindustry/world/blocks/defense/turrets/Turret.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_192.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_193.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_190.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_191.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_196.h"
#include "arc/struct/IntSet.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_197.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_230.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_194.h"
#include "java/lang/String.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_195.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_233.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_234.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_198.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_231.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_199.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_232.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_237.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_238.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_235.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_236.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_239.h"
#include "mindustry/game/Objectives_OnSector.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_181.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_182.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_180.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_185.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_186.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_183.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_184.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_189.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_222.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_223.h"
#include "mindustry/type/Planet.h"
#include "mindustry/game/Objectives_SectorComplete.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_187.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_220.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_188.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_221.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_226.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_227.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_224.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_225.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_228.h"
#include "mindustry/content/ErekirTechTree_invoke_java_lang_Runnable_229.h"

extern "C" {

jobject SF_mindustry_content_ErekirTechTree_balanced;

void mark_mindustry_content_ErekirTechTree(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_content_ErekirTechTree_balanced)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_ErekirTechTree_balanced)->clazz)->markFunction)((jobject) SF_mindustry_content_ErekirTechTree_balanced, mark, depth + 1);
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
	auto self = (mindustry_content_ErekirTechTree *) object;
}

void init_mindustry_content_ErekirTechTree(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_rebalanceBullet_mindustry_entities_bullet_BulletType(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:rebalanceBullet", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(20);
	clinit_mindustry_content_ErekirTechTree(ctx);
	sp[0].o = (jobject)SF_mindustry_content_ErekirTechTree_balanced;
	jint temp0 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[0].o)))->F_id));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_damage = (((jfloat)((mindustry_entities_bullet_BulletType *) NULL_CHECK(sp[0].o))->F_damage) * (jfloat(0.75f)));
	}
label_1:;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_rebalance(jcontext ctx) {
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:rebalance", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(27);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_units_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_units_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_arc_func_Boolf_2(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_arc_func_Boolf_2 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_arc_func_Boolf_2);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_mindustry_type_UnitType, sp[0].o));
	LINE_NUMBER(28);
	sp[0].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK((frame[1].o)))->F_weapons;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Weapon, sp[0].o));
	LINE_NUMBER(29);
	sp[0].o = (jobject)((mindustry_type_Weapon *) NULL_CHECK((frame[3].o)))->F_bullet;
	SM_mindustry_content_ErekirTechTree_rebalanceBullet_mindustry_entities_bullet_BulletType(ctx, sp[0].o);
	LINE_NUMBER(30);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(31);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(33);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_blocks_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[0].o)))(ctx, (frame[0].o));
	frame[1].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(34);
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_world_blocks_defense_turrets_Turret)) == 0) goto label_11;
	}
	{
	frame[2].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_Turret, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_requirements;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_arc_func_Boolf_3(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_arc_func_Boolf_3 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_arc_func_Boolf_3);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(35);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_defense_turrets_ItemTurret)) == 0) goto label_14;
	}
	{
	frame[3].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_ItemTurret, (frame[2].o)));
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ItemTurret *) NULL_CHECK((frame[3].o)))->F_ammoTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	LINE_NUMBER(37);
	SM_mindustry_content_ErekirTechTree_rebalanceBullet_mindustry_entities_bullet_BulletType(ctx, (frame[7].o));
	LINE_NUMBER(38);
	goto label_16;
	}
label_17:;
	goto label_11;
label_14:;
	{
	LINE_NUMBER(39);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret)) == 0) goto label_20;
	}
	{
	frame[4].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret, (frame[2].o)));
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ContinuousLiquidTurret *) NULL_CHECK((frame[4].o)))->F_ammoTypes;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_22:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_entities_bullet_BulletType, sp[0].o));
	LINE_NUMBER(41);
	SM_mindustry_content_ErekirTechTree_rebalanceBullet_mindustry_entities_bullet_BulletType(ctx, (frame[7].o));
	LINE_NUMBER(42);
	goto label_22;
	}
label_23:;
	goto label_11;
label_20:;
	{
	LINE_NUMBER(43);
	if ((isInstance(ctx, (frame[2].o), &class_mindustry_world_blocks_defense_turrets_ContinuousTurret)) == 0) goto label_11;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_world_blocks_defense_turrets_ContinuousTurret, (frame[2].o)));
	LINE_NUMBER(44);
	sp[0].o = (jobject)((mindustry_world_blocks_defense_turrets_ContinuousTurret *) NULL_CHECK((frame[5].o)))->F_shootType;
	SM_mindustry_content_ErekirTechTree_rebalanceBullet_mindustry_entities_bullet_BulletType(ctx, sp[0].o);
	}
label_11:;
	LINE_NUMBER(47);
	goto label_8;
label_9:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_load(jcontext ctx) {
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:load", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(51);
	SM_mindustry_content_ErekirTechTree_rebalance(ctx);
	LINE_NUMBER(54);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnPlanet(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnPlanet);
	clinit_mindustry_content_Planets(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Planets_erekir;
	init_mindustry_game_Objectives$OnPlanet_mindustry_type_Planet(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(56);
	clinit_arc_struct_ObjectFloatMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectFloatMap);
	init_arc_struct_ObjectFloatMap(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(57);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_items_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_items_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_4:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_type_Item, sp[0].o));
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, (frame[1].o), (frame[3].o), (jfloat(0.9f)));
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(60);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_oxide;
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, (jfloat(0.5f)));
	LINE_NUMBER(61);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_surgeAlloy;
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, (jfloat(0.7f)));
	LINE_NUMBER(62);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_carbide;
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, (jfloat(0.3f)));
	LINE_NUMBER(63);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_phaseFabric;
	((func_arc_struct_ObjectFloatMap_put_java_lang_Object_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectFloatMap_put_java_lang_Object_float])(ctx, sp[0].o, sp[1].o, (jfloat(0.2f)));
	LINE_NUMBER(65);
	clinit_mindustry_content_Planets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Planets_erekir;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"erekir"_j));
	clinit_mindustry_content_Blocks(ctx);
	sp[2].o = (jobject)SF_mindustry_content_Blocks_coreBastion;
	jint temp0 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_140(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_140 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_140);
		proxy->F_field1 = (jref) (frame[0].o);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_mindustry_content_TechTree_nodeRoot_java_lang_String_mindustry_ctype_UnlockableContent_boolean_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[1].o, sp[2].o, temp0, sp[3].o);
	((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_techTree = (jref) sp[1].o;
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$0_arc_struct_ObjectFloatMap_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$0", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)SM_mindustry_content_TechTree_context_R_mindustry_content_TechTree$TechNode(ctx);
	((mindustry_content_TechTree$TechNode *) NULL_CHECK(sp[0].o))->F_researchCostMultipliers = (jref) (frame[0].o);
	LINE_NUMBER(68);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_duct;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_141(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_141 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_141);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(136);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_plasmaBore;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_142(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_142 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_142);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(150);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_turbineCondenser;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_143(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_143 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_143);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(251);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_breach;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_siliconArcFurnace;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_tankFabricator;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_144(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_144 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_144);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(308);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_coreCitadel;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp2 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_peaks;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_145(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_145 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_145);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(314);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_tankFabricator;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(3)));
	jint temp3 = jint(0);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_siliconArcFurnace;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_plasmaBore;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(2);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_turbineCondenser;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_146(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_146 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_146);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(377);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_onset;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_147(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_147 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_147);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(419);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_beryllium;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_148(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_148 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_148);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$122(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$122", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(420);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_sand;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_149(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_149 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_149);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(428);
	clinit_mindustry_content_Liquids(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Liquids_water;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_150(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_150 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_150);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(444);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_graphite;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_151(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_151 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_151);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$132(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$132", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(445);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_tungsten;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_152(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_152 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_152);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(467);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$133(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$133", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(446);
	clinit_mindustry_content_Liquids(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Liquids_slag;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_153(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_153 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_153);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(450);
	clinit_mindustry_content_Liquids(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Liquids_arkycite;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_154(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_154 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_154);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(454);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_thorium;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_155(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_155 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_155);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(461);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_surgeAlloy;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_156(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_156 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_156);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(466);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$138(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$138", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(462);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_phaseFabric;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_157(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_157 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_157);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(465);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$139(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$139", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(464);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$136(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$136", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(455);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_carbide;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_158(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_158 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_158);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$137(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$137", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(458);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$135(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$135", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(452);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$134(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$134", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(448);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$126(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$126", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(429);
	clinit_mindustry_content_Liquids(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Liquids_ozone;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_159(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_159 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_159);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(442);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$127(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$127", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(430);
	clinit_mindustry_content_Liquids(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Liquids_hydrogen;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_160(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_160 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_160);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(441);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$128(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$128", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(431);
	clinit_mindustry_content_Liquids(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Liquids_nitrogen;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_161(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_161 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_161);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(435);
	clinit_mindustry_content_Liquids(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Liquids_cyanogen;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_162(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_162 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_162);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(440);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$130(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$130", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(436);
	clinit_mindustry_content_Liquids(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Liquids_neoplasm;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_163(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_163 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_163);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(439);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$131(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$131", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(438);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$129(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$129", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(433);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$123(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$123", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(421);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_silicon;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_164(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_164 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_164);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$124(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$124", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(422);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_oxide;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_165(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_165 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_165);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_nodeProduce_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(425);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$125(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$125", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(424);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$105(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$105", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(378);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_aegis;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_onset;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ductRouter;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ductBridge;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_166(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_166 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_166);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$106(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$106", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(379);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_lake;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_aegis;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_167(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_167 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_167);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(383);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_intersect;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(4)));
	jint temp1 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_aegis;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(1);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_lake;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(2);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_ventCondenser;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(3);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_shipFabricator;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_168(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_168 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_168);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$108(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$108", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(384);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_atlas;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_intersect;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_mechFabricator;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_169(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_169 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_169);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(415);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$109(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$109", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(385);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_split;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_atlas;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_reinforcedPayloadConveyor;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_reinforcedContainer;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_170(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_170 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_170);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(389);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_basin;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp3 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_atlas;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_171(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_171 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_171);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$111(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$111", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(390);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_marsh;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_basin;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_172(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_172 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_172);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(413);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$112(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$112", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(391);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_ravine;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_marsh;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Liquids(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Liquids_slag;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_173(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_173 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_173);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(409);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_peaks;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(2)));
	jint temp2 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_marsh;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(1);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_split;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_174(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_174 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_174);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$121(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$121", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(411);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$113(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$113", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(392);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_caldera;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(3)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_peaks;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_ravine;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_heatRedirector;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_175(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_175 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_175);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$114(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$114", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(393);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_stronghold;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_caldera;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_coreCitadel;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_176(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_176 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_176);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$115(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$115", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(394);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_crevice;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_stronghold;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_177(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_177 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_177);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(405);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$116(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$116", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(395);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_siege;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_crevice;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_178(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_178 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_178);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$117(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$117", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(396);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_crossroads;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_siege;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_179(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_179 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_179);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$118(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$118", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(397);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_karst;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_crossroads;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_coreAcropolis;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_180(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_180 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_180);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$119(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$119", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(398);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_origin;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (8));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_karst;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_coreAcropolis;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(2);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[3].o = (jobject)SF_mindustry_content_UnitTypes_vanquish;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(3);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[3].o = (jobject)SF_mindustry_content_UnitTypes_disrupt;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(4);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[3].o = (jobject)SF_mindustry_content_UnitTypes_collaris;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	jint temp5 = jint(5);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_malign;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp5) = sp[2].o;
	jint temp6 = 6;
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_basicAssemblerModule;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp6) = sp[2].o;
	jint temp7 = 7;
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_neoplasiaReactor;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp7) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_181(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_181 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_181);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(401);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$120(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$120", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(400);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$110(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$110", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(387);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$107(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$107", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(381);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$87(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$87", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(315);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_stell;
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o);
	LINE_NUMBER(317);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_unitRepairTower;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_ravine;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_mechRefabricator;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_182(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_182 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_182);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(321);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_shipFabricator;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp2 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_lake;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_183(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_183 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_183);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(375);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$89(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$89", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(322);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_elude;
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o);
	LINE_NUMBER(324);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_mechFabricator;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_intersect;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_184(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_184 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_184);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$90(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$90", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(325);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_merui;
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o);
	LINE_NUMBER(327);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_tankRefabricator;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_atlas;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_185(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_185 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_185);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$91(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$91", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(328);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_locus;
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o);
	LINE_NUMBER(330);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_mechRefabricator;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_basin;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_186(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_186 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_186);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$92(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$92", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(331);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_cleroi;
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o);
	LINE_NUMBER(333);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_shipRefabricator;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_peaks;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_187(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_187 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_187);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$93(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$93", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(334);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_avert;
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o);
	LINE_NUMBER(336);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_primeRefabricator;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_stronghold;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_188(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_188 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_188);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(342);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_tankAssembler;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(3)));
	jint temp1 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_siege;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_constructor;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(2);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_atmosphericConcentrator;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_189(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_189 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_189);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(370);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$95(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$95", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(344);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_vanquish;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_190(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_190 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_190);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(350);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_shipAssembler;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_crossroads;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_191(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_191 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_191);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(358);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_mechAssembler;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp1 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_crossroads;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_192(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_192 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_192);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(366);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_basicAssemblerModule;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp2 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_karst;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_193(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_193 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_193);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$104(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$104", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(368);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$101(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$101", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(359);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_tecta;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_194(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_194 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_194);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$102(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$102", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(360);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_collaris;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_karst;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_195(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_195 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_195);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(363);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$103(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$103", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(362);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$98(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$98", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(351);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_quell;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_196(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_196 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_196);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$99(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$99", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(352);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_disrupt;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_karst;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_197(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_197 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_197);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$100(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$100", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(354);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$96(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$96", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(345);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_conquer;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_karst;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_198(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_198 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_198);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$97(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$97", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(347);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$94(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$94", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(337);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_precept;
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o);
	LINE_NUMBER(338);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_anthicus;
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o);
	LINE_NUMBER(339);
	clinit_mindustry_content_UnitTypes(ctx);
	sp[0].o = (jobject)SF_mindustry_content_UnitTypes_obviate;
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o);
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$88(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$88", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(319);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$85(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$85", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(309);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_coreAcropolis;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_siege;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_199(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_199 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_199);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$86(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$86", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(311);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$64(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$64", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(252);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_berylliumWall;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_200(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_200 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_200);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(280);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_diffuse;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_lake;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_201(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_201 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_201);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(303);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_radar;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(4)));
	jint temp1 = jint(0);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_beamNode;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	jint temp2 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_turbineCondenser;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	jint temp3 = jint(2);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_tankFabricator;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp3) = sp[2].o;
	jint temp4 = jint(3);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_aegis;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp4) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_202(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_202 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_202);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$84(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$84", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(305);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$75(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$75", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(281);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_sublimate;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_marsh;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_203(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_203 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_203);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(293);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_disperse;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp1 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_stronghold;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_204(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_204 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_204);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$81(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$81", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(294);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_scathe;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_siege;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_205(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_205 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_205);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$82(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$82", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(295);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_malign;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_karst;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_206(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_206 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_206);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$83(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$83", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(297);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$76(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$76", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(282);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_afflict;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_ravine;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_207(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_207 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_207);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(291);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$77(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$77", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(283);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_titan;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_stronghold;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_208(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_208 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_208);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$78(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$78", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(284);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_lustre;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_crevice;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_209(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_209 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_209);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$79(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$79", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(285);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_smite;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_karst;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_210(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_210 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_210);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(288);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$80(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$80", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$65(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$65", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(253);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_berylliumWallLarge;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_211(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_211 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_211);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(257);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_tungstenWall;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_212(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_212 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_212);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(278);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$67(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$67", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(258);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_tungstenWallLarge;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_213(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_213 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_213);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(264);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedSurgeWall;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_214(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_214 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_214);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(272);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_carbideWall;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_215(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_215 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_215);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$73(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$73", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(273);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_carbideWallLarge;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_216(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_216 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_216);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(276);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$74(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$74", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(275);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$70(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$70", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(265);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedSurgeWallLarge;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_217(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_217 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_217);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$71(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$71", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(266);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_shieldedWall;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_218(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_218 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_218);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(269);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$72(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$72", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(268);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$68(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$68", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(259);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_blastDoor;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_219(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_219 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_219);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$69(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$69", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(261);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$66(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$66", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(255);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$29(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$29", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(151);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_beamNode;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_220(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_220 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_220);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(181);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedConduit;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_aegis;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_221(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_221 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_221);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(202);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_cliffCrusher;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_222(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_222 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_222);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(248);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$48(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$48", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(203);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_siliconArcFurnace;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_223(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_223 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_223);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$49(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$49", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(204);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_electrolyzer;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_atlas;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_224(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_224 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_224);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$50(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$50", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(205);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_oxidationChamber;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_tankRefabricator;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_marsh;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_225(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_225 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_225);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(239);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_slagIncinerator;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp2 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_basin;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_226(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_226 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_226);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$63(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$63", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(244);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$51(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$51", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(207);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_surgeCrucible;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_ravine;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_227(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_227 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_227);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(210);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_heatRedirector;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp1 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_ravine;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_228(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_228 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_228);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$53(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$53", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(211);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_electricHeater;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_ravine;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_afflict;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_229(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_229 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_229);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$54(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$54", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(212);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_slagHeater;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_caldera;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_230(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_230 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_230);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(216);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_atmosphericConcentrator;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp1 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_caldera;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_231);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(222);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_carbideCrucible;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp2 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_crevice;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_232(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_232 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_232);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(230);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_heatRouter;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_233(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_233 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_233);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$61(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$61", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(231);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_smallHeatRedirector;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_234(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_234 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_234);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(234);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$62(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$62", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(233);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$58(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$58", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(223);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_phaseSynthesizer;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_karst;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_235(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_235 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_235);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(228);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$59(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$59", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(224);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_phaseHeater;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_phaseSynthesizer;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_236(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_236 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_236);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$60(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$60", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(226);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$56(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$56", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(217);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_cyanogenSynthesizer;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_siege;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_237(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_237 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_237);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$57(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$57", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(219);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$55(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$55", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(214);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$52(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$52", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(209);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$41(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$41", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(183);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedPump;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_basin;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_238(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_238 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_238);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(187);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedLiquidJunction;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_239(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_239 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_239);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$43(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$43", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(188);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedBridgeConduit;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_240(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_240 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_240);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(192);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedLiquidRouter;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_241(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_241 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_241);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$45(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$45", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(193);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedLiquidContainer;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_242(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_242 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_242);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$46(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$46", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(194);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedLiquidTank;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$SectorComplete(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$SectorComplete);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_intersect;
	init_mindustry_game_Objectives$SectorComplete_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_243(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_243 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_243);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$47(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$47", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(196);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$44(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$44", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(190);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$42(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$42", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(185);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$30(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$30", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(152);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_ventCondenser;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_aegis;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_244(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_244 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_244);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(164);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_beamTower;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp1 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_peaks;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_245(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_245 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_245);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(171);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_regenProjector;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp2 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_peaks;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp2) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_246(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_246 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_246);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$38(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$38", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(173);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_buildTower;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_stronghold;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_247(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_247 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_247);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$39(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$39", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(174);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_shockwaveTower;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_siege;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_248(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_248 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_248);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(177);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$40(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$40", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(176);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$36(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$36", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(165);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_beamLink;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_crossroads;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_249(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_249 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_249);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$37(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$37", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(167);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$31(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$31", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(153);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_chemicalCombustionChamber;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_basin;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_250(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_250 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_250);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$32(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$32", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(154);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_pyrolysisGenerator;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_crevice;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_251(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_251 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_251);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$33(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$33", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(155);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_fluxReactor;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_crossroads;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_cyanogenSynthesizer;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_252(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_252 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_252);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(160);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$34(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$34", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(156);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_neoplasiaReactor;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_karst;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_253(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_253 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_253);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$35(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$35", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(158);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$24(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$24", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(137);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_impactDrill;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_aegis;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_254(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_254 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_254);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(148);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$25(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$25", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(138);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_largePlasmaBore;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_caldera;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_255(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_255 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_255);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(147);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$26(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$26", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(139);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_eruptionDrill;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_stronghold;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_256(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_256 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_256);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(143);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_largeCliffCrusher;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp1 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_stronghold;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_257(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_257 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_257);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(146);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$28(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$28", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$27(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$27", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(141);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$1(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(69);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_ductRouter;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_258(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_258 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_258);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(104);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedPayloadConveyor;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_atlas;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_259(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_259 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_259);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$14(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$14", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(106);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_payloadMassDriver;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$Research(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$Research);
	clinit_mindustry_content_Blocks(ctx);
	sp[3].o = (jobject)SF_mindustry_content_Blocks_siliconArcFurnace;
	init_mindustry_game_Objectives$Research_mindustry_ctype_UnlockableContent(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_split;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_260(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_260 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_260);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(129);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedPayloadRouter;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_261(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_261 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_261);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(132);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$23(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$23", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(131);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$15(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$15", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(108);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_payloadLoader;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_262(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_262 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_262);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(116);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_constructor;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_split;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_263(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_263 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_263);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$19(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$19", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(117);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_smallDeconstructor;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_peaks;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_264(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_264 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_264);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$20(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$20", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(118);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_largeConstructor;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_siege;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_265(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_265 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_265);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(122);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_deconstructor;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp1 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_siege;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_266(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_266 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_266);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(125);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$22(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$22", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(124);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$21(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$21", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(120);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$16(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$16", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(109);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_payloadUnloader;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_267(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_267 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_267);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$17(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$17", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(110);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_largePayloadMassDriver;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_268(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_268 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_268);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$18(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$18", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(112);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$2(jcontext ctx) {
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(70);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_ductBridge;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_269(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_269 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_269);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(84);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_overflowDuct;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp0 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_aegis;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_270(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_270 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_270);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(97);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedMessage;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_Objectives$Objective, (jint(1)));
	jint temp1 = jint(0);
	clinit_mindustry_game_Objectives$OnSector(ctx);
	sp[2].o = gcAlloc(ctx, &class_mindustry_game_Objectives$OnSector);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[3].o = (jobject)SF_mindustry_content_SectorPresets_aegis;
	init_mindustry_game_Objectives$OnSector_mindustry_type_SectorPreset(ctx, sp[2].o, sp[3].o);
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	sp[1].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_271(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_271 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_271);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_arc_struct_Seq_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$12(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$12", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(98);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_canvas;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_272(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_272 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_272);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$13(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$13", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(99);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_largeCanvas;
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o);
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$8(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(85);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_underflowDuct;
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o);
	LINE_NUMBER(86);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedContainer;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_273(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_273 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_273);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$9(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$9", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(87);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_ductUnloader;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_274(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_274 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_274);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(91);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_reinforcedVault;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_275(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_275 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_275);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$11(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$11", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(93);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$10(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$10", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$3(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(71);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_armoredDuct;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_276(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_276 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_276);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(77);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_unitCargoLoader;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_277(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_277 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_277);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$6(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(78);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_unitCargoUnloadPoint;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_278(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_278 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_278);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$7(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$7", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	LINE_NUMBER(80);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$4(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(72);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_surgeConveyor;
	{ /* InvokeDynamic */
		clinit_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_279(ctx);
		auto proxy = (mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_279 *) gcAlloc(ctx, &class_mindustry_content_ErekirTechTree_invoke_java_lang_Runnable_279);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_java_lang_Runnable_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_ErekirTechTree_lambda$load$5(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$load$5", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(73);
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_surgeRouter;
	sp[0].o = (jobject)SM_mindustry_content_TechTree_node_mindustry_ctype_UnlockableContent_R_mindustry_content_TechTree$TechNode(ctx, sp[0].o);
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_content_ErekirTechTree_lambda$rebalance$1_mindustry_type_ItemStack_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$rebalance$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(34);
	clinit_mindustry_content_Items(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Items_serpuloItems;
	sp[1].o = (jobject)((mindustry_type_ItemStack *) NULL_CHECK((frame[0].o)))->F_item;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool SM_mindustry_content_ErekirTechTree_lambda$rebalance$0_mindustry_type_UnitType_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:lambda$rebalance$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(27);
	popStackFrame(ctx);
	return (isInstance(ctx, (frame[0].o), &class_mindustry_type_unit_ErekirUnitType));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_content_ErekirTechTree(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/ErekirTechTree:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_ErekirTechTree(ctx);
	{
	LINE_NUMBER(17);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	clinit_mindustry_content_ErekirTechTree(ctx);
	SF_mindustry_content_ErekirTechTree_balanced = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_ErekirTechTree[] {
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
};

static FieldMetadata fields[] {
	{ "balanced", &class_arc_struct_IntSet, (intptr_t) &SF_mindustry_content_ErekirTechTree_balanced, "Larc/struct/IntSet;", 8 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_ErekirTechTree, 0, "()V", 1 },
	{ "rebalanceBullet", (intptr_t) SM_mindustry_content_ErekirTechTree_rebalanceBullet_mindustry_entities_bullet_BulletType, 0, "(Lmindustry/entities/bullet/BulletType;)V", 8 },
	{ "rebalance", (intptr_t) SM_mindustry_content_ErekirTechTree_rebalance, 0, "()V", 9 },
	{ "load", (intptr_t) SM_mindustry_content_ErekirTechTree_load, 0, "()V", 9 },
	{ "lambda$load$0", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$0_arc_struct_ObjectFloatMap_arc_struct_Seq, 0, "(Larc/struct/ObjectFloatMap;Larc/struct/Seq;)V", 4106 },
	{ "lambda$load$122", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$122, 0, "()V", 4106 },
	{ "lambda$load$132", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$132, 0, "()V", 4106 },
	{ "lambda$load$133", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$133, 0, "()V", 4106 },
	{ "lambda$load$138", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$138, 0, "()V", 4106 },
	{ "lambda$load$139", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$139, 0, "()V", 4106 },
	{ "lambda$load$136", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$136, 0, "()V", 4106 },
	{ "lambda$load$137", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$137, 0, "()V", 4106 },
	{ "lambda$load$135", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$135, 0, "()V", 4106 },
	{ "lambda$load$134", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$134, 0, "()V", 4106 },
	{ "lambda$load$126", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$126, 0, "()V", 4106 },
	{ "lambda$load$127", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$127, 0, "()V", 4106 },
	{ "lambda$load$128", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$128, 0, "()V", 4106 },
	{ "lambda$load$130", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$130, 0, "()V", 4106 },
	{ "lambda$load$131", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$131, 0, "()V", 4106 },
	{ "lambda$load$129", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$129, 0, "()V", 4106 },
	{ "lambda$load$123", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$123, 0, "()V", 4106 },
	{ "lambda$load$124", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$124, 0, "()V", 4106 },
	{ "lambda$load$125", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$125, 0, "()V", 4106 },
	{ "lambda$load$105", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$105, 0, "()V", 4106 },
	{ "lambda$load$106", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$106, 0, "()V", 4106 },
	{ "lambda$load$108", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$108, 0, "()V", 4106 },
	{ "lambda$load$109", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$109, 0, "()V", 4106 },
	{ "lambda$load$111", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$111, 0, "()V", 4106 },
	{ "lambda$load$112", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$112, 0, "()V", 4106 },
	{ "lambda$load$121", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$121, 0, "()V", 4106 },
	{ "lambda$load$113", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$113, 0, "()V", 4106 },
	{ "lambda$load$114", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$114, 0, "()V", 4106 },
	{ "lambda$load$115", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$115, 0, "()V", 4106 },
	{ "lambda$load$116", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$116, 0, "()V", 4106 },
	{ "lambda$load$117", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$117, 0, "()V", 4106 },
	{ "lambda$load$118", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$118, 0, "()V", 4106 },
	{ "lambda$load$119", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$119, 0, "()V", 4106 },
	{ "lambda$load$120", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$120, 0, "()V", 4106 },
	{ "lambda$load$110", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$110, 0, "()V", 4106 },
	{ "lambda$load$107", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$107, 0, "()V", 4106 },
	{ "lambda$load$87", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$87, 0, "()V", 4106 },
	{ "lambda$load$89", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$89, 0, "()V", 4106 },
	{ "lambda$load$90", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$90, 0, "()V", 4106 },
	{ "lambda$load$91", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$91, 0, "()V", 4106 },
	{ "lambda$load$92", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$92, 0, "()V", 4106 },
	{ "lambda$load$93", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$93, 0, "()V", 4106 },
	{ "lambda$load$95", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$95, 0, "()V", 4106 },
	{ "lambda$load$104", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$104, 0, "()V", 4106 },
	{ "lambda$load$101", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$101, 0, "()V", 4106 },
	{ "lambda$load$102", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$102, 0, "()V", 4106 },
	{ "lambda$load$103", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$103, 0, "()V", 4106 },
	{ "lambda$load$98", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$98, 0, "()V", 4106 },
	{ "lambda$load$99", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$99, 0, "()V", 4106 },
	{ "lambda$load$100", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$100, 0, "()V", 4106 },
	{ "lambda$load$96", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$96, 0, "()V", 4106 },
	{ "lambda$load$97", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$97, 0, "()V", 4106 },
	{ "lambda$load$94", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$94, 0, "()V", 4106 },
	{ "lambda$load$88", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$88, 0, "()V", 4106 },
	{ "lambda$load$85", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$85, 0, "()V", 4106 },
	{ "lambda$load$86", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$86, 0, "()V", 4106 },
	{ "lambda$load$64", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$64, 0, "()V", 4106 },
	{ "lambda$load$84", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$84, 0, "()V", 4106 },
	{ "lambda$load$75", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$75, 0, "()V", 4106 },
	{ "lambda$load$81", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$81, 0, "()V", 4106 },
	{ "lambda$load$82", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$82, 0, "()V", 4106 },
	{ "lambda$load$83", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$83, 0, "()V", 4106 },
	{ "lambda$load$76", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$76, 0, "()V", 4106 },
	{ "lambda$load$77", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$77, 0, "()V", 4106 },
	{ "lambda$load$78", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$78, 0, "()V", 4106 },
	{ "lambda$load$79", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$79, 0, "()V", 4106 },
	{ "lambda$load$80", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$80, 0, "()V", 4106 },
	{ "lambda$load$65", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$65, 0, "()V", 4106 },
	{ "lambda$load$67", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$67, 0, "()V", 4106 },
	{ "lambda$load$73", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$73, 0, "()V", 4106 },
	{ "lambda$load$74", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$74, 0, "()V", 4106 },
	{ "lambda$load$70", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$70, 0, "()V", 4106 },
	{ "lambda$load$71", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$71, 0, "()V", 4106 },
	{ "lambda$load$72", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$72, 0, "()V", 4106 },
	{ "lambda$load$68", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$68, 0, "()V", 4106 },
	{ "lambda$load$69", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$69, 0, "()V", 4106 },
	{ "lambda$load$66", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$66, 0, "()V", 4106 },
	{ "lambda$load$29", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$29, 0, "()V", 4106 },
	{ "lambda$load$48", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$48, 0, "()V", 4106 },
	{ "lambda$load$49", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$49, 0, "()V", 4106 },
	{ "lambda$load$50", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$50, 0, "()V", 4106 },
	{ "lambda$load$63", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$63, 0, "()V", 4106 },
	{ "lambda$load$51", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$51, 0, "()V", 4106 },
	{ "lambda$load$53", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$53, 0, "()V", 4106 },
	{ "lambda$load$54", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$54, 0, "()V", 4106 },
	{ "lambda$load$61", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$61, 0, "()V", 4106 },
	{ "lambda$load$62", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$62, 0, "()V", 4106 },
	{ "lambda$load$58", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$58, 0, "()V", 4106 },
	{ "lambda$load$59", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$59, 0, "()V", 4106 },
	{ "lambda$load$60", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$60, 0, "()V", 4106 },
	{ "lambda$load$56", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$56, 0, "()V", 4106 },
	{ "lambda$load$57", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$57, 0, "()V", 4106 },
	{ "lambda$load$55", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$55, 0, "()V", 4106 },
	{ "lambda$load$52", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$52, 0, "()V", 4106 },
	{ "lambda$load$41", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$41, 0, "()V", 4106 },
	{ "lambda$load$43", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$43, 0, "()V", 4106 },
	{ "lambda$load$45", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$45, 0, "()V", 4106 },
	{ "lambda$load$46", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$46, 0, "()V", 4106 },
	{ "lambda$load$47", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$47, 0, "()V", 4106 },
	{ "lambda$load$44", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$44, 0, "()V", 4106 },
	{ "lambda$load$42", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$42, 0, "()V", 4106 },
	{ "lambda$load$30", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$30, 0, "()V", 4106 },
	{ "lambda$load$38", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$38, 0, "()V", 4106 },
	{ "lambda$load$39", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$39, 0, "()V", 4106 },
	{ "lambda$load$40", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$40, 0, "()V", 4106 },
	{ "lambda$load$36", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$36, 0, "()V", 4106 },
	{ "lambda$load$37", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$37, 0, "()V", 4106 },
	{ "lambda$load$31", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$31, 0, "()V", 4106 },
	{ "lambda$load$32", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$32, 0, "()V", 4106 },
	{ "lambda$load$33", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$33, 0, "()V", 4106 },
	{ "lambda$load$34", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$34, 0, "()V", 4106 },
	{ "lambda$load$35", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$35, 0, "()V", 4106 },
	{ "lambda$load$24", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$24, 0, "()V", 4106 },
	{ "lambda$load$25", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$25, 0, "()V", 4106 },
	{ "lambda$load$26", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$26, 0, "()V", 4106 },
	{ "lambda$load$28", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$28, 0, "()V", 4106 },
	{ "lambda$load$27", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$27, 0, "()V", 4106 },
	{ "lambda$load$1", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$1, 0, "()V", 4106 },
	{ "lambda$load$14", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$14, 0, "()V", 4106 },
	{ "lambda$load$23", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$23, 0, "()V", 4106 },
	{ "lambda$load$15", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$15, 0, "()V", 4106 },
	{ "lambda$load$19", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$19, 0, "()V", 4106 },
	{ "lambda$load$20", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$20, 0, "()V", 4106 },
	{ "lambda$load$22", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$22, 0, "()V", 4106 },
	{ "lambda$load$21", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$21, 0, "()V", 4106 },
	{ "lambda$load$16", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$16, 0, "()V", 4106 },
	{ "lambda$load$17", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$17, 0, "()V", 4106 },
	{ "lambda$load$18", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$18, 0, "()V", 4106 },
	{ "lambda$load$2", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$2, 0, "()V", 4106 },
	{ "lambda$load$12", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$12, 0, "()V", 4106 },
	{ "lambda$load$13", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$13, 0, "()V", 4106 },
	{ "lambda$load$8", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$8, 0, "()V", 4106 },
	{ "lambda$load$9", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$9, 0, "()V", 4106 },
	{ "lambda$load$11", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$11, 0, "()V", 4106 },
	{ "lambda$load$10", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$10, 0, "()V", 4106 },
	{ "lambda$load$3", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$3, 0, "()V", 4106 },
	{ "lambda$load$6", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$6, 0, "()V", 4106 },
	{ "lambda$load$7", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$7, 0, "()V", 4106 },
	{ "lambda$load$4", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$4, 0, "()V", 4106 },
	{ "lambda$load$5", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$load$5, 0, "()V", 4106 },
	{ "lambda$rebalance$1", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$rebalance$1_mindustry_type_ItemStack_R_boolean, 0, "(Lmindustry/type/ItemStack;)Z", 4106 },
	{ "lambda$rebalance$0", (intptr_t) SM_mindustry_content_ErekirTechTree_lambda$rebalance$0_mindustry_type_UnitType_R_boolean, 0, "(Lmindustry/type/UnitType;)Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_content_ErekirTechTree, 0, "()V", 8 },
};

Class class_mindustry_content_ErekirTechTree{
		.nativeName = (intptr_t) "mindustry/content/ErekirTechTree",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_content_ErekirTechTree),
		.classVtable = (intptr_t) vtable_mindustry_content_ErekirTechTree,
		.staticInitializer = (intptr_t) clinit_mindustry_content_ErekirTechTree,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_ErekirTechTree,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 147,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_content_ErekirTechTree = registerClass(&class_mindustry_content_ErekirTechTree);

}
