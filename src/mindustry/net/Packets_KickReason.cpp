#include "mindustry/net/Packets_KickReason.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "arc/util/I18NBundle.h"
#include "mindustry/net/Packets.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "mindustry/net/Packets_KickReason.h"

extern "C" {

jobject SF_mindustry_net_Packets$KickReason_kick;
jobject SF_mindustry_net_Packets$KickReason_clientOutdated;
jobject SF_mindustry_net_Packets$KickReason_serverOutdated;
jobject SF_mindustry_net_Packets$KickReason_banned;
jobject SF_mindustry_net_Packets$KickReason_gameover;
jobject SF_mindustry_net_Packets$KickReason_recentKick;
jobject SF_mindustry_net_Packets$KickReason_nameInUse;
jobject SF_mindustry_net_Packets$KickReason_idInUse;
jobject SF_mindustry_net_Packets$KickReason_nameEmpty;
jobject SF_mindustry_net_Packets$KickReason_customClient;
jobject SF_mindustry_net_Packets$KickReason_serverClose;
jobject SF_mindustry_net_Packets$KickReason_vote;
jobject SF_mindustry_net_Packets$KickReason_typeMismatch;
jobject SF_mindustry_net_Packets$KickReason_whitelist;
jobject SF_mindustry_net_Packets$KickReason_playerLimit;
jobject SF_mindustry_net_Packets$KickReason_serverRestarting;
jobject SF_mindustry_net_Packets$KickReason_all;
jobject SF_mindustry_net_Packets$KickReason_$VALUES;

void mark_mindustry_net_Packets$KickReason(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_net_Packets$KickReason_kick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_kick)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_kick, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_clientOutdated)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_clientOutdated)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_clientOutdated, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_serverOutdated)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_serverOutdated)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_serverOutdated, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_banned)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_banned)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_banned, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_gameover)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_gameover)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_gameover, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_recentKick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_recentKick)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_recentKick, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_nameInUse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_nameInUse)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_nameInUse, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_idInUse)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_idInUse)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_idInUse, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_nameEmpty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_nameEmpty)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_nameEmpty, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_customClient)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_customClient)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_customClient, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_serverClose)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_serverClose)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_serverClose, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_vote)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_vote)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_vote, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_typeMismatch)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_typeMismatch)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_typeMismatch, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_whitelist)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_whitelist)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_whitelist, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_playerLimit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_playerLimit)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_playerLimit, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_serverRestarting)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_serverRestarting)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_serverRestarting, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_all)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_all)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_all, mark, depth + 1);
		if (SF_mindustry_net_Packets$KickReason_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_net_Packets$KickReason_$VALUES)->clazz)->markFunction)((jobject) SF_mindustry_net_Packets$KickReason_$VALUES, mark, depth + 1);
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
	auto self = (mindustry_net_Packets$KickReason *) object;
}

