#include "mindustry/game/MapObjectives_QuadMarker.h"
#include "mindustry/game/MapObjectives_QuadMarker.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/game/MapObjectives_TextureHolder.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/game/MapObjectives_Vertices.h"
#include "mindustry/logic/LMarkerControl.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/Texture.h"
#include "java/lang/Enum.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/game/MapObjectives_1.h"
#include "java/lang/Object.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "arc/graphics/Texture_TextureWrap.h"
#include "mindustry/game/MapObjectives.h"
#include "java/lang/Double.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_game_MapObjectives$QuadMarker(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_game_MapObjectives$ObjectiveMarker(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_MapObjectives$QuadMarker *) object;
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_vertices)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_vertices)->clazz)->markFunction)((jobject) self->F_vertices, mark, depth + 1);
	if (self->F_fetchedRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fetchedRegion)->clazz)->markFunction)((jobject) self->F_fetchedRegion, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$QuadMarker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_MapObjectives$ObjectiveMarker(ctx);
}

void init_mindustry_game_MapObjectives$QuadMarker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$QuadMarker:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$QuadMarker(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1308);
	init_mindustry_game_MapObjectives$ObjectiveMarker(ctx, (frame[0].o));
	LINE_NUMBER(1302);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_MapObjectives$TextureHolder(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_MapObjectives$TextureHolder);
	init_mindustry_game_MapObjectives$TextureHolder(ctx, sp[1].o);
	((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(1303);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_float, (24));
	((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK(sp[0].o))->F_vertices = (jref) sp[1].o;
	LINE_NUMBER(1304);
	((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_mapRegion = (jint(1));
	LINE_NUMBER(1309);
	frame[1].i = (jint(0));
	}
label_5:;
	{
	if ((frame[1].i) >= (jint(4))) goto label_6;
	}
	{
	LINE_NUMBER(1310);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = ((frame[1].i) * (6)) + (jint(2));
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	jfloat temp1 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[1].o);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(1311);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (((frame[1].i) * (6)) + (jint(5)))) = (clinit_arc_graphics_Color(ctx), (jfloat)SF_arc_graphics_Color_clearFloatBits);
	LINE_NUMBER(1309);
	INST_IINC(1, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(1313);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$QuadMarker_draw_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$QuadMarker:draw", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1317);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK(sp[1].o))->F_value;
	((func_mindustry_game_MapObjectives$QuadMarker_setTexture_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$QuadMarker_setTexture_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(1318);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK(sp[1].o))->F_value;
	SM_mindustry_game_MapObjectives_prepareTexture_mindustry_game_MapObjectives$ObjectiveMarker_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1320);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_drawLayer));
	LINE_NUMBER(1321);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = jint(0);
	sp[2].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	SM_arc_graphics_g2d_Draw_vert_arc_graphics_Texture_Array1_float_int_int(ctx, sp[0].o, sp[1].o, temp0, (((jarray) nullCheck(ctx, sp[2].o))->length));
	LINE_NUMBER(1322);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$QuadMarker_control_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$QuadMarker:control", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	{
	LINE_NUMBER(1326);
	M_mindustry_game_MapObjectives$ObjectiveMarker_control_mindustry_logic_LMarkerControl_double_double_double(ctx, (frame[0].o), (frame[1].o), (frame[2].d), (frame[4].d), (frame[6].d));
	LINE_NUMBER(1328);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1329);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 14: goto label_4;
		case 15: goto label_2;
		case 16: goto label_2;
		case 17: goto label_2;
		case 18: goto label_2;
		case 19: goto label_5;
		case 20: goto label_2;
		case 21: goto label_2;
		case 22: goto label_6;
		case 23: goto label_7;
		default: goto label_2;
	}
	}
label_4:;
	{
	LINE_NUMBER(1331);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color])(ctx, sp[0].o, (frame[2].d));
	jfloat temp0 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[0].o);
	frame[8].f = temp0;
	LINE_NUMBER(1332);
	frame[9].i = (jint(0));
	}
