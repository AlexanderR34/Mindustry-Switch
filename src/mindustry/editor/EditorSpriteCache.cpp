#include "mindustry/editor/EditorSpriteCache.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/GLTexture.h"
#include "arc/util/Disposable.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "arc/graphics/VertexAttribute.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/graphics/gl/IndexData.h"
#include "arc/struct/IntSeq.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/struct/Seq.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/Pack.h"
#include "mindustry/editor/EditorSpriteCache.h"
#include "arc/graphics/Mesh.h"

extern "C" {

jint SF_mindustry_editor_EditorSpriteCache_vertexSize;

void mark_mindustry_editor_EditorSpriteCache(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_editor_EditorSpriteCache *) object;
	if (self->F_mesh)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_mesh)->clazz)->markFunction)((jobject) self->F_mesh, mark, depth + 1);
	if (self->F_textures)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_textures)->clazz)->markFunction)((jobject) self->F_textures, mark, depth + 1);
	if (self->F_counts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_counts)->clazz)->markFunction)((jobject) self->F_counts, mark, depth + 1);
	if (self->F_tmpVertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tmpVertices)->clazz)->markFunction)((jobject) self->F_tmpVertices, mark, depth + 1);
}

void clinit_mindustry_editor_EditorSpriteCache(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_editor_EditorSpriteCache_vertexSize = jint(3);
}

