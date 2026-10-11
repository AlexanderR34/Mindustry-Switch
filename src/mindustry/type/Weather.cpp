#include "mindustry/type/Weather.h"
#include "mindustry/type/Weather_WeatherEntry.h"
#include "arc/func/Prov.h"
#include "mindustry/type/Weather_invoke_arc_func_Prov_2.h"
#include "arc/math/Angles.h"
#include "arc/math/geom/Rect.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "arc/graphics/Color.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/g2d/Draw.h"
#include "mindustry/core/Renderer.h"
#include "mindustry/type/Weather_WeatherStateComp.h"
#include "mindustry/gen/Entityc.h"
#include "mindustry/type/Weather_invoke_arc_func_Boolf_1.h"
#include "arc/util/Tmp.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/world/Tile.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "java/lang/reflect/Field.h"
#include "arc/Core.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/type/Weather_invoke_arc_func_Cons_1.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/Texture.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "mindustry/type/Weather_invoke_arc_func_Prov_3.h"
#include "arc/graphics/Camera.h"
#include "arc/math/geom/Vec2.h"
#include "arc/math/Rand.h"
#include "mindustry/gen/Groups.h"
#include "arc/graphics/g2d/Lines.h"
#include "arc/util/noise/Noise.h"
#include "mindustry/gen/Unitc.h"
#include "arc/func/Cons.h"
#include "mindustry/content/StatusEffects.h"
#include "java/lang/String.h"
#include "mindustry/core/Control.h"
#include "mindustry/world/blocks/environment/Floor.h"
#include "java/lang/Math.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "mindustry/type/Weather.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/type/StatusEffect.h"
#include "mindustry/world/blocks/Attributes.h"
#include "mindustry/entities/EntityGroup.h"
#include "arc/audio/Sound.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/gen/Statusc.h"
#include "mindustry/entities/effect/NoiseEffect.h"
#include "mindustry/gen/WeatherState.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "mindustry/audio/SoundControl.h"

extern "C" {

jobject SF_mindustry_type_Weather_rand;
jfloat SF_mindustry_type_Weather_boundMax;

void mark_mindustry_type_Weather(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_type_Weather_rand)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_type_Weather_rand)->clazz)->markFunction)((jobject) SF_mindustry_type_Weather_rand, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ctype_UnlockableContent(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_type_Weather *) object;
	if (self->F_attrs)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_attrs)->clazz)->markFunction)((jobject) self->F_attrs, mark, depth + 1);
	if (self->F_sound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_sound)->clazz)->markFunction)((jobject) self->F_sound, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_status)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_status)->clazz)->markFunction)((jobject) self->F_status, mark, depth + 1);
}

