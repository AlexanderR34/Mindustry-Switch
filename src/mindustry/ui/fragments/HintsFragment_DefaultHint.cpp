#include "mindustry/ui/fragments/HintsFragment_DefaultHint.h"
#include "arc/Input.h"
#include "arc/func/Boolp.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_62.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_63.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_60.h"
#include "arc/input/KeyCode.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_61.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_55.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_56.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_53.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_54.h"
#include "mindustry/content/SectorPresets.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_59.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_57.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_58.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "arc/Settings.h"
#include "arc/func/Boolf.h"
#include "arc/Core.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint.h"
#include "mindustry/input/Binding.h"
#include "arc/util/Nullable.h"
#include "mindustry/entities/units/UnitController.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Itemsc.h"
#include "mindustry/content/Planets.h"
#include "arc/scene/ui/Dialog.h"
#include "mindustry/ui/dialogs/ContentInfoDialog.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"
#include "java/lang/Boolean.h"
#include "mindustry/game/Rules.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_80.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_81.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_84.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_85.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_82.h"
#include "mindustry/gen/Unitc.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_83.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_77.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_78.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_75.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_76.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_79.h"
#include "mindustry/ui/fragments/HintsFragment.h"
#include "mindustry/core/Control.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "arc/input/KeyBind.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/ai/types/CommandAI.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_70.h"
#include "mindustry/type/Sector.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_73.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_74.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_71.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_72.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_66.h"
#include "mindustry/ui/fragments/HintsFragment_Hint.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_67.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_64.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_65.h"
#include "mindustry/game/GameStats.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_68.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_69.h"
#include "mindustry/game/Saves_SaveSlot.h"
#include "mindustry/Vars.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_100.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_99.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_105.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_97.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_98.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_101.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_102.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_103.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_104.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Payloadc.h"
#include "arc/util/Structs.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_91.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_92.h"
#include "mindustry/type/Item.h"
#include "arc/struct/Queue.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_90.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_95.h"
#include "mindustry/content/Items.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_96.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_93.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_94.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_88.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_89.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_86.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolp_87.h"
#include "mindustry/type/SectorPreset.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/net/Net.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "java/lang/String.h"
#include "mindustry/ui/fragments/HintsFragment_DefaultHint_invoke_arc_func_Boolf_1.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/gen/Player.h"
#include "mindustry/type/Planet.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/core/GameState.h"
#include "mindustry/input/InputHandler.h"

extern "C" {

jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopMove;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_zoom;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_breaking;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopShoot;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_depositItems;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopPause;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitControl;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitSelectControl;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_respawn;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_launch;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_schematicSelect;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_conveyorPathfind;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_boost;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_blockInfo;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_derelict;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadPickup;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadDrop;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_waveFire;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_rebuildSelect;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_guardian;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_cannotUpgrade;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_factoryControl;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreUpgrade;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_serpuloCoreZone;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetLaunch;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetDifficulty;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreIncinerate;
jobject SF_mindustry_ui_fragments_HintsFragment$DefaultHint_$VALUES;

void mark_mindustry_ui_fragments_HintsFragment$DefaultHint(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopMove)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopMove)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopMove, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_zoom)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_zoom)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_zoom, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_breaking)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_breaking)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_breaking, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopShoot)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopShoot)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopShoot, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_depositItems)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_depositItems)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_depositItems, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopPause)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopPause)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopPause, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitControl)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitControl)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitControl, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitSelectControl)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitSelectControl)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitSelectControl, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_respawn)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_respawn)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_respawn, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_launch)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_launch)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_launch, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_schematicSelect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_schematicSelect)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_schematicSelect, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_conveyorPathfind)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_conveyorPathfind)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_conveyorPathfind, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_boost)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_boost)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_boost, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_blockInfo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_blockInfo)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_blockInfo, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_derelict)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_derelict)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_derelict, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadPickup)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadPickup)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadPickup, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadDrop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadDrop)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadDrop, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_waveFire)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_waveFire)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_waveFire, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_rebuildSelect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_rebuildSelect)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_rebuildSelect, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_guardian)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_guardian)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_guardian, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_cannotUpgrade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_cannotUpgrade)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_cannotUpgrade, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_factoryControl)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_factoryControl)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_factoryControl, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreUpgrade)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreUpgrade)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreUpgrade, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_serpuloCoreZone)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_serpuloCoreZone)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_serpuloCoreZone, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetLaunch)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetLaunch)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetLaunch, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetDifficulty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetDifficulty)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetDifficulty, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreIncinerate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreIncinerate)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreIncinerate, mark, depth + 1);
		if (SF_mindustry_ui_fragments_HintsFragment$DefaultHint_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_ui_fragments_HintsFragment$DefaultHint_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_fragments_HintsFragment$DefaultHint *) object;
	if (self->F_text)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_text)->clazz)->markFunction)((jobject) self->F_text, mark, depth + 1);
	if (self->F_dependencies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dependencies)->clazz)->markFunction)((jobject) self->F_dependencies, mark, depth + 1);
	if (self->F_complete)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_complete)->clazz)->markFunction)((jobject) self->F_complete, mark, depth + 1);
	if (self->F_shown)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shown)->clazz)->markFunction)((jobject) self->F_shown, mark, depth + 1);
}

