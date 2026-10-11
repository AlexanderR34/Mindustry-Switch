#include "arc/graphics/gl/FacedCubemapData.h"
#include "arc/graphics/TextureData.h"
#include "arc/graphics/Cubemap_CubemapSide.h"
#include "arc/graphics/gl/FacedCubemapData.h"
#include "arc/files/Fi.h"
#include "arc/graphics/Pixmap_Format.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "arc/graphics/Pixmap.h"
#include "arc/graphics/CubemapData.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/util/ArcRuntimeException.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/gl/PixmapTextureData.h"

extern "C" {


void mark_arc_graphics_gl_FacedCubemapData(jobject object, jint mark, jint depth) {
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
	auto self = (arc_graphics_gl_FacedCubemapData *) object;
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_arc_graphics_gl_FacedCubemapData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_graphics_gl_FacedCubemapData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FacedCubemapData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	init_arc_graphics_gl_FacedCubemapData_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap(ctx, (frame[0].o), (checkCast(ctx, &class_arc_graphics_Pixmap, (jobject(nullptr)))), (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)), (jobject(nullptr)));
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FacedCubemapData_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FacedCubemapData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = jint(0);
	LINE_NUMBER(27);
	sp[1].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, sp[1].o, temp0);
	sp[2].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[2].o), (jint(0)));
	sp[3].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[3].o), (jint(0)));
	sp[4].o = frame[4].o;
	jint temp1 = jint(0);
	LINE_NUMBER(28);
	sp[4].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, sp[4].o, temp1);
	sp[5].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[5].o), (jint(0)));
	sp[6].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[6].o), (jint(0)));
	LINE_NUMBER(26);
	init_arc_graphics_gl_FacedCubemapData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(30);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FacedCubemapData_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:<init>", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FacedCubemapData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[7].i;
	LINE_NUMBER(35);
	sp[1].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, sp[1].o, temp0);
	sp[2].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[2].o), (frame[7].i));
	sp[3].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[3].o), (frame[7].i));
	sp[4].o = frame[4].o;
	jint temp1 = frame[7].i;
	LINE_NUMBER(36);
	sp[4].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, sp[4].o, temp1);
	sp[5].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[5].o), (frame[7].i));
	sp[6].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[6].o), (frame[7].i));
	LINE_NUMBER(34);
	init_arc_graphics_gl_FacedCubemapData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FacedCubemapData_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:<init>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FacedCubemapData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(42);
	init_arc_graphics_gl_FacedCubemapData_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o), (frame[5].o), (frame[6].o), (jint(0)));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FacedCubemapData_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:<init>", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FacedCubemapData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	LINE_NUMBER(48);
	sp += 1;
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	{
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[0].o, (frame[1].o), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_3:;
	{
	LINE_NUMBER(49);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	INST_ACONST_NULL();
	goto label_5;
label_4:;
	{
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[0].o, (frame[2].o), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_5:;
	{
	LINE_NUMBER(50);
	if ((frame[3].o) != nullptr) goto label_6;
	}
	INST_ACONST_NULL();
	goto label_7;
label_6:;
	{
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[0].o, (frame[3].o), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_7:;
	{
	LINE_NUMBER(51);
	if ((frame[4].o) != nullptr) goto label_8;
	}
	INST_ACONST_NULL();
	goto label_9;
label_8:;
	{
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[0].o, (frame[4].o), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_9:;
	{
	LINE_NUMBER(52);
	if ((frame[5].o) != nullptr) goto label_10;
	}
	INST_ACONST_NULL();
	goto label_11;
label_10:;
	{
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[0].o, (frame[5].o), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_11:;
	{
	LINE_NUMBER(53);
	if ((frame[6].o) != nullptr) goto label_12;
	}
	INST_ACONST_NULL();
	goto label_13;
label_12:;
	{
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[0].o, (frame[6].o), (frame[7].i), (jint(0)));
	sp += 1;
	}
label_13:;
	{
	sp -= 7;
	LINE_NUMBER(47);
	init_arc_graphics_gl_FacedCubemapData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FacedCubemapData_int_int_int_arc_graphics_Pixmap$Format(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:<init>", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FacedCubemapData(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	clinit_arc_graphics_Pixmap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[2].o, (frame[3].i), (frame[2].i));
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[1].o, sp[2].o, (jint(0)), (jint(1)));
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	clinit_arc_graphics_Pixmap(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[3].o, (frame[3].i), (frame[2].i));
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[2].o, sp[3].o, (jint(0)), (jint(1)));
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[3].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	clinit_arc_graphics_Pixmap(ctx);
	sp[4].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[4].o, (frame[1].i), (frame[3].i));
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[3].o, sp[4].o, (jint(0)), (jint(1)));
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[4].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	clinit_arc_graphics_Pixmap(ctx);
	sp[5].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[5].o, (frame[1].i), (frame[3].i));
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[4].o, sp[5].o, (jint(0)), (jint(1)));
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[5].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	clinit_arc_graphics_Pixmap(ctx);
	sp[6].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[6].o, (frame[1].i), (frame[2].i));
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[5].o, sp[6].o, (jint(0)), (jint(1)));
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[6].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	clinit_arc_graphics_Pixmap(ctx);
	sp[7].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_int_int(ctx, sp[7].o, (frame[1].i), (frame[2].i));
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[6].o, sp[7].o, (jint(0)), (jint(1)));
	init_arc_graphics_gl_FacedCubemapData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o, sp[6].o);
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_gl_FacedCubemapData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_gl_FacedCubemapData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	frame[6].o = param5;
	{
	LINE_NUMBER(70);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_arc_graphics_TextureData, (6));
	((arc_graphics_gl_FacedCubemapData *) NULL_CHECK(sp[0].o))->F_data = (jref) sp[1].o;
	LINE_NUMBER(71);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	LINE_NUMBER(72);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[2].o);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (frame[3].o);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (frame[4].o);
	LINE_NUMBER(75);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (frame[5].o);
	LINE_NUMBER(76);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (frame[6].o);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[1].o)))->F_index;
	sp[1].o = (jobject)SM_arc_graphics_TextureData_load_arc_files_Fi_boolean_R_arc_graphics_TextureData(ctx, (frame[2].o), (jint(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_graphics_Pixmap(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:load", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[1].o)))->F_index;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[2].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	{
	clinit_arc_graphics_gl_PixmapTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_PixmapTextureData);
	init_arc_graphics_gl_PixmapTextureData_arc_graphics_Pixmap_boolean_boolean(ctx, sp[0].o, (frame[2].o), (jint(0)), (jint(0)));
	sp += 1;
	}
label_2:;
	{
	sp -= 3;
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_FacedCubemapData_isComplete_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:isComplete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(103);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))) != nullptr) goto label_4;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(103);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(105);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_arc_graphics_gl_FacedCubemapData_getTextureData_arc_graphics_Cubemap$CubemapSide_R_arc_graphics_TextureData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:getTextureData", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK((frame[1].o)))->F_index)));
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_FacedCubemapData_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:getWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(115);
	frame[2].i = (jint(0));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_positiveZ;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_positiveZ;
	jint temp0 = (jint)((func_arc_graphics_TextureData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getWidth_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(117);
	frame[2].i = (frame[1].i);
	}
label_2:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_negativeZ;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_negativeZ;
	jint temp0 = (jint)((func_arc_graphics_TextureData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getWidth_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(119);
	frame[2].i = (frame[1].i);
	}
label_5:;
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_positiveY;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_positiveY;
	jint temp0 = (jint)((func_arc_graphics_TextureData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getWidth_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(121);
	frame[2].i = (frame[1].i);
	}
label_8:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_negativeY;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_negativeY;
	jint temp0 = (jint)((func_arc_graphics_TextureData_getWidth_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getWidth_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_11;
	}
	{
	LINE_NUMBER(123);
	frame[2].i = (frame[1].i);
	}
label_11:;
	{
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jint M_arc_graphics_gl_FacedCubemapData_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:getHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(129);
	frame[2].i = (jint(0));
	LINE_NUMBER(130);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_positiveZ;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_positiveZ;
	jint temp0 = (jint)((func_arc_graphics_TextureData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getHeight_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_2;
	}
	{
	LINE_NUMBER(131);
	frame[2].i = (frame[1].i);
	}
label_2:;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_negativeZ;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_negativeZ;
	jint temp0 = (jint)((func_arc_graphics_TextureData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getHeight_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(133);
	frame[2].i = (frame[1].i);
	}
label_5:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_positiveX;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_8;
	}
	{
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_positiveX;
	jint temp0 = (jint)((func_arc_graphics_TextureData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getHeight_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_8;
	}
	{
	LINE_NUMBER(135);
	frame[2].i = (frame[1].i);
	}
label_8:;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_negativeX;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))) == nullptr) goto label_11;
	}
	{
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	clinit_arc_graphics_Cubemap$CubemapSide(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Cubemap$CubemapSide_negativeX;
	jint temp0 = (jint)((func_arc_graphics_TextureData_getHeight_R_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_getHeight_R_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((arc_graphics_Cubemap$CubemapSide *) NULL_CHECK(sp[1].o))->F_index))));
	frame[1].i = temp0;
	if (temp0 <= (frame[2].i)) goto label_11;
	}
	{
	LINE_NUMBER(137);
	frame[2].i = (frame[1].i);
	}
label_11:;
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jbool M_arc_graphics_gl_FacedCubemapData_isPrepared_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:isPrepared", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FacedCubemapData_prepare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:prepare", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(148);
	jint temp0 = (jint)((func_arc_graphics_gl_FacedCubemapData_isComplete_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_gl_FacedCubemapData_isComplete_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_arc_util_ArcRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_ArcRuntimeException);
	init_arc_util_ArcRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"You need to complete your cubemap data before using it"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_3;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	jint temp0 = (jint)((func_arc_graphics_TextureData_isPrepared_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_isPrepared_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 != 0) goto label_5;
	}
	INST_ALOAD(4);
	POP_N(1); // Pop method args
	((func_arc_graphics_TextureData_prepare) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_prepare, sp[0].o))(ctx, sp[0].o);
label_5:;
	INST_IINC(3, 1);
	goto label_2;
label_3:;
	LINE_NUMBER(150);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_gl_FacedCubemapData_consumeCubemapData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/gl/FacedCubemapData:consumeCubemapData", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(154);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_arc_graphics_TextureData_isCustom_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_isCustom_R_boolean, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	((func_arc_graphics_TextureData_consumeCustomData_int) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_consumeCustomData_int, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))), ((jint(34069)) + (frame[1].i)));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(158);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	sp[0].o = (jobject)((func_arc_graphics_TextureData_consumePixmap_R_arc_graphics_Pixmap) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_consumePixmap_R_arc_graphics_Pixmap, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(159);
	sp[0].o = (jobject)((arc_graphics_gl_FacedCubemapData *) NULL_CHECK((frame[0].o)))->F_data;
	jint temp0 = (jint)((func_arc_graphics_TextureData_disposePixmap_R_boolean) resolveInterfaceMethod(ctx, &class_arc_graphics_TextureData, INDEX_arc_graphics_TextureData_disposePixmap_R_boolean, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)))))(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i))));
	frame[3].i = temp0;
	LINE_NUMBER(160);
	SM_arc_graphics_Gl_pixelStorei_int_int(ctx, (3317), (jint(1)));
	LINE_NUMBER(161);
	jint temp1 = (jint(34069)) + (frame[1].i);
	jint temp2 = jint(0);
	jint temp3 = (jint)((func_arc_graphics_Pixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_getGLInternalFormat_R_int])(ctx, (frame[2].o));
	jint temp4 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_width;
	jint temp5 = (jint)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_height;
	jint temp6 = jint(0);
	sp[0].o = frame[2].o;
	LINE_NUMBER(162);
	jint temp7 = (jint)((func_arc_graphics_Pixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_getGLFormat_R_int])(ctx, sp[0].o);
	jint temp8 = (jint)((func_arc_graphics_Pixmap_getGLType_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_Pixmap_getGLType_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((arc_graphics_Pixmap *) NULL_CHECK((frame[2].o)))->F_pixels;
	LINE_NUMBER(161);
	SM_arc_graphics_Gl_texImage2D_int_int_int_int_int_int_int_int_java_nio_Buffer(ctx, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, sp[0].o);
	LINE_NUMBER(163);
	if ((frame[3].i) == 0) goto label_6;
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, sp[0].o);
label_6:;
	{
	LINE_NUMBER(154);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	LINE_NUMBER(166);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_graphics_gl_FacedCubemapData[] {
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
	(void *) M_arc_graphics_gl_FacedCubemapData_isPrepared_R_boolean,
	(void *) M_arc_graphics_gl_FacedCubemapData_prepare,
	(void *) M_arc_graphics_gl_FacedCubemapData_consumeCubemapData,
	(void *) M_arc_graphics_gl_FacedCubemapData_getWidth_R_int,
	(void *) M_arc_graphics_gl_FacedCubemapData_getHeight_R_int,
	(void *) M_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_files_Fi,
	(void *) M_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_graphics_Pixmap,
	(void *) M_arc_graphics_gl_FacedCubemapData_isComplete_R_boolean,
	(void *) M_arc_graphics_gl_FacedCubemapData_getTextureData_arc_graphics_Cubemap$CubemapSide_R_arc_graphics_TextureData,
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
	{ "isPrepared", "()Z" },
	{ "prepare", "()V" },
	{ "consumeCubemapData", "()V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "load", "(Larc/graphics/Cubemap$CubemapSide;Larc/files/Fi;)V" },
	{ "load", "(Larc/graphics/Cubemap$CubemapSide;Larc/graphics/Pixmap;)V" },
	{ "isComplete", "()Z" },
	{ "getTextureData", "(Larc/graphics/Cubemap$CubemapSide;)Larc/graphics/TextureData;" },
};

static jclass interfaces[] { &class_arc_graphics_CubemapData, };

static FieldMetadata fields[] {
	{ "data", getArrayClass(&class_arc_graphics_TextureData, 1), offsetof(arc_graphics_gl_FacedCubemapData, F_data), "[Larc/graphics/TextureData;", 20 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_gl_FacedCubemapData, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FacedCubemapData_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi, 0, "(Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FacedCubemapData_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_arc_files_Fi_boolean, 0, "(Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Larc/files/Fi;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FacedCubemapData_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap, 0, "(Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FacedCubemapData_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_arc_graphics_Pixmap_boolean, 0, "(Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Larc/graphics/Pixmap;Z)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FacedCubemapData_int_int_int_arc_graphics_Pixmap$Format, 0, "(IIILarc/graphics/Pixmap$Format;)V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_gl_FacedCubemapData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData_arc_graphics_TextureData, 0, "(Larc/graphics/TextureData;Larc/graphics/TextureData;Larc/graphics/TextureData;Larc/graphics/TextureData;Larc/graphics/TextureData;Larc/graphics/TextureData;)V", 1 },
	{ "load", (intptr_t) M_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_files_Fi, VTABLE_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_files_Fi, "(Larc/graphics/Cubemap$CubemapSide;Larc/files/Fi;)V", 1 },
	{ "load", (intptr_t) M_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_graphics_Pixmap, VTABLE_arc_graphics_gl_FacedCubemapData_load_arc_graphics_Cubemap$CubemapSide_arc_graphics_Pixmap, "(Larc/graphics/Cubemap$CubemapSide;Larc/graphics/Pixmap;)V", 1 },
	{ "isComplete", (intptr_t) M_arc_graphics_gl_FacedCubemapData_isComplete_R_boolean, VTABLE_arc_graphics_gl_FacedCubemapData_isComplete_R_boolean, "()Z", 1 },
	{ "getTextureData", (intptr_t) M_arc_graphics_gl_FacedCubemapData_getTextureData_arc_graphics_Cubemap$CubemapSide_R_arc_graphics_TextureData, VTABLE_arc_graphics_gl_FacedCubemapData_getTextureData_arc_graphics_Cubemap$CubemapSide_R_arc_graphics_TextureData, "(Larc/graphics/Cubemap$CubemapSide;)Larc/graphics/TextureData;", 1 },
	{ "getWidth", (intptr_t) M_arc_graphics_gl_FacedCubemapData_getWidth_R_int, VTABLE_arc_graphics_gl_FacedCubemapData_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_arc_graphics_gl_FacedCubemapData_getHeight_R_int, VTABLE_arc_graphics_gl_FacedCubemapData_getHeight_R_int, "()I", 1 },
	{ "isPrepared", (intptr_t) M_arc_graphics_gl_FacedCubemapData_isPrepared_R_boolean, VTABLE_arc_graphics_gl_FacedCubemapData_isPrepared_R_boolean, "()Z", 1 },
	{ "prepare", (intptr_t) M_arc_graphics_gl_FacedCubemapData_prepare, VTABLE_arc_graphics_gl_FacedCubemapData_prepare, "()V", 1 },
	{ "consumeCubemapData", (intptr_t) M_arc_graphics_gl_FacedCubemapData_consumeCubemapData, VTABLE_arc_graphics_gl_FacedCubemapData_consumeCubemapData, "()V", 1 },
};

Class class_arc_graphics_gl_FacedCubemapData{
		.nativeName = (intptr_t) "arc/graphics/gl/FacedCubemapData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_graphics_gl_FacedCubemapData),
		.classVtable = (intptr_t) vtable_arc_graphics_gl_FacedCubemapData,
		.staticInitializer = (intptr_t) clinit_arc_graphics_gl_FacedCubemapData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_gl_FacedCubemapData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_gl_FacedCubemapData = registerClass(&class_arc_graphics_gl_FacedCubemapData);

}
