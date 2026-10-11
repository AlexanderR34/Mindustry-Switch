#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "mindustry/graphics/g3d/PlanetGrid_Edge.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/PlanetGrid_Corner.h"
#include "java/lang/String.h"
#include "mindustry/graphics/g3d/PlanetGrid.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "arc/math/geom/Vec3.h"

extern "C" {

jobject SF_mindustry_graphics_g3d_PlanetGrid$Ptile_empty;

void mark_mindustry_graphics_g3d_PlanetGrid$Ptile(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_g3d_PlanetGrid$Ptile_empty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_g3d_PlanetGrid$Ptile_empty)->clazz)->markFunction)((jobject) SF_mindustry_graphics_g3d_PlanetGrid$Ptile_empty, mark, depth + 1);
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
	auto self = (mindustry_graphics_g3d_PlanetGrid$Ptile *) object;
	if (self->F_tiles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tiles)->clazz)->markFunction)((jobject) self->F_tiles, mark, depth + 1);
	if (self->F_corners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_corners)->clazz)->markFunction)((jobject) self->F_corners, mark, depth + 1);
	if (self->F_edges)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_edges)->clazz)->markFunction)((jobject) self->F_edges, mark, depth + 1);
	if (self->F_v)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_v)->clazz)->markFunction)((jobject) self->F_v, mark, depth + 1);
}

void init_mindustry_graphics_g3d_PlanetGrid$Ptile_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid$Ptile:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid$Ptile(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(235);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(233);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v = (jref) sp[1].o;
	LINE_NUMBER(236);
	((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[0].o)))->F_id = (frame[1].i);
	LINE_NUMBER(237);
	((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[0].o)))->F_edgeCount = (frame[2].i);
	LINE_NUMBER(239);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Ptile, (frame[2].i));
	((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_tiles = (jref) sp[1].o;
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Corner, (frame[2].i));
	((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_corners = (jref) sp[1].o;
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Edge, (frame[2].i));
	((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_edges = (jref) sp[1].o;
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_g3d_PlanetGrid$Ptile_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid$Ptile:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(246);
	jint temp0 = (jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[0].o)))->F_id;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[0].o)))->F_v;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"Ptile{id=\u0001 \u0001}"_j.string, 2, boxInteger(ctx, temp0), sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_g3d_PlanetGrid$Ptile(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid$Ptile:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid$Ptile(ctx);
	{
	LINE_NUMBER(224);
	clinit_mindustry_graphics_g3d_PlanetGrid$Ptile(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Ptile);
	init_mindustry_graphics_g3d_PlanetGrid$Ptile_int_int(ctx, sp[0].o, (jint(0)), (jint(0)));
	clinit_mindustry_graphics_g3d_PlanetGrid$Ptile(ctx);
	SF_mindustry_graphics_g3d_PlanetGrid$Ptile_empty = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_PlanetGrid$Ptile[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_graphics_g3d_PlanetGrid$Ptile_toString_R_java_lang_String,
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
	{ "empty", &class_mindustry_graphics_g3d_PlanetGrid$Ptile, (intptr_t) &SF_mindustry_graphics_g3d_PlanetGrid$Ptile_empty, "Lmindustry/graphics/g3d/PlanetGrid$Ptile;", 25 },
	{ "id", &class_int, offsetof(mindustry_graphics_g3d_PlanetGrid$Ptile, F_id), "I", 1 },
	{ "edgeCount", &class_int, offsetof(mindustry_graphics_g3d_PlanetGrid$Ptile, F_edgeCount), "I", 1 },
	{ "tiles", getArrayClass(&class_mindustry_graphics_g3d_PlanetGrid$Ptile, 1), offsetof(mindustry_graphics_g3d_PlanetGrid$Ptile, F_tiles), "[Lmindustry/graphics/g3d/PlanetGrid$Ptile;", 1 },
	{ "corners", getArrayClass(&class_mindustry_graphics_g3d_PlanetGrid$Corner, 1), offsetof(mindustry_graphics_g3d_PlanetGrid$Ptile, F_corners), "[Lmindustry/graphics/g3d/PlanetGrid$Corner;", 1 },
	{ "edges", getArrayClass(&class_mindustry_graphics_g3d_PlanetGrid$Edge, 1), offsetof(mindustry_graphics_g3d_PlanetGrid$Ptile, F_edges), "[Lmindustry/graphics/g3d/PlanetGrid$Edge;", 1 },
	{ "v", &class_arc_math_geom_Vec3, offsetof(mindustry_graphics_g3d_PlanetGrid$Ptile, F_v), "Larc/math/geom/Vec3;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_PlanetGrid$Ptile_int_int, 0, "(II)V", 1 },
	{ "toString", (intptr_t) M_mindustry_graphics_g3d_PlanetGrid$Ptile_toString_R_java_lang_String, VTABLE_mindustry_graphics_g3d_PlanetGrid$Ptile_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_g3d_PlanetGrid$Ptile, 0, "()V", 8 },
};

Class class_mindustry_graphics_g3d_PlanetGrid$Ptile{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/PlanetGrid$Ptile",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_PlanetGrid$Ptile),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_PlanetGrid$Ptile,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_PlanetGrid$Ptile,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_PlanetGrid$Ptile,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_g3d_PlanetGrid,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_PlanetGrid$Ptile = registerClass(&class_mindustry_graphics_g3d_PlanetGrid$Ptile);

}

