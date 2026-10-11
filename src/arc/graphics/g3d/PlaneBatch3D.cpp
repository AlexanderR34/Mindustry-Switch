#include "arc/graphics/g3d/PlaneBatch3D.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/g3d/VertexBatch3D.h"
#include "arc/graphics/g2d/Batch.h"
#include "arc/math/geom/Mat3D.h"
#include "arc/graphics/g3d/PlaneBatch3D.h"
#include "arc/graphics/Gl.h"
#include "arc/graphics/Texture.h"
#include "arc/math/geom/Vec3.h"

extern "C" {


void mark_arc_graphics_g3d_PlaneBatch3D(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_graphics_g2d_Batch(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_graphics_g3d_PlaneBatch3D *) object;
	if (self->F_up)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_up)->clazz)->markFunction)((jobject) self->F_up, mark, depth + 1);
	if (self->F_right)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_right)->clazz)->markFunction)((jobject) self->F_right, mark, depth + 1);
	if (self->F_origin)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_origin)->clazz)->markFunction)((jobject) self->F_origin, mark, depth + 1);
	if (self->F_vec)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vec)->clazz)->markFunction)((jobject) self->F_vec, mark, depth + 1);
	if (self->F_batch)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_batch)->clazz)->markFunction)((jobject) self->F_batch, mark, depth + 1);
	if (self->F_vertex)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertex)->clazz)->markFunction)((jobject) self->F_vertex, mark, depth + 1);
}

void clinit_arc_graphics_g3d_PlaneBatch3D(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_g2d_Batch(ctx);
}

