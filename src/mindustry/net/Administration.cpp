#include "mindustry/net/Administration.h"
#include "mindustry/net/Administration_invoke_arc_func_Prov_15.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "arc/Events.h"
#include "mindustry/net/Administration_invoke_arc_func_Boolf_9.h"
#include "mindustry/net/Administration_invoke_arc_func_Prov_10.h"
#include "mindustry/net/Administration_invoke_arc_func_Boolf_7.h"
#include "mindustry/net/Administration_invoke_arc_func_Prov_11.h"
#include "mindustry/net/Administration_invoke_arc_func_Boolf_8.h"
#include "mindustry/net/Administration_invoke_arc_func_Prov_12.h"
#include "mindustry/net/Administration_invoke_arc_func_Prov_9.h"
#include "mindustry/net/Administration_invoke_arc_func_Boolf_10.h"
#include "mindustry/net/Administration_invoke_arc_func_Prov_13.h"
#include "mindustry/net/Administration_invoke_arc_func_Boolf_6.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/net/Administration_invoke_arc_func_Prov_8.h"
#include "mindustry/net/Administration_invoke_arc_func_Boolf_11.h"
#include "mindustry/net/Administration_invoke_arc_func_Prov_14.h"
#include "mindustry/net/Administration_IdEncounterInfo.h"
#include "mindustry/net/Administration_invoke_mindustry_net_Administration_ActionFilter_1.h"
#include "java/util/regex/Pattern.h"
#include "mindustry/net/Administration_invoke_arc_func_Cons_1.h"
#include "arc/util/pooling/Pools.h"
#include "mindustry/gen/Entityc.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "arc/Settings.h"
#include "mindustry/net/Administration_invoke_arc_func_Func_1.h"
#include "arc/func/Boolf.h"
#include "mindustry/net/SteamAdmin.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "arc/Core.h"
#include "arc/func/Func.h"
#include "java/util/Iterator.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "arc/util/Interval.h"
#include "arc/struct/ObjectMap_Values.h"
#include "java/lang/Object.h"
#include "mindustry/net/Administration_invoke_mindustry_net_Administration_ChatFilter_1.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/net/Administration_PlayerAction.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/net/Administration_PlayerInfo.h"
#include "mindustry/gen/Groups.h"
#include "java/util/regex/Matcher.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/game/EventType_PlayerIpUnbanEvent.h"
#include "mindustry/net/Administration_ActionType.h"
#include "mindustry/net/Administration.h"
#include "mindustry/net/Administration_ChatFilter.h"
#include "mindustry/net/NetConnection.h"
#include "mindustry/net/Administration_ActionFilter.h"
#include "java/lang/Math.h"
#include "mindustry/game/EventType_PlayerIpBanEvent.h"
#include "mindustry/game/EventType_PlayerUnbanEvent.h"
#include "mindustry/net/Administration_TraceInfo.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/Long.h"
#include "java/lang/CharSequence.h"
#include "mindustry/net/Administration_Config.h"
#include "mindustry/entities/EntityGroup.h"
#include "arc/util/Strings.h"
#include "mindustry/game/EventType_PlayerBanEvent.h"
#include "mindustry/gen/Player.h"
#include "arc/util/Ratekeeper.h"
#include "java/util/Objects.h"
#include "java/lang/Class.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_net_Administration(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_Administration *) object;
	if (self->F_playerInfo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_playerInfo)->clazz)->markFunction)((jobject) self->F_playerInfo, mark, depth + 1);
	if (self->F_bannedIPs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bannedIPs)->clazz)->markFunction)((jobject) self->F_bannedIPs, mark, depth + 1);
	if (self->F_whitelist)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_whitelist)->clazz)->markFunction)((jobject) self->F_whitelist, mark, depth + 1);
	if (self->F_chatFilters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_chatFilters)->clazz)->markFunction)((jobject) self->F_chatFilters, mark, depth + 1);
	if (self->F_actionFilters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actionFilters)->clazz)->markFunction)((jobject) self->F_actionFilters, mark, depth + 1);
	if (self->F_subnetBans)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_subnetBans)->clazz)->markFunction)((jobject) self->F_subnetBans, mark, depth + 1);
	if (self->F_dosBlacklist)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dosBlacklist)->clazz)->markFunction)((jobject) self->F_dosBlacklist, mark, depth + 1);
	if (self->F_kickedIPs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_kickedIPs)->clazz)->markFunction)((jobject) self->F_kickedIPs, mark, depth + 1);
	if (self->F_bannedNames)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bannedNames)->clazz)->markFunction)((jobject) self->F_bannedNames, mark, depth + 1);
	if (self->F_encounteredIDsForIp)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_encounteredIDsForIp)->clazz)->markFunction)((jobject) self->F_encounteredIDsForIp, mark, depth + 1);
}

