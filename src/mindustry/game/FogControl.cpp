#include "mindustry/game/FogControl.h"
#include "arc/Events.h"
#include "mindustry/game/FogControl_invoke_arc_func_Cons_8.h"
#include "mindustry/game/FogControl_invoke_arc_func_Cons_9.h"
#include "mindustry/game/FogControl_invoke_arc_func_Cons_6.h"
#include "mindustry/game/FogControl_invoke_arc_func_Cons_7.h"
#include "mindustry/game/FogControl_invoke_arc_func_Cons_5.h"
#include "java/lang/reflect/Constructor.h"
#include "java/io/DataOutput.h"
#include "mindustry/ai/BlockIndexer.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/game/FogControl_FogData.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "java/lang/Throwable.h"
#include "java/lang/Thread.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "mindustry/gen/Unit.h"
#include "arc/struct/Bits.h"
#include "mindustry/io/SaveFileReader_CustomChunk.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "java/io/DataInput.h"
#include "mindustry/gen/Building.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "mindustry/game/EventType_UnitDestroyEvent.h"
#include "mindustry/game/FogControl_DynamicFogThread.h"
#include "arc/struct/EnumSet.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "mindustry/world/Block.h"
#include "arc/struct/LongSeq.h"
#include "mindustry/game/Rules.h"
#include "mindustry/gen/Groups.h"
#include "mindustry/game/FogControl.h"
#include "mindustry/gen/FogEvent.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/game/EventType_TilePreChangeEvent.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "mindustry/game/FogControl_StaticFogThread.h"
#include "mindustry/world/meta/BlockFlag.h"
#include "mindustry/game/FogControl_FogEventStruct.h"
#include "java/lang/Math.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/Teams_TeamData.h"
#include "mindustry/game/EventType_TileChangeEvent.h"
#include "java/lang/Enum.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/entities/EntityGroup.h"
#include "mindustry/game/Teams.h"
#include "mindustry/gen/Player.h"
#include "mindustry/io/SaveVersion.h"
#include "mindustry/graphics/FogRenderer.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/core/World.h"

extern "C" {

volatile jint SF_mindustry_game_FogControl_ww;
volatile jint SF_mindustry_game_FogControl_wh;
jint SF_mindustry_game_FogControl_dynamicUpdateInterval;
jobject SF_mindustry_game_FogControl_notifyStatic;
jobject SF_mindustry_game_FogControl_notifyDynamic;

void mark_mindustry_game_FogControl(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_game_FogControl_notifyStatic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_FogControl_notifyStatic)->clazz)->markFunction)((jobject) SF_mindustry_game_FogControl_notifyStatic, mark, depth + 1);
		if (SF_mindustry_game_FogControl_notifyDynamic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_FogControl_notifyDynamic)->clazz)->markFunction)((jobject) SF_mindustry_game_FogControl_notifyDynamic, mark, depth + 1);
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
	auto self = (mindustry_game_FogControl *) object;
	if (self->F_fog)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fog)->clazz)->markFunction)((jobject) self->F_fog, mark, depth + 1);
	if (self->F_staticEvents)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_staticEvents)->clazz)->markFunction)((jobject) self->F_staticEvents, mark, depth + 1);
	if (self->F_dynamicEventQueue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dynamicEventQueue)->clazz)->markFunction)((jobject) self->F_dynamicEventQueue, mark, depth + 1);
	if (self->F_unitEventQueue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_unitEventQueue)->clazz)->markFunction)((jobject) self->F_unitEventQueue, mark, depth + 1);
	if (self->F_dynamicEvents)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dynamicEvents)->clazz)->markFunction)((jobject) self->F_dynamicEvents, mark, depth + 1);
	if (self->F_staticFogThread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_staticFogThread)->clazz)->markFunction)((jobject) self->F_staticFogThread, mark, depth + 1);
	if (self->F_dynamicFogThread)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dynamicFogThread)->clazz)->markFunction)((jobject) self->F_dynamicFogThread, mark, depth + 1);
}

void init_mindustry_game_FogControl(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_FogControl(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(41);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_LongSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongSeq);
	init_arc_struct_LongSeq(ctx, sp[1].o);
	((mindustry_game_FogControl *) NULL_CHECK(sp[0].o))->F_staticEvents = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_LongSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongSeq);
	init_arc_struct_LongSeq(ctx, sp[1].o);
	((mindustry_game_FogControl *) NULL_CHECK(sp[0].o))->F_dynamicEventQueue = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_struct_LongSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongSeq);
	init_arc_struct_LongSeq(ctx, sp[1].o);
	((mindustry_game_FogControl *) NULL_CHECK(sp[0].o))->F_unitEventQueue = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_arc_struct_LongSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_LongSeq);
	init_arc_struct_LongSeq_int(ctx, sp[1].o, (100));
	((mindustry_game_FogControl *) NULL_CHECK(sp[0].o))->F_dynamicEvents = (jref) sp[1].o;
	LINE_NUMBER(37);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_justLoaded = (jint(0));
	LINE_NUMBER(38);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_loadedStatic = (jint(0));
	LINE_NUMBER(39);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_lastEntityUpdateIndex = (jint(0));
	LINE_NUMBER(42);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_game_FogControl_invoke_arc_func_Cons_5(ctx);
		auto proxy = (mindustry_game_FogControl_invoke_arc_func_Cons_5 *) gcAlloc(ctx, &class_mindustry_game_FogControl_invoke_arc_func_Cons_5);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(46);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_game_FogControl_invoke_arc_func_Cons_6(ctx);
		auto proxy = (mindustry_game_FogControl_invoke_arc_func_Cons_6 *) gcAlloc(ctx, &class_mindustry_game_FogControl_invoke_arc_func_Cons_6);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(64);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TileChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_game_FogControl_invoke_arc_func_Cons_7(ctx);
		auto proxy = (mindustry_game_FogControl_invoke_arc_func_Cons_7 *) gcAlloc(ctx, &class_mindustry_game_FogControl_invoke_arc_func_Cons_7);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$TilePreChangeEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_game_FogControl_invoke_arc_func_Cons_8(ctx);
		auto proxy = (mindustry_game_FogControl_invoke_arc_func_Cons_8 *) gcAlloc(ctx, &class_mindustry_game_FogControl_invoke_arc_func_Cons_8);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(91);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$UnitDestroyEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_game_FogControl_invoke_arc_func_Cons_9(ctx);
		auto proxy = (mindustry_game_FogControl_invoke_arc_func_Cons_9 *) gcAlloc(ctx, &class_mindustry_game_FogControl_invoke_arc_func_Cons_9);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(97);
	SM_mindustry_io_SaveVersion_addCustomChunk_java_lang_String_mindustry_io_SaveFileReader$CustomChunk(ctx, (((jobject) createStringLiteral(ctx, u8"static-fog-data"_j))), (frame[0].o));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_FogControl_getDiscovered_mindustry_game_Team_R_arc_struct_Bits(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:getDiscovered", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id))) != nullptr) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	sp[0].o = (jobject)((mindustry_game_FogControl$FogData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id)))))->F_staticData;
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:isDiscovered", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(105);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((func_mindustry_game_FogControl_getDiscovered_mindustry_game_Team_R_arc_struct_Bits) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_FogControl_getDiscovered_mindustry_game_Team_R_arc_struct_Bits])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(108);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(109);
	if ((frame[2].i) < 0) goto label_5;
	}
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_5;
	{
	if ((frame[2].i) >= (clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_ww)) goto label_5;
	}
	{
	if ((frame[3].i) < (clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_wh)) goto label_6;
	}
