#include "arc/graphics/g2d/PixmapRegion.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "arc/graphics/Pixmaps.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_arc_graphics_g2d_PixmapRegion(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_g2d_PixmapRegion *) object;
	if (self->F_pixmap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pixmap)->clazz)->markFunction)((jobject) self->F_pixmap, mark, depth + 1);
}

void clinit_arc_graphics_g2d_PixmapRegion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_g2d_PixmapRegion_arc_graphics_Pixmap_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapRegion:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(12);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_PixmapRegion_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapRegion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_PixmapRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_PixmapRegion_get_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapRegion:get", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(20);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_arc_graphics_Pixmap_get_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_get_int_int_R_int])(ctx, sp[0].o, (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].i)), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].i)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_PixmapRegion_getRaw_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapRegion:getRaw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(25);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_arc_graphics_Pixmap_getRaw_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_getRaw_int_int_R_int])(ctx, sp[0].o, (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].i)), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].i)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_PixmapRegion_getA_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapRegion:getA", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_arc_graphics_Pixmap_getA_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_getA_int_int_R_int])(ctx, sp[0].o, (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].i)), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].i)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_g2d_PixmapRegion_get_int_int_arc_graphics_Color_R_int(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapRegion:get", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(34);
	jint temp0 = (jint)((func_arc_graphics_g2d_PixmapRegion_get_int_int_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_get_int_int_R_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[4].i = temp0;
	LINE_NUMBER(35);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_int_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Color_set_int_R_arc_graphics_Color])(ctx, (frame[3].o), (frame[4].i));
	LINE_NUMBER(36);
	popStackFrame(ctx);
	return (frame[4].i);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapRegion:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((func_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_g2d_PixmapRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_g2d_PixmapRegion])(ctx, (frame[0].o), (frame[1].o), (jint(0)), (jint(0)), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_width), ((jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_height));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_g2d_PixmapRegion(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapRegion:set", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(44);
	((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_pixmap = (jref) (frame[1].o);
	LINE_NUMBER(45);
	((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_x = (frame[2].i);
	LINE_NUMBER(46);
	((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_y = (frame[3].i);
	LINE_NUMBER(47);
	((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_width = (frame[4].i);
	LINE_NUMBER(48);
	((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_height = (frame[5].i);
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapRegion_crop_R_arc_graphics_Pixmap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapRegion:crop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_pixmap;
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_crop_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_Pixmap(ctx, sp[0].o, ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_y), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_height));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_PixmapRegion_crop_int_int_int_int_R_arc_graphics_Pixmap(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/PixmapRegion:crop", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_pixmap;
	sp[0].o = (jobject)SM_arc_graphics_Pixmaps_crop_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_Pixmap(ctx, sp[0].o, (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_x) + (frame[1].i)), (((jint)((arc_graphics_g2d_PixmapRegion *) NULL_CHECK((frame[0].o)))->F_y) + (frame[2].i)), (frame[3].i), (frame[4].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_PixmapRegion[] {
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
	(void *) M_arc_graphics_g2d_PixmapRegion_get_int_int_R_int,
	(void *) M_arc_graphics_g2d_PixmapRegion_getRaw_int_int_R_int,
	(void *) M_arc_graphics_g2d_PixmapRegion_getA_int_int_R_int,
	(void *) M_arc_graphics_g2d_PixmapRegion_get_int_int_arc_graphics_Color_R_int,
	(void *) M_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_g2d_PixmapRegion,
	(void *) M_arc_graphics_g2d_PixmapRegion_crop_R_arc_graphics_Pixmap,
	(void *) M_arc_graphics_g2d_PixmapRegion_crop_int_int_int_int_R_arc_graphics_Pixmap,
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
	{ "get", "(II)I" },
	{ "getRaw", "(II)I" },
	{ "getA", "(II)I" },
	{ "get", "(IILarc/graphics/Color;)I" },
	{ "set", "(Larc/graphics/Pixmap;)Larc/graphics/g2d/PixmapRegion;" },
	{ "set", "(Larc/graphics/Pixmap;IIII)Larc/graphics/g2d/PixmapRegion;" },
	{ "crop", "()Larc/graphics/Pixmap;" },
	{ "crop", "(IIII)Larc/graphics/Pixmap;" },
};

static FieldMetadata fields[] {
	{ "pixmap", &class_arc_graphics_Pixmap, offsetof(arc_graphics_g2d_PixmapRegion, F_pixmap), "Larc/graphics/Pixmap;", 1 },
	{ "x", &class_int, offsetof(arc_graphics_g2d_PixmapRegion, F_x), "I", 1 },
	{ "y", &class_int, offsetof(arc_graphics_g2d_PixmapRegion, F_y), "I", 1 },
	{ "width", &class_int, offsetof(arc_graphics_g2d_PixmapRegion, F_width), "I", 1 },
	{ "height", &class_int, offsetof(arc_graphics_g2d_PixmapRegion, F_height), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapRegion_arc_graphics_Pixmap_int_int_int_int, 0, "(Larc/graphics/Pixmap;IIII)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_PixmapRegion_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;)V", 1 },
	{ "get", (intptr_t) M_arc_graphics_g2d_PixmapRegion_get_int_int_R_int, VTABLE_arc_graphics_g2d_PixmapRegion_get_int_int_R_int, "(II)I", 1 },
	{ "getRaw", (intptr_t) M_arc_graphics_g2d_PixmapRegion_getRaw_int_int_R_int, VTABLE_arc_graphics_g2d_PixmapRegion_getRaw_int_int_R_int, "(II)I", 1 },
	{ "getA", (intptr_t) M_arc_graphics_g2d_PixmapRegion_getA_int_int_R_int, VTABLE_arc_graphics_g2d_PixmapRegion_getA_int_int_R_int, "(II)I", 1 },
	{ "get", (intptr_t) M_arc_graphics_g2d_PixmapRegion_get_int_int_arc_graphics_Color_R_int, VTABLE_arc_graphics_g2d_PixmapRegion_get_int_int_arc_graphics_Color_R_int, "(IILarc/graphics/Color;)I", 1 },
	{ "set", (intptr_t) M_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_R_arc_graphics_g2d_PixmapRegion, VTABLE_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_R_arc_graphics_g2d_PixmapRegion, "(Larc/graphics/Pixmap;)Larc/graphics/g2d/PixmapRegion;", 1 },
	{ "set", (intptr_t) M_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_g2d_PixmapRegion, VTABLE_arc_graphics_g2d_PixmapRegion_set_arc_graphics_Pixmap_int_int_int_int_R_arc_graphics_g2d_PixmapRegion, "(Larc/graphics/Pixmap;IIII)Larc/graphics/g2d/PixmapRegion;", 1 },
	{ "crop", (intptr_t) M_arc_graphics_g2d_PixmapRegion_crop_R_arc_graphics_Pixmap, VTABLE_arc_graphics_g2d_PixmapRegion_crop_R_arc_graphics_Pixmap, "()Larc/graphics/Pixmap;", 1 },
	{ "crop", (intptr_t) M_arc_graphics_g2d_PixmapRegion_crop_int_int_int_int_R_arc_graphics_Pixmap, VTABLE_arc_graphics_g2d_PixmapRegion_crop_int_int_int_int_R_arc_graphics_Pixmap, "(IIII)Larc/graphics/Pixmap;", 1 },
};

Class class_arc_graphics_g2d_PixmapRegion{
		.nativeName = (intptr_t) "arc/graphics/g2d/PixmapRegion",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_g2d_PixmapRegion),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_PixmapRegion,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_PixmapRegion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_PixmapRegion,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_PixmapRegion = registerClass(&class_arc_graphics_g2d_PixmapRegion);

}
