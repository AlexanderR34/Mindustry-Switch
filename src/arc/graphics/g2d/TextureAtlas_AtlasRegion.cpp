#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/graphics/g2d/PixmapRegion.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "java/lang/String.h"
#include "arc/graphics/Texture.h"

extern "C" {


void mark_arc_graphics_g2d_TextureAtlas$AtlasRegion(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_g2d_TextureRegion(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_g2d_TextureAtlas$AtlasRegion *) object;
	if (self->F_pixmapRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pixmapRegion)->clazz)->markFunction)((jobject) self->F_pixmapRegion, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_splits)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_splits)->clazz)->markFunction)((jobject) self->F_splits, mark, depth + 1);
	if (self->F_pads)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pads)->clazz)->markFunction)((jobject) self->F_pads, mark, depth + 1);
}

void clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
}

void init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_Texture_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$AtlasRegion:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(459);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture_int_int_int_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(460);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalWidth = (frame[4].i);
	LINE_NUMBER(461);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalHeight = (frame[5].i);
	LINE_NUMBER(462);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedWidth = (frame[4].i);
	LINE_NUMBER(463);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedHeight = (frame[5].i);
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$AtlasRegion:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(466);
	init_arc_graphics_g2d_TextureRegion(ctx, (frame[0].o));
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_g2d_TextureAtlas$AtlasRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$AtlasRegion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(470);
	init_arc_graphics_g2d_TextureRegion(ctx, (frame[0].o));
	LINE_NUMBER(471);
	((func_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_name;
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(473);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_offsetX = ((jfloat)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_offsetX);
	LINE_NUMBER(474);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_offsetY = ((jfloat)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_offsetY);
	LINE_NUMBER(475);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedWidth = ((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_packedWidth);
	LINE_NUMBER(476);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedHeight = ((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_packedHeight);
	LINE_NUMBER(477);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalWidth = ((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_originalWidth);
	LINE_NUMBER(478);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalHeight = ((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_originalHeight);
	LINE_NUMBER(479);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_rotate = ((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_rotate);
	LINE_NUMBER(480);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[1].o)))->F_splits;
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_splits = (jref) sp[1].o;
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$AtlasRegion:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(483);
	init_arc_graphics_g2d_TextureRegion(ctx, (frame[0].o));
	LINE_NUMBER(484);
	((func_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_set_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(485);
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8"unknown"_j)));
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$AtlasRegion:flip", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(491);
	M_arc_graphics_g2d_TextureRegion_flip_boolean_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(492);
	if ((frame[1].i) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat(((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalWidth))) - ((jfloat)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_offsetX);
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float])(ctx, (frame[0].o));
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetX = (temp0 - temp1);
	}
label_2:;
	{
	LINE_NUMBER(493);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat(((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_originalHeight))) - ((jfloat)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_offsetY);
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float])(ctx, (frame[0].o));
	((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK(sp[0].o))->F_offsetY = (temp0 - temp1);
	}
label_3:;
	LINE_NUMBER(494);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$AtlasRegion:getRotatedPackedWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(501);
	if (((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_1;
	}
	{
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedHeight));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedWidth));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$AtlasRegion:getRotatedPackedHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(509);
	if (((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_rotate) == 0) goto label_1;
	}
	{
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedWidth));
	sp[0].f = temp0;
	sp += 1;
	goto label_2;
	}
label_1:;
	{
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_packedHeight));
	sp[0].f = temp0;
	sp += 1;
	}
label_2:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jobject M_arc_graphics_g2d_TextureAtlas$AtlasRegion_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g2d/TextureAtlas$AtlasRegion:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(513);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g2d_TextureAtlas$AtlasRegion[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_graphics_g2d_TextureAtlas$AtlasRegion_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_arc_graphics_g2d_TextureRegion_asAtlas_R_arc_graphics_g2d_TextureAtlas$AtlasRegion,
	(void *) M_arc_graphics_g2d_TextureRegion_found_R_boolean,
	(void *) M_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture,
	(void *) M_arc_graphics_g2d_TextureRegion_set_int_int_int_int_R_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_TextureRegion_set_float_float_float_float,
	(void *) M_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion_int_int_int_int,
	(void *) M_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture_int_int_int_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setU_float,
	(void *) M_arc_graphics_g2d_TextureRegion_setV_float,
	(void *) M_arc_graphics_g2d_TextureRegion_setU2_float,
	(void *) M_arc_graphics_g2d_TextureRegion_setV2_float,
	(void *) M_arc_graphics_g2d_TextureRegion_getX_R_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setX_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setX_float,
	(void *) M_arc_graphics_g2d_TextureRegion_getY_R_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setY_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setY_float,
	(void *) M_arc_graphics_g2d_TextureRegion_setWidth_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setHeight_int,
	(void *) M_arc_graphics_g2d_TextureRegion_setWidth_float,
	(void *) M_arc_graphics_g2d_TextureRegion_setHeight_float,
	(void *) M_arc_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean,
	(void *) M_arc_graphics_g2d_TextureRegion_ratio_R_float,
	(void *) M_arc_graphics_g2d_TextureRegion_isFlipX_R_boolean,
	(void *) M_arc_graphics_g2d_TextureRegion_isFlipY_R_boolean,
	(void *) M_arc_graphics_g2d_TextureRegion_scroll_float_float,
	(void *) M_arc_graphics_g2d_TextureRegion_split_int_int_R_Array2_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_graphics_g2d_TextureRegion_scl_R_float,
	(void *) M_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float,
	(void *) M_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float,
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
	{ "asAtlas", "()Larc/graphics/g2d/TextureAtlas$AtlasRegion;" },
	{ "found", "()Z" },
	{ "set", "(Larc/graphics/Texture;)V" },
	{ "set", "(IIII)Larc/graphics/g2d/TextureRegion;" },
	{ "set", "(FFFF)V" },
	{ "set", "(Larc/graphics/g2d/TextureRegion;)V" },
	{ "set", "(Larc/graphics/g2d/TextureRegion;IIII)V" },
	{ "set", "(Larc/graphics/Texture;IIII)V" },
	{ "setU", "(F)V" },
	{ "setV", "(F)V" },
	{ "setU2", "(F)V" },
	{ "setV2", "(F)V" },
	{ "getX", "()I" },
	{ "setX", "(I)V" },
	{ "setX", "(F)V" },
	{ "getY", "()I" },
	{ "setY", "(I)V" },
	{ "setY", "(F)V" },
	{ "setWidth", "(I)V" },
	{ "setHeight", "(I)V" },
	{ "setWidth", "(F)V" },
	{ "setHeight", "(F)V" },
	{ "flip", "(ZZ)V" },
	{ "ratio", "()F" },
	{ "isFlipX", "()Z" },
	{ "isFlipY", "()Z" },
	{ "scroll", "(FF)V" },
	{ "split", "(II)[[Larc/graphics/g2d/TextureRegion;" },
	{ "scl", "()F" },
	{ "getRotatedPackedWidth", "()F" },
	{ "getRotatedPackedHeight", "()F" },
};

