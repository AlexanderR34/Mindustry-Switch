#include "arc/graphics/g2d/PixmapPacker_PixmapPackerRect.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/PixmapPacker_PixmapPackerRect.h"
#include "arc/math/geom/Rect.h"
#include "arc/graphics/g2d/PixmapPacker.h"

extern "C" {


void mark_arc_graphics_g2d_PixmapPacker$PixmapPackerRect(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_math_geom_Rect(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) object;
	if (self->F_splits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_splits)->clazz)->markFunction)((jobject) self->F_splits, mark, depth + 1);
	if (self->F_pads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pads)->clazz)->markFunction)((jobject) self->F_pads, mark, depth + 1);
}

void clinit_arc_graphics_g2d_PixmapPacker$PixmapPackerRect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_math_geom_Rect(ctx);
}

void init_arc_graphics_g2d_PixmapPacker$PixmapPackerRect_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$PixmapPackerRect:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker$PixmapPackerRect(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(887);
	init_arc_math_geom_Rect_float_float_float_float(ctx, (frame[0].o), (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jfloat((frame[3].i))), (jfloat((frame[4].i))));
	LINE_NUMBER(888);
	((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[0].o)))->F_offsetX = (jint(0));
	LINE_NUMBER(889);
	((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[0].o)))->F_offsetY = (jint(0));
	LINE_NUMBER(890);
	((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[0].o)))->F_originalWidth = (frame[3].i);
	LINE_NUMBER(891);
	((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[0].o)))->F_originalHeight = (frame[4].i);
	LINE_NUMBER(892);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_PixmapPacker$PixmapPackerRect_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapPacker$PixmapPackerRect:<init>", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapPacker$PixmapPackerRect(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	{
	LINE_NUMBER(895);
	init_arc_math_geom_Rect_float_float_float_float(ctx, (frame[0].o), (jfloat((frame[1].i))), (jfloat((frame[2].i))), (jfloat((frame[3].i))), (jfloat((frame[4].i))));
	LINE_NUMBER(896);
	((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[0].o)))->F_offsetX = (frame[5].i);
	LINE_NUMBER(897);
	((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[0].o)))->F_offsetY = (frame[6].i);
	LINE_NUMBER(898);
	((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[0].o)))->F_originalWidth = (frame[7].i);
	LINE_NUMBER(899);
	((arc_graphics_g2d_PixmapPacker$PixmapPackerRect *) NULL_CHECK((frame[0].o)))->F_originalHeight = (frame[8].i);
	LINE_NUMBER(900);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_PixmapPacker$PixmapPackerRect[] {
	(void *) M_arc_math_geom_Rect_hashCode_R_int,
	(void *) M_arc_math_geom_Rect_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_math_geom_Rect_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_math_geom_Rect_contains_arc_math_geom_Vec2_R_boolean,
	(void *) M_arc_math_geom_Rect_contains_float_float_R_boolean,
	(void *) M_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_set_float_float_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getX_R_float,
	(void *) M_arc_math_geom_Rect_setX_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getY_R_float,
	(void *) M_arc_math_geom_Rect_setY_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getWidth_R_float,
	(void *) M_arc_math_geom_Rect_setWidth_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getHeight_R_float,
	(void *) M_arc_math_geom_Rect_setHeight_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getPosition_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Rect_setPosition_arc_math_geom_Vec2_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_setPosition_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_move_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_setSize_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_setSize_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getSize_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Rect_contains_arc_math_geom_Circle_R_boolean,
	(void *) M_arc_math_geom_Rect_contains_arc_math_geom_Rect_R_boolean,
	(void *) M_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean,
	(void *) M_arc_math_geom_Rect_overlaps_float_float_float_float_R_boolean,
	(void *) M_arc_math_geom_Rect_set_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_grow_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_merge_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_normalize_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_merge_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_merge_arc_math_geom_Vec2_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_merge_Array1_arc_math_geom_Vec2_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_getAspectRatio_R_float,
	(void *) M_arc_math_geom_Rect_getCenter_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_math_geom_Rect_setCenter_float_float_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_setCenter_arc_math_geom_Vec2_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_fitOutside_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_fitInside_arc_math_geom_Rect_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_fromString_java_lang_String_R_arc_math_geom_Rect,
	(void *) M_arc_math_geom_Rect_area_R_float,
	(void *) M_arc_math_geom_Rect_perimeter_R_float,
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
	{ "contains", "(Larc/math/geom/Vec2;)Z" },
	{ "contains", "(FF)Z" },
	{ "setCentered", "(FFF)Larc/math/geom/Rect;" },
	{ "setCentered", "(FFFF)Larc/math/geom/Rect;" },
	{ "set", "(FFFF)Larc/math/geom/Rect;" },
	{ "getX", "()F" },
	{ "setX", "(F)Larc/math/geom/Rect;" },
	{ "getY", "()F" },
	{ "setY", "(F)Larc/math/geom/Rect;" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)Larc/math/geom/Rect;" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)Larc/math/geom/Rect;" },
	{ "getPosition", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "setPosition", "(Larc/math/geom/Vec2;)Larc/math/geom/Rect;" },
	{ "setPosition", "(FF)Larc/math/geom/Rect;" },
	{ "move", "(FF)Larc/math/geom/Rect;" },
	{ "setSize", "(FF)Larc/math/geom/Rect;" },
	{ "setSize", "(F)Larc/math/geom/Rect;" },
	{ "getSize", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "contains", "(Larc/math/geom/Circle;)Z" },
	{ "contains", "(Larc/math/geom/Rect;)Z" },
	{ "overlaps", "(Larc/math/geom/Rect;)Z" },
	{ "overlaps", "(FFFF)Z" },
	{ "set", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "grow", "(F)Larc/math/geom/Rect;" },
	{ "grow", "(FF)Larc/math/geom/Rect;" },
	{ "merge", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "normalize", "()Larc/math/geom/Rect;" },
	{ "merge", "(FF)Larc/math/geom/Rect;" },
	{ "merge", "(Larc/math/geom/Vec2;)Larc/math/geom/Rect;" },
	{ "merge", "([Larc/math/geom/Vec2;)Larc/math/geom/Rect;" },
	{ "getAspectRatio", "()F" },
	{ "getCenter", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "setCenter", "(FF)Larc/math/geom/Rect;" },
	{ "setCenter", "(Larc/math/geom/Vec2;)Larc/math/geom/Rect;" },
	{ "fitOutside", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "fitInside", "(Larc/math/geom/Rect;)Larc/math/geom/Rect;" },
	{ "fromString", "(Ljava/lang/String;)Larc/math/geom/Rect;" },
	{ "area", "()F" },
	{ "perimeter", "()F" },
};

