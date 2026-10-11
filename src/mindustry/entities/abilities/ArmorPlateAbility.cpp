#include "mindustry/entities/abilities/ArmorPlateAbility.h"
#include "arc/graphics/Color.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/lang/Runnable.h"
#include "java/lang/reflect/Constructor.h"
#include "arc/graphics/gl/Shader.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/graphics/Shaders_UnitArmorShader.h"
#include "arc/scene/ui/layout/Cell.h"
#include "mindustry/entities/abilities/ArmorPlateAbility_invoke_java_lang_Runnable_1.h"
#include "java/lang/reflect/Method.h"
#include "arc/math/Mathf.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/gen/Unit.h"
#include "arc/scene/ui/layout/Table.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/graphics/Shaders.h"
#include "arc/util/Time.h"
#include "arc/util/Nullable.h"
#include "mindustry/type/UnitType.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "mindustry/entities/abilities/ArmorPlateAbility.h"
#include "java/lang/Object.h"
#include "mindustry/game/Team.h"

extern "C" {


void mark_mindustry_entities_abilities_ArmorPlateAbility(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_entities_abilities_ArmorPlateAbility *) object;
	if (self->F_plateRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plateRegion)->clazz)->markFunction)((jobject) self->F_plateRegion, mark, depth + 1);
	if (self->F_shineRegion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shineRegion)->clazz)->markFunction)((jobject) self->F_shineRegion, mark, depth + 1);
	if (self->F_plateSuffix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_plateSuffix)->clazz)->markFunction)((jobject) self->F_plateSuffix, mark, depth + 1);
	if (self->F_shineSuffix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shineSuffix)->clazz)->markFunction)((jobject) self->F_shineSuffix, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_mindustry_entities_abilities_ArmorPlateAbility(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_Ability(ctx);
}

void init_mindustry_entities_abilities_ArmorPlateAbility(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ArmorPlateAbility:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_entities_abilities_ArmorPlateAbility(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(12);
	init_mindustry_entities_abilities_Ability(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_plateSuffix = (jref) (((jobject) createStringLiteral(ctx, u8"-armor"_j)));
	LINE_NUMBER(16);
	((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_shineSuffix = (jref) (((jobject) createStringLiteral(ctx, u8"-shine"_j)));
	LINE_NUMBER(18);
	((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_color = (jref) (jobject(nullptr));
	LINE_NUMBER(19);
	((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_shineSpeed = (jfloat(1));
	LINE_NUMBER(20);
	((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_z = (jfloat(-1.0f));
	LINE_NUMBER(23);
	((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_drawPlate = (jint(1));
	LINE_NUMBER(25);
	((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_drawShine = (jint(1));
	LINE_NUMBER(27);
	((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_healthMultiplier = (jfloat(0.2f));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ArmorPlateAbility_update_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ArmorPlateAbility:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	M_mindustry_entities_abilities_Ability_update_mindustry_gen_Unit(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(35);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_warmup;
	jint temp1 = (jint)((func_mindustry_gen_Unit_isShooting_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_gen_Unit_isShooting_R_boolean])(ctx, (frame[1].o));
	sp[1].f = temp0;
	sp += 2;
	if (temp1 == 0) goto label_2;
	}
	INST_FCONST(1);
	goto label_3;
label_2:;
	INST_FCONST(0);
label_3:;
	{
	sp -= 3;
	jfloat temp0 = (jfloat)SM_arc_math_Mathf_lerpDelta_float_float_float_R_float(ctx, sp[1].f, sp[2].f, (jfloat(0.1f)));
	((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK(sp[0].o))->F_warmup = temp0;
	LINE_NUMBER(36);
	sp[0].o = frame[1].o;
	((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healthMultiplier = (((jfloat)((mindustry_gen_Unit *) NULL_CHECK(sp[0].o))->F_healthMultiplier) + (((jfloat)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_warmup) * ((jfloat)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_healthMultiplier)));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ArmorPlateAbility_addStats_arc_scene_ui_layout_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ArmorPlateAbility:addStats", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(41);
	M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(42);
	sp[0].o = frame[1].o;
	sp[1].o = frame[0].o;
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"damagereduction"_j));
	sp[3].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp0 = jint(0);
	sp[4].o = (jobject)SM_arc_util_Strings_autoFixed_float_int_R_java_lang_String(ctx, ((-((jfloat)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_healthMultiplier)) * (jfloat(100.0f))), (jint(1)));
	ARRAY_ACCESS(jobject, sp[3].o, temp0) = sp[4].o;
	sp[1].o = (jobject)((func_mindustry_entities_abilities_ArmorPlateAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_entities_abilities_ArmorPlateAbility_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_layout_Table_add_java_lang_CharSequence_R_arc_scene_ui_layout_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ArmorPlateAbility_draw_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ArmorPlateAbility:draw", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(47);
	if (((jint)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_drawPlate) != 0) goto label_1;
	}
	{
	if (((jint)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_drawShine) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(49);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_warmup), (jfloat(1,000000e-03f)), -1)) <= 0) goto label_2;
	}
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_plateRegion;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(51);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[2].o))->F_name;
	sp[3].o = (jobject)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_plateSuffix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[3].o = (jobject)((mindustry_type_UnitType *) NULL_CHECK(sp[3].o))->F_region;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK(sp[0].o))->F_plateRegion = (jref) sp[1].o;
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_atlas;
	sp[2].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_type;
	sp[2].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK(sp[2].o))->F_name;
	sp[3].o = (jobject)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_shineSuffix;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001"_j.string, 2, sp[2].o, sp[3].o);
	sp[3].o = (jobject)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_plateRegion;
	sp[1].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_arc_graphics_g2d_TextureRegion_R_arc_graphics_g2d_TextureRegion])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK(sp[0].o))->F_shineRegion = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(55);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	frame[2].f = temp0;
	LINE_NUMBER(56);
	if ((floatCompare(((jfloat)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_z), (jfloat(0)), -1)) <= 0) goto label_8;
	}
	{
	SM_arc_graphics_g2d_Draw_z_float(ctx, ((jfloat)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_z));
	}
label_8:;
	{
	LINE_NUMBER(58);
	if (((jint)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_drawPlate) == 0) goto label_9;
	}
	{
	LINE_NUMBER(59);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, ((jfloat)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_warmup));
	LINE_NUMBER(60);
	sp[0].o = (jobject)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_plateRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(61);
	SM_arc_graphics_g2d_Draw_alpha_float(ctx, (jfloat(1)));
	}
label_9:;
	{
	LINE_NUMBER(64);
	if (((jint)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_drawShine) == 0) goto label_13;
	}
	{
	LINE_NUMBER(65);
	jfloat temp0 = (jfloat)SM_arc_graphics_g2d_Draw_z_R_float(ctx);
	{ /* InvokeDynamic */
		clinit_mindustry_entities_abilities_ArmorPlateAbility_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_entities_abilities_ArmorPlateAbility_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_entities_abilities_ArmorPlateAbility_invoke_java_lang_Runnable_1);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[0].o = (jobject) proxy;
	}
	SM_arc_graphics_g2d_Draw_draw_float_java_lang_Runnable(ctx, temp0, sp[0].o);
	}
label_13:;
	{
	LINE_NUMBER(79);
	SM_arc_graphics_g2d_Draw_z_float(ctx, (frame[2].f));
	}
label_2:;
	LINE_NUMBER(81);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_entities_abilities_ArmorPlateAbility_lambda$draw$0_mindustry_gen_Unit(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/entities/abilities/ArmorPlateAbility:lambda$draw$0", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_armor;
	sp[1].o = (jobject)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_shineRegion;
	((mindustry_graphics_Shaders$UnitArmorShader *) NULL_CHECK(sp[0].o))->F_region = (jref) sp[1].o;
	LINE_NUMBER(67);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_armor;
	((mindustry_graphics_Shaders$UnitArmorShader *) NULL_CHECK(sp[0].o))->F_progress = ((jfloat)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_warmup);
	LINE_NUMBER(68);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_armor;
	((mindustry_graphics_Shaders$UnitArmorShader *) NULL_CHECK(sp[0].o))->F_time = (((-(clinit_arc_util_Time(ctx), (jfloat)SF_arc_util_Time_time)) / (jfloat(20.0f))) * ((jfloat)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_shineSpeed));
	LINE_NUMBER(70);
	sp[0].o = (jobject)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_team;
	sp[0].o = (jobject)((mindustry_game_Team *) NULL_CHECK(sp[0].o))->F_color;
	sp += 1;
	goto label_5;
	}
label_4:;
	INST_ALOAD(0);
	sp[-1].o = (jobject) ((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK(sp[-1].o))->F_color;
label_5:;
	{
	sp -= 1;
	SM_arc_graphics_g2d_Draw_color_arc_graphics_Color(ctx, sp[0].o);
	LINE_NUMBER(71);
	clinit_mindustry_graphics_Shaders(ctx);
	sp[0].o = (jobject)SF_mindustry_graphics_Shaders_armor;
	SM_arc_graphics_g2d_Draw_shader_arc_graphics_gl_Shader(ctx, sp[0].o);
	LINE_NUMBER(72);
	sp[0].o = (jobject)((mindustry_entities_abilities_ArmorPlateAbility *) NULL_CHECK((frame[0].o)))->F_shineRegion;
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float(ctx, sp[0].o, ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_x), ((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_y), (((jfloat)((mindustry_gen_Unit *) NULL_CHECK((frame[1].o)))->F_rotation) - (jfloat(90.0f))));
	LINE_NUMBER(73);
	SM_arc_graphics_g2d_Draw_shader(ctx);
	LINE_NUMBER(75);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_entities_abilities_ArmorPlateAbility;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field color
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_entities_abilities_ArmorPlateAbility[] {
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
	(void *) M_mindustry_entities_abilities_ArmorPlateAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_ArmorPlateAbility_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_ArmorPlateAbility_addStats_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_entities_abilities_Ability_localized_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_ArmorPlateAbility_lambda$draw$0_mindustry_gen_Unit,
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
	{ "lambda$draw$0", "(Lmindustry/gen/Unit;)V" },
};

static FieldMetadata fields[] {
	{ "plateRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_entities_abilities_ArmorPlateAbility, F_plateRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "shineRegion", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_entities_abilities_ArmorPlateAbility, F_shineRegion), "Larc/graphics/g2d/TextureRegion;", 1 },
	{ "plateSuffix", &class_java_lang_String, offsetof(mindustry_entities_abilities_ArmorPlateAbility, F_plateSuffix), "Ljava/lang/String;", 1 },
	{ "shineSuffix", &class_java_lang_String, offsetof(mindustry_entities_abilities_ArmorPlateAbility, F_shineSuffix), "Ljava/lang/String;", 1 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_entities_abilities_ArmorPlateAbility, F_color), "Larc/graphics/Color;", 1 },
	{ "shineSpeed", &class_float, offsetof(mindustry_entities_abilities_ArmorPlateAbility, F_shineSpeed), "F", 1 },
	{ "z", &class_float, offsetof(mindustry_entities_abilities_ArmorPlateAbility, F_z), "F", 1 },
	{ "drawPlate", &class_boolean, offsetof(mindustry_entities_abilities_ArmorPlateAbility, F_drawPlate), "Z", 1 },
	{ "drawShine", &class_boolean, offsetof(mindustry_entities_abilities_ArmorPlateAbility, F_drawShine), "Z", 1 },
	{ "healthMultiplier", &class_float, offsetof(mindustry_entities_abilities_ArmorPlateAbility, F_healthMultiplier), "F", 1 },
	{ "warmup", &class_float, offsetof(mindustry_entities_abilities_ArmorPlateAbility, F_warmup), "F", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_entities_abilities_ArmorPlateAbility, 0, "()V", 1 },
	{ "update", (intptr_t) M_mindustry_entities_abilities_ArmorPlateAbility_update_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_ArmorPlateAbility_update_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "addStats", (intptr_t) M_mindustry_entities_abilities_ArmorPlateAbility_addStats_arc_scene_ui_layout_Table, VTABLE_mindustry_entities_abilities_ArmorPlateAbility_addStats_arc_scene_ui_layout_Table, "(Larc/scene/ui/layout/Table;)V", 1 },
	{ "draw", (intptr_t) M_mindustry_entities_abilities_ArmorPlateAbility_draw_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_ArmorPlateAbility_draw_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 1 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_entities_abilities_ArmorPlateAbility_lambda$draw$0_mindustry_gen_Unit, VTABLE_mindustry_entities_abilities_ArmorPlateAbility_lambda$draw$0_mindustry_gen_Unit, "(Lmindustry/gen/Unit;)V", 4098 },
};

Class class_mindustry_entities_abilities_ArmorPlateAbility{
		.nativeName = (intptr_t) "mindustry/entities/abilities/ArmorPlateAbility",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_Ability,
		.size = sizeof(mindustry_entities_abilities_ArmorPlateAbility),
		.classVtable = (intptr_t) vtable_mindustry_entities_abilities_ArmorPlateAbility,
		.staticInitializer = (intptr_t) clinit_mindustry_entities_abilities_ArmorPlateAbility,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_entities_abilities_ArmorPlateAbility,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 25,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_entities_abilities_ArmorPlateAbility = registerClass(&class_mindustry_entities_abilities_ArmorPlateAbility);

}
