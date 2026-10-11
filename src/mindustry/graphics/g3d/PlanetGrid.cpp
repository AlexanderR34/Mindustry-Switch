#include "mindustry/graphics/g3d/PlanetGrid.h"
#include "arc/math/Mathf.h"
#include "mindustry/graphics/g3d/PlanetGrid_Edge.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/g3d/PlanetGrid_Corner.h"
#include "mindustry/graphics/g3d/PlanetGrid.h"
#include "mindustry/graphics/g3d/PlanetGrid_Ptile.h"
#include "arc/math/geom/Vec3.h"

extern "C" {

jobject SF_mindustry_graphics_g3d_PlanetGrid_cache;
jfloat SF_mindustry_graphics_g3d_PlanetGrid_x;
jfloat SF_mindustry_graphics_g3d_PlanetGrid_z;
jobject SF_mindustry_graphics_g3d_PlanetGrid_iTiles;
jobject SF_mindustry_graphics_g3d_PlanetGrid_iTilesP;

void mark_mindustry_graphics_g3d_PlanetGrid(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_graphics_g3d_PlanetGrid_cache)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_g3d_PlanetGrid_cache)->clazz)->markFunction)((jobject) SF_mindustry_graphics_g3d_PlanetGrid_cache, mark, depth + 1);
		if (SF_mindustry_graphics_g3d_PlanetGrid_iTiles)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_g3d_PlanetGrid_iTiles)->clazz)->markFunction)((jobject) SF_mindustry_graphics_g3d_PlanetGrid_iTiles, mark, depth + 1);
		if (SF_mindustry_graphics_g3d_PlanetGrid_iTilesP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_graphics_g3d_PlanetGrid_iTilesP)->clazz)->markFunction)((jobject) SF_mindustry_graphics_g3d_PlanetGrid_iTilesP, mark, depth + 1);
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
	auto self = (mindustry_graphics_g3d_PlanetGrid *) object;
	if (self->F_tiles)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tiles)->clazz)->markFunction)((jobject) self->F_tiles, mark, depth + 1);
	if (self->F_corners)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_corners)->clazz)->markFunction)((jobject) self->F_corners, mark, depth + 1);
	if (self->F_edges)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_edges)->clazz)->markFunction)((jobject) self->F_edges, mark, depth + 1);
}

void init_mindustry_graphics_g3d_PlanetGrid_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(31);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(32);
	((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_size = (frame[1].i);
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_graphics_g3d_PlanetGrid_tileCount_int_R_int(ctx, (frame[1].i));
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Ptile, temp0);
	((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK(sp[0].o))->F_tiles = (jref) sp[1].o;
	LINE_NUMBER(35);
	frame[2].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_tiles;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_5;
	}
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_tiles;
	jint temp0 = frame[2].i;
	clinit_mindustry_graphics_g3d_PlanetGrid$Ptile(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Ptile);
	jint temp1 = frame[2].i;
	jobject temp2 = sp[1].o;
	sp[1].i = temp0;
	sp[2].o = temp2;
	sp[3].o = temp2;
	sp[4].i = temp1;
	sp += 5;
	if ((frame[2].i) >= (12)) goto label_8;
	}
	INST_ICONST(5);
	goto label_9;
label_8:;
	INST_BIPUSH(6);
label_9:;
	{
	sp -= 6;
	init_mindustry_graphics_g3d_PlanetGrid$Ptile_int_int(ctx, sp[2].o, sp[4].i, sp[5].i);
	ARRAY_ACCESS(jobject, sp[0].o, sp[1].i) = sp[2].o;
	LINE_NUMBER(35);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_graphics_g3d_PlanetGrid_cornerCount_int_R_int(ctx, (frame[1].i));
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Corner, temp0);
	((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK(sp[0].o))->F_corners = (jref) sp[1].o;
	LINE_NUMBER(40);
	frame[2].i = (jint(0));
	}
