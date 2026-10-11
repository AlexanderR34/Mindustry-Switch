#include "mindustry/content/UnitTypes_35_3.h"
#include "mindustry/content/UnitTypes_35.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/entities/abilities/SuppressionFieldAbility.h"
#include "mindustry/content/UnitTypes_35_3.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_mindustry_content_UnitTypes$35$3(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_abilities_SuppressionFieldAbility(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_UnitTypes$35$3 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$35$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_SuppressionFieldAbility(ctx);
}

void init_mindustry_content_UnitTypes$35$3_mindustry_content_UnitTypes$35(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$35$3:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$35$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(2481);
	((mindustry_content_UnitTypes$35$3 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_entities_abilities_SuppressionFieldAbility(ctx, (frame[0].o));
	LINE_NUMBER(2482);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_orbRadius = (jfloat(5.0f));
	LINE_NUMBER(2483);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particleSize = (jfloat(3.0f));
	LINE_NUMBER(2484);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(-10.0f));
	LINE_NUMBER(2485);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particles = (10);
	LINE_NUMBER(2486);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = frame[0].o;
	clinit_mindustry_graphics_Pal(ctx);
	sp[3].o = (jobject)SF_mindustry_graphics_Pal_heal;
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK(sp[2].o))->F_effectColor = (jref) sp[3].o;
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK(sp[1].o))->F_particleColor = (jref) sp[3].o;
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[3].o;
	LINE_NUMBER(2481);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$35$3[] {
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
	(void *) M_mindustry_entities_abilities_SuppressionFieldAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_SuppressionFieldAbility_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_SuppressionFieldAbility_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_SuppressionFieldAbility_addStats_arc_scene_ui_layout_Table,
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
	{ "this$0", &class_mindustry_content_UnitTypes$35, offsetof(mindustry_content_UnitTypes$35$3, F_this$0), "Lmindustry/content/UnitTypes$35;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$35$3_mindustry_content_UnitTypes$35, 0, "(Lmindustry/content/UnitTypes$35;)V", 0 },
};

Class class_mindustry_content_UnitTypes$35$3{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$35$3",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_SuppressionFieldAbility,
		.size = sizeof(mindustry_content_UnitTypes$35$3),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$35$3,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$35$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$35$3,
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
static bool registered_mindustry_content_UnitTypes$35$3 = registerClass(&class_mindustry_content_UnitTypes$35$3);

}

