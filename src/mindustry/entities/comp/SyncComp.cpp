#include "mindustry/entities/comp/SyncComp.h"
#include "arc/util/io/Reads.h"
#include "mindustry/net/Net.h"
#include "java/lang/Object.h"
#include "mindustry/entities/comp/SyncComp.h"
#include "java/nio/FloatBuffer.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/core/NetClient.h"
#include "mindustry/game/Team.h"
#include "mindustry/Vars.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_entities_comp_SyncComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_comp_SyncComp *) object;
}

void clinit_mindustry_entities_comp_SyncComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_comp_SyncComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SyncComp:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_comp_SyncComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SyncComp_snapSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SyncComp:snapSync", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(16);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SyncComp_snapInterpolation(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SyncComp:snapInterpolation", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(17);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SyncComp_readSync_arc_util_io_Reads(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SyncComp:readSync", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(18);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SyncComp_writeSync_arc_util_io_Writes(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SyncComp:writeSync", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(19);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SyncComp_readSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SyncComp:readSyncManual", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(20);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SyncComp_writeSyncManual_java_nio_FloatBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SyncComp:writeSyncManual", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SyncComp_afterSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SyncComp:afterSync", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(22);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SyncComp_interpolate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SyncComp:interpolate", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(23);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_entities_comp_SyncComp_isSyncHidden_mindustry_game_Team_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SyncComp:isSyncHidden", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SyncComp_handleSyncHidden(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SyncComp:handleSyncHidden", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SyncComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SyncComp:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_SyncComp_isLocal_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SyncComp_isLocal_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
label_1:;
	{
	jint temp0 = (jint)((func_mindustry_entities_comp_SyncComp_isRemote_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SyncComp_isRemote_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(39);
	((func_mindustry_entities_comp_SyncComp_interpolate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SyncComp_interpolate])(ctx, (frame[0].o));
	}
label_3:;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_comp_SyncComp_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/comp/SyncComp:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_net;
	jint temp0 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(47);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_netClient;
	jint temp0 = (jint)((func_mindustry_entities_comp_SyncComp_id_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_entities_comp_SyncComp_id_R_int])(ctx, (frame[0].o));
	((func_mindustry_core_NetClient_addRemovedEntity_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_NetClient_addRemovedEntity_int])(ctx, sp[0].o, temp0);
	}
label_1:;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_comp_SyncComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_SyncComp_remove,
	(void *) M_mindustry_entities_comp_SyncComp_update,
	(void *) nullptr,
	(void *) M_mindustry_entities_comp_SyncComp_snapSync,
	(void *) M_mindustry_entities_comp_SyncComp_snapInterpolation,
	(void *) M_mindustry_entities_comp_SyncComp_readSync_arc_util_io_Reads,
	(void *) M_mindustry_entities_comp_SyncComp_writeSync_arc_util_io_Writes,
	(void *) M_mindustry_entities_comp_SyncComp_readSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_entities_comp_SyncComp_writeSyncManual_java_nio_FloatBuffer,
	(void *) M_mindustry_entities_comp_SyncComp_afterSync,
	(void *) M_mindustry_entities_comp_SyncComp_interpolate,
	(void *) M_mindustry_entities_comp_SyncComp_isSyncHidden_mindustry_game_Team_R_boolean,
	(void *) M_mindustry_entities_comp_SyncComp_handleSyncHidden,
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
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "snapSync", "()V" },
	{ "snapInterpolation", "()V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "afterSync", "()V" },
	{ "interpolate", "()V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "handleSyncHidden", "()V" },
};

static jclass interfaces[] { &class_mindustry_gen_Entityc, };

static FieldMetadata fields[] {
	{ "lastUpdated", &class_long, offsetof(mindustry_entities_comp_SyncComp, F_lastUpdated), "J", 128 },
	{ "updateSpacing", &class_long, offsetof(mindustry_entities_comp_SyncComp, F_updateSpacing), "J", 128 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_comp_SyncComp, 0, "()V", 0 },
	{ "snapSync", (intptr_t) M_mindustry_entities_comp_SyncComp_snapSync, VTABLE_mindustry_entities_comp_SyncComp_snapSync, "()V", 0 },
	{ "snapInterpolation", (intptr_t) M_mindustry_entities_comp_SyncComp_snapInterpolation, VTABLE_mindustry_entities_comp_SyncComp_snapInterpolation, "()V", 0 },
	{ "readSync", (intptr_t) M_mindustry_entities_comp_SyncComp_readSync_arc_util_io_Reads, VTABLE_mindustry_entities_comp_SyncComp_readSync_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 0 },
	{ "writeSync", (intptr_t) M_mindustry_entities_comp_SyncComp_writeSync_arc_util_io_Writes, VTABLE_mindustry_entities_comp_SyncComp_writeSync_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 0 },
	{ "readSyncManual", (intptr_t) M_mindustry_entities_comp_SyncComp_readSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_entities_comp_SyncComp_readSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 0 },
	{ "writeSyncManual", (intptr_t) M_mindustry_entities_comp_SyncComp_writeSyncManual_java_nio_FloatBuffer, VTABLE_mindustry_entities_comp_SyncComp_writeSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 0 },
	{ "afterSync", (intptr_t) M_mindustry_entities_comp_SyncComp_afterSync, VTABLE_mindustry_entities_comp_SyncComp_afterSync, "()V", 0 },
	{ "interpolate", (intptr_t) M_mindustry_entities_comp_SyncComp_interpolate, VTABLE_mindustry_entities_comp_SyncComp_interpolate, "()V", 0 },
	{ "isSyncHidden", (intptr_t) M_mindustry_entities_comp_SyncComp_isSyncHidden_mindustry_game_Team_R_boolean, VTABLE_mindustry_entities_comp_SyncComp_isSyncHidden_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 0 },
	{ "handleSyncHidden", (intptr_t) M_mindustry_entities_comp_SyncComp_handleSyncHidden, VTABLE_mindustry_entities_comp_SyncComp_handleSyncHidden, "()V", 0 },
	{ "update", (intptr_t) M_mindustry_entities_comp_SyncComp_update, VTABLE_mindustry_entities_comp_SyncComp_update, "()V", 1 },
	{ "remove", (intptr_t) M_mindustry_entities_comp_SyncComp_remove, VTABLE_mindustry_entities_comp_SyncComp_remove, "()V", 1 },
};

Class class_mindustry_entities_comp_SyncComp{
		.nativeName = (intptr_t) "mindustry/entities/comp/SyncComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_comp_SyncComp),
		.classVtable = (intptr_t) vtable_mindustry_entities_comp_SyncComp,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_comp_SyncComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_comp_SyncComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 38,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_comp_SyncComp = registerClass(&class_mindustry_entities_comp_SyncComp);

}
