#include "mindustry/game/MapObjectives_TextureMarker.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "mindustry/game/MapObjectives_TextureHolder.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/game/MapObjectives_TextureMarker.h"
#include "mindustry/logic/LMarkerControl.h"
#include "arc/graphics/Color.h"
#include "java/lang/Enum.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/game/MapObjectives_1.h"
#include "java/lang/Object.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "mindustry/game/MapObjectives.h"
#include "java/lang/Double.h"
#include "mindustry/Vars.h"
#include "mindustry/game/MapObjectives_PosMarker.h"

extern "C" {


void mark_mindustry_game_MapObjectives$TextureMarker(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_game_MapObjectives$PosMarker(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_MapObjectives$TextureMarker *) object;
	if (self->F_texture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_texture)->clazz)->markFunction)((jobject) self->F_texture, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_fetchedRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fetchedRegion)->clazz)->markFunction)((jobject) self->F_fetchedRegion, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$TextureMarker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_MapObjectives$PosMarker(ctx);
}

void init_mindustry_game_MapObjectives$TextureMarker_java_lang_Object_float_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextureMarker:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$TextureMarker(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(1242);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(1236);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(0));
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_height = (jfloat(0));
	LINE_NUMBER(1237);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_MapObjectives$TextureHolder(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_MapObjectives$TextureHolder);
	init_mindustry_game_MapObjectives$TextureHolder(ctx, sp[1].o);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(1238);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(1243);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_texture;
	((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK(sp[0].o))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(1244);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(1245);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_width = (frame[4].f);
	LINE_NUMBER(1246);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_height = (frame[5].f);
	LINE_NUMBER(1247);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$TextureMarker_java_lang_Object_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextureMarker:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$TextureMarker(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(1249);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(1236);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(0));
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_height = (jfloat(0));
	LINE_NUMBER(1237);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_MapObjectives$TextureHolder(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_MapObjectives$TextureHolder);
	init_mindustry_game_MapObjectives$TextureHolder(ctx, sp[1].o);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(1238);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(1250);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_texture;
	((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK(sp[0].o))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(1251);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	LINE_NUMBER(1252);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$TextureMarker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextureMarker:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$TextureMarker(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(1254);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(1236);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(0));
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(0));
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_height = (jfloat(0));
	LINE_NUMBER(1237);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_MapObjectives$TextureHolder(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_MapObjectives$TextureHolder);
	init_mindustry_game_MapObjectives$TextureHolder(ctx, sp[1].o);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK(sp[0].o))->F_texture = (jref) sp[1].o;
	LINE_NUMBER(1238);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	sp[1].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[1].o);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(1254);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$TextureMarker_control_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextureMarker:control", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	{
	LINE_NUMBER(1258);
	M_mindustry_game_MapObjectives$PosMarker_control_mindustry_logic_LMarkerControl_double_double_double(ctx, (frame[0].o), (frame[1].o), (frame[2].d), (frame[4].d), (frame[6].d));
	LINE_NUMBER(1260);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1261);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 13: goto label_4;
		case 14: goto label_5;
		case 21: goto label_6;
		default: goto label_2;
	}
	}
label_4:;
	{
	LINE_NUMBER(1262);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat((frame[2].d)));
	goto label_2;
	}
label_6:;
	{
	LINE_NUMBER(1263);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_width = ((jfloat((frame[2].d))) * (jfloat(8.0f)));
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(1264);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color])(ctx, sp[0].o, (frame[2].d));
	}
label_2:;
	{
	LINE_NUMBER(1268);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[4].d));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(1269);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 21: goto label_9;
		default: goto label_7;
	}
	}
label_9:;
	{
	LINE_NUMBER(1270);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_height = ((jfloat((frame[4].d))) * (jfloat(8.0f)));
	}
label_7:;
	LINE_NUMBER(1273);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$TextureMarker_draw_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextureMarker:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1277);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK(sp[1].o))->F_value;
	((func_mindustry_game_MapObjectives$TextureMarker_setTexture_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_MapObjectives$TextureMarker_setTexture_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	{
	LINE_NUMBER(1278);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_texture;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK(sp[1].o))->F_value;
	SM_mindustry_game_MapObjectives_prepareTexture_mindustry_game_MapObjectives$ObjectiveMarker_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1280);
	frame[2].f = ((jfloat)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_width);
	frame[3].f = ((jfloat)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_height);
	LINE_NUMBER(1283);
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[2].f), (jfloat(0)));
	if (temp0 == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_width));
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[0].o);
	frame[2].f = ((temp0 * temp1) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_xscl));
	}