label_9:;
	{
	if ((frame[9].i) >= (jint(4))) goto label_10;
	}
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (((frame[9].i) * (6)) + (jint(2)))) = (frame[8].f);
	INST_IINC(9, 1);
	goto label_9;
	}
label_10:;
	LINE_NUMBER(1333);
	goto label_2;
label_6:;
	{
	LINE_NUMBER(1334);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(0))) = ((jfloat((frame[2].d))) * (jfloat(8.0f)));
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(1335);
	((func_mindustry_game_MapObjectives$QuadMarker_setPos_int_double_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_MapObjectives$QuadMarker_setPos_int_double_double])(ctx, (frame[0].o), (jint((frame[2].d))), (frame[4].d), (frame[6].d));
	goto label_2;
	}
label_7:;
	{
	LINE_NUMBER(1336);
	((func_mindustry_game_MapObjectives$QuadMarker_setUv_int_double_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_MapObjectives$QuadMarker_setUv_int_double_double])(ctx, (frame[0].o), (jint((frame[2].d))), (frame[4].d), (frame[6].d));
	}
label_2:;
	{
	LINE_NUMBER(1340);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[4].d));
	if (temp0 != 0) goto label_11;
	}
	{
	LINE_NUMBER(1341);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 22: goto label_13;
		default: goto label_11;
	}
	}
label_13:;
	{
	LINE_NUMBER(1342);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (jint(1))) = ((jfloat((frame[2].d))) * (jfloat(8.0f)));
	}
label_11:;
	{
	LINE_NUMBER(1346);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 != 0) goto label_14;
	}
	{
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[4].d));
	if (temp0 != 0) goto label_14;
	}
	{
	LINE_NUMBER(1347);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 20: goto label_16;
		default: goto label_14;
	}
	}
label_16:;
	{
	LINE_NUMBER(1348);
	((func_mindustry_game_MapObjectives$QuadMarker_setColor_int_double) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_MapObjectives$QuadMarker_setColor_int_double])(ctx, (frame[0].o), (jint((frame[2].d))), (frame[4].d));
	}
label_14:;
	LINE_NUMBER(1351);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$QuadMarker_setTexture_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$QuadMarker:setTexture", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1355);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_texture;
	((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK(sp[0].o))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(1356);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1358);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	if (sp[0].o != nullptr) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(1360);
	if ((frame[2].i) == 0) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion(ctx, sp[1].o);
	((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK(sp[0].o))->F_fetchedRegion = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(1361);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_g2d_TextureRegion])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1363);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	SM_mindustry_game_MapObjectives_lookupRegion_java_lang_Object_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1365);
	if ((frame[2].i) == 0) goto label_9;
	}
	{
	LINE_NUMBER(1366);
	if (((jint)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_mapRegion) == 0) goto label_11;
	}
	{
	LINE_NUMBER(1367);
	((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_mapRegion = (jint(0));
	LINE_NUMBER(1368);
	frame[3].i = (jint(0));
	}
label_14:;
	{
	if ((frame[3].i) >= (jint(4))) goto label_15;
	}
	{
	LINE_NUMBER(1369);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	jdouble temp1 = jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (((frame[3].i) * (6)) + (jint(3))))));
	sp[1].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	((func_mindustry_game_MapObjectives$QuadMarker_setUv_int_double_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$QuadMarker_setUv_int_double_double])(ctx, sp[0].o, temp0, temp1, (jdouble(((jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (((frame[3].i) * (6)) + (jint(4))))))));
	LINE_NUMBER(1368);
	INST_IINC(3, 1);
	goto label_14;
	}
label_15:;
	goto label_11;
label_9:;
	{
	LINE_NUMBER(1373);
	frame[3].i = (jint(0));
	}
