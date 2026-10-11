#include "mindustry/graphics/g3d/MeshBuilder.h"
#include "java/nio/FloatBuffer.h"
#include "arc/graphics/VertexAttribute.h"
#include "mindustry/maps/generators/PlanetGenerator.h"
#include "arc/math/geom/Icosphere.h"
#include "arc/struct/FloatSeq.h"
#include "java/lang/Float.h"
#include "arc/struct/IntSeq.h"
#include "arc/graphics/Color.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "arc/math/geom/Vec3.h"
#include "arc/Application.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "arc/math/geom/MeshResult.h"
#include "arc/struct/Seq.h"
#include "arc/graphics/gl/GLVersion.h"
#include "mindustry/graphics/g3d/PlanetGrid_Corner.h"
#include "arc/Core.h"
#include "mindustry/graphics/g3d/HexMesher.h"
#include "arc/graphics/GL30.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/PlanetGrid.h"
#include "mindustry/graphics/g3d/MeshBuilder_1.h"
#include "java/nio/ShortBuffer.h"
#include "mindustry/graphics/g3d/MeshBuilder.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/Class.h"
#include "arc/graphics/Mesh.h"

extern "C" {

jbool SF_mindustry_graphics_g3d_MeshBuilder_packNormals;
volatile jobject SF_mindustry_graphics_g3d_MeshBuilder_tmpHeights;

void mark_mindustry_graphics_g3d_MeshBuilder(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_g3d_MeshBuilder_tmpHeights)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_g3d_MeshBuilder_tmpHeights)->clazz)->markFunction)((jobject) SF_mindustry_graphics_g3d_MeshBuilder_tmpHeights, mark, depth + 1);
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
	auto self = (mindustry_graphics_g3d_MeshBuilder *) object;
}

void init_mindustry_graphics_g3d_MeshBuilder(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_g3d_MeshBuilder_buildIcosphere_int_float_R_arc_graphics_Mesh(jcontext ctx, jint param0, jfloat param1) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:buildIcosphere", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	frame[0].i = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(16);
	sp[0].o = (jobject)SM_arc_math_geom_Icosphere_create_int_R_arc_math_geom_MeshResult(ctx, (frame[0].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(18);
	sp[0].o = (jobject)((arc_math_geom_MeshResult *) NULL_CHECK((frame[2].o)))->F_vertices;
	jint temp0 = ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) / (jint(3));
	sp[0].o = (jobject)((arc_math_geom_MeshResult *) NULL_CHECK((frame[2].o)))->F_indices;
	sp[0].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_begin_int_int_boolean_boolean_boolean_R_arc_graphics_Mesh(ctx, temp0, ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size), (jint(0)), (jint(0)), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(20);
	sp[0].o = (jobject)((arc_math_geom_MeshResult *) NULL_CHECK((frame[2].o)))->F_vertices;
	if (((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size) < (jint(65535))) goto label_3;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Due to index size limits, only meshes with a maximum of 65535 vertices are supported. If you want more than that, make your own non-indexed mesh builder."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(22);
	sp[0].o = (jobject)((arc_math_geom_MeshResult *) NULL_CHECK((frame[2].o)))->F_vertices;
	sp[0].o = (jobject)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(23);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((arc_math_geom_MeshResult *) NULL_CHECK((frame[2].o)))->F_vertices;
	if (temp0 >= ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_6;
	}
	{
	LINE_NUMBER(24);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) * (frame[1].f));
	LINE_NUMBER(23);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, (frame[3].o));
	sp[1].o = frame[4].o;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((arc_math_geom_MeshResult *) NULL_CHECK((frame[2].o)))->F_vertices;
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_Array1_float_int_int_R_java_nio_FloatBuffer])(ctx, sp[0].o, sp[1].o, temp0, ((jint)((arc_struct_FloatSeq *) NULL_CHECK(sp[2].o))->F_size));
	LINE_NUMBER(29);
	sp[0].o = (jobject)((arc_math_geom_MeshResult *) NULL_CHECK((frame[2].o)))->F_indices;
	sp[0].o = (jobject) createArray(ctx, &class_short, ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size));
	frame[5].o = sp[0].o;
	LINE_NUMBER(30);
	frame[6].i = (jint(0));
	}
