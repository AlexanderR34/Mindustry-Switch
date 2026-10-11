#include "mindustry/type/Weather_WeatherStateComp.h"
#include "java/lang/Math.h"
#include "arc/math/Mathf.h"
#include "arc/math/geom/Vec2.h"
#include "arc/Core.h"
#include "mindustry/type/Weather.h"
#include "arc/util/Time.h"
#include "mindustry/type/Weather_WeatherStateComp_invoke_java_lang_Runnable_3.h"
#include "mindustry/type/Weather_WeatherStateComp_invoke_java_lang_Runnable_2.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "mindustry/gen/Posc.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/type/Weather_WeatherStateComp.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/gen/Drawc.h"
#include "mindustry/gen/Syncc.h"
#include "mindustry/gen/WeatherState.h"
#include "arc/Settings.h"
#include "arc/math/geom/Position.h"
#include "mindustry/Vars.h"

extern "C" {

jfloat SF_mindustry_type_Weather$WeatherStateComp_fadeTime;

void mark_mindustry_type_Weather$WeatherStateComp(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_type_Weather$WeatherStateComp *) object;
	if (self->F_weather)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_weather)->clazz)->markFunction)((jobject) self->F_weather, mark, depth + 1);
	if (self->F_windVector)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_windVector)->clazz)->markFunction)((jobject) self->F_windVector, mark, depth + 1);
}

void clinit_mindustry_type_Weather$WeatherStateComp(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_type_Weather$WeatherStateComp_fadeTime = jfloat(240.0f);
}

void init_mindustry_type_Weather$WeatherStateComp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather$WeatherStateComp:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weather$WeatherStateComp(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(297);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(301);
	((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_intensity = (jfloat(1));
	((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_opacity = (jfloat(0));
	LINE_NUMBER(302);
	sp[0].o = frame[0].o;
	clinit_arc_math_geom_Vec2(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_geom_Vec2);
	init_arc_math_geom_Vec2(ctx, sp[1].o);
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setToRandomDirection_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK(sp[0].o))->F_windVector = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Weather$WeatherStateComp_init_mindustry_type_Weather(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather$WeatherStateComp:init", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(305);
	((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_weather = (jref) (frame[1].o);
	LINE_NUMBER(306);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Weather$WeatherStateComp_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather$WeatherStateComp:update", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	if ((floatCompare(((jfloat)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_life), (jfloat(240.0f)), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(311);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((jfloat)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_life) / (jfloat(240.0f))), ((jfloat)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_opacity));
	((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK(sp[0].o))->F_opacity = temp0;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, ((jfloat)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_opacity), (jfloat(1)), (jfloat(4,000000e-03f)));
	((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK(sp[0].o))->F_opacity = temp0;
	}
label_3:;
	{
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK(sp[0].o))->F_life = (((jfloat)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK(sp[0].o))->F_life) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	LINE_NUMBER(318);
	sp[0].o = (jobject)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_weather;
	sp[1].o = (jobject)((func_mindustry_type_Weather$WeatherStateComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weather$WeatherStateComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_Weather_update_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weather_update_mindustry_gen_WeatherState])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_WeatherState, sp[1].o)));
	LINE_NUMBER(319);
	sp[0].o = (jobject)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_weather;
	sp[1].o = (jobject)((func_mindustry_type_Weather$WeatherStateComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weather$WeatherStateComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_Weather_updateEffect_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weather_updateEffect_mindustry_gen_WeatherState])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_WeatherState, sp[1].o)));
	LINE_NUMBER(321);
	if ((floatCompare(((jfloat)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_life), (jfloat(0)), 1)) >= 0) goto label_7;
	}
	{
	LINE_NUMBER(322);
	((func_mindustry_type_Weather$WeatherStateComp_remove) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weather$WeatherStateComp_remove])(ctx, (frame[0].o));
	}
label_7:;
	LINE_NUMBER(324);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Weather$WeatherStateComp_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather$WeatherStateComp:draw", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(328);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if ((floatCompare(((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_weatherAlpha), (jfloat(1,000000e-04f)), -1)) <= 0) goto label_1;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	if (((jint)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_drawWeather) == 0) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"showweather"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(329);
	jfloat temp0 = jfloat(130.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_type_Weather$WeatherStateComp_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_type_Weather$WeatherStateComp_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_type_Weather$WeatherStateComp_invoke_java_lang_Runnable_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	LINE_NUMBER(335);
	jfloat temp1 = jfloat(20.0f);
	{ /* InvokeDynamic */
		clinit_mindustry_type_Weather$WeatherStateComp_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_type_Weather$WeatherStateComp_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_type_Weather$WeatherStateComp_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp1, sp[0].o);
	}