label_18:;
	{
	if ((frame[3].i) >= (jint(4))) goto label_11;
	}
	{
	LINE_NUMBER(1374);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	jfloat temp1 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (((frame[3].i) * (6)) + (jint(3))));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_tr1;
	jfloat temp2 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_u;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_tr1;
	jfloat temp3 = (jfloat)SM_mindustry_game_MapObjectives$QuadMarker_unmap_float_float_float_R_float(ctx, temp1, temp2, ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_u2));
	jdouble temp4 = jdouble(temp3);
	jfloat temp5 = jfloat(1);
	sp[1].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	jfloat temp6 = (jfloat)ARRAY_ACCESS(jfloat, sp[1].o, (((frame[3].i) * (6)) + (jint(4))));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_tr1;
	jfloat temp7 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_v;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_tr1;
	jfloat temp8 = (jfloat)SM_mindustry_game_MapObjectives$QuadMarker_unmap_float_float_float_R_float(ctx, temp6, temp7, ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[1].o))->F_v2));
	((func_mindustry_game_MapObjectives$QuadMarker_setUv_int_double_double) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$QuadMarker_setUv_int_double_double])(ctx, sp[0].o, temp0, temp4, (jdouble((temp5 - temp8))));
	LINE_NUMBER(1373);
	INST_IINC(3, 1);
	goto label_18;
	}
label_11:;
	LINE_NUMBER(1377);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_game_MapObjectives$QuadMarker_unmap_float_float_float_R_float(jcontext ctx, jfloat param0, jfloat param1, jfloat param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$QuadMarker:unmap", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$QuadMarker(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(1380);
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[1].f), (frame[2].f));
	if (temp0 == 0) goto label_1;
	}
	INST_FLOAD(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(1381);
	popStackFrame(ctx);
	return (((frame[0].f) - (frame[1].f)) / ((frame[2].f) - (frame[1].f)));
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$QuadMarker_setPos_int_double_double(jcontext ctx, jobject self, jint param0, jdouble param1, jdouble param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$QuadMarker:setPos", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	{
	LINE_NUMBER(1385);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) >= (jint(4))) goto label_1;
	}
	{
	LINE_NUMBER(1386);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 != 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, ((frame[1].i) * (6))) = ((jfloat((frame[2].d))) * (jfloat(8.0f)));
	}
label_3:;
	{
	LINE_NUMBER(1387);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[4].d));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	ARRAY_ACCESS(jfloat, sp[0].o, (((frame[1].i) * (6)) + (jint(1)))) = ((jfloat((frame[4].d))) * (jfloat(8.0f)));
	}
label_1:;
	LINE_NUMBER(1389);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$QuadMarker_setColor_int_double(jcontext ctx, jobject self, jint param0, jdouble param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$QuadMarker:setColor", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].d = param1;
	{
	LINE_NUMBER(1392);
	if ((frame[1].i) < 0) goto label_1;
	}
	{
	if ((frame[1].i) >= (jint(4))) goto label_1;
	}
	{
	LINE_NUMBER(1393);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = ((frame[1].i) * (6)) + (jint(2));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((func_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color])(ctx, sp[1].o, (frame[2].d));
	jfloat temp1 = (jfloat)((func_arc_graphics_Color_toFloatBits_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_toFloatBits_R_float])(ctx, sp[1].o);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	}
label_1:;
	LINE_NUMBER(1395);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$QuadMarker_setUv_int_double_double(jcontext ctx, jobject self, jint param0, jdouble param1, jdouble param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$QuadMarker:setUv", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	{
	LINE_NUMBER(1398);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(1400);
	if ((frame[1].i) < 0) goto label_2;
	}
	{
	if ((frame[1].i) >= (jint(4))) goto label_2;
	}
	{
	LINE_NUMBER(1401);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_texture;
	((func_mindustry_game_MapObjectives$QuadMarker_setTexture_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$QuadMarker_setTexture_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(1403);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 != 0) goto label_5;
	}
	{
	LINE_NUMBER(1404);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	sp[0].o = (jobject)((func_arc_graphics_Texture_getUWrap_R_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_getUWrap_R_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o);
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_mirroredRepeat;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	sp[0].o = (jobject)((func_arc_graphics_Texture_getUWrap_R_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_getUWrap_R_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o);
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_repeat;
	if (sp[0].o == sp[1].o) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1405);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = ((frame[1].i) * (6)) + (jint(3));
	sp[1].i = temp0;
	sp += 2;
	if ((frame[6].i) == 0) goto label_10;
	}
	{
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (jfloat((frame[2].d))));
	sp[0].f = temp0;
	sp += 1;
	goto label_11;
	}
label_10:;
	INST_DLOAD(2);
	INST_D2F();
label_11:;
	{
	sp -= 3;
	sp[3].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[3].o))->F_u;
	sp[3].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_map_float_float_float_R_float(ctx, sp[2].f, temp0, ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[3].o))->F_u2));
	ARRAY_ACCESS(jfloat, sp[0].o, sp[1].i) = temp1;
	}