label_11:;
	{
	jint temp0 = frame[6].i;
	sp[0].o = (jobject)((arc_math_geom_MeshResult *) NULL_CHECK((frame[2].o)))->F_indices;
	if (temp0 >= ((jint)((arc_struct_IntSeq *) NULL_CHECK(sp[0].o))->F_size)) goto label_12;
	}
	{
	LINE_NUMBER(31);
	sp[0].o = frame[5].o;
	jint temp0 = frame[6].i;
	sp[1].o = (jobject)((arc_math_geom_MeshResult *) NULL_CHECK((frame[2].o)))->F_indices;
	sp[1].o = (jobject)((arc_struct_IntSeq *) NULL_CHECK(sp[1].o))->F_items;
	ARRAY_ACCESS(jshort, sp[0].o, temp0) = (jshort(((jint)ARRAY_ACCESS(jint, sp[1].o, (frame[6].i)))));
	LINE_NUMBER(30);
	INST_IINC(6, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_put_Array1_short_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_put_Array1_short_R_java_nio_ShortBuffer])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(36);
	sp[0].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_end_arc_graphics_Mesh_R_arc_graphics_Mesh(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_g3d_MeshBuilder_buildPlanetGrid_mindustry_graphics_g3d_PlanetGrid_arc_graphics_Color_float_R_arc_graphics_Mesh(jcontext ctx, jobject param0, jobject param1, jfloat param2) {
	jtype frame[18];
	auto stack = &frame[14];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:buildPlanetGrid", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(40);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_begin_int_int_boolean_boolean_R_arc_graphics_Mesh(ctx, ((((jarray) nullCheck(ctx, sp[0].o))->length) * (12)), (jint(0)), (jint(0)), (jint(0)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(42);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[1].o));
	frame[4].f = temp0;
	LINE_NUMBER(43);
	sp[0].o = (jobject) createArray(ctx, &class_float, (8));
	frame[5].o = sp[0].o;
	LINE_NUMBER(45);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_tiles;
	frame[6].o = sp[0].o;
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_4:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_5;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[9].o)))->F_corners;
	frame[10].o = sp[0].o;
	LINE_NUMBER(48);
	frame[11].i = (jint(0));
	}
label_8:;
	{
	if ((frame[11].i) >= (((jarray) nullCheck(ctx, (frame[10].o)))->length)) goto label_9;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (frame[11].i)))))->F_v;
	frame[12].o = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[10].o), (((frame[11].i) + (jint(1))) % (((jarray) nullCheck(ctx, (frame[10].o)))->length))))))->F_v;
	frame[13].o = sp[0].o;
	LINE_NUMBER(52);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(0))) = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[12].o)))->F_x) * (frame[2].f));
	LINE_NUMBER(53);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(1))) = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[12].o)))->F_y) * (frame[2].f));
	LINE_NUMBER(54);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(2))) = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[12].o)))->F_z) * (frame[2].f));
	LINE_NUMBER(55);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(3))) = (frame[4].f);
	LINE_NUMBER(57);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(4))) = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[13].o)))->F_x) * (frame[2].f));
	LINE_NUMBER(58);
	ARRAY_ACCESS(jfloat, (frame[5].o), (jint(5))) = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[13].o)))->F_y) * (frame[2].f));
	LINE_NUMBER(59);
	ARRAY_ACCESS(jfloat, (frame[5].o), (6)) = (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[13].o)))->F_z) * (frame[2].f));
	LINE_NUMBER(60);
	ARRAY_ACCESS(jfloat, (frame[5].o), (7)) = (frame[4].f);
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_Array1_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_Array1_float_R_java_nio_FloatBuffer])(ctx, sp[0].o, (frame[5].o));
	LINE_NUMBER(48);
	INST_IINC(11, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(45);
	INST_IINC(8, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_end_arc_graphics_Mesh_R_arc_graphics_Mesh(ctx, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_g3d_MeshBuilder_buildHex_arc_graphics_Color_int_float_R_arc_graphics_Mesh(jcontext ctx, jobject param0, jint param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:buildHex", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(70);
	clinit_mindustry_graphics_g3d_MeshBuilder$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_MeshBuilder$1);
	init_mindustry_graphics_g3d_MeshBuilder$1_arc_graphics_Color(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_buildHex_mindustry_graphics_g3d_HexMesher_int_float_float_R_arc_graphics_Mesh(ctx, sp[0].o, (frame[1].i), (frame[2].f), (jfloat(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_g3d_MeshBuilder_buildHex_mindustry_graphics_g3d_HexMesher_int_float_float_R_arc_graphics_Mesh(jcontext ctx, jobject param0, jint param1, jfloat param2, jfloat param3) {
	jtype frame[43];
	auto stack = &frame[32];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:buildHex", 43 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_mindustry_graphics_g3d_MeshBuilder);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)SM_mindustry_graphics_g3d_PlanetGrid_create_int_R_mindustry_graphics_g3d_PlanetGrid(ctx, (frame[1].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(88);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_maps_generators_PlanetGenerator)) == 0) goto label_2;
	}
	{
	frame[5].o = (checkCast(ctx, &class_mindustry_maps_generators_PlanetGenerator, (frame[0].o)));
	LINE_NUMBER(89);
	((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[5].o)))->F_seed = ((jint)((mindustry_maps_generators_PlanetGenerator *) NULL_CHECK((frame[5].o)))->F_baseSeed);
	}
label_2:;
	{
	LINE_NUMBER(92);
	jint temp0 = (jint)((func_mindustry_graphics_g3d_HexMesher_isEmissive_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_graphics_g3d_HexMesher, INDEX_mindustry_graphics_g3d_HexMesher_isEmissive_R_boolean, (frame[0].o)))(ctx, (frame[0].o));
	frame[5].i = temp0;
	LINE_NUMBER(94);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[4].o)))->F_tiles;
	if (((((jarray) nullCheck(ctx, sp[0].o))->length) * (6)) >= (jint(65535))) goto label_5;
	}
	INST_ICONST(1);
	goto label_6;
label_5:;
	INST_ICONST(0);
label_6:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(96);
	if ((frame[6].i) == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[4].o)))->F_tiles;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) * (6);
	sp[0].i = temp0;
	sp += 1;
	goto label_9;
	}
label_8:;
	{
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[4].o)))->F_tiles;
	jint temp0 = (((jarray) nullCheck(ctx, sp[0].o))->length) * (12);
	sp[0].i = temp0;
	sp += 1;
	}
