#include "mindustry/net/Administration_Config.h"
#include "java/lang/Integer.h"
#include "arc/Core.h"
#include "arc/util/Log.h"
#include "java/lang/Boolean.h"
#include "arc/Events.h"
#include "arc/util/Structs.h"
#include "mindustry/net/Administration_Config_invoke_java_lang_Runnable_9.h"
#include "mindustry/net/Administration_Config_invoke_java_lang_Runnable_8.h"
#include "mindustry/net/Administration_Config_invoke_java_lang_Runnable_5.h"
#include "java/lang/Enum.h"
#include "mindustry/net/Administration_Config_invoke_java_lang_Runnable_7.h"
#include "java/lang/Runnable.h"
#include "mindustry/net/Administration_Config_invoke_java_lang_Runnable_6.h"
#include "mindustry/net/Administration_Config.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/game/EventType_Trigger.h"
#include "arc/struct/Seq.h"
#include "mindustry/net/Administration.h"
#include "arc/Settings.h"
#include "arc/util/Log_LogLevel.h"
#include "mindustry/Vars.h"

extern "C" {

jobject SF_mindustry_net_Administration$Config_all;
jobject SF_mindustry_net_Administration$Config_serverName;
jobject SF_mindustry_net_Administration$Config_desc;
jobject SF_mindustry_net_Administration$Config_port;
jobject SF_mindustry_net_Administration$Config_autoUpdate;
jobject SF_mindustry_net_Administration$Config_showConnectMessages;
jobject SF_mindustry_net_Administration$Config_enableVotekick;
jobject SF_mindustry_net_Administration$Config_startCommands;
jobject SF_mindustry_net_Administration$Config_logging;
jobject SF_mindustry_net_Administration$Config_strict;
jobject SF_mindustry_net_Administration$Config_antiSpam;
jobject SF_mindustry_net_Administration$Config_interactRateWindow;
jobject SF_mindustry_net_Administration$Config_interactRateLimit;
jobject SF_mindustry_net_Administration$Config_interactRateKick;
jobject SF_mindustry_net_Administration$Config_messageRateLimit;
jobject SF_mindustry_net_Administration$Config_messageSpamKick;
jobject SF_mindustry_net_Administration$Config_packetSpamLimit;
jobject SF_mindustry_net_Administration$Config_uuidChangeLimit;
jobject SF_mindustry_net_Administration$Config_uuidChangeTimePeriod;
jobject SF_mindustry_net_Administration$Config_chatSpamLimit;
jobject SF_mindustry_net_Administration$Config_socketInput;
jobject SF_mindustry_net_Administration$Config_socketInputPort;
jobject SF_mindustry_net_Administration$Config_socketInputAddress;
jobject SF_mindustry_net_Administration$Config_allowCustomClients;
jobject SF_mindustry_net_Administration$Config_whitelist;
jobject SF_mindustry_net_Administration$Config_motd;
jobject SF_mindustry_net_Administration$Config_autosave;
jobject SF_mindustry_net_Administration$Config_autosaveAmount;
jobject SF_mindustry_net_Administration$Config_autosaveSpacing;
jobject SF_mindustry_net_Administration$Config_debug;
jobject SF_mindustry_net_Administration$Config_snapshotInterval;
jobject SF_mindustry_net_Administration$Config_autoPause;
jobject SF_mindustry_net_Administration$Config_roundExtraTime;
jobject SF_mindustry_net_Administration$Config_maxLogLength;
jobject SF_mindustry_net_Administration$Config_logCommands;

void mark_mindustry_net_Administration$Config(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_net_Administration$Config_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_all)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_all, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_serverName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_serverName)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_serverName, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_desc)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_desc)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_desc, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_port)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_port)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_port, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_autoUpdate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_autoUpdate)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_autoUpdate, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_showConnectMessages)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_showConnectMessages)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_showConnectMessages, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_enableVotekick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_enableVotekick)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_enableVotekick, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_startCommands)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_startCommands)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_startCommands, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_logging)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_logging)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_logging, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_strict)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_strict)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_strict, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_antiSpam)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_antiSpam)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_antiSpam, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_interactRateWindow)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_interactRateWindow)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_interactRateWindow, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_interactRateLimit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_interactRateLimit)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_interactRateLimit, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_interactRateKick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_interactRateKick)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_interactRateKick, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_messageRateLimit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_messageRateLimit)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_messageRateLimit, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_messageSpamKick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_messageSpamKick)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_messageSpamKick, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_packetSpamLimit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_packetSpamLimit)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_packetSpamLimit, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_uuidChangeLimit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_uuidChangeLimit)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_uuidChangeLimit, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_uuidChangeTimePeriod)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_uuidChangeTimePeriod)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_uuidChangeTimePeriod, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_chatSpamLimit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_chatSpamLimit)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_chatSpamLimit, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_socketInput)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_socketInput)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_socketInput, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_socketInputPort)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_socketInputPort)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_socketInputPort, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_socketInputAddress)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_socketInputAddress)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_socketInputAddress, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_allowCustomClients)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_allowCustomClients)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_allowCustomClients, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_whitelist)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_whitelist)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_whitelist, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_motd)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_motd)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_motd, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_autosave)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_autosave)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_autosave, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_autosaveAmount)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_autosaveAmount)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_autosaveAmount, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_autosaveSpacing)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_autosaveSpacing)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_autosaveSpacing, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_debug)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_debug)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_debug, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_snapshotInterval)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_snapshotInterval)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_snapshotInterval, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_autoPause)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_autoPause)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_autoPause, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_roundExtraTime)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_roundExtraTime)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_roundExtraTime, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_maxLogLength)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_maxLogLength)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_maxLogLength, mark, depth + 1);
		if (SF_mindustry_net_Administration$Config_logCommands)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Administration$Config_logCommands)->clazz)->markFunction)((jobject) SF_mindustry_net_Administration$Config_logCommands, mark, depth + 1);
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
	auto self = (mindustry_net_Administration$Config *) object;
	if (self->F_defaultValue)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultValue)->clazz)->markFunction)((jobject) self->F_defaultValue, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_key)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_key)->clazz)->markFunction)((jobject) self->F_key, mark, depth + 1);
	if (self->F_description)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_description)->clazz)->markFunction)((jobject) self->F_description, mark, depth + 1);
	if (self->F_changed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_changed)->clazz)->markFunction)((jobject) self->F_changed, mark, depth + 1);
}

