#include "mindustry/gen/Entityc.h"
#include "arc/util/io/Reads.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/io/Writes.h"

extern "C" {


void mark_mindustry_gen_Entityc(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_gen_Entityc *) object;
}

void clinit_mindustry_gen_Entityc(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void *vtable_mindustry_gen_Entityc[] {
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
};

static MethodMetadata methods[] {
	{ "self", 0, INDEX_mindustry_gen_Entityc_self_R_mindustry_gen_Entityc, "()Lmindustry/gen/Entityc;", 1025 },
	{ "as", 0, INDEX_mindustry_gen_Entityc_as_R_java_lang_Object, "()Ljava/lang/Object;", 1025 },
	{ "isAdded", 0, INDEX_mindustry_gen_Entityc_isAdded_R_boolean, "()Z", 1025 },
	{ "isLocal", 0, INDEX_mindustry_gen_Entityc_isLocal_R_boolean, "()Z", 1025 },
	{ "isRemote", 0, INDEX_mindustry_gen_Entityc_isRemote_R_boolean, "()Z", 1025 },
	{ "serialize", 0, INDEX_mindustry_gen_Entityc_serialize_R_boolean, "()Z", 1025 },
	{ "classId", 0, INDEX_mindustry_gen_Entityc_classId_R_int, "()I", 1025 },
	{ "id", 0, INDEX_mindustry_gen_Entityc_id_R_int, "()I", 1025 },
	{ "add", 0, INDEX_mindustry_gen_Entityc_add, "()V", 1025 },
	{ "afterRead", 0, INDEX_mindustry_gen_Entityc_afterRead, "()V", 1025 },
	{ "afterReadAll", 0, INDEX_mindustry_gen_Entityc_afterReadAll, "()V", 1025 },
	{ "beforeWrite", 0, INDEX_mindustry_gen_Entityc_beforeWrite, "()V", 1025 },
	{ "id", 0, INDEX_mindustry_gen_Entityc_id_int, "(I)V", 1025 },
	{ "read", 0, INDEX_mindustry_gen_Entityc_read_arc_util_io_Reads, "(Larc/util/io/Reads;)V", 1025 },
	{ "remove", 0, INDEX_mindustry_gen_Entityc_remove, "()V", 1025 },
	{ "update", 0, INDEX_mindustry_gen_Entityc_update, "()V", 1025 },
	{ "write", 0, INDEX_mindustry_gen_Entityc_write_arc_util_io_Writes, "(Larc/util/io/Writes;)V", 1025 },
};

Class class_mindustry_gen_Entityc{
		.nativeName = (intptr_t) "mindustry/gen/Entityc",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Entityc),
		.classVtable = (intptr_t) vtable_mindustry_gen_Entityc,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Entityc,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_Entityc,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 17,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Entityc = registerClass(&class_mindustry_gen_Entityc);

}