label_9:;
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_10;
	{
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[4].o)))->F_tiles;
	jint temp0 = ((((jarray) nullCheck(ctx, sp[0].o))->length) * (jint(4))) * (jint(3));
	sp[0].i = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_ICONST(0);
label_11:;
	{
	sp -= 2;
	sp[0].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_begin_int_int_boolean_boolean_R_arc_graphics_Mesh(ctx, sp[0].i, sp[1].i, (jint(1)), (frame[5].i));
	frame[7].o = sp[0].o;
	LINE_NUMBER(100);
	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_g3d_MeshBuilder_tmpHeights;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_g3d_MeshBuilder_tmpHeights;
	jint temp0 = ((jarray) nullCheck(ctx, sp[0].o))->length;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[4].o)))->F_corners;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_14;
	}
label_13:;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[4].o)))->F_corners;
	sp[0].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	SF_mindustry_graphics_g3d_MeshBuilder_tmpHeights = sp[0].o;
	frame[8].o = sp[0].o;
	goto label_16;
	}
label_14:;
	{
	LINE_NUMBER(103);
	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_g3d_MeshBuilder_tmpHeights;
	frame[8].o = sp[0].o;
	}
label_16:;
	{
	LINE_NUMBER(107);
	frame[9].i = (jint(0));
	}
label_17:;
	{
	jint temp0 = frame[9].i;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[4].o)))->F_corners;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_18;
	}
	{
	LINE_NUMBER(108);
	sp[0].o = frame[8].o;
	jint temp0 = frame[9].i;
	jfloat temp1 = jfloat(1);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[4].o)))->F_corners;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[9].i)))))->F_v;
	jfloat temp2 = (jfloat)((func_mindustry_graphics_g3d_HexMesher_getHeight_arc_math_geom_Vec3_R_float) resolveInterfaceMethod(ctx, &class_mindustry_graphics_g3d_HexMesher, INDEX_mindustry_graphics_g3d_HexMesher_getHeight_arc_math_geom_Vec3_R_float, sp[1].o))(ctx, sp[1].o, sp[2].o);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = ((temp1 + (temp2 * (frame[3].f))) * (frame[2].f));
	LINE_NUMBER(107);
	INST_IINC(9, 1);
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(110);
	frame[9].i = (jint(0));
	LINE_NUMBER(112);
	if ((frame[6].i) == 0) goto label_22;
	}
	{
	sp[0].o = (jobject) createArray(ctx, &class_short, (12));
	sp += 1;
	goto label_23;
	}
label_22:;
	INST_ACONST_NULL();
label_23:;
	{
	sp -= 1;
	frame[10].o = sp[0].o;
	LINE_NUMBER(113);
	jint temp0 = jint(3);
	sp[0].i = temp0;
	sp += 1;
	if ((clinit_mindustry_graphics_g3d_MeshBuilder(ctx), (jint)SF_mindustry_graphics_g3d_MeshBuilder_packNormals) == 0) goto label_25;
	}
	INST_ICONST(1);
	goto label_26;
label_25:;
	INST_ICONST(3);
label_26:;
	{
	sp -= 2;
	jint temp0 = (sp[0].i + sp[1].i) + (jint(1));
	sp[0].i = temp0;
	sp += 1;
	if ((frame[5].i) == 0) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 2;
	sp[0].o = (jobject) createArray(ctx, &class_float, (sp[0].i + sp[1].i));
	frame[11].o = sp[0].o;
	LINE_NUMBER(114);
	clinit_arc_math_geom_Vec3(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(116);
	clinit_arc_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Color);
	init_arc_graphics_Color(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[4].o)))->F_tiles;
	frame[14].o = sp[0].o;
	frame[15].i = (((jarray) nullCheck(ctx, (frame[14].o)))->length);
	frame[16].i = (jint(0));
	}