void init_mindustry_type_Weather_java_lang_String_arc_func_Prov(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weather(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(44);
	init_mindustry_ctype_UnlockableContent_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(29);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_duration = (jfloat(36000.0f));
	LINE_NUMBER(30);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_opacityMultiplier = (jfloat(1));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_Attributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_Attributes);
	init_mindustry_world_blocks_Attributes(ctx, sp[1].o);
	((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_attrs = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	LINE_NUMBER(33);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVol = (jfloat(0.1f));
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVolMin = (jfloat(0));
	LINE_NUMBER(34);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVolOscMag = (jfloat(0));
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVolOscScl = (jfloat(20.0f));
	LINE_NUMBER(35);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_hidden = (jint(0));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Weather_invoke_arc_func_Prov_2(ctx);
		auto proxy = (mindustry_type_Weather_invoke_arc_func_Prov_2 *) gcAlloc(ctx, &class_mindustry_type_Weather_invoke_arc_func_Prov_2);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	LINE_NUMBER(40);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_statusDuration = (jfloat(120.0f));
	LINE_NUMBER(41);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_statusAir = (jint(1));
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_statusGround = (jint(1));
	LINE_NUMBER(45);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_type_Weather_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weather(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(49);
	init_mindustry_ctype_UnlockableContent_java_lang_String(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(29);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_duration = (jfloat(36000.0f));
	LINE_NUMBER(30);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_opacityMultiplier = (jfloat(1));
	LINE_NUMBER(31);
	sp[0].o = frame[0].o;
	clinit_mindustry_world_blocks_Attributes(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_world_blocks_Attributes);
	init_mindustry_world_blocks_Attributes(ctx, sp[1].o);
	((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_attrs = (jref) sp[1].o;
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_sound = (jref) sp[1].o;
	LINE_NUMBER(33);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVol = (jfloat(0.1f));
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVolMin = (jfloat(0));
	LINE_NUMBER(34);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVolOscMag = (jfloat(0));
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVolOscScl = (jfloat(20.0f));
	LINE_NUMBER(35);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_hidden = (jint(0));
	LINE_NUMBER(38);
	sp[0].o = frame[0].o;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Weather_invoke_arc_func_Prov_3(ctx);
		auto proxy = (mindustry_type_Weather_invoke_arc_func_Prov_3 *) gcAlloc(ctx, &class_mindustry_type_Weather_invoke_arc_func_Prov_3);
		sp[1].o = (jobject) proxy;
	}
	((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	((mindustry_type_Weather *) NULL_CHECK(sp[0].o))->F_status = (jref) sp[1].o;
	LINE_NUMBER(40);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_statusDuration = (jfloat(120.0f));
	LINE_NUMBER(41);
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_statusAir = (jint(1));
	((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_statusGround = (jint(1));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Weather_create_R_mindustry_gen_WeatherState(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:create", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((func_mindustry_type_Weather_create_float_R_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weather_create_float_R_mindustry_gen_WeatherState])(ctx, (frame[0].o), (jfloat(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Weather_create_float_R_mindustry_gen_WeatherState(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:create", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_mindustry_type_Weather_create_float_float_R_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weather_create_float_float_R_mindustry_gen_WeatherState])(ctx, (frame[0].o), (frame[1].f), ((jfloat)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_duration));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Weather_create_float_float_R_mindustry_gen_WeatherState(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:create", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(61);
	sp[0].o = (jobject)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_type;
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, sp[0].o))(ctx, sp[0].o);
	frame[3].o = (checkCast(ctx, &class_mindustry_gen_WeatherState, sp[0].o));
	LINE_NUMBER(62);
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, (frame[1].f));
	((func_mindustry_gen_WeatherState_intensity_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_WeatherState_intensity_float])(ctx, sp[0].o, temp0);
	LINE_NUMBER(63);
	((func_mindustry_gen_WeatherState_init_mindustry_type_Weather) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_WeatherState_init_mindustry_type_Weather])(ctx, (frame[3].o), (frame[0].o));
	LINE_NUMBER(64);
	((func_mindustry_gen_WeatherState_life_float) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_WeatherState_life_float])(ctx, (frame[3].o), (frame[2].f));
	LINE_NUMBER(65);
	((func_mindustry_gen_WeatherState_add) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_mindustry_gen_WeatherState_add])(ctx, (frame[3].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:instance", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_weather;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Weather_invoke_arc_func_Boolf_1(ctx);
		auto proxy = (mindustry_type_Weather_invoke_arc_func_Boolf_1 *) gcAlloc(ctx, &class_mindustry_type_Weather_invoke_arc_func_Boolf_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_find_arc_func_Boolf_R_mindustry_gen_Entityc])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_gen_WeatherState, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Weather_isActive_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:isActive", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(75);
	sp[0].o = (jobject)((func_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_1;
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

void M_mindustry_type_Weather_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:remove", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((func_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(80);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_mindustry_gen_WeatherState_remove) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_WeatherState_remove])(ctx, sp[0].o);
label_2:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Weather_update_mindustry_gen_WeatherState(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:update", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Weather_updateEffect_mindustry_gen_WeatherState(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:updateEffect", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_status;
	clinit_mindustry_content_StatusEffects(ctx);
	sp[1].o = (jobject)SF_mindustry_content_StatusEffects_none;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(89);
	if ((floatCompare(((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_effectTimer), (jfloat(0)), 1)) > 0) goto label_3;
	}
	{
	LINE_NUMBER(90);
	((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_effectTimer = (((jfloat)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_statusDuration) - (jfloat(5.0f)));
	LINE_NUMBER(92);
	clinit_mindustry_gen_Groups(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Groups_unit;
	{ /* InvokeDynamic */
		clinit_mindustry_type_Weather_invoke_arc_func_Cons_1(ctx);
		auto proxy = (mindustry_type_Weather_invoke_arc_func_Cons_1 *) gcAlloc(ctx, &class_mindustry_type_Weather_invoke_arc_func_Cons_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_mindustry_entities_EntityGroup_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_EntityGroup_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	goto label_1;
	}
label_3:;
	{
	LINE_NUMBER(98);
	sp[0].o = frame[1].o;
	((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_effectTimer = (((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_effectTimer) - (clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta));
	}
label_1:;
	{
	LINE_NUMBER(102);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) != 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_sound;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_none;
	if (sp[0].o == sp[1].o) goto label_6;
	}
	{
	LINE_NUMBER(103);
	if ((floatCompare(((jfloat)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVolOscMag), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	jdouble temp0 = (jdouble)SM_arc_util_noise_Noise_rawNoise_double_R_double(ctx, (jdouble(((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / ((jfloat)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVolOscScl)))));
	jdouble temp1 = (jdouble)SM_java_lang_Math_abs_double_R_double(ctx, temp0);
	jfloat temp2 = (jfloat(temp1)) * ((jfloat)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVolOscMag);
	sp[0].f = temp2;
	sp += 1;
	goto label_9;
	}
label_8:;
	INST_FCONST(0);
label_9:;
	{
	sp -= 1;
	frame[2].f = sp[0].f;
	LINE_NUMBER(104);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_control;
	sp[0].o = (jobject)((mindustry_core_Control *) NULL_CHECK(sp[0].o))->F_sound;
	sp[1].o = (jobject)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_sound;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((((jfloat)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVol) + (frame[2].f)) * ((jfloat)((mindustry_gen_WeatherState *) NULL_CHECK((frame[1].o)))->F_opacity)), ((jfloat)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_soundVolMin));
	((func_mindustry_audio_SoundControl_loop_arc_audio_Sound_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_audio_SoundControl_loop_arc_audio_Sound_float])(ctx, sp[0].o, sp[1].o, temp0);
	}
label_6:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Weather_drawOver_mindustry_gen_WeatherState(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:drawOver", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_type_Weather_drawUnder_mindustry_gen_WeatherState(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:drawUnder", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(114);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_type_Weather_drawParticles_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float_float_float_float_float_float_float_float_float_boolean(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8, jfloat param9, jfloat param10, jfloat param11, jfloat param12, jfloat param13, jfloat param14, jbool param15) {
	jtype frame[31];
	auto stack = &frame[25];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:drawParticles", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weather(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	frame[9].f = param9;
	frame[10].f = param10;
	frame[11].f = param11;
	frame[12].f = param12;
	frame[13].f = param13;
	frame[14].f = param14;
	frame[15].i = param15;
	{
	LINE_NUMBER(123);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(0)));
	LINE_NUMBER(124);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp4 = (jfloat)((func_mindustry_core_Renderer_minScale_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_Renderer_minScale_R_float])(ctx, sp[1].o);
	jfloat temp5 = temp3 / temp4;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp6 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	jfloat temp7 = jfloat(temp6);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp8 = (jfloat)((func_mindustry_core_Renderer_minScale_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_Renderer_minScale_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, temp5, (temp7 / temp8));
	LINE_NUMBER(125);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[0].o, ((frame[3].f) * (jfloat(1.5f))));
	LINE_NUMBER(126);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(127);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp9 = (jfloat)((func_arc_math_geom_Rect_area_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_area_R_float])(ctx, sp[0].o);
	frame[16].i = (jint(((temp9 / (frame[4].f)) * (frame[5].f))));
	LINE_NUMBER(128);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color_float(ctx, (frame[1].o), (frame[6].f));
	LINE_NUMBER(130);
	frame[17].i = (jint(0));
	}
label_7:;
	{
	if ((frame[17].i) >= (frame[16].i)) goto label_8;
	}
	{
	LINE_NUMBER(131);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0.5f)), (jfloat(1)));
	frame[18].f = temp0;
	LINE_NUMBER(132);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0.5f)), (jfloat(1)));
	frame[19].f = temp1;
	LINE_NUMBER(133);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp2 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (frame[2].f), (frame[3].f));
	frame[20].f = temp2;
	LINE_NUMBER(134);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp3 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(80000.0f)));
	frame[21].f = (temp3 + (((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * (frame[7].f)) * (frame[19].f)));
	LINE_NUMBER(135);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp4 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(80000.0f)));
	frame[22].f = (temp4 + (((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * (frame[8].f)) * (frame[18].f)));
	LINE_NUMBER(136);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp5 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (frame[9].f), (frame[10].f));
	frame[23].f = temp5;
	LINE_NUMBER(137);
	if ((frame[15].i) == 0) goto label_16;
	}
	{
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(360.0f)));
	sp[0].f = temp0;
	sp += 1;
	goto label_17;
	}
label_16:;
	INST_FCONST(0);
label_17:;
	{
	sp -= 1;
	frame[24].f = sp[0].f;
	LINE_NUMBER(139);
	jfloat temp0 = frame[21].f;
	jfloat temp1 = frame[22].f;
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp2 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (frame[11].f), (frame[12].f));
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp3 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (frame[13].f), (frame[14].f));
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_sin_float_float_float_R_float(ctx, temp1, temp2, temp3);
	frame[21].f = (temp0 + temp4);
	LINE_NUMBER(141);
	jfloat temp5 = frame[21].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[21].f = (temp5 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(142);
	jfloat temp6 = frame[22].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[22].f = (temp6 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(143);
	jfloat temp7 = frame[21].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_mod_float_float_R_float(ctx, temp7, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width));
	frame[21].f = temp8;
	LINE_NUMBER(144);
	jfloat temp9 = frame[22].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp10 = (jfloat)SM_arc_math_Mathf_mod_float_float_R_float(ctx, temp9, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height));
	frame[22].f = temp10;
	LINE_NUMBER(145);
	jfloat temp11 = frame[21].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[21].f = (temp11 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(146);
	jfloat temp12 = frame[22].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[22].f = (temp12 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(148);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r3;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[21].f), (frame[22].f), (frame[20].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	jint temp13 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp13 == 0) goto label_26;
	}
	{
	LINE_NUMBER(149);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((frame[23].f) * (frame[6].f)));
	LINE_NUMBER(150);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float_float(ctx, (frame[0].o), (frame[21].f), (frame[22].f), (frame[20].f), (frame[20].f), (frame[24].f));
	}
label_26:;
	{
	LINE_NUMBER(130);
	INST_IINC(17, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(154);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(155);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_type_Weather_drawRain_float_float_float_float_float_float_float_arc_graphics_Color(jcontext ctx, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7) {
	jtype frame[24];
	auto stack = &frame[18];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:drawRain", 24 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weather(ctx);
	frame[0].f = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(158);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(0)));
	LINE_NUMBER(159);
	frame[8].f = ((frame[1].f) * (jfloat(0.9f)));
	LINE_NUMBER(161);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp4 = (jfloat)((func_mindustry_core_Renderer_minScale_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_Renderer_minScale_R_float])(ctx, sp[1].o);
	jfloat temp5 = temp3 / temp4;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp6 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	jfloat temp7 = jfloat(temp6);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp8 = (jfloat)((func_mindustry_core_Renderer_minScale_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_Renderer_minScale_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, temp5, (temp7 / temp8));
	LINE_NUMBER(162);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[8].f));
	LINE_NUMBER(163);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(164);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp9 = (jfloat)((func_arc_math_geom_Rect_area_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_area_R_float])(ctx, sp[0].o);
	frame[9].i = (jint(((temp9 / (frame[4].f)) * (frame[5].f))));
	LINE_NUMBER(165);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (frame[6].f));
	LINE_NUMBER(166);
	jfloat temp10 = (jfloat)SM_arc_graphics_g2d_Draw_getColorAlpha_R_float(ctx);
	frame[10].f = temp10;
	LINE_NUMBER(167);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[7].o));
	LINE_NUMBER(169);
	frame[11].i = (jint(0));
	}