label_12:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_corners;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_13;
	}
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_corners;
	jint temp0 = frame[2].i;
	clinit_mindustry_graphics_g3d_PlanetGrid$Corner(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Corner);
	init_mindustry_graphics_g3d_PlanetGrid$Corner_int(ctx, sp[1].o, (frame[2].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(40);
	INST_IINC(2, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(44);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_mindustry_graphics_g3d_PlanetGrid_edgeCount_int_R_int(ctx, (frame[1].i));
	sp[1].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Edge, temp0);
	((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK(sp[0].o))->F_edges = (jref) sp[1].o;
	LINE_NUMBER(45);
	frame[2].i = (jint(0));
	}
label_17:;
	{
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_edges;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_18;
	}
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_edges;
	jint temp0 = frame[2].i;
	clinit_mindustry_graphics_g3d_PlanetGrid$Edge(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Edge);
	init_mindustry_graphics_g3d_PlanetGrid$Edge_int(ctx, sp[1].o, (frame[2].i));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(45);
	INST_IINC(2, 1);
	goto label_17;
	}
label_18:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_g3d_PlanetGrid_create_int_R_mindustry_graphics_g3d_PlanetGrid(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid:create", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_mindustry_graphics_g3d_PlanetGrid);

	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(52);
	jint temp0 = frame[0].i;
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid_cache;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_1;
	}
	{
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid_cache;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(53);
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid_cache;
	popStackFrame(ctx, (jobject) &class_mindustry_graphics_g3d_PlanetGrid);
	return ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)));
	}
label_1:;
	{
	LINE_NUMBER(57);
	if ((frame[0].i) != 0) goto label_3;
	}
	{
	LINE_NUMBER(58);
	sp[0].o = (jobject)SM_mindustry_graphics_g3d_PlanetGrid_initialGrid_R_mindustry_graphics_g3d_PlanetGrid(ctx);
	frame[1].o = sp[0].o;
	goto label_6;
	}
label_3:;
	{
	LINE_NUMBER(60);
	sp[0].o = (jobject)SM_mindustry_graphics_g3d_PlanetGrid_create_int_R_mindustry_graphics_g3d_PlanetGrid(ctx, ((frame[0].i) - (jint(1))));
	sp[0].o = (jobject)SM_mindustry_graphics_g3d_PlanetGrid_subdividedGrid_mindustry_graphics_g3d_PlanetGrid_R_mindustry_graphics_g3d_PlanetGrid(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(64);
	jint temp0 = frame[0].i;
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid_cache;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(65);
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid_cache;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)) = (frame[1].o);
	}
label_7:;
	{
	LINE_NUMBER(68);
	popStackFrame(ctx, (jobject) &class_mindustry_graphics_g3d_PlanetGrid);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_g3d_PlanetGrid_initialGrid_R_mindustry_graphics_g3d_PlanetGrid(jcontext ctx) {
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid:initialGrid", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	{
	LINE_NUMBER(72);
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_PlanetGrid);
	init_mindustry_graphics_g3d_PlanetGrid_int(ctx, sp[0].o, (jint(0)));
	frame[0].o = sp[0].o;
	LINE_NUMBER(74);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_tiles;
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
	LINE_NUMBER(75);
	sp[0].o = frame[4].o;
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid_iTiles;
	((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[4].o)))->F_id)));
	LINE_NUMBER(76);
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[5].i) >= (jint(5))) goto label_7;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[4].o)))->F_tiles;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_tiles;
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[2].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid_iTilesP;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[4].o)))->F_id))), (frame[5].i)))));
	LINE_NUMBER(76);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(74);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(80);
	frame[1].i = (jint(0));
	}
label_10:;
	{
	if ((frame[1].i) >= (jint(5))) goto label_11;
	}
	{
	LINE_NUMBER(81);
	jint temp0 = frame[1].i;
	sp[0].o = frame[0].o;
	jint temp1 = jint(0);
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid_iTilesP;
	jint temp2 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (((frame[1].i) + (jint(4))) % (jint(5))));
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid_iTilesP;
	SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(ctx, temp0, sp[0].o, temp1, temp2, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (frame[1].i))));
	LINE_NUMBER(80);
	INST_IINC(1, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(83);
	frame[1].i = (jint(0));
	}
