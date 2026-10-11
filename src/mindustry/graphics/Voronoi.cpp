#include "mindustry/graphics/Voronoi.h"
#include "java/lang/Math.h"
#include "arc/math/geom/Vec2.h"
#include "java/lang/Float.h"
#include "mindustry/graphics/Voronoi.h"
#include "mindustry/graphics/Voronoi_Edge.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Voronoi_invoke_java_util_Comparator_1.h"
#include "mindustry/graphics/Voronoi_GraphEdge.h"
#include "java/util/Arrays.h"
#include "java/util/Comparator.h"
#include "arc/struct/Seq.h"
#include "mindustry/graphics/Voronoi_Site.h"
#include "mindustry/graphics/Voronoi_Halfedge.h"

extern "C" {

jint SF_mindustry_graphics_Voronoi_LE;
jint SF_mindustry_graphics_Voronoi_RE;

void mark_mindustry_graphics_Voronoi(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_graphics_Voronoi *) object;
	if (self->F_sites)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sites)->clazz)->markFunction)((jobject) self->F_sites, mark, depth + 1);
	if (self->F_bottomsite)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bottomsite)->clazz)->markFunction)((jobject) self->F_bottomsite, mark, depth + 1);
	if (self->F_PQhash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_PQhash)->clazz)->markFunction)((jobject) self->F_PQhash, mark, depth + 1);
	if (self->F_ELhash)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_ELhash)->clazz)->markFunction)((jobject) self->F_ELhash, mark, depth + 1);
	if (self->F_allEdges)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_allEdges)->clazz)->markFunction)((jobject) self->F_allEdges, mark, depth + 1);
}

void clinit_mindustry_graphics_Voronoi(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_Voronoi_LE = jint(0);
	SF_mindustry_graphics_Voronoi_RE = jint(1);
}

void init_mindustry_graphics_Voronoi(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Voronoi(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(20);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_nvertices = (jint(0));
	LINE_NUMBER(30);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_minDistanceBetweenSites = (jfloat(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_Voronoi_generate_Array1_arc_math_geom_Vec2_float_float_float_float_R_arc_struct_Seq(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:generate", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Voronoi(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(33);
	clinit_mindustry_graphics_Voronoi(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Voronoi);
	init_mindustry_graphics_Voronoi(ctx, sp[0].o);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_generateVoronoi_Array1_arc_math_geom_Vec2_float_float_float_float_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Voronoi_generateVoronoi_Array1_arc_math_geom_Vec2_float_float_float_float_R_arc_struct_Seq])(ctx, sp[0].o, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_Voronoi_generateVoronoi_Array1_arc_math_geom_Vec2_float_float_float_float_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[37];
	auto stack = &frame[32];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:generateVoronoi", 37 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(37);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_allEdges = (jref) sp[1].o;
	LINE_NUMBER(39);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_nsites = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	LINE_NUMBER(41);
	frame[6].f = ((jfloat(((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_nsites))) + (jfloat(4.0f)));
	LINE_NUMBER(42);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble((frame[6].f))));
	frame[7].i = (jint(temp0));
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_Voronoi$Site, ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_nsites));
	((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_sites = (jref) sp[1].o;
	LINE_NUMBER(45);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (jint(0))));
	LINE_NUMBER(46);
	frame[9].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_x);
	LINE_NUMBER(47);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ymin = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_y);
	LINE_NUMBER(48);
	frame[10].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_x);
	LINE_NUMBER(49);
	frame[11].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[8].o)))->F_y);
	LINE_NUMBER(50);
	frame[12].i = (jint(0));
	}
label_11:;
	{
	if ((frame[12].i) >= ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_nsites)) goto label_12;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_sites;
	jint temp0 = frame[12].i;
	clinit_mindustry_graphics_Voronoi$Site(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_Voronoi$Site);
	init_mindustry_graphics_Voronoi$Site(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_sites;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i)))))->F_coord;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[12].i))));
	LINE_NUMBER(53);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_sites;
	((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[12].i)))))->F_sitenbr = (frame[12].i);
	LINE_NUMBER(55);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[12].i)))))->F_x), (frame[9].f), 1)) >= 0) goto label_17;
	}
	{
	LINE_NUMBER(56);
	frame[9].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[12].i)))))->F_x);
	goto label_19;
	}
label_17:;
	{
	LINE_NUMBER(57);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[12].i)))))->F_x), (frame[10].f), -1)) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(58);
	frame[10].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[12].i)))))->F_x);
	}
label_19:;
	{
	LINE_NUMBER(61);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[12].i)))))->F_y), ((jfloat)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ymin), 1)) >= 0) goto label_21;
	}
	{
	LINE_NUMBER(62);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ymin = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[12].i)))))->F_y);
	goto label_23;
	}
label_21:;
	{
	LINE_NUMBER(63);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[12].i)))))->F_y), (frame[11].f), -1)) <= 0) goto label_23;
	}
	{
	LINE_NUMBER(64);
	frame[11].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[12].i)))))->F_y);
	}
label_23:;
	{
	LINE_NUMBER(50);
	INST_IINC(12, 1);
	goto label_11;
	}
label_12:;
	{
	LINE_NUMBER(68);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_sites;
	{ /* InvokeDynamic */
		clinit_mindustry_graphics_Voronoi_invoke_java_util_Comparator_1(ctx);
		auto proxy = (mindustry_graphics_Voronoi_invoke_java_util_Comparator_1 *) gcAlloc(ctx, &class_mindustry_graphics_Voronoi_invoke_java_util_Comparator_1);
		sp[1].o = (jobject) proxy;
	}
	SM_java_util_Arrays_sort_Array1_java_lang_Object_java_util_Comparator(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(79);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_deltay = ((frame[11].f) - ((jfloat)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ymin));
	LINE_NUMBER(80);
	frame[12].f = ((frame[10].f) - (frame[9].f));
	LINE_NUMBER(84);
	if ((floatCompare((frame[2].f), (frame[3].f), -1)) <= 0) goto label_28;
	}
	{
	LINE_NUMBER(85);
	frame[13].f = (frame[2].f);
	LINE_NUMBER(86);
	frame[2].f = (frame[3].f);
	LINE_NUMBER(87);
	frame[3].f = (frame[13].f);
	}
label_28:;
	{
	LINE_NUMBER(89);
	if ((floatCompare((frame[4].f), (frame[5].f), -1)) <= 0) goto label_32;
	}
	{
	LINE_NUMBER(90);
	frame[13].f = (frame[4].f);
	LINE_NUMBER(91);
	frame[4].f = (frame[5].f);
	LINE_NUMBER(92);
	frame[5].f = (frame[13].f);
	}
label_32:;
	{
	LINE_NUMBER(94);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_borderMinX = (frame[2].f);
	LINE_NUMBER(95);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_borderMinY = (frame[4].f);
	LINE_NUMBER(96);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_borderMaxX = (frame[3].f);
	LINE_NUMBER(97);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_borderMaxY = (frame[5].f);
	LINE_NUMBER(99);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_siteidx = (jint(0));
	LINE_NUMBER(101);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQcount = (jint(0));
	LINE_NUMBER(102);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQmin = (jint(0));
	LINE_NUMBER(103);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhashsize = ((jint(4)) * (frame[7].i));
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_Voronoi$Halfedge, ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhashsize));
	((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_PQhash = (jref) sp[1].o;
	LINE_NUMBER(106);
	frame[14].i = (jint(0));
	}
label_45:;
	{
	if ((frame[14].i) >= ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhashsize)) goto label_46;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhash;
	jint temp0 = frame[14].i;
	clinit_mindustry_graphics_Voronoi$Halfedge(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_Voronoi$Halfedge);
	init_mindustry_graphics_Voronoi$Halfedge(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(106);
	INST_IINC(14, 1);
	goto label_45;
	}
label_46:;
	{
	LINE_NUMBER(110);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhashsize = ((jint(2)) * (frame[7].i));
	LINE_NUMBER(111);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_Voronoi$Halfedge, ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhashsize));
	((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_ELhash = (jref) sp[1].o;
	LINE_NUMBER(113);
	frame[14].i = (jint(0));
	}
label_51:;
	{
	if ((frame[14].i) >= ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhashsize)) goto label_52;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhash;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[14].i)) = (jobject(nullptr));
	LINE_NUMBER(113);
	INST_IINC(14, 1);
	goto label_51;
	}