label_10:;
	{
	if ((frame[11].i) >= (frame[9].i)) goto label_11;
	}
	{
	LINE_NUMBER(170);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0.5f)), (jfloat(1)));
	frame[12].f = temp0;
	LINE_NUMBER(171);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0.5f)), (jfloat(1)));
	frame[13].f = temp1;
	LINE_NUMBER(172);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp2 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (frame[0].f), (frame[1].f));
	frame[14].f = temp2;
	LINE_NUMBER(173);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp3 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(80000.0f)));
	frame[15].f = (temp3 + (((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * (frame[2].f)) * (frame[13].f)));
	LINE_NUMBER(174);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp4 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(80000.0f)));
	frame[16].f = (temp4 - (((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) * (frame[3].f)) * (frame[12].f)));
	LINE_NUMBER(175);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp5 = (jfloat)((func_arc_math_Rand_random_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_R_float])(ctx, sp[0].o, (jfloat(1)));
	frame[17].f = (temp5 * (frame[10].f));
	LINE_NUMBER(177);
	jfloat temp6 = frame[15].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[15].f = (temp6 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(178);
	jfloat temp7 = frame[16].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[16].f = (temp7 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(179);
	jfloat temp8 = frame[15].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp9 = (jfloat)SM_arc_math_Mathf_mod_float_float_R_float(ctx, temp8, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width));
	frame[15].f = temp9;
	LINE_NUMBER(180);
	jfloat temp10 = frame[16].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp11 = (jfloat)SM_arc_math_Mathf_mod_float_float_R_float(ctx, temp10, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height));
	frame[16].f = temp11;
	LINE_NUMBER(181);
	jfloat temp12 = frame[15].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[15].f = (temp12 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(182);
	jfloat temp13 = frame[16].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[16].f = (temp13 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(184);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r3;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[15].f), (frame[16].f), (frame[14].f));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	jint temp14 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp14 == 0) goto label_25;
	}
	{
	LINE_NUMBER(185);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (frame[17].f));
	LINE_NUMBER(186);
	jfloat temp0 = frame[15].f;
	jfloat temp1 = frame[16].f;
	jfloat temp2 = (jfloat)SM_arc_math_Angles_angle_float_float_R_float(ctx, ((frame[2].f) * (frame[13].f)), ((-(frame[3].f)) * (frame[12].f)));
	SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float(ctx, temp0, temp1, temp2, ((frame[14].f) / (jfloat(2))));
	}
