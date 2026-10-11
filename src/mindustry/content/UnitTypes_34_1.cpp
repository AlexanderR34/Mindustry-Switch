#include "mindustry/content/UnitTypes_34_1.h"
#include "mindustry/content/UnitTypes_34.h"
#include "mindustry/entities/abilities/EnergyFieldAbility.h"
#include "java/lang/Object.h"
#include "mindustry/content/UnitTypes_34_1.h"
#include "mindustry/entities/abilities/Ability.h"

extern "C" {


void mark_mindustry_content_UnitTypes$34$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_abilities_EnergyFieldAbility(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_UnitTypes$34$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$34$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_EnergyFieldAbility(ctx);
}

void init_mindustry_content_UnitTypes$34$1_mindustry_content_UnitTypes$34_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$34$1:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$34$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(2300);
	((mindustry_content_UnitTypes$34$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_entities_abilities_EnergyFieldAbility_float_float_float(ctx, (frame[0].o), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(2301);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_statusDuration = (jfloat(360.0f));
	LINE_NUMBER(2302);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_maxTargets = (25);
	LINE_NUMBER(2303);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_healPercent = (jfloat(1.5f));
	LINE_NUMBER(2304);
	((mindustry_entities_abilities_EnergyFieldAbility *) NULL_CHECK((frame[0].o)))->F_sameTypeHealMult = (jfloat(0.5f));
	LINE_NUMBER(2300);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$34$1[] {
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
	(void *) M_mindustry_entities_abilities_EnergyFieldAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_EnergyFieldAbility_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_EnergyFieldAbility_addStats_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_entities_abilities_Ability_localized_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_EnergyFieldAbility_lambda$update$0_mindustry_gen_Unit_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_EnergyFieldAbility_lambda$addStats$0_arc_scene_ui_Label,
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
	{ "lambda$update$0", "(Lmindustry/gen/Unit;Lmindustry/gen/Unit;)V" },
	{ "lambda$addStats$0", "(Larc/scene/ui/Label;)V" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_content_UnitTypes$34, offsetof(mindustry_content_UnitTypes$34$1, F_this$0), "Lmindustry/content/UnitTypes$34;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$34$1_mindustry_content_UnitTypes$34_float_float_float, 0, "(Lmindustry/content/UnitTypes$34;FFF)V", 0 },
};

Class class_mindustry_content_UnitTypes$34$1{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$34$1",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_EnergyFieldAbility,
		.size = sizeof(mindustry_content_UnitTypes$34$1),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$34$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$34$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$34$1,
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
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$34$1 = registerClass(&class_mindustry_content_UnitTypes$34$1);

}