label_52:;
	{
	LINE_NUMBER(116);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (jobject(nullptr)), (jint(0)));
	frame[15].o = sp[0].o;
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (jobject(nullptr)), (jint(0)));
	frame[16].o = sp[0].o;
	LINE_NUMBER(118);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[15].o)))->F_ELleft = (jref) (jobject(nullptr));
	LINE_NUMBER(119);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[15].o)))->F_ELright = (jref) (frame[16].o);
	LINE_NUMBER(120);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[16].o)))->F_ELleft = (jref) (frame[15].o);
	LINE_NUMBER(121);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[16].o)))->F_ELright = (jref) (jobject(nullptr));
	LINE_NUMBER(122);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhash;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[15].o);
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhash;
	ARRAY_ACCESS(jobject, sp[0].o, (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhashsize) - (jint(1)))) = (frame[16].o);
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_graphics_Voronoi_next_R_mindustry_graphics_Voronoi$Site) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_next_R_mindustry_graphics_Voronoi$Site])(ctx, (frame[0].o));
	((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_bottomsite = (jref) sp[1].o;
	LINE_NUMBER(126);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_next_R_mindustry_graphics_Voronoi$Site) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_next_R_mindustry_graphics_Voronoi$Site])(ctx, (frame[0].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(128);
	frame[19].o = (jobject(nullptr));
	}
label_65:;
	{
	LINE_NUMBER(131);
	if (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQcount) == 0) goto label_66;
	}
	{
	LINE_NUMBER(132);
	clinit_arc_math_geom_Vec2(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[0].o);
	frame[21].o = sp[0].o;
	}
label_68:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhash;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQmin)))))->F_PQnext;
	if (sp[0].o != nullptr) goto label_69;
	}
	{
	LINE_NUMBER(135);
	sp[0].o = frame[0].o;
	((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_PQmin = (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_PQmin) + (jint(1)));
	goto label_68;
	}
label_69:;
	{
	LINE_NUMBER(137);
	sp[0].o = frame[21].o;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhash;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQmin)))))->F_PQnext;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(sp[1].o))->F_vertex;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(sp[1].o))->F_coord;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(138);
	sp[0].o = frame[21].o;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhash;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQmin)))))->F_PQnext;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = ((jfloat)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(sp[1].o))->F_ystar);
	LINE_NUMBER(139);
	frame[19].o = (frame[21].o);
	}
label_66:;
	{
	LINE_NUMBER(147);
	if ((frame[17].o) == nullptr) goto label_73;
	}
	{
	if (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQcount) == 0) goto label_74;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[17].o)))->F_coord;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[19].o)))->F_y), 1)) < 0) goto label_74;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[17].o)))->F_coord;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[19].o)))->F_y), -1)) != 0) goto label_73;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[17].o)))->F_coord;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[19].o)))->F_x), 1)) >= 0) goto label_73;
	}
label_74:;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[17].o)))->F_coord;
	frame[25].i = (jint((((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x) - (frame[9].f)) / (frame[12].f)) * (jfloat(((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhashsize))))));
	LINE_NUMBER(150);
	if ((frame[25].i) >= 0) goto label_76;
	}
	{
	LINE_NUMBER(151);
	frame[25].i = (jint(0));
	}
label_76:;
	{
	LINE_NUMBER(153);
	if ((frame[25].i) < ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhashsize)) goto label_78;
	}
	{
	LINE_NUMBER(154);
	frame[25].i = (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhashsize) - (jint(1)));
	}
label_78:;
	{
	LINE_NUMBER(157);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_getHash_int_R_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_getHash_int_R_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (frame[25].i));
	frame[26].o = sp[0].o;
	LINE_NUMBER(158);
	if ((frame[26].o) != nullptr) goto label_81;
	}
	{
	LINE_NUMBER(159);
	frame[27].i = (jint(1));
	}
label_83:;
	{
	if ((frame[27].i) >= ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhashsize)) goto label_81;
	}
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_getHash_int_R_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_getHash_int_R_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), ((frame[25].i) - (frame[27].i)));
	frame[26].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_85;
	}
	LINE_NUMBER(161);
	goto label_81;
label_85:;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_getHash_int_R_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_getHash_int_R_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), ((frame[25].i) + (frame[27].i)));
	frame[26].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_87;
	}
	LINE_NUMBER(164);
	goto label_81;
label_87:;
	{
	LINE_NUMBER(159);
	INST_IINC(27, 1);
	goto label_83;
	}
label_81:;
	{
	LINE_NUMBER(168);
	if ((frame[26].o) == (frame[15].o)) goto label_89;
	}
	{
	if ((frame[26].o) == (frame[16].o)) goto label_90;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[26].o;
	sp[2].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[17].o)))->F_coord;
	jint temp0 = (jint)((func_mindustry_graphics_Voronoi_right_mindustry_graphics_Voronoi$Halfedge_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Voronoi_right_mindustry_graphics_Voronoi$Halfedge_arc_math_geom_Vec2_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_90;
	}
label_89:;
	{
	LINE_NUMBER(170);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[26].o)))->F_ELright;
	frame[26].o = sp[0].o;
	LINE_NUMBER(171);
	if ((frame[26].o) == (frame[16].o)) goto label_92;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[26].o;
	sp[2].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[17].o)))->F_coord;
	jint temp0 = (jint)((func_mindustry_graphics_Voronoi_right_mindustry_graphics_Voronoi$Halfedge_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Voronoi_right_mindustry_graphics_Voronoi$Halfedge_arc_math_geom_Vec2_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 != 0) goto label_89;
	}
label_92:;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[26].o)))->F_ELleft;
	frame[26].o = sp[0].o;
	goto label_93;
	}
label_90:;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[26].o)))->F_ELleft;
	frame[26].o = sp[0].o;
	LINE_NUMBER(176);
	if ((frame[26].o) == (frame[15].o)) goto label_93;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = frame[26].o;
	sp[2].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[17].o)))->F_coord;
	jint temp0 = (jint)((func_mindustry_graphics_Voronoi_right_mindustry_graphics_Voronoi$Halfedge_arc_math_geom_Vec2_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Voronoi_right_mindustry_graphics_Voronoi$Halfedge_arc_math_geom_Vec2_R_boolean])(ctx, sp[0].o, sp[1].o, sp[2].o);
	if (temp0 == 0) goto label_90;
	}
label_93:;
	{
	LINE_NUMBER(179);
	if ((frame[25].i) <= 0) goto label_95;
	}
	{
	if ((frame[25].i) >= (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhashsize) - (jint(1)))) goto label_95;
	}
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhash;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[25].i)) = (frame[26].o);
	}
label_95:;
	{
	LINE_NUMBER(182);
	frame[18].o = (frame[26].o);
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[18].o)))->F_ELright;
	frame[21].o = sp[0].o;
	LINE_NUMBER(185);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_rightreg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_rightreg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site])(ctx, (frame[0].o), (frame[18].o));
	frame[24].o = sp[0].o;
	LINE_NUMBER(186);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_bisect_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_mindustry_graphics_Voronoi$Edge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_bisect_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_mindustry_graphics_Voronoi$Edge])(ctx, (frame[0].o), (frame[24].o), (frame[17].o));
	frame[20].o = sp[0].o;
	LINE_NUMBER(188);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (frame[20].o), (jint(0)));
	frame[22].o = sp[0].o;
	LINE_NUMBER(189);
	((func_mindustry_graphics_Voronoi_insert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_insert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (frame[18].o), (frame[22].o));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site])(ctx, (frame[0].o), (frame[18].o), (frame[22].o));
	frame[23].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_104;
	}
	{
	LINE_NUMBER(192);
	((func_mindustry_graphics_Voronoi_pqdelete_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_pqdelete_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (frame[18].o));
	LINE_NUMBER(193);
	sp[0].o = frame[0].o;
	sp[1].o = frame[18].o;
	sp[2].o = frame[23].o;
	sp[3].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[23].o)))->F_coord;
	sp[4].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[17].o)))->F_coord;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float])(ctx, sp[3].o, sp[4].o);
	((func_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	}
label_104:;
	{
	LINE_NUMBER(195);
	frame[18].o = (frame[22].o);
	LINE_NUMBER(196);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (frame[20].o), (jint(1)));
	frame[22].o = sp[0].o;
	LINE_NUMBER(197);
	((func_mindustry_graphics_Voronoi_insert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_insert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (frame[18].o), (frame[22].o));
	LINE_NUMBER(199);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site])(ctx, (frame[0].o), (frame[22].o), (frame[21].o));
	frame[23].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_110;
	}
	{
	LINE_NUMBER(200);
	sp[0].o = frame[0].o;
	sp[1].o = frame[22].o;
	sp[2].o = frame[23].o;
	sp[3].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[23].o)))->F_coord;
	sp[4].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[17].o)))->F_coord;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float])(ctx, sp[3].o, sp[4].o);
	((func_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	}
label_110:;
	{
	LINE_NUMBER(202);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_next_R_mindustry_graphics_Voronoi$Site) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_next_R_mindustry_graphics_Voronoi$Site])(ctx, (frame[0].o));
	frame[17].o = sp[0].o;
	LINE_NUMBER(203);
	goto label_113;
	}