label_14:;
	{
	if ((frame[1].i) >= (jint(5))) goto label_15;
	}
	{
	LINE_NUMBER(84);
	jint temp0 = (frame[1].i) + (jint(5));
	sp[0].o = frame[0].o;
	jint temp1 = jint(3);
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid_iTilesP;
	jint temp2 = (jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)))), (((frame[1].i) + (jint(4))) % (jint(5))));
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid_iTilesP;
	SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(ctx, temp0, sp[0].o, temp1, temp2, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(3)))), (frame[1].i))));
	LINE_NUMBER(83);
	INST_IINC(1, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(86);
	SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(ctx, (10), (frame[0].o), (10), (jint(1)), (8));
	LINE_NUMBER(87);
	SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(ctx, (11), (frame[0].o), (jint(1)), (10), (6));
	LINE_NUMBER(88);
	SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(ctx, (12), (frame[0].o), (6), (10), (7));
	LINE_NUMBER(89);
	SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(ctx, (13), (frame[0].o), (6), (7), (11));
	LINE_NUMBER(90);
	SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(ctx, (14), (frame[0].o), (11), (7), (jint(2)));
	LINE_NUMBER(91);
	SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(ctx, (15), (frame[0].o), (11), (jint(2)), (9));
	LINE_NUMBER(92);
	SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(ctx, (16), (frame[0].o), (9), (jint(2)), (jint(5)));
	LINE_NUMBER(93);
	SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(ctx, (17), (frame[0].o), (9), (jint(5)), (jint(4)));
	LINE_NUMBER(94);
	SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(ctx, (18), (frame[0].o), (jint(4)), (jint(5)), (8));
	LINE_NUMBER(95);
	SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(ctx, (19), (frame[0].o), (jint(4)), (8), (jint(1)));
	LINE_NUMBER(98);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_corners;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_28:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_29;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(99);
	frame[5].i = (jint(0));
	}
label_31:;
	{
	if ((frame[5].i) >= (jint(3))) goto label_32;
	}
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[4].o)))->F_corners;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[4].o)))->F_tiles;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[5].i)))))->F_corners;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[4].o)))->F_tiles;
	jint temp1 = (jint)SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Ptile_mindustry_graphics_g3d_PlanetGrid$Corner_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i))), (frame[4].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((temp1 + (jint(1))) % (jint(5)))));
	LINE_NUMBER(99);
	INST_IINC(5, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(98);
	INST_IINC(3, 1);
	goto label_28;
	}
label_29:;
	{
	LINE_NUMBER(104);
	frame[1].i = (jint(0));
	LINE_NUMBER(105);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_tiles;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_36:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_37;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(106);
	frame[6].i = (jint(0));
	}
label_39:;
	{
	if ((frame[6].i) >= (jint(5))) goto label_40;
	}
	{
	LINE_NUMBER(107);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[5].o)))->F_edges;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[6].i))) != nullptr) goto label_42;
	}
	{
	LINE_NUMBER(108);
	jint temp0 = frame[1].i;
	INST_IINC(1, 1);
	sp[0].o = frame[0].o;
	jint temp1 = (jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[5].o)))->F_id;
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[1].o = (jobject)SF_mindustry_graphics_g3d_PlanetGrid_iTilesP;
	SM_mindustry_graphics_g3d_PlanetGrid_addEdge_int_mindustry_graphics_g3d_PlanetGrid_int_int(ctx, temp0, sp[0].o, temp1, ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[5].o)))->F_id))), (frame[6].i))));
	}
label_42:;
	{
	LINE_NUMBER(106);
	INST_IINC(6, 1);
	goto label_39;
	}
label_40:;
	{
	LINE_NUMBER(105);
	INST_IINC(4, 1);
	goto label_36;
	}
