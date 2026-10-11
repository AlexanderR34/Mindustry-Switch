#include "mindustry/maps/planet/AsteroidGenerator_1.h"
#include "java/lang/Object.h"
#include "mindustry/type/Planet.h"
#include "mindustry/maps/planet/AsteroidGenerator_1.h"
#include "mindustry/type/Sector.h"
#include "mindustry/graphics/g3d/PlanetParams.h"
#include "arc/math/geom/Vec3.h"
#include "mindustry/maps/planet/AsteroidGenerator.h"

extern "C" {


void mark_mindustry_maps_planet_AsteroidGenerator$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_graphics_g3d_PlanetParams(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_maps_planet_AsteroidGenerator$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_maps_planet_AsteroidGenerator$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_graphics_g3d_PlanetParams(ctx);
}

void init_mindustry_maps_planet_AsteroidGenerator$1_mindustry_maps_planet_AsteroidGenerator(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/planet/AsteroidGenerator$1:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_planet_AsteroidGenerator$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(140);
	((mindustry_maps_planet_AsteroidGenerator$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_graphics_g3d_PlanetParams(ctx, (frame[0].o));
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_maps_planet_AsteroidGenerator$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)SM_mindustry_maps_planet_AsteroidGenerator_access$000_mindustry_maps_planet_AsteroidGenerator_R_mindustry_type_Sector(ctx, sp[1].o);
	sp[1].o = (jobject)((mindustry_type_Sector *) NULL_CHECK(sp[1].o))->F_planet;
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_planet = (jref) sp[1].o;
	LINE_NUMBER(142);
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK((frame[0].o)))->F_zoom = (jfloat(1));
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(1.2388899f)), (jfloat(1.6047299f)), (jfloat(2.4758825f)));
	((mindustry_graphics_g3d_PlanetParams *) NULL_CHECK(sp[0].o))->F_camPos = (jref) sp[1].o;
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_planet_AsteroidGenerator$1[] {
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
	{ "this$0", &class_mindustry_maps_planet_AsteroidGenerator, offsetof(mindustry_maps_planet_AsteroidGenerator$1, F_this$0), "Lmindustry/maps/planet/AsteroidGenerator;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_planet_AsteroidGenerator$1_mindustry_maps_planet_AsteroidGenerator, 0, "(Lmindustry/maps/planet/AsteroidGenerator;)V", 0 },
};

Class class_mindustry_maps_planet_AsteroidGenerator$1{
		.nativeName = (intptr_t) "mindustry/maps/planet/AsteroidGenerator$1",
		.parentClass = (intptr_t) &class_mindustry_graphics_g3d_PlanetParams,
		.size = sizeof(mindustry_maps_planet_AsteroidGenerator$1),
		.classVtable = (intptr_t) vtable_mindustry_maps_planet_AsteroidGenerator$1,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_planet_AsteroidGenerator$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_planet_AsteroidGenerator$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_maps_planet_AsteroidGenerator$1 = registerClass(&class_mindustry_maps_planet_AsteroidGenerator$1);

}

