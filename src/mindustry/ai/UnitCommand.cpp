#include "mindustry/ai/UnitCommand.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "mindustry/ai/UnitCommand_invoke_arc_func_Func_9.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "mindustry/ai/types/RepairAI.h"
#include "arc/util/I18NBundle.h"
#include "arc/struct/Seq.h"
#include "mindustry/ctype/MappableContent.h"
#include "java/lang/reflect/Method.h"
#include "arc/input/KeyBind.h"
#include "mindustry/ai/UnitCommand_3.h"
#include "mindustry/ai/UnitCommand_2.h"
#include "arc/func/Func.h"
#include "arc/Core.h"
#include "mindustry/gen/Iconc.h"
#include "mindustry/ai/UnitCommand_1.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Icon.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/ai/UnitCommand_7.h"
#include "mindustry/ai/types/BuilderAI.h"
#include "mindustry/ai/UnitCommand_6.h"
#include "mindustry/ai/UnitCommand_5.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/input/Binding.h"
#include "mindustry/ai/UnitCommand_4.h"
#include "mindustry/ai/types/MinerAI.h"
#include "mindustry/ai/UnitCommand.h"
#include "arc/util/Nullable.h"
#include "java/lang/Object.h"
#include "mindustry/entities/units/AIController.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/ai/UnitCommand_invoke_arc_func_Func_8.h"
#include "mindustry/ai/UnitCommand_invoke_arc_func_Func_7.h"
#include "mindustry/ai/UnitCommand_invoke_arc_func_Func_6.h"
#include "mindustry/ai/UnitCommand_invoke_arc_func_Func_5.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/ctype/ContentType.h"
#include "arc/struct/ObjectIntMap.h"

extern "C" {

jobject SF_mindustry_ai_UnitCommand_moveCommand;
jobject SF_mindustry_ai_UnitCommand_repairCommand;
jobject SF_mindustry_ai_UnitCommand_rebuildCommand;
jobject SF_mindustry_ai_UnitCommand_assistCommand;
jobject SF_mindustry_ai_UnitCommand_mineCommand;
jobject SF_mindustry_ai_UnitCommand_enterPayloadCommand;
jobject SF_mindustry_ai_UnitCommand_loadUnitsCommand;
jobject SF_mindustry_ai_UnitCommand_loadBlocksCommand;
jobject SF_mindustry_ai_UnitCommand_unloadPayloadCommand;
jobject SF_mindustry_ai_UnitCommand_loopPayloadCommand;

void mark_mindustry_ai_UnitCommand(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ai_UnitCommand_moveCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitCommand_moveCommand)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitCommand_moveCommand, mark, depth + 1);
		if (SF_mindustry_ai_UnitCommand_repairCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitCommand_repairCommand)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitCommand_repairCommand, mark, depth + 1);
		if (SF_mindustry_ai_UnitCommand_rebuildCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitCommand_rebuildCommand)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitCommand_rebuildCommand, mark, depth + 1);
		if (SF_mindustry_ai_UnitCommand_assistCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitCommand_assistCommand)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitCommand_assistCommand, mark, depth + 1);
		if (SF_mindustry_ai_UnitCommand_mineCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitCommand_mineCommand)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitCommand_mineCommand, mark, depth + 1);
		if (SF_mindustry_ai_UnitCommand_enterPayloadCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitCommand_enterPayloadCommand)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitCommand_enterPayloadCommand, mark, depth + 1);
		if (SF_mindustry_ai_UnitCommand_loadUnitsCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitCommand_loadUnitsCommand)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitCommand_loadUnitsCommand, mark, depth + 1);
		if (SF_mindustry_ai_UnitCommand_loadBlocksCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitCommand_loadBlocksCommand)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitCommand_loadBlocksCommand, mark, depth + 1);
		if (SF_mindustry_ai_UnitCommand_unloadPayloadCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitCommand_unloadPayloadCommand)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitCommand_unloadPayloadCommand, mark, depth + 1);
		if (SF_mindustry_ai_UnitCommand_loopPayloadCommand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ai_UnitCommand_loopPayloadCommand)->clazz)->markFunction)((jobject) SF_mindustry_ai_UnitCommand_loopPayloadCommand, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ctype_MappableContent(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ai_UnitCommand *) object;
	if (self->F_icon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_icon)->clazz)->markFunction)((jobject) self->F_icon, mark, depth + 1);
	if (self->F_controller)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_controller)->clazz)->markFunction)((jobject) self->F_controller, mark, depth + 1);
	if (self->F_keybind)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_keybind)->clazz)->markFunction)((jobject) self->F_keybind, mark, depth + 1);
	if (self->F_extraStances)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_extraStances)->clazz)->markFunction)((jobject) self->F_extraStances, mark, depth + 1);
}

