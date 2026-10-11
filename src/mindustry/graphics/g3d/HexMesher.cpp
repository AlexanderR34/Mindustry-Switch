#include "mindustry/graphics/g3d/HexMesher.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "arc/graphics/Color.h"
#include "arc/math/geom/Vec3.h"

extern "C" {


void mark_mindustry_graphics_g3d_HexMesher(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_HexMesher *) object;
}

void clinit_mindustry_graphics_g3d_HexMesher(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jfloat M_mindustry_graphics_g3d_HexMesher_getHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexMesher:getHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_HexMesher_getColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexMesher:getColor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(15);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_HexMesher_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexMesher:getEmissiveColor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	LINE_NUMBER(19);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_graphics_g3d_HexMesher_isEmissive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexMesher:isEmissive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_graphics_g3d_HexMesher_skip_arc_math_geom_Vec3_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/HexMesher:skip", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_HexMesher[] {
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
	(void *) M_mindustry_graphics_g3d_HexMesher_getHeight_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_graphics_g3d_HexMesher_getColor_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_mindustry_graphics_g3d_HexMesher_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color,
	(void *) M_mindustry_graphics_g3d_HexMesher_isEmissive_R_boolean,
	(void *) M_mindustry_graphics_g3d_HexMesher_skip_arc_math_geom_Vec3_R_boolean,
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
	{ "getHeight", "(Larc/math/geom/Vec3;)F" },
	{ "getColor", "(Larc/math/geom/Vec3;Larc/graphics/Color;)V" },
	{ "getEmissiveColor", "(Larc/math/geom/Vec3;Larc/graphics/Color;)V" },
	{ "isEmissive", "()Z" },
	{ "skip", "(Larc/math/geom/Vec3;)Z" },
};

static MethodMetadata methods[] {
	{ "getHeight", (intptr_t) M_mindustry_graphics_g3d_HexMesher_getHeight_arc_math_geom_Vec3_R_float, INDEX_mindustry_graphics_g3d_HexMesher_getHeight_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "getColor", (intptr_t) M_mindustry_graphics_g3d_HexMesher_getColor_arc_math_geom_Vec3_arc_graphics_Color, INDEX_mindustry_graphics_g3d_HexMesher_getColor_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
	{ "getEmissiveColor", (intptr_t) M_mindustry_graphics_g3d_HexMesher_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color, INDEX_mindustry_graphics_g3d_HexMesher_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
	{ "isEmissive", (intptr_t) M_mindustry_graphics_g3d_HexMesher_isEmissive_R_boolean, INDEX_mindustry_graphics_g3d_HexMesher_isEmissive_R_boolean, "()Z", 1 },
	{ "skip", (intptr_t) M_mindustry_graphics_g3d_HexMesher_skip_arc_math_geom_Vec3_R_boolean, INDEX_mindustry_graphics_g3d_HexMesher_skip_arc_math_geom_Vec3_R_boolean, "(Larc/math/geom/Vec3;)Z", 1 },
};

Class class_mindustry_graphics_g3d_HexMesher{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/HexMesher",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_HexMesher),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_HexMesher,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_HexMesher,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_HexMesher,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_HexMesher = registerClass(&class_mindustry_graphics_g3d_HexMesher);

}