void clinit_mindustry_net_Administration(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_Administration(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_playerInfo = (jref) sp[1].o;
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_bannedIPs = (jref) sp[1].o;
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_whitelist = (jref) sp[1].o;
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_chatFilters = (jref) sp[1].o;
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_actionFilters = (jref) sp[1].o;
	LINE_NUMBER(30);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_subnetBans = (jref) sp[1].o;
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_dosBlacklist = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_kickedIPs = (jref) sp[1].o;
	LINE_NUMBER(33);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_bannedNames = (jref) sp[1].o;
	LINE_NUMBER(36);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_encounteredIDsForIp = (jref) sp[1].o;
	LINE_NUMBER(39);
	((func_mindustry_net_Administration_load) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_load])(ctx, (frame[0].o));
	LINE_NUMBER(42);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_mindustry_net_Administration$ChatFilter_1(ctx);
		auto proxy = (mindustry_net_Administration_invoke_mindustry_net_Administration$ChatFilter_1 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_mindustry_net_Administration$ChatFilter_1);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_net_Administration_addChatFilter_mindustry_net_Administration$ChatFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_addChatFilter_mindustry_net_Administration$ChatFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_mindustry_net_Administration$ActionFilter_1(ctx);
		auto proxy = (mindustry_net_Administration_invoke_mindustry_net_Administration$ActionFilter_1 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_mindustry_net_Administration$ActionFilter_1);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_net_Administration_addActionFilter_mindustry_net_Administration$ActionFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_addActionFilter_mindustry_net_Administration$ActionFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(94);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Administration_blacklistDos_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:blacklistDos", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_dosBlacklist;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(98);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Administration_unBlacklistDos_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:unBlacklistDos", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_dosBlacklist;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(102);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_isDosBlacklisted_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:isDosBlacklisted", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_dosBlacklist;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx, self);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_mindustry_net_Administration_getKickTime_java_lang_String_java_lang_String_R_long(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:getKickTime", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((func_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	jlong temp0 = (jlong)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_lastKicked;
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_kickedIPs;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (jlong(0)));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	jlong temp1 = (jlong)((func_java_lang_Long_longValue_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Long, sp[0].o)))->vtable)[VTABLE_java_lang_Long_longValue_R_long])(ctx, (checkCast(ctx, &class_java_lang_Long, sp[0].o)));
	jlong temp2 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Administration_handleKicked_java_lang_String_java_lang_String_long(jcontext ctx, jobject self, jobject param0, jobject param1, jlong param2) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:handleKicked", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].l = param2;
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_kickedIPs;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_kickedIPs;
	sp[3].o = frame[2].o;
	sp[4].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, (jlong(0)));
	sp[2].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, sp[3].o, sp[4].o);
	jlong temp0 = (jlong)((func_java_lang_Long_longValue_R_long) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Long, sp[2].o)))->vtable)[VTABLE_java_lang_Long_longValue_R_long])(ctx, (checkCast(ctx, &class_java_lang_Long, sp[2].o)));
	jlong temp1 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	jlong temp2 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, temp0, (temp1 + (frame[3].l)));
	sp[2].o = (jobject)SM_java_lang_Long_valueOf_long_R_java_lang_Long(ctx, temp2);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = frame[5].o;
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_timesKicked = (((jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_timesKicked) + (jint(1)));
	LINE_NUMBER(119);
	sp[0].o = frame[5].o;
	jlong temp3 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	jlong temp4 = (jlong)SM_java_lang_Math_max_long_long_R_long(ctx, (temp3 + (frame[3].l)), ((jlong)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[5].o)))->F_lastKicked));
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_lastKicked = temp4;
	LINE_NUMBER(120);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration_getSubnetBans_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:getSubnetBans", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_subnetBans;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Administration_removeSubnetBan_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:removeSubnetBan", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_subnetBans;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(128);
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, (frame[0].o));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Administration_addSubnetBan_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:addSubnetBan", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_subnetBans;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(133);
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, (frame[0].o));
	LINE_NUMBER(134);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_isSubnetBanned_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:isSubnetBanned", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_subnetBans;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Boolf_6);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Administration_addNameBan_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:addNameBan", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_bannedNames;
	sp[1].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_int_R_java_util_regex_Pattern(ctx, (frame[1].o), (jint(2)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(142);
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, (frame[0].o));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Administration_addChatFilter_mindustry_net_Administration$ChatFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:addChatFilter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_chatFilters;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration_filterMessage_mindustry_gen_Player_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:filterMessage", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(154);
	frame[3].o = (frame[2].o);
	LINE_NUMBER(155);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_chatFilters;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_net_Administration$ChatFilter, sp[0].o));
	LINE_NUMBER(156);
	sp[0].o = (jobject)((func_mindustry_net_Administration$ChatFilter_filter_mindustry_gen_Player_java_lang_String_R_java_lang_String) resolveInterfaceMethod(ctx, &class_mindustry_net_Administration$ChatFilter, INDEX_mindustry_net_Administration$ChatFilter_filter_mindustry_gen_Player_java_lang_String_R_java_lang_String, (frame[5].o)))(ctx, (frame[5].o), (frame[1].o), (frame[3].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(157);
	if ((frame[3].o) != nullptr) goto label_6;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	LINE_NUMBER(158);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Administration_addActionFilter_mindustry_net_Administration$ActionFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:addActionFilter", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_actionFilters;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(165);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:allowAction", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Cons_1);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[3].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:allowAction", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(175);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(177);
	sp[0].o = ((jobject) &class_mindustry_net_Administration$PlayerAction);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Prov_8(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Prov_8);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[0].o, sp[1].o);
	frame[4].o = (checkCast(ctx, &class_mindustry_net_Administration$PlayerAction, sp[0].o));
	LINE_NUMBER(178);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[4].o)))->F_player = (jref) (frame[1].o);
	LINE_NUMBER(179);
	((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[4].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(180);
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o), (frame[4].o));
	LINE_NUMBER(181);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_actionFilters;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_6:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_net_Administration$ActionFilter, sp[0].o));
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_mindustry_net_Administration$ActionFilter_allow_mindustry_net_Administration$PlayerAction_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_net_Administration$ActionFilter, INDEX_mindustry_net_Administration$ActionFilter_allow_mindustry_net_Administration$PlayerAction_R_boolean, (frame[6].o)))(ctx, (frame[6].o), (frame[4].o));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(183);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[4].o));
	LINE_NUMBER(184);
	popStackFrame(ctx);
	return (jint(0));
	}
label_9:;
	LINE_NUMBER(186);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(187);
	SM_arc_util_pooling_Pools_free_java_lang_Object(ctx, (frame[4].o));
	LINE_NUMBER(188);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jint M_mindustry_net_Administration_getPlayerLimit_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:getPlayerLimit", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(192);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"playerlimit"_j));
	sp += 2;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	INST_BIPUSH(30);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	POP_N(3); // Pop method args
	sp->i = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, sp[1].o, sp[2].i);
	sp++;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Administration_setPlayerLimit_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:setPlayerLimit", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(196);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"playerlimit"_j));
	sp[2].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(197);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_isStrict_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:isStrict", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(200);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_strict;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_bool_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_allowsCustomClients_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:allowsCustomClients", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_allowCustomClients;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_bool_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Administration_updatePlayerJoined_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:updatePlayerJoined", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(209);
	sp[0].o = (jobject)((func_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(210);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_lastName = (jref) (frame[3].o);
	LINE_NUMBER(211);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_lastIP = (jref) (frame[2].o);
	LINE_NUMBER(212);
	sp[0].o = frame[4].o;
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_timesJoined = (((jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_timesJoined) + (jint(1)));
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_names;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[3].o), (jint(0)));
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_names;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[3].o));
	}
label_5:;
	{
	LINE_NUMBER(214);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_ips;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[2].o), (jint(0)));
	if (temp0 != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_ips;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	}
label_6:;
	LINE_NUMBER(215);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_banPlayer_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:banPlayer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(218);
	jint temp0 = (jint)((func_mindustry_net_Administration_banPlayerID_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_banPlayerID_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	sp[1].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[1].o))->F_lastIP;
	jint temp0 = (jint)((func_mindustry_net_Administration_banPlayerIP_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_banPlayerIP_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool M_mindustry_net_Administration_banPlayerIP_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:banPlayerIP", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_bannedIPs;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_3:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_net_Administration$PlayerInfo, sp[0].o));
	LINE_NUMBER(230);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[3].o)))->F_ips;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	if (temp0 == 0) goto label_6;
	}
	{
	LINE_NUMBER(231);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[3].o)))->F_banned = (jint(1));
	}
label_6:;
	LINE_NUMBER(233);
	goto label_3;
label_4:;
	{
	LINE_NUMBER(235);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_bannedIPs;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(236);
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, (frame[0].o));
	LINE_NUMBER(237);
	clinit_mindustry_game_EventType$PlayerIpBanEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PlayerIpBanEvent);
	init_mindustry_game_EventType$PlayerIpBanEvent_java_lang_String(ctx, sp[0].o, (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_banPlayerID_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:banPlayerID", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	if (((jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((checkCast(ctx, &class_mindustry_net_Administration$PlayerInfo, sp[0].o))))->F_banned) == 0) goto label_1;
	}
	{
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_banned = (jint(1));
	LINE_NUMBER(248);
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, (frame[0].o));
	LINE_NUMBER(249);
	clinit_mindustry_game_EventType$PlayerBanEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PlayerBanEvent);
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Boolf_7);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc])(ctx, sp[1].o, sp[2].o);
	init_mindustry_game_EventType$PlayerBanEvent_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Player, sp[1].o)), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(250);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_unbanPlayerIP_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:unbanPlayerIP", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(258);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_bannedIPs;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	frame[2].i = temp0;
	LINE_NUMBER(260);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_net_Administration$PlayerInfo, sp[0].o));
	LINE_NUMBER(261);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_ips;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(262);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_banned = (jint(0));
	LINE_NUMBER(263);
	frame[2].i = (jint(1));
	}