label_73:;
	{
	if (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQcount) == 0) goto label_114;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhash;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQmin)))))->F_PQnext;
	frame[25].o = sp[0].o;
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhash;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQmin));
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[25].o)))->F_PQnext;
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(sp[0].o))->F_PQnext = (jref) sp[1].o;
	LINE_NUMBER(208);
	sp[0].o = frame[0].o;
	((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_PQcount = (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_PQcount) - (jint(1)));
	LINE_NUMBER(209);
	frame[18].o = (frame[25].o);
	LINE_NUMBER(210);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[18].o)))->F_ELleft;
	frame[26].o = sp[0].o;
	LINE_NUMBER(211);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[18].o)))->F_ELright;
	frame[21].o = sp[0].o;
	LINE_NUMBER(212);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[21].o)))->F_ELright;
	frame[27].o = sp[0].o;
	LINE_NUMBER(213);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_leftReg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_leftReg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site])(ctx, (frame[0].o), (frame[18].o));
	frame[24].o = sp[0].o;
	LINE_NUMBER(214);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_rightreg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_rightreg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site])(ctx, (frame[0].o), (frame[21].o));
	frame[28].o = sp[0].o;
	LINE_NUMBER(216);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[18].o)))->F_vertex;
	frame[29].o = sp[0].o;
	LINE_NUMBER(217);
	((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[29].o)))->F_sitenbr = ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_nvertices);
	LINE_NUMBER(218);
	sp[0].o = frame[0].o;
	((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_nvertices = (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_nvertices) + (jint(1)));
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[18].o)))->F_ELedge;
	((func_mindustry_graphics_Voronoi_endpoint_mindustry_graphics_Voronoi$Edge_int_mindustry_graphics_Voronoi$Site) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Voronoi_endpoint_mindustry_graphics_Voronoi$Edge_int_mindustry_graphics_Voronoi$Site])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[18].o)))->F_ELpm), (frame[29].o));
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[21].o)))->F_ELedge;
	((func_mindustry_graphics_Voronoi_endpoint_mindustry_graphics_Voronoi$Edge_int_mindustry_graphics_Voronoi$Site) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Voronoi_endpoint_mindustry_graphics_Voronoi$Edge_int_mindustry_graphics_Voronoi$Site])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[21].o)))->F_ELpm), (frame[29].o));
	LINE_NUMBER(221);
	((func_mindustry_graphics_Voronoi_delete_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_delete_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (frame[18].o));
	LINE_NUMBER(222);
	((func_mindustry_graphics_Voronoi_pqdelete_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_pqdelete_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (frame[21].o));
	LINE_NUMBER(223);
	((func_mindustry_graphics_Voronoi_delete_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_delete_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (frame[21].o));
	LINE_NUMBER(224);
	frame[30].i = (jint(0));
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[24].o)))->F_coord;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[28].o)))->F_coord;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), -1)) <= 0) goto label_134;
	}
	{
	LINE_NUMBER(227);
	frame[31].o = (frame[24].o);
	LINE_NUMBER(228);
	frame[24].o = (frame[28].o);
	LINE_NUMBER(229);
	frame[28].o = (frame[31].o);
	LINE_NUMBER(230);
	frame[30].i = (jint(1));
	}
label_134:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_bisect_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_mindustry_graphics_Voronoi$Edge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_bisect_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_mindustry_graphics_Voronoi$Edge])(ctx, (frame[0].o), (frame[24].o), (frame[28].o));
	frame[20].o = sp[0].o;
	LINE_NUMBER(234);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (frame[20].o), (frame[30].i));
	frame[22].o = sp[0].o;
	LINE_NUMBER(235);
	((func_mindustry_graphics_Voronoi_insert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_insert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (frame[26].o), (frame[22].o));
	LINE_NUMBER(236);
	((func_mindustry_graphics_Voronoi_endpoint_mindustry_graphics_Voronoi$Edge_int_mindustry_graphics_Voronoi$Site) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_endpoint_mindustry_graphics_Voronoi$Edge_int_mindustry_graphics_Voronoi$Site])(ctx, (frame[0].o), (frame[20].o), ((jint(1)) - (frame[30].i)), (frame[29].o));
	LINE_NUMBER(238);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site])(ctx, (frame[0].o), (frame[26].o), (frame[22].o));
	frame[23].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_144;
	}
	{
	LINE_NUMBER(239);
	((func_mindustry_graphics_Voronoi_pqdelete_mindustry_graphics_Voronoi$Halfedge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_pqdelete_mindustry_graphics_Voronoi$Halfedge])(ctx, (frame[0].o), (frame[26].o));
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	sp[1].o = frame[26].o;
	sp[2].o = frame[23].o;
	sp[3].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[23].o)))->F_coord;
	sp[4].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[24].o)))->F_coord;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float])(ctx, sp[3].o, sp[4].o);
	((func_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	}
label_144:;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((func_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site])(ctx, (frame[0].o), (frame[22].o), (frame[27].o));
	frame[23].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_113;
	}
	{
	LINE_NUMBER(244);
	sp[0].o = frame[0].o;
	sp[1].o = frame[22].o;
	sp[2].o = frame[23].o;
	sp[3].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[23].o)))->F_coord;
	sp[4].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[24].o)))->F_coord;
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_math_geom_Vec2_dst_arc_math_geom_Vec2_R_float])(ctx, sp[3].o, sp[4].o);
	((func_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0);
	}
label_113:;
	LINE_NUMBER(249);
	goto label_65;
label_114:;
	{
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[15].o)))->F_ELright;
	frame[18].o = sp[0].o;
	}
label_148:;
	{
	if ((frame[18].o) == (frame[16].o)) goto label_149;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[18].o)))->F_ELedge;
	frame[20].o = sp[0].o;
	LINE_NUMBER(253);
	((func_mindustry_graphics_Voronoi_clipLine_mindustry_graphics_Voronoi$Edge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_clipLine_mindustry_graphics_Voronoi$Edge])(ctx, (frame[0].o), (frame[20].o));
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[18].o)))->F_ELright;
	frame[18].o = sp[0].o;
	goto label_148;
	}
