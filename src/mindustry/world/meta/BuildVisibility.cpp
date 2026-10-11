#include "mindustry/world/meta/BuildVisibility.h"
#include "mindustry/world/meta/BuildVisibility_invoke_arc_func_Boolp_15.h"
#include "mindustry/world/meta/BuildVisibility_invoke_arc_func_Boolp_16.h"
#include "mindustry/world/meta/BuildVisibility_invoke_arc_func_Boolp_17.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/meta/BuildVisibility_invoke_arc_func_Boolp_18.h"
#include "mindustry/world/meta/BuildVisibility_invoke_arc_func_Boolp_22.h"
#include "mindustry/world/meta/BuildVisibility_invoke_arc_func_Boolp_12.h"
#include "mindustry/world/meta/BuildVisibility_invoke_arc_func_Boolp_23.h"
#include "mindustry/world/meta/BuildVisibility_invoke_arc_func_Boolp_13.h"
#include "mindustry/game/Rules.h"
#include "mindustry/world/meta/BuildVisibility_invoke_arc_func_Boolp_14.h"
#include "arc/func/Boolp.h"
#include "mindustry/game/CampaignRules.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/world/meta/BuildVisibility_invoke_arc_func_Boolp_20.h"
#include "mindustry/world/meta/BuildVisibility_invoke_arc_func_Boolp_21.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/ai/BlockIndexer.h"
#include "java/lang/Object.h"
#include "mindustry/type/Planet.h"
#include "mindustry/world/meta/BuildVisibility.h"
#include "mindustry/world/meta/BuildVisibility_invoke_arc_func_Boolp_19.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"

extern "C" {

jobject SF_mindustry_world_meta_BuildVisibility_hidden;
jobject SF_mindustry_world_meta_BuildVisibility_shown;
jobject SF_mindustry_world_meta_BuildVisibility_debugOnly;
jobject SF_mindustry_world_meta_BuildVisibility_editorOnly;
jobject SF_mindustry_world_meta_BuildVisibility_coreZoneOnly;
jobject SF_mindustry_world_meta_BuildVisibility_worldProcessorOnly;
jobject SF_mindustry_world_meta_BuildVisibility_sandboxOnly;
jobject SF_mindustry_world_meta_BuildVisibility_campaignOnly;
jobject SF_mindustry_world_meta_BuildVisibility_legacyLaunchPadOnly;
jobject SF_mindustry_world_meta_BuildVisibility_notLegacyLaunchPadOnly;
jobject SF_mindustry_world_meta_BuildVisibility_lightingOnly;
jobject SF_mindustry_world_meta_BuildVisibility_fogOnly;

void mark_mindustry_world_meta_BuildVisibility(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_meta_BuildVisibility_hidden)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BuildVisibility_hidden)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BuildVisibility_hidden, mark, depth + 1);
		if (SF_mindustry_world_meta_BuildVisibility_shown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BuildVisibility_shown)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BuildVisibility_shown, mark, depth + 1);
		if (SF_mindustry_world_meta_BuildVisibility_debugOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BuildVisibility_debugOnly)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BuildVisibility_debugOnly, mark, depth + 1);
		if (SF_mindustry_world_meta_BuildVisibility_editorOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BuildVisibility_editorOnly)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BuildVisibility_editorOnly, mark, depth + 1);
		if (SF_mindustry_world_meta_BuildVisibility_coreZoneOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BuildVisibility_coreZoneOnly)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BuildVisibility_coreZoneOnly, mark, depth + 1);
		if (SF_mindustry_world_meta_BuildVisibility_worldProcessorOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BuildVisibility_worldProcessorOnly)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BuildVisibility_worldProcessorOnly, mark, depth + 1);
		if (SF_mindustry_world_meta_BuildVisibility_sandboxOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BuildVisibility_sandboxOnly)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BuildVisibility_sandboxOnly, mark, depth + 1);
		if (SF_mindustry_world_meta_BuildVisibility_campaignOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BuildVisibility_campaignOnly)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BuildVisibility_campaignOnly, mark, depth + 1);
		if (SF_mindustry_world_meta_BuildVisibility_legacyLaunchPadOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BuildVisibility_legacyLaunchPadOnly)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BuildVisibility_legacyLaunchPadOnly, mark, depth + 1);
		if (SF_mindustry_world_meta_BuildVisibility_notLegacyLaunchPadOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BuildVisibility_notLegacyLaunchPadOnly)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BuildVisibility_notLegacyLaunchPadOnly, mark, depth + 1);
		if (SF_mindustry_world_meta_BuildVisibility_lightingOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BuildVisibility_lightingOnly)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BuildVisibility_lightingOnly, mark, depth + 1);
		if (SF_mindustry_world_meta_BuildVisibility_fogOnly)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_meta_BuildVisibility_fogOnly)->clazz)->markFunction)((jobject) SF_mindustry_world_meta_BuildVisibility_fogOnly, mark, depth + 1);
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
	auto self = (mindustry_world_meta_BuildVisibility *) object;
	if (self->F_visible)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_visible)->clazz)->markFunction)((jobject) self->F_visible, mark, depth + 1);
}

