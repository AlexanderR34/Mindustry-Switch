#include "mindustry/graphics/g3d/PlanetGrid_Edge.h"
#include "mindustry/graphics/g3d/PlanetGrid_Edge.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/PlanetGrid_Corner.h"
#include "mindustry/graphics/g3d/PlanetGrid.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"

extern "C" {


void mark_mindustry_graphics_g3d_PlanetGrid$Edge(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_PlanetGrid$Edge *) object;
	if (self->F_tiles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tiles)->clazz)->markFunction)((jobject) self->F_tiles, mark, depth + 1);
	if (self->F_corners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_corners)->clazz)->markFunction)((jobject) self->F_corners, mark, depth + 1);
}

void clinit_mindustry_graphics_g3d_PlanetGrid$Edge(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_g3d_PlanetGrid$Edge_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid$Edge:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid$Edge(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(270);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(267);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Ptile, (jint(2)));
	((mindustry_graphics_g3d_PlanetGrid$Edge *) NULL_CHECK(sp[0].o))->F_tiles = (jref) sp[1].o;
	LINE_NUMBER(268);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Corner, (jint(2)));
	((mindustry_graphics_g3d_PlanetGrid$Edge *) NULL_CHECK(sp[0].o))->F_corners = (jref) sp[1].o;
	LINE_NUMBER(271);
	((mindustry_graphics_g3d_PlanetGrid$Edge *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_PlanetGrid$Edge[] {
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
	{ "id", &class_int, offsetof(mindustry_graphics_g3d_PlanetGrid$Edge, F_id), "I", 1 },
	{ "tiles", getArrayClass(&class_mindustry_graphics_g3d_PlanetGrid$Ptile, 1), offsetof(mindustry_graphics_g3d_PlanetGrid$Edge, F_tiles), "[Lmindustry/graphics/g3d/PlanetGrid$Ptile;", 1 },
	{ "corners", getArrayClass(&class_mindustry_graphics_g3d_PlanetGrid$Corner, 1), offsetof(mindustry_graphics_g3d_PlanetGrid$Edge, F_corners), "[Lmindustry/graphics/g3d/PlanetGrid$Corner;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_PlanetGrid$Edge_int, 0, "(I)V", 1 },
};

Class class_mindustry_graphics_g3d_PlanetGrid$Edge{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/PlanetGrid$Edge",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_PlanetGrid$Edge),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_PlanetGrid$Edge,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_PlanetGrid$Edge,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_PlanetGrid$Edge,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_g3d_PlanetGrid,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_PlanetGrid$Edge = registerClass(&class_mindustry_graphics_g3d_PlanetGrid$Edge);

}