label_5:;
	LINE_NUMBER(265);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(267);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_bannedIPs;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	LINE_NUMBER(269);
	if ((frame[2].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(270);
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, (frame[0].o));
	LINE_NUMBER(271);
	clinit_mindustry_game_EventType$PlayerIpUnbanEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PlayerIpUnbanEvent);
	init_mindustry_game_EventType$PlayerIpUnbanEvent_java_lang_String(ctx, sp[0].o, (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	}
label_9:;
	{
	LINE_NUMBER(273);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_unbanPlayerID_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:unbanPlayerID", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(281);
	sp[0].o = (jobject)((func_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(283);
	if (((jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[2].o)))->F_banned) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(285);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[2].o)))->F_banned = (jint(0));
	LINE_NUMBER(286);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_bannedIPs;
	sp[1].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[2].o)))->F_ips;
	jint temp0 = (jint)((func_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_struct_Seq_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	LINE_NUMBER(287);
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, (frame[0].o));
	LINE_NUMBER(288);
	clinit_mindustry_game_EventType$PlayerUnbanEvent(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_EventType$PlayerUnbanEvent);
	clinit_mindustry_gen_Groups(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Groups_player;
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Boolf_8);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc])(ctx, sp[1].o, sp[2].o);
	init_mindustry_game_EventType$PlayerUnbanEvent_mindustry_gen_Player_java_lang_String(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_Player, sp[1].o)), (frame[1].o));
	SM_arc_Events_fire_java_lang_Object(ctx, sp[0].o);
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_checkUuidChanges_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:checkUuidChanges", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(293);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_uuidChangeLimit;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[0].o);
	if (temp0 > (jint(1))) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_encounteredIDsForIp;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Prov_9(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Prov_9);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = (checkCast(ctx, &class_mindustry_net_Administration$IdEncounterInfo, sp[0].o));
	LINE_NUMBER(297);
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_net_Administration$IdEncounterInfo *) NULL_CHECK((frame[3].o)))->F_initialTime));
	jlong temp1 = jlong(3600000ll);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_uuidChangeTimePeriod;
	jint temp2 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[0].o);
	if ((longCompare(temp0, (temp1 * (jlong(temp2))))) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_net_Administration$IdEncounterInfo *) NULL_CHECK((frame[3].o)))->F_ids;
	((func_arc_struct_ObjectSet_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_clear])(ctx, sp[0].o);
	LINE_NUMBER(299);
	sp[0].o = frame[3].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_net_Administration$IdEncounterInfo *) NULL_CHECK(sp[0].o))->F_initialTime = temp0;
	}
label_3:;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_net_Administration$IdEncounterInfo *) NULL_CHECK((frame[3].o)))->F_ids;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(303);
	sp[0].o = (jobject)((mindustry_net_Administration$IdEncounterInfo *) NULL_CHECK((frame[3].o)))->F_ids;
	jint temp1 = (jint)((arc_struct_ObjectSet *) NULL_CHECK(sp[0].o))->F_size;
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_uuidChangeLimit;
	jint temp2 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[0].o);
	if (temp1 <= temp2) goto label_7;
	}
	{
	LINE_NUMBER(304);
	jint temp0 = (jint)((func_mindustry_net_Administration_banPlayerIP_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_banPlayerIP_java_lang_String_R_boolean])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(305);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(307);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration_getAdmins_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:getAdmins", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(314);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(315);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_net_Administration$PlayerInfo, sp[0].o));
	LINE_NUMBER(316);
	if (((jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[3].o)))->F_admin) == 0) goto label_5;
	}
	{
	LINE_NUMBER(317);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[3].o));
	}
label_5:;
	LINE_NUMBER(319);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(320);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration_getBanned_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:getBanned", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(327);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(328);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_net_Administration$PlayerInfo, sp[0].o));
	LINE_NUMBER(329);
	if (((jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[3].o)))->F_banned) == 0) goto label_5;
	}
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[1].o), (frame[3].o));
	}
label_5:;
	LINE_NUMBER(332);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration_getBannedIPs_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:getBannedIPs", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_bannedIPs;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_adminPlayer_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:adminPlayer", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(348);
	sp[0].o = (jobject)((func_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(350);
	frame[4].i = ((jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[3].o)))->F_admin);
	LINE_NUMBER(352);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[3].o)))->F_adminUsid = (jref) (frame[2].o);
	LINE_NUMBER(353);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[3].o)))->F_admin = (jint(1));
	LINE_NUMBER(354);
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, (frame[0].o));
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_unAdminPlayer_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:unAdminPlayer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((func_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(366);
	if (((jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[2].o)))->F_admin) != 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(368);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[2].o)))->F_admin = (jint(0));
	LINE_NUMBER(369);
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, (frame[0].o));
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_isWhitelistEnabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:isWhitelistEnabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(375);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_whitelist;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_bool_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_isWhitelisted_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:isWhitelisted", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(379);
	jint temp0 = (jint)((func_mindustry_net_Administration_isWhitelistEnabled_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_isWhitelistEnabled_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_whitelist;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, (frame[2].o), (frame[1].o));
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool M_mindustry_net_Administration_whitelist_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:whitelist", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(384);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_whitelist;
	sp[1].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[2].o)))->F_adminUsid;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, (frame[1].o));
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_whitelist;
	sp[1].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[2].o)))->F_adminUsid;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, (frame[1].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(386);
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, (frame[0].o));
	LINE_NUMBER(387);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_unwhitelist_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:unwhitelist", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((func_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(392);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_whitelist;
	sp[1].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[2].o)))->F_adminUsid;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, (frame[1].o));
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(393);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_whitelist;
	sp[1].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[2].o)))->F_adminUsid;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[1].o, (frame[1].o));
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(394);
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, (frame[0].o));
	LINE_NUMBER(395);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(397);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_isIPBanned_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:isIPBanned", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_bannedIPs;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_mindustry_net_Administration_findByIP_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_findByIP_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_mindustry_net_Administration_findByIP_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_findByIP_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	if (((jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_banned) != 0) goto label_1;
	}
label_2:;
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_steam;
	if ((--sp)->i == 0) goto label_3;
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"steam"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	jint temp0 = (jint)SM_mindustry_net_SteamAdmin_isBanned_java_lang_String_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
label_1:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_isIDBanned_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:isIDBanned", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(405);
	sp[0].o = (jobject)((func_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return ((jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_banned);
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_isNameBanned_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:isNameBanned", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_bannedNames;
	if (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_bannedNames;
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Boolf_9);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jbool M_mindustry_net_Administration_isAdmin_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:isAdmin", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(413);
	sp[0].o = (jobject)((func_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(414);
	if (((jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[3].o)))->F_admin) == 0) goto label_2;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[3].o)))->F_adminUsid;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
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

jobject M_mindustry_net_Administration_findByName_java_lang_String_R_arc_struct_ObjectSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:findByName", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(419);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(421);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_net_Administration$PlayerInfo, sp[0].o));
	LINE_NUMBER(422);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_lastName;
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_names;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_lastName;
	LINE_NUMBER(423);
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_ips;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	LINE_NUMBER(424);
	jint temp1 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	if (temp1 != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_id;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(425);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[4].o));
	}