label_5:;
	{
	LINE_NUMBER(1407);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[4].d));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1408);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	sp[0].o = (jobject)((func_arc_graphics_Texture_getVWrap_R_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_getVWrap_R_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o);
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_mirroredRepeat;
	if (sp[0].o == sp[1].o) goto label_13;
	}
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	sp[0].o = (jobject)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_texture;
	sp[0].o = (jobject)((func_arc_graphics_Texture_getVWrap_R_arc_graphics_Texture$TextureWrap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_getVWrap_R_arc_graphics_Texture$TextureWrap])(ctx, sp[0].o);
	clinit_arc_graphics_Texture$TextureWrap(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureWrap_repeat;
	if (sp[0].o == sp[1].o) goto label_13;
	}
	INST_ICONST(1);
	goto label_14;
label_13:;
	INST_ICONST(0);
label_14:;
	{
	sp -= 1;
	frame[6].i = sp[0].i;
	LINE_NUMBER(1409);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_vertices;
	jint temp0 = ((frame[1].i) * (6)) + (jint(4));
	sp[1].i = temp0;
	sp += 2;
	if ((frame[6].i) == 0) goto label_16;
	}
	{
	jfloat temp0 = jfloat(1);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (jfloat((frame[4].d))));
	jfloat temp2 = temp0 - temp1;
	sp[0].f = temp2;
	sp += 1;
	goto label_17;
	}
label_16:;
	{
	jfloat temp0 = (jfloat(1)) - (jfloat((frame[4].d)));
	sp[0].f = temp0;
	sp += 1;
	}
label_17:;
	{
	sp -= 3;
	sp[3].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	jfloat temp0 = (jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[3].o))->F_v;
	sp[3].o = (jobject)((mindustry_game_MapObjectives$QuadMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_map_float_float_float_R_float(ctx, sp[2].f, temp0, ((jfloat)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[3].o))->F_v2));
	ARRAY_ACCESS(jfloat, sp[0].o, sp[1].i) = temp1;
	}
