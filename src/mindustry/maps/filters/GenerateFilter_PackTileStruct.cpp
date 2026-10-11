#include "mindustry/maps/filters/GenerateFilter_PackTileStruct.h"
#include "java/lang/Object.h"
#include "mindustry/maps/filters/GenerateFilter.h"
#include "mindustry/maps/filters/GenerateFilter_PackTileStruct.h"

extern "C" {


void mark_mindustry_maps_filters_GenerateFilter$PackTileStruct(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_maps_filters_GenerateFilter$PackTileStruct *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_maps_filters_GenerateFilter$PackTileStruct(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_maps_filters_GenerateFilter$PackTileStruct_mindustry_maps_filters_GenerateFilter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/filters/GenerateFilter$PackTileStruct:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_filters_GenerateFilter$PackTileStruct(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(184);
	((mindustry_maps_filters_GenerateFilter$PackTileStruct *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_filters_GenerateFilter$PackTileStruct[] {
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
	{ "block", &class_short, offsetof(mindustry_maps_filters_GenerateFilter$PackTileStruct, F_block), "S", 0 },
	{ "floor", &class_short, offsetof(mindustry_maps_filters_GenerateFilter$PackTileStruct, F_floor), "S", 0 },
	{ "overlay", &class_short, offsetof(mindustry_maps_filters_GenerateFilter$PackTileStruct, F_overlay), "S", 0 },
	{ "this$0", &class_mindustry_maps_filters_GenerateFilter, offsetof(mindustry_maps_filters_GenerateFilter$PackTileStruct, F_this$0), "Lmindustry/maps/filters/GenerateFilter;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_filters_GenerateFilter$PackTileStruct_mindustry_maps_filters_GenerateFilter, 0, "(Lmindustry/maps/filters/GenerateFilter;)V", 0 },
};

Class class_mindustry_maps_filters_GenerateFilter$PackTileStruct{
		.nativeName = (intptr_t) "mindustry/maps/filters/GenerateFilter$PackTileStruct",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_maps_filters_GenerateFilter$PackTileStruct),
		.classVtable = (intptr_t) vtable_mindustry_maps_filters_GenerateFilter$PackTileStruct,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_filters_GenerateFilter$PackTileStruct,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_filters_GenerateFilter$PackTileStruct,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_maps_filters_GenerateFilter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_filters_GenerateFilter$PackTileStruct = registerClass(&class_mindustry_maps_filters_GenerateFilter$PackTileStruct);

}