label_25:;
	{
	LINE_NUMBER(169);
	INST_IINC(11, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(189);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_type_Weather_drawSplashes_Array1_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_arc_graphics_Color_mindustry_type_Liquid(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jobject param7, jobject param8) {
	jtype frame[30];
	auto stack = &frame[24];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:drawSplashes", 30 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weather(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].o = param7;
	frame[8].o = param8;
	{
	LINE_NUMBER(192);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp0 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_x;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_camera;
	sp[1].o = (jobject)((arc_graphics_Camera *) NULL_CHECK(sp[1].o))->F_position;
	jfloat temp1 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[1].o))->F_y;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp2 = (jint)((func_arc_Graphics_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp4 = (jfloat)((func_mindustry_core_Renderer_minScale_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_Renderer_minScale_R_float])(ctx, sp[1].o);
	jfloat temp5 = temp3 / temp4;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_graphics;
	jint temp6 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[1].o);
	jfloat temp7 = jfloat(temp6);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_renderer;
	jfloat temp8 = (jfloat)((func_mindustry_core_Renderer_minScale_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_Renderer_minScale_R_float])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, temp0, temp1, temp5, (temp7 / temp8));
	LINE_NUMBER(193);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_grow_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[1].f));
	LINE_NUMBER(194);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_camera;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	sp[0].o = (jobject)((func_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Camera_bounds_arc_math_geom_Rect_R_arc_math_geom_Rect])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(195);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp9 = (jfloat)((func_arc_math_geom_Rect_area_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_area_R_float])(ctx, sp[0].o);
	frame[9].i = ((jint(((temp9 / (frame[2].f)) * (frame[3].f)))) / (jint(2)));
	LINE_NUMBER(196);
	SM_arc_graphics_g2d_Lines_stroke_float(ctx, (frame[6].f));
	LINE_NUMBER(197);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	((func_arc_math_Rand_setSeed_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_setSeed_long])(ctx, sp[0].o, (jlong(0)));
	LINE_NUMBER(199);
	frame[10].f = ((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time) / (frame[5].f));
	LINE_NUMBER(201);
	frame[11].i = (jint(0));
	}
