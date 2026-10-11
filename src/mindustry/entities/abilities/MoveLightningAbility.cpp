#include "mindustry/entities/abilities/MoveLightningAbility.h"
#include "arc/math/geom/Vec2.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "arc/math/Angles.h"
#include "java/lang/Float.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/entities/Effect.h"
#include "mindustry/entities/abilities/MoveLightningAbility.h"
#include "java/lang/String.h"
#include "mindustry/content/Fx.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/gen/Entityc.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/ui/layout/Cell.h"
#include "java/lang/reflect/Method.h"
#include "arc/graphics/Blending.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "mindustry/gen/Sounds.h"
#include "mindustry/entities/Lightning.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Bullet.h"
#include "arc/audio/Sound.h"
#include "mindustry/game/Team.h"
#include "mindustry/entities/bullet/BulletType.h"

extern "C" {


void mark_mindustry_entities_abilities_MoveLightningAbility(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_abilities_Ability(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_entities_abilities_MoveLightningAbility *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_heatRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_heatRegion)->clazz)->markFunction)((jobject) self->F_heatRegion, mark, depth + 1);
	if (self->F_bullet)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_bullet)->clazz)->markFunction)((jobject) self->F_bullet, mark, depth + 1);
	if (self->F_shootEffect)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shootEffect)->clazz)->markFunction)((jobject) self->F_shootEffect, mark, depth + 1);
	if (self->F_shootSound)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shootSound)->clazz)->markFunction)((jobject) self->F_shootSound, mark, depth + 1);
}

void clinit_mindustry_entities_abilities_MoveLightningAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
}