label_5:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_6:;
	{
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[4].o), ((frame[2].i) + ((frame[3].i) * (clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_ww))));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:isVisible", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(114);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[2].f));
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (frame[3].f));
	jint temp2 = (jint)((func_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:isVisibleTile", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(118);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_1;
	}
	INST_ALOAD(1);
	if ((--sp)->o == nullptr) goto label_1;
	{
	jint temp0 = (jint)((func_mindustry_game_Team_isAI_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Team_isAI_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_mindustry_game_FogControl_data_mindustry_game_Team_R_mindustry_game_FogControl$FogData) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_FogControl_data_mindustry_game_Team_R_mindustry_game_FogControl$FogData])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(121);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[4].o)))->F_read;
	jint temp0 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (frame[2].i), (jint(0)), ((clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_ww) - (jint(1))));
	jint temp1 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (frame[3].i), (jint(0)), ((clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_wh) - (jint(1))));
	jint temp2 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, sp[0].o, (temp0 + (temp1 * (clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_ww))));
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_resetFog(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:resetFog", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog = (jref) (jobject(nullptr));
	LINE_NUMBER(127);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_FogControl_data_mindustry_game_Team_R_mindustry_game_FogControl$FogData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:data", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id))) != nullptr) goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(134);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_lastEntityUpdateIndex = (jint(0));
	LINE_NUMBER(135);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog = (jref) (jobject(nullptr));
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticEvents;
	((func_arc_struct_LongSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticFogThread;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticFogThread;
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(140);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticFogThread = (jref) (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEvents;
	((func_arc_struct_LongSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(144);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicFogThread;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	LINE_NUMBER(145);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicFogThread;
	((func_java_lang_Thread_interrupt) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_interrupt])(ctx, sp[0].o);
	LINE_NUMBER(146);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicFogThread = (jref) (jobject(nullptr));
	}
label_8:;
	LINE_NUMBER(148);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_pushStaticBlocks_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:pushStaticBlocks", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_FogControl$FogData, (256));
	((mindustry_game_FogControl *) NULL_CHECK(sp[0].o))->F_fog = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticEvents;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(155);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_build;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_8:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_hasFogRadius;
	jint temp0 = (jint)((func_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))) != nullptr) goto label_13;
	}
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id;
	clinit_mindustry_game_FogControl$FogData(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_FogControl$FogData);
	init_mindustry_game_FogControl$FogData(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_13:;
	{
	LINE_NUMBER(161);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_tile;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_fogRadius_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_gen_Building_fogRadius_R_float])(ctx, (frame[4].o));
	jint temp3 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, temp2);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[4].o)))->F_team;
	jlong temp4 = (jlong)SM_mindustry_gen_FogEvent_get_int_int_int_int_R_long(ctx, temp0, temp1, temp3, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	((func_mindustry_game_FogControl_pushEvent_long_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_pushEvent_long_boolean])(ctx, sp[0].o, temp4, (frame[1].i));
	}
label_11:;
	LINE_NUMBER(163);
	goto label_8;
label_9:;
	{
	LINE_NUMBER(164);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_15;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(5);
	INST_ATHROW();
	label_15:;
	LINE_NUMBER(165);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_pushEvent_long_boolean(jcontext ctx, jobject self, jlong param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:pushEvent", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	frame[3].i = param1;
	{
	LINE_NUMBER(169);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticEvents;
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, (frame[1].l));
	LINE_NUMBER(172);
	if ((frame[3].i) != 0) goto label_3;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_3;
	{
	jint temp0 = (jint)SM_mindustry_gen_FogEvent_team_long_R_int(ctx, (frame[1].l));
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	if (temp0 != ((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id)) goto label_3;
	}
	{
	LINE_NUMBER(173);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_fog;
	((func_mindustry_graphics_FogRenderer_handleEvent_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FogRenderer_handleEvent_long])(ctx, sp[0].o, (frame[1].l));
	}
label_3:;
	LINE_NUMBER(175);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_forceUpdate_mindustry_game_Team_mindustry_gen_Building(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:forceUpdate", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(178);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id))) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(179);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	((mindustry_game_FogControl$FogData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK((frame[1].o)))->F_id)))))->F_dynamicUpdated = (jint(1));
	LINE_NUMBER(181);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_7;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticEvents;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(183);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_tile;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_fogRadius_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_gen_Building_fogRadius_R_float])(ctx, (frame[2].o));
	jint temp3 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, temp2);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[2].o)))->F_team;
	jlong temp4 = (jlong)SM_mindustry_gen_FogEvent_get_int_int_int_int_R_long(ctx, temp0, temp1, temp3, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	((func_mindustry_game_FogControl_pushEvent_long_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_pushEvent_long_boolean])(ctx, sp[0].o, temp4, (jint(0)));
	LINE_NUMBER(184);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_7;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_7:;
	LINE_NUMBER(187);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:update", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(190);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	if (sp[0].o != nullptr) goto label_25;
	}
	{
	LINE_NUMBER(191);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_FogControl$FogData, (256));
	((mindustry_game_FogControl *) NULL_CHECK(sp[0].o))->F_fog = (jref) sp[1].o;
	}