jobject SM_mindustry_ui_fragments_HintsFragment$DefaultHint_values_R_Array1_mindustry_ui_fragments_HintsFragment$DefaultHint(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(169);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_ui_fragments_HintsFragment$DefaultHint, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_fragments_HintsFragment$DefaultHint_valueOf_java_lang_String_R_mindustry_ui_fragments_HintsFragment$DefaultHint(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_ui_fragments_HintsFragment$DefaultHint)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(314);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(309);
	((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_visibility = (jint(3));
	LINE_NUMBER(310);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, (jint(0)));
	((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK(sp[0].o))->F_dependencies = (jref) sp[1].o;
	LINE_NUMBER(312);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_53(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_53 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_53);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK(sp[0].o))->F_shown = (jref) sp[1].o;
	LINE_NUMBER(315);
	((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_complete = (jref) (frame[3].o);
	LINE_NUMBER(316);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_int_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(319);
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[4].o));
	LINE_NUMBER(320);
	((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_visibility = (frame[3].i);
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(324);
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[4].o));
	LINE_NUMBER(325);
	((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_shown = (jref) (frame[3].o);
	LINE_NUMBER(326);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_int_arc_func_Boolp_arc_func_Boolp(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(329);
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[5].o));
	LINE_NUMBER(330);
	((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_shown = (jref) (frame[4].o);
	LINE_NUMBER(331);
	((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_visibility = (frame[3].i);
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HintsFragment$DefaultHint_finished_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:finished", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	if (((jint)((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_cached) != 0) goto label_1;
	}
	{
	LINE_NUMBER(337);
	((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_cached = (jint(1));
	LINE_NUMBER(338);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = (jobject)((func_mindustry_ui_fragments_HintsFragment$DefaultHint_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment$DefaultHint_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-hint-done"_j.string, 1, sp[2].o);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[1].o, sp[2].o, (jint(0)));
	((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK(sp[0].o))->F_finished = temp0;
	}
label_1:;
	{
	LINE_NUMBER(340);
	popStackFrame(ctx);
	return ((jint)((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_finished);
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_HintsFragment$DefaultHint_finish(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:finish", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(345);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_HintsFragment$DefaultHint_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment$DefaultHint_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-hint-done"_j.string, 1, sp[1].o);
	sp[2].o = frame[0].o;
	jint temp0 = jint(1);
	((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK(sp[2].o))->F_finished = temp0;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, temp0);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(346);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ui_fragments_HintsFragment$DefaultHint_text_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:text", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(350);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_text;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(351);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_HintsFragment$DefaultHint_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment$DefaultHint_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"hint.\u0001.mobile"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_util_I18NBundle_has_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_has_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_HintsFragment$DefaultHint_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment$DefaultHint_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"hint.\u0001.mobile"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_mindustry_ui_fragments_HintsFragment$DefaultHint_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment$DefaultHint_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"hint.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
label_4:;
	{
	sp -= 2;
	((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	LINE_NUMBER(352);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_text;
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"tap"_j))), (((jobject) createStringLiteral(ctx, u8"click"_j))));
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Tap"_j))), (((jobject) createStringLiteral(ctx, u8"Click"_j))));
	((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK(sp[0].o))->F_text = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(354);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_text;
	sp[0].o = (jobject)SM_mindustry_core_UI_formatIcons_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HintsFragment$DefaultHint_complete_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:complete", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(359);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_complete;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HintsFragment$DefaultHint_show_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:show", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_shown;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_dependencies;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment$DefaultHint *) NULL_CHECK((frame[0].o)))->F_dependencies;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolf_1);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)SM_arc_util_Structs_contains_Array1_java_lang_Object_arc_func_Boolf_R_boolean(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_ui_fragments_HintsFragment$DefaultHint_order_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:order", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(369);
	jint temp0 = (jint)((func_mindustry_ui_fragments_HintsFragment$DefaultHint_ordinal_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_fragments_HintsFragment$DefaultHint_ordinal_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_ui_fragments_HintsFragment$DefaultHint_valid_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:valid", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	popStackFrame(ctx);
	return 1;
}

jobject SM_mindustry_ui_fragments_HintsFragment$DefaultHint_$values_R_Array1_mindustry_ui_fragments_HintsFragment$DefaultHint(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (27));
	jint temp0 = jint(0);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopMove;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_zoom;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_breaking;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopShoot;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_depositItems;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopPause;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitControl;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitSelectControl;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_respawn;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_launch;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_schematicSelect;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_conveyorPathfind;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_boost;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_blockInfo;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_derelict;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadPickup;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = 16;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadDrop;
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = 17;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_waveFire;
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 18;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_rebuildSelect;
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 19;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_guardian;
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 20;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_cannotUpgrade;
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 21;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_factoryControl;
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 22;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreUpgrade;
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 23;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_serpuloCoreZone;
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	jint temp24 = 24;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetLaunch;
	ARRAY_ACCESS(jobject, sp[0].o, temp24) = sp[1].o;
	jint temp25 = 25;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetDifficulty;
	ARRAY_ACCESS(jobject, sp[0].o, temp25) = sp[1].o;
	jint temp26 = 26;
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreIncinerate;
	ARRAY_ACCESS(jobject, sp[0].o, temp26) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$show$0_mindustry_ui_fragments_HintsFragment$Hint_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$show$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(364);
	jint temp0 = (jint)((func_mindustry_ui_fragments_HintsFragment$Hint_finished_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_ui_fragments_HintsFragment$Hint, INDEX_mindustry_ui_fragments_HintsFragment$Hint_finished_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$new$0_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$new$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$51_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$51", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(303);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$50_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$50", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(302);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	clinit_mindustry_content_Items(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Items_copper;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_get_mindustry_type_Item_R_int])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	if (temp0 < (((jint)((mindustry_world_blocks_storage_CoreBlock$CoreBuild *) NULL_CHECK(sp[0].o))->F_storageCapacity) - (10))) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$49_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$49", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(298);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o == nullptr) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$48_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$48", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(294);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	LINE_NUMBER(295);
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	LINE_NUMBER(296);
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	if ((floatCompare(((jfloat)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_threat), (jfloat(0.5f)), -1)) < 0) goto label_1;
	}
	{
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_tarFields;
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_sector;
	LINE_NUMBER(297);
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_5;
label_1:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(294);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$47_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$47", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(291);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	clinit_mindustry_content_SectorPresets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_SectorPresets_frozenForest;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$46_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$46", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(290);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	if (sp[0].o != nullptr) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$45_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$45", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(286);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_cores_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_cores_R_arc_struct_Seq])(ctx, sp[0].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(1))) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$44_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$44", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(284);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getPlanet_R_mindustry_type_Planet])(ctx, sp[0].o);
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreZone;
	jint temp0 = (jint)((func_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_isBlockPresent_mindustry_world_Block_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_attackMode) == 0) goto label_2;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreShard;
	LINE_NUMBER(285);
	jint temp0 = (jint)((func_mindustry_game_GameStats_getDestroyed_mindustry_world_Block_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_GameStats_getDestroyed_mindustry_world_Block_R_int])(ctx, sp[0].o, sp[1].o);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreFoundation;
	jint temp1 = (jint)((func_mindustry_game_GameStats_getDestroyed_mindustry_world_Block_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_GameStats_getDestroyed_mindustry_world_Block_R_int])(ctx, sp[0].o, sp[1].o);
	jint temp2 = temp0 + temp1;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_stats;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreNucleus;
	jint temp3 = (jint)((func_mindustry_game_GameStats_getDestroyed_mindustry_world_Block_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_GameStats_getDestroyed_mindustry_world_Block_R_int])(ctx, sp[0].o, sp[1].o);
	if ((temp2 + temp3) <= 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(284);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$43_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$43", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(280);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hints;
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK(sp[0].o))->F_placedBlocks;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreFoundation;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$42_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$42", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(276);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_planet;
	clinit_mindustry_content_Planets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Planets_serpulo;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_coreFoundation;
	jint temp0 = (jint)((func_mindustry_world_Block_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	LINE_NUMBER(277);
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	LINE_NUMBER(278);
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreShard;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	LINE_NUMBER(279);
	sp[0].o = (jobject)((func_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_core_R_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_coreFoundation;
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_requirements;
	jint temp0 = (jint)((func_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_has_Array1_mindustry_type_ItemStack_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_5;
label_1:;
	INST_ICONST(0);
label_5:;
	LINE_NUMBER(276);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$41_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$41", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(273);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hints;
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK(sp[0].o))->F_events;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"factorycontrol"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$40_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$40", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(271);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	jint temp0 = (jint)((func_mindustry_core_GameState_isCampaign_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_isCampaign_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_preset;
	clinit_mindustry_content_SectorPresets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_SectorPresets_onset;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_tankFabricator;
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	jint temp0 = (jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size;
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_groundFactory;
	sp[0].o = (jobject)((func_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_getBuildings_mindustry_world_Block_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	if ((temp0 + ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	LINE_NUMBER(271);
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$39_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$39", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(268);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$38_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$38", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(267);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hints;
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK(sp[0].o))->F_events;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cannotupgrade"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$37_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$37", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(263);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_boss_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_boss_R_mindustry_gen_Unit])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$36_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$36", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(262);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_boss_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_boss_R_mindustry_gen_Unit])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_1;
	}
	sp->i = (jint)SM_mindustry_ui_fragments_HintsFragment_isSerpulo_R_boolean(ctx);
	sp++;
	if ((--sp)->i == 0) goto label_1;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_boss_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_boss_R_mindustry_gen_Unit])(ctx, sp[0].o);
	if ((floatCompare(((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_armor), (jfloat(4.0f)), -1)) < 0) goto label_1;
	}
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_salvo;
	jint temp0 = (jint)((func_mindustry_world_Block_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_boss_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_boss_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_isFlying_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_isFlying_R_boolean])(ctx, sp[0].o);
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$35_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$35", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(258);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	jint temp0 = (jint)((func_mindustry_input_InputHandler_isRebuildSelecting_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_input_InputHandler_isRebuildSelecting_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$34_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$34", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(257);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_plans;
	if (((jint)((arc_struct_Queue *) NULL_CHECK(sp[0].o))->F_size) < (10)) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$33_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$33", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(253);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_extinguisher;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$32_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$32", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(252);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hints;
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK(sp[0].o))->F_events;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"fire"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_content_Blocks(ctx);
	sp[0].o = (jobject)SF_mindustry_content_Blocks_wave;
	jint temp0 = (jint)((func_mindustry_world_Block_unlockedNow_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_unlockedNow_R_boolean])(ctx, sp[0].o);
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$31_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$31", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(248);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_2;
	}
	{
	frame[0].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[0].o)))(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$30_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$30", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(247);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_1;
	}
	{
	frame[0].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[0].o)))(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$29_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$29", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(243);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_2;
	}
	{
	frame[0].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[0].o)))(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_Seq_any_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_any_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_4;
label_2:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$28_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$28", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(242);
	jint temp0 = (jint)SM_mindustry_ui_fragments_HintsFragment_isSerpulo_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_gen_Payloadc)) == 0) goto label_1;
	}
	{
	frame[0].o = (checkCast(ctx, &class_mindustry_gen_Payloadc, (frame[1].o)));
	sp[0].o = (jobject)((func_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_gen_Payloadc, INDEX_mindustry_gen_Payloadc_payloads_R_arc_struct_Seq, (frame[0].o)))(ctx, (frame[0].o));
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$27_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$27", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(238);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hints;
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK(sp[0].o))->F_events;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"derelictbreak"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$26_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$26", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(237);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hints;
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK(sp[0].o))->F_events;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"derelictmouse"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_fragments_HintsFragment_isTutorial;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$25_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$25", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(233);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_content;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_ContentInfoDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ContentInfoDialog_isShown_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$24_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$24", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(232);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_graphitePress;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$23_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$23", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(228);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_boost;
	jint temp0 = (jint)((func_arc_Input_keyDown_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyDown_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$22_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$22", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(227);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_type;
	if (((jint)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_canBoost) == 0) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$21_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$21", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(223);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_diagonalPlacement;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_mobile;
	if ((--sp)->i == 0) goto label_2;
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"swapdiagonal"_j))));
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$20_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$20", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(222);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_block;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_titaniumConveyor;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$19_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$19", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(218);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_schematicSelect;
	jint temp0 = (jint)((func_arc_Input_keyRelease_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyRelease_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_pick;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$18_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$18", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(217);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hints;
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK(sp[0].o))->F_placedBlocks;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_router;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hints;
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK(sp[0].o))->F_placedBlocks;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_ductRouter;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$17_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$17", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(213);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_planet;
	jint temp0 = (jint)((func_mindustry_ui_dialogs_PlanetDialog_isShown_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_PlanetDialog_isShown_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$16_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$16", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(212);
	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_fragments_HintsFragment_isTutorial;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	clinit_mindustry_content_SectorPresets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_SectorPresets_onset;
	sp[1].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[1].o))->F_sector;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_sector;
	jint temp0 = (jint)((func_mindustry_type_Sector_isCaptured_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Sector_isCaptured_R_boolean])(ctx, sp[0].o);
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$15_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$15", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(208);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore) == 0) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$14_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$14", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(207);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore) != 0) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$13_R_boolean(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$13", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(203);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	if (((jint)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_commandMode) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectedUnits;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_input;
	sp[0].o = (jobject)((mindustry_input_InputHandler *) NULL_CHECK(sp[0].o))->F_selectedUnits;
	sp[0].o = (jobject)((func_arc_struct_Seq_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_first_R_java_lang_Object])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o)))->vtable)[VTABLE_mindustry_gen_Unit_controller_R_mindustry_entities_units_UnitController])(ctx, (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o)));
	frame[1].o = sp[0].o;
	if ((isInstance(ctx, (frame[1].o), &class_mindustry_ai_types_CommandAI)) == 0) goto label_1;
	}
	{
	frame[0].o = (checkCast(ctx, &class_mindustry_ai_types_CommandAI, (frame[1].o)));
	sp[0].o = (jobject)((mindustry_ai_types_CommandAI *) NULL_CHECK((frame[0].o)))->F_targetPos;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_4;
label_1:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$12_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$12", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(202);
	jint temp0 = (jint)SM_mindustry_ui_fragments_HintsFragment_isSerpulo_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_units;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(3))) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((func_mindustry_core_GameState_getSector_R_mindustry_type_Sector) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_GameState_getSector_R_mindustry_type_Sector])(ctx, sp[0].o);
	clinit_mindustry_content_SectorPresets(ctx);
	sp[1].o = (jobject)SF_mindustry_content_SectorPresets_fungalPass;
	sp[1].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[1].o))->F_sector;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_content_SectorPresets(ctx);
	sp[0].o = (jobject)SF_mindustry_content_SectorPresets_fungalPass;
	sp[0].o = (jobject)((mindustry_type_SectorPreset *) NULL_CHECK(sp[0].o))->F_sector;
	sp[0].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[0].o))->F_save;
	if (sp[0].o != nullptr) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$11_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$11", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(196);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_spawnedByCore) != 0) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$10_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$10", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(195);
	jint temp0 = (jint)SM_mindustry_ui_fragments_HintsFragment_isSerpulo_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK(sp[0].o))->F_units;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= (jint(2))) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$9_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$9", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(191);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_pause;
	jint temp0 = (jint)((func_arc_Input_keyTap_arc_input_KeyBind_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_keyTap_arc_input_KeyBind_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$8_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(190);
	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_fragments_HintsFragment_isTutorial;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_active_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_active_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_wave) < (jint(2))) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$7_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$7", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(186);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_hasItem_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hasItem_R_boolean])(ctx, sp[0].o);
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$6_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$6", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(185);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_dead_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_dead_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_unit_R_mindustry_gen_Unit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_unit_R_mindustry_gen_Unit])(ctx, sp[0].o);
	jint temp0 = (jint)((func_mindustry_gen_Unit_hasItem_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_hasItem_R_boolean])(ctx, sp[0].o);
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$5_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$5", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(181);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	popStackFrame(ctx);
	return ((jint)((mindustry_gen_Player *) NULL_CHECK(sp[0].o))->F_shooting);
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$4_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$4", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(180);
	jint temp0 = (jint)SM_mindustry_ui_fragments_HintsFragment_isSerpulo_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	if (((jint)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_enemies) <= 0) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$3_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(176);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	sp[0].o = (jobject)((mindustry_core_UI *) NULL_CHECK(sp[0].o))->F_hints;
	sp[0].o = (jobject)((mindustry_ui_fragments_HintsFragment *) NULL_CHECK(sp[0].o))->F_events;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"break"_j))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$2_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(175);
	clinit_mindustry_ui_fragments_HintsFragment(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_fragments_HintsFragment_isTutorial;
	jint temp0 = (jint)((func_arc_func_Boolp_get_R_boolean) resolveInterfaceMethod(ctx, &class_arc_func_Boolp, INDEX_arc_func_Boolp_get_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	sp[0].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_defaultTeam;
	sp[0].o = (jobject)((func_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_data_R_mindustry_game_Teams$TeamData])(ctx, sp[0].o);
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_conveyor;
	jint temp0 = (jint)((func_mindustry_game_Teams$TeamData_getCount_mindustry_world_Block_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams$TeamData_getCount_mindustry_world_Block_R_int])(ctx, sp[0].o, sp[1].o);
	if (temp0 <= (jint(5))) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$1_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(172);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_arc_input_KeyCode(ctx);
	sp[1].o = (jobject)SF_arc_input_KeyCode_scroll;
	jfloat temp0 = (jfloat)((func_arc_Input_axis_arc_input_KeyCode_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyCode_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) == 0) goto label_1;
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

jbool SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$0_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:lambda$static$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(170);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_moveX;
	jfloat temp0 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_input;
	clinit_mindustry_input_Binding(ctx);
	sp[1].o = (jobject)SF_mindustry_input_Binding_moveY;
	jfloat temp0 = (jfloat)((func_arc_Input_axis_arc_input_KeyBind_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Input_axis_arc_input_KeyBind_R_float])(ctx, sp[0].o, sp[1].o);
	if ((floatCompare(temp0, (jfloat(0)), -1)) == 0) goto label_2;
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

void clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/HintsFragment$DefaultHint:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	{
	LINE_NUMBER(170);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"desktopMove"_j));
	jint temp0 = jint(0);
	jint temp1 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_54(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_54 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_54);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_int_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopMove = sp[0].o;
	LINE_NUMBER(172);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"zoom"_j));
	jint temp2 = jint(1);
	jint temp3 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_55(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_55 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_55);
		sp[2].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_int_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp2, temp3, sp[2].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_zoom = sp[0].o;
	LINE_NUMBER(174);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"breaking"_j));
	jint temp4 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_56(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_56 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_56);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_57(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_57 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_57);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp4, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_breaking = sp[0].o;
	LINE_NUMBER(179);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"desktopShoot"_j));
	jint temp5 = jint(3);
	jint temp6 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_58(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_58 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_58);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_59(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_59 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_59);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp5, temp6, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopShoot = sp[0].o;
	LINE_NUMBER(184);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"depositItems"_j));
	jint temp7 = jint(4);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_60(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_60 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_60);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_61(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_61 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_61);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp7, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_depositItems = sp[0].o;
	LINE_NUMBER(189);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"desktopPause"_j));
	jint temp8 = jint(5);
	jint temp9 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_62(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_62 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_62);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_63(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_63 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_63);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp8, temp9, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopPause = sp[0].o;
	LINE_NUMBER(194);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"unitControl"_j));
	jint temp10 = 6;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_64(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_64 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_64);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_65(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_65 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_65);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp10, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitControl = sp[0].o;
	LINE_NUMBER(199);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"unitSelectControl"_j));
	jint temp11 = 7;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_66(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_66 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_66);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_67(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_67 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_67);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp11, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitSelectControl = sp[0].o;
	LINE_NUMBER(206);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"respawn"_j));
	jint temp12 = 8;
	jint temp13 = jint(2);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_68(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_68 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_68);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_69(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_69 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_69);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp12, temp13, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_respawn = sp[0].o;
	LINE_NUMBER(211);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"launch"_j));
	jint temp14 = 9;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_70(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_70 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_70);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_71(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_71 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_71);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp14, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_launch = sp[0].o;
	LINE_NUMBER(216);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"schematicSelect"_j));
	jint temp15 = 10;
	jint temp16 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_72(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_72 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_72);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_73(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_73 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_73);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp15, temp16, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_schematicSelect = sp[0].o;
	LINE_NUMBER(221);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"conveyorPathfind"_j));
	jint temp17 = 11;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_74(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_74 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_74);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_75(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_75 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_75);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp17, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_conveyorPathfind = sp[0].o;
	LINE_NUMBER(226);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"boost"_j));
	jint temp18 = 12;
	jint temp19 = jint(1);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_76(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_76 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_76);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_77(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_77 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_77);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp18, temp19, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_boost = sp[0].o;
	LINE_NUMBER(231);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"blockInfo"_j));
	jint temp20 = 13;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_78(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_78 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_78);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_79(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_79 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_79);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp20, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_blockInfo = sp[0].o;
	LINE_NUMBER(236);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"derelict"_j));
	jint temp21 = 14;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_80(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_80 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_80);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_81(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_81 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_81);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp21, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_derelict = sp[0].o;
	LINE_NUMBER(241);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"payloadPickup"_j));
	jint temp22 = 15;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_82(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_82 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_82);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_83(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_83 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_83);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp22, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadPickup = sp[0].o;
	LINE_NUMBER(246);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"payloadDrop"_j));
	jint temp23 = 16;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_84(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_84 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_84);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_85(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_85 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_85);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp23, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadDrop = sp[0].o;
	LINE_NUMBER(251);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"waveFire"_j));
	jint temp24 = 17;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_86(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_86 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_86);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_87(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_87 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_87);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp24, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_waveFire = sp[0].o;
	LINE_NUMBER(256);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rebuildSelect"_j));
	jint temp25 = 18;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_88(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_88 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_88);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_89(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_89 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_89);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp25, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_rebuildSelect = sp[0].o;
	LINE_NUMBER(261);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"guardian"_j));
	jint temp26 = 19;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_90(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_90 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_90);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_91(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_91 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_91);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp26, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_guardian = sp[0].o;
	LINE_NUMBER(266);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cannotUpgrade"_j));
	jint temp27 = 20;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_92(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_92 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_92);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_93(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_93 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_93);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp27, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_cannotUpgrade = sp[0].o;
	LINE_NUMBER(271);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"factoryControl"_j));
	jint temp28 = 21;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_94(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_94 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_94);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_95(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_95 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_95);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp28, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_factoryControl = sp[0].o;
	LINE_NUMBER(276);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"coreUpgrade"_j));
	jint temp29 = 22;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_96(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_96 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_96);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_97(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_97 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_97);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp29, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreUpgrade = sp[0].o;
	LINE_NUMBER(283);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"serpuloCoreZone"_j));
	jint temp30 = 23;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_98(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_98 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_98);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_99(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_99 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_99);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp30, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_serpuloCoreZone = sp[0].o;
	LINE_NUMBER(289);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"presetLaunch"_j));
	jint temp31 = 24;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_100(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_100 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_100);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_101(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_101 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_101);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp31, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetLaunch = sp[0].o;
	LINE_NUMBER(294);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"presetDifficulty"_j));
	jint temp32 = 25;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_102(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_102 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_102);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_103(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_103 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_103);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp32, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetDifficulty = sp[0].o;
	LINE_NUMBER(301);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"coreIncinerate"_j));
	jint temp33 = 26;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_104(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_104 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_104);
		sp[2].o = (jobject) proxy;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_105(ctx);
		auto proxy = (mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_105 *) gcAlloc(ctx, &class_mindustry_ui_fragments_HintsFragment$DefaultHint_invoke_arc_func_Boolp_105);
		sp[3].o = (jobject) proxy;
	}
	init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp(ctx, sp[0].o, sp[1].o, temp33, sp[2].o, sp[3].o);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreIncinerate = sp[0].o;
	LINE_NUMBER(169);
	sp[0].o = (jobject)SM_mindustry_ui_fragments_HintsFragment$DefaultHint_$values_R_Array1_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	clinit_mindustry_ui_fragments_HintsFragment$DefaultHint(ctx);
	SF_mindustry_ui_fragments_HintsFragment$DefaultHint_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ui_fragments_HintsFragment$DefaultHint;
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

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field text
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[27]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_ui_fragments_HintsFragment$DefaultHint[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_mindustry_ui_fragments_HintsFragment$DefaultHint_text_R_java_lang_String,
	(void *) M_mindustry_ui_fragments_HintsFragment$DefaultHint_complete_R_boolean,
	(void *) M_mindustry_ui_fragments_HintsFragment$DefaultHint_show_R_boolean,
	(void *) M_mindustry_ui_fragments_HintsFragment$DefaultHint_order_R_int,
	(void *) M_mindustry_ui_fragments_HintsFragment$DefaultHint_valid_R_boolean,
	(void *) M_mindustry_ui_fragments_HintsFragment$DefaultHint_finish,
	(void *) M_mindustry_ui_fragments_HintsFragment$DefaultHint_finished_R_boolean,
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
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "text", "()Ljava/lang/String;" },
	{ "complete", "()Z" },
	{ "show", "()Z" },
	{ "order", "()I" },
	{ "valid", "()Z" },
	{ "finish", "()V" },
	{ "finished", "()Z" },
};

