#include "mindustry/world/Edges.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/world/Block.h"
#include "mindustry/world/Edges.h"
#include "arc/math/geom/Point2.h"
#include "java/lang/Float.h"
#include "mindustry/gen/Building.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/util/Arrays.h"
#include "mindustry/world/Edges_invoke_java_util_Comparator_1.h"
#include "java/util/Comparator.h"
#include "mindustry/world/Tile.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/math/geom/Geometry.h"

extern "C" {

jint SF_mindustry_world_Edges_maxRadius;
jobject SF_mindustry_world_Edges_edges;
jobject SF_mindustry_world_Edges_edgeInside;
jobject SF_mindustry_world_Edges_polygons;

void mark_mindustry_world_Edges(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_world_Edges_edges)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_Edges_edges)->clazz)->markFunction)((jobject) SF_mindustry_world_Edges_edges, mark, depth + 1);
		if (SF_mindustry_world_Edges_edgeInside)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_Edges_edgeInside)->clazz)->markFunction)((jobject) SF_mindustry_world_Edges_edgeInside, mark, depth + 1);
		if (SF_mindustry_world_Edges_polygons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_world_Edges_polygons)->clazz)->markFunction)((jobject) SF_mindustry_world_Edges_polygons, mark, depth + 1);
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
	auto self = (mindustry_world_Edges *) object;
}

void init_mindustry_world_Edges(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Edges:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Edges(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Edges_getFacingEdge_mindustry_gen_Building_mindustry_gen_Building_R_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Edges:getFacingEdge", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Edges(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[0].o));
	sp[1].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[1].o)))->F_tile;
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Block_int_int_mindustry_world_Tile_R_mindustry_world_Tile(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(54);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK((frame[0].o)))->F_tile;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_ALOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Tile_mindustry_world_Tile_R_mindustry_world_Tile(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Edges:getFacingEdge", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Edges(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Block_int_int_mindustry_world_Tile_R_mindustry_world_Tile(ctx, sp[0].o, ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[0].o)))->F_y), (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(59);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	INST_ALOAD(0);
	goto label_3;
label_2:;
	INST_ALOAD(2);
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Block_int_int_mindustry_world_Tile_R_mindustry_world_Tile(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Edges:getFacingEdge", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Edges(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(63);
	jint temp0 = (jint)((func_mindustry_world_Block_isMultiblock_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_world_Block_isMultiblock_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(64);
	frame[4].i = ((jint)((mindustry_world_Block *) NULL_CHECK((frame[0].o)))->F_size);
	LINE_NUMBER(65);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	jint temp0 = frame[1].i;
	jint temp1 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, (((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_x) - (frame[1].i)), ((-((frame[4].i) - (jint(1)))) / (jint(2))), ((frame[4].i) / (jint(2))));
	jint temp2 = temp0 + temp1;
	jint temp3 = frame[2].i;
	jint temp4 = ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[3].o)))->F_y) - (frame[2].i);
	jint temp5 = (-((frame[4].i) - (jint(1)))) / (jint(2));
	jint temp6 = (frame[4].i) / (jint(2));
	LINE_NUMBER(66);
	jint temp7 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp4, temp5, temp6);
	jint temp8 = temp3 + temp7;
	LINE_NUMBER(65);
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, temp2, temp8);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Edges_getPixelPolygon_float_R_Array1_arc_math_geom_Vec2(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Edges:getPixelPolygon", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Edges(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(70);
	if ((floatCompare((frame[0].f), (jfloat(1)), 1)) < 0) goto label_1;
	}
	{
	if ((floatCompare((frame[0].f), (jfloat(12.0f)), -1)) <= 0) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(71);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Polygon size must be between 1 and 12"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(72);
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_polygons;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint(((frame[0].f) * (jfloat(2))))) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Edges:getEdges", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Edges(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(76);
	if ((frame[0].i) < 0) goto label_1;
	}
	{
	if ((frame[0].i) <= (16)) goto label_2;
	}
label_1:;
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Block size must be between 0 and 16"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(78);
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_edges;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[0].i) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_world_Edges_getInsideEdges_int_R_Array1_arc_math_geom_Point2(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Edges:getInsideEdges", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Edges(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(82);
	if ((frame[0].i) < 0) goto label_1;
	}
	{
	if ((frame[0].i) <= (16)) goto label_2;
	}