label_32:;
	{
	if ((frame[16].i) >= (frame[15].i)) goto label_33;
	}
	{
	frame[17].o = ((jobject)ARRAY_ACCESS(jobject, (frame[14].o), (frame[16].i)));
	LINE_NUMBER(119);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[17].o)))->F_v;
	jint temp0 = (jint)((func_mindustry_graphics_g3d_HexMesher_skip_arc_math_geom_Vec3_R_boolean) resolveInterfaceMethod(ctx, &class_mindustry_graphics_g3d_HexMesher, INDEX_mindustry_graphics_g3d_HexMesher_skip_arc_math_geom_Vec3_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_35;
	}
	LINE_NUMBER(120);
	goto label_37;
label_35:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[17].o)))->F_corners;
	frame[18].o = sp[0].o;
	LINE_NUMBER(126);
	frame[19].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(0))))))->F_id)));
	LINE_NUMBER(127);
	frame[20].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(2))))))->F_id)));
	LINE_NUMBER(128);
	frame[21].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(4))))))->F_id)));
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(0))))))->F_v;
	frame[22].o = sp[0].o;
	LINE_NUMBER(132);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(2))))))->F_v;
	frame[23].o = sp[0].o;
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(4))))))->F_v;
	frame[24].o = sp[0].o;
	LINE_NUMBER(135);
	SM_mindustry_graphics_g3d_MeshBuilder_normal_float_float_float_float_float_float_float_float_float_arc_math_geom_Vec3(ctx, (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[22].o)))->F_x) * (frame[19].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[22].o)))->F_y) * (frame[19].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[22].o)))->F_z) * (frame[19].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[23].o)))->F_x) * (frame[20].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[23].o)))->F_y) * (frame[20].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[23].o)))->F_z) * (frame[20].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[24].o)))->F_x) * (frame[21].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[24].o)))->F_y) * (frame[21].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[24].o)))->F_z) * (frame[21].f)), (frame[12].o));
	LINE_NUMBER(141);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, (frame[13].o), (jfloat(1)), (jfloat(1)), (jfloat(1)), (jfloat(1)));
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[17].o)))->F_v;
	((func_mindustry_graphics_g3d_HexMesher_getColor_arc_math_geom_Vec3_arc_graphics_Color) resolveInterfaceMethod(ctx, &class_mindustry_graphics_g3d_HexMesher, INDEX_mindustry_graphics_g3d_HexMesher_getColor_arc_math_geom_Vec3_arc_graphics_Color, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[13].o));
	LINE_NUMBER(143);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[13].o));
	frame[25].f = temp0;
	LINE_NUMBER(145);
	frame[26].f = (jfloat(0));
	LINE_NUMBER(147);
	if ((frame[5].i) == 0) goto label_50;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_graphics_Color_set_float_float_float_float_R_arc_graphics_Color])(ctx, (frame[13].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[17].o)))->F_v;
	((func_mindustry_graphics_g3d_HexMesher_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color) resolveInterfaceMethod(ctx, &class_mindustry_graphics_g3d_HexMesher, INDEX_mindustry_graphics_g3d_HexMesher_getEmissiveColor_arc_math_geom_Vec3_arc_graphics_Color, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[13].o));
	LINE_NUMBER(150);
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, (frame[13].o))->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, (frame[13].o));
	frame[26].f = temp0;
	}
label_50:;
	{
	LINE_NUMBER(153);
	if ((frame[6].i) == 0) goto label_54;
	}
	{
	LINE_NUMBER(154);
	frame[27].o = (frame[18].o);
	frame[28].i = (((jarray) nullCheck(ctx, (frame[27].o)))->length);
	frame[29].i = (jint(0));
	}
label_56:;
	{
	if ((frame[29].i) >= (frame[28].i)) goto label_57;
	}
	{
	frame[30].o = ((jobject)ARRAY_ACCESS(jobject, (frame[27].o), (frame[29].i)));
	LINE_NUMBER(155);
	frame[31].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[30].o)))->F_id)));
	LINE_NUMBER(157);
	sp[0].o = frame[7].o;
	sp[1].o = frame[11].o;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[30].o)))->F_v;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_x) * (frame[31].f);
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[30].o)))->F_v;
	jfloat temp1 = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_y) * (frame[31].f);
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[30].o)))->F_v;
	SM_mindustry_graphics_g3d_MeshBuilder_vert_arc_graphics_Mesh_Array1_float_float_float_float_arc_math_geom_Vec3_float_float(ctx, sp[0].o, sp[1].o, temp0, temp1, (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK(sp[2].o))->F_z) * (frame[31].f)), (frame[12].o), (frame[25].f), (frame[26].f));
	LINE_NUMBER(154);
	INST_IINC(29, 1);
	goto label_56;
	}
label_57:;
	{
	LINE_NUMBER(160);
	ARRAY_ACCESS(jshort, (frame[10].o), (jint(0))) = (jshort((frame[9].i)));
	LINE_NUMBER(161);
	ARRAY_ACCESS(jshort, (frame[10].o), (jint(1))) = (jshort(((frame[9].i) + (jint(1)))));
	LINE_NUMBER(162);
	ARRAY_ACCESS(jshort, (frame[10].o), (jint(2))) = (jshort(((frame[9].i) + (jint(2)))));
	LINE_NUMBER(164);
	ARRAY_ACCESS(jshort, (frame[10].o), (jint(3))) = (jshort((frame[9].i)));
	LINE_NUMBER(165);
	ARRAY_ACCESS(jshort, (frame[10].o), (jint(4))) = (jshort(((frame[9].i) + (jint(2)))));
	LINE_NUMBER(166);
	ARRAY_ACCESS(jshort, (frame[10].o), (jint(5))) = (jshort(((frame[9].i) + (jint(3)))));
	LINE_NUMBER(168);
	ARRAY_ACCESS(jshort, (frame[10].o), (6)) = (jshort((frame[9].i)));
	LINE_NUMBER(169);
	ARRAY_ACCESS(jshort, (frame[10].o), (7)) = (jshort(((frame[9].i) + (jint(3)))));
	LINE_NUMBER(170);
	ARRAY_ACCESS(jshort, (frame[10].o), (8)) = (jshort(((frame[9].i) + (jint(4)))));
	LINE_NUMBER(172);
	if ((((jarray) nullCheck(ctx, (frame[18].o)))->length) <= (jint(5))) goto label_70;
	}
	{
	LINE_NUMBER(173);
	ARRAY_ACCESS(jshort, (frame[10].o), (9)) = (jshort((frame[9].i)));
	LINE_NUMBER(174);
	ARRAY_ACCESS(jshort, (frame[10].o), (10)) = (jshort(((frame[9].i) + (jint(4)))));
	LINE_NUMBER(175);
	ARRAY_ACCESS(jshort, (frame[10].o), (11)) = (jshort(((frame[9].i) + (jint(5)))));
	}