label_37:;
	{
	LINE_NUMBER(112);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_graphics_g3d_PlanetGrid_subdividedGrid_mindustry_graphics_g3d_PlanetGrid_R_mindustry_graphics_g3d_PlanetGrid(jcontext ctx, jobject param0) {
	jtype frame[17];
	auto stack = &frame[11];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid:subdividedGrid", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(116);
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_graphics_g3d_PlanetGrid);
	init_mindustry_graphics_g3d_PlanetGrid_int(ctx, sp[0].o, (((jint)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_size) + (jint(1))));
	frame[1].o = sp[0].o;
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_tiles;
	frame[2].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_corners;
	frame[3].i = (((jarray) nullCheck(ctx, sp[0].o))->length);
	LINE_NUMBER(122);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_5;
	}
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i));
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)))))->F_v;
	((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v = (jref) sp[1].o;
	LINE_NUMBER(124);
	frame[5].i = (jint(0));
	}
label_8:;
	{
	jint temp0 = frame[5].i;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	if (temp0 >= ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_edgeCount)) goto label_9;
	}
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[4].i)))))->F_tiles;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[4].i)))))->F_corners;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i)))))->F_id) + (frame[2].i))));
	LINE_NUMBER(124);
	INST_IINC(5, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(122);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(130);
	frame[4].i = (jint(0));
	}
label_12:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_13;
	}
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[4].i) + (frame[2].i)));
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_corners;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)))))->F_v;
	((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(sp[0].o))->F_v = (jref) sp[1].o;
	LINE_NUMBER(132);
	frame[5].i = (jint(0));
	}
label_16:;
	{
	if ((frame[5].i) >= (jint(3))) goto label_17;
	}
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[4].i) + (frame[2].i))))))->F_tiles;
	jint temp0 = (jint(2)) * (frame[5].i);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_corners;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[4].i)))))->F_corners;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i)))))->F_id) + (frame[2].i))));
	LINE_NUMBER(134);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((frame[4].i) + (frame[2].i))))))->F_tiles;
	jint temp1 = ((jint(2)) * (frame[5].i)) + (jint(1));
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_corners;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[4].i)))))->F_tiles;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[5].i)))))->F_id)));
	LINE_NUMBER(132);
	INST_IINC(5, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(130);
	INST_IINC(4, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(138);
	frame[4].i = (jint(0));
	LINE_NUMBER(139);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[0].o)))->F_tiles;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_22:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_23;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(140);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[8].o)))->F_id)));
	LINE_NUMBER(141);
	frame[10].i = (jint(0));
	}
label_26:;
	{
	if ((frame[10].i) >= ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[9].o)))->F_edgeCount)) goto label_27;
	}
	{
	LINE_NUMBER(142);
	jint temp0 = frame[4].i;
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[9].o)))->F_id;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[9].o)))->F_tiles;
	jint temp2 = (jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((((frame[10].i) + ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[9].o)))->F_edgeCount)) - (jint(1))) % ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[9].o)))->F_edgeCount))))))->F_id;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[9].o)))->F_tiles;
	SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(ctx, temp0, sp[0].o, temp1, temp2, ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[10].i)))))->F_id));
	LINE_NUMBER(143);
	INST_IINC(4, 1);
	LINE_NUMBER(141);
	INST_IINC(10, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(139);
	INST_IINC(7, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_corners;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_31:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_32;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(148);
	frame[9].i = (jint(0));
	}
label_34:;
	{
	if ((frame[9].i) >= (jint(3))) goto label_35;
	}
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_corners;
	jint temp0 = frame[9].i;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_tiles;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[9].i)))))->F_corners;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_tiles;
	jint temp1 = (jint)SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Ptile_mindustry_graphics_g3d_PlanetGrid$Corner_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[9].i))), (frame[8].o));
	jint temp2 = temp1 + (jint(1));
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[8].o)))->F_tiles;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (temp2 % ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, (frame[9].i)))))->F_edgeCount))));
	LINE_NUMBER(148);
	INST_IINC(9, 1);
	goto label_34;
	}
label_35:;
	{
	LINE_NUMBER(147);
	INST_IINC(7, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(153);
	frame[5].i = (jint(0));
	LINE_NUMBER(154);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	frame[6].o = sp[0].o;
	frame[7].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	frame[8].i = (jint(0));
	}
label_39:;
	{
	if ((frame[8].i) >= (frame[7].i)) goto label_40;
	}
	{
	frame[9].o = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[8].i)));
	LINE_NUMBER(155);
	frame[10].i = (jint(0));
	}
