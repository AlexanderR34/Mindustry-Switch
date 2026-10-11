#include "mindustry/mod/Mods_1RegionEntry.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/mod/Mods.h"
#include "mindustry/mod/Mods_1RegionEntry.h"

extern "C" {


void mark_mindustry_mod_Mods$1RegionEntry(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_Mods$1RegionEntry *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
	if (self->F_splits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_splits)->clazz)->markFunction)((jobject) self->F_splits, mark, depth + 1);
	if (self->F_pads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pads)->clazz)->markFunction)((jobject) self->F_pads, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_mod_Mods$1RegionEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_Mods$1RegionEntry_mindustry_mod_Mods_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$1RegionEntry:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mods$1RegionEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(211);
	((mindustry_mod_Mods$1RegionEntry *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(212);
	((mindustry_mod_Mods$1RegionEntry *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[2].o);
	LINE_NUMBER(213);
	((mindustry_mod_Mods$1RegionEntry *) NULL_CHECK((frame[0].o)))->F_region = (jref) (frame[3].o);
	LINE_NUMBER(214);
	((mindustry_mod_Mods$1RegionEntry *) NULL_CHECK((frame[0].o)))->F_splits = (jref) (frame[4].o);
	LINE_NUMBER(215);
	((mindustry_mod_Mods$1RegionEntry *) NULL_CHECK((frame[0].o)))->F_pads = (jref) (frame[5].o);
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_mod_Mods$1RegionEntry[] {
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
	{ "name", &class_java_lang_String, offsetof(mindustry_mod_Mods$1RegionEntry, F_name), "Ljava/lang/String;", 0 },
	{ "region", &class_arc_graphics_g2d_PixmapRegion, offsetof(mindustry_mod_Mods$1RegionEntry, F_region), "Larc/graphics/g2d/PixmapRegion;", 0 },
	{ "splits", getArrayClass(&class_int, 1), offsetof(mindustry_mod_Mods$1RegionEntry, F_splits), "[I", 0 },
	{ "pads", getArrayClass(&class_int, 1), offsetof(mindustry_mod_Mods$1RegionEntry, F_pads), "[I", 0 },
	{ "this$0", &class_mindustry_mod_Mods, offsetof(mindustry_mod_Mods$1RegionEntry, F_this$0), "Lmindustry/mod/Mods;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_Mods$1RegionEntry_mindustry_mod_Mods_java_lang_String_arc_graphics_g2d_PixmapRegion_Array1_int_Array1_int, 0, "(Lmindustry/mod/Mods;Ljava/lang/String;Larc/graphics/g2d/PixmapRegion;[I[I)V", 0 },
};

Class class_mindustry_mod_Mods$1RegionEntry{
		.nativeName = (intptr_t) "mindustry/mod/Mods$1RegionEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_Mods$1RegionEntry),
		.classVtable = (intptr_t) vtable_mindustry_mod_Mods$1RegionEntry,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_Mods$1RegionEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_mod_Mods$1RegionEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_Mods$1RegionEntry = registerClass(&class_mindustry_mod_Mods$1RegionEntry);

}