label_25:;
	{
	LINE_NUMBER(195);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_27;
	}
	{
	if (((jint)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_loadedStatic) != 0) goto label_27;
	}
	{
	LINE_NUMBER(196);
	((func_mindustry_game_FogControl_pushStaticBlocks_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_FogControl_pushStaticBlocks_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(197);
	((func_mindustry_game_FogControl_updateStatic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_FogControl_updateStatic])(ctx, (frame[0].o));
	LINE_NUMBER(198);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_loadedStatic = (jint(1));
	}
label_27:;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticFogThread;
	if (sp[0].o != nullptr) goto label_31;
	}
	{
	LINE_NUMBER(202);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_FogControl$StaticFogThread(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_FogControl$StaticFogThread);
	init_mindustry_game_FogControl$StaticFogThread_mindustry_game_FogControl(ctx, sp[1].o, (frame[0].o));
	((mindustry_game_FogControl *) NULL_CHECK(sp[0].o))->F_staticFogThread = (jref) sp[1].o;
	LINE_NUMBER(203);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticFogThread;
	((func_java_lang_Thread_setPriority_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_setPriority_int])(ctx, sp[0].o, (jint(4)));
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticFogThread;
	((func_java_lang_Thread_setDaemon_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_setDaemon_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(205);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticFogThread;
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_start])(ctx, sp[0].o);
	}
label_31:;
	{
	LINE_NUMBER(208);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicFogThread;
	if (sp[0].o != nullptr) goto label_36;
	}
	{
	LINE_NUMBER(209);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_FogControl$DynamicFogThread(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_FogControl$DynamicFogThread);
	init_mindustry_game_FogControl$DynamicFogThread_mindustry_game_FogControl(ctx, sp[1].o, (frame[0].o));
	((mindustry_game_FogControl *) NULL_CHECK(sp[0].o))->F_dynamicFogThread = (jref) sp[1].o;
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicFogThread;
	((func_java_lang_Thread_setPriority_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_setPriority_int])(ctx, sp[0].o, (jint(4)));
	LINE_NUMBER(211);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicFogThread;
	((func_java_lang_Thread_setDaemon_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_setDaemon_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicFogThread;
	((func_java_lang_Thread_start) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_start])(ctx, sp[0].o);
	}
label_36:;
	{
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEventQueue;
	((func_arc_struct_LongSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(219);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_42;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_42;
	{
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_build;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[0].o);
	if (temp0 <= 0) goto label_42;
	}
	{
	LINE_NUMBER(221);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_build;
	jint temp0 = (jint)((func_mindustry_entities_EntityGroup_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_size_R_int])(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(222);
	frame[2].i = (jint(5));
	LINE_NUMBER(223);
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (frame[2].i), (frame[1].i));
	frame[3].i = temp1;
	LINE_NUMBER(225);
	jint temp2 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(1)), ((frame[1].i) / (frame[3].i)));
	frame[4].i = temp2;
	LINE_NUMBER(226);
	frame[5].i = (jint(0));
	LINE_NUMBER(227);
	frame[6].i = (((jint)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_lastEntityUpdateIndex) % (frame[1].i));
	}
label_49:;
	{
	LINE_NUMBER(229);
	if ((frame[5].i) >= (frame[4].i)) goto label_50;
	}
	{
	LINE_NUMBER(230);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_build;
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_index_int_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_index_int_R_mindustry_gen_Entityc])(ctx, sp[0].o, (frame[6].i));
	((func_mindustry_gen_Building_updateFogVisibility) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o)))->vtable)[VTABLE_mindustry_gen_Building_updateFogVisibility])(ctx, (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o)));
	LINE_NUMBER(232);
	INST_IINC(5, 1);
	LINE_NUMBER(233);
	INST_IINC(6, 1);
	LINE_NUMBER(235);
	if ((frame[6].i) < (frame[1].i)) goto label_49;
	}
	{
	LINE_NUMBER(236);
	frame[6].i = (jint(0));
	goto label_49;
	}
label_50:;
	{
	LINE_NUMBER(240);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_lastEntityUpdateIndex = (frame[6].i);
	}
label_42:;
	{
	LINE_NUMBER(243);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	sp[0].o = (jobject)((mindustry_game_Teams *) NULL_CHECK(sp[0].o))->F_present;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_56:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_57;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_mindustry_game_Teams$TeamData, sp[0].o));
	LINE_NUMBER(245);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isOnlyAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isOnlyAI_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_59;
	}
	{
	LINE_NUMBER(247);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_unitEventQueue;
	((func_arc_struct_LongSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(249);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_team;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id)));
	LINE_NUMBER(251);
	if ((frame[3].o) != nullptr) goto label_63;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_team;
	jint temp0 = (jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id;
	clinit_mindustry_game_FogControl$FogData(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_FogControl$FogData);
	init_mindustry_game_FogControl$FogData(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	frame[3].o = sp[1].o;
	}
label_63:;
	{
	LINE_NUMBER(255);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticEvents;
	frame[4].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(257);
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_units;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_65:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_66;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_gen_Unit, sp[0].o));
	LINE_NUMBER(258);
	jint temp0 = (jint)((func_mindustry_gen_Unit_tileX_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_tileX_R_int])(ctx, (frame[6].o));
	frame[7].i = temp0;
	jint temp1 = (jint)((func_mindustry_gen_Unit_tileY_R_int) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_mindustry_gen_Unit_tileY_R_int])(ctx, (frame[6].o));
	frame[8].i = temp1;
	frame[9].i = ((frame[7].i) + ((frame[8].i) * (clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_ww)));
	LINE_NUMBER(259);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_type;
	if ((floatCompare(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_fogRadius), (jfloat(0)), 1)) > 0) goto label_71;
	}
	goto label_65;
label_71:;
	{
	LINE_NUMBER(260);
	jint temp0 = frame[7].i;
	jint temp1 = frame[8].i;
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_type;
	jint temp2 = jint(((jfloat)((mindustry_type_UnitType *) NULL_CHECK(sp[0].o))->F_fogRadius));
	sp[0].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_team;
	jlong temp3 = (jlong)SM_mindustry_gen_FogEvent_get_int_int_int_int_R_long(ctx, temp0, temp1, temp2, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_id));
	frame[10].l = temp3;
	LINE_NUMBER(263);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_unitEventQueue;
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, (frame[10].l));
	LINE_NUMBER(265);
	if (((jint)((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_lastFogPos) == (frame[9].i)) goto label_74;
	}
	{
	LINE_NUMBER(266);
	((func_mindustry_game_FogControl_pushEvent_long_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_FogControl_pushEvent_long_boolean])(ctx, (frame[0].o), (frame[10].l), (jint(0)));
	LINE_NUMBER(267);
	((mindustry_gen_Unit *) NULL_CHECK((frame[6].o)))->F_lastFogPos = (frame[9].i);
	LINE_NUMBER(268);
	((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[3].o)))->F_dynamicUpdated = (jint(1));
	}
label_74:;
	LINE_NUMBER(270);
	goto label_65;
label_66:;
	{
	LINE_NUMBER(271);
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	goto label_78;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	monitorExit(ctx, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(12);
	INST_ATHROW();
	label_78:;
	{
	LINE_NUMBER(274);
	if (((jint)((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[3].o)))->F_dynamicUpdated) == 0) goto label_59;
	}
	{
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[3].o)))->F_lastDynamicMs));
	if ((longCompare(temp0, (jlong(40ll)))) <= 0) goto label_59;
	}
	{
	LINE_NUMBER(275);
	((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[3].o)))->F_dynamicUpdated = (jint(0));
	LINE_NUMBER(276);
	sp[0].o = frame[3].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_game_FogControl$FogData *) NULL_CHECK(sp[0].o))->F_lastDynamicMs = temp0;
	LINE_NUMBER(279);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_indexer;
	sp[1].o = (jobject)((mindustry_game_Teams$TeamData *) NULL_CHECK((frame[2].o)))->F_team;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[2].o = (jobject)SF_mindustry_world_meta_BlockFlag_hasFogRadius;
	sp[0].o = (jobject)((func_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ai_BlockIndexer_getFlagged_mindustry_game_Team_mindustry_world_meta_BlockFlag_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_82:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_83;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_gen_Building, sp[0].o));
	LINE_NUMBER(280);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEventQueue;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_tile;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_fogRadius_R_float) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_mindustry_gen_Building_fogRadius_R_float])(ctx, (frame[5].o));
	jint temp3 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, temp2);
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[5].o)))->F_team;
	jlong temp4 = (jlong)SM_mindustry_gen_FogEvent_get_int_int_int_int_R_long(ctx, temp0, temp1, temp3, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	((func_arc_struct_LongSeq_add_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_add_long])(ctx, sp[0].o, temp4);
	LINE_NUMBER(281);
	goto label_82;
	}
label_83:;
	{
	LINE_NUMBER(284);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEventQueue;
	sp[1].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_unitEventQueue;
	((func_arc_struct_LongSeq_addAll_arc_struct_LongSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_addAll_arc_struct_LongSeq])(ctx, sp[0].o, sp[1].o);
	}
label_59:;
	LINE_NUMBER(287);
	goto label_56;
