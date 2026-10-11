#include "mindustry/game/Saves_1Remap.h"
#include "mindustry/game/Saves_1Remap.h"
#include "java/lang/Object.h"
#include "mindustry/game/Saves.h"
#include "mindustry/type/Sector.h"
#include "mindustry/game/Saves_SaveSlot.h"
#include "arc/files/Fi.h"
#include "mindustry/game/SectorInfo.h"

extern "C" {


void mark_mindustry_game_Saves$1Remap(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Saves$1Remap *) object;
	if (self->F_sourceFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sourceFile)->clazz)->markFunction)((jobject) self->F_sourceFile, mark, depth + 1);
	if (self->F_slot)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_slot)->clazz)->markFunction)((jobject) self->F_slot, mark, depth + 1);
	if (self->F_sourceSector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sourceSector)->clazz)->markFunction)((jobject) self->F_sourceSector, mark, depth + 1);
	if (self->F_sourceInfo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sourceInfo)->clazz)->markFunction)((jobject) self->F_sourceInfo, mark, depth + 1);
	if (self->F_destFile)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_destFile)->clazz)->markFunction)((jobject) self->F_destFile, mark, depth + 1);
	if (self->F_destSector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_destSector)->clazz)->markFunction)((jobject) self->F_destSector, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_game_Saves$1Remap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_Saves$1Remap_mindustry_game_Saves_mindustry_game_Saves$SaveSlot_arc_files_Fi_mindustry_type_Sector_mindustry_game_SectorInfo_arc_files_Fi_mindustry_type_Sector(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Saves$1Remap:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Saves$1Remap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(106);
	((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(107);
	((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[0].o)))->F_slot = (jref) (frame[2].o);
	LINE_NUMBER(108);
	((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[0].o)))->F_sourceFile = (jref) (frame[3].o);
	LINE_NUMBER(109);
	((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[0].o)))->F_sourceSector = (jref) (frame[4].o);
	LINE_NUMBER(110);
	((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[0].o)))->F_sourceInfo = (jref) (frame[5].o);
	LINE_NUMBER(111);
	((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[0].o)))->F_destFile = (jref) (frame[6].o);
	LINE_NUMBER(112);
	((mindustry_game_Saves$1Remap *) NULL_CHECK((frame[0].o)))->F_destSector = (jref) (frame[7].o);
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Saves$1Remap[] {
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
};

static FieldMetadata fields[] {
	{ "sourceFile", &class_arc_files_Fi, offsetof(mindustry_game_Saves$1Remap, F_sourceFile), "Larc/files/Fi;", 0 },
	{ "slot", &class_mindustry_game_Saves$SaveSlot, offsetof(mindustry_game_Saves$1Remap, F_slot), "Lmindustry/game/Saves$SaveSlot;", 0 },
	{ "sourceSector", &class_mindustry_type_Sector, offsetof(mindustry_game_Saves$1Remap, F_sourceSector), "Lmindustry/type/Sector;", 0 },
	{ "sourceInfo", &class_mindustry_game_SectorInfo, offsetof(mindustry_game_Saves$1Remap, F_sourceInfo), "Lmindustry/game/SectorInfo;", 0 },
	{ "destFile", &class_arc_files_Fi, offsetof(mindustry_game_Saves$1Remap, F_destFile), "Larc/files/Fi;", 0 },
	{ "destSector", &class_mindustry_type_Sector, offsetof(mindustry_game_Saves$1Remap, F_destSector), "Lmindustry/type/Sector;", 0 },
	{ "this$0", &class_mindustry_game_Saves, offsetof(mindustry_game_Saves$1Remap, F_this$0), "Lmindustry/game/Saves;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Saves$1Remap_mindustry_game_Saves_mindustry_game_Saves$SaveSlot_arc_files_Fi_mindustry_type_Sector_mindustry_game_SectorInfo_arc_files_Fi_mindustry_type_Sector, 0, "(Lmindustry/game/Saves;Lmindustry/game/Saves$SaveSlot;Larc/files/Fi;Lmindustry/type/Sector;Lmindustry/game/SectorInfo;Larc/files/Fi;Lmindustry/type/Sector;)V", 0 },
};

Class class_mindustry_game_Saves$1Remap{
		.nativeName = (intptr_t) "mindustry/game/Saves$1Remap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Saves$1Remap),
		.classVtable = (intptr_t) vtable_mindustry_game_Saves$1Remap,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Saves$1Remap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Saves$1Remap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Saves$1Remap = registerClass(&class_mindustry_game_Saves$1Remap);

}