label_149:;
	{
	LINE_NUMBER(256);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_allEdges;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_Voronoi_next_R_mindustry_graphics_Voronoi$Site(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:next", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(260);
	if (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_siteidx) >= ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_nsites)) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_sites;
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_graphics_Voronoi *) NULL_CHECK(sp[1].o))->F_siteidx;
	((mindustry_graphics_Voronoi *) NULL_CHECK(sp[1].o))->F_siteidx = (temp0 + (jint(1)));
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_Voronoi_bisect_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_mindustry_graphics_Voronoi$Edge(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:bisect", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(264);
	clinit_mindustry_graphics_Voronoi$Edge(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Voronoi$Edge);
	init_mindustry_graphics_Voronoi$Edge(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(267);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_reg;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_reg;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (frame[2].o);
	LINE_NUMBER(271);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_ep;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (jobject(nullptr));
	LINE_NUMBER(272);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_ep;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (jobject(nullptr));
	LINE_NUMBER(275);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[2].o)))->F_coord;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[1].o)))->F_coord;
	frame[4].f = (temp0 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[2].o)))->F_coord;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[1].o)))->F_coord;
	frame[5].f = (temp1 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(278);
	if ((floatCompare((frame[4].f), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	INST_FLOAD(4);
	goto label_9;
label_8:;
	INST_FLOAD(4);
	INST_FNEG();
label_9:;
	{
	sp -= 1;
	frame[6].f = sp[0].f;
	LINE_NUMBER(279);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) <= 0) goto label_11;
	}
	INST_FLOAD(5);
	goto label_12;
label_11:;
	INST_FLOAD(5);
	INST_FNEG();
label_12:;
	{
	sp -= 1;
	frame[7].f = sp[0].f;
	LINE_NUMBER(280);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[1].o)))->F_coord;
	jfloat temp0 = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x) * (frame[4].f);
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[1].o)))->F_coord;
	((mindustry_graphics_Voronoi$Edge *) NULL_CHECK(sp[0].o))->F_c = ((temp0 + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) * (frame[5].f))) + ((((frame[4].f) * (frame[4].f)) + ((frame[5].f) * (frame[5].f))) * (jfloat(0.5f))));
	LINE_NUMBER(282);
	if ((floatCompare((frame[6].f), (frame[7].f), -1)) <= 0) goto label_15;
	}
	{
	LINE_NUMBER(283);
	((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_a = (jfloat(1));
	LINE_NUMBER(284);
	((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_b = ((frame[5].f) / (frame[4].f));
	LINE_NUMBER(285);
	sp[0].o = frame[3].o;
	((mindustry_graphics_Voronoi$Edge *) NULL_CHECK(sp[0].o))->F_c = (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK(sp[0].o))->F_c) / (frame[4].f));
	goto label_19;
	}
label_15:;
	{
	LINE_NUMBER(287);
	((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_b = (jfloat(1));
	LINE_NUMBER(288);
	((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_a = ((frame[4].f) / (frame[5].f));
	LINE_NUMBER(289);
	sp[0].o = frame[3].o;
	((mindustry_graphics_Voronoi$Edge *) NULL_CHECK(sp[0].o))->F_c = (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK(sp[0].o))->F_c) / (frame[5].f));
	}
label_19:;
	{
	LINE_NUMBER(292);
	((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_edgenbr = ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_nedges);
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_nedges = (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_nedges) + (jint(1)));
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jint M_mindustry_graphics_Voronoi_pqbucket_mindustry_graphics_Voronoi$Halfedge_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:pqbucket", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(301);
	frame[2].i = (jint((((((jfloat)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ystar) - ((jfloat)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ymin)) / ((jfloat)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_deltay)) * (jfloat(((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhashsize))))));
	LINE_NUMBER(302);
	if ((frame[2].i) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(303);
	frame[2].i = (jint(0));
	}
label_2:;
	{
	LINE_NUMBER(305);
	if ((frame[2].i) < ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhashsize)) goto label_4;
	}
	{
	LINE_NUMBER(306);
	frame[2].i = (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhashsize) - (jint(1)));
	}
label_4:;
	{
	LINE_NUMBER(308);
	if ((frame[2].i) >= ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQmin)) goto label_6;
	}
	{
	LINE_NUMBER(309);
	((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQmin = (frame[2].i);
	}
label_6:;
	{
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float(jcontext ctx, jobject self, jobject param0, jobject param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:pqinsert", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(318);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_vertex = (jref) (frame[2].o);
	LINE_NUMBER(319);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[2].o)))->F_coord;
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(sp[0].o))->F_ystar = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y) + (frame[3].f));
	LINE_NUMBER(320);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhash;
	jint temp0 = (jint)((func_mindustry_graphics_Voronoi_pqbucket_mindustry_graphics_Voronoi$Halfedge_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_pqbucket_mindustry_graphics_Voronoi$Halfedge_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}
label_3:;
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[4].o)))->F_PQnext;
	frame[5].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ystar), ((jfloat)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[5].o)))->F_ystar), -1)) > 0) goto label_6;
	}
	{
	if ((floatCompare(((jfloat)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ystar), ((jfloat)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[5].o)))->F_ystar), -1)) != 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[2].o)))->F_coord;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[5].o)))->F_vertex;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(sp[0].o))->F_coord;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x), -1)) <= 0) goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(323);
	frame[4].o = (frame[5].o);
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(325);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[4].o)))->F_PQnext;
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(sp[0].o))->F_PQnext = (jref) sp[1].o;
	LINE_NUMBER(326);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[4].o)))->F_PQnext = (jref) (frame[1].o);
	LINE_NUMBER(327);
	sp[0].o = frame[0].o;
	((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_PQcount = (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_PQcount) + (jint(1)));
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Voronoi_pqdelete_mindustry_graphics_Voronoi$Halfedge(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:pqdelete", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(334);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_vertex;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(335);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_PQhash;
	jint temp0 = (jint)((func_mindustry_graphics_Voronoi_pqbucket_mindustry_graphics_Voronoi$Halfedge_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_pqbucket_mindustry_graphics_Voronoi$Halfedge_R_int])(ctx, (frame[0].o), (frame[1].o));
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0));
	}
label_3:;
	{
	LINE_NUMBER(336);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[2].o)))->F_PQnext;
	if (sp[0].o == (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[2].o)))->F_PQnext;
	frame[2].o = sp[0].o;
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(340);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_PQnext;
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(sp[0].o))->F_PQnext = (jref) sp[1].o;
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_PQcount = (((jint)((mindustry_graphics_Voronoi *) NULL_CHECK(sp[0].o))->F_PQcount) - (jint(1)));
	LINE_NUMBER(342);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_vertex = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(344);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:newHe", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(347);
	clinit_mindustry_graphics_Voronoi$Halfedge(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Voronoi$Halfedge);
	init_mindustry_graphics_Voronoi$Halfedge(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(348);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[3].o)))->F_ELedge = (jref) (frame[1].o);
	LINE_NUMBER(349);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[3].o)))->F_ELpm = (frame[2].i);
	LINE_NUMBER(350);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[3].o)))->F_PQnext = (jref) (jobject(nullptr));
	LINE_NUMBER(351);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[3].o)))->F_vertex = (jref) (jobject(nullptr));
	LINE_NUMBER(352);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_Voronoi_leftReg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:leftReg", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(356);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELedge;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(357);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_bottomsite;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(359);
	if (((jint)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELpm) != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELedge;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK(sp[0].o))->F_reg;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp += 1;
	goto label_4;
	}
label_3:;
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELedge;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK(sp[0].o))->F_reg;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)));
	sp += 1;
	}
label_4:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

void M_mindustry_graphics_Voronoi_insert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:insert", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(363);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[2].o)))->F_ELleft = (jref) (frame[1].o);
	LINE_NUMBER(364);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELright;
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(sp[0].o))->F_ELright = (jref) sp[1].o;
	LINE_NUMBER(365);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELright;
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(sp[0].o))->F_ELleft = (jref) (frame[2].o);
	LINE_NUMBER(366);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELright = (jref) (frame[2].o);
	LINE_NUMBER(367);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Voronoi_delete_mindustry_graphics_Voronoi$Halfedge(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:delete", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(374);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELleft;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELright;
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(sp[0].o))->F_ELright = (jref) sp[1].o;
	LINE_NUMBER(375);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELright;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELleft;
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK(sp[0].o))->F_ELleft = (jref) sp[1].o;
	LINE_NUMBER(376);
	((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_deleted = (jint(1));
	LINE_NUMBER(377);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_Voronoi_getHash_int_R_mindustry_graphics_Voronoi$Halfedge(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:getHash", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(383);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) < ((jint)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhashsize)) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(384);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhash;
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)));
	LINE_NUMBER(387);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	if (((jint)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[2].o)))->F_deleted) != 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(388);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(392);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_ELhash;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i)) = (jobject(nullptr));
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Voronoi_clipLine_mindustry_graphics_Voronoi$Edge(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:clipLine", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_reg;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_coord;
	frame[8].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(402);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_reg;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))))))->F_coord;
	frame[9].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(403);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_reg;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_coord;
	frame[10].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(404);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_reg;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))))))->F_coord;
	frame[11].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(408);
	jdouble temp0 = (jdouble)SM_java_lang_Math_sqrt_double_R_double(ctx, (jdouble(((((frame[9].f) - (frame[8].f)) * ((frame[9].f) - (frame[8].f))) + (((frame[11].f) - (frame[10].f)) * ((frame[11].f) - (frame[10].f)))))));
	if ((doubleCompare(temp0, (jdouble(((jfloat)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_minDistanceBetweenSites))), 1)) >= 0) goto label_5;
	}
	LINE_NUMBER(409);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(411);
	frame[2].f = ((jfloat)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_borderMinX);
	LINE_NUMBER(412);
	frame[3].f = ((jfloat)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_borderMaxX);
	LINE_NUMBER(413);
	frame[4].f = ((jfloat)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_borderMinY);
	LINE_NUMBER(414);
	frame[5].f = ((jfloat)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_borderMaxY);
	LINE_NUMBER(416);
	if ((doubleCompare((jdouble(((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_a))), (jdouble(1)), -1)) != 0) goto label_11;
	}
	{
	if ((doubleCompare((jdouble(((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_b))), (jdouble(0)), -1)) < 0) goto label_11;
	}
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_ep;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))));
	LINE_NUMBER(418);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_ep;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	goto label_15;
	}
label_11:;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_ep;
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))));
	LINE_NUMBER(421);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_ep;
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))));
	}
label_15:;
	{
	LINE_NUMBER(424);
	if ((doubleCompare((jdouble(((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_a))), (jdouble(1)), -1)) != 0) goto label_17;
	}
	{
	LINE_NUMBER(425);
	frame[10].f = (frame[4].f);
	LINE_NUMBER(426);
	if ((frame[6].o) == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[6].o)))->F_coord;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), (frame[4].f), -1)) <= 0) goto label_20;
	}
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[6].o)))->F_coord;
	frame[10].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	}
label_20:;
	{
	LINE_NUMBER(429);
	if ((floatCompare((frame[10].f), (frame[5].f), -1)) <= 0) goto label_22;
	}
	{
	LINE_NUMBER(430);
	frame[10].f = (frame[5].f);
	}