void clinit_mindustry_ai_UnitCommand(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ctype_MappableContent(ctx);
}

void init_mindustry_ai_UnitCommand_java_lang_String_java_lang_String_arc_func_Func(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitCommand(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(41);
	init_mindustry_ctype_MappableContent_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(24);
	((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_switchToMove = (jint(1));
	LINE_NUMBER(26);
	((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_drawTarget = (jint(0));
	LINE_NUMBER(28);
	((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_resetTarget = (jint(1));
	LINE_NUMBER(30);
	((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_snapToBuilding = (jint(0));
	LINE_NUMBER(32);
	((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_exactArrival = (jint(0));
	LINE_NUMBER(34);
	((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_refreshOnSelect = (jint(0));
	LINE_NUMBER(36);
	((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_keybind = (jref) (jobject(nullptr));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_ai_UnitCommand *) NULL_CHECK(sp[0].o))->F_extraStances = (jref) sp[1].o;
	LINE_NUMBER(43);
	((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (frame[2].o);
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[3].o) != nullptr) goto label_11;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_ai_UnitCommand_invoke_arc_func_Func_5(ctx);
		auto proxy = (mindustry_ai_UnitCommand_invoke_arc_func_Func_5 *) gcAlloc(ctx, &class_mindustry_ai_UnitCommand_invoke_arc_func_Func_5);
		PUSH_OBJECT((jobject) proxy);
	}
	goto label_12;
label_11:;
	INST_ALOAD(3);
label_12:;
	{
	sp -= 2;
	((mindustry_ai_UnitCommand *) NULL_CHECK(sp[0].o))->F_controller = (jref) sp[1].o;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_ai_UnitCommand_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitCommand(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(48);
	init_mindustry_ai_UnitCommand_java_lang_String_java_lang_String_arc_func_Func(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[4].o));
	LINE_NUMBER(49);
	((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_keybind = (jref) (frame[3].o);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_UnitCommand_localized_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand:localized", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"command.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_UnitCommand_getIcon_R_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand:getIcon", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = (jobject)((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_icon;
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_scene_style_TextureRegionDrawable, sp[0].o));
	}

	popStackFrame(ctx);
}

jchar M_mindustry_ai_UnitCommand_getEmoji_R_char(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand:getEmoji", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	clinit_mindustry_gen_Iconc(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Iconc_codes;
	sp[1].o = (jobject)((mindustry_ai_UnitCommand *) NULL_CHECK((frame[0].o)))->F_icon;
	jint temp0 = (jint)((func_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_get_java_lang_Object_int_R_int])(ctx, sp[0].o, sp[1].o, (jint(59413)));
	popStackFrame(ctx);
	return (jchar(temp0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_UnitCommand_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand:getContentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_unitCommand;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_ai_UnitCommand_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"UnitCommand:\u0001"_j.string, 1, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ai_UnitCommand_loadAll(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand:loadAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitCommand(ctx);
	{
	LINE_NUMBER(76);
	clinit_mindustry_ai_UnitCommand$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitCommand$1);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"move"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"right"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitCommandMove;
	init_mindustry_ai_UnitCommand$1_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jobject(nullptr)));
	clinit_mindustry_ai_UnitCommand(ctx);
	SF_mindustry_ai_UnitCommand_moveCommand = sp[0].o;
	LINE_NUMBER(80);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitCommand);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"repair"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"modeSurvival"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitCommandRepair;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_UnitCommand_invoke_arc_func_Func_6(ctx);
		auto proxy = (mindustry_ai_UnitCommand_invoke_arc_func_Func_6 *) gcAlloc(ctx, &class_mindustry_ai_UnitCommand_invoke_arc_func_Func_6);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_ai_UnitCommand_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_mindustry_ai_UnitCommand(ctx);
	SF_mindustry_ai_UnitCommand_repairCommand = sp[0].o;
	LINE_NUMBER(81);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitCommand);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rebuild"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"hammer"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitCommandRebuild;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_UnitCommand_invoke_arc_func_Func_7(ctx);
		auto proxy = (mindustry_ai_UnitCommand_invoke_arc_func_Func_7 *) gcAlloc(ctx, &class_mindustry_ai_UnitCommand_invoke_arc_func_Func_7);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_ai_UnitCommand_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_mindustry_ai_UnitCommand(ctx);
	SF_mindustry_ai_UnitCommand_rebuildCommand = sp[0].o;
	LINE_NUMBER(82);
	clinit_mindustry_ai_UnitCommand(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitCommand);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"assist"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"players"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitCommandAssist;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_UnitCommand_invoke_arc_func_Func_8(ctx);
		auto proxy = (mindustry_ai_UnitCommand_invoke_arc_func_Func_8 *) gcAlloc(ctx, &class_mindustry_ai_UnitCommand_invoke_arc_func_Func_8);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_ai_UnitCommand_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_mindustry_ai_UnitCommand(ctx);
	SF_mindustry_ai_UnitCommand_assistCommand = sp[0].o;
	LINE_NUMBER(87);
	clinit_mindustry_ai_UnitCommand$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitCommand$2);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mine"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"production"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitCommandMine;
	{ /* InvokeDynamic */
		clinit_mindustry_ai_UnitCommand_invoke_arc_func_Func_9(ctx);
		auto proxy = (mindustry_ai_UnitCommand_invoke_arc_func_Func_9 *) gcAlloc(ctx, &class_mindustry_ai_UnitCommand_invoke_arc_func_Func_9);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_ai_UnitCommand$2_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_mindustry_ai_UnitCommand(ctx);
	SF_mindustry_ai_UnitCommand_mineCommand = sp[0].o;
	LINE_NUMBER(90);
	clinit_mindustry_ai_UnitCommand$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitCommand$3);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"enterPayload"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"downOpen"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitCommandEnterPayload;
	init_mindustry_ai_UnitCommand$3_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jobject(nullptr)));
	clinit_mindustry_ai_UnitCommand(ctx);
	SF_mindustry_ai_UnitCommand_enterPayloadCommand = sp[0].o;
	LINE_NUMBER(96);
	clinit_mindustry_ai_UnitCommand$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitCommand$4);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"loadUnits"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"upload"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitCommandLoadUnits;
	init_mindustry_ai_UnitCommand$4_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jobject(nullptr)));
	clinit_mindustry_ai_UnitCommand(ctx);
	SF_mindustry_ai_UnitCommand_loadUnitsCommand = sp[0].o;
	LINE_NUMBER(101);
	clinit_mindustry_ai_UnitCommand$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitCommand$5);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"loadBlocks"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"up"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitCommandLoadBlocks;
	init_mindustry_ai_UnitCommand$5_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jobject(nullptr)));
	clinit_mindustry_ai_UnitCommand(ctx);
	SF_mindustry_ai_UnitCommand_loadBlocksCommand = sp[0].o;
	LINE_NUMBER(107);
	clinit_mindustry_ai_UnitCommand$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitCommand$6);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"unloadPayload"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"download"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitCommandUnloadPayload;
	init_mindustry_ai_UnitCommand$6_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jobject(nullptr)));
	clinit_mindustry_ai_UnitCommand(ctx);
	SF_mindustry_ai_UnitCommand_unloadPayloadCommand = sp[0].o;
	LINE_NUMBER(112);
	clinit_mindustry_ai_UnitCommand$7(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_UnitCommand$7);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"loopPayload"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"resize"_j));
	clinit_mindustry_input_Binding(ctx);
	sp[3].o = (jobject)SF_mindustry_input_Binding_unitCommandLoopPayload;
	init_mindustry_ai_UnitCommand$7_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (jobject(nullptr)));
	clinit_mindustry_ai_UnitCommand(ctx);
	SF_mindustry_ai_UnitCommand_loopPayloadCommand = sp[0].o;
	LINE_NUMBER(117);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ai_UnitCommand_lambda$loadAll$3_mindustry_gen_Unit_R_mindustry_entities_units_AIController(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand:lambda$loadAll$3", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitCommand(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(87);
	clinit_mindustry_ai_types_MinerAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_MinerAI);
	init_mindustry_ai_types_MinerAI(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ai_UnitCommand_lambda$loadAll$2_mindustry_gen_Unit_R_mindustry_entities_units_AIController(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand:lambda$loadAll$2", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitCommand(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(83);
	clinit_mindustry_ai_types_BuilderAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_BuilderAI);
	init_mindustry_ai_types_BuilderAI(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(84);
	((mindustry_ai_types_BuilderAI *) NULL_CHECK((frame[1].o)))->F_onlyAssist = (jint(1));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ai_UnitCommand_lambda$loadAll$1_mindustry_gen_Unit_R_mindustry_entities_units_AIController(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand:lambda$loadAll$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitCommand(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(81);
	clinit_mindustry_ai_types_BuilderAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_BuilderAI);
	init_mindustry_ai_types_BuilderAI(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ai_UnitCommand_lambda$loadAll$0_mindustry_gen_Unit_R_mindustry_entities_units_AIController(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand:lambda$loadAll$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitCommand(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(80);
	clinit_mindustry_ai_types_RepairAI(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_ai_types_RepairAI);
	init_mindustry_ai_types_RepairAI(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ai_UnitCommand_lambda$new$0_mindustry_gen_Unit_R_mindustry_entities_units_AIController(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/UnitCommand:lambda$new$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_UnitCommand(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_ai_UnitCommand;
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

	{ // Field keybind
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[18]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

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
}

void *vtable_mindustry_ai_UnitCommand[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ai_UnitCommand_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_ai_UnitCommand_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_ctype_Content_init,
	(void *) M_mindustry_ctype_Content_postInit,
	(void *) M_mindustry_ctype_Content_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_ctype_Content_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ai_UnitCommand_localized_R_java_lang_String,
	(void *) M_mindustry_ai_UnitCommand_getIcon_R_arc_scene_style_TextureRegionDrawable,
	(void *) M_mindustry_ai_UnitCommand_getEmoji_R_char,
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
	{ "localized", "()Ljava/lang/String;" },
	{ "getIcon", "()Larc/scene/style/TextureRegionDrawable;" },
	{ "getEmoji", "()C" },
};

static FieldMetadata fields[] {
	{ "moveCommand", &class_mindustry_ai_UnitCommand, (intptr_t) &SF_mindustry_ai_UnitCommand_moveCommand, "Lmindustry/ai/UnitCommand;", 9 },
	{ "repairCommand", &class_mindustry_ai_UnitCommand, (intptr_t) &SF_mindustry_ai_UnitCommand_repairCommand, "Lmindustry/ai/UnitCommand;", 9 },
	{ "rebuildCommand", &class_mindustry_ai_UnitCommand, (intptr_t) &SF_mindustry_ai_UnitCommand_rebuildCommand, "Lmindustry/ai/UnitCommand;", 9 },
	{ "assistCommand", &class_mindustry_ai_UnitCommand, (intptr_t) &SF_mindustry_ai_UnitCommand_assistCommand, "Lmindustry/ai/UnitCommand;", 9 },
	{ "mineCommand", &class_mindustry_ai_UnitCommand, (intptr_t) &SF_mindustry_ai_UnitCommand_mineCommand, "Lmindustry/ai/UnitCommand;", 9 },
	{ "enterPayloadCommand", &class_mindustry_ai_UnitCommand, (intptr_t) &SF_mindustry_ai_UnitCommand_enterPayloadCommand, "Lmindustry/ai/UnitCommand;", 9 },
	{ "loadUnitsCommand", &class_mindustry_ai_UnitCommand, (intptr_t) &SF_mindustry_ai_UnitCommand_loadUnitsCommand, "Lmindustry/ai/UnitCommand;", 9 },
	{ "loadBlocksCommand", &class_mindustry_ai_UnitCommand, (intptr_t) &SF_mindustry_ai_UnitCommand_loadBlocksCommand, "Lmindustry/ai/UnitCommand;", 9 },
	{ "unloadPayloadCommand", &class_mindustry_ai_UnitCommand, (intptr_t) &SF_mindustry_ai_UnitCommand_unloadPayloadCommand, "Lmindustry/ai/UnitCommand;", 9 },
	{ "loopPayloadCommand", &class_mindustry_ai_UnitCommand, (intptr_t) &SF_mindustry_ai_UnitCommand_loopPayloadCommand, "Lmindustry/ai/UnitCommand;", 9 },
	{ "icon", &class_java_lang_String, offsetof(mindustry_ai_UnitCommand, F_icon), "Ljava/lang/String;", 17 },
	{ "controller", &class_arc_func_Func, offsetof(mindustry_ai_UnitCommand, F_controller), "Larc/func/Func;", 17 },
	{ "switchToMove", &class_boolean, offsetof(mindustry_ai_UnitCommand, F_switchToMove), "Z", 1 },
	{ "drawTarget", &class_boolean, offsetof(mindustry_ai_UnitCommand, F_drawTarget), "Z", 1 },
	{ "resetTarget", &class_boolean, offsetof(mindustry_ai_UnitCommand, F_resetTarget), "Z", 1 },
	{ "snapToBuilding", &class_boolean, offsetof(mindustry_ai_UnitCommand, F_snapToBuilding), "Z", 1 },
	{ "exactArrival", &class_boolean, offsetof(mindustry_ai_UnitCommand, F_exactArrival), "Z", 1 },
	{ "refreshOnSelect", &class_boolean, offsetof(mindustry_ai_UnitCommand, F_refreshOnSelect), "Z", 1 },
	{ "keybind", &class_arc_input_KeyBind, offsetof(mindustry_ai_UnitCommand, F_keybind), "Larc/input/KeyBind;", 1 },
	{ "extraStances", &class_arc_struct_Seq, offsetof(mindustry_ai_UnitCommand, F_extraStances), "Larc/struct/Seq;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_UnitCommand_java_lang_String_java_lang_String_arc_func_Func, 0, "(Ljava/lang/String;Ljava/lang/String;Larc/func/Func;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_ai_UnitCommand_java_lang_String_java_lang_String_arc_input_KeyBind_arc_func_Func, 0, "(Ljava/lang/String;Ljava/lang/String;Larc/input/KeyBind;Larc/func/Func;)V", 1 },
	{ "localized", (intptr_t) M_mindustry_ai_UnitCommand_localized_R_java_lang_String, VTABLE_mindustry_ai_UnitCommand_localized_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getIcon", (intptr_t) M_mindustry_ai_UnitCommand_getIcon_R_arc_scene_style_TextureRegionDrawable, VTABLE_mindustry_ai_UnitCommand_getIcon_R_arc_scene_style_TextureRegionDrawable, "()Larc/scene/style/TextureRegionDrawable;", 1 },
	{ "getEmoji", (intptr_t) M_mindustry_ai_UnitCommand_getEmoji_R_char, VTABLE_mindustry_ai_UnitCommand_getEmoji_R_char, "()C", 1 },
	{ "getContentType", (intptr_t) M_mindustry_ai_UnitCommand_getContentType_R_mindustry_ctype_ContentType, VTABLE_mindustry_ai_UnitCommand_getContentType_R_mindustry_ctype_ContentType, "()Lmindustry/ctype/ContentType;", 1 },
	{ "toString", (intptr_t) M_mindustry_ai_UnitCommand_toString_R_java_lang_String, VTABLE_mindustry_ai_UnitCommand_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "loadAll", (intptr_t) SM_mindustry_ai_UnitCommand_loadAll, 0, "()V", 9 },
	{ "lambda$loadAll$3", (intptr_t) SM_mindustry_ai_UnitCommand_lambda$loadAll$3_mindustry_gen_Unit_R_mindustry_entities_units_AIController, 0, "(Lmindustry/gen/Unit;)Lmindustry/entities/units/AIController;", 4106 },
	{ "lambda$loadAll$2", (intptr_t) SM_mindustry_ai_UnitCommand_lambda$loadAll$2_mindustry_gen_Unit_R_mindustry_entities_units_AIController, 0, "(Lmindustry/gen/Unit;)Lmindustry/entities/units/AIController;", 4106 },
	{ "lambda$loadAll$1", (intptr_t) SM_mindustry_ai_UnitCommand_lambda$loadAll$1_mindustry_gen_Unit_R_mindustry_entities_units_AIController, 0, "(Lmindustry/gen/Unit;)Lmindustry/entities/units/AIController;", 4106 },
	{ "lambda$loadAll$0", (intptr_t) SM_mindustry_ai_UnitCommand_lambda$loadAll$0_mindustry_gen_Unit_R_mindustry_entities_units_AIController, 0, "(Lmindustry/gen/Unit;)Lmindustry/entities/units/AIController;", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_ai_UnitCommand_lambda$new$0_mindustry_gen_Unit_R_mindustry_entities_units_AIController, 0, "(Lmindustry/gen/Unit;)Lmindustry/entities/units/AIController;", 4106 },
};

Class class_mindustry_ai_UnitCommand{
		.nativeName = (intptr_t) "mindustry/ai/UnitCommand",
		.parentClass = (intptr_t) &class_mindustry_ctype_MappableContent,
		.size = sizeof(mindustry_ai_UnitCommand),
		.classVtable = (intptr_t) vtable_mindustry_ai_UnitCommand,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_UnitCommand,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_ai_UnitCommand,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 20,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_UnitCommand = registerClass(&class_mindustry_ai_UnitCommand);

}
