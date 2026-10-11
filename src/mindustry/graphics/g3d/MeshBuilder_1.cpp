#include "mindustry/graphics/g3d/MeshBuilder_1.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/MeshBuilder_1.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "arc/graphics/Color.h"
#include "arc/math/geom/Vec3.h"

extern "C" {


void mark_mindustry_graphics_g3d_MeshBuilder$1(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_g3d_MeshBuilder$1 *) object;
	if (self->F_val$color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$color)->clazz)->markFunction)((jobject) self->F_val$color, mark, depth + 1);
}

void clinit_mindustry_graphics_g3d_MeshBuilder$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_graphics_g3d_MeshBuilder$1_arc_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	((mindustry_graphics_g3d_MeshBuilder$1 *) NULL_CHECK((frame[0].o)))->F_val$color = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_graphics_g3d_MeshBuilder$1_getHeight_arc_math_geom_Vec3_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder$1:getHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (jfloat(0));
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_g3d_MeshBuilder$1_getColor_arc_math_geom_Vec3_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder$1:getColor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_graphics_g3d_MeshBuilder$1 *) NULL_CHECK((frame[0].o)))->F_val$color;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_MeshBuilder$1[] {
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
	(void *) M_mindustry_graphics_g3d_MeshBuilder$1_getHeight_arc_math_geom_Vec3_R_float,
	(void *) M_mindustry_graphics_g3d_MeshBuilder$1_getColor_arc_math_geom_Vec3_arc_graphics_Color,
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

static jclass interfaces[] { &class_mindustry_graphics_g3d_HexMesher, };

static FieldMetadata fields[] {
	{ "val$color", &class_arc_graphics_Color, offsetof(mindustry_graphics_g3d_MeshBuilder$1, F_val$color), "Larc/graphics/Color;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_MeshBuilder$1_arc_graphics_Color, 0, "(Larc/graphics/Color;)V", 0 },
	{ "getHeight", (intptr_t) M_mindustry_graphics_g3d_MeshBuilder$1_getHeight_arc_math_geom_Vec3_R_float, VTABLE_mindustry_graphics_g3d_MeshBuilder$1_getHeight_arc_math_geom_Vec3_R_float, "(Larc/math/geom/Vec3;)F", 1 },
	{ "getColor", (intptr_t) M_mindustry_graphics_g3d_MeshBuilder$1_getColor_arc_math_geom_Vec3_arc_graphics_Color, VTABLE_mindustry_graphics_g3d_MeshBuilder$1_getColor_arc_math_geom_Vec3_arc_graphics_Color, "(Larc/math/geom/Vec3;Larc/graphics/Color;)V", 1 },
};

Class class_mindustry_graphics_g3d_MeshBuilder$1{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/MeshBuilder$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_MeshBuilder$1),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_MeshBuilder$1,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_MeshBuilder$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_MeshBuilder$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_MeshBuilder$1 = registerClass(&class_mindustry_graphics_g3d_MeshBuilder$1);

}