label_42:;
	{
	if ((frame[10].i) >= ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[9].o)))->F_edgeCount)) goto label_43;
	}
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[9].o)))->F_edges;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[10].i))) != nullptr) goto label_45;
	}
	{
	LINE_NUMBER(157);
	jint temp0 = frame[5].i;
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[9].o)))->F_id;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[9].o)))->F_tiles;
	SM_mindustry_graphics_g3d_PlanetGrid_addEdge_int_mindustry_graphics_g3d_PlanetGrid_int_int(ctx, temp0, sp[0].o, temp1, ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[10].i)))))->F_id));
	LINE_NUMBER(158);
	INST_IINC(5, 1);
	}
label_45:;
	{
	LINE_NUMBER(155);
	INST_IINC(10, 1);
	goto label_42;
	}
label_43:;
	{
	LINE_NUMBER(154);
	INST_IINC(8, 1);
	goto label_39;
	}
label_40:;
	{
	LINE_NUMBER(163);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int(jcontext ctx, jint param0, jobject param1, jint param2, jint param3, jint param4) {
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid:addCorner", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(167);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_corners;
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)));
	LINE_NUMBER(168);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Ptile, (jint(3)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i)));
	jint temp2 = jint(2);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[4].i)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(169);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[5].o)))->F_v;
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(0))))))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_set_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(1))))))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (jint(2))))))->F_v;
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_add_arc_math_geom_Vec3_R_arc_math_geom_Vec3])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec3_nor_R_arc_math_geom_Vec3])(ctx, sp[0].o);
	LINE_NUMBER(170);
	frame[7].i = (jint(0));
	}
label_4:;
	{
	if ((frame[7].i) >= (jint(3))) goto label_5;
	}
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)))))->F_corners;
	jint temp0 = (jint)SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Ptile_mindustry_graphics_g3d_PlanetGrid$Ptile_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (((frame[7].i) + (jint(2))) % (jint(3))))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[5].o);
	LINE_NUMBER(172);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[5].o)))->F_tiles;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	LINE_NUMBER(170);
	INST_IINC(7, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(174);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_graphics_g3d_PlanetGrid_addEdge_int_mindustry_graphics_g3d_PlanetGrid_int_int(jcontext ctx, jint param0, jobject param1, jint param2, jint param3) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid:addEdge", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(177);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_edges;
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)));
	LINE_NUMBER(178);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Ptile, (jint(2)));
	jint temp0 = jint(0);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[2].i)));
	jint temp1 = jint(1);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_tiles;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[3].i)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(179);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid$Corner, (jint(2)));
	jint temp2 = jint(0);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_corners;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0))))))->F_corners;
	sp[3].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp[4].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)));
	LINE_NUMBER(180);
	jint temp3 = (jint)SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Ptile_mindustry_graphics_g3d_PlanetGrid$Ptile_R_int(ctx, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, temp3))))->F_id)));
	jint temp4 = jint(1);
	sp[1].o = (jobject)((mindustry_graphics_g3d_PlanetGrid *) NULL_CHECK((frame[1].o)))->F_corners;
	sp[2].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0))))))->F_corners;
	sp[3].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0)));
	sp[4].o = (jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(1)));
	LINE_NUMBER(181);
	jint temp5 = (jint)SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Ptile_mindustry_graphics_g3d_PlanetGrid$Ptile_R_int(ctx, sp[3].o, sp[4].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[2].o, ((temp5 + (jint(1))) % ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (jint(0))))))->F_edgeCount))))))->F_id)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(182);
	frame[7].i = (jint(0));
	}