label_8:;
	LINE_NUMBER(427);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(429);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration_searchNames_java_lang_String_R_arc_struct_ObjectSet(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:searchNames", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(434);
	clinit_arc_struct_ObjectSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(436);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_net_Administration$PlayerInfo, sp[0].o));
	LINE_NUMBER(437);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_names;
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Boolf_10(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Boolf_10 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Boolf_10);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(438);
	jint temp0 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[4].o));
	}
label_5:;
	LINE_NUMBER(440);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(442);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration_findByIPs_java_lang_String_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:findByIPs", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(446);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(448);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_mindustry_net_Administration$PlayerInfo, sp[0].o));
	LINE_NUMBER(449);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[4].o)))->F_ips;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (frame[2].o), (frame[4].o));
	}
label_5:;
	LINE_NUMBER(452);
	goto label_2;
label_3:;
	{
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:getInfo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((func_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration_getInfoOptional_java_lang_String_R_mindustry_net_Administration$PlayerInfo(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:getInfoOptional", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_net_Administration$PlayerInfo, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration_findByIP_java_lang_String_R_mindustry_net_Administration$PlayerInfo(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:findByIP", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(466);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_iterator_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_1:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_mindustry_net_Administration$PlayerInfo, sp[0].o));
	LINE_NUMBER(467);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[3].o)))->F_ips;
	jint temp0 = (jint)((func_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(0)));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_4:;
	LINE_NUMBER(470);
	goto label_1;
label_2:;
	{
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration_getWhitelisted_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:getWhitelisted", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(475);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_values_R_arc_struct_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Values_toSeq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Values_toSeq_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Boolf_11(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Boolf_11 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Boolf_11);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_select_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:getCreateInfo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(479);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_net_Administration$PlayerInfo, sp[0].o));
	}
label_1:;
	{
	LINE_NUMBER(482);
	clinit_mindustry_net_Administration$PlayerInfo(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$PlayerInfo);
	init_mindustry_net_Administration$PlayerInfo_java_lang_String(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(483);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	LINE_NUMBER(484);
	((func_mindustry_net_Administration_save) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration_save])(ctx, (frame[0].o));
	LINE_NUMBER(485);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Administration_save(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:save", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(490);
	((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_modified = (jint(1));
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Administration_forceSave(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:forceSave", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(494);
	if (((jint)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_modified) == 0) goto label_1;
	}
	{
	if (((jint)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_loaded) == 0) goto label_1;
	}
	{
	LINE_NUMBER(495);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"player-data"_j));
	sp[2].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_playerInfo;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(496);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ip-kicks"_j));
	sp[2].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_kickedIPs;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(497);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ip-bans"_j));
	sp[2].o = ((jobject) &class_java_lang_String);
	sp[3].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_bannedIPs;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(498);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"whitelist-ids"_j));
	sp[2].o = ((jobject) &class_java_lang_String);
	sp[3].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_whitelist;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(499);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"banned-subnets"_j));
	sp[2].o = ((jobject) &class_java_lang_String);
	sp[3].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_subnetBans;
	((func_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(500);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"banned-names"_j));
	sp[2].o = ((jobject) &class_java_lang_String);
	sp[3].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_bannedNames;
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Func_1(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Func_1 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Func_1);
		sp[4].o = (jobject) proxy;
	}
	sp[3].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[3].o, sp[4].o);
	((func_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_putJson_java_lang_String_java_lang_Class_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(501);
	((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_modified = (jint(0));
	}
label_1:;
	LINE_NUMBER(503);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_net_Administration_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:load", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(507);
	((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_loaded = (jint(1));
	LINE_NUMBER(509);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"player-data"_j));
	sp[3].o = ((jobject) &class_arc_struct_ObjectMap);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Prov_10(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Prov_10 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Prov_10);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_playerInfo = (jref) (checkCast(ctx, &class_arc_struct_ObjectMap, sp[1].o));
	LINE_NUMBER(510);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ip-kicks"_j));
	sp[3].o = ((jobject) &class_arc_struct_ObjectMap);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Prov_11(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Prov_11 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Prov_11);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_kickedIPs = (jref) (checkCast(ctx, &class_arc_struct_ObjectMap, sp[1].o));
	LINE_NUMBER(511);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"ip-bans"_j));
	sp[3].o = ((jobject) &class_arc_struct_Seq);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Prov_12(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Prov_12 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Prov_12);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_bannedIPs = (jref) (checkCast(ctx, &class_arc_struct_Seq, sp[1].o));
	LINE_NUMBER(512);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"whitelist-ids"_j));
	sp[3].o = ((jobject) &class_arc_struct_Seq);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Prov_13(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Prov_13 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Prov_13);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_whitelist = (jref) (checkCast(ctx, &class_arc_struct_Seq, sp[1].o));
	LINE_NUMBER(513);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_settings;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"banned-subnets"_j));
	sp[3].o = ((jobject) &class_arc_struct_Seq);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Prov_14(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Prov_14 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Prov_14);
		sp[4].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	((mindustry_net_Administration *) NULL_CHECK(sp[0].o))->F_subnetBans = (jref) (checkCast(ctx, &class_arc_struct_Seq, sp[1].o));
	LINE_NUMBER(515);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"banned-names"_j));
	sp[2].o = ((jobject) &class_arc_struct_Seq);
	sp[3].o = ((jobject) &class_java_lang_String);
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration_invoke_arc_func_Prov_15(ctx);
		auto proxy = (mindustry_net_Administration_invoke_arc_func_Prov_15 *) gcAlloc(ctx, &class_mindustry_net_Administration_invoke_arc_func_Prov_15);
		sp[4].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getJson_java_lang_String_java_lang_Class_java_lang_Class_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	frame[1].o = (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	LINE_NUMBER(516);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	}
label_12:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[2].o)))(ctx, (frame[2].o));
	if (temp0 == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[2].o)))(ctx, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((mindustry_net_Administration *) NULL_CHECK((frame[0].o)))->F_bannedNames;
	sp[1].o = (jobject)SM_java_util_regex_Pattern_compile_java_lang_String_int_R_java_util_regex_Pattern(ctx, (frame[3].o), (jint(2)));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(520);
	goto label_14;
label_2:;
	LINE_NUMBER(519);
	INST_ASTORE(4);
label_14:;
	LINE_NUMBER(521);
	goto label_12;
label_13:;
	LINE_NUMBER(522);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration_lambda$getWhitelisted$0_mindustry_net_Administration$PlayerInfo_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:lambda$getWhitelisted$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(475);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[1].o)))->F_id;
	sp[2].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[1].o)))->F_adminUsid;
	jint temp0 = (jint)((func_mindustry_net_Administration_isWhitelisted_java_lang_String_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration_isWhitelisted_java_lang_String_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_net_Administration_lambda$searchNames$0_java_lang_String_java_lang_String_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:lambda$searchNames$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(437);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_contains_java_lang_CharSequence_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_contains_java_lang_CharSequence_R_boolean])(ctx, sp[0].o, (frame[0].o));
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