void init_arc_graphics_g3d_PlaneBatch3D(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/PlaneBatch3D:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g3d_PlaneBatch3D(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_arc_graphics_g3d_PlaneBatch3D_int(ctx, (frame[0].o), (5000));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_graphics_g3d_PlaneBatch3D_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/PlaneBatch3D:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_graphics_g3d_PlaneBatch3D(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(19);
	init_arc_graphics_g2d_Batch(ctx, (frame[0].o));
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK(sp[0].o))->F_up = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK(sp[0].o))->F_right = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK(sp[0].o))->F_origin = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[1].o);
	((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK(sp[0].o))->F_vec = (jref) sp[1].o;
	LINE_NUMBER(12);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (6));
	((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK(sp[0].o))->F_vertex = (jref) sp[1].o;
	LINE_NUMBER(13);
	((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_scaling = (jfloat(1));
	LINE_NUMBER(20);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g3d_VertexBatch3D(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g3d_VertexBatch3D);
	init_arc_graphics_g3d_VertexBatch3D_int_boolean_boolean_int(ctx, sp[1].o, (frame[1].i), (jint(0)), (jint(1)), (jint(1)));
	((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK(sp[0].o))->F_batch = (jref) sp[1].o;
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_PlaneBatch3D_setScaling_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/PlaneBatch3D:setScaling", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(25);
	((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_scaling = (frame[1].f);
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_PlaneBatch3D_setPlane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/PlaneBatch3D:setPlane", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(31);
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(32);
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_right;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_PlaneBatch3D_proj_arc_math_geom_Mat3D(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/PlaneBatch3D:proj", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g3d_VertexBatch3D_proj_arc_math_geom_Mat3D) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_proj_arc_math_geom_Mat3D])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_PlaneBatch3D_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/PlaneBatch3D:flush", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	if (((jint)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_idx) != 0) goto label_2;
	}
label_1:;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(46);
	SM_arc_graphics_Gl_depthMask_boolean(ctx, (jint(0)));
	LINE_NUMBER(48);
	sp[0].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	((func_arc_graphics_Texture_bind) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_bind])(ctx, sp[0].o);
	LINE_NUMBER(49);
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_batch;
	((func_arc_graphics_g3d_VertexBatch3D_flush_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_flush_int])(ctx, sp[0].o, (jint(4)));
	LINE_NUMBER(50);
	((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_idx = (jint(0));
	LINE_NUMBER(52);
	SM_arc_graphics_Gl_depthMask_boolean(ctx, (jint(1)));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	NULL_CHECK(self);
	jtype frame[37];
	auto stack = &frame[31];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/PlaneBatch3D:draw", 37 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	frame[8].f = param7;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	frame[9].o = sp[0].o;
	LINE_NUMBER(59);
	sp[0].o = frame[9].o;
	sp[1].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(60);
	((func_arc_graphics_g3d_PlaneBatch3D_switchTexture_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_PlaneBatch3D_switchTexture_arc_graphics_Texture])(ctx, (frame[0].o), (frame[9].o));
	}
label_2:;
	{
	LINE_NUMBER(63);
	M_arc_graphics_g3d_PlaneBatch3D_checkFlush(ctx, (frame[0].o));
	LINE_NUMBER(65);
	frame[10].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(66);
	frame[11].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(67);
	frame[12].f = (-(frame[4].f));
	LINE_NUMBER(68);
	frame[13].f = (-(frame[5].f));
	LINE_NUMBER(69);
	frame[14].f = ((frame[6].f) - (frame[4].f));
	LINE_NUMBER(70);
	frame[15].f = ((frame[7].f) - (frame[5].f));
	LINE_NUMBER(82);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[8].f));
	frame[24].f = temp0;
	LINE_NUMBER(83);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[8].f));
	frame[25].f = temp1;
	LINE_NUMBER(85);
	frame[16].f = (((frame[24].f) * (frame[12].f)) - ((frame[25].f) * (frame[13].f)));
	LINE_NUMBER(86);
	frame[17].f = (((frame[25].f) * (frame[12].f)) + ((frame[24].f) * (frame[13].f)));
	LINE_NUMBER(88);
	frame[18].f = (((frame[24].f) * (frame[12].f)) - ((frame[25].f) * (frame[15].f)));
	LINE_NUMBER(89);
	frame[19].f = (((frame[25].f) * (frame[12].f)) + ((frame[24].f) * (frame[15].f)));
	LINE_NUMBER(91);
	frame[20].f = (((frame[24].f) * (frame[14].f)) - ((frame[25].f) * (frame[15].f)));
	LINE_NUMBER(92);
	frame[21].f = (((frame[25].f) * (frame[14].f)) + ((frame[24].f) * (frame[15].f)));
	LINE_NUMBER(94);
	frame[22].f = ((frame[16].f) + ((frame[20].f) - (frame[18].f)));
	LINE_NUMBER(95);
	frame[23].f = ((frame[21].f) - ((frame[19].f) - (frame[17].f)));
	LINE_NUMBER(97);
	frame[16].f = ((frame[16].f) + (frame[10].f));
	LINE_NUMBER(98);
	frame[17].f = ((frame[17].f) + (frame[11].f));
	LINE_NUMBER(99);
	frame[18].f = ((frame[18].f) + (frame[10].f));
	LINE_NUMBER(100);
	frame[19].f = ((frame[19].f) + (frame[11].f));
	LINE_NUMBER(101);
	frame[20].f = ((frame[20].f) + (frame[10].f));
	LINE_NUMBER(102);
	frame[21].f = ((frame[21].f) + (frame[11].f));
	LINE_NUMBER(103);
	frame[22].f = ((frame[22].f) + (frame[10].f));
	LINE_NUMBER(104);
	frame[23].f = ((frame[23].f) + (frame[11].f));
	LINE_NUMBER(106);
	frame[26].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(107);
	frame[27].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(108);
	frame[28].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(109);
	frame[29].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(110);
	frame[30].f = ((jfloat)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(112);
	M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(ctx, (frame[0].o), (frame[18].f), (frame[19].f), (frame[30].f), (frame[26].f), (frame[29].f));
	LINE_NUMBER(113);
	M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(ctx, (frame[0].o), (frame[16].f), (frame[17].f), (frame[30].f), (frame[26].f), (frame[27].f));
	LINE_NUMBER(114);
	M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(ctx, (frame[0].o), (frame[20].f), (frame[21].f), (frame[30].f), (frame[28].f), (frame[29].f));
	LINE_NUMBER(116);
	M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(ctx, (frame[0].o), (frame[22].f), (frame[23].f), (frame[30].f), (frame[28].f), (frame[27].f));
	LINE_NUMBER(117);
	M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(ctx, (frame[0].o), (frame[20].f), (frame[21].f), (frame[30].f), (frame[28].f), (frame[29].f));
	LINE_NUMBER(118);
	M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(ctx, (frame[0].o), (frame[16].f), (frame[17].f), (frame[30].f), (frame[26].f), (frame[27].f));
	LINE_NUMBER(120);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_idx = (((jint)((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_idx) + (jint(1)));
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/PlaneBatch3D:draw", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_lastTexture;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(126);
	((func_arc_graphics_g3d_PlaneBatch3D_switchTexture_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_PlaneBatch3D_switchTexture_arc_graphics_Texture])(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(129);
	frame[5].i = (frame[3].i);
	}
label_3:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(130);
	M_arc_graphics_g3d_PlaneBatch3D_checkFlush(ctx, (frame[0].o));
	LINE_NUMBER(132);
	M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[5].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (jint(2))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (jint(3))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (jint(4))))));
	LINE_NUMBER(133);
	M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (12)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (13)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (14)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (15)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (16)))));
	LINE_NUMBER(134);
	M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (6)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (7)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (8)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (9)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (10)))));
	LINE_NUMBER(136);
	M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (12)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (13)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (14)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (15)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (16)))));
	LINE_NUMBER(137);
	M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), (frame[5].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (jint(1))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (jint(2))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (jint(3))))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (jint(4))))));
	LINE_NUMBER(138);
	M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(ctx, (frame[0].o), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (18)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (19)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (20)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (21)))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[2].o), ((frame[5].i) + (22)))));
	LINE_NUMBER(140);
	sp[0].o = frame[0].o;
	((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_idx = (((jint)((arc_graphics_g2d_Batch *) NULL_CHECK(sp[0].o))->F_idx) + (jint(1)));
	LINE_NUMBER(129);
	INST_IINC(5, 24);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(142);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_PlaneBatch3D_checkFlush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/PlaneBatch3D:checkFlush", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(145);
	jint temp0 = (jint)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_idx;
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_batch;
	jint temp1 = (jint)((func_arc_graphics_g3d_VertexBatch3D_getMaxVertices_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_getMaxVertices_R_int])(ctx, sp[0].o);
	if (temp0 < ((temp1 / (6)) / (6))) goto label_1;
	}
	{
	LINE_NUMBER(146);
	((func_arc_graphics_g3d_PlaneBatch3D_flush) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_g3d_PlaneBatch3D_flush])(ctx, (frame[0].o));
	}