label_1:;
	LINE_NUMBER(341);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Weather$WeatherStateComp_lambda$draw$1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather$WeatherStateComp:lambda$draw$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(336);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = ((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_weatherAlpha) * ((jfloat)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_opacity);
	sp[0].o = (jobject)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_weather;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp0 * ((jfloat)((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_opacityMultiplier)));
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_weather;
	sp[1].o = (jobject)((func_mindustry_type_Weather$WeatherStateComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weather$WeatherStateComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_Weather_drawUnder_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weather_drawUnder_mindustry_gen_WeatherState])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_WeatherState, sp[1].o)));
	LINE_NUMBER(338);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Weather$WeatherStateComp_lambda$draw$0(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather$WeatherStateComp:lambda$draw$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(330);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp0 = ((jfloat)((mindustry_core_Renderer *) NULL_CHECK(sp[0].o))->F_weatherAlpha) * ((jfloat)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_opacity);
	sp[0].o = (jobject)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_weather;
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp0 * ((jfloat)((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_opacityMultiplier)));
	LINE_NUMBER(331);
	sp[0].o = (jobject)((mindustry_type_Weather$WeatherStateComp *) NULL_CHECK((frame[0].o)))->F_weather;
	sp[1].o = (jobject)((func_mindustry_type_Weather$WeatherStateComp_self_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weather$WeatherStateComp_self_R_mindustry_gen_Entityc])(ctx, (frame[0].o));
	((func_mindustry_type_Weather_drawOver_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_type_Weather_drawOver_mindustry_gen_WeatherState])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_gen_WeatherState, sp[1].o)));
	LINE_NUMBER(332);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(333);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_Weather$WeatherStateComp[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_type_Weather$WeatherStateComp_update,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_math_geom_Position_angleTo_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_angleTo_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_arc_math_geom_Position_R_float,
	(void *) M_arc_math_geom_Position_dst_float_float_R_float,
	(void *) M_arc_math_geom_Position_dst2_float_float_R_float,
	(void *) M_arc_math_geom_Position_within_arc_math_geom_Position_float_R_boolean,
	(void *) M_arc_math_geom_Position_within_float_float_float_R_boolean,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_type_Weather$WeatherStateComp_draw,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_type_Weather$WeatherStateComp_init_mindustry_type_Weather,
	(void *) M_mindustry_type_Weather$WeatherStateComp_lambda$draw$1,
	(void *) M_mindustry_type_Weather$WeatherStateComp_lambda$draw$0,
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
	{ "self", "()Lmindustry/gen/Entityc;" },
	{ "as", "()Ljava/lang/Object;" },
	{ "isAdded", "()Z" },
	{ "isLocal", "()Z" },
	{ "isRemote", "()Z" },
	{ "serialize", "()Z" },
	{ "classId", "()I" },
	{ "id", "()I" },
	{ "add", "()V" },
	{ "afterRead", "()V" },
	{ "afterReadAll", "()V" },
	{ "beforeWrite", "()V" },
	{ "id", "(I)V" },
	{ "read", "(Larc/util/io/Reads;)V" },
	{ "remove", "()V" },
	{ "update", "()V" },
	{ "write", "(Larc/util/io/Writes;)V" },
	{ "getX", "()F" },
	{ "getY", "()F" },
	{ "angleTo", "(Larc/math/geom/Position;)F" },
	{ "angleTo", "(FF)F" },
	{ "dst2", "(Larc/math/geom/Position;)F" },
	{ "dst", "(Larc/math/geom/Position;)F" },
	{ "dst", "(FF)F" },
	{ "dst2", "(FF)F" },
	{ "within", "(Larc/math/geom/Position;F)Z" },
	{ "within", "(FFF)Z" },
	{ "floorOn", "()Lmindustry/world/blocks/environment/Floor;" },
	{ "buildOn", "()Lmindustry/gen/Building;" },
	{ "onSolid", "()Z" },
	{ "x", "()F" },
	{ "y", "()F" },
	{ "tileX", "()I" },
	{ "tileY", "()I" },
	{ "blockOn", "()Lmindustry/world/Block;" },
	{ "tileOn", "()Lmindustry/world/Tile;" },
	{ "set", "(Larc/math/geom/Position;)V" },
	{ "set", "(FF)V" },
	{ "trns", "(Larc/math/geom/Position;)V" },
	{ "trns", "(FF)V" },
	{ "x", "(F)V" },
	{ "y", "(F)V" },
	{ "clipSize", "()F" },
	{ "draw", "()V" },
	{ "isSyncHidden", "(Lmindustry/game/Team;)Z" },
	{ "lastUpdated", "()J" },
	{ "updateSpacing", "()J" },
	{ "afterSync", "()V" },
	{ "handleSyncHidden", "()V" },
	{ "interpolate", "()V" },
	{ "lastUpdated", "(J)V" },
	{ "readSync", "(Larc/util/io/Reads;)V" },
	{ "readSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "snapInterpolation", "()V" },
	{ "snapSync", "()V" },
	{ "updateSpacing", "(J)V" },
	{ "writeSync", "(Larc/util/io/Writes;)V" },
	{ "writeSyncManual", "(Ljava/nio/FloatBuffer;)V" },
	{ "init", "(Lmindustry/type/Weather;)V" },
	{ "lambda$draw$1", "()V" },
	{ "lambda$draw$0", "()V" },
};

static jclass interfaces[] { &class_mindustry_gen_Drawc, &class_mindustry_gen_Syncc, };

static FieldMetadata fields[] {
	{ "fadeTime", &class_float, (intptr_t) &SF_mindustry_type_Weather$WeatherStateComp_fadeTime, "F", 25 },
	{ "weather", &class_mindustry_type_Weather, offsetof(mindustry_type_Weather$WeatherStateComp, F_weather), "Lmindustry/type/Weather;", 0 },
	{ "intensity", &class_float, offsetof(mindustry_type_Weather$WeatherStateComp, F_intensity), "F", 0 },
	{ "opacity", &class_float, offsetof(mindustry_type_Weather$WeatherStateComp, F_opacity), "F", 0 },
	{ "life", &class_float, offsetof(mindustry_type_Weather$WeatherStateComp, F_life), "F", 0 },
	{ "effectTimer", &class_float, offsetof(mindustry_type_Weather$WeatherStateComp, F_effectTimer), "F", 0 },
	{ "windVector", &class_arc_math_geom_Vec2, offsetof(mindustry_type_Weather$WeatherStateComp, F_windVector), "Larc/math/geom/Vec2;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_Weather$WeatherStateComp, 0, "()V", 0 },
	{ "init", (intptr_t) M_mindustry_type_Weather$WeatherStateComp_init_mindustry_type_Weather, VTABLE_mindustry_type_Weather$WeatherStateComp_init_mindustry_type_Weather, "(Lmindustry/type/Weather;)V", 0 },
	{ "update", (intptr_t) M_mindustry_type_Weather$WeatherStateComp_update, VTABLE_mindustry_type_Weather$WeatherStateComp_update, "()V", 1 },
	{ "draw", (intptr_t) M_mindustry_type_Weather$WeatherStateComp_draw, VTABLE_mindustry_type_Weather$WeatherStateComp_draw, "()V", 1 },
	{ "lambda$draw$1", (intptr_t) M_mindustry_type_Weather$WeatherStateComp_lambda$draw$1, VTABLE_mindustry_type_Weather$WeatherStateComp_lambda$draw$1, "()V", 4098 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_type_Weather$WeatherStateComp_lambda$draw$0, VTABLE_mindustry_type_Weather$WeatherStateComp_lambda$draw$0, "()V", 4098 },
};

Class class_mindustry_type_Weather$WeatherStateComp{
		.nativeName = (intptr_t) "mindustry/type/Weather$WeatherStateComp",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_type_Weather$WeatherStateComp),
		.classVtable = (intptr_t) vtable_mindustry_type_Weather$WeatherStateComp,
		.staticInitializer = (intptr_t) clinit_mindustry_type_Weather$WeatherStateComp,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_Weather$WeatherStateComp,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_type_Weather,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1056,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 72,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_Weather$WeatherStateComp = registerClass(&class_mindustry_type_Weather$WeatherStateComp);

}