static FieldMetadata fields[] {
	{ "pixmapRegion", &class_arc_graphics_g2d_PixmapRegion, offsetof(arc_graphics_g2d_TextureAtlas$AtlasRegion, F_pixmapRegion), "Larc/graphics/g2d/PixmapRegion;", 1 },
	{ "name", &class_java_lang_String, offsetof(arc_graphics_g2d_TextureAtlas$AtlasRegion, F_name), "Ljava/lang/String;", 1 },
	{ "offsetX", &class_float, offsetof(arc_graphics_g2d_TextureAtlas$AtlasRegion, F_offsetX), "F", 1 },
	{ "offsetY", &class_float, offsetof(arc_graphics_g2d_TextureAtlas$AtlasRegion, F_offsetY), "F", 1 },
	{ "packedWidth", &class_int, offsetof(arc_graphics_g2d_TextureAtlas$AtlasRegion, F_packedWidth), "I", 1 },
	{ "packedHeight", &class_int, offsetof(arc_graphics_g2d_TextureAtlas$AtlasRegion, F_packedHeight), "I", 1 },
	{ "originalWidth", &class_int, offsetof(arc_graphics_g2d_TextureAtlas$AtlasRegion, F_originalWidth), "I", 1 },
	{ "originalHeight", &class_int, offsetof(arc_graphics_g2d_TextureAtlas$AtlasRegion, F_originalHeight), "I", 1 },
	{ "rotate", &class_boolean, offsetof(arc_graphics_g2d_TextureAtlas$AtlasRegion, F_rotate), "Z", 1 },
	{ "splits", getArrayClass(&class_int, 1), offsetof(arc_graphics_g2d_TextureAtlas$AtlasRegion, F_splits), "[I", 1 },
	{ "pads", getArrayClass(&class_int, 1), offsetof(arc_graphics_g2d_TextureAtlas$AtlasRegion, F_pads), "[I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_Texture_int_int_int_int, 0, "(Larc/graphics/Texture;IIII)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas$AtlasRegion, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_g2d_TextureAtlas$AtlasRegion, 0, "(Larc/graphics/g2d/TextureAtlas$AtlasRegion;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g2d_TextureAtlas$AtlasRegion_arc_graphics_g2d_TextureRegion, 0, "(Larc/graphics/g2d/TextureRegion;)V", 1 },
	{ "flip", (intptr_t) M_arc_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean, VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_flip_boolean_boolean, "(ZZ)V", 1 },
	{ "getRotatedPackedWidth", (intptr_t) M_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float, VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedWidth_R_float, "()F", 1 },
	{ "getRotatedPackedHeight", (intptr_t) M_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float, VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_getRotatedPackedHeight_R_float, "()F", 1 },
	{ "toString", (intptr_t) M_arc_graphics_g2d_TextureAtlas$AtlasRegion_toString_R_java_lang_String, VTABLE_arc_graphics_g2d_TextureAtlas$AtlasRegion_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_arc_graphics_g2d_TextureAtlas$AtlasRegion{
		.nativeName = (intptr_t) "arc/graphics/g2d/TextureAtlas$AtlasRegion",
		.parentClass = (intptr_t) &class_arc_graphics_g2d_TextureRegion,
		.size = sizeof(arc_graphics_g2d_TextureAtlas$AtlasRegion),
		.classVtable = (intptr_t) vtable_arc_graphics_g2d_TextureAtlas$AtlasRegion,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g2d_TextureAtlas$AtlasRegion,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g2d_TextureAtlas$AtlasRegion,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_graphics_g2d_TextureAtlas,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 42,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g2d_TextureAtlas$AtlasRegion = registerClass(&class_arc_graphics_g2d_TextureAtlas$AtlasRegion);

}