label_1:;
	LINE_NUMBER(148);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/graphics/g3d/PlaneBatch3D:vertex", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(151);
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_vec;
	sp[1].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_origin;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_right;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, ((frame[1].f) * ((jfloat)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_scaling)));
	sp[1].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_up;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o, ((frame[2].f) * ((jfloat)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_scaling)));
	LINE_NUMBER(152);
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_vertex;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_vec;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(153);
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_vertex;
	jint temp1 = jint(1);
	sp[1].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_vec;
	ARRAY_ACCESS(jfloat, sp[0].o, temp1) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(154);
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_vertex;
	jint temp2 = jint(2);
	sp[1].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_vec;
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[1].o))->F_z);
	LINE_NUMBER(155);
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_vertex;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(3))) = (frame[3].f);
	LINE_NUMBER(156);
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_vertex;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(4))) = (frame[4].f);
	LINE_NUMBER(157);
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_vertex;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(5))) = (frame[5].f);
	LINE_NUMBER(158);
	sp[0].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_batch;
	sp[1].o = (jobject)((arc_graphics_g3d_PlaneBatch3D *) NULL_CHECK((frame[0].o)))->F_vertex;
	((func_arc_graphics_g3d_VertexBatch3D_vertex_Array1_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g3d_VertexBatch3D_vertex_Array1_float])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(159);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_graphics_g3d_PlaneBatch3D[] {
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
	(void *) M_arc_graphics_g2d_Batch_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_arc_graphics_g2d_Batch_z_float,
	(void *) M_arc_graphics_g2d_Batch_setSort_boolean,
	(void *) M_arc_graphics_g2d_Batch_setPackedColor_float,
	(void *) M_arc_graphics_g2d_Batch_getPackedColor_R_float,
	(void *) M_arc_graphics_g2d_Batch_setPackedMixColor_float,
	(void *) M_arc_graphics_g2d_Batch_getPackedMixColor_R_float,
	(void *) M_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_Texture_Array1_float_int_int,
	(void *) M_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float,
	(void *) M_arc_graphics_g2d_Batch_draw_java_lang_Runnable,
	(void *) M_arc_graphics_g3d_PlaneBatch3D_flush,
	(void *) M_arc_graphics_g2d_Batch_discard,
	(void *) M_arc_graphics_g2d_Batch_setBlending_arc_graphics_Blending,
	(void *) M_arc_graphics_g2d_Batch_getBlending_R_arc_graphics_Blending,
	(void *) M_arc_graphics_g2d_Batch_getProjection_R_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_getTransform_R_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setProjection_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setTransform_arc_math_Mat,
	(void *) M_arc_graphics_g2d_Batch_setupMatrices,
	(void *) M_arc_graphics_g2d_Batch_switchTexture_arc_graphics_Texture,
	(void *) M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_g2d_Batch_setShader_arc_graphics_gl_Shader_boolean,
	(void *) M_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader,
	(void *) M_arc_graphics_g3d_PlaneBatch3D_setScaling_float,
	(void *) M_arc_graphics_g3d_PlaneBatch3D_setPlane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3,
	(void *) M_arc_graphics_g3d_PlaneBatch3D_proj_arc_math_geom_Mat3D,
	(void *) M_arc_graphics_g3d_PlaneBatch3D_checkFlush,
	(void *) M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float,
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
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "z", "(F)V" },
	{ "setSort", "(Z)V" },
	{ "setPackedColor", "(F)V" },
	{ "getPackedColor", "()F" },
	{ "setPackedMixColor", "(F)V" },
	{ "getPackedMixColor", "()F" },
	{ "draw", "(Larc/graphics/Texture;[FII)V" },
	{ "draw", "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V" },
	{ "draw", "(Ljava/lang/Runnable;)V" },
	{ "flush", "()V" },
	{ "discard", "()V" },
	{ "setBlending", "(Larc/graphics/Blending;)V" },
	{ "getBlending", "()Larc/graphics/Blending;" },
	{ "getProjection", "()Larc/math/Mat;" },
	{ "getTransform", "()Larc/math/Mat;" },
	{ "setProjection", "(Larc/math/Mat;)V" },
	{ "setTransform", "(Larc/math/Mat;)V" },
	{ "setupMatrices", "()V" },
	{ "switchTexture", "(Larc/graphics/Texture;)V" },
	{ "setShader", "(Larc/graphics/gl/Shader;)V" },
	{ "setShader", "(Larc/graphics/gl/Shader;Z)V" },
	{ "getShader", "()Larc/graphics/gl/Shader;" },
	{ "setScaling", "(F)V" },
	{ "setPlane", "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V" },
	{ "proj", "(Larc/math/geom/Mat3D;)V" },
	{ "checkFlush", "()V" },
	{ "vertex", "(FFFFF)V" },
};