jbool M_mindustry_world_meta_BuildVisibility_visible_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:visible", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(26);
	sp[0].o = (jobject)((mindustry_world_meta_BuildVisibility *) NULL_CHECK((frame[0].o)))->F_visible;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void init_mindustry_world_meta_BuildVisibility_arc_func_Boolp(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(30);
	((mindustry_world_meta_BuildVisibility *) NULL_CHECK((frame[0].o)))->F_visible = (jref) (frame[1].o);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_BuildVisibility_lambda$static$11_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:lambda$static$11", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	{
	LINE_NUMBER(21);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
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

jbool SM_mindustry_world_meta_BuildVisibility_lambda$static$10_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:lambda$static$10", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	{
	LINE_NUMBER(20);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_lighting) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_2;
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

jbool SM_mindustry_world_meta_BuildVisibility_lambda$static$9_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:lambda$static$9", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	{
	LINE_NUMBER(19);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules;
	if (((jint)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_legacyLaunchPads) != 0) goto label_2;
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

jbool SM_mindustry_world_meta_BuildVisibility_lambda$static$8_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:lambda$static$8", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	{
	LINE_NUMBER(18);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Planet *) NULL_CHECK(sp[0].o))->F_campaignRules;
	if (((jint)((mindustry_game_CampaignRules *) NULL_CHECK(sp[0].o))->F_legacyLaunchPads) == 0) goto label_2;
	}
label_1:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_advancedLaunchPad;
	if ((--sp)->o == nullptr) goto label_2;
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_advancedLaunchPad;
	jint temp0 = (jint)((func_mindustry_world_Block_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_unlocked_R_boolean])(ctx, sp[0].o);
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

jbool SM_mindustry_world_meta_BuildVisibility_lambda$static$7_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:lambda$static$7", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	{
	LINE_NUMBER(17);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
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

jbool SM_mindustry_world_meta_BuildVisibility_lambda$static$6_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:lambda$static$6", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	{
	LINE_NUMBER(16);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_infiniteResources) == 0) goto label_2;
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

jbool SM_mindustry_world_meta_BuildVisibility_lambda$static$5_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:lambda$static$5", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	{
	LINE_NUMBER(15);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor) != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_allowEditWorldProcessors) == 0) goto label_2;
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