static jclass interfaces[] { &class_mindustry_ui_fragments_HintsFragment$Hint, };

static FieldMetadata fields[] {
	{ "desktopMove", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopMove, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "zoom", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_zoom, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "breaking", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_breaking, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "desktopShoot", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopShoot, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "depositItems", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_depositItems, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "desktopPause", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_desktopPause, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "unitControl", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitControl, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "unitSelectControl", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_unitSelectControl, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "respawn", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_respawn, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "launch", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_launch, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "schematicSelect", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_schematicSelect, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "conveyorPathfind", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_conveyorPathfind, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "boost", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_boost, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "blockInfo", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_blockInfo, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "derelict", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_derelict, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "payloadPickup", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadPickup, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "payloadDrop", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_payloadDrop, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "waveFire", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_waveFire, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "rebuildSelect", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_rebuildSelect, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "guardian", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_guardian, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "cannotUpgrade", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_cannotUpgrade, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "factoryControl", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_factoryControl, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "coreUpgrade", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreUpgrade, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "serpuloCoreZone", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_serpuloCoreZone, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "presetLaunch", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetLaunch, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "presetDifficulty", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_presetDifficulty, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "coreIncinerate", &class_mindustry_ui_fragments_HintsFragment$DefaultHint, (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_coreIncinerate, "Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 16409 },
	{ "text", &class_java_lang_String, offsetof(mindustry_ui_fragments_HintsFragment$DefaultHint, F_text), "Ljava/lang/String;", 0 },
	{ "visibility", &class_int, offsetof(mindustry_ui_fragments_HintsFragment$DefaultHint, F_visibility), "I", 0 },
	{ "dependencies", getArrayClass(&class_mindustry_ui_fragments_HintsFragment$Hint, 1), offsetof(mindustry_ui_fragments_HintsFragment$DefaultHint, F_dependencies), "[Lmindustry/ui/fragments/HintsFragment$Hint;", 0 },
	{ "finished", &class_boolean, offsetof(mindustry_ui_fragments_HintsFragment$DefaultHint, F_finished), "Z", 0 },
	{ "cached", &class_boolean, offsetof(mindustry_ui_fragments_HintsFragment$DefaultHint, F_cached), "Z", 0 },
	{ "complete", &class_arc_func_Boolp, offsetof(mindustry_ui_fragments_HintsFragment$DefaultHint, F_complete), "Larc/func/Boolp;", 0 },
	{ "shown", &class_arc_func_Boolp, offsetof(mindustry_ui_fragments_HintsFragment$DefaultHint, F_shown), "Larc/func/Boolp;", 0 },
	{ "$VALUES", getArrayClass(&class_mindustry_ui_fragments_HintsFragment$DefaultHint, 1), (intptr_t) &SF_mindustry_ui_fragments_HintsFragment$DefaultHint_$VALUES, "[Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_values_R_Array1_mindustry_ui_fragments_HintsFragment$DefaultHint, 0, "()[Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_valueOf_java_lang_String_R_mindustry_ui_fragments_HintsFragment$DefaultHint, 0, "(Ljava/lang/String;)Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 9 },
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp, 0, "(Ljava/lang/String;ILarc/func/Boolp;)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_int_arc_func_Boolp, 0, "(Ljava/lang/String;IILarc/func/Boolp;)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_arc_func_Boolp_arc_func_Boolp, 0, "(Ljava/lang/String;ILarc/func/Boolp;Larc/func/Boolp;)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_HintsFragment$DefaultHint_java_lang_String_int_int_arc_func_Boolp_arc_func_Boolp, 0, "(Ljava/lang/String;IILarc/func/Boolp;Larc/func/Boolp;)V", 2 },
	{ "finished", (intptr_t) M_mindustry_ui_fragments_HintsFragment$DefaultHint_finished_R_boolean, VTABLE_mindustry_ui_fragments_HintsFragment$DefaultHint_finished_R_boolean, "()Z", 1 },
	{ "finish", (intptr_t) M_mindustry_ui_fragments_HintsFragment$DefaultHint_finish, VTABLE_mindustry_ui_fragments_HintsFragment$DefaultHint_finish, "()V", 1 },
	{ "text", (intptr_t) M_mindustry_ui_fragments_HintsFragment$DefaultHint_text_R_java_lang_String, VTABLE_mindustry_ui_fragments_HintsFragment$DefaultHint_text_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "complete", (intptr_t) M_mindustry_ui_fragments_HintsFragment$DefaultHint_complete_R_boolean, VTABLE_mindustry_ui_fragments_HintsFragment$DefaultHint_complete_R_boolean, "()Z", 1 },
	{ "show", (intptr_t) M_mindustry_ui_fragments_HintsFragment$DefaultHint_show_R_boolean, VTABLE_mindustry_ui_fragments_HintsFragment$DefaultHint_show_R_boolean, "()Z", 1 },
	{ "order", (intptr_t) M_mindustry_ui_fragments_HintsFragment$DefaultHint_order_R_int, VTABLE_mindustry_ui_fragments_HintsFragment$DefaultHint_order_R_int, "()I", 1 },
	{ "valid", (intptr_t) M_mindustry_ui_fragments_HintsFragment$DefaultHint_valid_R_boolean, VTABLE_mindustry_ui_fragments_HintsFragment$DefaultHint_valid_R_boolean, "()Z", 1 },
	{ "$values", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_$values_R_Array1_mindustry_ui_fragments_HintsFragment$DefaultHint, 0, "()[Lmindustry/ui/fragments/HintsFragment$DefaultHint;", 4106 },
	{ "lambda$show$0", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$show$0_mindustry_ui_fragments_HintsFragment$Hint_R_boolean, 0, "(Lmindustry/ui/fragments/HintsFragment$Hint;)Z", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$new$0_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$51", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$51_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$50", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$50_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$49", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$49_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$48", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$48_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$47", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$47_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$46", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$46_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$45", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$45_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$44", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$44_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$43", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$43_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$42", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$42_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$41", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$41_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$40", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$40_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$39", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$39_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$38", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$38_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$37", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$37_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$36", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$36_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$35", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$35_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$34", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$34_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$33", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$33_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$32", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$32_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$31", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$31_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$30", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$30_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$29", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$29_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$28", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$28_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$27", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$27_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$26", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$26_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$25", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$25_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$24", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$24_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$23", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$23_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$22", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$22_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$21", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$21_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$20", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$20_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$19", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$19_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$18", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$18_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$17", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$17_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$16", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$16_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$15", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$15_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$14", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$14_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$13", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$13_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$12", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$12_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$11", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$11_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$10", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$10_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$9", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$9_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$8", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$8_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$7", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$7_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$6", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$6_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$5", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$5_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$4", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$4_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$3_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$2_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$1_R_boolean, 0, "()Z", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_ui_fragments_HintsFragment$DefaultHint_lambda$static$0_R_boolean, 0, "()Z", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_ui_fragments_HintsFragment$DefaultHint, 0, "()V", 8 },
};

Class class_mindustry_ui_fragments_HintsFragment$DefaultHint{
		.nativeName = (intptr_t) "mindustry/ui/fragments/HintsFragment$DefaultHint",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_ui_fragments_HintsFragment$DefaultHint),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_HintsFragment$DefaultHint,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_HintsFragment$DefaultHint,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_HintsFragment$DefaultHint,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_fragments_HintsFragment,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 35,
		.nativeFields = (intptr_t) fields,
		.methodCount = 69,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_HintsFragment$DefaultHint = registerClass(&class_mindustry_ui_fragments_HintsFragment$DefaultHint);

}