static FieldMetadata fields[] {
	{ "splits", getArrayClass(&class_int, 1), offsetof(arc_graphics_g2d_PixmapPacker$PixmapPackerRect, F_splits), "[I", 1 },
	{ "pads", getArrayClass(&class_int, 1), offsetof(arc_graphics_g2d_PixmapPacker$PixmapPackerRect, F_pads), "[I", 1 },
	{ "offsetX", &class_int, offsetof(arc_graphics_g2d_PixmapPacker$PixmapPackerRect, F_offsetX), "I", 1 },
	{ "offsetY", &class_int, offsetof(arc_graphics_g2d_PixmapPacker$PixmapPackerRect, F_offsetY), "I", 1 },
	{ "originalWidth", &class_int, offsetof(arc_graphics_g2d_PixmapPacker$PixmapPackerRect, F_originalWidth), "I", 1 },
	{ "originalHeight", &class_int, offsetof(arc_graphics_g2d_PixmapPacker$PixmapPackerRect, F_originalHeight), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker$PixmapPackerRect_int_int_int_int, 0, "(IIII)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapPacker$PixmapPackerRect_int_int_int_int_int_int_int_int, 0, "(IIIIIIII)V", 1 },
};

Class class_arc_graphics_g2d_PixmapPacker$PixmapPackerRect{
		.nativeName = (intptr_t) "arc/graphics/g2d/PixmapPacker$PixmapPackerRect",
		.parentClass = (intptr_t) &class_arc_math_geom_Rect,
		.size = sizeof(arc_graphics_g2d_PixmapPacker$PixmapPackerRect),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_PixmapPacker$PixmapPackerRect,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_PixmapPacker$PixmapPackerRect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_PixmapPacker$PixmapPackerRect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_PixmapPacker,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 52,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_PixmapPacker$PixmapPackerRect = registerClass(&class_arc_graphics_g2d_PixmapPacker$PixmapPackerRect);

}