label_57:;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEventQueue;
	if (((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_86;
	}
	{
	LINE_NUMBER(291);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEvents;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEvents;
	((func_arc_struct_LongSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(293);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEvents;
	sp[1].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEventQueue;
	((func_arc_struct_LongSeq_addAll_arc_struct_LongSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_addAll_arc_struct_LongSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(294);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_90;
label_8:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	sp -= 1;
	frame[13].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(13);
	INST_ATHROW();
	label_90:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEventQueue;
	((func_arc_struct_LongSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(298);
	if (((jint)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_justLoaded) == 0) goto label_92;
	}
	{
	LINE_NUMBER(299);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Bits(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits_int(ctx, sp[1].o, (256));
	((func_mindustry_game_FogControl_updateDynamic_arc_struct_Bits) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_updateDynamic_arc_struct_Bits])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(300);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_justLoaded = (jint(0));
	}
label_92:;
	{
	LINE_NUMBER(305);
	clinit_mindustry_game_FogControl(ctx);
	sp[0].o = (jobject)SF_mindustry_game_FogControl_notifyDynamic;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	LINE_NUMBER(306);
	clinit_mindustry_game_FogControl(ctx);
	sp[0].o = (jobject)SF_mindustry_game_FogControl_notifyDynamic;
	((func_java_lang_Object_notify) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_notify])(ctx, sp[0].o);
	LINE_NUMBER(307);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_86;
label_14:;
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_14; }
	}
	{
	sp -= 1;
	frame[14].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(14);
	INST_ATHROW();
	label_86:;
	{
	LINE_NUMBER(311);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_96;
	}
	{
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticEvents;
	if (((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_96;
	}
	{
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticFogThread;
	if (sp[0].o == nullptr) goto label_96;
	}
	{
	LINE_NUMBER(312);
	clinit_mindustry_game_FogControl(ctx);
	sp[0].o = (jobject)SF_mindustry_game_FogControl_notifyStatic;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_20; }
	}
	{
	LINE_NUMBER(313);
	clinit_mindustry_game_FogControl(ctx);
	sp[0].o = (jobject)SF_mindustry_game_FogControl_notifyStatic;
	((func_java_lang_Object_notify) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_notify])(ctx, sp[0].o);
	LINE_NUMBER(314);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_96;
label_20:;
label_23: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_20; }
	}
	{
	sp -= 1;
	frame[15].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(15);
	INST_ATHROW();
	label_96:;
	LINE_NUMBER(316);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_updateStatic(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:updateStatic", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticEvents;
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticEvents;
	frame[2].i = ((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(350);
	frame[3].i = (jint(0));
	}
label_8:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticEvents;
	sp[0].o = (jobject)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[3].i)));
	LINE_NUMBER(352);
	jint temp0 = (jint)SM_mindustry_gen_FogEvent_x_long_R_int(ctx, (frame[4].l));
	frame[6].i = temp0;
	jint temp1 = (jint)SM_mindustry_gen_FogEvent_y_long_R_int(ctx, (frame[4].l));
	frame[7].i = temp1;
	jint temp2 = (jint)SM_mindustry_gen_FogEvent_radius_long_R_int(ctx, (frame[4].l));
	frame[8].i = temp2;
	jint temp3 = (jint)SM_mindustry_gen_FogEvent_team_long_R_int(ctx, (frame[4].l));
	frame[9].i = temp3;
	LINE_NUMBER(353);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	frame[10].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[9].i)));
	LINE_NUMBER(354);
	if ((frame[10].o) == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(355);
	sp[0].o = (jobject)((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[10].o)))->F_staticData;
	SM_mindustry_game_FogControl_circle_arc_struct_Bits_int_int_int(ctx, sp[0].o, (frame[6].i), (frame[7].i), (frame[8].i));
	}
label_17:;
	{
	LINE_NUMBER(350);
	INST_IINC(3, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticEvents;
	((func_arc_struct_LongSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(359);
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	goto label_20;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[11].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(11);
	INST_ATHROW();
	label_20:;
	LINE_NUMBER(360);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_updateDynamic_arc_struct_Bits(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:updateDynamic", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(396);
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, (frame[1].o));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEvents;
	frame[2].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEvents;
	frame[3].i = ((jint)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(403);
	frame[4].i = (jint(0));
	}
label_9:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_10;
	}
	{
	LINE_NUMBER(404);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEvents;
	sp[0].o = (jobject)((arc_struct_LongSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[5].l = ((jlong)ARRAY_ACCESS(jlong, sp[0].o, (frame[4].i)));
	LINE_NUMBER(405);
	jint temp0 = (jint)SM_mindustry_gen_FogEvent_x_long_R_int(ctx, (frame[5].l));
	frame[7].i = temp0;
	jint temp1 = (jint)SM_mindustry_gen_FogEvent_y_long_R_int(ctx, (frame[5].l));
	frame[8].i = temp1;
	jint temp2 = (jint)SM_mindustry_gen_FogEvent_radius_long_R_int(ctx, (frame[5].l));
	frame[9].i = temp2;
	jint temp3 = (jint)SM_mindustry_gen_FogEvent_team_long_R_int(ctx, (frame[5].l));
	frame[10].i = temp3;
	LINE_NUMBER(407);
	if ((frame[9].i) > 0) goto label_17;
	}
	goto label_18;
label_17:;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	frame[11].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i)));
	LINE_NUMBER(410);
	if ((frame[11].o) == nullptr) goto label_18;
	}
	{
	LINE_NUMBER(413);
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[1].o), (frame[10].i));
	if (temp0 != 0) goto label_21;
	}
	{
	LINE_NUMBER(414);
	((func_arc_struct_Bits_set_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_set_int])(ctx, (frame[1].o), (frame[10].i));
	LINE_NUMBER(416);
	sp[0].o = (jobject)((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[11].o)))->F_write;
	((func_arc_struct_Bits_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Bits_clear])(ctx, sp[0].o);
	}
label_21:;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[11].o)))->F_write;
	SM_mindustry_game_FogControl_circle_arc_struct_Bits_int_int_int(ctx, sp[0].o, (frame[7].i), (frame[8].i), ((frame[9].i) + (jint(1))));
	}
label_18:;
	{
	LINE_NUMBER(403);
	INST_IINC(4, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(423);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_dynamicEvents;
	((func_arc_struct_LongSeq_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_LongSeq_clear])(ctx, sp[0].o);
	LINE_NUMBER(424);
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	goto label_25;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[12].o = sp[0].o;
	monitorExit(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(12);
	INST_ATHROW();
	label_25:;
	{
	LINE_NUMBER(427);
	frame[2].i = (jint(0));
	}
label_26:;
	{
	if ((frame[2].i) >= (256)) goto label_27;
	}
	{
	LINE_NUMBER(428);
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[1].o), (frame[2].i));
	if (temp0 == 0) goto label_29;
	}
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)));
	LINE_NUMBER(432);
	sp[0].o = (jobject)((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[3].o)))->F_read;
	frame[4].o = sp[0].o;
	LINE_NUMBER(433);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[3].o)))->F_write;
	((mindustry_game_FogControl$FogData *) NULL_CHECK(sp[0].o))->F_read = (jref) sp[1].o;
	LINE_NUMBER(434);
	((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[3].o)))->F_write = (jref) (frame[4].o);
	}