label_70:;
	{
	LINE_NUMBER(178);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer])(ctx, (frame[7].o));
	sp[1].o = frame[10].o;
	jint temp0 = jint(0);
	sp[2].i = temp0;
	sp += 3;
	if ((((jarray) nullCheck(ctx, (frame[18].o)))->length) <= (jint(5))) goto label_74;
	}
	INST_BIPUSH(12);
	goto label_75;
label_74:;
	INST_BIPUSH(9);
label_75:;
	{
	sp -= 4;
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_put_Array1_short_int_int_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_put_Array1_short_int_int_R_java_nio_ShortBuffer])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i);
	LINE_NUMBER(180);
	frame[9].i = ((frame[9].i) + (((jarray) nullCheck(ctx, (frame[18].o)))->length));
	goto label_37;
	}
label_54:;
	{
	LINE_NUMBER(182);
	sp[0].o = frame[7].o;
	sp[1].o = frame[11].o;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(0))))))->F_v;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(0))))))->F_id));
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(1))))))->F_v;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(1))))))->F_id));
	sp[4].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(2))))))->F_v;
	SM_mindustry_graphics_g3d_MeshBuilder_verts_arc_graphics_Mesh_Array1_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, temp1, sp[4].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(2))))))->F_id))), (frame[12].o), (frame[25].f), (frame[26].f));
	LINE_NUMBER(183);
	sp[0].o = frame[7].o;
	sp[1].o = frame[11].o;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(0))))))->F_v;
	jfloat temp2 = (jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(0))))))->F_id));
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(2))))))->F_v;
	jfloat temp3 = (jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(2))))))->F_id));
	sp[4].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(3))))))->F_v;
	SM_mindustry_graphics_g3d_MeshBuilder_verts_arc_graphics_Mesh_Array1_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, temp2, sp[3].o, temp3, sp[4].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(3))))))->F_id))), (frame[12].o), (frame[25].f), (frame[26].f));
	LINE_NUMBER(184);
	sp[0].o = frame[7].o;
	sp[1].o = frame[11].o;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(0))))))->F_v;
	jfloat temp4 = (jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(0))))))->F_id));
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(3))))))->F_v;
	jfloat temp5 = (jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(3))))))->F_id));
	sp[4].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(4))))))->F_v;
	SM_mindustry_graphics_g3d_MeshBuilder_verts_arc_graphics_Mesh_Array1_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, temp4, sp[3].o, temp5, sp[4].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(4))))))->F_id))), (frame[12].o), (frame[25].f), (frame[26].f));
	LINE_NUMBER(186);
	if ((((jarray) nullCheck(ctx, (frame[18].o)))->length) <= (jint(5))) goto label_37;
	}
	{
	LINE_NUMBER(187);
	sp[0].o = frame[7].o;
	sp[1].o = frame[11].o;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(0))))))->F_v;
	jfloat temp0 = (jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(0))))))->F_id));
	sp[3].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(4))))))->F_v;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(4))))))->F_id));
	sp[4].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(5))))))->F_v;
	SM_mindustry_graphics_g3d_MeshBuilder_verts_arc_graphics_Mesh_Array1_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_float(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, sp[3].o, temp1, sp[4].o, ((jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[18].o), (jint(5))))))->F_id))), (frame[12].o), (frame[25].f), (frame[26].f));
	}
label_37:;
	{
	LINE_NUMBER(118);
	INST_IINC(16, 1);
	goto label_32;
	}