label_8:;
	{
	if ((frame[11].i) >= (frame[9].i)) goto label_9;
	}
	{
	LINE_NUMBER(202);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp0 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(1)));
	frame[12].f = temp0;
	LINE_NUMBER(203);
	frame[13].f = ((frame[10].f) + (frame[12].f));
	LINE_NUMBER(205);
	frame[14].i = (jint((frame[13].f)));
	LINE_NUMBER(206);
	frame[15].f = (fmodf((frame[13].f), (jfloat(1))));
	LINE_NUMBER(207);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp1 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(80000.0f)));
	frame[16].f = (temp1 + (jfloat(((frame[14].i) * (953)))));
	LINE_NUMBER(208);
	clinit_mindustry_type_Weather(ctx);
	sp[0].o = (jobject)SF_mindustry_type_Weather_rand;
	jfloat temp2 = (jfloat)((func_arc_math_Rand_random_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Rand_random_float_float_R_float])(ctx, sp[0].o, (jfloat(0)), (jfloat(80000.0f)));
	frame[17].f = (temp2 - (jfloat(((frame[14].i) * (453)))));
	LINE_NUMBER(210);
	jfloat temp3 = frame[16].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[16].f = (temp3 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(211);
	jfloat temp4 = frame[17].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[17].f = (temp4 - ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(212);
	jfloat temp5 = frame[16].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp6 = (jfloat)SM_arc_math_Mathf_mod_float_float_R_float(ctx, temp5, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_width));
	frame[16].f = temp6;
	LINE_NUMBER(213);
	jfloat temp7 = frame[17].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	jfloat temp8 = (jfloat)SM_arc_math_Mathf_mod_float_float_R_float(ctx, temp7, ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_height));
	frame[17].f = temp8;
	LINE_NUMBER(214);
	jfloat temp9 = frame[16].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[16].f = (temp9 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_x));
	LINE_NUMBER(215);
	jfloat temp10 = frame[17].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r1;
	frame[17].f = (temp10 + ((jfloat)((arc_math_geom_Rect *) NULL_CHECK(sp[0].o))->F_y));
	LINE_NUMBER(217);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_r3;
	sp[0].o = (jobject)((func_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_setCentered_float_float_float_R_arc_math_geom_Rect])(ctx, sp[0].o, (frame[16].f), (frame[17].f), ((frame[15].f) * (jfloat(4.0f))));
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_r2;
	jint temp11 = (jint)((func_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Rect_overlaps_arc_math_geom_Rect_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp11 == 0) goto label_23;
	}
	{
	LINE_NUMBER(218);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tileWorld_float_float_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[16].f), (frame[17].f));
	frame[18].o = sp[0].o;
	LINE_NUMBER(221);
	if ((frame[18].o) == nullptr) goto label_26;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[18].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	if (sp[0].o != (frame[8].o)) goto label_26;
	}
	{
	LINE_NUMBER(222);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_c1;
	sp[1].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[18].o));
	sp[1].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_mapColor;
	sp[0].o = (jobject)((func_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_set_arc_graphics_Color_R_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_arc_graphics_Color_mul_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_mul_float_R_arc_graphics_Color])(ctx, sp[0].o, (jfloat(1.5f)));
	sp[0].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[0].o, (frame[4].f));
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(223);
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (jint(((frame[15].f) * (jfloat(((((jarray) nullCheck(ctx, (frame[0].o)))->length) - (jint(1)))))))))), (frame[16].f), (frame[17].f));
	goto label_23;
	}
label_26:;
	{
	LINE_NUMBER(224);
	if ((frame[18].o) == nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[18].o));
	sp[0].o = (jobject)((mindustry_world_blocks_environment_Floor *) NULL_CHECK(sp[0].o))->F_liquidDrop;
	if (sp[0].o != nullptr) goto label_23;
	}
	{
	sp[0].o = (jobject)((func_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor) ((void **) nullCheck(ctx, (frame[18].o))->vtable)[VTABLE_mindustry_world_Tile_floor_R_mindustry_world_blocks_environment_Floor])(ctx, (frame[18].o));
	if (((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_solid) != 0) goto label_23;
	}
	{
	LINE_NUMBER(225);
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, (frame[7].o));
	LINE_NUMBER(226);
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_slope_float_R_float(ctx, (frame[15].f));
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (temp0 * (frame[4].f)));
	LINE_NUMBER(228);
	frame[19].f = (jfloat(45.0f));
	LINE_NUMBER(229);
	clinit_arc_math_Mathf(ctx);
	sp[0].o = (jobject)SF_arc_math_Mathf_signs;
	frame[20].o = sp[0].o;
	frame[21].i = (((jarray) nullCheck(ctx, (frame[20].o)))->length);
	frame[22].i = (jint(0));
	}
label_33:;
	{
	if ((frame[22].i) >= (frame[21].i)) goto label_23;
	}
	{
	frame[23].i = ((jint)ARRAY_ACCESS(jint, (frame[20].o), (frame[22].i)));
	LINE_NUMBER(230);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_trns_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, ((jfloat(90.0f)) + ((jfloat((frame[23].i))) * (frame[19].f))), ((jfloat(1)) + ((jfloat(5.0f)) * (frame[15].f))));
	LINE_NUMBER(231);
	jfloat temp0 = frame[16].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	jfloat temp1 = temp0 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_x);
	jfloat temp2 = frame[17].f;
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_v1;
	SM_arc_graphics_g2d_Lines_lineAngle_float_float_float_float(ctx, temp1, (temp2 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[0].o))->F_y)), ((jfloat(90.0f)) + ((jfloat((frame[23].i))) * (frame[19].f))), ((jfloat(3.0f)) * ((jfloat(1)) - (frame[15].f))));
	LINE_NUMBER(229);
	INST_IINC(22, 1);
	goto label_33;
	}
label_23:;
	{
	LINE_NUMBER(201);
	INST_IINC(11, 1);
	goto label_8;
	}