label_29:;
	{
	LINE_NUMBER(427);
	INST_IINC(2, 1);
	goto label_26;
	}
label_27:;
	LINE_NUMBER(437);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_write_java_io_DataOutput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:write", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(441);
	frame[2].i = (jint(0));
	LINE_NUMBER(442);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (256)) goto label_3;
	}
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) == nullptr) goto label_5;
	}
	INST_IINC(2, 1);
label_5:;
	{
	LINE_NUMBER(442);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(446);
	((func_java_io_DataOutput_writeByte_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeByte_int, (frame[1].o)))(ctx, (frame[1].o), (frame[2].i));
	LINE_NUMBER(447);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[1].o);
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, sp[0].o))(ctx, sp[0].o, temp0);
	LINE_NUMBER(448);
	sp[0].o = frame[1].o;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[1].o);
	((func_java_io_DataOutput_writeShort_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeShort_int, sp[0].o))(ctx, sp[0].o, temp1);
	LINE_NUMBER(450);
	frame[3].i = (jint(0));
	}
label_9:;
	{
	if ((frame[3].i) >= (256)) goto label_10;
	}
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i))) == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(452);
	((func_java_io_DataOutput_writeByte_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_writeByte_int, (frame[1].o)))(ctx, (frame[1].o), (frame[3].i));
	LINE_NUMBER(453);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	sp[0].o = (jobject)((mindustry_game_FogControl$FogData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[3].i)))))->F_staticData;
	frame[4].o = sp[0].o;
	LINE_NUMBER(454);
	frame[5].i = ((clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_ww) * (clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_wh));
	LINE_NUMBER(456);
	frame[6].i = (jint(0));
	}
label_17:;
	{
	LINE_NUMBER(457);
	if ((frame[6].i) >= (frame[5].i)) goto label_12;
	}
	{
	LINE_NUMBER(458);
	frame[7].i = (jint(0));
	LINE_NUMBER(459);
	jint temp0 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[4].o), (frame[6].i));
	frame[8].i = temp0;
	}
label_20:;
	{
	LINE_NUMBER(460);
	if ((frame[7].i) >= (127)) goto label_21;
	}
	{
	if ((frame[6].i) >= (frame[5].i)) goto label_21;
	}
	{
	LINE_NUMBER(461);
	jint temp0 = frame[8].i;
	jint temp1 = (jint)((func_arc_struct_Bits_get_int_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_arc_struct_Bits_get_int_R_boolean])(ctx, (frame[4].o), (frame[6].i));
	if (temp0 == temp1) goto label_23;
	}
	LINE_NUMBER(462);
	goto label_21;
label_23:;
	{
	LINE_NUMBER(465);
	INST_IINC(7, 1);
	LINE_NUMBER(466);
	INST_IINC(6, 1);
	goto label_20;
	}
label_21:;
	{
	LINE_NUMBER(468);
	if ((frame[8].i) == 0) goto label_26;
	}
	INST_SIPUSH(128);
	goto label_27;
label_26:;
	INST_ICONST(0);
label_27:;
	{
	sp -= 1;
	frame[9].i = sp[0].i;
	LINE_NUMBER(469);
	((func_java_io_DataOutput_write_int) resolveInterfaceMethod(ctx, &class_java_io_DataOutput, INDEX_java_io_DataOutput_write_int, (frame[1].o)))(ctx, (frame[1].o), ((frame[9].i) | (frame[7].i)));
	LINE_NUMBER(470);
	goto label_17;
	}
label_12:;
	{
	LINE_NUMBER(450);
	INST_IINC(3, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(473);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_read_java_io_DataInput(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:read", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(477);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_game_FogControl$FogData, (256));
	((mindustry_game_FogControl *) NULL_CHECK(sp[0].o))->F_fog = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(479);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedByte_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedByte_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].i = temp0;
	LINE_NUMBER(480);
	jint temp1 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].i = temp1;
	jint temp2 = (jint)((func_java_io_DataInput_readShort_R_short) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readShort_R_short, (frame[1].o)))(ctx, (frame[1].o));
	frame[4].i = temp2;
	LINE_NUMBER(481);
	frame[5].i = ((frame[3].i) * (frame[4].i));
	LINE_NUMBER(483);
	clinit_mindustry_game_FogControl(ctx);
	SF_mindustry_game_FogControl_ww = (frame[3].i);
	LINE_NUMBER(484);
	clinit_mindustry_game_FogControl(ctx);
	SF_mindustry_game_FogControl_wh = (frame[4].i);
	LINE_NUMBER(486);
	frame[6].i = (jint(0));
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[2].i)) goto label_9;
	}
	{
	LINE_NUMBER(487);
	jint temp0 = (jint)((func_java_io_DataInput_readUnsignedByte_R_int) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readUnsignedByte_R_int, (frame[1].o)))(ctx, (frame[1].o));
	frame[7].i = temp0;
	LINE_NUMBER(488);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	jint temp1 = frame[7].i;
	clinit_mindustry_game_FogControl$FogData(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_FogControl$FogData);
	init_mindustry_game_FogControl$FogData(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(490);
	frame[8].i = (jint(0));
	LINE_NUMBER(491);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	sp[0].o = (jobject)((mindustry_game_FogControl$FogData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)))))->F_staticData;
	frame[9].o = sp[0].o;
	}
label_14:;
	{
	LINE_NUMBER(493);
	if ((frame[8].i) >= (frame[5].i)) goto label_15;
	}
	{
	LINE_NUMBER(494);
	jint temp0 = (jint)((func_java_io_DataInput_readByte_R_byte) resolveInterfaceMethod(ctx, &class_java_io_DataInput, INDEX_java_io_DataInput_readByte_R_byte, (frame[1].o)))(ctx, (frame[1].o));
	frame[10].i = (temp0 & (255));
	LINE_NUMBER(495);
	if (((frame[10].i) & (128)) == 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 1;
	frame[11].i = sp[0].i;
	LINE_NUMBER(496);
	frame[12].i = ((frame[10].i) & (127));
	LINE_NUMBER(498);
	if ((frame[11].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(499);
	((func_arc_struct_Bits_set_int_int) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_Bits_set_int_int])(ctx, (frame[9].o), (frame[8].i), ((frame[8].i) + (frame[12].i)));
	LINE_NUMBER(500);
	frame[8].i = ((frame[8].i) + (frame[12].i));
	goto label_25;
	}
label_22:;
	{
	LINE_NUMBER(502);
	frame[8].i = ((frame[8].i) + (frame[12].i));
	}
label_25:;
	LINE_NUMBER(504);
	goto label_14;
label_15:;
	{
	LINE_NUMBER(486);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(507);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_game_FogControl_shouldWrite_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:shouldWrite", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(511);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
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

void SM_mindustry_game_FogControl_circle_arc_struct_Bits_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:circle", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_FogControl(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(515);
	frame[4].i = ((jint(1)) - (frame[3].i));
	LINE_NUMBER(516);
	frame[5].i = (jint(1));
	frame[6].i = ((-2) * (frame[3].i));
	LINE_NUMBER(517);
	frame[7].i = (jint(0));
	frame[8].i = (frame[3].i);
	LINE_NUMBER(519);
	SM_mindustry_game_FogControl_hline_arc_struct_Bits_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[1].i), ((frame[2].i) + (frame[3].i)));
	LINE_NUMBER(520);
	SM_mindustry_game_FogControl_hline_arc_struct_Bits_int_int_int(ctx, (frame[0].o), (frame[1].i), (frame[1].i), ((frame[2].i) - (frame[3].i)));
	LINE_NUMBER(521);
	SM_mindustry_game_FogControl_hline_arc_struct_Bits_int_int_int(ctx, (frame[0].o), ((frame[1].i) - (frame[3].i)), ((frame[1].i) + (frame[3].i)), (frame[2].i));
	}