label_1:;
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Block size must be between 0 and 16"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(84);
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_edgeInside;
	popStackFrame(ctx);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[0].i) - (jint(1)))));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_world_Edges_lambda$static$0_arc_math_geom_Point2_arc_math_geom_Point2_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Edges:lambda$static$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Edges(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(40);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_angle_float_float_R_float(ctx, (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_x))), (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[0].o)))->F_y))));
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_angle_float_float_R_float(ctx, (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x))), (jfloat(((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y))));
	jint temp2 = (jint)SM_java_lang_Float_compare_float_float_R_int(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_world_Edges(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_world_Edges_maxRadius = jint(12);
	jtype frame[15];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/Edges:<clinit>", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_world_Edges(ctx);
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)createMultiArray(ctx, &class_arc_math_geom_Point2, {(16), (jint(0))});
	clinit_mindustry_world_Edges(ctx);
	SF_mindustry_world_Edges_edges = sp[0].o;
	LINE_NUMBER(14);
	sp[0].o = (jobject)createMultiArray(ctx, &class_arc_math_geom_Point2, {(16), (jint(0))});
	clinit_mindustry_world_Edges(ctx);
	SF_mindustry_world_Edges_edgeInside = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = (jobject)createMultiArray(ctx, &class_arc_math_geom_Vec2, {(24), (jint(0))});
	clinit_mindustry_world_Edges(ctx);
	SF_mindustry_world_Edges_polygons = sp[0].o;
	LINE_NUMBER(18);
	frame[0].i = (jint(0));
	}
label_4:;
	{
	if ((frame[0].i) >= (24)) goto label_5;
	}
	{
	LINE_NUMBER(19);
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_polygons;
	jint temp0 = frame[0].i;
	sp[1].o = (jobject)SM_arc_math_geom_Geometry_pixelCircle_float_R_Array1_arc_math_geom_Vec2(ctx, ((jfloat(((frame[0].i) + (jint(1))))) / (jfloat(2))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(18);
	INST_IINC(0, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(22);
	frame[0].i = (jint(0));
	}
label_8:;
	{
	if ((frame[0].i) >= (16)) goto label_9;
	}
	{
	LINE_NUMBER(23);
	frame[1].i = ((-(jint(((jfloat((frame[0].i))) / (jfloat(2)))))) - (jint(1)));
	LINE_NUMBER(24);
	frame[2].i = ((jint((((jfloat((frame[0].i))) / (jfloat(2))) + (jfloat(0.5f))))) + (jint(1)));
	LINE_NUMBER(25);
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_edges;
	jint temp0 = frame[0].i;
	sp[1].o = (jobject)createArray(ctx, &class_arc_math_geom_Point2, (((frame[0].i) + (jint(1))) * (jint(4))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(27);
	frame[3].i = (jint(0));
	LINE_NUMBER(29);
	frame[4].i = (jint(0));
	}
label_15:;
	{
	if ((frame[4].i) >= ((frame[0].i) + (jint(1)))) goto label_16;
	}
	{
	LINE_NUMBER(31);
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_edges;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i));
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (((frame[1].i) + (jint(1))) + (frame[4].i)), (frame[1].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(33);
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_edges;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i));
	jint temp1 = frame[3].i;
	INST_IINC(3, 1);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (((frame[1].i) + (jint(1))) + (frame[4].i)), (frame[2].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	LINE_NUMBER(35);
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_edges;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i));
	jint temp2 = frame[3].i;
	INST_IINC(3, 1);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (frame[1].i), (((frame[1].i) + (frame[4].i)) + (jint(1))));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	LINE_NUMBER(37);
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_edges;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i));
	jint temp3 = frame[3].i;
	INST_IINC(3, 1);
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, (frame[2].i), (((frame[1].i) + (frame[4].i)) + (jint(1))));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	LINE_NUMBER(29);
	INST_IINC(4, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(40);
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_edges;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i));
	{ /* InvokeDynamic */
		clinit_mindustry_world_Edges_invoke_java_util_Comparator_1(ctx);
		auto proxy = (mindustry_world_Edges_invoke_java_util_Comparator_1 *) gcAlloc(ctx, &class_mindustry_world_Edges_invoke_java_util_Comparator_1);
		sp[1].o = (jobject) proxy;
	}
	SM_java_util_Arrays_sort_Array1_java_lang_Object_java_util_Comparator(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(42);
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_edgeInside;
	jint temp0 = frame[0].i;
	clinit_mindustry_world_Edges(ctx);
	sp[1].o = (jobject)SF_mindustry_world_Edges_edges;
	sp[1].o = (jobject)createArray(ctx, &class_arc_math_geom_Point2, (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[0].i)))))->length));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(44);
	frame[4].i = (jint(0));
	}
