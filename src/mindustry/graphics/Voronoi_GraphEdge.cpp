#include "mindustry/graphics/Voronoi_GraphEdge.h"
#include "mindustry/graphics/Voronoi.h"
#include "java/lang/Object.h"

extern "C" {


void mark_mindustry_graphics_Voronoi$GraphEdge(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_Voronoi$GraphEdge *) object;
}

void clinit_mindustry_graphics_Voronoi$GraphEdge(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_Voronoi$GraphEdge(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi$GraphEdge:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Voronoi$GraphEdge(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(631);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Voronoi$GraphEdge[] {
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
	{ "x1", &class_float, offsetof(mindustry_graphics_Voronoi$GraphEdge, F_x1), "F", 1 },
	{ "y1", &class_float, offsetof(mindustry_graphics_Voronoi$GraphEdge, F_y1), "F", 1 },
	{ "x2", &class_float, offsetof(mindustry_graphics_Voronoi$GraphEdge, F_x2), "F", 1 },
	{ "y2", &class_float, offsetof(mindustry_graphics_Voronoi$GraphEdge, F_y2), "F", 1 },
	{ "site1", &class_int, offsetof(mindustry_graphics_Voronoi$GraphEdge, F_site1), "I", 1 },
	{ "site2", &class_int, offsetof(mindustry_graphics_Voronoi$GraphEdge, F_site2), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Voronoi$GraphEdge, 0, "()V", 1 },
};

Class class_mindustry_graphics_Voronoi$GraphEdge{
		.nativeName = (intptr_t) "mindustry/graphics/Voronoi$GraphEdge",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_Voronoi$GraphEdge),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Voronoi$GraphEdge,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Voronoi$GraphEdge,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Voronoi$GraphEdge,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_Voronoi,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Voronoi$GraphEdge = registerClass(&class_mindustry_graphics_Voronoi$GraphEdge);

}