void init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$Config(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(575);
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_String_java_lang_Runnable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(576);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$Config(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(579);
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_String_java_lang_Runnable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (jobject(nullptr)));
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$Config(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(583);
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_String_java_lang_Runnable(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (jobject(nullptr)), (frame[4].o));
	LINE_NUMBER(584);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_String_java_lang_Runnable(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$Config(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(586);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(587);
	((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(588);
	((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_description = (jref) (frame[2].o);
	LINE_NUMBER(589);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[4].o) != nullptr) goto label_4;
	}
	INST_ALOAD(1);
	goto label_5;
label_4:;
	INST_ALOAD(4);
label_5:;
	{
	sp -= 2;
	((mindustry_net_Administration$Config *) NULL_CHECK(sp[0].o))->F_key = (jref) sp[1].o;
	LINE_NUMBER(590);
	((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_defaultValue = (jref) (frame[3].o);
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[5].o) != nullptr) goto label_8;
	}
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration$Config_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_net_Administration$Config_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_net_Administration$Config_invoke_java_lang_Runnable_5);
		PUSH_OBJECT((jobject) proxy);
	}
	goto label_9;
label_8:;
	INST_ALOAD(5);
label_9:;
	{
	sp -= 2;
	((mindustry_net_Administration$Config *) NULL_CHECK(sp[0].o))->F_changed = (jref) sp[1].o;
	LINE_NUMBER(593);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(594);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration$Config_isNum_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:isNum", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(597);
	sp[0].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_java_lang_Integer));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration$Config_isBool_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:isBool", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_java_lang_Boolean));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration$Config_isString_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:isString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_java_lang_String));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration$Config_get_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(609);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_key;
	sp[2].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	sp[0].o = (jobject)((func_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_get_java_lang_String_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration$Config_bool_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:bool", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(613);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_key;
	sp[2].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[2].o)))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[2].o)));
	jint temp1 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jint M_mindustry_net_Administration$Config_num_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:num", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(617);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_key;
	sp[2].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[2].o)))->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, (checkCast(ctx, &class_java_lang_Integer, sp[2].o)));
	jint temp1 = (jint)((func_arc_Settings_getInt_java_lang_String_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getInt_java_lang_String_int_R_int])(ctx, sp[0].o, sp[1].o, temp0);
	popStackFrame(ctx);
	return temp1;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration$Config_string_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:string", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(621);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_key;
	sp[2].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_net_Administration$Config_set_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:set", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(625);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_key;
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(626);
	sp[0].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_changed;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(627);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_net_Administration$Config_isDefault_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:isDefault", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)((func_mindustry_net_Administration$Config_get_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Administration$Config_get_R_java_lang_Object])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_net_Administration$Config *) NULL_CHECK((frame[0].o)))->F_defaultValue;
	jint temp0 = (jint)SM_arc_util_Structs_eq_java_lang_Object_java_lang_Object_R_boolean(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_net_Administration$Config_debug_R_boolean(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:debug", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$Config(ctx);
	{
	LINE_NUMBER(634);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Administration$Config_debug;
	jint temp0 = (jint)((func_mindustry_net_Administration$Config_bool_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Administration$Config_bool_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_Administration$Config_lambda$new$0(jcontext ctx) {
	FrameInfo frameInfo { "mindustry/net/Administration$Config:lambda$new$0", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

	clinit_mindustry_net_Administration$Config(ctx);
	LINE_NUMBER(591);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_net_Administration$Config_lambda$static$3(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:lambda$static$3", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$Config(ctx);
	{
	LINE_NUMBER(562);
	jint temp0 = (jint)SM_mindustry_net_Administration$Config_debug_R_boolean(ctx);
	if (temp0 == 0) goto label_1;
	}
	clinit_arc_util_Log$LogLevel(ctx);
	(sp++)->o = SF_arc_util_Log$LogLevel_debug;
	goto label_2;
label_1:;
	clinit_arc_util_Log$LogLevel(ctx);
	(sp++)->o = SF_arc_util_Log$LogLevel_info;
label_2:;
	clinit_arc_util_Log(ctx);
	SF_arc_util_Log_level = (--sp)->o;
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_net_Administration$Config_lambda$static$2(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:lambda$static$2", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$Config(ctx);
	{
	LINE_NUMBER(555);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_socketConfigChanged;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_Administration$Config_lambda$static$1(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:lambda$static$1", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$Config(ctx);
	{
	LINE_NUMBER(554);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_socketConfigChanged;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_net_Administration$Config_lambda$static$0(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:lambda$static$0", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$Config(ctx);
	{
	LINE_NUMBER(553);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_socketConfigChanged;
	SM_arc_Events_fire_java_lang_Enum(ctx, sp[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_net_Administration$Config(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[7];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$Config:<clinit>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$Config(ctx);
	{
	LINE_NUMBER(530);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_all = sp[0].o;
	LINE_NUMBER(534);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name"_j))), (((jobject) createStringLiteral(ctx, u8"The server name as displayed on clients."_j))), (((jobject) createStringLiteral(ctx, u8"Server"_j))), (((jobject) createStringLiteral(ctx, u8"servername"_j))));
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_serverName = sp[0].o;
	LINE_NUMBER(535);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"desc"_j))), (((jobject) createStringLiteral(ctx, u8"The server description, displayed under the name. Max 100 characters."_j))), (((jobject) createStringLiteral(ctx, u8"off"_j))));
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_desc = sp[0].o;
	LINE_NUMBER(536);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"port"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"The port to host on."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (6567));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_port = sp[0].o;
	LINE_NUMBER(537);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"autoUpdate"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Whether to auto-update and exit when a new bleeding-edge update arrives."_j));
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_autoUpdate = sp[0].o;
	LINE_NUMBER(538);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"showConnectMessages"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Whether to display connect/disconnect messages."_j));
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_showConnectMessages = sp[0].o;
	LINE_NUMBER(539);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"enableVotekick"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Whether votekick is enabled."_j));
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_enableVotekick = sp[0].o;
	LINE_NUMBER(540);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"startCommands"_j))), (((jobject) createStringLiteral(ctx, u8"Commands run at startup. This should be a comma-separated list."_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_startCommands = sp[0].o;
	LINE_NUMBER(541);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"logging"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Whether to log everything to files."_j));
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_logging = sp[0].o;
	LINE_NUMBER(542);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"strict"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Whether strict mode is on - corrects positions and prevents duplicate UUIDs."_j));
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_strict = sp[0].o;
	LINE_NUMBER(543);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"antiSpam"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Whether spammers are automatically kicked and rate-limited."_j));
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_antiSpam = sp[0].o;
	LINE_NUMBER(544);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"interactRateWindow"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Block interaction rate limit window, in seconds."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (6));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_interactRateWindow = sp[0].o;
	LINE_NUMBER(545);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"interactRateLimit"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Block interaction rate limit."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (25));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_interactRateLimit = sp[0].o;
	LINE_NUMBER(546);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"interactRateKick"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"How many times a player must interact inside the window to get kicked."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (60));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_interactRateKick = sp[0].o;
	LINE_NUMBER(547);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"messageRateLimit"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Message rate limit in seconds. 0 to disable."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_messageRateLimit = sp[0].o;
	LINE_NUMBER(548);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"messageSpamKick"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"How many times a player must send a message before the cooldown to get kicked. 0 to disable."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(3)));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_messageSpamKick = sp[0].o;
	LINE_NUMBER(549);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"packetSpamLimit"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Limit for packet count sent within 3sec that will lead to a blacklist + kick."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (300));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_packetSpamLimit = sp[0].o;
	LINE_NUMBER(550);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uuidChangeLimit"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Limit for how many UUID changes an IP can send in the time frame specified by uuidChangeTimePeriod before it gets banned."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (10));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_uuidChangeLimit = sp[0].o;
	LINE_NUMBER(551);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uuidChangeTimePeriod"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Time window for the uuidChangeLimit config, in hours."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(3)));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_uuidChangeTimePeriod = sp[0].o;
	LINE_NUMBER(552);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"chatSpamLimit"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Limit for chat packet count sent within 2sec that will lead to a blacklist + kick. Not the same as a rate limit."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (20));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_chatSpamLimit = sp[0].o;
	LINE_NUMBER(553);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"socketInput"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Allows a local application to control this server through a local TCP socket."_j));
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	sp[4].o = ((jobject) createStringLiteral(ctx, u8"socket"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration$Config_invoke_java_lang_Runnable_6(ctx);
		auto proxy = (mindustry_net_Administration$Config_invoke_java_lang_Runnable_6 *) gcAlloc(ctx, &class_mindustry_net_Administration$Config_invoke_java_lang_Runnable_6);
		sp[5].o = (jobject) proxy;
	}
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_String_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_socketInput = sp[0].o;
	LINE_NUMBER(554);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"socketInputPort"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"The port for socket input."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (6859));
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration$Config_invoke_java_lang_Runnable_7(ctx);
		auto proxy = (mindustry_net_Administration$Config_invoke_java_lang_Runnable_7 *) gcAlloc(ctx, &class_mindustry_net_Administration$Config_invoke_java_lang_Runnable_7);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_socketInputPort = sp[0].o;
	LINE_NUMBER(555);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"socketInputAddress"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"The bind address for socket input."_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"localhost"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration$Config_invoke_java_lang_Runnable_8(ctx);
		auto proxy = (mindustry_net_Administration$Config_invoke_java_lang_Runnable_8 *) gcAlloc(ctx, &class_mindustry_net_Administration$Config_invoke_java_lang_Runnable_8);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_socketInputAddress = sp[0].o;
	LINE_NUMBER(556);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"allowCustomClients"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Whether custom clients are allowed to connect."_j));
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp1 = sp[2].o;
	sp[2].o = temp0;
	sp[3].o = temp1;
	sp += 4;
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_24;
	}
	INST_ICONST(1);
	goto label_25;
label_24:;
	INST_ICONST(0);
label_25:;
	{
	sp -= 5;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, sp[4].i);
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_String(ctx, sp[0].o, sp[2].o, sp[3].o, sp[1].o, (((jobject) createStringLiteral(ctx, u8"allow-custom"_j))));
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_allowCustomClients = sp[0].o;
	LINE_NUMBER(557);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"whitelist"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Whether the whitelist is used."_j));
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_whitelist = sp[0].o;
	LINE_NUMBER(558);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"motd"_j))), (((jobject) createStringLiteral(ctx, u8"The message displayed to people on connection."_j))), (((jobject) createStringLiteral(ctx, u8"off"_j))));
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_motd = sp[0].o;
	LINE_NUMBER(559);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"autosave"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Whether the periodically save the map when playing."_j));
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_autosave = sp[0].o;
	LINE_NUMBER(560);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"autosaveAmount"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"The maximum amount of autosaves. Older ones get replaced."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (10));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_autosaveAmount = sp[0].o;
	LINE_NUMBER(561);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"autosaveSpacing"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Spacing between autosaves in seconds."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (300));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_autosaveSpacing = sp[0].o;
	LINE_NUMBER(562);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"debug"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Enable debug logging."_j));
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	{ /* InvokeDynamic */
		clinit_mindustry_net_Administration$Config_invoke_java_lang_Runnable_9(ctx);
		auto proxy = (mindustry_net_Administration$Config_invoke_java_lang_Runnable_9 *) gcAlloc(ctx, &class_mindustry_net_Administration$Config_invoke_java_lang_Runnable_9);
		sp[4].o = (jobject) proxy;
	}
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_debug = sp[0].o;
	LINE_NUMBER(563);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"snapshotInterval"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Client entity snapshot interval in ms."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (200));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_snapshotInterval = sp[0].o;
	LINE_NUMBER(564);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"autoPause"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Whether the game should pause when nobody is online."_j));
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_autoPause = sp[0].o;
	LINE_NUMBER(565);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"roundExtraTime"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Time before loading a new map after the gameover, in seconds."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (12));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_roundExtraTime = sp[0].o;
	LINE_NUMBER(566);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"maxLogLength"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"The Maximum log file size, in bytes."_j));
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(5242880)));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_maxLogLength = sp[0].o;
	LINE_NUMBER(567);
	clinit_mindustry_net_Administration$Config(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Administration$Config);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"logCommands"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"Whether player commands should be logged."_j));
	sp[3].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	clinit_mindustry_net_Administration$Config(ctx);
	SF_mindustry_net_Administration$Config_logCommands = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Administration$Config[] {
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
	(void *) M_mindustry_net_Administration$Config_isNum_R_boolean,
	(void *) M_mindustry_net_Administration$Config_isBool_R_boolean,
	(void *) M_mindustry_net_Administration$Config_isString_R_boolean,
	(void *) M_mindustry_net_Administration$Config_get_R_java_lang_Object,
	(void *) M_mindustry_net_Administration$Config_bool_R_boolean,
	(void *) M_mindustry_net_Administration$Config_num_R_int,
	(void *) M_mindustry_net_Administration$Config_string_R_java_lang_String,
	(void *) M_mindustry_net_Administration$Config_set_java_lang_Object,
	(void *) M_mindustry_net_Administration$Config_isDefault_R_boolean,
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
	{ "isNum", "()Z" },
	{ "isBool", "()Z" },
	{ "isString", "()Z" },
	{ "get", "()Ljava/lang/Object;" },
	{ "bool", "()Z" },
	{ "num", "()I" },
	{ "string", "()Ljava/lang/String;" },
	{ "set", "(Ljava/lang/Object;)V" },
	{ "isDefault", "()Z" },
};