label_8:;
	{
	LINE_NUMBER(523);
	if ((frame[7].i) >= (frame[8].i)) goto label_9;
	}
	{
	LINE_NUMBER(524);
	if ((frame[4].i) < 0) goto label_11;
	}
	{
	LINE_NUMBER(525);
	INST_IINC(8, -1);
	LINE_NUMBER(526);
	INST_IINC(6, 2);
	LINE_NUMBER(527);
	frame[4].i = ((frame[4].i) + (frame[6].i));
	}
label_11:;
	{
	LINE_NUMBER(529);
	INST_IINC(7, 1);
	LINE_NUMBER(530);
	INST_IINC(5, 2);
	LINE_NUMBER(531);
	frame[4].i = ((frame[4].i) + (frame[5].i));
	LINE_NUMBER(532);
	SM_mindustry_game_FogControl_hline_arc_struct_Bits_int_int_int(ctx, (frame[0].o), ((frame[1].i) - (frame[7].i)), ((frame[1].i) + (frame[7].i)), ((frame[2].i) + (frame[8].i)));
	LINE_NUMBER(533);
	SM_mindustry_game_FogControl_hline_arc_struct_Bits_int_int_int(ctx, (frame[0].o), ((frame[1].i) - (frame[7].i)), ((frame[1].i) + (frame[7].i)), ((frame[2].i) - (frame[8].i)));
	LINE_NUMBER(534);
	SM_mindustry_game_FogControl_hline_arc_struct_Bits_int_int_int(ctx, (frame[0].o), ((frame[1].i) - (frame[8].i)), ((frame[1].i) + (frame[8].i)), ((frame[2].i) + (frame[7].i)));
	LINE_NUMBER(535);
	SM_mindustry_game_FogControl_hline_arc_struct_Bits_int_int_int(ctx, (frame[0].o), ((frame[1].i) - (frame[8].i)), ((frame[1].i) + (frame[8].i)), ((frame[2].i) - (frame[7].i)));
	goto label_8;
	}
label_9:;
	LINE_NUMBER(537);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_game_FogControl_hline_arc_struct_Bits_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:hline", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_FogControl(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(540);
	if ((frame[3].i) < 0) goto label_1;
	}
	{
	if ((frame[3].i) < (clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_wh)) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(543);
	if ((frame[1].i) <= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(544);
	frame[4].i = (frame[1].i);
	LINE_NUMBER(545);
	frame[1].i = (frame[2].i);
	LINE_NUMBER(546);
	frame[2].i = (frame[4].i);
	}
label_3:;
	{
	LINE_NUMBER(549);
	if ((frame[1].i) < (clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_ww)) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(550);
	if ((frame[2].i) >= 0) goto label_8;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_8:;
	{
	LINE_NUMBER(552);
	if ((frame[1].i) >= 0) goto label_9;
	}
	INST_ICONST(0);
	INST_ISTORE(1);
label_9:;
	{
	LINE_NUMBER(553);
	if ((frame[2].i) < (clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_ww)) goto label_10;
	}
	{
	frame[2].i = ((clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_ww) - (jint(1)));
	}
label_10:;
	{
	LINE_NUMBER(554);
	INST_IINC(2, 1);
	LINE_NUMBER(555);
	frame[5].i = ((frame[3].i) * (clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_ww));
	LINE_NUMBER(557);
	((func_arc_struct_Bits_set_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_struct_Bits_set_int_int])(ctx, (frame[0].o), ((frame[5].i) + (frame[1].i)), ((frame[5].i) + (frame[2].i)));
	LINE_NUMBER(558);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_lambda$new$4_mindustry_game_EventType$UnitDestroyEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:lambda$new$4", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	sp[1].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id))) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_fog;
	sp[1].o = (jobject)((mindustry_game_EventType$UnitDestroyEvent *) NULL_CHECK((frame[1].o)))->F_unit;
	sp[1].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK(sp[1].o))->F_team;
	((mindustry_game_FogControl$FogData *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id)))))->F_dynamicUpdated = (jint(1));
	}
label_1:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:lambda$new$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isOnlyAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isOnlyAI_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_hasFogRadius;
	jint temp0 = (jint)((func_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TilePreChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_game_FogControl_data_mindustry_game_Team_R_mindustry_game_FogControl$FogData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_data_mindustry_game_Team_R_mindustry_game_FogControl$FogData])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(84);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(85);
	((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[2].o)))->F_dynamicUpdated = (jint(1));
	}