label_5:;
	{
	LINE_NUMBER(1284);
	jint temp0 = (jint)SM_arc_math_Mathf_equal_float_float_R_boolean(ctx, (frame[3].f), (jfloat(0)));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	jfloat temp0 = jfloat(((jint)((arc_graphics_g2d_TextureRegion *) NULL_CHECK(sp[0].o))->F_height));
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	jfloat temp1 = (jfloat)((func_arc_graphics_g2d_TextureRegion_scl_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_scl_R_float])(ctx, sp[0].o);
	frame[3].f = ((temp0 * temp1) * (clinit_arc_graphics_g2d_Draw(ctx), (jfloat)SF_arc_graphics_g2d_Draw_yscl));
	}
label_6:;
	{
	LINE_NUMBER(1286);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_drawLayer));
	LINE_NUMBER(1287);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(1288);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, sp[0].o, temp0, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y), ((frame[2].f) * (frame[1].f)), ((frame[3].f) * (frame[1].f)), ((jfloat)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_rotation));
	LINE_NUMBER(1289);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$TextureMarker_setTexture_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$TextureMarker:setTexture", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1293);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_texture;
	((mindustry_game_MapObjectives$TextureHolder *) NULL_CHECK(sp[0].o))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(1295);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1296);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion(ctx, sp[1].o);
	((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK(sp[0].o))->F_fetchedRegion = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(1297);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$TextureMarker *) NULL_CHECK((frame[0].o)))->F_fetchedRegion;
	SM_mindustry_game_MapObjectives_lookupRegion_java_lang_Object_arc_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1298);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_MapObjectives$TextureMarker[] {
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
	(void *) M_mindustry_game_MapObjectives$TextureMarker_draw_float,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_drawLight_float,
	(void *) M_mindustry_game_MapObjectives$TextureMarker_control_mindustry_logic_LMarkerControl_double_double_double,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_setText_java_lang_String_boolean,
	(void *) M_mindustry_game_MapObjectives$TextureMarker_setTexture_java_lang_Object,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_typeName_R_java_lang_String,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_updateField_arc_util_serialization_JsonValue,
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
};

static FieldMetadata fields[] {
	{ "rotation", &class_float, offsetof(mindustry_game_MapObjectives$TextureMarker, F_rotation), "F", 1 },
	{ "width", &class_float, offsetof(mindustry_game_MapObjectives$TextureMarker, F_width), "F", 1 },
	{ "height", &class_float, offsetof(mindustry_game_MapObjectives$TextureMarker, F_height), "F", 1 },
	{ "texture", &class_mindustry_game_MapObjectives$TextureHolder, offsetof(mindustry_game_MapObjectives$TextureMarker, F_texture), "Lmindustry/game/MapObjectives$TextureHolder;", 17 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_game_MapObjectives$TextureMarker, F_color), "Larc/graphics/Color;", 1 },
	{ "fetchedRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_game_MapObjectives$TextureMarker, F_fetchedRegion), "Larc/graphics/g2d/TextureRegion;", 130 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$TextureMarker_java_lang_Object_float_float_float_float, 0, "(Ljava/lang/Object;FFFF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$TextureMarker_java_lang_Object_float_float, 0, "(Ljava/lang/Object;FF)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$TextureMarker, 0, "()V", 1 },
	{ "control", (intptr_t) M_mindustry_game_MapObjectives$TextureMarker_control_mindustry_logic_LMarkerControl_double_double_double, VTABLE_mindustry_game_MapObjectives$TextureMarker_control_mindustry_logic_LMarkerControl_double_double_double, "(Lmindustry/logic/LMarkerControl;DDD)V", 1 },
	{ "draw", (intptr_t) M_mindustry_game_MapObjectives$TextureMarker_draw_float, VTABLE_mindustry_game_MapObjectives$TextureMarker_draw_float, "(F)V", 1 },
	{ "setTexture", (intptr_t) M_mindustry_game_MapObjectives$TextureMarker_setTexture_java_lang_Object, VTABLE_mindustry_game_MapObjectives$TextureMarker_setTexture_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
};

Class class_mindustry_game_MapObjectives$TextureMarker{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$TextureMarker",
		.parentClass = (intptr_t) &class_mindustry_game_MapObjectives$PosMarker,
		.size = sizeof(mindustry_game_MapObjectives$TextureMarker),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$TextureMarker,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$TextureMarker,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$TextureMarker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_MapObjectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$TextureMarker = registerClass(&class_mindustry_game_MapObjectives$TextureMarker);

}