label_22:;
	{
	LINE_NUMBER(432);
	frame[8].f = (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_c) - (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_b) * (frame[10].f)));
	LINE_NUMBER(433);
	frame[11].f = (frame[5].f);
	LINE_NUMBER(434);
	if ((frame[7].o) == nullptr) goto label_26;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[7].o)))->F_coord;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), (frame[5].f), 1)) >= 0) goto label_26;
	}
	{
	LINE_NUMBER(435);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[7].o)))->F_coord;
	frame[11].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y);
	}
label_26:;
	{
	LINE_NUMBER(438);
	if ((floatCompare((frame[11].f), (frame[4].f), 1)) >= 0) goto label_28;
	}
	{
	LINE_NUMBER(439);
	frame[11].f = (frame[4].f);
	}
label_28:;
	{
	LINE_NUMBER(441);
	frame[9].f = (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_c) - (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_b) * (frame[11].f)));
	LINE_NUMBER(442);
	if ((floatCompare((frame[8].f), (frame[3].f), -1)) <= 0) goto label_31;
	}
	INST_ICONST(1);
	goto label_32;
label_31:;
	INST_ICONST(0);
label_32:;
	{
	if ((floatCompare((frame[9].f), (frame[3].f), -1)) <= 0) goto label_33;
	}
	INST_ICONST(1);
	goto label_34;
label_33:;
	INST_ICONST(0);
label_34:;
	{
	sp -= 2;
	jint temp0 = sp[0].i & sp[1].i;
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare((frame[8].f), (frame[2].f), 1)) >= 0) goto label_35;
	}
	INST_ICONST(1);
	goto label_36;
label_35:;
	INST_ICONST(0);
label_36:;
	{
	if ((floatCompare((frame[9].f), (frame[2].f), 1)) >= 0) goto label_37;
	}
	INST_ICONST(1);
	goto label_38;
label_37:;
	INST_ICONST(0);
label_38:;
	{
	sp -= 3;
	if ((sp[0].i | (sp[1].i & sp[2].i)) == 0) goto label_39;
	}
	LINE_NUMBER(443);
	popStackFrame(ctx);
	INST_RETURN();
label_39:;
	{
	LINE_NUMBER(445);
	if ((floatCompare((frame[8].f), (frame[3].f), -1)) <= 0) goto label_41;
	}
	{
	LINE_NUMBER(446);
	frame[8].f = (frame[3].f);
	LINE_NUMBER(447);
	frame[10].f = ((((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_c) - (frame[8].f)) / ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_b));
	}
label_41:;
	{
	LINE_NUMBER(449);
	if ((floatCompare((frame[8].f), (frame[2].f), 1)) >= 0) goto label_44;
	}
	{
	LINE_NUMBER(450);
	frame[8].f = (frame[2].f);
	LINE_NUMBER(451);
	frame[10].f = ((((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_c) - (frame[8].f)) / ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_b));
	}
label_44:;
	{
	LINE_NUMBER(453);
	if ((floatCompare((frame[9].f), (frame[3].f), -1)) <= 0) goto label_47;
	}
	{
	LINE_NUMBER(454);
	frame[9].f = (frame[3].f);
	LINE_NUMBER(455);
	frame[11].f = ((((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_c) - (frame[9].f)) / ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_b));
	}
label_47:;
	{
	LINE_NUMBER(457);
	if ((floatCompare((frame[9].f), (frame[2].f), 1)) >= 0) goto label_50;
	}
	{
	LINE_NUMBER(458);
	frame[9].f = (frame[2].f);
	LINE_NUMBER(459);
	frame[11].f = ((((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_c) - (frame[9].f)) / ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_b));
	goto label_50;
	}
label_17:;
	{
	LINE_NUMBER(462);
	frame[8].f = (frame[2].f);
	LINE_NUMBER(463);
	if ((frame[6].o) == nullptr) goto label_54;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[6].o)))->F_coord;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x), (frame[2].f), -1)) <= 0) goto label_54;
	}
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[6].o)))->F_coord;
	frame[8].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	}
label_54:;
	{
	LINE_NUMBER(466);
	if ((floatCompare((frame[8].f), (frame[3].f), -1)) <= 0) goto label_56;
	}
	{
	LINE_NUMBER(467);
	frame[8].f = (frame[3].f);
	}
label_56:;
	{
	LINE_NUMBER(469);
	frame[10].f = (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_c) - (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_a) * (frame[8].f)));
	LINE_NUMBER(470);
	frame[9].f = (frame[3].f);
	LINE_NUMBER(471);
	if ((frame[7].o) == nullptr) goto label_60;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[7].o)))->F_coord;
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x), (frame[3].f), 1)) >= 0) goto label_60;
	}
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[7].o)))->F_coord;
	frame[9].f = ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	}
label_60:;
	{
	LINE_NUMBER(474);
	if ((floatCompare((frame[9].f), (frame[2].f), 1)) >= 0) goto label_62;
	}
	{
	LINE_NUMBER(475);
	frame[9].f = (frame[2].f);
	}
label_62:;
	{
	LINE_NUMBER(477);
	frame[11].f = (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_c) - (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_a) * (frame[9].f)));
	LINE_NUMBER(478);
	if ((floatCompare((frame[10].f), (frame[5].f), -1)) <= 0) goto label_65;
	}
	INST_ICONST(1);
	goto label_66;
label_65:;
	INST_ICONST(0);
label_66:;
	{
	if ((floatCompare((frame[11].f), (frame[5].f), -1)) <= 0) goto label_67;
	}
	INST_ICONST(1);
	goto label_68;
label_67:;
	INST_ICONST(0);
label_68:;
	{
	sp -= 2;
	jint temp0 = sp[0].i & sp[1].i;
	sp[0].i = temp0;
	sp += 1;
	if ((floatCompare((frame[10].f), (frame[4].f), 1)) >= 0) goto label_69;
	}
	INST_ICONST(1);
	goto label_70;
label_69:;
	INST_ICONST(0);
label_70:;
	{
	if ((floatCompare((frame[11].f), (frame[4].f), 1)) >= 0) goto label_71;
	}
	INST_ICONST(1);
	goto label_72;
label_71:;
	INST_ICONST(0);
label_72:;
	{
	sp -= 3;
	if ((sp[0].i | (sp[1].i & sp[2].i)) == 0) goto label_73;
	}
	LINE_NUMBER(479);
	popStackFrame(ctx);
	INST_RETURN();
label_73:;
	{
	LINE_NUMBER(481);
	if ((floatCompare((frame[10].f), (frame[5].f), -1)) <= 0) goto label_75;
	}
	{
	LINE_NUMBER(482);
	frame[10].f = (frame[5].f);
	LINE_NUMBER(483);
	frame[8].f = ((((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_c) - (frame[10].f)) / ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_a));
	}
label_75:;
	{
	LINE_NUMBER(485);
	if ((floatCompare((frame[10].f), (frame[4].f), 1)) >= 0) goto label_78;
	}
	{
	LINE_NUMBER(486);
	frame[10].f = (frame[4].f);
	LINE_NUMBER(487);
	frame[8].f = ((((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_c) - (frame[10].f)) / ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_a));
	}
label_78:;
	{
	LINE_NUMBER(489);
	if ((floatCompare((frame[11].f), (frame[5].f), -1)) <= 0) goto label_81;
	}
	{
	LINE_NUMBER(490);
	frame[11].f = (frame[5].f);
	LINE_NUMBER(491);
	frame[9].f = ((((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_c) - (frame[11].f)) / ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_a));
	}
label_81:;
	{
	LINE_NUMBER(493);
	if ((floatCompare((frame[11].f), (frame[4].f), 1)) >= 0) goto label_50;
	}
	{
	LINE_NUMBER(494);
	frame[11].f = (frame[4].f);
	LINE_NUMBER(495);
	frame[9].f = ((((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_c) - (frame[11].f)) / ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_a));
	}