jbool SM_mindustry_world_meta_BuildVisibility_lambda$static$4_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:lambda$static$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	{
	LINE_NUMBER(14);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreZone;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isGame_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isGame_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
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

jbool SM_mindustry_world_meta_BuildVisibility_lambda$static$3_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:lambda$static$3", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	{
	LINE_NUMBER(13);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	popStackFrame(ctx);
	return ((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_editor);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_BuildVisibility_lambda$static$2_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:lambda$static$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	{
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_BuildVisibility_lambda$static$1_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:lambda$static$1", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	{
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_world_meta_BuildVisibility_lambda$static$0_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:lambda$static$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	{
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_meta_BuildVisibility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/meta/BuildVisibility:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_meta_BuildVisibility(ctx);
	{
	LINE_NUMBER(10);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_12(ctx);
		auto proxy = (mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_12 *) gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_12);
		sp[1].o = (jobject) proxy;
	}
	init_mindustry_world_meta_BuildVisibility_arc_func_Boolp(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	SF_mindustry_world_meta_BuildVisibility_hidden = sp[0].o;
	LINE_NUMBER(11);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_13(ctx);
		auto proxy = (mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_13 *) gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_13);
		sp[1].o = (jobject) proxy;
	}
	init_mindustry_world_meta_BuildVisibility_arc_func_Boolp(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	SF_mindustry_world_meta_BuildVisibility_shown = sp[0].o;
	LINE_NUMBER(12);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_14(ctx);
		auto proxy = (mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_14 *) gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_14);
		sp[1].o = (jobject) proxy;
	}
	init_mindustry_world_meta_BuildVisibility_arc_func_Boolp(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	SF_mindustry_world_meta_BuildVisibility_debugOnly = sp[0].o;
	LINE_NUMBER(13);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_15(ctx);
		auto proxy = (mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_15 *) gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_15);
		sp[1].o = (jobject) proxy;
	}
	init_mindustry_world_meta_BuildVisibility_arc_func_Boolp(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	SF_mindustry_world_meta_BuildVisibility_editorOnly = sp[0].o;
	LINE_NUMBER(14);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_16(ctx);
		auto proxy = (mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_16 *) gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_16);
		sp[1].o = (jobject) proxy;
	}
	init_mindustry_world_meta_BuildVisibility_arc_func_Boolp(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	SF_mindustry_world_meta_BuildVisibility_coreZoneOnly = sp[0].o;
	LINE_NUMBER(15);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_17(ctx);
		auto proxy = (mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_17 *) gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_17);
		sp[1].o = (jobject) proxy;
	}
	init_mindustry_world_meta_BuildVisibility_arc_func_Boolp(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	SF_mindustry_world_meta_BuildVisibility_worldProcessorOnly = sp[0].o;
	LINE_NUMBER(16);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_18(ctx);
		auto proxy = (mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_18 *) gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_18);
		sp[1].o = (jobject) proxy;
	}
	init_mindustry_world_meta_BuildVisibility_arc_func_Boolp(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	SF_mindustry_world_meta_BuildVisibility_sandboxOnly = sp[0].o;
	LINE_NUMBER(17);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_19(ctx);
		auto proxy = (mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_19 *) gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_19);
		sp[1].o = (jobject) proxy;
	}
	init_mindustry_world_meta_BuildVisibility_arc_func_Boolp(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	SF_mindustry_world_meta_BuildVisibility_campaignOnly = sp[0].o;
	LINE_NUMBER(18);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_20(ctx);
		auto proxy = (mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_20 *) gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_20);
		sp[1].o = (jobject) proxy;
	}
	init_mindustry_world_meta_BuildVisibility_arc_func_Boolp(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	SF_mindustry_world_meta_BuildVisibility_legacyLaunchPadOnly = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_21(ctx);
		auto proxy = (mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_21 *) gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_21);
		sp[1].o = (jobject) proxy;
	}
	init_mindustry_world_meta_BuildVisibility_arc_func_Boolp(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	SF_mindustry_world_meta_BuildVisibility_notLegacyLaunchPadOnly = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_22(ctx);
		auto proxy = (mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_22 *) gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_22);
		sp[1].o = (jobject) proxy;
	}
	init_mindustry_world_meta_BuildVisibility_arc_func_Boolp(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	SF_mindustry_world_meta_BuildVisibility_lightingOnly = sp[0].o;
	LINE_NUMBER(21);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility);
	{ /* InvokeDynamic */
		clinit_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_23(ctx);
		auto proxy = (mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_23 *) gcAlloc(ctx, &class_mindustry_world_meta_BuildVisibility_invoke_arc_func_Boolp_23);
		sp[1].o = (jobject) proxy;
	}
	init_mindustry_world_meta_BuildVisibility_arc_func_Boolp(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	SF_mindustry_world_meta_BuildVisibility_fogOnly = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_world_meta_BuildVisibility[] {
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
	(void *) M_mindustry_world_meta_BuildVisibility_visible_R_boolean,
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
	{ "visible", "()Z" },
};

static FieldMetadata fields[] {
	{ "hidden", &class_mindustry_world_meta_BuildVisibility, (intptr_t) &SF_mindustry_world_meta_BuildVisibility_hidden, "Lmindustry/world/meta/BuildVisibility;", 25 },
	{ "shown", &class_mindustry_world_meta_BuildVisibility, (intptr_t) &SF_mindustry_world_meta_BuildVisibility_shown, "Lmindustry/world/meta/BuildVisibility;", 25 },
	{ "debugOnly", &class_mindustry_world_meta_BuildVisibility, (intptr_t) &SF_mindustry_world_meta_BuildVisibility_debugOnly, "Lmindustry/world/meta/BuildVisibility;", 25 },
	{ "editorOnly", &class_mindustry_world_meta_BuildVisibility, (intptr_t) &SF_mindustry_world_meta_BuildVisibility_editorOnly, "Lmindustry/world/meta/BuildVisibility;", 25 },
	{ "coreZoneOnly", &class_mindustry_world_meta_BuildVisibility, (intptr_t) &SF_mindustry_world_meta_BuildVisibility_coreZoneOnly, "Lmindustry/world/meta/BuildVisibility;", 25 },
	{ "worldProcessorOnly", &class_mindustry_world_meta_BuildVisibility, (intptr_t) &SF_mindustry_world_meta_BuildVisibility_worldProcessorOnly, "Lmindustry/world/meta/BuildVisibility;", 25 },
	{ "sandboxOnly", &class_mindustry_world_meta_BuildVisibility, (intptr_t) &SF_mindustry_world_meta_BuildVisibility_sandboxOnly, "Lmindustry/world/meta/BuildVisibility;", 25 },
	{ "campaignOnly", &class_mindustry_world_meta_BuildVisibility, (intptr_t) &SF_mindustry_world_meta_BuildVisibility_campaignOnly, "Lmindustry/world/meta/BuildVisibility;", 25 },
	{ "legacyLaunchPadOnly", &class_mindustry_world_meta_BuildVisibility, (intptr_t) &SF_mindustry_world_meta_BuildVisibility_legacyLaunchPadOnly, "Lmindustry/world/meta/BuildVisibility;", 25 },
	{ "notLegacyLaunchPadOnly", &class_mindustry_world_meta_BuildVisibility, (intptr_t) &SF_mindustry_world_meta_BuildVisibility_notLegacyLaunchPadOnly, "Lmindustry/world/meta/BuildVisibility;", 25 },
	{ "lightingOnly", &class_mindustry_world_meta_BuildVisibility, (intptr_t) &SF_mindustry_world_meta_BuildVisibility_lightingOnly, "Lmindustry/world/meta/BuildVisibility;", 25 },
	{ "fogOnly", &class_mindustry_world_meta_BuildVisibility, (intptr_t) &SF_mindustry_world_meta_BuildVisibility_fogOnly, "Lmindustry/world/meta/BuildVisibility;", 25 },
	{ "visible", &class_arc_func_Boolp, offsetof(mindustry_world_meta_BuildVisibility, F_visible), "Larc/func/Boolp;", 18 },
};

static MethodMetadata methods[] {
	{ "visible", (intptr_t) M_mindustry_world_meta_BuildVisibility_visible_R_boolean, VTABLE_mindustry_world_meta_BuildVisibility_visible_R_boolean, "()Z", 1 },
	{ "<init>", (intptr_t) init_mindustry_world_meta_BuildVisibility_arc_func_Boolp, 0, "(Larc/func/Boolp;)V", 1 },
	{ "lambda$static$11", (intptr_t) SM_mindustry_world_meta_BuildVisibility_lambda$static$11_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$10", (intptr_t) SM_mindustry_world_meta_BuildVisibility_lambda$static$10_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$9", (intptr_t) SM_mindustry_world_meta_BuildVisibility_lambda$static$9_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$8", (intptr_t) SM_mindustry_world_meta_BuildVisibility_lambda$static$8_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$7", (intptr_t) SM_mindustry_world_meta_BuildVisibility_lambda$static$7_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$6", (intptr_t) SM_mindustry_world_meta_BuildVisibility_lambda$static$6_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$5", (intptr_t) SM_mindustry_world_meta_BuildVisibility_lambda$static$5_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$4", (intptr_t) SM_mindustry_world_meta_BuildVisibility_lambda$static$4_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_world_meta_BuildVisibility_lambda$static$3_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_world_meta_BuildVisibility_lambda$static$2_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_world_meta_BuildVisibility_lambda$static$1_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_world_meta_BuildVisibility_lambda$static$0_R_boolean, 0, "()Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_meta_BuildVisibility, 0, "()V", 8 },
};

Class class_mindustry_world_meta_BuildVisibility{
		.nativeName = (intptr_t) "mindustry/world/meta/BuildVisibility",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_meta_BuildVisibility),
		.classVtable = (intptr_t) vtable_mindustry_world_meta_BuildVisibility,
		.staticInitializer = (intptr_t) clinit_mindustry_world_meta_BuildVisibility,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_meta_BuildVisibility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_meta_BuildVisibility = registerClass(&class_mindustry_world_meta_BuildVisibility);

}
