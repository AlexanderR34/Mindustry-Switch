#include "mindustry/graphics/Voronoi_Halfedge.h"
#include "mindustry/graphics/Voronoi.h"
#include "mindustry/graphics/Voronoi_Edge.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Voronoi_Site.h"
#include "mindustry/graphics/Voronoi_Halfedge.h"

extern "C" {


void mark_mindustry_graphics_Voronoi$Halfedge(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_Voronoi$Halfedge *) object;
	if (self->F_ELleft)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ELleft)->clazz)->markFunction)((jobject) self->F_ELleft, mark, depth + 1);
	if (self->F_ELright)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ELright)->clazz)->markFunction)((jobject) self->F_ELright, mark, depth + 1);
	if (self->F_ELedge)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ELedge)->clazz)->markFunction)((jobject) self->F_ELedge, mark, depth + 1);
	if (self->F_vertex)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertex)->clazz)->markFunction)((jobject) self->F_vertex, mark, depth + 1);
	if (self->F_PQnext)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_PQnext)->clazz)->markFunction)((jobject) self->F_PQnext, mark, depth + 1);
}

void clinit_mindustry_graphics_Voronoi$Halfedge(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_Voronoi$Halfedge(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi$Halfedge:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Voronoi$Halfedge(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(621);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Voronoi$Halfedge[] {
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
	{ "ELleft", &class_mindustry_graphics_Voronoi$Halfedge, offsetof(mindustry_graphics_Voronoi$Halfedge, F_ELleft), "Lmindustry/graphics/Voronoi$Halfedge;", 0 },
	{ "ELright", &class_mindustry_graphics_Voronoi$Halfedge, offsetof(mindustry_graphics_Voronoi$Halfedge, F_ELright), "Lmindustry/graphics/Voronoi$Halfedge;", 0 },
	{ "ELedge", &class_mindustry_graphics_Voronoi$Edge, offsetof(mindustry_graphics_Voronoi$Halfedge, F_ELedge), "Lmindustry/graphics/Voronoi$Edge;", 0 },
	{ "deleted", &class_boolean, offsetof(mindustry_graphics_Voronoi$Halfedge, F_deleted), "Z", 0 },
	{ "ELpm", &class_int, offsetof(mindustry_graphics_Voronoi$Halfedge, F_ELpm), "I", 0 },
	{ "vertex", &class_mindustry_graphics_Voronoi$Site, offsetof(mindustry_graphics_Voronoi$Halfedge, F_vertex), "Lmindustry/graphics/Voronoi$Site;", 0 },
	{ "ystar", &class_float, offsetof(mindustry_graphics_Voronoi$Halfedge, F_ystar), "F", 0 },
	{ "PQnext", &class_mindustry_graphics_Voronoi$Halfedge, offsetof(mindustry_graphics_Voronoi$Halfedge, F_PQnext), "Lmindustry/graphics/Voronoi$Halfedge;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Voronoi$Halfedge, 0, "()V", 0 },
};

Class class_mindustry_graphics_Voronoi$Halfedge{
		.nativeName = (intptr_t) "mindustry/graphics/Voronoi$Halfedge",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_Voronoi$Halfedge),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Voronoi$Halfedge,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Voronoi$Halfedge,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Voronoi$Halfedge,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_Voronoi,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Voronoi$Halfedge = registerClass(&class_mindustry_graphics_Voronoi$Halfedge);

}