label_6:;
	{
	if ((frame[7].i) >= (jint(2))) goto label_7;
	}
	{
	LINE_NUMBER(183);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)))))->F_edges;
	jint temp0 = (jint)SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Ptile_mindustry_graphics_g3d_PlanetGrid$Ptile_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (((frame[7].i) + (jint(1))) % (jint(2))))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = (frame[4].o);
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Edge *) NULL_CHECK((frame[4].o)))->F_tiles;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(185);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)))))->F_edges;
	jint temp1 = (jint)SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Corner_mindustry_graphics_g3d_PlanetGrid$Corner_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i))), ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (((frame[7].i) + (jint(1))) % (jint(2))))));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = (frame[4].o);
	LINE_NUMBER(186);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Edge *) NULL_CHECK((frame[4].o)))->F_corners;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[7].i)) = ((jobject)ARRAY_ACCESS(jobject, (frame[6].o), (frame[7].i)));
	LINE_NUMBER(182);
	INST_IINC(7, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(188);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Ptile_mindustry_graphics_g3d_PlanetGrid$Ptile_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid:pos", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(191);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[0].o)))->F_edgeCount)) goto label_2;
	}
	{
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[0].o)))->F_tiles;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) != (frame[1].o)) goto label_4;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(191);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(194);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Ptile_mindustry_graphics_g3d_PlanetGrid$Corner_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid:pos", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(198);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= ((jint)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[0].o)))->F_edgeCount)) goto label_2;
	}
	{
	LINE_NUMBER(199);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Ptile *) NULL_CHECK((frame[0].o)))->F_corners;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) != (frame[1].o)) goto label_4;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(198);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Corner_mindustry_graphics_g3d_PlanetGrid$Corner_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid:pos", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(205);
	frame[2].i = (jint(0));
	}