label_24:;
	{
	jint temp0 = frame[4].i;
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_edges;
	if (temp0 >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)))))->length)) goto label_25;
	}
	{
	LINE_NUMBER(45);
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_edges;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))), (frame[4].i)));
	LINE_NUMBER(46);
	clinit_mindustry_world_Edges(ctx);
	sp[0].o = (jobject)SF_mindustry_world_Edges_edgeInside;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i));
	jint temp0 = frame[4].i;
	clinit_arc_math_geom_Point2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Point2);
	jint temp1 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_x), (-(jint(((jfloat((frame[0].i))) / (jfloat(2)))))), (jint((((jfloat((frame[0].i))) / (jfloat(2))) + (jfloat(0.5f))))));
	jint temp2 = (jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[5].o)))->F_y;
	jint temp3 = -(jint(((jfloat((frame[0].i))) / (jfloat(2)))));
	jint temp4 = jint((((jfloat((frame[0].i))) / (jfloat(2))) + (jfloat(0.5f))));
	LINE_NUMBER(47);
	jint temp5 = (jint)SM_arc_math_Mathf_clamp_int_int_int_R_int(ctx, temp2, temp3, temp4);
	init_arc_math_geom_Point2_int_int(ctx, sp[1].o, temp1, temp5);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(44);
	INST_IINC(4, 1);
	goto label_24;
	}
label_25:;
	{
	LINE_NUMBER(22);
	INST_IINC(0, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_world_Edges[] {
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
	{ "maxRadius", &class_int, (intptr_t) &SF_mindustry_world_Edges_maxRadius, "I", 26 },
	{ "edges", getArrayClass(&class_arc_math_geom_Point2, 2), (intptr_t) &SF_mindustry_world_Edges_edges, "[[Larc/math/geom/Point2;", 10 },
	{ "edgeInside", getArrayClass(&class_arc_math_geom_Point2, 2), (intptr_t) &SF_mindustry_world_Edges_edgeInside, "[[Larc/math/geom/Point2;", 10 },
	{ "polygons", getArrayClass(&class_arc_math_geom_Vec2, 2), (intptr_t) &SF_mindustry_world_Edges_polygons, "[[Larc/math/geom/Vec2;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_world_Edges, 0, "()V", 1 },
	{ "getFacingEdge", (intptr_t) SM_mindustry_world_Edges_getFacingEdge_mindustry_gen_Building_mindustry_gen_Building_R_mindustry_world_Tile, 0, "(Lmindustry/gen/Building;Lmindustry/gen/Building;)Lmindustry/world/Tile;", 9 },
	{ "getFacingEdge", (intptr_t) SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Tile_mindustry_world_Tile_R_mindustry_world_Tile, 0, "(Lmindustry/world/Tile;Lmindustry/world/Tile;)Lmindustry/world/Tile;", 9 },
	{ "getFacingEdge", (intptr_t) SM_mindustry_world_Edges_getFacingEdge_mindustry_world_Block_int_int_mindustry_world_Tile_R_mindustry_world_Tile, 0, "(Lmindustry/world/Block;IILmindustry/world/Tile;)Lmindustry/world/Tile;", 9 },
	{ "getPixelPolygon", (intptr_t) SM_mindustry_world_Edges_getPixelPolygon_float_R_Array1_arc_math_geom_Vec2, 0, "(F)[Larc/math/geom/Vec2;", 9 },
	{ "getEdges", (intptr_t) SM_mindustry_world_Edges_getEdges_int_R_Array1_arc_math_geom_Point2, 0, "(I)[Larc/math/geom/Point2;", 9 },
	{ "getInsideEdges", (intptr_t) SM_mindustry_world_Edges_getInsideEdges_int_R_Array1_arc_math_geom_Point2, 0, "(I)[Larc/math/geom/Point2;", 9 },
	{ "lambda$static$0", (intptr_t) SM_mindustry_world_Edges_lambda$static$0_arc_math_geom_Point2_arc_math_geom_Point2_R_int, 0, "(Larc/math/geom/Point2;Larc/math/geom/Point2;)I", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_world_Edges, 0, "()V", 8 },
};

Class class_mindustry_world_Edges{
		.nativeName = (intptr_t) "mindustry/world/Edges",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_Edges),
		.classVtable = (intptr_t) vtable_mindustry_world_Edges,
		.staticInitializer = (intptr_t) clinit_mindustry_world_Edges,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_world_Edges,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_Edges = registerClass(&class_mindustry_world_Edges);

}