jbool SM_mindustry_net_Administration_lambda$isNameBanned$0_java_lang_String_java_util_regex_Pattern_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:lambda$isNameBanned$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(409);
	sp[0].o = (jobject)((func_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_regex_Pattern_matcher_java_lang_CharSequence_R_java_util_regex_Matcher])(ctx, (frame[1].o), (frame[0].o));
	jint temp0 = (jint)((func_java_util_regex_Matcher_find_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_regex_Matcher_find_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_net_Administration_lambda$unbanPlayerID$0_java_lang_String_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:lambda$unbanPlayerID$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(288);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_net_Administration_lambda$banPlayerID$0_java_lang_String_mindustry_gen_Player_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:lambda$banPlayerID$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(249);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_uuid_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Player_uuid_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_Administration_lambda$allowAction$0_arc_func_Cons_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_mindustry_net_Administration$PlayerAction(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:lambda$allowAction$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(169);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_R_mindustry_net_Administration$PlayerAction) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_mindustry_net_Administration$PlayerAction_set_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_R_mindustry_net_Administration$PlayerAction])(ctx, (frame[4].o), (frame[1].o), (frame[2].o), (frame[3].o));
	((func_arc_func_Cons_get_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Cons, INDEX_arc_func_Cons_get_java_lang_Object, sp[0].o))(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_net_Administration_lambda$new$1_mindustry_net_Administration$PlayerAction_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:lambda$new$1", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_breakBlock;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_placeBlock;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_mindustry_net_Administration$ActionType(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$ActionType_commandUnits;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_antiSpam;
	LINE_NUMBER(77);
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_bool_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_player;
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_rate;
	frame[1].o = sp[0].o;
	LINE_NUMBER(80);
	sp[0].o = frame[1].o;
	clinit_mindustry_net_Administration$Config(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$Config_interactRateWindow;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[1].o);
	jlong temp1 = (jlong(temp0)) * (jlong(1000ll));
	clinit_mindustry_net_Administration$Config(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$Config_interactRateLimit;
	jint temp2 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[1].o);
	jint temp3 = (jint)((func_arc_util_Ratekeeper_allow_long_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Ratekeeper_allow_long_int_R_boolean])(ctx, sp[0].o, temp1, temp2);
	if (temp3 == 0) goto label_5;
	}
	{
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(83);
	jint temp0 = (jint)((arc_util_Ratekeeper *) NULL_CHECK((frame[1].o)))->F_occurences;
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_interactRateKick;
	jint temp1 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[0].o);
	if (temp0 <= temp1) goto label_7;
	}
	{
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_player;
	((func_mindustry_gen_Player_kick_java_lang_String_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_kick_java_lang_String_long])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"You are interacting with too many blocks."_j))), (jlong(30000ll)));
	goto label_9;
	}
label_7:;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_player;
	sp[0].o = (jobject)((func_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo])(ctx, sp[0].o);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_messageTimer;
	jint temp0 = (jint)((func_arc_util_Interval_get_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Interval_get_float_R_boolean])(ctx, sp[0].o, (jfloat(120.0f)));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(86);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerAction *) NULL_CHECK((frame[0].o)))->F_player;
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[scarlet]You are interacting with blocks too quickly."_j))));
	}
label_9:;
	{
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(92);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_Administration_lambda$new$0_mindustry_gen_Player_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration:lambda$new$0", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(43);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_messageRateLimit;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[0].o);
	frame[2].l = ((jlong(temp0)) * (jlong(1000ll)));
	LINE_NUMBER(44);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_antiSpam;
	jint temp1 = (jint)((func_mindustry_net_Administration$Config_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_bool_R_boolean])(ctx, sp[0].o);
	if (temp1 == 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Player_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	if (((jint)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_admin) != 0) goto label_2;
	}
	{
	LINE_NUMBER(46);
	if ((longCompare((frame[2].l), (jlong(0)))) <= 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o));
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_lastMessageTime));
	if ((longCompare(temp0, (frame[2].l))) >= 0) goto label_4;
	}
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_mindustry_net_Administration$Config(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Administration$Config_messageRateLimit;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"[scarlet]You may only send messages every \u0001 seconds."_j.string, 1, boxInteger(ctx, temp0));
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(49);
	sp[0].o = (jobject)((func_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o));
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_messageInfractions = (((jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_messageInfractions) + (jint(1)));
	LINE_NUMBER(51);
	sp[0].o = (jobject)((func_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o));
	jint temp1 = (jint)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_messageInfractions;
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_messageSpamKick;
	jint temp2 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[0].o);
	if (temp1 < temp2) goto label_8;
	}
	{
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_messageSpamKick;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_num_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_num_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_gen_Player *) NULL_CHECK((frame[0].o)))->F_con;
	((func_mindustry_net_NetConnection_kick_java_lang_String_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_NetConnection_kick_java_lang_String_long])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"You have been kicked for spamming."_j))), (jlong(120000ll)));
	}
label_8:;
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((func_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o));
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_messageInfractions = (jint(0));
	LINE_NUMBER(60);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[1].o))->F_lastSentMessage;
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_11;
	}
	{
	sp[0].o = (jobject)((func_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o));
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_lastMessageTime));
	if ((longCompare(temp0, (jlong(10000ll)))) >= 0) goto label_11;
	}
	{
	LINE_NUMBER(61);
	((func_mindustry_gen_Player_sendMessage_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_sendMessage_java_lang_String])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"[scarlet]You may not send the same message twice."_j))));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_11:;
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o));
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_lastSentMessage = (jref) (frame[1].o);
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Player_getInfo_R_mindustry_net_Administration$PlayerInfo])(ctx, (frame[0].o));
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_lastMessageTime = temp0;
	}
