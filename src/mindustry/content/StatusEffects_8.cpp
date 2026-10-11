#include "mindustry/content/StatusEffects_8.h"
#include "arc/math/Mathf.h"
#include "java/lang/Math.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/content/StatusEffects_8_invoke_java_lang_Runnable_1.h"
#include "arc/graphics/Color.h"
#include "mindustry/content/StatusEffects_8_invoke_mindustry_type_StatusEffect_TransitionHandler_1.h"
#include "java/lang/Runnable.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/type/StatusEffect_TransitionHandler.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/content/StatusEffects_8.h"
#include "mindustry/gen/Healthc.h"
#include "mindustry/entities/units/StatusEntry.h"

extern "C" {


void mark_mindustry_content_StatusEffects$8(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_type_StatusEffect(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_StatusEffects$8 *) object;
}

void clinit_mindustry_content_StatusEffects$8(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_type_StatusEffect(ctx);
}

void init_mindustry_content_StatusEffects$8_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/StatusEffects$8:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_StatusEffects$8(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(102);
	init_mindustry_type_StatusEffect_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"ffa166"_j))));
	((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(104);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_speedMultiplier = (jfloat(0.8f));
	LINE_NUMBER(105);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_healthMultiplier = (jfloat(0.8f));
	LINE_NUMBER(106);
	((mindustry_type_StatusEffect *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat(0.3f));
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_melting;
	((mindustry_type_StatusEffect *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_content_StatusEffects$8_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_content_StatusEffects$8_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_content_StatusEffects$8_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_content_StatusEffects$8_init_java_lang_Runnable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_content_StatusEffects$8_init_java_lang_Runnable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_content_StatusEffects$8_lambda$new$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/StatusEffects$8:lambda$new$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_type_StatusEffect, (jint(2)));
	jint temp0 = jint(0);
	clinit_mindustry_content_StatusEffects(ctx);
	sp[2].o = (jobject)SF_mindustry_content_StatusEffects_wet;
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_StatusEffects(ctx);
	sp[2].o = (jobject)SF_mindustry_content_StatusEffects_freezing;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	((func_mindustry_content_StatusEffects$8_opposite_Array1_mindustry_type_StatusEffect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_content_StatusEffects$8_opposite_Array1_mindustry_type_StatusEffect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_tarred;
	{ /* InvokeDynamic */
		clinit_mindustry_content_StatusEffects$8_invoke_mindustry_type_StatusEffect$TransitionHandler_1(ctx);
		auto proxy = (mindustry_content_StatusEffects$8_invoke_mindustry_type_StatusEffect$TransitionHandler_1 *) gcAlloc(ctx, &class_mindustry_content_StatusEffects$8_invoke_mindustry_type_StatusEffect$TransitionHandler_1);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_content_StatusEffects$8_affinity_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_content_StatusEffects$8_affinity_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_StatusEffects$8_lambda$new$1_mindustry_gen_Unit_mindustry_entities_units_StatusEntry_float(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/StatusEffects$8:lambda$new$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_StatusEffects$8(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(112);
	((func_mindustry_gen_Unit_damagePierce_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_damagePierce_float])(ctx, (frame[0].o), (jfloat(8.0f)));
	LINE_NUMBER(113);
	clinit_mindustry_content_Fx(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Fx_burning;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_x;
	jfloat temp1 = (jfloat)((func_mindustry_gen_Unit_bounds_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_bounds_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (temp1 / (jfloat(2))));
	jfloat temp3 = temp0 + temp2;
	jfloat temp4 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[0].o)))->F_y;
	jfloat temp5 = (jfloat)((func_mindustry_gen_Unit_bounds_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Unit_bounds_R_float])(ctx, (frame[0].o));
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, (temp5 / (jfloat(2))));
	((func_mindustry_entities_Effect_at_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float])(ctx, sp[0].o, temp3, (temp4 + temp6));
	LINE_NUMBER(114);
	sp[0].o = frame[1].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_melting;
	jfloat temp7 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((frame[2].f) + ((jfloat)((mindustry_entities_units_StatusEntry *) NULL_CHECK((frame[1].o)))->F_time)), (jfloat(200.0f)));
	sp[0].o = (jobject)((func_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_units_StatusEntry_set_mindustry_type_StatusEffect_float_R_mindustry_entities_units_StatusEntry])(ctx, sp[0].o, sp[1].o, temp7);
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_StatusEffects$8[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_type_StatusEffect_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_type_StatusEffect_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_type_StatusEffect_init,
	(void *) M_mindustry_ctype_UnlockableContent_postInit,
	(void *) M_mindustry_ctype_UnlockableContent_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_type_StatusEffect_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_type_StatusEffect_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_type_StatusEffect_isHidden_R_boolean,
	(void *) M_mindustry_type_StatusEffect_showUnlock_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_type_StatusEffect_init_java_lang_Runnable,
	(void *) M_mindustry_type_StatusEffect_update_mindustry_gen_Unit_mindustry_entities_units_StatusEntry,
	(void *) M_mindustry_type_StatusEffect_onRemoved_mindustry_gen_Unit,
	(void *) M_mindustry_type_StatusEffect_trans_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler,
	(void *) M_mindustry_type_StatusEffect_affinity_mindustry_type_StatusEffect_mindustry_type_StatusEffect$TransitionHandler,
	(void *) M_mindustry_type_StatusEffect_opposite_Array1_mindustry_type_StatusEffect,
	(void *) M_mindustry_type_StatusEffect_handleOpposite_mindustry_type_StatusEffect,
	(void *) M_mindustry_type_StatusEffect_draw_mindustry_gen_Unit_float,
	(void *) M_mindustry_type_StatusEffect_draw_mindustry_gen_Unit,
	(void *) M_mindustry_type_StatusEffect_reactsWith_mindustry_type_StatusEffect_R_boolean,
	(void *) M_mindustry_type_StatusEffect_applyTransition_mindustry_gen_Unit_mindustry_type_StatusEffect_mindustry_entities_units_StatusEntry_float_R_boolean,
	(void *) M_mindustry_type_StatusEffect_applied_mindustry_gen_Unit_float_boolean,
	(void *) M_mindustry_type_StatusEffect_lambda$setStats$0_mindustry_type_StatusEffect_R_boolean,
	(void *) M_mindustry_content_StatusEffects$8_lambda$new$0,
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
	{ "init", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Lmindustry/gen/Unit;Lmindustry/entities/units/StatusEntry;)V" },
	{ "onRemoved", "(Lmindustry/gen/Unit;)V" },
	{ "trans", "(Lmindustry/type/StatusEffect;Lmindustry/type/StatusEffect$TransitionHandler;)V" },
	{ "affinity", "(Lmindustry/type/StatusEffect;Lmindustry/type/StatusEffect$TransitionHandler;)V" },
	{ "opposite", "([Lmindustry/type/StatusEffect;)V" },
	{ "handleOpposite", "(Lmindustry/type/StatusEffect;)V" },
	{ "draw", "(Lmindustry/gen/Unit;F)V" },
	{ "draw", "(Lmindustry/gen/Unit;)V" },
	{ "reactsWith", "(Lmindustry/type/StatusEffect;)Z" },
	{ "applyTransition", "(Lmindustry/gen/Unit;Lmindustry/type/StatusEffect;Lmindustry/entities/units/StatusEntry;F)Z" },
	{ "applied", "(Lmindustry/gen/Unit;FZ)V" },
	{ "lambda$setStats$0", "(Lmindustry/type/StatusEffect;)Z" },
	{ "lambda$new$0", "()V" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_StatusEffects$8_java_lang_String, 0, "(Ljava/lang/String;)V", 0 },
	{ "lambda$new$0", (intptr_t) M_mindustry_content_StatusEffects$8_lambda$new$0, VTABLE_mindustry_content_StatusEffects$8_lambda$new$0, "()V", 4098 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_content_StatusEffects$8_lambda$new$1_mindustry_gen_Unit_mindustry_entities_units_StatusEntry_float, 0, "(Lmindustry/gen/Unit;Lmindustry/entities/units/StatusEntry;F)V", 4106 },
};

Class class_mindustry_content_StatusEffects$8{
		.nativeName = (intptr_t) "mindustry/content/StatusEffects$8",
		.parentClass = (intptr_t) &class_mindustry_type_StatusEffect,
		.size = sizeof(mindustry_content_StatusEffects$8),
		.classVtable = (intptr_t) vtable_mindustry_content_StatusEffects$8,
		.staticInitializer = (intptr_t) clinit_mindustry_content_StatusEffects$8,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_StatusEffects$8,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 68,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_StatusEffects$8 = registerClass(&class_mindustry_content_StatusEffects$8);

}