label_33:;
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_end_arc_graphics_Mesh_R_arc_graphics_Mesh(ctx, (frame[7].o));
	popStackFrame(ctx, (jobject) &class_mindustry_graphics_g3d_MeshBuilder);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_g3d_MeshBuilder_begin_int_int_boolean_boolean_R_arc_graphics_Mesh(jcontext ctx, jint param0, jint param1, jbool param2, jbool param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:begin", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(196);
	sp[0].o = (jobject)SM_mindustry_graphics_g3d_MeshBuilder_begin_int_int_boolean_boolean_boolean_R_arc_graphics_Mesh(ctx, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_g3d_MeshBuilder_begin_int_int_boolean_boolean_boolean_R_arc_graphics_Mesh(jcontext ctx, jint param0, jint param1, jbool param2, jbool param3, jbool param4) {
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:begin", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(200);
	sp[0].o = (jobject)createArray(ctx, &class_arc_graphics_VertexAttribute, (jint(1)));
	jint temp0 = jint(0);
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[1].o = (jobject)SF_arc_graphics_VertexAttribute_position3;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(204);
	if ((frame[2].i) == 0) goto label_2;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = frame[5].o;
	sp += 1;
	if ((clinit_mindustry_graphics_g3d_MeshBuilder(ctx), (jint)SF_mindustry_graphics_g3d_MeshBuilder_packNormals) == 0) goto label_4;
	}
	clinit_arc_graphics_VertexAttribute(ctx);
	(sp++)->o = SF_arc_graphics_VertexAttribute_packedNormal;
	goto label_5;
label_4:;
	clinit_arc_graphics_VertexAttribute(ctx);
	(sp++)->o = SF_arc_graphics_VertexAttribute_normal;
label_5:;
	POP_N(2); // Pop method args
	sp->o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	sp++;
	INST_POP();
label_2:;
	{
	LINE_NUMBER(209);
	if ((frame[4].i) == 0) goto label_6;
	}
	{
	LINE_NUMBER(210);
	sp[0].o = frame[5].o;
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[1].o = (jobject)SF_arc_graphics_VertexAttribute_color;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_6:;
	{
	LINE_NUMBER(213);
	if ((frame[3].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(214);
	sp[0].o = frame[5].o;
	clinit_arc_graphics_VertexAttribute(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_VertexAttribute);
	init_arc_graphics_VertexAttribute_int_int_boolean_java_lang_String(ctx, sp[1].o, (jint(4)), (5121), (jint(1)), (((jobject) createStringLiteral(ctx, u8"a_emissive"_j))));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_8:;
	{
	LINE_NUMBER(217);
	clinit_arc_graphics_Mesh(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Mesh);
	jint temp0 = jint(1);
	jint temp1 = frame[0].i;
	jint temp2 = frame[1].i;
	sp[1].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, (frame[5].o), (((jobject) &class_arc_graphics_VertexAttribute)));
	init_arc_graphics_Mesh_boolean_int_int_Array1_arc_graphics_VertexAttribute(ctx, sp[0].o, temp0, temp1, temp2, (checkCast(ctx, getArrayClass(&class_arc_graphics_VertexAttribute, 1), sp[1].o)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(219);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, (frame[6].o));
	sp[1].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, (frame[6].o));
	jint temp3 = (jint)((func_java_nio_FloatBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_FloatBuffer])(ctx, sp[0].o, temp3);
	LINE_NUMBER(220);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_position_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_int_R_java_nio_FloatBuffer])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(222);
	if ((frame[1].i) <= 0) goto label_13;
	}
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer])(ctx, (frame[6].o));
	sp[1].o = (jobject)((func_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer])(ctx, (frame[6].o));
	jint temp0 = (jint)((func_java_nio_ShortBuffer_capacity_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ShortBuffer_capacity_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_limit_int_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_limit_int_R_java_nio_ShortBuffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(224);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_position_int_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_position_int_R_java_nio_ShortBuffer])(ctx, sp[0].o, (jint(0)));
	}
label_13:;
	{
	LINE_NUMBER(227);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_g3d_MeshBuilder_end_arc_graphics_Mesh_R_arc_graphics_Mesh(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:end", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(231);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_nio_FloatBuffer_position_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_FloatBuffer_position_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_limit_int_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_limit_int_R_java_nio_FloatBuffer])(ctx, sp[0].o, temp0);
	LINE_NUMBER(232);
	jint temp1 = (jint)((func_arc_graphics_Mesh_getNumIndices_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getNumIndices_R_int])(ctx, (frame[0].o));
	if (temp1 <= 0) goto label_2;
	}
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getIndicesBuffer_R_java_nio_ShortBuffer])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_nio_ShortBuffer_position_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_nio_ShortBuffer_position_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_nio_ShortBuffer_limit_int_R_java_nio_ShortBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ShortBuffer_limit_int_R_java_nio_ShortBuffer])(ctx, sp[0].o, temp0);
	}
