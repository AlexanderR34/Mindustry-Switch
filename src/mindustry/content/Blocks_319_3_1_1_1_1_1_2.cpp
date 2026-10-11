#include "mindustry/content/Blocks_319_3_1_1_1_1_1_2.h"
#include "mindustry/content/Blocks_319_3_1_1_1_1_1_2.h"
#include "mindustry/content/Blocks_319_3_1_1_1_1_1.h"
#include "mindustry/entities/Effect.h"
#include "java/lang/Object.h"
#include "mindustry/content/Fx.h"
#include "java/lang/String.h"
#include "mindustry/entities/abilities/Ability.h"
#include "arc/graphics/Color.h"
#include "mindustry/entities/abilities/MoveEffectAbility.h"

extern "C" {


void mark_mindustry_content_Blocks$319$3$1$1$1$1$1$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_abilities_MoveEffectAbility(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_Blocks$319$3$1$1$1$1$1$2 *) object;
	if (self->F_this$6)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$6)->clazz)->markFunction)((jobject) self->F_this$6, mark, depth + 1);
}

void clinit_mindustry_content_Blocks$319$3$1$1$1$1$1$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_MoveEffectAbility(ctx);
}

void init_mindustry_content_Blocks$319$3$1$1$1$1$1$2_mindustry_content_Blocks$319$3$1$1$1$1$1(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Blocks$319$3$1$1$1$1$1$2:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Blocks$319$3$1$1$1$1$1$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(5552);
	((mindustry_content_Blocks$319$3$1$1$1$1$1$2 *) NULL_CHECK((frame[0].o)))->F_this$6 = (jref) (frame[1].o);
	init_mindustry_entities_abilities_MoveEffectAbility(ctx, (frame[0].o));
	LINE_NUMBER(5553);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Fx(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Fx_missileTrailSmokeSmall;
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK(sp[0].o))->F_effect = (jref) sp[1].o;
	LINE_NUMBER(5554);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_rotation = (jfloat(180.0f));
	LINE_NUMBER(5555);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(-9.0f));
	LINE_NUMBER(5556);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_arc_graphics_Color_grays_float_R_arc_graphics_Color(ctx, (jfloat(0.6f)));
	sp[2].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, (((jobject) createStringLiteral(ctx, u8"f7e97e"_j))));
	sp[1].o = (jobject)((func_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_lerp_arc_graphics_Color_float_R_arc_graphics_Color])(ctx, sp[1].o, sp[2].o, (jfloat(0.5f)));
	sp[1].o = (jobject)((func_arc_graphics_Color_a_float_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_Color_a_float_R_arc_graphics_Color])(ctx, sp[1].o, (jfloat(0.4f)));
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	LINE_NUMBER(5557);
	((mindustry_entities_abilities_MoveEffectAbility *) NULL_CHECK((frame[0].o)))->F_interval = (jfloat(5.0f));
	LINE_NUMBER(5552);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Blocks$319$3$1$1$1$1$1$2[] {
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
	(void *) M_mindustry_entities_abilities_MoveEffectAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_addStats_arc_scene_ui_layout_Table,
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
	{ "this$6", &class_mindustry_content_Blocks$319$3$1$1$1$1$1, offsetof(mindustry_content_Blocks$319$3$1$1$1$1$1$2, F_this$6), "Lmindustry/content/Blocks$319$3$1$1$1$1$1;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Blocks$319$3$1$1$1$1$1$2_mindustry_content_Blocks$319$3$1$1$1$1$1, 0, "(Lmindustry/content/Blocks$319$3$1$1$1$1$1;)V", 0 },
};

Class class_mindustry_content_Blocks$319$3$1$1$1$1$1$2{
		.nativeName = (intptr_t) "mindustry/content/Blocks$319$3$1$1$1$1$1$2",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_MoveEffectAbility,
		.size = sizeof(mindustry_content_Blocks$319$3$1$1$1$1$1$2),
		.classVtable = (intptr_t) vtable_mindustry_content_Blocks$319$3$1$1$1$1$1$2,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Blocks$319$3$1$1$1$1$1$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Blocks$319$3$1$1$1$1$1$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_Blocks$319$3$1$1$1$1$1$2 = registerClass(&class_mindustry_content_Blocks$319$3$1$1$1$1$1$2);

}