label_2:;
	LINE_NUMBER(1412);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_MapObjectives$QuadMarker;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field vertices
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_mindustry_game_MapObjectives$Vertices);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field fetchedRegion
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_MapObjectives$QuadMarker[] {
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
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_write_arc_util_serialization_Json,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_read_arc_util_serialization_Json_arc_util_serialization_JsonValue,
	(void *) M_mindustry_game_MapObjectives$QuadMarker_draw_float,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_drawLight_float,
	(void *) M_mindustry_game_MapObjectives$QuadMarker_control_mindustry_logic_LMarkerControl_double_double_double,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_setText_java_lang_String_boolean,
	(void *) M_mindustry_game_MapObjectives$QuadMarker_setTexture_java_lang_Object,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_typeName_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_updateField_arc_util_serialization_JsonValue,
	(void *) M_mindustry_game_MapObjectives$QuadMarker_setPos_int_double_double,
	(void *) M_mindustry_game_MapObjectives$QuadMarker_setColor_int_double,
	(void *) M_mindustry_game_MapObjectives$QuadMarker_setUv_int_double_double,
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
	{ "write", "(Larc/util/serialization/Json;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V" },
	{ "draw", "(F)V" },
	{ "drawLight", "(F)V" },
	{ "control", "(Lmindustry/logic/LMarkerControl;DDD)V" },
	{ "setText", "(Ljava/lang/String;Z)V" },
	{ "setTexture", "(Ljava/lang/Object;)V" },
	{ "typeName", "()Ljava/lang/String;" },
	{ "updateField", "(Larc/util/serialization/JsonValue;)V" },
	{ "setPos", "(IDD)V" },
	{ "setColor", "(ID)V" },
	{ "setUv", "(IDD)V" },
};

static FieldMetadata fields[] {
	{ "texture", &class_mindustry_game_MapObjectives$TextureHolder, offsetof(mindustry_game_MapObjectives$QuadMarker, F_texture), "Lmindustry/game/MapObjectives$TextureHolder;", 17 },
	{ "vertices", getArrayClass(&class_float, 1), offsetof(mindustry_game_MapObjectives$QuadMarker, F_vertices), "[F", 1 },
	{ "mapRegion", &class_boolean, offsetof(mindustry_game_MapObjectives$QuadMarker, F_mapRegion), "Z", 2 },
	{ "fetchedRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_game_MapObjectives$QuadMarker, F_fetchedRegion), "Larc/graphics/g2d/TextureRegion;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$QuadMarker, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_game_MapObjectives$QuadMarker_draw_float, VTABLE_mindustry_game_MapObjectives$QuadMarker_draw_float, "(F)V", 1 },
	{ "control", (intptr_t) M_mindustry_game_MapObjectives$QuadMarker_control_mindustry_logic_LMarkerControl_double_double_double, VTABLE_mindustry_game_MapObjectives$QuadMarker_control_mindustry_logic_LMarkerControl_double_double_double, "(Lmindustry/logic/LMarkerControl;DDD)V", 1 },
	{ "setTexture", (intptr_t) M_mindustry_game_MapObjectives$QuadMarker_setTexture_java_lang_Object, VTABLE_mindustry_game_MapObjectives$QuadMarker_setTexture_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "unmap", (intptr_t) SM_mindustry_game_MapObjectives$QuadMarker_unmap_float_float_float_R_float, 0, "(FFF)F", 10 },
	{ "setPos", (intptr_t) M_mindustry_game_MapObjectives$QuadMarker_setPos_int_double_double, VTABLE_mindustry_game_MapObjectives$QuadMarker_setPos_int_double_double, "(IDD)V", 2 },
	{ "setColor", (intptr_t) M_mindustry_game_MapObjectives$QuadMarker_setColor_int_double, VTABLE_mindustry_game_MapObjectives$QuadMarker_setColor_int_double, "(ID)V", 2 },
	{ "setUv", (intptr_t) M_mindustry_game_MapObjectives$QuadMarker_setUv_int_double_double, VTABLE_mindustry_game_MapObjectives$QuadMarker_setUv_int_double_double, "(IDD)V", 2 },
};

Class class_mindustry_game_MapObjectives$QuadMarker{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$QuadMarker",
		.parentClass = (intptr_t) &class_mindustry_game_MapObjectives$ObjectiveMarker,
		.size = sizeof(mindustry_game_MapObjectives$QuadMarker),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$QuadMarker,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$QuadMarker,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$QuadMarker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_MapObjectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 23,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$QuadMarker = registerClass(&class_mindustry_game_MapObjectives$QuadMarker);

}

