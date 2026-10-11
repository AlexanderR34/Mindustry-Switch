#include "mindustry/entities/LegDestroyData.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/entities/LegDestroyData.h"

extern "C" {


void mark_mindustry_entities_LegDestroyData(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_LegDestroyData *) object;
	if (self->F_a)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_a)->clazz)->markFunction)((jobject) self->F_a, mark, depth + 1);
	if (self->F_b)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_b)->clazz)->markFunction)((jobject) self->F_b, mark, depth + 1);
	if (self->F_region)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_region)->clazz)->markFunction)((jobject) self->F_region, mark, depth + 1);
}

void clinit_mindustry_entities_LegDestroyData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_entities_LegDestroyData_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/LegDestroyData:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_LegDestroyData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((mindustry_entities_LegDestroyData *) NULL_CHECK((frame[0].o)))->F_a = (jref) (frame[1].o);
	LINE_NUMBER(12);
	((mindustry_entities_LegDestroyData *) NULL_CHECK((frame[0].o)))->F_b = (jref) (frame[2].o);
	LINE_NUMBER(13);
	((mindustry_entities_LegDestroyData *) NULL_CHECK((frame[0].o)))->F_region = (jref) (frame[3].o);
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_entities_LegDestroyData[] {
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
	{ "a", &class_arc_math_geom_Vec2, offsetof(mindustry_entities_LegDestroyData, F_a), "Larc/math/geom/Vec2;", 1 },
	{ "b", &class_arc_math_geom_Vec2, offsetof(mindustry_entities_LegDestroyData, F_b), "Larc/math/geom/Vec2;", 1 },
	{ "region", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_entities_LegDestroyData, F_region), "Larc/graphics/g2d/TextureRegion;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_LegDestroyData_arc_math_geom_Vec2_arc_math_geom_Vec2_arc_graphics_g2d_TextureRegion, 0, "(Larc/math/geom/Vec2;Larc/math/geom/Vec2;Larc/graphics/g2d/TextureRegion;)V", 1 },
};

Class class_mindustry_entities_LegDestroyData{
		.nativeName = (intptr_t) "mindustry/entities/LegDestroyData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_entities_LegDestroyData),
		.classVtable = (intptr_t) vtable_mindustry_entities_LegDestroyData,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_LegDestroyData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_entities_LegDestroyData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
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
static bool registered_mindustry_entities_LegDestroyData = registerClass(&class_mindustry_entities_LegDestroyData);

}