label_50:;
	{
	LINE_NUMBER(499);
	clinit_mindustry_graphics_Voronoi$GraphEdge(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Voronoi$GraphEdge);
	init_mindustry_graphics_Voronoi$GraphEdge(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(500);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_allEdges;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[12].o));
	LINE_NUMBER(501);
	((mindustry_graphics_Voronoi$GraphEdge *) NULL_CHECK((frame[12].o)))->F_x1 = (frame[8].f);
	LINE_NUMBER(502);
	((mindustry_graphics_Voronoi$GraphEdge *) NULL_CHECK((frame[12].o)))->F_y1 = (frame[10].f);
	LINE_NUMBER(503);
	((mindustry_graphics_Voronoi$GraphEdge *) NULL_CHECK((frame[12].o)))->F_x2 = (frame[9].f);
	LINE_NUMBER(504);
	((mindustry_graphics_Voronoi$GraphEdge *) NULL_CHECK((frame[12].o)))->F_y2 = (frame[11].f);
	LINE_NUMBER(506);
	sp[0].o = frame[12].o;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_reg;
	((mindustry_graphics_Voronoi$GraphEdge *) NULL_CHECK(sp[0].o))->F_site1 = ((jint)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0))))))->F_sitenbr);
	LINE_NUMBER(507);
	sp[0].o = frame[12].o;
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_reg;
	((mindustry_graphics_Voronoi$GraphEdge *) NULL_CHECK(sp[0].o))->F_site2 = ((jint)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1))))))->F_sitenbr);
	LINE_NUMBER(508);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_graphics_Voronoi_endpoint_mindustry_graphics_Voronoi$Edge_int_mindustry_graphics_Voronoi$Site(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:endpoint", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(511);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_ep;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i)) = (frame[3].o);
	LINE_NUMBER(512);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[1].o)))->F_ep;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint(1)) - (frame[2].i)))) != nullptr) goto label_2;
	}
	LINE_NUMBER(513);
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(515);
	((func_mindustry_graphics_Voronoi_clipLine_mindustry_graphics_Voronoi$Edge) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_graphics_Voronoi_clipLine_mindustry_graphics_Voronoi$Edge])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(516);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_graphics_Voronoi_right_mindustry_graphics_Voronoi$Halfedge_arc_math_geom_Vec2_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[21];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:right", 21 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(519);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELedge;
	frame[3].o = sp[0].o;
	LINE_NUMBER(520);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_reg;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))));
	LINE_NUMBER(521);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[4].o)))->F_coord;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x), -1)) <= 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[5].i = sp[0].i;
	LINE_NUMBER(522);
	if ((frame[5].i) == 0) goto label_6;
	}
	{
	if (((jint)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELpm) != 0) goto label_6;
	}
	{
	LINE_NUMBER(523);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(525);
	if ((frame[5].i) != 0) goto label_8;
	}
	{
	if (((jint)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELpm) != (jint(1))) goto label_8;
	}
	{
	LINE_NUMBER(526);
	popStackFrame(ctx);
	return (jint(0));
	}
label_8:;
	{
	LINE_NUMBER(530);
	if ((doubleCompare((jdouble(((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_a))), (jdouble(1)), -1)) != 0) goto label_10;
	}
	{
	LINE_NUMBER(531);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[4].o)))->F_coord;
	frame[7].f = (temp0 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(532);
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[4].o)))->F_coord;
	frame[8].f = (temp1 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(533);
	frame[9].i = (jint(0));
	LINE_NUMBER(534);
	if ((frame[5].i) != 0) goto label_15;
	}
	INST_ICONST(1);
	goto label_16;
label_15:;
	INST_ICONST(0);
label_16:;
	{
	if ((doubleCompare((jdouble(((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_b))), (jdouble(0)), 1)) >= 0) goto label_17;
	}
	INST_ICONST(1);
	goto label_18;
label_17:;
	INST_ICONST(0);
label_18:;
	{
	sp -= 2;
	jint temp0 = sp[0].i & sp[1].i;
	jint temp1 = frame[5].i;
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if ((doubleCompare((jdouble(((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_b))), (jdouble(0)), -1)) < 0) goto label_19;
	}
	INST_ICONST(1);
	goto label_20;
label_19:;
	INST_ICONST(0);
label_20:;
	{
	sp -= 3;
	if ((sp[0].i | (sp[1].i & sp[2].i)) == 0) goto label_21;
	}
	{
	LINE_NUMBER(535);
	if ((floatCompare((frame[7].f), (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_b) * (frame[8].f)), -1)) < 0) goto label_23;
	}
	INST_ICONST(1);
	goto label_24;
label_23:;
	INST_ICONST(0);
label_24:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(536);
	frame[9].i = (frame[6].i);
	goto label_26;
	}
label_21:;
	{
	LINE_NUMBER(538);
	if ((floatCompare((((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x) + (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y) * ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_b))), ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_c), -1)) <= 0) goto label_27;
	}
	INST_ICONST(1);
	goto label_28;
label_27:;
	INST_ICONST(0);
label_28:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(539);
	if ((doubleCompare((jdouble(((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_b))), (jdouble(0)), 1)) >= 0) goto label_30;
	}
	{
	LINE_NUMBER(540);
	if ((frame[6].i) != 0) goto label_32;
	}
	INST_ICONST(1);
	goto label_33;
label_32:;
	INST_ICONST(0);
label_33:;
	INST_ISTORE(6);
label_30:;
	{
	LINE_NUMBER(542);
	if ((frame[6].i) != 0) goto label_26;
	}
	{
	LINE_NUMBER(543);
	frame[9].i = (jint(1));
	}
label_26:;
	{
	LINE_NUMBER(546);
	if ((frame[9].i) != 0) goto label_35;
	}
	{
	LINE_NUMBER(547);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[4].o)))->F_coord;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_reg;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0))))))->F_coord;
	frame[10].f = (temp0 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(548);
	if ((doubleCompare((jdouble((((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_b) * (((frame[8].f) * (frame[8].f)) - ((frame[7].f) * (frame[7].f)))))), ((jdouble(((frame[10].f) * (frame[7].f)))) * (((jdouble(1)) + (((jdouble(2.0)) * (jdouble((frame[8].f)))) / (jdouble((frame[10].f))))) + (jdouble((((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_b) * ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_b)))))), 1)) >= 0) goto label_38;
	}
	INST_ICONST(1);
	goto label_39;
label_38:;
	INST_ICONST(0);
label_39:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(550);
	if ((doubleCompare((jdouble(((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_b))), (jdouble(0)), 1)) >= 0) goto label_35;
	}
	{
	LINE_NUMBER(551);
	if ((frame[6].i) != 0) goto label_42;
	}
	INST_ICONST(1);
	goto label_43;
label_42:;
	INST_ICONST(0);
label_43:;
	INST_ISTORE(6);
label_35:;
	LINE_NUMBER(554);
	goto label_44;
label_10:;
	{
	LINE_NUMBER(555);
	frame[7].f = (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_c) - (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_a) * ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x)));
	LINE_NUMBER(556);
	frame[8].f = (((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y) - (frame[7].f));
	LINE_NUMBER(557);
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[4].o)))->F_coord;
	frame[9].f = (temp0 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(558);
	jfloat temp1 = frame[7].f;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[4].o)))->F_coord;
	frame[10].f = (temp1 - ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(559);
	if ((floatCompare(((frame[8].f) * (frame[8].f)), (((frame[9].f) * (frame[9].f)) + ((frame[10].f) * (frame[10].f))), -1)) <= 0) goto label_49;
	}
	INST_ICONST(1);
	goto label_50;
label_49:;
	INST_ICONST(0);
label_50:;
	INST_ISTORE(6);
label_44:;
	{
	LINE_NUMBER(561);
	if (((jint)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELpm) != 0) goto label_51;
	}
	INST_ICONST(1);
	goto label_52;
label_51:;
	INST_ICONST(0);
label_52:;
	INST_ILOAD(6);
	sp -= 2; if (sp[0].i != sp[1].i) goto label_53;
	INST_ICONST(1);
	goto label_54;
label_53:;
	INST_ICONST(0);
label_54:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_Voronoi_rightreg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:rightreg", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELedge;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi *) NULL_CHECK((frame[0].o)))->F_bottomsite;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(567);
	if (((jint)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELpm) != 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELedge;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK(sp[0].o))->F_reg;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)));
	sp += 1;
	goto label_3;
	}
label_2:;
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELedge;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK(sp[0].o))->F_reg;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(0)));
	sp += 1;
	}
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:intersect", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[1].o)))->F_ELedge;
	frame[3].o = sp[0].o;
	LINE_NUMBER(578);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[2].o)))->F_ELedge;
	frame[4].o = sp[0].o;
	LINE_NUMBER(579);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	INST_ALOAD(4);
	if ((--sp)->o != nullptr) goto label_4;