label_1:;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_lambda$new$2_mindustry_game_EventType$TileChangeEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:lambda$new$2", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((func_mindustry_world_Tile_isCenter_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_isCenter_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_team;
	jint temp0 = (jint)((func_mindustry_game_Team_isOnlyAI_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Team_isOnlyAI_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_flags;
	clinit_mindustry_world_meta_BlockFlag(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BlockFlag_hasFogRadius;
	jint temp0 = (jint)((func_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_EnumSet_contains_java_lang_Enum_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_7;
	}
	{
	LINE_NUMBER(66);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((func_mindustry_world_Tile_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_world_Tile_team_R_mindustry_game_Team])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_game_FogControl_data_mindustry_game_Team_R_mindustry_game_FogControl$FogData) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_data_mindustry_game_Team_R_mindustry_game_FogControl$FogData])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(67);
	if ((frame[2].o) == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(68);
	((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[2].o)))->F_dynamicUpdated = (jint(1));
	}
label_10:;
	{
	LINE_NUMBER(71);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_7;
	}
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_staticEvents;
	frame[3].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp0 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	jint temp1 = (jint)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_build;
	jfloat temp2 = (jfloat)((func_mindustry_gen_Building_fogRadius_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_gen_Building_fogRadius_R_float])(ctx, sp[1].o);
	jint temp3 = (jint)SM_arc_math_Mathf_round_float_R_int(ctx, temp2);
	sp[1].o = (jobject)((mindustry_game_EventType$TileChangeEvent *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[1].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[1].o))->F_build;
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[1].o))->F_team;
	jlong temp4 = (jlong)SM_mindustry_gen_FogEvent_get_int_int_int_int_R_long(ctx, temp0, temp1, temp3, ((jint)((mindustry_game_Team *) NULL_CHECK(sp[1].o))->F_id));
	((func_mindustry_game_FogControl_pushEvent_long_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_FogControl_pushEvent_long_boolean])(ctx, sp[0].o, temp4, (jint(0)));
	LINE_NUMBER(75);
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	goto label_7;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	label_7:;
	LINE_NUMBER(78);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_lambda$new$1_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:lambda$new$1", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	((func_mindustry_game_FogControl_stop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_FogControl_stop])(ctx, (frame[0].o));
	LINE_NUMBER(49);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_loadedStatic = (jint(0));
	LINE_NUMBER(50);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_justLoaded = (jint(1));
	LINE_NUMBER(51);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = (jint)((func_mindustry_core_World_width_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_width_R_int])(ctx, sp[0].o);
	clinit_mindustry_game_FogControl(ctx);
	SF_mindustry_game_FogControl_ww = temp0;
	LINE_NUMBER(52);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp1 = (jint)((func_mindustry_core_World_height_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_height_R_int])(ctx, sp[0].o);
	clinit_mindustry_game_FogControl(ctx);
	SF_mindustry_game_FogControl_wh = temp1;
	LINE_NUMBER(55);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_fog) == 0) goto label_6;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_rules;
	if (((jint)((mindustry_game_Rules *) NULL_CHECK(sp[0].o))->F_staticFog) == 0) goto label_6;
	}
	{
	LINE_NUMBER(56);
	((func_mindustry_game_FogControl_pushStaticBlocks_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_FogControl_pushStaticBlocks_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(58);
	((func_mindustry_game_FogControl_updateStatic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_FogControl_updateStatic])(ctx, (frame[0].o));
	LINE_NUMBER(60);
	((mindustry_game_FogControl *) NULL_CHECK((frame[0].o)))->F_loadedStatic = (jint(1));
	}
label_6:;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_FogControl_lambda$new$0_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:lambda$new$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(43);
	((func_mindustry_game_FogControl_stop) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_FogControl_stop])(ctx, (frame[0].o));
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_game_FogControl(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_game_FogControl_dynamicUpdateInterval = jint(40);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_FogControl(ctx);
	{
	LINE_NUMBER(24);
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_mindustry_game_FogControl(ctx);
	SF_mindustry_game_FogControl_notifyStatic = sp[0].o;
	clinit_java_lang_Object(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_Object);
	init_java_lang_Object(ctx, sp[0].o);
	clinit_mindustry_game_FogControl(ctx);
	SF_mindustry_game_FogControl_notifyDynamic = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_FogControl;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field fog
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field staticFogThread
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field dynamicFogThread
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getDiscovered
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method data
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[5]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_game_FogControl[] {
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
	(void *) M_mindustry_game_FogControl_write_java_io_DataOutput,
	(void *) M_mindustry_game_FogControl_read_java_io_DataInput,
	(void *) M_mindustry_io_SaveFileReader$CustomChunk_read_java_io_DataInput_int,
	(void *) M_mindustry_game_FogControl_shouldWrite_R_boolean,
	(void *) M_mindustry_io_SaveFileReader$CustomChunk_writeNet_R_boolean,
	(void *) M_mindustry_game_FogControl_getDiscovered_mindustry_game_Team_R_arc_struct_Bits,
	(void *) M_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean,
	(void *) M_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean,
	(void *) M_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean,
	(void *) M_mindustry_game_FogControl_resetFog,
	(void *) M_mindustry_game_FogControl_data_mindustry_game_Team_R_mindustry_game_FogControl$FogData,
	(void *) M_mindustry_game_FogControl_stop,
	(void *) M_mindustry_game_FogControl_pushStaticBlocks_boolean,
	(void *) M_mindustry_game_FogControl_pushEvent_long_boolean,
	(void *) M_mindustry_game_FogControl_forceUpdate_mindustry_game_Team_mindustry_gen_Building,
	(void *) M_mindustry_game_FogControl_update,
	(void *) M_mindustry_game_FogControl_updateStatic,
	(void *) M_mindustry_game_FogControl_updateDynamic_arc_struct_Bits,
	(void *) M_mindustry_game_FogControl_lambda$new$4_mindustry_game_EventType$UnitDestroyEvent,
	(void *) M_mindustry_game_FogControl_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent,
	(void *) M_mindustry_game_FogControl_lambda$new$2_mindustry_game_EventType$TileChangeEvent,
	(void *) M_mindustry_game_FogControl_lambda$new$1_mindustry_game_EventType$WorldLoadEvent,
	(void *) M_mindustry_game_FogControl_lambda$new$0_mindustry_game_EventType$ResetEvent,
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
	{ "write", "(Ljava/io/DataOutput;)V" },
	{ "read", "(Ljava/io/DataInput;)V" },
	{ "read", "(Ljava/io/DataInput;I)V" },
	{ "shouldWrite", "()Z" },
	{ "writeNet", "()Z" },
	{ "getDiscovered", "(Lmindustry/game/Team;)Larc/struct/Bits;" },
	{ "isDiscovered", "(Lmindustry/game/Team;II)Z" },
	{ "isVisible", "(Lmindustry/game/Team;FF)Z" },
	{ "isVisibleTile", "(Lmindustry/game/Team;II)Z" },
	{ "resetFog", "()V" },
	{ "data", "(Lmindustry/game/Team;)Lmindustry/game/FogControl$FogData;" },
	{ "stop", "()V" },
	{ "pushStaticBlocks", "(Z)V" },
	{ "pushEvent", "(JZ)V" },
	{ "forceUpdate", "(Lmindustry/game/Team;Lmindustry/gen/Building;)V" },
	{ "update", "()V" },
	{ "updateStatic", "()V" },
	{ "updateDynamic", "(Larc/struct/Bits;)V" },
	{ "lambda$new$4", "(Lmindustry/game/EventType$UnitDestroyEvent;)V" },
	{ "lambda$new$3", "(Lmindustry/game/EventType$TilePreChangeEvent;)V" },
	{ "lambda$new$2", "(Lmindustry/game/EventType$TileChangeEvent;)V" },
	{ "lambda$new$1", "(Lmindustry/game/EventType$WorldLoadEvent;)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$ResetEvent;)V" },
};

static jclass interfaces[] { &class_mindustry_io_SaveFileReader$CustomChunk, };

static jclass innerClasses[] {
	&class_mindustry_game_FogControl$FogData,
	&class_mindustry_game_FogControl$StaticFogThread,
	&class_mindustry_game_FogControl$DynamicFogThread,
	&class_mindustry_game_FogControl$FogEventStruct,
};

static FieldMetadata fields[] {
	{ "ww", &class_int, (intptr_t) &SF_mindustry_game_FogControl_ww, "I", 74 },
	{ "wh", &class_int, (intptr_t) &SF_mindustry_game_FogControl_wh, "I", 74 },
	{ "dynamicUpdateInterval", &class_int, (intptr_t) &SF_mindustry_game_FogControl_dynamicUpdateInterval, "I", 26 },
	{ "notifyStatic", &class_java_lang_Object, (intptr_t) &SF_mindustry_game_FogControl_notifyStatic, "Ljava/lang/Object;", 26 },
	{ "notifyDynamic", &class_java_lang_Object, (intptr_t) &SF_mindustry_game_FogControl_notifyDynamic, "Ljava/lang/Object;", 26 },
	{ "fog", getArrayClass(&class_mindustry_game_FogControl$FogData, 1), offsetof(mindustry_game_FogControl, F_fog), "[Lmindustry/game/FogControl$FogData;", 66 },
	{ "staticEvents", &class_arc_struct_LongSeq, offsetof(mindustry_game_FogControl, F_staticEvents), "Larc/struct/LongSeq;", 18 },
	{ "dynamicEventQueue", &class_arc_struct_LongSeq, offsetof(mindustry_game_FogControl, F_dynamicEventQueue), "Larc/struct/LongSeq;", 18 },
	{ "unitEventQueue", &class_arc_struct_LongSeq, offsetof(mindustry_game_FogControl, F_unitEventQueue), "Larc/struct/LongSeq;", 18 },
	{ "dynamicEvents", &class_arc_struct_LongSeq, offsetof(mindustry_game_FogControl, F_dynamicEvents), "Larc/struct/LongSeq;", 18 },
	{ "staticFogThread", &class_java_lang_Thread, offsetof(mindustry_game_FogControl, F_staticFogThread), "Ljava/lang/Thread;", 2 },
	{ "dynamicFogThread", &class_java_lang_Thread, offsetof(mindustry_game_FogControl, F_dynamicFogThread), "Ljava/lang/Thread;", 2 },
	{ "justLoaded", &class_boolean, offsetof(mindustry_game_FogControl, F_justLoaded), "Z", 2 },
	{ "loadedStatic", &class_boolean, offsetof(mindustry_game_FogControl, F_loadedStatic), "Z", 2 },
	{ "lastEntityUpdateIndex", &class_int, offsetof(mindustry_game_FogControl, F_lastEntityUpdateIndex), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_FogControl, 0, "()V", 1 },
	{ "getDiscovered", (intptr_t) M_mindustry_game_FogControl_getDiscovered_mindustry_game_Team_R_arc_struct_Bits, VTABLE_mindustry_game_FogControl_getDiscovered_mindustry_game_Team_R_arc_struct_Bits, "(Lmindustry/game/Team;)Larc/struct/Bits;", 1 },
	{ "isDiscovered", (intptr_t) M_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean, VTABLE_mindustry_game_FogControl_isDiscovered_mindustry_game_Team_int_int_R_boolean, "(Lmindustry/game/Team;II)Z", 1 },
	{ "isVisible", (intptr_t) M_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean, VTABLE_mindustry_game_FogControl_isVisible_mindustry_game_Team_float_float_R_boolean, "(Lmindustry/game/Team;FF)Z", 1 },
	{ "isVisibleTile", (intptr_t) M_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean, VTABLE_mindustry_game_FogControl_isVisibleTile_mindustry_game_Team_int_int_R_boolean, "(Lmindustry/game/Team;II)Z", 1 },
	{ "resetFog", (intptr_t) M_mindustry_game_FogControl_resetFog, VTABLE_mindustry_game_FogControl_resetFog, "()V", 1 },
	{ "data", (intptr_t) M_mindustry_game_FogControl_data_mindustry_game_Team_R_mindustry_game_FogControl$FogData, VTABLE_mindustry_game_FogControl_data_mindustry_game_Team_R_mindustry_game_FogControl$FogData, "(Lmindustry/game/Team;)Lmindustry/game/FogControl$FogData;", 0 },
	{ "stop", (intptr_t) M_mindustry_game_FogControl_stop, VTABLE_mindustry_game_FogControl_stop, "()V", 0 },
	{ "pushStaticBlocks", (intptr_t) M_mindustry_game_FogControl_pushStaticBlocks_boolean, VTABLE_mindustry_game_FogControl_pushStaticBlocks_boolean, "(Z)V", 0 },
	{ "pushEvent", (intptr_t) M_mindustry_game_FogControl_pushEvent_long_boolean, VTABLE_mindustry_game_FogControl_pushEvent_long_boolean, "(JZ)V", 0 },
	{ "forceUpdate", (intptr_t) M_mindustry_game_FogControl_forceUpdate_mindustry_game_Team_mindustry_gen_Building, VTABLE_mindustry_game_FogControl_forceUpdate_mindustry_game_Team_mindustry_gen_Building, "(Lmindustry/game/Team;Lmindustry/gen/Building;)V", 1 },
	{ "update", (intptr_t) M_mindustry_game_FogControl_update, VTABLE_mindustry_game_FogControl_update, "()V", 1 },
	{ "updateStatic", (intptr_t) M_mindustry_game_FogControl_updateStatic, VTABLE_mindustry_game_FogControl_updateStatic, "()V", 0 },
	{ "updateDynamic", (intptr_t) M_mindustry_game_FogControl_updateDynamic_arc_struct_Bits, VTABLE_mindustry_game_FogControl_updateDynamic_arc_struct_Bits, "(Larc/struct/Bits;)V", 0 },
	{ "write", (intptr_t) M_mindustry_game_FogControl_write_java_io_DataOutput, VTABLE_mindustry_game_FogControl_write_java_io_DataOutput, "(Ljava/io/DataOutput;)V", 1 },
	{ "read", (intptr_t) M_mindustry_game_FogControl_read_java_io_DataInput, VTABLE_mindustry_game_FogControl_read_java_io_DataInput, "(Ljava/io/DataInput;)V", 1 },
	{ "shouldWrite", (intptr_t) M_mindustry_game_FogControl_shouldWrite_R_boolean, VTABLE_mindustry_game_FogControl_shouldWrite_R_boolean, "()Z", 1 },
	{ "circle", (intptr_t) SM_mindustry_game_FogControl_circle_arc_struct_Bits_int_int_int, 0, "(Larc/struct/Bits;III)V", 8 },
	{ "hline", (intptr_t) SM_mindustry_game_FogControl_hline_arc_struct_Bits_int_int_int, 0, "(Larc/struct/Bits;III)V", 8 },
	{ "lambda$new$4", (intptr_t) M_mindustry_game_FogControl_lambda$new$4_mindustry_game_EventType$UnitDestroyEvent, VTABLE_mindustry_game_FogControl_lambda$new$4_mindustry_game_EventType$UnitDestroyEvent, "(Lmindustry/game/EventType$UnitDestroyEvent;)V", 4098 },
	{ "lambda$new$3", (intptr_t) M_mindustry_game_FogControl_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent, VTABLE_mindustry_game_FogControl_lambda$new$3_mindustry_game_EventType$TilePreChangeEvent, "(Lmindustry/game/EventType$TilePreChangeEvent;)V", 4098 },
	{ "lambda$new$2", (intptr_t) M_mindustry_game_FogControl_lambda$new$2_mindustry_game_EventType$TileChangeEvent, VTABLE_mindustry_game_FogControl_lambda$new$2_mindustry_game_EventType$TileChangeEvent, "(Lmindustry/game/EventType$TileChangeEvent;)V", 4098 },
	{ "lambda$new$1", (intptr_t) M_mindustry_game_FogControl_lambda$new$1_mindustry_game_EventType$WorldLoadEvent, VTABLE_mindustry_game_FogControl_lambda$new$1_mindustry_game_EventType$WorldLoadEvent, "(Lmindustry/game/EventType$WorldLoadEvent;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_game_FogControl_lambda$new$0_mindustry_game_EventType$ResetEvent, VTABLE_mindustry_game_FogControl_lambda$new$0_mindustry_game_EventType$ResetEvent, "(Lmindustry/game/EventType$ResetEvent;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_game_FogControl, 0, "()V", 8 },
};

Class class_mindustry_game_FogControl{
		.nativeName = (intptr_t) "mindustry/game/FogControl",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_FogControl),
		.classVtable = (intptr_t) vtable_mindustry_game_FogControl,
		.staticInitializer = (intptr_t) clinit_mindustry_game_FogControl,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_FogControl,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 25,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_FogControl = registerClass(&class_mindustry_game_FogControl);

}
