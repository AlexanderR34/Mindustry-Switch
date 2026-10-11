#include "mindustry/net/Administration_PlayerInfo.h"
#include "mindustry/net/Administration_PlayerInfo.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "arc/util/serialization/AllowSerialization.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "mindustry/net/Administration.h"
#include "arc/util/Ratekeeper.h"
#include "arc/util/Interval.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_mindustry_net_Administration$PlayerInfo(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_net_Administration$PlayerInfo *) object;
	if (self->F_id)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_id)->clazz)->markFunction)((jobject) self->F_id, mark, depth + 1);
	if (self->F_lastName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastName)->clazz)->markFunction)((jobject) self->F_lastName, mark, depth + 1);
	if (self->F_lastIP)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastIP)->clazz)->markFunction)((jobject) self->F_lastIP, mark, depth + 1);
	if (self->F_ips)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ips)->clazz)->markFunction)((jobject) self->F_ips, mark, depth + 1);
	if (self->F_names)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_names)->clazz)->markFunction)((jobject) self->F_names, mark, depth + 1);
	if (self->F_adminUsid)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_adminUsid)->clazz)->markFunction)((jobject) self->F_adminUsid, mark, depth + 1);
	if (self->F_lastSentMessage)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastSentMessage)->clazz)->markFunction)((jobject) self->F_lastSentMessage, mark, depth + 1);
	if (self->F_rate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rate)->clazz)->markFunction)((jobject) self->F_rate, mark, depth + 1);
	if (self->F_messageTimer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_messageTimer)->clazz)->markFunction)((jobject) self->F_messageTimer, mark, depth + 1);
}