label_9:;
	LINE_NUMBER(236);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_type_Weather_drawNoiseLayers_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_int_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jint param8, jfloat param9, jfloat param10, jfloat param11, jfloat param12) {
	jtype frame[26];
	auto stack = &frame[13];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:drawNoiseLayers", 26 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weather(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].i = param8;
	frame[9].f = param9;
	frame[10].f = param10;
	frame[11].f = param11;
	frame[12].f = param12;
	{
	LINE_NUMBER(240);
	SM_mindustry_entities_effect_NoiseEffect_drawNoiseLayers_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_int_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].i), (frame[9].f), (frame[10].f), (frame[11].f), (frame[12].f));
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_type_Weather_drawNoise_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_float(jcontext ctx, jobject param0, jobject param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6, jfloat param7, jfloat param8) {
	jtype frame[18];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:drawNoise", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weather(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	frame[5].f = param5;
	frame[6].f = param6;
	frame[7].f = param7;
	frame[8].f = param8;
	{
	LINE_NUMBER(244);
	SM_mindustry_entities_effect_NoiseEffect_drawNoise_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f), (frame[8].f));
	LINE_NUMBER(245);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_type_Weather_isHidden_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:isHidden", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(249);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_type_Weather_getContentType_R_mindustry_ctype_ContentType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:getContentType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(254);
	clinit_mindustry_ctype_ContentType(ctx);
	sp[0].o = (jobject)SF_mindustry_ctype_ContentType_weather;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_type_Weather_createWeather_mindustry_type_Weather_float_float_float_float(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:createWeather", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weather(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].f = param3;
	frame[4].f = param4;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_mindustry_type_Weather_create_float_float_R_mindustry_gen_WeatherState) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_type_Weather_create_float_float_R_mindustry_gen_WeatherState])(ctx, (frame[0].o), (frame[1].f), (frame[2].f));
	sp[0].o = (jobject)((mindustry_gen_WeatherState *) NULL_CHECK(sp[0].o))->F_windVector;
	sp[0].o = (jobject)((func_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_set_float_float_R_arc_math_geom_Vec2])(ctx, sp[0].o, (frame[3].f), (frame[4].f));
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_type_Weather_lambda$updateEffect$0_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:lambda$updateEffect$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)((func_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_checkTarget_boolean_boolean_R_boolean])(ctx, (frame[1].o), ((jint)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_statusAir), ((jint)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_statusGround));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_status;
	((func_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Unit_apply_mindustry_type_StatusEffect_float])(ctx, sp[0].o, sp[1].o, ((jfloat)((mindustry_type_Weather *) NULL_CHECK((frame[0].o)))->F_statusDuration));
	}
label_1:;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_type_Weather_lambda$instance$0_mindustry_gen_WeatherState_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:lambda$instance$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_mindustry_gen_WeatherState_weather_R_mindustry_type_Weather) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_WeatherState_weather_R_mindustry_type_Weather])(ctx, (frame[1].o));
	if (sp[0].o != (frame[0].o)) goto label_1;
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