label_2:;
	{
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_net_Administration;
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

	{ // Method filterMessage
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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
}

void *vtable_mindustry_net_Administration[] {
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
	(void *) M_mindustry_net_Administration_blacklistDos_java_lang_String,
	(void *) M_mindustry_net_Administration_unBlacklistDos_java_lang_String,
	(void *) M_mindustry_net_Administration_isDosBlacklisted_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_getKickTime_java_lang_String_java_lang_String_R_long,
	(void *) M_mindustry_net_Administration_handleKicked_java_lang_String_java_lang_String_long,
	(void *) M_mindustry_net_Administration_getSubnetBans_R_arc_struct_Seq,
	(void *) M_mindustry_net_Administration_removeSubnetBan_java_lang_String,
	(void *) M_mindustry_net_Administration_addSubnetBan_java_lang_String,
	(void *) M_mindustry_net_Administration_isSubnetBanned_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_addNameBan_java_lang_String,
	(void *) M_mindustry_net_Administration_addChatFilter_mindustry_net_Administration$ChatFilter,
	(void *) M_mindustry_net_Administration_filterMessage_mindustry_gen_Player_java_lang_String_R_java_lang_String,
	(void *) M_mindustry_net_Administration_addActionFilter_mindustry_net_Administration$ActionFilter,
	(void *) M_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean,
	(void *) M_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean,
	(void *) M_mindustry_net_Administration_getPlayerLimit_R_int,
	(void *) M_mindustry_net_Administration_setPlayerLimit_int,
	(void *) M_mindustry_net_Administration_isStrict_R_boolean,
	(void *) M_mindustry_net_Administration_allowsCustomClients_R_boolean,
	(void *) M_mindustry_net_Administration_updatePlayerJoined_java_lang_String_java_lang_String_java_lang_String,
	(void *) M_mindustry_net_Administration_banPlayer_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_banPlayerIP_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_banPlayerID_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_unbanPlayerIP_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_unbanPlayerID_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_checkUuidChanges_java_lang_String_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_getAdmins_R_arc_struct_Seq,
	(void *) M_mindustry_net_Administration_getBanned_R_arc_struct_Seq,
	(void *) M_mindustry_net_Administration_getBannedIPs_R_arc_struct_Seq,
	(void *) M_mindustry_net_Administration_adminPlayer_java_lang_String_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_unAdminPlayer_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_isWhitelistEnabled_R_boolean,
	(void *) M_mindustry_net_Administration_isWhitelisted_java_lang_String_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_whitelist_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_unwhitelist_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_isIPBanned_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_isIDBanned_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_isNameBanned_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_isAdmin_java_lang_String_java_lang_String_R_boolean,
	(void *) M_mindustry_net_Administration_findByName_java_lang_String_R_arc_struct_ObjectSet,
	(void *) M_mindustry_net_Administration_searchNames_java_lang_String_R_arc_struct_ObjectSet,
	(void *) M_mindustry_net_Administration_findByIPs_java_lang_String_R_arc_struct_Seq,
	(void *) M_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo,
	(void *) M_mindustry_net_Administration_getInfoOptional_java_lang_String_R_mindustry_net_Administration$PlayerInfo,
	(void *) M_mindustry_net_Administration_findByIP_java_lang_String_R_mindustry_net_Administration$PlayerInfo,
	(void *) M_mindustry_net_Administration_getWhitelisted_R_arc_struct_Seq,
	(void *) M_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo,
	(void *) M_mindustry_net_Administration_save,
	(void *) M_mindustry_net_Administration_forceSave,
	(void *) M_mindustry_net_Administration_load,
	(void *) M_mindustry_net_Administration_lambda$getWhitelisted$0_mindustry_net_Administration$PlayerInfo_R_boolean,
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
	{ "blacklistDos", "(Ljava/lang/String;)V" },
	{ "unBlacklistDos", "(Ljava/lang/String;)V" },
	{ "isDosBlacklisted", "(Ljava/lang/String;)Z" },
	{ "getKickTime", "(Ljava/lang/String;Ljava/lang/String;)J" },
	{ "handleKicked", "(Ljava/lang/String;Ljava/lang/String;J)V" },
	{ "getSubnetBans", "()Larc/struct/Seq;" },
	{ "removeSubnetBan", "(Ljava/lang/String;)V" },
	{ "addSubnetBan", "(Ljava/lang/String;)V" },
	{ "isSubnetBanned", "(Ljava/lang/String;)Z" },
	{ "addNameBan", "(Ljava/lang/String;)V" },
	{ "addChatFilter", "(Lmindustry/net/Administration$ChatFilter;)V" },
	{ "filterMessage", "(Lmindustry/gen/Player;Ljava/lang/String;)Ljava/lang/String;" },
	{ "addActionFilter", "(Lmindustry/net/Administration$ActionFilter;)V" },
	{ "allowAction", "(Lmindustry/gen/Player;Lmindustry/net/Administration$ActionType;Lmindustry/world/Tile;Larc/func/Cons;)Z" },
	{ "allowAction", "(Lmindustry/gen/Player;Lmindustry/net/Administration$ActionType;Larc/func/Cons;)Z" },
	{ "getPlayerLimit", "()I" },
	{ "setPlayerLimit", "(I)V" },
	{ "isStrict", "()Z" },
	{ "allowsCustomClients", "()Z" },
	{ "updatePlayerJoined", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V" },
	{ "banPlayer", "(Ljava/lang/String;)Z" },
	{ "banPlayerIP", "(Ljava/lang/String;)Z" },
	{ "banPlayerID", "(Ljava/lang/String;)Z" },
	{ "unbanPlayerIP", "(Ljava/lang/String;)Z" },
	{ "unbanPlayerID", "(Ljava/lang/String;)Z" },
	{ "checkUuidChanges", "(Ljava/lang/String;Ljava/lang/String;)Z" },
	{ "getAdmins", "()Larc/struct/Seq;" },
	{ "getBanned", "()Larc/struct/Seq;" },
	{ "getBannedIPs", "()Larc/struct/Seq;" },
	{ "adminPlayer", "(Ljava/lang/String;Ljava/lang/String;)Z" },
	{ "unAdminPlayer", "(Ljava/lang/String;)Z" },
	{ "isWhitelistEnabled", "()Z" },
	{ "isWhitelisted", "(Ljava/lang/String;Ljava/lang/String;)Z" },
	{ "whitelist", "(Ljava/lang/String;)Z" },
	{ "unwhitelist", "(Ljava/lang/String;)Z" },
	{ "isIPBanned", "(Ljava/lang/String;)Z" },
	{ "isIDBanned", "(Ljava/lang/String;)Z" },
	{ "isNameBanned", "(Ljava/lang/String;)Z" },
	{ "isAdmin", "(Ljava/lang/String;Ljava/lang/String;)Z" },
	{ "findByName", "(Ljava/lang/String;)Larc/struct/ObjectSet;" },
	{ "searchNames", "(Ljava/lang/String;)Larc/struct/ObjectSet;" },
	{ "findByIPs", "(Ljava/lang/String;)Larc/struct/Seq;" },
	{ "getInfo", "(Ljava/lang/String;)Lmindustry/net/Administration$PlayerInfo;" },
	{ "getInfoOptional", "(Ljava/lang/String;)Lmindustry/net/Administration$PlayerInfo;" },
	{ "findByIP", "(Ljava/lang/String;)Lmindustry/net/Administration$PlayerInfo;" },
	{ "getWhitelisted", "()Larc/struct/Seq;" },
	{ "getCreateInfo", "(Ljava/lang/String;)Lmindustry/net/Administration$PlayerInfo;" },
	{ "save", "()V" },
	{ "forceSave", "()V" },
	{ "load", "()V" },
	{ "lambda$getWhitelisted$0", "(Lmindustry/net/Administration$PlayerInfo;)Z" },
};

static jclass innerClasses[] {
	&class_mindustry_net_Administration$ChatFilter,
	&class_mindustry_net_Administration$ActionFilter,
	&class_mindustry_net_Administration$PlayerInfo,
	&class_mindustry_net_Administration$ActionType,
	&class_mindustry_net_Administration$PlayerAction,
	&class_mindustry_net_Administration$Config,
	&class_mindustry_net_Administration$IdEncounterInfo,
	&class_mindustry_net_Administration$TraceInfo,
};

static FieldMetadata fields[] {
	{ "playerInfo", &class_arc_struct_ObjectMap, offsetof(mindustry_net_Administration, F_playerInfo), "Larc/struct/ObjectMap;", 1 },
	{ "bannedIPs", &class_arc_struct_Seq, offsetof(mindustry_net_Administration, F_bannedIPs), "Larc/struct/Seq;", 1 },
	{ "whitelist", &class_arc_struct_Seq, offsetof(mindustry_net_Administration, F_whitelist), "Larc/struct/Seq;", 1 },
	{ "chatFilters", &class_arc_struct_Seq, offsetof(mindustry_net_Administration, F_chatFilters), "Larc/struct/Seq;", 1 },
	{ "actionFilters", &class_arc_struct_Seq, offsetof(mindustry_net_Administration, F_actionFilters), "Larc/struct/Seq;", 1 },
	{ "subnetBans", &class_arc_struct_Seq, offsetof(mindustry_net_Administration, F_subnetBans), "Larc/struct/Seq;", 1 },
	{ "dosBlacklist", &class_arc_struct_ObjectSet, offsetof(mindustry_net_Administration, F_dosBlacklist), "Larc/struct/ObjectSet;", 1 },
	{ "kickedIPs", &class_arc_struct_ObjectMap, offsetof(mindustry_net_Administration, F_kickedIPs), "Larc/struct/ObjectMap;", 1 },
	{ "bannedNames", &class_arc_struct_Seq, offsetof(mindustry_net_Administration, F_bannedNames), "Larc/struct/Seq;", 1 },
	{ "modified", &class_boolean, offsetof(mindustry_net_Administration, F_modified), "Z", 2 },
	{ "loaded", &class_boolean, offsetof(mindustry_net_Administration, F_loaded), "Z", 2 },
	{ "encounteredIDsForIp", &class_arc_struct_ObjectMap, offsetof(mindustry_net_Administration, F_encounteredIDsForIp), "Larc/struct/ObjectMap;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Administration, 0, "()V", 1 },
	{ "blacklistDos", (intptr_t) M_mindustry_net_Administration_blacklistDos_java_lang_String, VTABLE_mindustry_net_Administration_blacklistDos_java_lang_String, "(Ljava/lang/String;)V", 33 },
	{ "unBlacklistDos", (intptr_t) M_mindustry_net_Administration_unBlacklistDos_java_lang_String, VTABLE_mindustry_net_Administration_unBlacklistDos_java_lang_String, "(Ljava/lang/String;)V", 33 },
	{ "isDosBlacklisted", (intptr_t) M_mindustry_net_Administration_isDosBlacklisted_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_isDosBlacklisted_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 33 },
	{ "getKickTime", (intptr_t) M_mindustry_net_Administration_getKickTime_java_lang_String_java_lang_String_R_long, VTABLE_mindustry_net_Administration_getKickTime_java_lang_String_java_lang_String_R_long, "(Ljava/lang/String;Ljava/lang/String;)J", 1 },
	{ "handleKicked", (intptr_t) M_mindustry_net_Administration_handleKicked_java_lang_String_java_lang_String_long, VTABLE_mindustry_net_Administration_handleKicked_java_lang_String_java_lang_String_long, "(Ljava/lang/String;Ljava/lang/String;J)V", 1 },
	{ "getSubnetBans", (intptr_t) M_mindustry_net_Administration_getSubnetBans_R_arc_struct_Seq, VTABLE_mindustry_net_Administration_getSubnetBans_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "removeSubnetBan", (intptr_t) M_mindustry_net_Administration_removeSubnetBan_java_lang_String, VTABLE_mindustry_net_Administration_removeSubnetBan_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "addSubnetBan", (intptr_t) M_mindustry_net_Administration_addSubnetBan_java_lang_String, VTABLE_mindustry_net_Administration_addSubnetBan_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "isSubnetBanned", (intptr_t) M_mindustry_net_Administration_isSubnetBanned_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_isSubnetBanned_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "addNameBan", (intptr_t) M_mindustry_net_Administration_addNameBan_java_lang_String, VTABLE_mindustry_net_Administration_addNameBan_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "addChatFilter", (intptr_t) M_mindustry_net_Administration_addChatFilter_mindustry_net_Administration$ChatFilter, VTABLE_mindustry_net_Administration_addChatFilter_mindustry_net_Administration$ChatFilter, "(Lmindustry/net/Administration$ChatFilter;)V", 1 },
	{ "filterMessage", (intptr_t) M_mindustry_net_Administration_filterMessage_mindustry_gen_Player_java_lang_String_R_java_lang_String, VTABLE_mindustry_net_Administration_filterMessage_mindustry_gen_Player_java_lang_String_R_java_lang_String, "(Lmindustry/gen/Player;Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "addActionFilter", (intptr_t) M_mindustry_net_Administration_addActionFilter_mindustry_net_Administration$ActionFilter, VTABLE_mindustry_net_Administration_addActionFilter_mindustry_net_Administration$ActionFilter, "(Lmindustry/net/Administration$ActionFilter;)V", 1 },
	{ "allowAction", (intptr_t) M_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean, VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_arc_func_Cons_R_boolean, "(Lmindustry/gen/Player;Lmindustry/net/Administration$ActionType;Lmindustry/world/Tile;Larc/func/Cons;)Z", 1 },
	{ "allowAction", (intptr_t) M_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean, VTABLE_mindustry_net_Administration_allowAction_mindustry_gen_Player_mindustry_net_Administration$ActionType_arc_func_Cons_R_boolean, "(Lmindustry/gen/Player;Lmindustry/net/Administration$ActionType;Larc/func/Cons;)Z", 1 },
	{ "getPlayerLimit", (intptr_t) M_mindustry_net_Administration_getPlayerLimit_R_int, VTABLE_mindustry_net_Administration_getPlayerLimit_R_int, "()I", 1 },
	{ "setPlayerLimit", (intptr_t) M_mindustry_net_Administration_setPlayerLimit_int, VTABLE_mindustry_net_Administration_setPlayerLimit_int, "(I)V", 1 },
	{ "isStrict", (intptr_t) M_mindustry_net_Administration_isStrict_R_boolean, VTABLE_mindustry_net_Administration_isStrict_R_boolean, "()Z", 1 },
	{ "allowsCustomClients", (intptr_t) M_mindustry_net_Administration_allowsCustomClients_R_boolean, VTABLE_mindustry_net_Administration_allowsCustomClients_R_boolean, "()Z", 1 },
	{ "updatePlayerJoined", (intptr_t) M_mindustry_net_Administration_updatePlayerJoined_java_lang_String_java_lang_String_java_lang_String, VTABLE_mindustry_net_Administration_updatePlayerJoined_java_lang_String_java_lang_String_java_lang_String, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 1 },
	{ "banPlayer", (intptr_t) M_mindustry_net_Administration_banPlayer_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_banPlayer_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "banPlayerIP", (intptr_t) M_mindustry_net_Administration_banPlayerIP_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_banPlayerIP_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "banPlayerID", (intptr_t) M_mindustry_net_Administration_banPlayerID_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_banPlayerID_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "unbanPlayerIP", (intptr_t) M_mindustry_net_Administration_unbanPlayerIP_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_unbanPlayerIP_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "unbanPlayerID", (intptr_t) M_mindustry_net_Administration_unbanPlayerID_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_unbanPlayerID_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "checkUuidChanges", (intptr_t) M_mindustry_net_Administration_checkUuidChanges_java_lang_String_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_checkUuidChanges_java_lang_String_java_lang_String_R_boolean, "(Ljava/lang/String;Ljava/lang/String;)Z", 1 },
	{ "getAdmins", (intptr_t) M_mindustry_net_Administration_getAdmins_R_arc_struct_Seq, VTABLE_mindustry_net_Administration_getAdmins_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getBanned", (intptr_t) M_mindustry_net_Administration_getBanned_R_arc_struct_Seq, VTABLE_mindustry_net_Administration_getBanned_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getBannedIPs", (intptr_t) M_mindustry_net_Administration_getBannedIPs_R_arc_struct_Seq, VTABLE_mindustry_net_Administration_getBannedIPs_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "adminPlayer", (intptr_t) M_mindustry_net_Administration_adminPlayer_java_lang_String_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_adminPlayer_java_lang_String_java_lang_String_R_boolean, "(Ljava/lang/String;Ljava/lang/String;)Z", 1 },
	{ "unAdminPlayer", (intptr_t) M_mindustry_net_Administration_unAdminPlayer_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_unAdminPlayer_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "isWhitelistEnabled", (intptr_t) M_mindustry_net_Administration_isWhitelistEnabled_R_boolean, VTABLE_mindustry_net_Administration_isWhitelistEnabled_R_boolean, "()Z", 1 },
	{ "isWhitelisted", (intptr_t) M_mindustry_net_Administration_isWhitelisted_java_lang_String_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_isWhitelisted_java_lang_String_java_lang_String_R_boolean, "(Ljava/lang/String;Ljava/lang/String;)Z", 1 },
	{ "whitelist", (intptr_t) M_mindustry_net_Administration_whitelist_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_whitelist_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "unwhitelist", (intptr_t) M_mindustry_net_Administration_unwhitelist_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_unwhitelist_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "isIPBanned", (intptr_t) M_mindustry_net_Administration_isIPBanned_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_isIPBanned_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "isIDBanned", (intptr_t) M_mindustry_net_Administration_isIDBanned_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_isIDBanned_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "isNameBanned", (intptr_t) M_mindustry_net_Administration_isNameBanned_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_isNameBanned_java_lang_String_R_boolean, "(Ljava/lang/String;)Z", 1 },
	{ "isAdmin", (intptr_t) M_mindustry_net_Administration_isAdmin_java_lang_String_java_lang_String_R_boolean, VTABLE_mindustry_net_Administration_isAdmin_java_lang_String_java_lang_String_R_boolean, "(Ljava/lang/String;Ljava/lang/String;)Z", 1 },
	{ "findByName", (intptr_t) M_mindustry_net_Administration_findByName_java_lang_String_R_arc_struct_ObjectSet, VTABLE_mindustry_net_Administration_findByName_java_lang_String_R_arc_struct_ObjectSet, "(Ljava/lang/String;)Larc/struct/ObjectSet;", 1 },
	{ "searchNames", (intptr_t) M_mindustry_net_Administration_searchNames_java_lang_String_R_arc_struct_ObjectSet, VTABLE_mindustry_net_Administration_searchNames_java_lang_String_R_arc_struct_ObjectSet, "(Ljava/lang/String;)Larc/struct/ObjectSet;", 1 },
	{ "findByIPs", (intptr_t) M_mindustry_net_Administration_findByIPs_java_lang_String_R_arc_struct_Seq, VTABLE_mindustry_net_Administration_findByIPs_java_lang_String_R_arc_struct_Seq, "(Ljava/lang/String;)Larc/struct/Seq;", 1 },
	{ "getInfo", (intptr_t) M_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo, VTABLE_mindustry_net_Administration_getInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo, "(Ljava/lang/String;)Lmindustry/net/Administration$PlayerInfo;", 1 },
	{ "getInfoOptional", (intptr_t) M_mindustry_net_Administration_getInfoOptional_java_lang_String_R_mindustry_net_Administration$PlayerInfo, VTABLE_mindustry_net_Administration_getInfoOptional_java_lang_String_R_mindustry_net_Administration$PlayerInfo, "(Ljava/lang/String;)Lmindustry/net/Administration$PlayerInfo;", 1 },
	{ "findByIP", (intptr_t) M_mindustry_net_Administration_findByIP_java_lang_String_R_mindustry_net_Administration$PlayerInfo, VTABLE_mindustry_net_Administration_findByIP_java_lang_String_R_mindustry_net_Administration$PlayerInfo, "(Ljava/lang/String;)Lmindustry/net/Administration$PlayerInfo;", 1 },
	{ "getWhitelisted", (intptr_t) M_mindustry_net_Administration_getWhitelisted_R_arc_struct_Seq, VTABLE_mindustry_net_Administration_getWhitelisted_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "getCreateInfo", (intptr_t) M_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo, VTABLE_mindustry_net_Administration_getCreateInfo_java_lang_String_R_mindustry_net_Administration$PlayerInfo, "(Ljava/lang/String;)Lmindustry/net/Administration$PlayerInfo;", 2 },
	{ "save", (intptr_t) M_mindustry_net_Administration_save, VTABLE_mindustry_net_Administration_save, "()V", 1 },
	{ "forceSave", (intptr_t) M_mindustry_net_Administration_forceSave, VTABLE_mindustry_net_Administration_forceSave, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_net_Administration_load, VTABLE_mindustry_net_Administration_load, "()V", 2 },
	{ "lambda$getWhitelisted$0", (intptr_t) M_mindustry_net_Administration_lambda$getWhitelisted$0_mindustry_net_Administration$PlayerInfo_R_boolean, VTABLE_mindustry_net_Administration_lambda$getWhitelisted$0_mindustry_net_Administration$PlayerInfo_R_boolean, "(Lmindustry/net/Administration$PlayerInfo;)Z", 4098 },
	{ "lambda$searchNames$0", (intptr_t) SM_mindustry_net_Administration_lambda$searchNames$0_java_lang_String_java_lang_String_R_boolean, 0, "(Ljava/lang/String;Ljava/lang/String;)Z", 4106 },
	{ "lambda$isNameBanned$0", (intptr_t) SM_mindustry_net_Administration_lambda$isNameBanned$0_java_lang_String_java_util_regex_Pattern_R_boolean, 0, "(Ljava/lang/String;Ljava/util/regex/Pattern;)Z", 4106 },
	{ "lambda$unbanPlayerID$0", (intptr_t) SM_mindustry_net_Administration_lambda$unbanPlayerID$0_java_lang_String_mindustry_gen_Player_R_boolean, 0, "(Ljava/lang/String;Lmindustry/gen/Player;)Z", 4106 },
	{ "lambda$banPlayerID$0", (intptr_t) SM_mindustry_net_Administration_lambda$banPlayerID$0_java_lang_String_mindustry_gen_Player_R_boolean, 0, "(Ljava/lang/String;Lmindustry/gen/Player;)Z", 4106 },
	{ "lambda$allowAction$0", (intptr_t) SM_mindustry_net_Administration_lambda$allowAction$0_arc_func_Cons_mindustry_gen_Player_mindustry_net_Administration$ActionType_mindustry_world_Tile_mindustry_net_Administration$PlayerAction, 0, "(Larc/func/Cons;Lmindustry/gen/Player;Lmindustry/net/Administration$ActionType;Lmindustry/world/Tile;Lmindustry/net/Administration$PlayerAction;)V", 4106 },
	{ "lambda$new$1", (intptr_t) SM_mindustry_net_Administration_lambda$new$1_mindustry_net_Administration$PlayerAction_R_boolean, 0, "(Lmindustry/net/Administration$PlayerAction;)Z", 4106 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_net_Administration_lambda$new$0_mindustry_gen_Player_java_lang_String_R_java_lang_String, 0, "(Lmindustry/gen/Player;Ljava/lang/String;)Ljava/lang/String;", 4106 },
};

Class class_mindustry_net_Administration{
		.nativeName = (intptr_t) "mindustry/net/Administration",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_Administration),
		.classVtable = (intptr_t) vtable_mindustry_net_Administration,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Administration,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_net_Administration,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 8,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 12,
		.nativeFields = (intptr_t) fields,
		.methodCount = 59,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 62,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Administration = registerClass(&class_mindustry_net_Administration);

}
