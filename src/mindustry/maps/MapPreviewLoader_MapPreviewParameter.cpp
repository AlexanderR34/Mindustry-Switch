#include "mindustry/maps/MapPreviewLoader_MapPreviewParameter.h"
#include "mindustry/maps/Map.h"
#include "java/lang/Object.h"
#include "arc/assets/loaders/TextureLoader_TextureParameter.h"
#include "mindustry/maps/MapPreviewLoader.h"
#include "mindustry/maps/MapPreviewLoader_MapPreviewParameter.h"

extern "C" {


void mark_mindustry_maps_MapPreviewLoader$MapPreviewParameter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_loaders_TextureLoader$TextureParameter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_maps_MapPreviewLoader$MapPreviewParameter *) object;
	if (self->F_map)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_map)->clazz)->markFunction)((jobject) self->F_map, mark, depth + 1);
}

void clinit_mindustry_maps_MapPreviewLoader$MapPreviewParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_TextureLoader$TextureParameter(ctx);
}

void init_mindustry_maps_MapPreviewLoader$MapPreviewParameter_mindustry_maps_Map(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader$MapPreviewParameter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_MapPreviewLoader$MapPreviewParameter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(58);
	init_arc_assets_loaders_TextureLoader$TextureParameter(ctx, (frame[0].o));
	LINE_NUMBER(59);
	((mindustry_maps_MapPreviewLoader$MapPreviewParameter *) NULL_CHECK((frame[0].o)))->F_map = (jref) (frame[1].o);
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_MapPreviewLoader$MapPreviewParameter[] {
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
	{ "map", &class_mindustry_maps_Map, offsetof(mindustry_maps_MapPreviewLoader$MapPreviewParameter, F_map), "Lmindustry/maps/Map;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_MapPreviewLoader$MapPreviewParameter_mindustry_maps_Map, 0, "(Lmindustry/maps/Map;)V", 1 },
};

Class class_mindustry_maps_MapPreviewLoader$MapPreviewParameter{
		.nativeName = (intptr_t) "mindustry/maps/MapPreviewLoader$MapPreviewParameter",
		.parentClass = (intptr_t) &class_arc_assets_loaders_TextureLoader$TextureParameter,
		.size = sizeof(mindustry_maps_MapPreviewLoader$MapPreviewParameter),
		.classVtable = (intptr_t) vtable_mindustry_maps_MapPreviewLoader$MapPreviewParameter,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_MapPreviewLoader$MapPreviewParameter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_MapPreviewLoader$MapPreviewParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_maps_MapPreviewLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_MapPreviewLoader$MapPreviewParameter = registerClass(&class_mindustry_maps_MapPreviewLoader$MapPreviewParameter);

}