jobject SM_mindustry_net_Packets$KickReason_values_R_Array1_mindustry_net_Packets$KickReason(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$KickReason:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$KickReason(ctx);
	{
	LINE_NUMBER(17);
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = (jobject)SF_mindustry_net_Packets$KickReason_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_mindustry_net_Packets$KickReason, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_Packets$KickReason_valueOf_java_lang_String_R_mindustry_net_Packets$KickReason(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$KickReason:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$KickReason(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_mindustry_net_Packets$KickReason)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_net_Packets$KickReason, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_mindustry_net_Packets$KickReason_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$KickReason:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$KickReason(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(27);
	init_mindustry_net_Packets$KickReason_java_lang_String_int_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jint(0)));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_net_Packets$KickReason_java_lang_String_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$KickReason:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$KickReason(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(30);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(31);
	((mindustry_net_Packets$KickReason *) NULL_CHECK((frame[0].o)))->F_quiet = (frame[3].i);
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Packets$KickReason_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$KickReason:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_mindustry_net_Packets$KickReason_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Packets$KickReason_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"server.kicked.\u0001"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Packets$KickReason_extraText_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$KickReason:extraText", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(40);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_bundle;
	sp[1].o = (jobject)((func_mindustry_net_Packets$KickReason_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_net_Packets$KickReason_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"server.kicked.\u0001.text"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_I18NBundle_getOrNull_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_net_Packets$KickReason_$values_R_Array1_mindustry_net_Packets$KickReason(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$KickReason:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$KickReason(ctx);
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_net_Packets$KickReason, (16));
	jint temp0 = jint(0);
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_kick;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_clientOutdated;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_serverOutdated;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_banned;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_gameover;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_recentKick;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_nameInUse;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_idInUse;
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_nameEmpty;
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_customClient;
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_serverClose;
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_vote;
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	jint temp12 = 12;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_typeMismatch;
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = 13;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_whitelist;
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = 14;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_playerLimit;
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = 15;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[1].o = (jobject)SF_mindustry_net_Packets$KickReason_serverRestarting;
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_net_Packets$KickReason(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Packets$KickReason:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Packets$KickReason(ctx);
	{
	LINE_NUMBER(18);
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"kick"_j))), (jint(0)));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_kick = sp[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"clientOutdated"_j))), (jint(1)));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_clientOutdated = sp[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"serverOutdated"_j))), (jint(2)));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_serverOutdated = sp[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"banned"_j))), (jint(3)));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_banned = sp[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int_boolean(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"gameover"_j))), (jint(4)), (jint(1)));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_gameover = sp[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"recentKick"_j))), (jint(5)));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_recentKick = sp[0].o;
	LINE_NUMBER(19);
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nameInUse"_j))), (6));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_nameInUse = sp[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"idInUse"_j))), (7));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_idInUse = sp[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"nameEmpty"_j))), (8));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_nameEmpty = sp[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"customClient"_j))), (9));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_customClient = sp[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"serverClose"_j))), (10));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_serverClose = sp[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vote"_j))), (11));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_vote = sp[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"typeMismatch"_j))), (12));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_typeMismatch = sp[0].o;
	LINE_NUMBER(20);
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"whitelist"_j))), (13));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_whitelist = sp[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"playerLimit"_j))), (14));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_playerLimit = sp[0].o;
	clinit_mindustry_net_Packets$KickReason(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_net_Packets$KickReason);
	init_mindustry_net_Packets$KickReason_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"serverRestarting"_j))), (15));
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_serverRestarting = sp[0].o;
	LINE_NUMBER(17);
	sp[0].o = (jobject)SM_mindustry_net_Packets$KickReason_$values_R_Array1_mindustry_net_Packets$KickReason(ctx);
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_$VALUES = sp[0].o;
	LINE_NUMBER(22);
	sp[0].o = (jobject)SM_mindustry_net_Packets$KickReason_values_R_Array1_mindustry_net_Packets$KickReason(ctx);
	clinit_mindustry_net_Packets$KickReason(ctx);
	SF_mindustry_net_Packets$KickReason_all = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Packets$KickReason[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_net_Packets$KickReason_toString_R_java_lang_String,
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
	(void *) M_mindustry_net_Packets$KickReason_extraText_R_java_lang_String,
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
	{ "extraText", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "kick", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_kick, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "clientOutdated", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_clientOutdated, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "serverOutdated", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_serverOutdated, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "banned", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_banned, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "gameover", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_gameover, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "recentKick", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_recentKick, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "nameInUse", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_nameInUse, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "idInUse", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_idInUse, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "nameEmpty", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_nameEmpty, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "customClient", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_customClient, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "serverClose", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_serverClose, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "vote", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_vote, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "typeMismatch", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_typeMismatch, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "whitelist", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_whitelist, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "playerLimit", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_playerLimit, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "serverRestarting", &class_mindustry_net_Packets$KickReason, (intptr_t) &SF_mindustry_net_Packets$KickReason_serverRestarting, "Lmindustry/net/Packets$KickReason;", 16409 },
	{ "all", getArrayClass(&class_mindustry_net_Packets$KickReason, 1), (intptr_t) &SF_mindustry_net_Packets$KickReason_all, "[Lmindustry/net/Packets$KickReason;", 25 },
	{ "quiet", &class_boolean, offsetof(mindustry_net_Packets$KickReason, F_quiet), "Z", 17 },
	{ "$VALUES", getArrayClass(&class_mindustry_net_Packets$KickReason, 1), (intptr_t) &SF_mindustry_net_Packets$KickReason_$VALUES, "[Lmindustry/net/Packets$KickReason;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_mindustry_net_Packets$KickReason_values_R_Array1_mindustry_net_Packets$KickReason, 0, "()[Lmindustry/net/Packets$KickReason;", 9 },
	{ "valueOf", (intptr_t) SM_mindustry_net_Packets$KickReason_valueOf_java_lang_String_R_mindustry_net_Packets$KickReason, 0, "(Ljava/lang/String;)Lmindustry/net/Packets$KickReason;", 9 },
	{ "<init>", (intptr_t) init_mindustry_net_Packets$KickReason_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "<init>", (intptr_t) init_mindustry_net_Packets$KickReason_java_lang_String_int_boolean, 0, "(Ljava/lang/String;IZ)V", 2 },
	{ "toString", (intptr_t) M_mindustry_net_Packets$KickReason_toString_R_java_lang_String, VTABLE_mindustry_net_Packets$KickReason_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "extraText", (intptr_t) M_mindustry_net_Packets$KickReason_extraText_R_java_lang_String, VTABLE_mindustry_net_Packets$KickReason_extraText_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "$values", (intptr_t) SM_mindustry_net_Packets$KickReason_$values_R_Array1_mindustry_net_Packets$KickReason, 0, "()[Lmindustry/net/Packets$KickReason;", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_net_Packets$KickReason, 0, "()V", 8 },
};

Class class_mindustry_net_Packets$KickReason{
		.nativeName = (intptr_t) "mindustry/net/Packets$KickReason",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(mindustry_net_Packets$KickReason),
		.classVtable = (intptr_t) vtable_mindustry_net_Packets$KickReason,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Packets$KickReason,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Packets$KickReason,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Packets,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 19,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Packets$KickReason = registerClass(&class_mindustry_net_Packets$KickReason);

}