void init_mindustry_editor_EditorSpriteCache_Array1_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorSpriteCache:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_editor_EditorSpriteCache(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(25);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[1].o, (8));
	((mindustry_editor_EditorSpriteCache *) NULL_CHECK(sp[0].o))->F_textures = (jref) sp[1].o;
	LINE_NUMBER(16);
	sp[0].o = frame[0].o;
	clinit_arc_struct_IntSeq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_IntSeq);
	init_arc_struct_IntSeq_int(ctx, sp[1].o, (8));
	((mindustry_editor_EditorSpriteCache *) NULL_CHECK(sp[0].o))->F_counts = (jref) sp[1].o;
	LINE_NUMBER(26);
	((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_tmpVertices = (jref) (frame[1].o);
	LINE_NUMBER(27);
	((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_packX = (frame[2].f);
	LINE_NUMBER(28);
	((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_packY = (frame[3].f);
	LINE_NUMBER(29);
	((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_packW = (frame[4].f);
	LINE_NUMBER(30);
	((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_packH = (frame[5].f);
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_editor_EditorSpriteCache_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorSpriteCache:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(35);
	if (((jint)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_index) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorSpriteCache_build_arc_graphics_gl_IndexData(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorSpriteCache:build", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_dispose])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Mesh(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Mesh);
	jint temp0 = jint(1);
	jint temp1 = ((jint)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_index) / (jint(3));
	jint temp2 = jint(0);
	sp[2].o = (jobject)createArray(ctx, &class_arc_graphics_VertexAttribute, (jint(3)));
	jint temp3 = jint(0);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[3].o = (jobject)SF_arc_graphics_VertexAttribute_packedPosition;
	ARRAY_ACCESS(jobject, sp[2].o, temp3) = sp[3].o;
	jint temp4 = jint(1);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[3].o = (jobject)SF_arc_graphics_VertexAttribute_color;
	ARRAY_ACCESS(jobject, sp[2].o, temp4) = sp[3].o;
	jint temp5 = jint(2);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[3].o = (jobject)SF_arc_graphics_VertexAttribute_packedTexCoords;
	ARRAY_ACCESS(jobject, sp[2].o, temp5) = sp[3].o;
	init_arc_graphics_Mesh_boolean_int_int_Array1_arc_graphics_VertexAttribute(ctx, sp[1].o, temp0, temp1, temp2, sp[2].o);
	((mindustry_editor_EditorSpriteCache *) NULL_CHECK(sp[0].o))->F_mesh = (jref) sp[1].o;
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	((arc_graphics_Mesh *) NULL_CHECK(sp[0].o))->F_indices = (jref) (frame[1].o);
	LINE_NUMBER(54);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	sp[1].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_tmpVertices;
	sp[0].o = (jobject)((func_arc_graphics_Mesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_setVertices_Array1_float_int_int_R_arc_graphics_Mesh])(ctx, sp[0].o, sp[1].o, (jint(0)), ((jint)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_index));
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorSpriteCache_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[37];
	auto stack = &frame[32];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorSpriteCache:draw", 37 };
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
	frame[9].f = param8;
	{
	LINE_NUMBER(59);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"This cache is already built. Call #clear() before drawing new sprites."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(62);
	frame[10].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(63);
	frame[11].f = ((frame[3].f) + (frame[5].f));
	LINE_NUMBER(64);
	frame[12].f = (-(frame[4].f));
	LINE_NUMBER(65);
	frame[13].f = (-(frame[5].f));
	LINE_NUMBER(66);
	frame[14].f = ((frame[6].f) - (frame[4].f));
	LINE_NUMBER(67);
	frame[15].f = ((frame[7].f) - (frame[5].f));
	LINE_NUMBER(72);
	if ((floatCompare((frame[8].f), (jfloat(0)), -1)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(73);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_cosDeg_float_R_float(ctx, (frame[8].f));
	frame[24].f = temp0;
	LINE_NUMBER(74);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_sinDeg_float_R_float(ctx, (frame[8].f));
	frame[25].f = temp1;
	LINE_NUMBER(76);
	frame[16].f = (((frame[24].f) * (frame[12].f)) - ((frame[25].f) * (frame[13].f)));
	LINE_NUMBER(77);
	frame[17].f = (((frame[25].f) * (frame[12].f)) + ((frame[24].f) * (frame[13].f)));
	LINE_NUMBER(79);
	frame[18].f = (((frame[24].f) * (frame[12].f)) - ((frame[25].f) * (frame[15].f)));
	LINE_NUMBER(80);
	frame[19].f = (((frame[25].f) * (frame[12].f)) + ((frame[24].f) * (frame[15].f)));
	LINE_NUMBER(82);
	frame[20].f = (((frame[24].f) * (frame[14].f)) - ((frame[25].f) * (frame[15].f)));
	LINE_NUMBER(83);
	frame[21].f = (((frame[25].f) * (frame[14].f)) + ((frame[24].f) * (frame[15].f)));
	LINE_NUMBER(85);
	frame[22].f = ((frame[16].f) + ((frame[20].f) - (frame[18].f)));
	LINE_NUMBER(86);
	frame[23].f = ((frame[21].f) - ((frame[19].f) - (frame[17].f)));
	LINE_NUMBER(87);
	goto label_20;
	}
label_8:;
	{
	LINE_NUMBER(88);
	frame[16].f = (frame[12].f);
	LINE_NUMBER(89);
	frame[17].f = (frame[13].f);
	LINE_NUMBER(91);
	frame[18].f = (frame[12].f);
	LINE_NUMBER(92);
	frame[19].f = (frame[15].f);
	LINE_NUMBER(94);
	frame[20].f = (frame[14].f);
	LINE_NUMBER(95);
	frame[21].f = (frame[15].f);
	LINE_NUMBER(97);
	frame[22].f = (frame[14].f);
	LINE_NUMBER(98);
	frame[23].f = (frame[13].f);
	}
label_20:;
	{
	LINE_NUMBER(101);
	frame[16].f = ((frame[16].f) + (frame[10].f));
	LINE_NUMBER(102);
	frame[17].f = ((frame[17].f) + (frame[11].f));
	LINE_NUMBER(103);
	frame[18].f = ((frame[18].f) + (frame[10].f));
	LINE_NUMBER(104);
	frame[19].f = ((frame[19].f) + (frame[11].f));
	LINE_NUMBER(105);
	frame[20].f = ((frame[20].f) + (frame[10].f));
	LINE_NUMBER(106);
	frame[21].f = ((frame[21].f) + (frame[11].f));
	LINE_NUMBER(107);
	frame[22].f = ((frame[22].f) + (frame[10].f));
	LINE_NUMBER(108);
	frame[23].f = ((frame[23].f) + (frame[11].f));
	LINE_NUMBER(110);
	frame[24].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u);
	LINE_NUMBER(111);
	frame[25].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v2);
	LINE_NUMBER(112);
	frame[26].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_u2);
	LINE_NUMBER(113);
	frame[27].f = ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_v);
	LINE_NUMBER(115);
	frame[28].i = ((jint)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_index);
	LINE_NUMBER(116);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_tmpVertices;
	frame[29].o = sp[0].o;
	LINE_NUMBER(117);
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK((frame[1].o)))->F_texture;
	frame[30].o = sp[0].o;
	LINE_NUMBER(119);
	sp[0].o = frame[29].o;
	jint temp0 = (frame[28].i) + (jint(0));
	jfloat temp1 = (jfloat)((func_mindustry_editor_EditorSpriteCache_pack_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorSpriteCache_pack_float_float_R_float])(ctx, (frame[0].o), (frame[16].f), (frame[17].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(120);
	ARRAY_ACCESS(jfloat, (frame[29].o), ((frame[28].i) + (jint(1)))) = (frame[9].f);
	LINE_NUMBER(121);
	sp[0].o = frame[29].o;
	jint temp2 = (frame[28].i) + (jint(2));
	jfloat temp3 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, (frame[24].f), (frame[25].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = temp3;
	LINE_NUMBER(123);
	sp[0].o = frame[29].o;
	jint temp4 = (frame[28].i) + (jint(3));
	jfloat temp5 = (jfloat)((func_mindustry_editor_EditorSpriteCache_pack_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorSpriteCache_pack_float_float_R_float])(ctx, (frame[0].o), (frame[18].f), (frame[19].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp4) = temp5;
	LINE_NUMBER(124);
	ARRAY_ACCESS(jfloat, (frame[29].o), ((frame[28].i) + (jint(4)))) = (frame[9].f);
	LINE_NUMBER(125);
	sp[0].o = frame[29].o;
	jint temp6 = (frame[28].i) + (jint(5));
	jfloat temp7 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, (frame[24].f), (frame[27].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp6) = temp7;
	LINE_NUMBER(127);
	sp[0].o = frame[29].o;
	jint temp8 = (frame[28].i) + (6);
	jfloat temp9 = (jfloat)((func_mindustry_editor_EditorSpriteCache_pack_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorSpriteCache_pack_float_float_R_float])(ctx, (frame[0].o), (frame[20].f), (frame[21].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp8) = temp9;
	LINE_NUMBER(128);
	ARRAY_ACCESS(jfloat, (frame[29].o), ((frame[28].i) + (7))) = (frame[9].f);
	LINE_NUMBER(129);
	sp[0].o = frame[29].o;
	jint temp10 = (frame[28].i) + (8);
	jfloat temp11 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, (frame[26].f), (frame[27].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp10) = temp11;
	LINE_NUMBER(131);
	sp[0].o = frame[29].o;
	jint temp12 = (frame[28].i) + (9);
	jfloat temp13 = (jfloat)((func_mindustry_editor_EditorSpriteCache_pack_float_float_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_editor_EditorSpriteCache_pack_float_float_R_float])(ctx, (frame[0].o), (frame[22].f), (frame[23].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp12) = temp13;
	LINE_NUMBER(132);
	ARRAY_ACCESS(jfloat, (frame[29].o), ((frame[28].i) + (10))) = (frame[9].f);
	LINE_NUMBER(133);
	sp[0].o = frame[29].o;
	jint temp14 = (frame[28].i) + (11);
	jfloat temp15 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, (frame[26].f), (frame[25].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp14) = temp15;
	LINE_NUMBER(135);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_textures;
	frame[31].i = (((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	LINE_NUMBER(136);
	if ((frame[31].i) < 0) goto label_56;
	}
	{
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[31].i));
	if (sp[0].o == (frame[30].o)) goto label_57;
	}
label_56:;
	{
	LINE_NUMBER(137);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[30].o));
	LINE_NUMBER(138);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_counts;
	((func_arc_struct_IntSeq_add_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_add_int])(ctx, sp[0].o, (6));
	goto label_59;
	}
label_57:;
	{
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_counts;
	((func_arc_struct_IntSeq_incr_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSeq_incr_int_int])(ctx, sp[0].o, (frame[31].i), (6));
	}
label_59:;
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	((mindustry_editor_EditorSpriteCache *) NULL_CHECK(sp[0].o))->F_index = (((jint)((mindustry_editor_EditorSpriteCache *) NULL_CHECK(sp[0].o))->F_index) + (12));
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_mindustry_editor_EditorSpriteCache_pack_float_float_R_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorSpriteCache:pack", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(147);
	jfloat temp0 = (jfloat)SM_arc_util_Pack_packUv_float_float_R_float(ctx, (((frame[1].f) + ((jfloat)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_packX)) / ((jfloat)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_packW)), (((frame[2].f) + ((jfloat)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_packY)) / ((jfloat)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_packH)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorSpriteCache_render_arc_graphics_gl_Shader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorSpriteCache:render", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cache is empty, call build() first."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(154);
	frame[2].i = (jint(0));
	LINE_NUMBER(156);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_textures;
	if (temp0 >= ((jint)((arc_struct_Seq *) NULL_CHECK(sp[0].o))->F_size)) goto label_4;
	}
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_counts;
	sp[0].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[3].i)));
	LINE_NUMBER(158);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_textures;
	sp[0].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	((func_arc_graphics_Texture_bind) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)))->vtable)[VTABLE_arc_graphics_Texture_bind])(ctx, (checkCast(ctx, &class_arc_graphics_Texture, sp[0].o)));
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_render_arc_graphics_gl_Shader_int_int_int])(ctx, sp[0].o, (frame[1].o), (jint(4)), (frame[2].i), (frame[4].i));
	LINE_NUMBER(161);
	frame[2].i = ((frame[2].i) + (frame[4].i));
	LINE_NUMBER(156);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(163);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_editor_EditorSpriteCache_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/editor/EditorSpriteCache:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = (jobject)((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh;
	((func_arc_graphics_Mesh_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Mesh_dispose])(ctx, sp[0].o);
	LINE_NUMBER(169);
	((mindustry_editor_EditorSpriteCache *) NULL_CHECK((frame[0].o)))->F_mesh = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(171);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_editor_EditorSpriteCache;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field mesh
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_editor_EditorSpriteCache[] {
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
	(void *) M_mindustry_editor_EditorSpriteCache_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_editor_EditorSpriteCache_isEmpty_R_boolean,
	(void *) M_mindustry_editor_EditorSpriteCache_build_arc_graphics_gl_IndexData,
	(void *) M_mindustry_editor_EditorSpriteCache_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float,
	(void *) M_mindustry_editor_EditorSpriteCache_pack_float_float_R_float,
	(void *) M_mindustry_editor_EditorSpriteCache_render_arc_graphics_gl_Shader,
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
	{ "isEmpty", "()Z" },
	{ "build", "(Larc/graphics/gl/IndexData;)V" },
	{ "draw", "(Larc/graphics/g2d/TextureRegion;FFFFFFFF)V" },
	{ "pack", "(FF)F" },
	{ "render", "(Larc/graphics/gl/Shader;)V" },
};

static jclass interfaces[] { &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "vertexSize", &class_int, (intptr_t) &SF_mindustry_editor_EditorSpriteCache_vertexSize, "I", 24 },
	{ "mesh", &class_arc_graphics_Mesh, offsetof(mindustry_editor_EditorSpriteCache, F_mesh), "Larc/graphics/Mesh;", 2 },
	{ "textures", &class_arc_struct_Seq, offsetof(mindustry_editor_EditorSpriteCache, F_textures), "Larc/struct/Seq;", 18 },
	{ "counts", &class_arc_struct_IntSeq, offsetof(mindustry_editor_EditorSpriteCache, F_counts), "Larc/struct/IntSeq;", 18 },
	{ "packX", &class_float, offsetof(mindustry_editor_EditorSpriteCache, F_packX), "F", 18 },
	{ "packY", &class_float, offsetof(mindustry_editor_EditorSpriteCache, F_packY), "F", 18 },
	{ "packW", &class_float, offsetof(mindustry_editor_EditorSpriteCache, F_packW), "F", 18 },
	{ "packH", &class_float, offsetof(mindustry_editor_EditorSpriteCache, F_packH), "F", 18 },
	{ "tmpVertices", getArrayClass(&class_float, 1), offsetof(mindustry_editor_EditorSpriteCache, F_tmpVertices), "[F", 2 },
	{ "index", &class_int, offsetof(mindustry_editor_EditorSpriteCache, F_index), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_editor_EditorSpriteCache_Array1_float_float_float_float_float, 0, "([FFFFF)V", 1 },
	{ "isEmpty", (intptr_t) M_mindustry_editor_EditorSpriteCache_isEmpty_R_boolean, VTABLE_mindustry_editor_EditorSpriteCache_isEmpty_R_boolean, "()Z", 1 },
	{ "build", (intptr_t) M_mindustry_editor_EditorSpriteCache_build_arc_graphics_gl_IndexData, VTABLE_mindustry_editor_EditorSpriteCache_build_arc_graphics_gl_IndexData, "(Larc/graphics/gl/IndexData;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_editor_EditorSpriteCache_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float, VTABLE_mindustry_editor_EditorSpriteCache_draw_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_float_float, "(Larc/graphics/g2d/TextureRegion;FFFFFFFF)V", 1 },
	{ "pack", (intptr_t) M_mindustry_editor_EditorSpriteCache_pack_float_float_R_float, VTABLE_mindustry_editor_EditorSpriteCache_pack_float_float_R_float, "(FF)F", 2 },
	{ "render", (intptr_t) M_mindustry_editor_EditorSpriteCache_render_arc_graphics_gl_Shader, VTABLE_mindustry_editor_EditorSpriteCache_render_arc_graphics_gl_Shader, "(Larc/graphics/gl/Shader;)V", 1 },
	{ "dispose", (intptr_t) M_mindustry_editor_EditorSpriteCache_dispose, VTABLE_mindustry_editor_EditorSpriteCache_dispose, "()V", 1 },
};

Class class_mindustry_editor_EditorSpriteCache{
		.nativeName = (intptr_t) "mindustry/editor/EditorSpriteCache",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_editor_EditorSpriteCache),
		.classVtable = (intptr_t) vtable_mindustry_editor_EditorSpriteCache,
		.staticInitializer = (intptr_t) clinit_mindustry_editor_EditorSpriteCache,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_editor_EditorSpriteCache,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 10,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_editor_EditorSpriteCache = registerClass(&class_mindustry_editor_EditorSpriteCache);

}
