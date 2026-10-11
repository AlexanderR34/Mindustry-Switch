#include "mindustry/game/MapObjectives_PointMarker.h"
#include "arc/math/geom/Vec2.h"
#include "arc/math/Interp.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/util/Time.h"
#include "arc/math/Interp_PowOut.h"
#include "mindustry/logic/LMarkerControl.h"
#include "arc/graphics/Color.h"
#include "java/lang/Enum.h"
#include "mindustry/graphics/LightRenderer.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/game/MapObjectives_1.h"
#include "java/lang/Object.h"
#include "mindustry/game/MapObjectives_PointMarker.h"
#include "java/lang/String.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/game/MapObjectives_ObjectiveMarker.h"
#include "mindustry/game/MapObjectives.h"
#include "mindustry/Vars.h"
#include "java/lang/Double.h"
#include "mindustry/game/MapObjectives_PosMarker.h"
#include "arc/scene/ui/layout/Scl.h"

extern "C" {


void mark_mindustry_game_MapObjectives$PointMarker(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_MapObjectives$PointMarker *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_mindustry_game_MapObjectives$PointMarker(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_MapObjectives$PosMarker(ctx);
}

void init_mindustry_game_MapObjectives$PointMarker_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$PointMarker:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$PointMarker(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(970);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(967);
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(5.0f));
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(11.0f));
	LINE_NUMBER(968);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f25555"_j))));
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(971);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	LINE_NUMBER(972);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$PointMarker_int_int_arc_graphics_Color(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$PointMarker:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$PointMarker(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(974);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(967);
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(5.0f));
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(11.0f));
	LINE_NUMBER(968);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f25555"_j))));
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(975);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	LINE_NUMBER(976);
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[3].o);
	LINE_NUMBER(977);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$PointMarker_int_int_float_float_arc_graphics_Color(jcontext ctx, jobject self, jint param0, jint param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$PointMarker:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$PointMarker(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(979);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(967);
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(5.0f));
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(11.0f));
	LINE_NUMBER(968);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f25555"_j))));
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(980);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (jfloat((frame[1].i))), (jfloat((frame[2].i))));
	LINE_NUMBER(981);
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (frame[4].f);
	LINE_NUMBER(982);
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_radius = (frame[3].f);
	LINE_NUMBER(983);
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[5].o);
	LINE_NUMBER(984);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_MapObjectives$PointMarker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$PointMarker:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_MapObjectives$PointMarker(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(986);
	init_mindustry_game_MapObjectives$PosMarker(ctx, (frame[0].o));
	LINE_NUMBER(967);
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(5.0f));
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat(11.0f));
	LINE_NUMBER(968);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f25555"_j))));
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(986);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$PointMarker_draw_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$PointMarker:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	auto marker = (mindustry_game_MapObjectives$PointMarker *) self;
	if (!marker->parent.F_pos) {
		clinit_arc_math_geom_Vec2(ctx);
		marker->parent.F_pos = (arc_math_geom_Vec2 *) gcAlloc(ctx, &class_arc_math_geom_Vec2);
		init_arc_math_geom_Vec2(ctx, (jobject) marker->parent.F_pos);
	}
	if (!marker->F_color) {
		clinit_arc_graphics_Color(ctx);
		marker->F_color = (arc_graphics_Color *) SF_arc_graphics_Color_white;
	}
	LINE_NUMBER(990);
	frame[2].f = ((((jfloat)((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_radius) * (jfloat(8.0f))) * (frame[1].f));
	LINE_NUMBER(991);
	clinit_arc_math_Interp(ctx);
	sp[0].o = (jobject)SF_arc_math_Interp_pow2Out;
	jfloat temp0 = (jfloat)((func_arc_math_Interp$PowOut_apply_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Interp$PowOut_apply_float_R_float])(ctx, sp[0].o, (fmodf(((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_globalTime) / (jfloat(100.0f))), (jfloat(1)))));
	frame[3].f = temp0;
	LINE_NUMBER(993);
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_game_MapObjectives$ObjectiveMarker *) NULL_CHECK((frame[0].o)))->F_drawLayer));
	LINE_NUMBER(994);
	jfloat temp1 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, ((((jfloat(1)) - (frame[3].f)) * ((jfloat)((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_stroke)) + (jfloat(0.1f))));
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Lines_stroke_float_arc_graphics_Color(ctx, temp1, sp[0].o);
	LINE_NUMBER(995);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp2 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x;
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	SM_arc_graphics_g2d_Lines_circle_float_float_float(ctx, temp2, ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y), ((frame[2].f) * (frame[3].f)));
	LINE_NUMBER(996);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$PointMarker_drawLight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$PointMarker:drawLight", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(1000);
	frame[2].f = ((((jfloat)((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_radius) * (jfloat(8.0f))) * (frame[1].f));
	LINE_NUMBER(1002);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	sp[0].o = (jobject)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_lights;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$PosMarker *) NULL_CHECK((frame[0].o)))->F_pos;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	jfloat temp2 = frame[2].f;
	sp[1].o = (jobject)((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_color;
	sp[2].o = (jobject)((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_color;
	((func_mindustry_graphics_LightRenderer_add_float_float_float_arc_graphics_Color_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_graphics_LightRenderer_add_float_float_float_arc_graphics_Color_float])(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, ((jfloat)((arc_graphics_Color *) NULL_CHECK(sp[2].o))->F_a));
	LINE_NUMBER(1003);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_MapObjectives$PointMarker_control_mindustry_logic_LMarkerControl_double_double_double(jcontext ctx, jobject self, jobject param0, jdouble param1, jdouble param2, jdouble param3) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/MapObjectives$PointMarker:control", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].d = param1;
	frame[4].d = param2;
	frame[6].d = param3;
	{
	LINE_NUMBER(1007);
	M_mindustry_game_MapObjectives$PosMarker_control_mindustry_logic_LMarkerControl_double_double_double(ctx, (frame[0].o), (frame[1].o), (frame[2].d), (frame[4].d), (frame[6].d));
	LINE_NUMBER(1009);
	jint temp0 = (jint)SM_java_lang_Double_isNaN_double_R_boolean(ctx, (frame[2].d));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(1010);
	clinit_mindustry_game_MapObjectives$1(ctx);
	sp[0].o = (jobject)SF_mindustry_game_MapObjectives$1_$SwitchMap$mindustry$logic$LMarkerControl;
	jint temp0 = (jint)((func_mindustry_logic_LMarkerControl_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_logic_LMarkerControl_ordinal_R_int])(ctx, (frame[1].o));
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 12: goto label_4;
		case 13: goto label_2;
		case 14: goto label_5;
		case 15: goto label_2;
		case 16: goto label_6;
		default: goto label_2;
	}
	}
label_4:;
	{
	LINE_NUMBER(1011);
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat((frame[2].d)));
	goto label_2;
	}
label_6:;
	{
	LINE_NUMBER(1012);
	((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_stroke = (jfloat((frame[2].d)));
	goto label_2;
	}
label_5:;
	{
	LINE_NUMBER(1013);
	sp[0].o = (jobject)((mindustry_game_MapObjectives$PointMarker *) NULL_CHECK((frame[0].o)))->F_color;
	sp[0].o = (jobject)((func_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_fromDouble_double_R_arc_graphics_Color])(ctx, sp[0].o, (frame[2].d));
	}
label_2:;
	LINE_NUMBER(1016);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_game_MapObjectives$PointMarker[] {
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
	(void *) M_mindustry_game_MapObjectives$PointMarker_draw_float,
	(void *) M_mindustry_game_MapObjectives$PointMarker_drawLight_float,
	(void *) M_mindustry_game_MapObjectives$PointMarker_control_mindustry_logic_LMarkerControl_double_double_double,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_setText_java_lang_String_boolean,
	(void *) M_mindustry_game_MapObjectives$ObjectiveMarker_setTexture_java_lang_Object,
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
	{ "radius", &class_float, offsetof(mindustry_game_MapObjectives$PointMarker, F_radius), "F", 1 },
	{ "stroke", &class_float, offsetof(mindustry_game_MapObjectives$PointMarker, F_stroke), "F", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_game_MapObjectives$PointMarker, F_color), "Larc/graphics/Color;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$PointMarker_int_int, 0, "(II)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$PointMarker_int_int_arc_graphics_Color, 0, "(IILarc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$PointMarker_int_int_float_float_arc_graphics_Color, 0, "(IIFFLarc/graphics/Color;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_MapObjectives$PointMarker, 0, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_game_MapObjectives$PointMarker_draw_float, VTABLE_mindustry_game_MapObjectives$PointMarker_draw_float, "(F)V", 1 },
	{ "drawLight", (intptr_t) M_mindustry_game_MapObjectives$PointMarker_drawLight_float, VTABLE_mindustry_game_MapObjectives$PointMarker_drawLight_float, "(F)V", 1 },
	{ "control", (intptr_t) M_mindustry_game_MapObjectives$PointMarker_control_mindustry_logic_LMarkerControl_double_double_double, VTABLE_mindustry_game_MapObjectives$PointMarker_control_mindustry_logic_LMarkerControl_double_double_double, "(Lmindustry/logic/LMarkerControl;DDD)V", 1 },
};

Class class_mindustry_game_MapObjectives$PointMarker{
		.nativeName = (intptr_t) "mindustry/game/MapObjectives$PointMarker",
		.parentClass = (intptr_t) &class_mindustry_game_MapObjectives$PosMarker,
		.size = sizeof(mindustry_game_MapObjectives$PointMarker),
		.classVtable = (intptr_t) vtable_mindustry_game_MapObjectives$PointMarker,
		.staticInitializer = (intptr_t) clinit_mindustry_game_MapObjectives$PointMarker,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_MapObjectives$PointMarker,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_MapObjectives,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 20,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_MapObjectives$PointMarker = registerClass(&class_mindustry_game_MapObjectives$PointMarker);

}