void clinit_mindustry_type_Weather(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ctype_UnlockableContent(ctx);
	SF_mindustry_type_Weather_boundMax = jfloat(80000.0f);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/Weather:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_Weather(ctx);
	{
	LINE_NUMBER(25);
	clinit_arc_math_Rand(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_math_Rand);
	init_arc_math_Rand(ctx, sp[0].o);
	clinit_mindustry_type_Weather(ctx);
	SF_mindustry_type_Weather_rand = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_type_Weather;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method instance
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[3]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_type_Weather[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_ctype_MappableContent_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ctype_Content_compareTo_java_lang_Object_R_int,
	(void *) M_mindustry_type_Weather_getContentType_R_mindustry_ctype_ContentType,
	(void *) M_mindustry_ctype_Content_removeContent,
	(void *) M_mindustry_ctype_Content_init,
	(void *) M_mindustry_ctype_UnlockableContent_postInit,
	(void *) M_mindustry_ctype_UnlockableContent_afterPatch,
	(void *) M_mindustry_ctype_Content_load,
	(void *) M_mindustry_ctype_UnlockableContent_loadIcon,
	(void *) M_mindustry_ctype_Content_hasErrored_R_boolean,
	(void *) M_mindustry_ctype_Content_isVanilla_R_boolean,
	(void *) M_mindustry_ctype_Content_isModded_R_boolean,
	(void *) M_mindustry_ctype_Content_isPatchContent_R_boolean,
	(void *) M_mindustry_ctype_Content_compareTo_mindustry_ctype_Content_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_isBanned_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_isOnPlanet_mindustry_type_Planet_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getLogicId_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_displayDescription_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_checkStats,
	(void *) M_mindustry_ctype_UnlockableContent_setStats,
	(void *) M_mindustry_ctype_UnlockableContent_computeStats_R_mindustry_world_meta_Stats,
	(void *) M_mindustry_ctype_UnlockableContent_displayExtra_arc_scene_ui_layout_Table,
	(void *) M_mindustry_ctype_UnlockableContent_createIcons_mindustry_graphics_MultiPacker,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker$PageType_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_boolean_arc_graphics_Color_int_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color_int,
	(void *) M_mindustry_ctype_UnlockableContent_makeOutline_mindustry_graphics_MultiPacker_arc_graphics_g2d_TextureRegion_java_lang_String_arc_graphics_Color,
	(void *) M_mindustry_ctype_UnlockableContent_researchRequirements_R_Array1_mindustry_type_ItemStack,
	(void *) M_mindustry_ctype_UnlockableContent_emoji_R_java_lang_String,
	(void *) M_mindustry_ctype_UnlockableContent_emojiChar_R_int,
	(void *) M_mindustry_ctype_UnlockableContent_hasEmoji_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_getDependencies_arc_func_Cons,
	(void *) M_mindustry_ctype_UnlockableContent_onUnlock,
	(void *) M_mindustry_type_Weather_isHidden_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_showUnlock_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_logicVisible_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlock,
	(void *) M_mindustry_ctype_UnlockableContent_quietUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNowHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedHost_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlockedNow_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_unlocked_R_boolean,
	(void *) M_mindustry_ctype_UnlockableContent_clearUnlock,
	(void *) M_mindustry_ctype_UnlockableContent_locked_R_boolean,
	(void *) M_mindustry_type_Weather_create_R_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_create_float_R_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_create_float_float_R_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_isActive_R_boolean,
	(void *) M_mindustry_type_Weather_remove,
	(void *) M_mindustry_type_Weather_update_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_updateEffect_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_drawOver_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_drawUnder_mindustry_gen_WeatherState,
	(void *) M_mindustry_type_Weather_lambda$updateEffect$0_mindustry_gen_Unit,
	(void *) M_mindustry_type_Weather_lambda$instance$0_mindustry_gen_WeatherState_R_boolean,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "getContentType", "()Lmindustry/ctype/ContentType;" },
	{ "removeContent", "()V" },
	{ "init", "()V" },
	{ "postInit", "()V" },
	{ "afterPatch", "()V" },
	{ "load", "()V" },
	{ "loadIcon", "()V" },
	{ "hasErrored", "()Z" },
	{ "isVanilla", "()Z" },
	{ "isModded", "()Z" },
	{ "isPatchContent", "()Z" },
	{ "compareTo", "(Lmindustry/ctype/Content;)I" },
	{ "isBanned", "()Z" },
	{ "isOnPlanet", "(Lmindustry/type/Planet;)Z" },
	{ "getLogicId", "()I" },
	{ "displayDescription", "()Ljava/lang/String;" },
	{ "checkStats", "()V" },
	{ "setStats", "()V" },
	{ "computeStats", "()Lmindustry/world/meta/Stats;" },
	{ "displayExtra", "(Larc/scene/ui/layout/Table;)V" },
	{ "createIcons", "(Lmindustry/graphics/MultiPacker;)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker$PageType;Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;ZLarc/graphics/Color;II)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;I)V" },
	{ "makeOutline", "(Lmindustry/graphics/MultiPacker;Larc/graphics/g2d/TextureRegion;Ljava/lang/String;Larc/graphics/Color;)V" },
	{ "researchRequirements", "()[Lmindustry/type/ItemStack;" },
	{ "emoji", "()Ljava/lang/String;" },
	{ "emojiChar", "()I" },
	{ "hasEmoji", "()Z" },
	{ "getDependencies", "(Larc/func/Cons;)V" },
	{ "onUnlock", "()V" },
	{ "isHidden", "()Z" },
	{ "showUnlock", "()Z" },
	{ "logicVisible", "()Z" },
	{ "unlock", "()V" },
	{ "quietUnlock", "()V" },
	{ "unlockedNowHost", "()Z" },
	{ "unlockedHost", "()Z" },
	{ "unlockedNow", "()Z" },
	{ "unlocked", "()Z" },
	{ "clearUnlock", "()V" },
	{ "locked", "()Z" },
	{ "create", "()Lmindustry/gen/WeatherState;" },
	{ "create", "(F)Lmindustry/gen/WeatherState;" },
	{ "create", "(FF)Lmindustry/gen/WeatherState;" },
	{ "instance", "()Lmindustry/gen/WeatherState;" },
	{ "isActive", "()Z" },
	{ "remove", "()V" },
	{ "update", "(Lmindustry/gen/WeatherState;)V" },
	{ "updateEffect", "(Lmindustry/gen/WeatherState;)V" },
	{ "drawOver", "(Lmindustry/gen/WeatherState;)V" },
	{ "drawUnder", "(Lmindustry/gen/WeatherState;)V" },
	{ "lambda$updateEffect$0", "(Lmindustry/gen/Unit;)V" },
	{ "lambda$instance$0", "(Lmindustry/gen/WeatherState;)Z" },
};

static jclass innerClasses[] {
	&class_mindustry_type_Weather$WeatherStateComp,
	&class_mindustry_type_Weather$WeatherEntry,
};

static FieldMetadata fields[] {
	{ "rand", &class_arc_math_Rand, (intptr_t) &SF_mindustry_type_Weather_rand, "Larc/math/Rand;", 25 },
	{ "boundMax", &class_float, (intptr_t) &SF_mindustry_type_Weather_boundMax, "F", 26 },
	{ "duration", &class_float, offsetof(mindustry_type_Weather, F_duration), "F", 1 },
	{ "opacityMultiplier", &class_float, offsetof(mindustry_type_Weather, F_opacityMultiplier), "F", 1 },
	{ "attrs", &class_mindustry_world_blocks_Attributes, offsetof(mindustry_type_Weather, F_attrs), "Lmindustry/world/blocks/Attributes;", 1 },
	{ "sound", &class_arc_audio_Sound, offsetof(mindustry_type_Weather, F_sound), "Larc/audio/Sound;", 1 },
	{ "soundVol", &class_float, offsetof(mindustry_type_Weather, F_soundVol), "F", 1 },
	{ "soundVolMin", &class_float, offsetof(mindustry_type_Weather, F_soundVolMin), "F", 1 },
	{ "soundVolOscMag", &class_float, offsetof(mindustry_type_Weather, F_soundVolOscMag), "F", 1 },
	{ "soundVolOscScl", &class_float, offsetof(mindustry_type_Weather, F_soundVolOscScl), "F", 1 },
	{ "hidden", &class_boolean, offsetof(mindustry_type_Weather, F_hidden), "Z", 1 },
	{ "type", &class_arc_func_Prov, offsetof(mindustry_type_Weather, F_type), "Larc/func/Prov;", 1 },
	{ "status", &class_mindustry_type_StatusEffect, offsetof(mindustry_type_Weather, F_status), "Lmindustry/type/StatusEffect;", 1 },
	{ "statusDuration", &class_float, offsetof(mindustry_type_Weather, F_statusDuration), "F", 1 },
	{ "statusAir", &class_boolean, offsetof(mindustry_type_Weather, F_statusAir), "Z", 1 },
	{ "statusGround", &class_boolean, offsetof(mindustry_type_Weather, F_statusGround), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_Weather_java_lang_String_arc_func_Prov, 0, "(Ljava/lang/String;Larc/func/Prov;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_type_Weather_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "create", (intptr_t) M_mindustry_type_Weather_create_R_mindustry_gen_WeatherState, VTABLE_mindustry_type_Weather_create_R_mindustry_gen_WeatherState, "()Lmindustry/gen/WeatherState;", 1 },
	{ "create", (intptr_t) M_mindustry_type_Weather_create_float_R_mindustry_gen_WeatherState, VTABLE_mindustry_type_Weather_create_float_R_mindustry_gen_WeatherState, "(F)Lmindustry/gen/WeatherState;", 1 },
	{ "create", (intptr_t) M_mindustry_type_Weather_create_float_float_R_mindustry_gen_WeatherState, VTABLE_mindustry_type_Weather_create_float_float_R_mindustry_gen_WeatherState, "(FF)Lmindustry/gen/WeatherState;", 1 },
	{ "instance", (intptr_t) M_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState, VTABLE_mindustry_type_Weather_instance_R_mindustry_gen_WeatherState, "()Lmindustry/gen/WeatherState;", 1 },
	{ "isActive", (intptr_t) M_mindustry_type_Weather_isActive_R_boolean, VTABLE_mindustry_type_Weather_isActive_R_boolean, "()Z", 1 },
	{ "remove", (intptr_t) M_mindustry_type_Weather_remove, VTABLE_mindustry_type_Weather_remove, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_type_Weather_update_mindustry_gen_WeatherState, VTABLE_mindustry_type_Weather_update_mindustry_gen_WeatherState, "(Lmindustry/gen/WeatherState;)V", 1 },
	{ "updateEffect", (intptr_t) M_mindustry_type_Weather_updateEffect_mindustry_gen_WeatherState, VTABLE_mindustry_type_Weather_updateEffect_mindustry_gen_WeatherState, "(Lmindustry/gen/WeatherState;)V", 1 },
	{ "drawOver", (intptr_t) M_mindustry_type_Weather_drawOver_mindustry_gen_WeatherState, VTABLE_mindustry_type_Weather_drawOver_mindustry_gen_WeatherState, "(Lmindustry/gen/WeatherState;)V", 1 },
	{ "drawUnder", (intptr_t) M_mindustry_type_Weather_drawUnder_mindustry_gen_WeatherState, VTABLE_mindustry_type_Weather_drawUnder_mindustry_gen_WeatherState, "(Lmindustry/gen/WeatherState;)V", 1 },
	{ "drawParticles", (intptr_t) SM_mindustry_type_Weather_drawParticles_arc_graphics_g2d_TextureRegion_arc_graphics_Color_float_float_float_float_float_float_float_float_float_float_float_float_float_boolean, 0, "(Larc/graphics/g2d/TextureRegion;Larc/graphics/Color;FFFFFFFFFFFFFZ)V", 9 },
	{ "drawRain", (intptr_t) SM_mindustry_type_Weather_drawRain_float_float_float_float_float_float_float_arc_graphics_Color, 0, "(FFFFFFFLarc/graphics/Color;)V", 9 },
	{ "drawSplashes", (intptr_t) SM_mindustry_type_Weather_drawSplashes_Array1_arc_graphics_g2d_TextureRegion_float_float_float_float_float_float_arc_graphics_Color_mindustry_type_Liquid, 0, "([Larc/graphics/g2d/TextureRegion;FFFFFFLarc/graphics/Color;Lmindustry/type/Liquid;)V", 9 },
	{ "drawNoiseLayers", (intptr_t) SM_mindustry_type_Weather_drawNoiseLayers_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_int_float_float_float_float, 0, "(Larc/graphics/Texture;Larc/graphics/Color;FFFFFFIFFFF)V", 9 },
	{ "drawNoise", (intptr_t) SM_mindustry_type_Weather_drawNoise_arc_graphics_Texture_arc_graphics_Color_float_float_float_float_float_float_float, 0, "(Larc/graphics/Texture;Larc/graphics/Color;FFFFFFF)V", 9 },
	{ "isHidden", (intptr_t) M_mindustry_type_Weather_isHidden_R_boolean, VTABLE_mindustry_type_Weather_isHidden_R_boolean, "()Z", 1 },
	{ "getContentType", (intptr_t) M_mindustry_type_Weather_getContentType_R_mindustry_ctype_ContentType, VTABLE_mindustry_type_Weather_getContentType_R_mindustry_ctype_ContentType, "()Lmindustry/ctype/ContentType;", 1 },
	{ "createWeather", (intptr_t) SM_mindustry_type_Weather_createWeather_mindustry_type_Weather_float_float_float_float, 0, "(Lmindustry/type/Weather;FFFF)V", 9 },
	{ "lambda$updateEffect$0", (intptr_t) M_mindustry_type_Weather_lambda$updateEffect$0_mindustry_gen_Unit, VTABLE_mindustry_type_Weather_lambda$updateEffect$0_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 4098 },
	{ "lambda$instance$0", (intptr_t) M_mindustry_type_Weather_lambda$instance$0_mindustry_gen_WeatherState_R_boolean, VTABLE_mindustry_type_Weather_lambda$instance$0_mindustry_gen_WeatherState_R_boolean, "(Lmindustry/gen/WeatherState;)Z", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_type_Weather, 0, "()V", 8 },
};

Class class_mindustry_type_Weather{
		.nativeName = (intptr_t) "mindustry/type/Weather",
		.parentClass = (intptr_t) &class_mindustry_ctype_UnlockableContent,
		.size = sizeof(mindustry_type_Weather),
		.classVtable = (intptr_t) vtable_mindustry_type_Weather,
		.staticInitializer = (intptr_t) clinit_mindustry_type_Weather,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_type_Weather,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 23,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 66,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_type_Weather = registerClass(&class_mindustry_type_Weather);

}