static FieldMetadata fields[] {
	{ "up", &class_arc_math_geom_Vec3, offsetof(arc_graphics_g3d_PlaneBatch3D, F_up), "Larc/math/geom/Vec3;", 20 },
	{ "right", &class_arc_math_geom_Vec3, offsetof(arc_graphics_g3d_PlaneBatch3D, F_right), "Larc/math/geom/Vec3;", 20 },
	{ "origin", &class_arc_math_geom_Vec3, offsetof(arc_graphics_g3d_PlaneBatch3D, F_origin), "Larc/math/geom/Vec3;", 20 },
	{ "vec", &class_arc_math_geom_Vec3, offsetof(arc_graphics_g3d_PlaneBatch3D, F_vec), "Larc/math/geom/Vec3;", 20 },
	{ "batch", &class_arc_graphics_g3d_VertexBatch3D, offsetof(arc_graphics_g3d_PlaneBatch3D, F_batch), "Larc/graphics/g3d/VertexBatch3D;", 20 },
	{ "vertex", getArrayClass(&class_float, 1), offsetof(arc_graphics_g3d_PlaneBatch3D, F_vertex), "[F", 20 },
	{ "scaling", &class_float, offsetof(arc_graphics_g3d_PlaneBatch3D, F_scaling), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_graphics_g3d_PlaneBatch3D, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_graphics_g3d_PlaneBatch3D_int, 0, "(I)V", 1 },
	{ "setScaling", (intptr_t) M_arc_graphics_g3d_PlaneBatch3D_setScaling_float, VTABLE_arc_graphics_g3d_PlaneBatch3D_setScaling_float, "(F)V", 1 },
	{ "setPlane", (intptr_t) M_arc_graphics_g3d_PlaneBatch3D_setPlane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3, VTABLE_arc_graphics_g3d_PlaneBatch3D_setPlane_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)V", 1 },
	{ "proj", (intptr_t) M_arc_graphics_g3d_PlaneBatch3D_proj_arc_math_geom_Mat3D, VTABLE_arc_graphics_g3d_PlaneBatch3D_proj_arc_math_geom_Mat3D, "(Larc/math/geom/Mat3D;)V", 1 },
	{ "flush", (intptr_t) M_arc_graphics_g3d_PlaneBatch3D_flush, VTABLE_arc_graphics_g3d_PlaneBatch3D_flush, "()V", 4 },
	{ "draw", (intptr_t) M_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, VTABLE_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V", 4 },
	{ "draw", (intptr_t) M_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_Texture_Array1_float_int_int, VTABLE_arc_graphics_g3d_PlaneBatch3D_draw_arc_graphics_Texture_Array1_float_int_int, "(Larc/graphics/Texture;[FII)V", 4 },
	{ "checkFlush", (intptr_t) M_arc_graphics_g3d_PlaneBatch3D_checkFlush, VTABLE_arc_graphics_g3d_PlaneBatch3D_checkFlush, "()V", 2 },
	{ "vertex", (intptr_t) M_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float, VTABLE_arc_graphics_g3d_PlaneBatch3D_vertex_float_float_float_float_float, "(FFFFF)V", 2 },
};

Class class_arc_graphics_g3d_PlaneBatch3D{
		.nativeName = (intptr_t) "arc/graphics/g3d/PlaneBatch3D",
		.parentClass = (intptr_t) &class_arc_graphics_g2d_Batch,
		.size = sizeof(arc_graphics_g3d_PlaneBatch3D),
		.classVtable = (intptr_t) vtable_arc_graphics_g3d_PlaneBatch3D,
		.staticInitializer = (intptr_t) clinit_arc_graphics_g3d_PlaneBatch3D,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_graphics_g3d_PlaneBatch3D,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 40,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_graphics_g3d_PlaneBatch3D = registerClass(&class_arc_graphics_g3d_PlaneBatch3D);

}