void init_mindustry_entities_abilities_MoveLightningAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/MoveLightningAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_MoveLightningAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(47);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat(35.0f));
	LINE_NUMBER(21);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_chance = (jfloat(0.15f));
	LINE_NUMBER(23);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_length = (12);
	LINE_NUMBER(25);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_minSpeed = (jfloat(0.8f));
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_maxSpeed = (jfloat(1.2f));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"a9d8ff"_j))));
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(29);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(31);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(33);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_alternate = (jint(1));
	LINE_NUMBER(35);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_heatRegion = (jref) (((jobject) createStringLiteral(ctx, u8"error"_j)));
	LINE_NUMBER(39);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_bulletAngle = (jfloat(0));
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_bulletSpread = (jfloat(0));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_sparkShoot;
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootArc;
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(45);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_side = (jfloat(1));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_abilities_MoveLightningAbility_float_int_float_float_float_float_arc_graphics_Color_java_lang_String(jcontext ctx, jobject self, jfloat param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6, jobject param7) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/MoveLightningAbility:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_MoveLightningAbility(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].o = param6;
	frame[8].o = param7;
	{
	LINE_NUMBER(49);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat(35.0f));
	LINE_NUMBER(21);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_chance = (jfloat(0.15f));
	LINE_NUMBER(23);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_length = (12);
	LINE_NUMBER(25);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_minSpeed = (jfloat(0.8f));
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_maxSpeed = (jfloat(1.2f));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"a9d8ff"_j))));
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(29);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(31);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(33);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_alternate = (jint(1));
	LINE_NUMBER(35);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_heatRegion = (jref) (((jobject) createStringLiteral(ctx, u8"error"_j)));
	LINE_NUMBER(39);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_bulletAngle = (jfloat(0));
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_bulletSpread = (jfloat(0));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_sparkShoot;
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootArc;
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(45);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_side = (jfloat(1));
	LINE_NUMBER(50);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_damage = (frame[1].f);
	LINE_NUMBER(51);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_length = (frame[2].i);
	LINE_NUMBER(52);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_chance = (frame[3].f);
	LINE_NUMBER(53);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_y = (frame[4].f);
	LINE_NUMBER(54);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_minSpeed = (frame[5].f);
	LINE_NUMBER(55);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_maxSpeed = (frame[6].f);
	LINE_NUMBER(56);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[7].o);
	LINE_NUMBER(57);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_heatRegion = (jref) (frame[8].o);
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_entities_abilities_MoveLightningAbility_float_int_float_float_float_float_arc_graphics_Color(jcontext ctx, jobject self, jfloat param0, jint param1, jfloat param2, jfloat param3, jfloat param4, jfloat param5, jobject param6) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/MoveLightningAbility:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_MoveLightningAbility(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	frame[2].i = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].o = param6;
	{
	LINE_NUMBER(60);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(19);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_damage = (jfloat(35.0f));
	LINE_NUMBER(21);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_chance = (jfloat(0.15f));
	LINE_NUMBER(23);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_length = (12);
	LINE_NUMBER(25);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_minSpeed = (jfloat(0.8f));
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_maxSpeed = (jfloat(1.2f));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"a9d8ff"_j))));
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(29);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(0));
	LINE_NUMBER(31);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_x = (jfloat(0));
	LINE_NUMBER(33);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_alternate = (jint(1));
	LINE_NUMBER(35);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_heatRegion = (jref) (((jobject) createStringLiteral(ctx, u8"error"_j)));
	LINE_NUMBER(39);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_bulletAngle = (jfloat(0));
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_bulletSpread = (jfloat(0));
	LINE_NUMBER(41);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_sparkShoot;
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK(sp[0].o))->F_shootEffect = (jref) sp[1].o;
	LINE_NUMBER(43);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Sounds(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Sounds_shootArc;
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK(sp[0].o))->F_shootSound = (jref) sp[1].o;
	LINE_NUMBER(45);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_side = (jfloat(1));
	LINE_NUMBER(61);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_damage = (frame[1].f);
	LINE_NUMBER(62);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_length = (frame[2].i);
	LINE_NUMBER(63);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_chance = (frame[3].f);
	LINE_NUMBER(64);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_y = (frame[4].f);
	LINE_NUMBER(65);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_minSpeed = (frame[5].f);
	LINE_NUMBER(66);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_maxSpeed = (frame[6].f);
	LINE_NUMBER(67);
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[7].o);
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_MoveLightningAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/MoveLightningAbility:addStats", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(72);
	M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(73);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"minspeed"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_minSpeed) * (jfloat(60.0f))) / (jfloat(8.0f))), (jint(2)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_MoveLightningAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_MoveLightningAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(74);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_scene_ui_layout_Table_row_R_arc_scene_ui_layout_Table])(ctx, (frame[1].o));
	LINE_NUMBER(75);
	sp[0].o = frame[1].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bullet.damage"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp1 = jint(0);
	sp[4].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, ((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_damage));
	ARRAY_ACCESS(jobject, sp[3].o, temp1) = sp[4].o;
	sp[1].o = (jobject)((func_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_format_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_MoveLightningAbility_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/MoveLightningAbility:update", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(80);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2])(ctx, (frame[1].o));
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((temp0 - ((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_minSpeed)) / (((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_maxSpeed) - ((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_minSpeed))));
	frame[2].f = temp1;
	LINE_NUMBER(81);
	jint temp2 = (jint)SM_arc_math_Mathf_chance_double_R_boolean(ctx, (jdouble((((clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_delta) * ((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_chance)) * (frame[2].f)))));
	if (temp2 == 0) goto label_2;
	}
	{
	LINE_NUMBER(82);
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Angles_trnsx_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), ((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_side)));
	frame[3].f = (temp0 + temp1);
	jfloat temp2 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp3 = (jfloat)SM_arc_math_Angles_trnsy_float_float_float_R_float(ctx, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), ((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_y), (((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_x) * ((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_side)));
	frame[4].f = (temp2 + temp3);
	LINE_NUMBER(84);
	sp[0].o = (jobject)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_shootEffect;
	jfloat temp4 = frame[3].f;
	jfloat temp5 = frame[4].f;
	jfloat temp6 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation;
	sp[1].o = (jobject)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_color;
	jobject temp7 = sp[1].o;
	sp[1].f = temp4;
	sp[2].f = temp5;
	sp[3].f = temp6;
	sp[4].o = temp7;
	sp += 5;
	if (((jint)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_parentizeEffects) == 0) goto label_6;
	}
	INST_ALOAD(1);
	goto label_7;
label_6:;
	INST_ACONST_NULL();
label_7:;
	{
	sp -= 6;
	((func_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_Effect_at_float_float_float_arc_graphics_Color_java_lang_Object])(ctx, sp[0].o, sp[1].f, sp[2].f, sp[3].f, sp[4].o, sp[5].o);
	LINE_NUMBER(85);
	sp[0].o = (jobject)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_shootSound;
	jint temp0 = (jint)((func_arc_audio_Sound_at_float_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_audio_Sound_at_float_float_R_int])(ctx, sp[0].o, (frame[3].f), (frame[4].f));
	LINE_NUMBER(87);
	if (((jint)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_length) <= 0) goto label_10;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[1].o = (jobject)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_color;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_damage;
	jfloat temp1 = frame[3].f;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_vel;
	jfloat temp2 = temp1 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_x);
	jfloat temp3 = frame[4].f;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_vel;
	SM_mindustry_entities_Lightning_create_mindustry_game_Team_arc_graphics_Color_float_float_float_float_int(ctx, sp[0].o, sp[1].o, temp0, temp2, (temp3 + ((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK(sp[2].o))->F_y)), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation), ((jint)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_length));
	}
label_10:;
	{
	LINE_NUMBER(91);
	sp[0].o = (jobject)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_bullet;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_bullet;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) + ((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_bulletAngle);
	jfloat temp3 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_bulletSpread));
	sp[0].o = (jobject)((func_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_entities_bullet_BulletType_create_mindustry_gen_Entityc_mindustry_game_Team_float_float_float_R_mindustry_gen_Bullet])(ctx, sp[0].o, sp[1].o, sp[2].o, temp0, temp1, (temp2 + temp3));
	}