label_2:;
	{
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_g3d_MeshBuilder_normal_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Vec3(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:normal", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(240);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, (frame[3].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_sub_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_crs_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_crs_float_float_float_R_arc_math_geom_Vec3])(ctx, sp[0].o, (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_x)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_y)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z) - ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[0].o)))->F_z)));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_g3d_MeshBuilder_normal_float_float_float_float_float_float_float_float_float_arc_math_geom_Vec3(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jobject param9) {
	jtype frame[23];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:normal", 23 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].o = param9;
	{
	LINE_NUMBER(245);
	frame[10].f = ((frame[3].f) - (frame[0].f));
	LINE_NUMBER(246);
	frame[11].f = ((frame[4].f) - (frame[1].f));
	LINE_NUMBER(247);
	frame[12].f = ((frame[5].f) - (frame[2].f));
	LINE_NUMBER(248);
	frame[13].f = ((frame[6].f) - (frame[0].f));
	LINE_NUMBER(249);
	frame[14].f = ((frame[7].f) - (frame[1].f));
	LINE_NUMBER(250);
	frame[15].f = ((frame[8].f) - (frame[2].f));
	LINE_NUMBER(253);
	frame[16].f = (((frame[11].f) * (frame[15].f)) - ((frame[12].f) * (frame[14].f)));
	LINE_NUMBER(254);
	frame[17].f = (((frame[12].f) * (frame[13].f)) - ((frame[10].f) * (frame[15].f)));
	LINE_NUMBER(255);
	frame[18].f = (((frame[10].f) * (frame[14].f)) - ((frame[11].f) * (frame[13].f)));
	LINE_NUMBER(257);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_math_geom_Vec3_set_float_float_float_R_arc_math_geom_Vec3])(ctx, (frame[9].o), (frame[16].f), (frame[17].f), (frame[18].f));
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(258);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_g3d_MeshBuilder_verts_arc_graphics_Mesh_Array1_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_float(jcontext ctx, jobject param0, jobject param1, jobject param2, jfloat param3, jobject param4, jfloat param5, jobject param6, jfloat param7, jobject param8, jfloat param9, jfloat param10) {
	jtype frame[19];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:verts", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].f = param3;
	frame[4].o = param4;
	frame[5].f = param5;
	frame[6].o = param6;
	frame[7].f = param7;
	frame[8].o = param8;
	frame[9].f = param9;
	frame[10].f = param10;
	{
	LINE_NUMBER(261);
	SM_mindustry_graphics_g3d_MeshBuilder_vert_arc_graphics_Mesh_Array1_float_float_float_float_arc_math_geom_Vec3_float_float(ctx, (frame[0].o), (frame[1].o), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_x) * (frame[3].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_y) * (frame[3].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[2].o)))->F_z) * (frame[3].f)), (frame[8].o), (frame[9].f), (frame[10].f));
	LINE_NUMBER(262);
	SM_mindustry_graphics_g3d_MeshBuilder_vert_arc_graphics_Mesh_Array1_float_float_float_float_arc_math_geom_Vec3_float_float(ctx, (frame[0].o), (frame[1].o), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[4].o)))->F_x) * (frame[5].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[4].o)))->F_y) * (frame[5].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[4].o)))->F_z) * (frame[5].f)), (frame[8].o), (frame[9].f), (frame[10].f));
	LINE_NUMBER(263);
	SM_mindustry_graphics_g3d_MeshBuilder_vert_arc_graphics_Mesh_Array1_float_float_float_float_arc_math_geom_Vec3_float_float(ctx, (frame[0].o), (frame[1].o), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[6].o)))->F_x) * (frame[7].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[6].o)))->F_y) * (frame[7].f)), (((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[6].o)))->F_z) * (frame[7].f)), (frame[8].o), (frame[9].f), (frame[10].f));
	LINE_NUMBER(264);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_g3d_MeshBuilder_vert_arc_graphics_Mesh_Array1_float_float_float_float_arc_math_geom_Vec3_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jfloat param6, jfloat param7) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:vert", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].o = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	{
	LINE_NUMBER(267);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(0))) = (frame[2].f);
	LINE_NUMBER(268);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(1))) = (frame[3].f);
	LINE_NUMBER(269);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(2))) = (frame[4].f);
	LINE_NUMBER(271);
	if ((clinit_mindustry_graphics_g3d_MeshBuilder(ctx), (jint)SF_mindustry_graphics_g3d_MeshBuilder_packNormals) == 0) goto label_4;
	}
	{
	LINE_NUMBER(272);
	sp[0].o = frame[1].o;
	jint temp0 = jint(3);
	jfloat temp1 = (jfloat)SM_mindustry_graphics_g3d_MeshBuilder_packNormals_float_float_float_R_float(ctx, ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[5].o)))->F_x), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[5].o)))->F_y), ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[5].o)))->F_z));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(274);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))) = (frame[6].f);
	LINE_NUMBER(275);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (jint(5))) goto label_8;
	}
	{
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))) = (frame[7].f);
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(277);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(3))) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[5].o)))->F_x);
	LINE_NUMBER(278);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(4))) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[5].o)))->F_y);
	LINE_NUMBER(279);
	ARRAY_ACCESS(jfloat, (frame[1].o), (jint(5))) = ((jfloat)((arc_math_geom_Vec3 *) NULL_CHECK((frame[5].o)))->F_z);
	LINE_NUMBER(281);
	ARRAY_ACCESS(jfloat, (frame[1].o), (6)) = (frame[6].f);
	LINE_NUMBER(282);
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) <= (7)) goto label_8;
	}
	{
	ARRAY_ACCESS(jfloat, (frame[1].o), (7)) = (frame[7].f);
	}