label_3:;
	{
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(583);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_reg;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1)));
	sp[1].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[4].o)))->F_reg;
	if (sp[0].o != ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(1))))) goto label_5;
	}
	{
	LINE_NUMBER(584);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_5:;
	{
	LINE_NUMBER(587);
	frame[7].f = ((((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_a) * ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[4].o)))->F_b)) - (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_b) * ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[4].o)))->F_a)));
	LINE_NUMBER(588);
	if ((doubleCompare((jdouble(-1,000000e-10)), (jdouble((frame[7].f))), 1)) >= 0) goto label_8;
	}
	{
	if ((doubleCompare((jdouble((frame[7].f))), (jdouble(1,000000e-10)), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(589);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_8:;
	{
	LINE_NUMBER(592);
	frame[8].f = (((((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_c) * ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[4].o)))->F_b)) - (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[4].o)))->F_c) * ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_b))) / (frame[7].f));
	LINE_NUMBER(593);
	frame[9].f = (((((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[4].o)))->F_c) * ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_a)) - (((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_c) * ((jfloat)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[4].o)))->F_a))) / (frame[7].f));
	LINE_NUMBER(595);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_reg;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))))))->F_coord;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[4].o)))->F_reg;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))))))->F_coord;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), 1)) < 0) goto label_12;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_reg;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))))))->F_coord;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[4].o)))->F_reg;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))))))->F_coord;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), -1)) != 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[3].o)))->F_reg;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))))))->F_coord;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[4].o)))->F_reg;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))))))->F_coord;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x), 1)) >= 0) goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(597);
	frame[6].o = (frame[1].o);
	LINE_NUMBER(598);
	frame[5].o = (frame[3].o);
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(600);
	frame[6].o = (frame[2].o);
	LINE_NUMBER(601);
	frame[5].o = (frame[4].o);
	}
label_16:;
	{
	LINE_NUMBER(604);
	jfloat temp0 = frame[8].f;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Edge *) NULL_CHECK((frame[5].o)))->F_reg;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (jint(1))))))->F_coord;
	if ((floatCompare(temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x), -1)) < 0) goto label_18;
	}
	INST_ICONST(1);
	goto label_19;
label_18:;
	INST_ICONST(0);
label_19:;
	{
	sp -= 1;
	frame[10].i = sp[0].i;
	LINE_NUMBER(605);
	if ((frame[10].i) == 0) goto label_21;
	}
	{
	if (((jint)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[6].o)))->F_ELpm) == 0) goto label_22;
	}
label_21:;
	INST_ILOAD(10);
	if ((--sp)->i != 0) goto label_23;
	{
	if (((jint)((mindustry_graphics_Voronoi$Halfedge *) NULL_CHECK((frame[6].o)))->F_ELpm) != (jint(1))) goto label_23;
	}
label_22:;
	{
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}
label_23:;
	{
	LINE_NUMBER(610);
	clinit_mindustry_graphics_Voronoi$Site(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_Voronoi$Site);
	init_mindustry_graphics_Voronoi$Site(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(611);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[11].o)))->F_coord;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x = (frame[8].f);
	LINE_NUMBER(612);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[11].o)))->F_coord;
	((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y = (frame[9].f);
	LINE_NUMBER(613);
	popStackFrame(ctx);
	return (frame[11].o);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_graphics_Voronoi_lambda$generateVoronoi$0_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/Voronoi:lambda$generateVoronoi$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_Voronoi(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[0].o)))->F_coord;
	frame[2].o = sp[0].o;
	sp[0].o = (jobject)((mindustry_graphics_Voronoi$Site *) NULL_CHECK((frame[1].o)))->F_coord;
	frame[3].o = sp[0].o;
	LINE_NUMBER(70);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y), 1)) >= 0) goto label_3;
	}
	{
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return (jint(-1));
	}
label_3:;
	{
	LINE_NUMBER(73);
	if ((floatCompare(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_y), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_y), -1)) <= 0) goto label_5;
	}
	{
	LINE_NUMBER(74);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(76);
	jint temp0 = (jint)SM_java_lang_Float_compare_float_float_R_int(ctx, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[2].o)))->F_x), ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[3].o)))->F_x));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_Voronoi[] {
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
	(void *) M_mindustry_graphics_Voronoi_generateVoronoi_Array1_arc_math_geom_Vec2_float_float_float_float_R_arc_struct_Seq,
	(void *) M_mindustry_graphics_Voronoi_next_R_mindustry_graphics_Voronoi$Site,
	(void *) M_mindustry_graphics_Voronoi_bisect_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_mindustry_graphics_Voronoi$Edge,
	(void *) M_mindustry_graphics_Voronoi_pqbucket_mindustry_graphics_Voronoi$Halfedge_R_int,
	(void *) M_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float,
	(void *) M_mindustry_graphics_Voronoi_pqdelete_mindustry_graphics_Voronoi$Halfedge,
	(void *) M_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge,
	(void *) M_mindustry_graphics_Voronoi_leftReg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site,
	(void *) M_mindustry_graphics_Voronoi_insert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge,
	(void *) M_mindustry_graphics_Voronoi_delete_mindustry_graphics_Voronoi$Halfedge,
	(void *) M_mindustry_graphics_Voronoi_getHash_int_R_mindustry_graphics_Voronoi$Halfedge,
	(void *) M_mindustry_graphics_Voronoi_clipLine_mindustry_graphics_Voronoi$Edge,
	(void *) M_mindustry_graphics_Voronoi_endpoint_mindustry_graphics_Voronoi$Edge_int_mindustry_graphics_Voronoi$Site,
	(void *) M_mindustry_graphics_Voronoi_right_mindustry_graphics_Voronoi$Halfedge_arc_math_geom_Vec2_R_boolean,
	(void *) M_mindustry_graphics_Voronoi_rightreg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site,
	(void *) M_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site,
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
	{ "generateVoronoi", "([Larc/math/geom/Vec2;FFFF)Larc/struct/Seq;" },
	{ "next", "()Lmindustry/graphics/Voronoi$Site;" },
	{ "bisect", "(Lmindustry/graphics/Voronoi$Site;Lmindustry/graphics/Voronoi$Site;)Lmindustry/graphics/Voronoi$Edge;" },
	{ "pqbucket", "(Lmindustry/graphics/Voronoi$Halfedge;)I" },
	{ "pqinsert", "(Lmindustry/graphics/Voronoi$Halfedge;Lmindustry/graphics/Voronoi$Site;F)V" },
	{ "pqdelete", "(Lmindustry/graphics/Voronoi$Halfedge;)V" },
	{ "newHe", "(Lmindustry/graphics/Voronoi$Edge;I)Lmindustry/graphics/Voronoi$Halfedge;" },
	{ "leftReg", "(Lmindustry/graphics/Voronoi$Halfedge;)Lmindustry/graphics/Voronoi$Site;" },
	{ "insert", "(Lmindustry/graphics/Voronoi$Halfedge;Lmindustry/graphics/Voronoi$Halfedge;)V" },
	{ "delete", "(Lmindustry/graphics/Voronoi$Halfedge;)V" },
	{ "getHash", "(I)Lmindustry/graphics/Voronoi$Halfedge;" },
	{ "clipLine", "(Lmindustry/graphics/Voronoi$Edge;)V" },
	{ "endpoint", "(Lmindustry/graphics/Voronoi$Edge;ILmindustry/graphics/Voronoi$Site;)V" },
	{ "right", "(Lmindustry/graphics/Voronoi$Halfedge;Larc/math/geom/Vec2;)Z" },
	{ "rightreg", "(Lmindustry/graphics/Voronoi$Halfedge;)Lmindustry/graphics/Voronoi$Site;" },
	{ "intersect", "(Lmindustry/graphics/Voronoi$Halfedge;Lmindustry/graphics/Voronoi$Halfedge;)Lmindustry/graphics/Voronoi$Site;" },
};

static jclass innerClasses[] {
	&class_mindustry_graphics_Voronoi$Site,
	&class_mindustry_graphics_Voronoi$Halfedge,
	&class_mindustry_graphics_Voronoi$Edge,
	&class_mindustry_graphics_Voronoi$GraphEdge,
};