label_12:;
	{
	LINE_NUMBER(95);
	if (((jint)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_alternate) == 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK(sp[0].o))->F_side = (((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK(sp[0].o))->F_side) * (jfloat(-1.0f)));
	}
label_2:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_MoveLightningAbility_draw_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/MoveLightningAbility:draw", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_vel_R_arc_math_geom_Vec2])(ctx, (frame[1].o));
	jfloat temp0 = (jfloat)((func_arc_math_geom_Vec2_len_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Vec2_len_R_float])(ctx, sp[0].o);
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_clamp_float_R_float(ctx, ((temp0 - ((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_minSpeed)) / (((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_maxSpeed) - ((jfloat)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_minSpeed))));
	frame[2].f = temp1;
	LINE_NUMBER(102);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	sp[1].o = (jobject)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_heatRegion;
	sp[0].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(103);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_atlas;
	jint temp2 = (jint)((func_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_isFound_arc_graphics_g2d_TextureRegion_R_boolean])(ctx, sp[0].o, (frame[3].o));
	if (temp2 == 0) goto label_3;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(1,000000e-05f)), -1)) <= 0) goto label_3;
	}
	{
	LINE_NUMBER(104);
	sp[0].o = (jobject)((mindustry_entities_abilities_MoveLightningAbility *) NULL_CHECK((frame[0].o)))->F_color;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(105);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((frame[2].f) / (jfloat(2))));
	LINE_NUMBER(106);
	clinit_arc_graphics_Blending(ctx);
	sp[0].o = (jobject)SF_arc_graphics_Blending_additive;
	SM_arc_graphics_g2d_Draw_blend_arc_graphics_Blending(ctx, sp[0].o);
	LINE_NUMBER(107);
	sp[0].o = frame[3].o;
	jfloat temp0 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x;
	jfloat temp1 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((frame[2].f) / (jfloat(2))));
	jfloat temp2 = temp0 + temp1;
	jfloat temp3 = (jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y;
	jfloat temp4 = (jfloat)SM_arc_math_Mathf_range_float_R_float(ctx, ((frame[2].f) / (jfloat(2))));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, temp2, (temp3 + temp4), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(108);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	}