label_8:;
	{
	LINE_NUMBER(285);
	sp[0].o = (jobject)((func_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_graphics_Mesh_getVerticesBuffer_R_java_nio_FloatBuffer])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_nio_FloatBuffer_put_Array1_float_R_java_nio_FloatBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_FloatBuffer_put_Array1_float_R_java_nio_FloatBuffer])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(286);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat SM_mindustry_graphics_g3d_MeshBuilder_packNormals_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:packNormals", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(289);
	if ((floatCompare((frame[0].f), (jfloat(-1,953125e-03f)), 1)) >= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 1;
	frame[3].i = sp[0].i;
	LINE_NUMBER(290);
	if ((floatCompare((frame[1].f), (jfloat(-1,953125e-03f)), 1)) >= 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 1;
	frame[4].i = sp[0].i;
	LINE_NUMBER(291);
	if ((floatCompare((frame[2].f), (jfloat(-1,953125e-03f)), 1)) >= 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(293);
	frame[6].i = (((((((frame[5].i) << (29)) | (((jint((((frame[2].f) * (jfloat(511.0f))) + (jfloat(((frame[5].i) << (9))))))) & (511)) << (20))) | ((frame[4].i) << (19))) | (((jint((((frame[1].f) * (jfloat(511.0f))) + (jfloat(((frame[4].i) << (9))))))) & (511)) << (10))) | ((frame[3].i) << (9))) | ((jint((((frame[0].f) * (jfloat(511.0f))) + (jfloat(((frame[3].i) << (9))))))) & (511)));
	LINE_NUMBER(297);
	jfloat temp0 = (jfloat)SM_java_lang_Float_intBitsToFloat_int_R_float(ctx, (frame[6].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_g3d_MeshBuilder(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/MeshBuilder:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	{
	LINE_NUMBER(11);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_gl30;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	jint temp0 = (jint)((func_arc_Application_isMobile_R_boolean) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_isMobile_R_boolean, sp[0].o))(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	sp[0].o = (jobject)((func_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getGLVersion_R_arc_graphics_gl_GLVersion])(ctx, sp[0].o);
	jint temp0 = (jint)((func_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_GLVersion_atLeast_int_int_R_boolean])(ctx, sp[0].o, (jint(3)), (jint(3)));
	if (temp0 == 0) goto label_1;
	}
label_2:;
	INST_ICONST(1);
	goto label_3;
label_1:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	SF_mindustry_graphics_g3d_MeshBuilder_packNormals = sp[0].i;
	LINE_NUMBER(12);
	sp[0].o = (jobject) createArray(ctx, &class_float, (14580));
	clinit_mindustry_graphics_g3d_MeshBuilder(ctx);
	SF_mindustry_graphics_g3d_MeshBuilder_tmpHeights = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_MeshBuilder[] {
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
	{ "packNormals", &class_boolean, (intptr_t) &SF_mindustry_graphics_g3d_MeshBuilder_packNormals, "Z", 26 },
	{ "tmpHeights", getArrayClass(&class_float, 1), (intptr_t) &SF_mindustry_graphics_g3d_MeshBuilder_tmpHeights, "[F", 74 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_MeshBuilder, 0, "()V", 1 },
	{ "buildIcosphere", (intptr_t) SM_mindustry_graphics_g3d_MeshBuilder_buildIcosphere_int_float_R_arc_graphics_Mesh, 0, "(IF)Larc/graphics/Mesh;", 9 },
	{ "buildPlanetGrid", (intptr_t) SM_mindustry_graphics_g3d_MeshBuilder_buildPlanetGrid_mindustry_graphics_g3d_PlanetGrid_arc_graphics_Color_float_R_arc_graphics_Mesh, 0, "(Lmindustry/graphics/g3d/PlanetGrid;Larc/graphics/Color;F)Larc/graphics/Mesh;", 9 },
	{ "buildHex", (intptr_t) SM_mindustry_graphics_g3d_MeshBuilder_buildHex_arc_graphics_Color_int_float_R_arc_graphics_Mesh, 0, "(Larc/graphics/Color;IF)Larc/graphics/Mesh;", 9 },
	{ "buildHex", (intptr_t) SM_mindustry_graphics_g3d_MeshBuilder_buildHex_mindustry_graphics_g3d_HexMesher_int_float_float_R_arc_graphics_Mesh, 0, "(Lmindustry/graphics/g3d/HexMesher;IFF)Larc/graphics/Mesh;", 41 },
	{ "begin", (intptr_t) SM_mindustry_graphics_g3d_MeshBuilder_begin_int_int_boolean_boolean_R_arc_graphics_Mesh, 0, "(IIZZ)Larc/graphics/Mesh;", 10 },
	{ "begin", (intptr_t) SM_mindustry_graphics_g3d_MeshBuilder_begin_int_int_boolean_boolean_boolean_R_arc_graphics_Mesh, 0, "(IIZZZ)Larc/graphics/Mesh;", 10 },
	{ "end", (intptr_t) SM_mindustry_graphics_g3d_MeshBuilder_end_arc_graphics_Mesh_R_arc_graphics_Mesh, 0, "(Larc/graphics/Mesh;)Larc/graphics/Mesh;", 10 },
	{ "normal", (intptr_t) SM_mindustry_graphics_g3d_MeshBuilder_normal_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_arc_math_geom_Vec3_R_arc_math_geom_Vec3, 0, "(Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;Larc/math/geom/Vec3;)Larc/math/geom/Vec3;", 10 },
	{ "normal", (intptr_t) SM_mindustry_graphics_g3d_MeshBuilder_normal_float_float_float_float_float_float_float_float_float_arc_math_geom_Vec3, 0, "(FFFFFFFFFLarc/math/geom/Vec3;)V", 10 },
	{ "verts", (intptr_t) SM_mindustry_graphics_g3d_MeshBuilder_verts_arc_graphics_Mesh_Array1_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_arc_math_geom_Vec3_float_float, 0, "(Larc/graphics/Mesh;[FLarc/math/geom/Vec3;FLarc/math/geom/Vec3;FLarc/math/geom/Vec3;FLarc/math/geom/Vec3;FF)V", 10 },
	{ "vert", (intptr_t) SM_mindustry_graphics_g3d_MeshBuilder_vert_arc_graphics_Mesh_Array1_float_float_float_float_arc_math_geom_Vec3_float_float, 0, "(Larc/graphics/Mesh;[FFFFLarc/math/geom/Vec3;FF)V", 10 },
	{ "packNormals", (intptr_t) SM_mindustry_graphics_g3d_MeshBuilder_packNormals_float_float_float_R_float, 0, "(FFF)F", 10 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_g3d_MeshBuilder, 0, "()V", 8 },
};

Class class_mindustry_graphics_g3d_MeshBuilder{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/MeshBuilder",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_MeshBuilder),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_MeshBuilder,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_MeshBuilder,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_MeshBuilder,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_MeshBuilder = registerClass(&class_mindustry_graphics_g3d_MeshBuilder);

}