void clinit_mindustry_net_Administration$PlayerInfo(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_net_Administration$PlayerInfo_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$PlayerInfo:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$PlayerInfo(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(655);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(640);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[0].o)))->F_lastName = (jref) (((jobject) createStringLiteral(ctx, u8"<unknown>"_j)));
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[0].o)))->F_lastIP = (jref) (((jobject) createStringLiteral(ctx, u8"<unknown>"_j)));
	LINE_NUMBER(641);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_ips = (jref) sp[1].o;
	LINE_NUMBER(642);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_names = (jref) sp[1].o;
	LINE_NUMBER(652);
	sp[0].o = frame[0].o;
	clinit_arc_util_Ratekeeper(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Ratekeeper);
	init_arc_util_Ratekeeper(ctx, sp[1].o);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_rate = (jref) sp[1].o;
	LINE_NUMBER(653);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval(ctx, sp[1].o);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_messageTimer = (jref) sp[1].o;
	LINE_NUMBER(656);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[0].o)))->F_id = (jref) (frame[1].o);
	LINE_NUMBER(657);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_net_Administration$PlayerInfo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$PlayerInfo:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_net_Administration$PlayerInfo(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(659);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(640);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[0].o)))->F_lastName = (jref) (((jobject) createStringLiteral(ctx, u8"<unknown>"_j)));
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[0].o)))->F_lastIP = (jref) (((jobject) createStringLiteral(ctx, u8"<unknown>"_j)));
	LINE_NUMBER(641);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_ips = (jref) sp[1].o;
	LINE_NUMBER(642);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_names = (jref) sp[1].o;
	LINE_NUMBER(652);
	sp[0].o = frame[0].o;
	clinit_arc_util_Ratekeeper(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Ratekeeper);
	init_arc_util_Ratekeeper(ctx, sp[1].o);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_rate = (jref) sp[1].o;
	LINE_NUMBER(653);
	sp[0].o = frame[0].o;
	clinit_arc_util_Interval(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_Interval);
	init_arc_util_Interval(ctx, sp[1].o);
	((mindustry_net_Administration$PlayerInfo *) NULL_CHECK(sp[0].o))->F_messageTimer = (jref) sp[1].o;
	LINE_NUMBER(660);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_net_Administration$PlayerInfo_plainLastName_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/net/Administration$PlayerInfo:plainLastName", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((mindustry_net_Administration$PlayerInfo *) NULL_CHECK((frame[0].o)))->F_lastName;
	sp[0].o = (jobject)SM_arc_util_Strings_stripColors_java_lang_CharSequence_R_java_lang_String(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_net_Administration$PlayerInfo[] {
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
	(void *) M_mindustry_net_Administration$PlayerInfo_plainLastName_R_java_lang_String,
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
	{ "plainLastName", "()Ljava/lang/String;" },
};

static jclass interfaces[] { &class_arc_util_serialization_AllowSerialization, };

static FieldMetadata fields[] {
	{ "id", &class_java_lang_String, offsetof(mindustry_net_Administration$PlayerInfo, F_id), "Ljava/lang/String;", 1 },
	{ "lastName", &class_java_lang_String, offsetof(mindustry_net_Administration$PlayerInfo, F_lastName), "Ljava/lang/String;", 1 },
	{ "lastIP", &class_java_lang_String, offsetof(mindustry_net_Administration$PlayerInfo, F_lastIP), "Ljava/lang/String;", 1 },
	{ "ips", &class_arc_struct_Seq, offsetof(mindustry_net_Administration$PlayerInfo, F_ips), "Larc/struct/Seq;", 1 },
	{ "names", &class_arc_struct_Seq, offsetof(mindustry_net_Administration$PlayerInfo, F_names), "Larc/struct/Seq;", 1 },
	{ "adminUsid", &class_java_lang_String, offsetof(mindustry_net_Administration$PlayerInfo, F_adminUsid), "Ljava/lang/String;", 1 },
	{ "timesKicked", &class_int, offsetof(mindustry_net_Administration$PlayerInfo, F_timesKicked), "I", 1 },
	{ "timesJoined", &class_int, offsetof(mindustry_net_Administration$PlayerInfo, F_timesJoined), "I", 1 },
	{ "banned", &class_boolean, offsetof(mindustry_net_Administration$PlayerInfo, F_banned), "Z", 1 },
	{ "admin", &class_boolean, offsetof(mindustry_net_Administration$PlayerInfo, F_admin), "Z", 1 },
	{ "lastKicked", &class_long, offsetof(mindustry_net_Administration$PlayerInfo, F_lastKicked), "J", 1 },
	{ "lastMessageTime", &class_long, offsetof(mindustry_net_Administration$PlayerInfo, F_lastMessageTime), "J", 129 },
	{ "lastSyncTime", &class_long, offsetof(mindustry_net_Administration$PlayerInfo, F_lastSyncTime), "J", 129 },
	{ "lastSentMessage", &class_java_lang_String, offsetof(mindustry_net_Administration$PlayerInfo, F_lastSentMessage), "Ljava/lang/String;", 129 },
	{ "messageInfractions", &class_int, offsetof(mindustry_net_Administration$PlayerInfo, F_messageInfractions), "I", 129 },
	{ "rate", &class_arc_util_Ratekeeper, offsetof(mindustry_net_Administration$PlayerInfo, F_rate), "Larc/util/Ratekeeper;", 129 },
	{ "messageTimer", &class_arc_util_Interval, offsetof(mindustry_net_Administration$PlayerInfo, F_messageTimer), "Larc/util/Interval;", 129 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_net_Administration$PlayerInfo_java_lang_String, 0, "(Ljava/lang/String;)V", 0 },
	{ "<init>", (intptr_t) init_mindustry_net_Administration$PlayerInfo, 0, "()V", 1 },
	{ "plainLastName", (intptr_t) M_mindustry_net_Administration$PlayerInfo_plainLastName_R_java_lang_String, VTABLE_mindustry_net_Administration$PlayerInfo_plainLastName_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_net_Administration$PlayerInfo{
		.nativeName = (intptr_t) "mindustry/net/Administration$PlayerInfo",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_net_Administration$PlayerInfo),
		.classVtable = (intptr_t) vtable_mindustry_net_Administration$PlayerInfo,
		.staticInitializer = (intptr_t) clinit_mindustry_net_Administration$PlayerInfo,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_net_Administration$PlayerInfo,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_net_Administration,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_net_Administration$PlayerInfo = registerClass(&class_mindustry_net_Administration$PlayerInfo);

}

