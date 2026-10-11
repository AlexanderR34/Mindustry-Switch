#include "mindustry/gen/Syncc.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "java/nio/FloatBuffer.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/game/Team.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_gen_Syncc(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Syncc *) object;
}

void clinit_mindustry_gen_Syncc(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_mindustry_gen_Syncc[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
};

static jclass interfaces[] { &class_mindustry_gen_Entityc, };

static MethodMetadata methods[] {
	{ "isSyncHidden", 0, INDEX_mindustry_gen_Syncc_isSyncHidden_mindustry_game_Team_R_boolean, "(Lmindustry/game/Team;)Z", 1025 },
	{ "lastUpdated", 0, INDEX_mindustry_gen_Syncc_lastUpdated_R_long, "()J", 1025 },
	{ "updateSpacing", 0, INDEX_mindustry_gen_Syncc_updateSpacing_R_long, "()J", 1025 },
	{ "afterSync", 0, INDEX_mindustry_gen_Syncc_afterSync, "()V", 1025 },
	{ "handleSyncHidden", 0, INDEX_mindustry_gen_Syncc_handleSyncHidden, "()V", 1025 },
	{ "interpolate", 0, INDEX_mindustry_gen_Syncc_interpolate, "()V", 1025 },
	{ "lastUpdated", 0, INDEX_mindustry_gen_Syncc_lastUpdated_long, "(J)V", 1025 },
	{ "readSync", 0, INDEX_mindustry_gen_Syncc_readSync_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1025 },
	{ "readSyncManual", 0, INDEX_mindustry_gen_Syncc_readSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1025 },
	{ "remove", 0, INDEX_mindustry_gen_Syncc_remove, "()V", 1025 },
	{ "snapInterpolation", 0, INDEX_mindustry_gen_Syncc_snapInterpolation, "()V", 1025 },
	{ "snapSync", 0, INDEX_mindustry_gen_Syncc_snapSync, "()V", 1025 },
	{ "update", 0, INDEX_mindustry_gen_Syncc_update, "()V", 1025 },
	{ "updateSpacing", 0, INDEX_mindustry_gen_Syncc_updateSpacing_long, "(J)V", 1025 },
	{ "writeSync", 0, INDEX_mindustry_gen_Syncc_writeSync_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1025 },
	{ "writeSyncManual", 0, INDEX_mindustry_gen_Syncc_writeSyncManual_java_nio_FloatBuffer, "(Ljava/nio/FloatBuffer;)V", 1025 },
};

Class class_mindustry_gen_Syncc{
		.nativeName = (intptr_t) "mindustry/gen/Syncc",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Syncc),
		.classVtable = (intptr_t) vtable_mindustry_gen_Syncc,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Syncc,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_Syncc,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Syncc = registerClass(&class_mindustry_gen_Syncc);

}