static FieldMetadata fields[] {
	{ "all", &class_arc_struct_Seq, (intptr_t) &SF_mindustry_net_Administration$Config_all, "Larc/struct/Seq;", 25 },
	{ "serverName", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_serverName, "Lmindustry/net/Administration$Config;", 25 },
	{ "desc", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_desc, "Lmindustry/net/Administration$Config;", 25 },
	{ "port", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_port, "Lmindustry/net/Administration$Config;", 25 },
	{ "autoUpdate", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_autoUpdate, "Lmindustry/net/Administration$Config;", 25 },
	{ "showConnectMessages", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_showConnectMessages, "Lmindustry/net/Administration$Config;", 25 },
	{ "enableVotekick", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_enableVotekick, "Lmindustry/net/Administration$Config;", 25 },
	{ "startCommands", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_startCommands, "Lmindustry/net/Administration$Config;", 25 },
	{ "logging", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_logging, "Lmindustry/net/Administration$Config;", 25 },
	{ "strict", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_strict, "Lmindustry/net/Administration$Config;", 25 },
	{ "antiSpam", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_antiSpam, "Lmindustry/net/Administration$Config;", 25 },
	{ "interactRateWindow", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_interactRateWindow, "Lmindustry/net/Administration$Config;", 25 },
	{ "interactRateLimit", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_interactRateLimit, "Lmindustry/net/Administration$Config;", 25 },
	{ "interactRateKick", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_interactRateKick, "Lmindustry/net/Administration$Config;", 25 },
	{ "messageRateLimit", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_messageRateLimit, "Lmindustry/net/Administration$Config;", 25 },
	{ "messageSpamKick", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_messageSpamKick, "Lmindustry/net/Administration$Config;", 25 },
	{ "packetSpamLimit", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_packetSpamLimit, "Lmindustry/net/Administration$Config;", 25 },
	{ "uuidChangeLimit", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_uuidChangeLimit, "Lmindustry/net/Administration$Config;", 25 },
	{ "uuidChangeTimePeriod", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_uuidChangeTimePeriod, "Lmindustry/net/Administration$Config;", 25 },
	{ "chatSpamLimit", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_chatSpamLimit, "Lmindustry/net/Administration$Config;", 25 },
	{ "socketInput", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_socketInput, "Lmindustry/net/Administration$Config;", 25 },
	{ "socketInputPort", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_socketInputPort, "Lmindustry/net/Administration$Config;", 25 },
	{ "socketInputAddress", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_socketInputAddress, "Lmindustry/net/Administration$Config;", 25 },
	{ "allowCustomClients", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_allowCustomClients, "Lmindustry/net/Administration$Config;", 25 },
	{ "whitelist", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_whitelist, "Lmindustry/net/Administration$Config;", 25 },
	{ "motd", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_motd, "Lmindustry/net/Administration$Config;", 25 },
	{ "autosave", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_autosave, "Lmindustry/net/Administration$Config;", 25 },
	{ "autosaveAmount", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_autosaveAmount, "Lmindustry/net/Administration$Config;", 25 },
	{ "autosaveSpacing", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_autosaveSpacing, "Lmindustry/net/Administration$Config;", 25 },
	{ "debug", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_debug, "Lmindustry/net/Administration$Config;", 25 },
	{ "snapshotInterval", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_snapshotInterval, "Lmindustry/net/Administration$Config;", 25 },
	{ "autoPause", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_autoPause, "Lmindustry/net/Administration$Config;", 25 },
	{ "roundExtraTime", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_roundExtraTime, "Lmindustry/net/Administration$Config;", 25 },
	{ "maxLogLength", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_maxLogLength, "Lmindustry/net/Administration$Config;", 25 },
	{ "logCommands", &class_mindustry_net_Administration$Config, (intptr_t) &SF_mindustry_net_Administration$Config_logCommands, "Lmindustry/net/Administration$Config;", 25 },
	{ "defaultValue", &class_java_lang_Object, offsetof(mindustry_net_Administration$Config, F_defaultValue), "Ljava/lang/Object;", 17 },
	{ "name", &class_java_lang_String, offsetof(mindustry_net_Administration$Config, F_name), "Ljava/lang/String;", 17 },
	{ "key", &class_java_lang_String, offsetof(mindustry_net_Administration$Config, F_key), "Ljava/lang/String;", 17 },
	{ "description", &class_java_lang_String, offsetof(mindustry_net_Administration$Config, F_description), "Ljava/lang/String;", 17 },
	{ "changed", &class_java_lang_Runnable, offsetof(mindustry_net_Administration$Config, F_changed), "Ljava/lang/Runnable;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_String, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_Runnable, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Runnable;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_net_Administration$Config_java_lang_String_java_lang_String_java_lang_Object_java_lang_String_java_lang_Runnable, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Runnable;)V", 1 },
	{ "isNum", (intptr_t) M_mindustry_net_Administration$Config_isNum_R_boolean, VTABLE_mindustry_net_Administration$Config_isNum_R_boolean, "()Z", 1 },
	{ "isBool", (intptr_t) M_mindustry_net_Administration$Config_isBool_R_boolean, VTABLE_mindustry_net_Administration$Config_isBool_R_boolean, "()Z", 1 },
	{ "isString", (intptr_t) M_mindustry_net_Administration$Config_isString_R_boolean, VTABLE_mindustry_net_Administration$Config_isString_R_boolean, "()Z", 1 },
	{ "get", (intptr_t) M_mindustry_net_Administration$Config_get_R_java_lang_Object, VTABLE_mindustry_net_Administration$Config_get_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "bool", (intptr_t) M_mindustry_net_Administration$Config_bool_R_boolean, VTABLE_mindustry_net_Administration$Config_bool_R_boolean, "()Z", 1 },
	{ "num", (intptr_t) M_mindustry_net_Administration$Config_num_R_int, VTABLE_mindustry_net_Administration$Config_num_R_int, "()I", 1 },
	{ "string", (intptr_t) M_mindustry_net_Administration$Config_string_R_java_lang_String, VTABLE_mindustry_net_Administration$Config_string_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "set", (intptr_t) M_mindustry_net_Administration$Config_set_java_lang_Object, VTABLE_mindustry_net_Administration$Config_set_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "isDefault", (intptr_t) M_mindustry_net_Administration$Config_isDefault_R_boolean, VTABLE_mindustry_net_Administration$Config_isDefault_R_boolean, "()Z", 1 },
	{ "debug", (intptr_t) SM_mindustry_net_Administration$Config_debug_R_boolean, 0, "()Z", 10 },
	{ "lambda$new$0", (intptr_t) SM_mindustry_net_Administration$Config_lambda$new$0, 0, "()V", 4106 },
	{ "lambda$static$3", (intptr_t) SM_mindustry_net_Administration$Config_lambda$static$3, 0, "()V", 4106 },
	{ "lambda$static$2", (intptr_t) SM_mindustry_net_Administration$Config_lambda$static$2, 0, "()V", 4106 },
	{ "lambda$static$1", (intptr_t) SM_mindustry_net_Administration$Config_lambda$static$1, 0, "()V", 4106 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_net_Administration$Config_lambda$static$0, 0, "()V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_net_Administration$Config, 0, "()V", 8 },
};

Class class_mindustry_net_Administration$Config{
		.nativeName = (intptr_t) "mindustry/net/Administration$Config",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_Administration$Config),
		.classVtable = (intptr_t) vtable_mindustry_net_Administration$Config,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Administration$Config,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Administration$Config,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Administration,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 40,
		.nativeFields = (intptr_t) fields,
		.methodCount = 20,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Administration$Config = registerClass(&class_mindustry_net_Administration$Config);

}

