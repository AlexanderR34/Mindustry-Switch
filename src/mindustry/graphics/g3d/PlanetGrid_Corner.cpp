#include "mindustry/graphics/g3d/PlanetGrid_Corner.h"
#include "mindustry/graphics/g3d/PlanetGrid_Edge.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/PlanetGrid_Corner.h"
#include "mindustry/graphics/g3d/PlanetGrid.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "arc/math/geom/Vec3.h"

extern "C" {


void mark_mindustry_graphics_g3d_PlanetGrid$Corner(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_PlanetGrid$Corner *) object;
	if (self->F_tiles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tiles)->clazz)->markFunction)((jobject) self->F_tiles, mark, depth + 1);
	if (self->F_corners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_corners)->clazz)->markFunction)((jobject) self->F_corners, mark, depth + 1);
	if (self->F_edges)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_edges)->clazz)->markFunction)((jobject) self->F_edges, mark, depth + 1);
	if (self->F_v)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_v)->clazz)->markFunction)((jobject) self->F_v, mark, depth + 1);
}

void clinit_mindustry_graphics_g3d_PlanetGrid$Corner(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_g3d_PlanetGrid$Corner_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid$Corner:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid$Corner(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(260);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(255);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Ptile, (jint(3)));
	((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(sp[0].o))->F_tiles = (jref) sp[1].o;
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Corner, (jint(3)));
	((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(sp[0].o))->F_corners = (jref) sp[1].o;
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Edge, (jint(3)));
	((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(sp[0].o))->F_edges = (jref) sp[1].o;
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(sp[0].o))->F_v = (jref) sp[1].o;
	LINE_NUMBER(261);
	((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_PlanetGrid$Corner[] {
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
	{ "id", &class_int, offsetof(mindustry_graphics_g3d_PlanetGrid$Corner, F_id), "I", 1 },
	{ "tiles", getArrayClass(&class_mindustry_graphics_g3d_PlanetGrid$Ptile, 1), offsetof(mindustry_graphics_g3d_PlanetGrid$Corner, F_tiles), "[Lmindustry/graphics/g3d/PlanetGrid$Ptile;", 1 },
	{ "corners", getArrayClass(&class_mindustry_graphics_g3d_PlanetGrid$Corner, 1), offsetof(mindustry_graphics_g3d_PlanetGrid$Corner, F_corners), "[Lmindustry/graphics/g3d/PlanetGrid$Corner;", 1 },
	{ "edges", getArrayClass(&class_mindustry_graphics_g3d_PlanetGrid$Edge, 1), offsetof(mindustry_graphics_g3d_PlanetGrid$Corner, F_edges), "[Lmindustry/graphics/g3d/PlanetGrid$Edge;", 1 },
	{ "v", &class_arc_math_geom_Vec3, offsetof(mindustry_graphics_g3d_PlanetGrid$Corner, F_v), "Larc/math/geom/Vec3;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_PlanetGrid$Corner_int, 0, "(I)V", 1 },
};

Class class_mindustry_graphics_g3d_PlanetGrid$Corner{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/PlanetGrid$Corner",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_PlanetGrid$Corner),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_PlanetGrid$Corner,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_PlanetGrid$Corner,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_PlanetGrid$Corner,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_g3d_PlanetGrid,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
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
static bool registered_mindustry_graphics_g3d_PlanetGrid$Corner = registerClass(&class_mindustry_graphics_g3d_PlanetGrid$Corner);

}