label_3:;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_abilities_MoveLightningAbility;
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

	{ // Field bullet
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[10]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_abilities_MoveLightningAbility[] {
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
	(void *) M_mindustry_entities_abilities_MoveLightningAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_MoveLightningAbility_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_MoveLightningAbility_addStats_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_entities_abilities_Ability_localized_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table,
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
	{ "update", "(Lmindustry/gen/Unit;)V" },
	{ "draw", "(Lmindustry/gen/Unit;)V" },
	{ "death", "(Lmindustry/gen/Unit;)V" },
	{ "created", "(Lmindustry/gen/Unit;)V" },
	{ "init", "(Lmindustry/type/UnitType;)V" },
	{ "displayBars", "(Lmindustry/gen/Unit;Larc/scene/ui/layout/Table;)V" },
	{ "display", "(Larc/scene/ui/layout/Table;)V" },
	{ "addStats", "(Larc/scene/ui/layout/Table;)V" },
	{ "abilityStat", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" },
	{ "copy", "()Lmindustry/entities/abilities/Ability;" },
	{ "localized", "()Ljava/lang/String;" },
	{ "getBundle", "()Ljava/lang/String;" },
	{ "lambda$display$0", "(Larc/scene/ui/layout/Table;)V" },
};

static FieldMetadata fields[] {
	{ "damage", &class_float, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_damage), "F", 1 },
	{ "chance", &class_float, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_chance), "F", 1 },
	{ "length", &class_int, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_length), "I", 1 },
	{ "minSpeed", &class_float, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_minSpeed), "F", 1 },
	{ "maxSpeed", &class_float, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_maxSpeed), "F", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_color), "Larc/graphics/Color;", 1 },
	{ "y", &class_float, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_y), "F", 1 },
	{ "x", &class_float, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_x), "F", 1 },
	{ "alternate", &class_boolean, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_alternate), "Z", 1 },
	{ "heatRegion", &class_java_lang_String, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_heatRegion), "Ljava/lang/String;", 1 },
	{ "bullet", &class_mindustry_entities_bullet_BulletType, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_bullet), "Lmindustry/entities/bullet/BulletType;", 1 },
	{ "bulletAngle", &class_float, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_bulletAngle), "F", 1 },
	{ "bulletSpread", &class_float, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_bulletSpread), "F", 1 },
	{ "shootEffect", &class_mindustry_entities_Effect, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_shootEffect), "Lmindustry/entities/Effect;", 1 },
	{ "parentizeEffects", &class_boolean, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_parentizeEffects), "Z", 1 },
	{ "shootSound", &class_arc_audio_Sound, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_shootSound), "Larc/audio/Sound;", 1 },
	{ "side", &class_float, offsetof(mindustry_entities_abilities_MoveLightningAbility, F_side), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_MoveLightningAbility, 0, "()V", 0 },
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_MoveLightningAbility_float_int_float_float_float_float_arc_graphics_Color_java_lang_String, 0, "(FIFFFFLarc/graphics/Color;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_MoveLightningAbility_float_int_float_float_float_float_arc_graphics_Color, 0, "(FIFFFFLarc/graphics/Color;)V", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_MoveLightningAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_MoveLightningAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_MoveLightningAbility_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_MoveLightningAbility_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_abilities_MoveLightningAbility_draw_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_MoveLightningAbility_draw_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
};

Class class_mindustry_entities_abilities_MoveLightningAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/MoveLightningAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_MoveLightningAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_MoveLightningAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_MoveLightningAbility,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_MoveLightningAbility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_MoveLightningAbility = registerClass(&class_mindustry_entities_abilities_MoveLightningAbility);

}
