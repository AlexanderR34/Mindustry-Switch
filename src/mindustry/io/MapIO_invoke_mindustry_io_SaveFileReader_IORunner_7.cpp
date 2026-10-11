#include "mindustry/io/MapIO_invoke_mindustry_io_SaveFileReader_IORunner_7.h"
#include "mindustry/maps/Map.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/world/CachedTile.h"
#include "mindustry/io/SaveFileReader_IORunner.h"
#include "mindustry/io/SaveVersion.h"
#include "java/io/DataInput.h"
#include "mindustry/io/MapIO.h"
#include "mindustry/io/MapIO_invoke_mindustry_io_SaveFileReader_IORunner_7.h"

extern "C" {


void mark_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
	if (self->F_field3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field3)->clazz)->markFunction)((jobject) self->F_field3, mark, depth + 1);
	if (self->F_field4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field4)->clazz)->markFunction)((jobject) self->F_field4, mark, depth + 1);
	if (self->F_field5)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field5)->clazz)->markFunction)((jobject) self->F_field5, mark, depth + 1);
	if (self->F_field7)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field7)->clazz)->markFunction)((jobject) self->F_field7, mark, depth + 1);
}

void clinit_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7_accept_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "mindustry/io/MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7:accept", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7 *) self;
	SM_mindustry_io_MapIO_lambda$generatePreview$0_mindustry_io_SaveVersion_mindustry_world_CachedTile_arc_graphics_Pixmap_arc_graphics_Pixmap_mindustry_maps_Map_Array1_short_int_Array1_boolean_java_io_DataInput(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2, (jobject) proxy->F_field3, (jobject) proxy->F_field4, (jobject) proxy->F_field5, proxy->F_field6, (jobject) proxy->F_field7, param0);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7[] {
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
	(void *) M_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7_accept_java_lang_Object,
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
	{ "accept", "(Ljava/lang/Object;)V" },
};

static jclass interfaces[] { &class_mindustry_io_SaveFileReader$IORunner, };

static FieldMetadata fields[] {
	{ "field0", &class_mindustry_io_SaveVersion, offsetof(mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7, F_field0), "Lmindustry/io/SaveVersion;", 0 },
	{ "field1", &class_mindustry_world_CachedTile, offsetof(mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7, F_field1), "Lmindustry/world/CachedTile;", 0 },
	{ "field2", &class_arc_graphics_Pixmap, offsetof(mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7, F_field2), "Larc/graphics/Pixmap;", 0 },
	{ "field3", &class_arc_graphics_Pixmap, offsetof(mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7, F_field3), "Larc/graphics/Pixmap;", 0 },
	{ "field4", &class_mindustry_maps_Map, offsetof(mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7, F_field4), "Lmindustry/maps/Map;", 0 },
	{ "field5", getArrayClass(&class_short, 1), offsetof(mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7, F_field5), "[S", 0 },
	{ "field6", &class_int, offsetof(mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7, F_field6), "I", 0 },
	{ "field7", getArrayClass(&class_boolean, 1), offsetof(mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7, F_field7), "[Z", 0 },
};

static MethodMetadata methods[] {
	{ "accept", (intptr_t) M_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7_accept_java_lang_Object, VTABLE_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7_accept_java_lang_Object, "(Ljava/lang/Object;)V", 0 },
};

Class class_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7{
		.nativeName = (intptr_t) "mindustry/io/MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7),
		.classVtable = (intptr_t) vtable_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7,
		.staticInitializer = (intptr_t) clinit_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7 = registerClass(&class_mindustry_io_MapIO_invoke_mindustry_io_SaveFileReader$IORunner_7);

}

