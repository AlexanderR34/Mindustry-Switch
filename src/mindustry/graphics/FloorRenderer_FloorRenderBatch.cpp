#include "mindustry/graphics/FloorRenderer_FloorRenderBatch.h"
#include "mindustry/graphics/FloorRenderer_FloorRenderBatch.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/gl/Shader.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/Object.h"
#include "arc/util/Disposable.h"
#include "java/lang/String.h"
#include "arc/graphics/g2d/Batch.h"
#include "mindustry/graphics/FloorRenderer.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/util/Pack.h"
#include "arc/graphics/Texture.h"

extern "C" {


void mark_mindustry_graphics_FloorRenderer$FloorRenderBatch(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_FloorRenderer$FloorRenderBatch *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_graphics_FloorRenderer$FloorRenderBatch(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_graphics_g2d_Batch(ctx);
}

void init_mindustry_graphics_FloorRenderer$FloorRenderBatch_mindustry_graphics_FloorRenderer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer$FloorRenderBatch:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_FloorRenderer$FloorRenderBatch(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(398);
	((mindustry_graphics_FloorRenderer$FloorRenderBatch *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_graphics_g2d_Batch(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer$FloorRenderBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7) {
	NULL_CHECK(self);
	jtype frame[42];
	auto stack = &frame[33];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer$FloorRenderBatch:draw", 42 };
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
	LINE_NUMBER(415);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	sp[1].o = (jobject)((mindustry_graphics_FloorRenderer$FloorRenderBatch *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[1].o))->F_texture;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_graphics_FloorRenderer$FloorRenderBatch *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[1].o))->F_error;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(416);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_graphics_FloorRenderer$FloorRenderBatch *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[1].o))->F_error;
	((func_mindustry_graphics_FloorRenderer$FloorRenderBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float])(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f));
	LINE_NUMBER(417);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer$FloorRenderBatch *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_vertices;
	frame[9].o = sp[0].o;
	LINE_NUMBER(421);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer$FloorRenderBatch *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[10].i = ((jint)((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_vidx);
	LINE_NUMBER(422);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer$FloorRenderBatch *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_vidx = (((jint)((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_vidx) + (12));
	LINE_NUMBER(425);
	if ((clinit_mindustry_graphics_FloorRenderer(ctx), (jint)SF_mindustry_graphics_FloorRenderer_growSprites) == 0) goto label_7;
	}
	(sp++)->f = jfloat(0.04f);
	goto label_8;
label_7:;
	INST_FCONST(0);
label_8:;
	{
	sp -= 1;
	frame[11].f = sp[0].f;
	LINE_NUMBER(426);
	frame[2].f = ((frame[2].f) - (frame[11].f));
	LINE_NUMBER(427);
	frame[3].f = ((frame[3].f) - (frame[11].f));
	LINE_NUMBER(428);
	frame[4].f = ((frame[4].f) + (frame[11].f));
	LINE_NUMBER(429);
	frame[5].f = ((frame[5].f) + (frame[11].f));
	LINE_NUMBER(430);
	frame[6].f = ((frame[6].f) + ((frame[11].f) * (jfloat(2))));
	LINE_NUMBER(431);
	frame[7].f = ((frame[7].f) + ((frame[11].f) * (jfloat(2))));
	LINE_NUMBER(433);
	jint temp0 = (jint)SM_arc_math_Mathf_zero_float_R_boolean(ctx, (frame[8].f));
	if (temp0 != 0) goto label_16;
	}
	{
	LINE_NUMBER(435);
	frame[12].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(436);
	frame[13].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(437);
	frame[14].f = (-(frame[4].f));
	LINE_NUMBER(438);
	frame[15].f = (-(frame[5].f));
	LINE_NUMBER(439);
	frame[16].f = ((frame[6].f) - (frame[4].f));
	LINE_NUMBER(440);
	frame[17].f = ((frame[7].f) - (frame[5].f));
	LINE_NUMBER(443);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[8].f));
	frame[18].f = temp0;
	LINE_NUMBER(444);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[8].f));
	frame[19].f = temp1;
	LINE_NUMBER(446);
	frame[20].f = ((((frame[18].f) * (frame[14].f)) - ((frame[19].f) * (frame[15].f))) + (frame[12].f));
	LINE_NUMBER(447);
	frame[21].f = ((((frame[19].f) * (frame[14].f)) + ((frame[18].f) * (frame[15].f))) + (frame[13].f));
	LINE_NUMBER(448);
	frame[22].f = ((((frame[18].f) * (frame[14].f)) - ((frame[19].f) * (frame[17].f))) + (frame[12].f));
	LINE_NUMBER(449);
	frame[23].f = ((((frame[19].f) * (frame[14].f)) + ((frame[18].f) * (frame[17].f))) + (frame[13].f));
	LINE_NUMBER(450);
	frame[24].f = ((((frame[18].f) * (frame[16].f)) - ((frame[19].f) * (frame[17].f))) + (frame[12].f));
	LINE_NUMBER(451);
	frame[25].f = ((((frame[19].f) * (frame[16].f)) + ((frame[18].f) * (frame[17].f))) + (frame[13].f));
	LINE_NUMBER(452);
	frame[26].f = ((frame[20].f) + ((frame[24].f) - (frame[22].f)));
	LINE_NUMBER(453);
	frame[27].f = ((frame[25].f) - ((frame[23].f) - (frame[21].f)));
	LINE_NUMBER(455);
	frame[28].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(456);
	frame[29].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(457);
	frame[30].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(458);
	frame[31].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(460);
	frame[32].f = ((jfloat)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(462);
	sp[0].o = frame[9].o;
	jint temp2 = frame[10].i;
	jfloat temp3 = (jfloat)((func_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float])(ctx, (frame[0].o), (frame[20].f), (frame[21].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = temp3;
	LINE_NUMBER(463);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (jint(1)))) = (frame[32].f);
	LINE_NUMBER(464);
	sp[0].o = frame[9].o;
	jint temp4 = (frame[10].i) + (jint(2));
	jfloat temp5 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, (frame[28].f), (frame[29].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = temp5;
	LINE_NUMBER(466);
	sp[0].o = frame[9].o;
	jint temp6 = (frame[10].i) + (jint(3));
	jfloat temp7 = (jfloat)((func_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float])(ctx, (frame[0].o), (frame[22].f), (frame[23].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = temp7;
	LINE_NUMBER(467);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (jint(4)))) = (frame[32].f);
	LINE_NUMBER(468);
	sp[0].o = frame[9].o;
	jint temp8 = (frame[10].i) + (jint(5));
	jfloat temp9 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, (frame[28].f), (frame[31].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = temp9;
	LINE_NUMBER(470);
	sp[0].o = frame[9].o;
	jint temp10 = (frame[10].i) + (6);
	jfloat temp11 = (jfloat)((func_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float])(ctx, (frame[0].o), (frame[24].f), (frame[25].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp10) = temp11;
	LINE_NUMBER(471);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (7))) = (frame[32].f);
	LINE_NUMBER(472);
	sp[0].o = frame[9].o;
	jint temp12 = (frame[10].i) + (8);
	jfloat temp13 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, (frame[30].f), (frame[31].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp12) = temp13;
	LINE_NUMBER(474);
	sp[0].o = frame[9].o;
	jint temp14 = (frame[10].i) + (9);
	jfloat temp15 = (jfloat)((func_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float])(ctx, (frame[0].o), (frame[26].f), (frame[27].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp14) = temp15;
	LINE_NUMBER(475);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (10))) = (frame[32].f);
	LINE_NUMBER(476);
	sp[0].o = frame[9].o;
	jint temp16 = (frame[10].i) + (11);
	jfloat temp17 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, (frame[30].f), (frame[29].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp16) = temp17;
	LINE_NUMBER(477);
	goto label_51;
	}
label_16:;
	{
	LINE_NUMBER(478);
	frame[12].f = ((frame[2].f) + (frame[6].f));
	LINE_NUMBER(479);
	frame[13].f = ((frame[3].f) + (frame[7].f));
	LINE_NUMBER(480);
	frame[14].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(481);
	frame[15].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(482);
	frame[16].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(483);
	frame[17].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(485);
	frame[18].f = ((jfloat)((arc_graphics_g2d_Batch *) NULL_CHECK((frame[0].o)))->F_colorPacked);
	LINE_NUMBER(487);
	sp[0].o = frame[9].o;
	jint temp0 = frame[10].i;
	jfloat temp1 = (jfloat)((func_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float])(ctx, (frame[0].o), (frame[2].f), (frame[3].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(488);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (jint(1)))) = (frame[18].f);
	LINE_NUMBER(489);
	sp[0].o = frame[9].o;
	jint temp2 = (frame[10].i) + (jint(2));
	jfloat temp3 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, (frame[14].f), (frame[15].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = temp3;
	LINE_NUMBER(491);
	sp[0].o = frame[9].o;
	jint temp4 = (frame[10].i) + (jint(3));
	jfloat temp5 = (jfloat)((func_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float])(ctx, (frame[0].o), (frame[2].f), (frame[13].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = temp5;
	LINE_NUMBER(492);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (jint(4)))) = (frame[18].f);
	LINE_NUMBER(493);
	sp[0].o = frame[9].o;
	jint temp6 = (frame[10].i) + (jint(5));
	jfloat temp7 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, (frame[14].f), (frame[17].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = temp7;
	LINE_NUMBER(495);
	sp[0].o = frame[9].o;
	jint temp8 = (frame[10].i) + (6);
	jfloat temp9 = (jfloat)((func_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float])(ctx, (frame[0].o), (frame[12].f), (frame[13].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = temp9;
	LINE_NUMBER(496);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (7))) = (frame[18].f);
	LINE_NUMBER(497);
	sp[0].o = frame[9].o;
	jint temp10 = (frame[10].i) + (8);
	jfloat temp11 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, (frame[16].f), (frame[17].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp10) = temp11;
	LINE_NUMBER(499);
	sp[0].o = frame[9].o;
	jint temp12 = (frame[10].i) + (9);
	jfloat temp13 = (jfloat)((func_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float])(ctx, (frame[0].o), (frame[12].f), (frame[3].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp12) = temp13;
	LINE_NUMBER(500);
	ARRAY_ACCESS(jfloat, (frame[9].o), ((frame[10].i) + (10))) = (frame[18].f);
	LINE_NUMBER(501);
	sp[0].o = frame[9].o;
	jint temp14 = (frame[10].i) + (11);
	jfloat temp15 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, (frame[16].f), (frame[15].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp14) = temp15;
	}
label_51:;
	LINE_NUMBER(504);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer$FloorRenderBatch:pack", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(507);
	jfloat temp0 = (frame[1].f) + (jfloat(64.0f));
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer$FloorRenderBatch *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp1 = temp0 / ((jfloat)((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_packWidth);
	jfloat temp2 = (frame[2].f) + (jfloat(64.0f));
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer$FloorRenderBatch *) NULL_CHECK((frame[0].o)))->F_this$0;
	jfloat temp3 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, temp1, (temp2 / ((jfloat)((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_packHeight)));
	popStackFrame(ctx);
	return temp3;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer$FloorRenderBatch_flush(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer$FloorRenderBatch:flush", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(513);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer$FloorRenderBatch_setShader_arc_graphics_gl_Shader_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer$FloorRenderBatch:setShader", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(517);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cache shader unsupported"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_FloorRenderer$FloorRenderBatch_draw_arc_graphics_Texture_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/FloorRenderer$FloorRenderBatch:draw", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(522);
	if ((((jarray) nullCheck(ctx, (frame[2].o)))->length) == (20)) goto label_1;
	}
	{
	LINE_NUMBER(523);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"cached vertices must be in non-mixcolor format (20 per sprite, 5 per vertex)"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer$FloorRenderBatch *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_vertices;
	frame[5].o = sp[0].o;
	LINE_NUMBER(527);
	frame[6].o = (frame[2].o);
	LINE_NUMBER(528);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer$FloorRenderBatch *) NULL_CHECK((frame[0].o)))->F_this$0;
	frame[7].i = ((jint)((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_vidx);
	LINE_NUMBER(529);
	frame[8].i = (frame[3].i);
	LINE_NUMBER(532);
	frame[9].i = (jint(0));
	}
label_7:;
	{
	if ((frame[9].i) >= (jint(4))) goto label_8;
	}
	{
	LINE_NUMBER(533);
	sp[0].o = frame[5].o;
	jint temp0 = frame[7].i;
	INST_IINC(7, 1);
	sp[1].o = frame[0].o;
	sp[2].o = frame[6].o;
	jint temp1 = frame[8].i;
	INST_IINC(8, 1);
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, sp[2].o, temp1);
	sp[2].o = frame[6].o;
	jint temp3 = frame[8].i;
	INST_IINC(8, 1);
	jfloat temp4 = (jfloat)((func_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float])(ctx, sp[1].o, temp2, ((jfloat)ARRAY_ACCESS(jfloat, sp[2].o, temp3)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp4;
	LINE_NUMBER(534);
	sp[0].o = frame[5].o;
	jint temp5 = frame[7].i;
	INST_IINC(7, 1);
	sp[1].o = frame[6].o;
	jint temp6 = frame[8].i;
	INST_IINC(8, 1);
	ARRAY_ACCESS(jfloat, sp[0].o, temp5) = ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, temp6));
	LINE_NUMBER(535);
	sp[0].o = frame[5].o;
	jint temp7 = frame[7].i;
	INST_IINC(7, 1);
	sp[1].o = frame[6].o;
	jint temp8 = frame[8].i;
	INST_IINC(8, 1);
	jfloat temp9 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, temp8);
	sp[1].o = frame[6].o;
	jint temp10 = frame[8].i;
	INST_IINC(8, 1);
	jfloat temp11 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, temp9, ((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, temp10)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp7) = temp11;
	LINE_NUMBER(532);
	INST_IINC(9, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(538);
	sp[0].o = (jobject)((mindustry_graphics_FloorRenderer$FloorRenderBatch *) NULL_CHECK((frame[0].o)))->F_this$0;
	((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_vidx = (((jint)((mindustry_graphics_FloorRenderer *) NULL_CHECK(sp[0].o))->F_vidx) + (12));
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_FloorRenderer$FloorRenderBatch[] {
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
	(void *) M_mindustry_graphics_FloorRenderer$FloorRenderBatch_draw_arc_graphics_Texture_Array1_float_int_int,
	(void *) M_mindustry_graphics_FloorRenderer$FloorRenderBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float,
	(void *) M_arc_graphics_g2d_Batch_draw_java_lang_Runnable,
	(void *) M_mindustry_graphics_FloorRenderer$FloorRenderBatch_flush,
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
	(void *) M_mindustry_graphics_FloorRenderer$FloorRenderBatch_setShader_arc_graphics_gl_Shader_boolean,
	(void *) M_arc_graphics_g2d_Batch_getShader_R_arc_graphics_gl_Shader,
	(void *) M_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float,
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
	{ "pack", "(FF)F" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_graphics_FloorRenderer, offsetof(mindustry_graphics_FloorRenderer$FloorRenderBatch, F_this$0), "Lmindustry/graphics/FloorRenderer;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_FloorRenderer$FloorRenderBatch_mindustry_graphics_FloorRenderer, 0, "(Lmindustry/graphics/FloorRenderer;)V", 0 },
	{ "draw", (intptr_t) M_mindustry_graphics_FloorRenderer$FloorRenderBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float, "(Larc/graphics/g2d/TextureRegion;FFFFFFF)V", 4 },
	{ "pack", (intptr_t) M_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float, VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_pack_float_float_R_float, "(FF)F", 0 },
	{ "flush", (intptr_t) M_mindustry_graphics_FloorRenderer$FloorRenderBatch_flush, VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_flush, "()V", 1 },
	{ "setShader", (intptr_t) M_mindustry_graphics_FloorRenderer$FloorRenderBatch_setShader_arc_graphics_gl_Shader_boolean, VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_setShader_arc_graphics_gl_Shader_boolean, "(Larc/graphics/gl/Shader;Z)V", 1 },
	{ "draw", (intptr_t) M_mindustry_graphics_FloorRenderer$FloorRenderBatch_draw_arc_graphics_Texture_Array1_float_int_int, VTABLE_mindustry_graphics_FloorRenderer$FloorRenderBatch_draw_arc_graphics_Texture_Array1_float_int_int, "(Larc/graphics/Texture;[FII)V", 4 },
};

Class class_mindustry_graphics_FloorRenderer$FloorRenderBatch{
		.nativeName = (intptr_t) "mindustry/graphics/FloorRenderer$FloorRenderBatch",
		.parentClass = (intptr_t) &class_arc_graphics_g2d_Batch,
		.size = sizeof(mindustry_graphics_FloorRenderer$FloorRenderBatch),
		.classVtable = (intptr_t) vtable_mindustry_graphics_FloorRenderer$FloorRenderBatch,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_FloorRenderer$FloorRenderBatch,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_FloorRenderer$FloorRenderBatch,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_graphics_FloorRenderer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_FloorRenderer$FloorRenderBatch = registerClass(&class_mindustry_graphics_FloorRenderer$FloorRenderBatch);

}