static FieldMetadata fields[] {
	{ "LE", &class_int, (intptr_t) &SF_mindustry_graphics_Voronoi_LE, "I", 26 },
	{ "RE", &class_int, (intptr_t) &SF_mindustry_graphics_Voronoi_RE, "I", 26 },
	{ "siteidx", &class_int, offsetof(mindustry_graphics_Voronoi, F_siteidx), "I", 0 },
	{ "sites", getArrayClass(&class_mindustry_graphics_Voronoi$Site, 1), offsetof(mindustry_graphics_Voronoi, F_sites), "[Lmindustry/graphics/Voronoi$Site;", 0 },
	{ "nsites", &class_int, offsetof(mindustry_graphics_Voronoi, F_nsites), "I", 0 },
	{ "borderMinX", &class_float, offsetof(mindustry_graphics_Voronoi, F_borderMinX), "F", 0 },
	{ "borderMaxX", &class_float, offsetof(mindustry_graphics_Voronoi, F_borderMaxX), "F", 0 },
	{ "borderMinY", &class_float, offsetof(mindustry_graphics_Voronoi, F_borderMinY), "F", 0 },
	{ "borderMaxY", &class_float, offsetof(mindustry_graphics_Voronoi, F_borderMaxY), "F", 0 },
	{ "ymin", &class_float, offsetof(mindustry_graphics_Voronoi, F_ymin), "F", 0 },
	{ "deltay", &class_float, offsetof(mindustry_graphics_Voronoi, F_deltay), "F", 0 },
	{ "nvertices", &class_int, offsetof(mindustry_graphics_Voronoi, F_nvertices), "I", 0 },
	{ "nedges", &class_int, offsetof(mindustry_graphics_Voronoi, F_nedges), "I", 0 },
	{ "bottomsite", &class_mindustry_graphics_Voronoi$Site, offsetof(mindustry_graphics_Voronoi, F_bottomsite), "Lmindustry/graphics/Voronoi$Site;", 0 },
	{ "PQcount", &class_int, offsetof(mindustry_graphics_Voronoi, F_PQcount), "I", 0 },
	{ "PQmin", &class_int, offsetof(mindustry_graphics_Voronoi, F_PQmin), "I", 0 },
	{ "PQhashsize", &class_int, offsetof(mindustry_graphics_Voronoi, F_PQhashsize), "I", 0 },
	{ "PQhash", getArrayClass(&class_mindustry_graphics_Voronoi$Halfedge, 1), offsetof(mindustry_graphics_Voronoi, F_PQhash), "[Lmindustry/graphics/Voronoi$Halfedge;", 0 },
	{ "ELhashsize", &class_int, offsetof(mindustry_graphics_Voronoi, F_ELhashsize), "I", 0 },
	{ "ELhash", getArrayClass(&class_mindustry_graphics_Voronoi$Halfedge, 1), offsetof(mindustry_graphics_Voronoi, F_ELhash), "[Lmindustry/graphics/Voronoi$Halfedge;", 0 },
	{ "allEdges", &class_arc_struct_Seq, offsetof(mindustry_graphics_Voronoi, F_allEdges), "Larc/struct/Seq;", 0 },
	{ "minDistanceBetweenSites", &class_float, offsetof(mindustry_graphics_Voronoi, F_minDistanceBetweenSites), "F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_Voronoi, 0, "()V", 1 },
	{ "generate", (intptr_t) SM_mindustry_graphics_Voronoi_generate_Array1_arc_math_geom_Vec2_float_float_float_float_R_arc_struct_Seq, 0, "([Larc/math/geom/Vec2;FFFF)Larc/struct/Seq;", 9 },
	{ "generateVoronoi", (intptr_t) M_mindustry_graphics_Voronoi_generateVoronoi_Array1_arc_math_geom_Vec2_float_float_float_float_R_arc_struct_Seq, VTABLE_mindustry_graphics_Voronoi_generateVoronoi_Array1_arc_math_geom_Vec2_float_float_float_float_R_arc_struct_Seq, "([Larc/math/geom/Vec2;FFFF)Larc/struct/Seq;", 0 },
	{ "next", (intptr_t) M_mindustry_graphics_Voronoi_next_R_mindustry_graphics_Voronoi$Site, VTABLE_mindustry_graphics_Voronoi_next_R_mindustry_graphics_Voronoi$Site, "()Lmindustry/graphics/Voronoi$Site;", 2 },
	{ "bisect", (intptr_t) M_mindustry_graphics_Voronoi_bisect_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_mindustry_graphics_Voronoi$Edge, VTABLE_mindustry_graphics_Voronoi_bisect_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_mindustry_graphics_Voronoi$Edge, "(Lmindustry/graphics/Voronoi$Site;Lmindustry/graphics/Voronoi$Site;)Lmindustry/graphics/Voronoi$Edge;", 2 },
	{ "pqbucket", (intptr_t) M_mindustry_graphics_Voronoi_pqbucket_mindustry_graphics_Voronoi$Halfedge_R_int, VTABLE_mindustry_graphics_Voronoi_pqbucket_mindustry_graphics_Voronoi$Halfedge_R_int, "(Lmindustry/graphics/Voronoi$Halfedge;)I", 2 },
	{ "pqinsert", (intptr_t) M_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float, VTABLE_mindustry_graphics_Voronoi_pqinsert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Site_float, "(Lmindustry/graphics/Voronoi$Halfedge;Lmindustry/graphics/Voronoi$Site;F)V", 2 },
	{ "pqdelete", (intptr_t) M_mindustry_graphics_Voronoi_pqdelete_mindustry_graphics_Voronoi$Halfedge, VTABLE_mindustry_graphics_Voronoi_pqdelete_mindustry_graphics_Voronoi$Halfedge, "(Lmindustry/graphics/Voronoi$Halfedge;)V", 2 },
	{ "newHe", (intptr_t) M_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge, VTABLE_mindustry_graphics_Voronoi_newHe_mindustry_graphics_Voronoi$Edge_int_R_mindustry_graphics_Voronoi$Halfedge, "(Lmindustry/graphics/Voronoi$Edge;I)Lmindustry/graphics/Voronoi$Halfedge;", 2 },
	{ "leftReg", (intptr_t) M_mindustry_graphics_Voronoi_leftReg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site, VTABLE_mindustry_graphics_Voronoi_leftReg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site, "(Lmindustry/graphics/Voronoi$Halfedge;)Lmindustry/graphics/Voronoi$Site;", 2 },
	{ "insert", (intptr_t) M_mindustry_graphics_Voronoi_insert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge, VTABLE_mindustry_graphics_Voronoi_insert_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge, "(Lmindustry/graphics/Voronoi$Halfedge;Lmindustry/graphics/Voronoi$Halfedge;)V", 2 },
	{ "delete", (intptr_t) M_mindustry_graphics_Voronoi_delete_mindustry_graphics_Voronoi$Halfedge, VTABLE_mindustry_graphics_Voronoi_delete_mindustry_graphics_Voronoi$Halfedge, "(Lmindustry/graphics/Voronoi$Halfedge;)V", 2 },
	{ "getHash", (intptr_t) M_mindustry_graphics_Voronoi_getHash_int_R_mindustry_graphics_Voronoi$Halfedge, VTABLE_mindustry_graphics_Voronoi_getHash_int_R_mindustry_graphics_Voronoi$Halfedge, "(I)Lmindustry/graphics/Voronoi$Halfedge;", 2 },
	{ "clipLine", (intptr_t) M_mindustry_graphics_Voronoi_clipLine_mindustry_graphics_Voronoi$Edge, VTABLE_mindustry_graphics_Voronoi_clipLine_mindustry_graphics_Voronoi$Edge, "(Lmindustry/graphics/Voronoi$Edge;)V", 2 },
	{ "endpoint", (intptr_t) M_mindustry_graphics_Voronoi_endpoint_mindustry_graphics_Voronoi$Edge_int_mindustry_graphics_Voronoi$Site, VTABLE_mindustry_graphics_Voronoi_endpoint_mindustry_graphics_Voronoi$Edge_int_mindustry_graphics_Voronoi$Site, "(Lmindustry/graphics/Voronoi$Edge;ILmindustry/graphics/Voronoi$Site;)V", 2 },
	{ "right", (intptr_t) M_mindustry_graphics_Voronoi_right_mindustry_graphics_Voronoi$Halfedge_arc_math_geom_Vec2_R_boolean, VTABLE_mindustry_graphics_Voronoi_right_mindustry_graphics_Voronoi$Halfedge_arc_math_geom_Vec2_R_boolean, "(Lmindustry/graphics/Voronoi$Halfedge;Larc/math/geom/Vec2;)Z", 2 },
	{ "rightreg", (intptr_t) M_mindustry_graphics_Voronoi_rightreg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site, VTABLE_mindustry_graphics_Voronoi_rightreg_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site, "(Lmindustry/graphics/Voronoi$Halfedge;)Lmindustry/graphics/Voronoi$Site;", 2 },
	{ "intersect", (intptr_t) M_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site, VTABLE_mindustry_graphics_Voronoi_intersect_mindustry_graphics_Voronoi$Halfedge_mindustry_graphics_Voronoi$Halfedge_R_mindustry_graphics_Voronoi$Site, "(Lmindustry/graphics/Voronoi$Halfedge;Lmindustry/graphics/Voronoi$Halfedge;)Lmindustry/graphics/Voronoi$Site;", 2 },
	{ "lambda$generateVoronoi$0", (intptr_t) SM_mindustry_graphics_Voronoi_lambda$generateVoronoi$0_mindustry_graphics_Voronoi$Site_mindustry_graphics_Voronoi$Site_R_int, 0, "(Lmindustry/graphics/Voronoi$Site;Lmindustry/graphics/Voronoi$Site;)I", 4106 },
};

Class class_mindustry_graphics_Voronoi{
		.nativeName = (intptr_t) "mindustry/graphics/Voronoi",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_Voronoi),
		.classVtable = (intptr_t) vtable_mindustry_graphics_Voronoi,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_Voronoi,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_Voronoi,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 22,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 27,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_Voronoi = registerClass(&class_mindustry_graphics_Voronoi);

}