label_1:;
	{
	if ((frame[2].i) >= (jint(3))) goto label_2;
	}
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((mindustry_graphics_g3d_PlanetGrid$Corner *) NULL_CHECK((frame[0].o)))->F_corners;
	if (((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[2].i))) != (frame[1].o)) goto label_4;
	}
	INST_ILOAD(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_4:;
	{
	LINE_NUMBER(205);
	INST_IINC(2, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_graphics_g3d_PlanetGrid_tileCount_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid:tileCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(212);
	jint temp0 = 10;
	jint temp1 = (jint)SM_arc_math_Mathf_pow_int_int_R_int(ctx, (jint(3)), (frame[0].i));
	popStackFrame(ctx);
	return ((temp0 * temp1) + (jint(2)));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_graphics_g3d_PlanetGrid_cornerCount_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid:cornerCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(216);
	jint temp0 = 20;
	jint temp1 = (jint)SM_arc_math_Mathf_pow_int_int_R_int(ctx, (jint(3)), (frame[0].i));
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

jint SM_mindustry_graphics_g3d_PlanetGrid_edgeCount_int_R_int(jcontext ctx, jint param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid:edgeCount", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(220);
	jint temp0 = 30;
	jint temp1 = (jint)SM_arc_math_Mathf_pow_int_int_R_int(ctx, (jint(3)), (frame[0].i));
	popStackFrame(ctx);
	return (temp0 * temp1);
	}

	popStackFrame(ctx);
}

void clinit_mindustry_graphics_g3d_PlanetGrid(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_graphics_g3d_PlanetGrid_x = jfloat(-0.5257311f);
	SF_mindustry_graphics_g3d_PlanetGrid_z = jfloat(-0.8506508f);
	jtype frame[8];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/graphics/g3d/PlanetGrid:<clinit>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	{
	LINE_NUMBER(8);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_graphics_g3d_PlanetGrid, (10));
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	SF_mindustry_graphics_g3d_PlanetGrid_cache = sp[0].o;
	LINE_NUMBER(13);
	sp[0].o = (jobject)createArray(ctx, &class_arc_math_geom_Vec3, (12));
	jint temp0 = jint(0);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(0.5257311f)), (jfloat(0)), (jfloat(-0.8506508f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(-0.5257311f)), (jfloat(0)), (jfloat(-0.8506508f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(0.5257311f)), (jfloat(0)), (jfloat(0.8506508f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(-0.5257311f)), (jfloat(0)), (jfloat(0.8506508f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(-0.8506508f)), (jfloat(-0.5257311f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(-0.8506508f)), (jfloat(0.5257311f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0.8506508f)), (jfloat(-0.5257311f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(0)), (jfloat(0.8506508f)), (jfloat(0.5257311f)));
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(-0.8506508f)), (jfloat(-0.5257311f)), (jfloat(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(0.8506508f)), (jfloat(-0.5257311f)), (jfloat(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(-0.8506508f)), (jfloat(0.5257311f)), (jfloat(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_arc_math_geom_Vec3(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec3);
	init_arc_math_geom_Vec3_float_float_float(ctx, sp[1].o, (jfloat(0.8506508f)), (jfloat(0.5257311f)), (jfloat(0)));
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	SF_mindustry_graphics_g3d_PlanetGrid_iTiles = sp[0].o;
	LINE_NUMBER(19);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (12));
	jint temp12 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (11);
	ARRAY_ACCESS(jobject, sp[0].o, temp12) = sp[1].o;
	jint temp13 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp13) = sp[1].o;
	jint temp14 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (9);
	ARRAY_ACCESS(jobject, sp[0].o, temp14) = sp[1].o;
	jint temp15 = jint(3);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(5));
	ARRAY_ACCESS(jobject, sp[0].o, temp15) = sp[1].o;
	jint temp16 = jint(4);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[0].o, temp16) = sp[1].o;
	jint temp17 = jint(5);
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (8);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (9);
	ARRAY_ACCESS(jobject, sp[0].o, temp17) = sp[1].o;
	jint temp18 = 6;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (11);
	ARRAY_ACCESS(jobject, sp[0].o, temp18) = sp[1].o;
	jint temp19 = 7;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (11);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(2));
	ARRAY_ACCESS(jobject, sp[0].o, temp19) = sp[1].o;
	jint temp20 = 8;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (10);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(4));
	ARRAY_ACCESS(jobject, sp[0].o, temp20) = sp[1].o;
	jint temp21 = 9;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(5));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(4));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (11);
	ARRAY_ACCESS(jobject, sp[0].o, temp21) = sp[1].o;
	jint temp22 = 10;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(3));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (6);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (8);
	ARRAY_ACCESS(jobject, sp[0].o, temp22) = sp[1].o;
	jint temp23 = 11;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(5)));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (7);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(2));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (9);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (6);
	ARRAY_ACCESS(jobject, sp[0].o, temp23) = sp[1].o;
	clinit_mindustry_graphics_g3d_PlanetGrid(ctx);
	SF_mindustry_graphics_g3d_PlanetGrid_iTilesP = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_graphics_g3d_PlanetGrid[] {
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

static jclass innerClasses[] {
	&class_mindustry_graphics_g3d_PlanetGrid$Ptile,
	&class_mindustry_graphics_g3d_PlanetGrid$Corner,
	&class_mindustry_graphics_g3d_PlanetGrid$Edge,
};

static FieldMetadata fields[] {
	{ "cache", getArrayClass(&class_mindustry_graphics_g3d_PlanetGrid, 1), (intptr_t) &SF_mindustry_graphics_g3d_PlanetGrid_cache, "[Lmindustry/graphics/g3d/PlanetGrid;", 26 },
	{ "x", &class_float, (intptr_t) &SF_mindustry_graphics_g3d_PlanetGrid_x, "F", 26 },
	{ "z", &class_float, (intptr_t) &SF_mindustry_graphics_g3d_PlanetGrid_z, "F", 26 },
	{ "iTiles", getArrayClass(&class_arc_math_geom_Vec3, 1), (intptr_t) &SF_mindustry_graphics_g3d_PlanetGrid_iTiles, "[Larc/math/geom/Vec3;", 26 },
	{ "iTilesP", getArrayClass(&class_int, 2), (intptr_t) &SF_mindustry_graphics_g3d_PlanetGrid_iTilesP, "[[I", 26 },
	{ "size", &class_int, offsetof(mindustry_graphics_g3d_PlanetGrid, F_size), "I", 1 },
	{ "tiles", getArrayClass(&class_mindustry_graphics_g3d_PlanetGrid$Ptile, 1), offsetof(mindustry_graphics_g3d_PlanetGrid, F_tiles), "[Lmindustry/graphics/g3d/PlanetGrid$Ptile;", 1 },
	{ "corners", getArrayClass(&class_mindustry_graphics_g3d_PlanetGrid$Corner, 1), offsetof(mindustry_graphics_g3d_PlanetGrid, F_corners), "[Lmindustry/graphics/g3d/PlanetGrid$Corner;", 1 },
	{ "edges", getArrayClass(&class_mindustry_graphics_g3d_PlanetGrid$Edge, 1), offsetof(mindustry_graphics_g3d_PlanetGrid, F_edges), "[Lmindustry/graphics/g3d/PlanetGrid$Edge;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_graphics_g3d_PlanetGrid_int, 0, "(I)V", 4 },
	{ "create", (intptr_t) SM_mindustry_graphics_g3d_PlanetGrid_create_int_R_mindustry_graphics_g3d_PlanetGrid, 0, "(I)Lmindustry/graphics/g3d/PlanetGrid;", 41 },
	{ "initialGrid", (intptr_t) SM_mindustry_graphics_g3d_PlanetGrid_initialGrid_R_mindustry_graphics_g3d_PlanetGrid, 0, "()Lmindustry/graphics/g3d/PlanetGrid;", 9 },
	{ "subdividedGrid", (intptr_t) SM_mindustry_graphics_g3d_PlanetGrid_subdividedGrid_mindustry_graphics_g3d_PlanetGrid_R_mindustry_graphics_g3d_PlanetGrid, 0, "(Lmindustry/graphics/g3d/PlanetGrid;)Lmindustry/graphics/g3d/PlanetGrid;", 9 },
	{ "addCorner", (intptr_t) SM_mindustry_graphics_g3d_PlanetGrid_addCorner_int_mindustry_graphics_g3d_PlanetGrid_int_int_int, 0, "(ILmindustry/graphics/g3d/PlanetGrid;III)V", 8 },
	{ "addEdge", (intptr_t) SM_mindustry_graphics_g3d_PlanetGrid_addEdge_int_mindustry_graphics_g3d_PlanetGrid_int_int, 0, "(ILmindustry/graphics/g3d/PlanetGrid;II)V", 8 },
	{ "pos", (intptr_t) SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Ptile_mindustry_graphics_g3d_PlanetGrid$Ptile_R_int, 0, "(Lmindustry/graphics/g3d/PlanetGrid$Ptile;Lmindustry/graphics/g3d/PlanetGrid$Ptile;)I", 8 },
	{ "pos", (intptr_t) SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Ptile_mindustry_graphics_g3d_PlanetGrid$Corner_R_int, 0, "(Lmindustry/graphics/g3d/PlanetGrid$Ptile;Lmindustry/graphics/g3d/PlanetGrid$Corner;)I", 8 },
	{ "pos", (intptr_t) SM_mindustry_graphics_g3d_PlanetGrid_pos_mindustry_graphics_g3d_PlanetGrid$Corner_mindustry_graphics_g3d_PlanetGrid$Corner_R_int, 0, "(Lmindustry/graphics/g3d/PlanetGrid$Corner;Lmindustry/graphics/g3d/PlanetGrid$Corner;)I", 8 },
	{ "tileCount", (intptr_t) SM_mindustry_graphics_g3d_PlanetGrid_tileCount_int_R_int, 0, "(I)I", 8 },
	{ "cornerCount", (intptr_t) SM_mindustry_graphics_g3d_PlanetGrid_cornerCount_int_R_int, 0, "(I)I", 8 },
	{ "edgeCount", (intptr_t) SM_mindustry_graphics_g3d_PlanetGrid_edgeCount_int_R_int, 0, "(I)I", 8 },
	{ "<clinit>", (intptr_t) clinit_mindustry_graphics_g3d_PlanetGrid, 0, "()V", 8 },
};

Class class_mindustry_graphics_g3d_PlanetGrid{
		.nativeName = (intptr_t) "mindustry/graphics/g3d/PlanetGrid",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_graphics_g3d_PlanetGrid),
		.classVtable = (intptr_t) vtable_mindustry_graphics_g3d_PlanetGrid,
		.staticInitializer = (intptr_t) clinit_mindustry_graphics_g3d_PlanetGrid,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_graphics_g3d_PlanetGrid,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_graphics_g3d_PlanetGrid = registerClass(&class_mindustry_graphics_g3d_PlanetGrid);

}
