#include "mindustry/type/unit/NeoplasmUnitType_2.h"
#include "mindustry/entities/abilities/LiquidExplodeAbility.h"
#include "java/lang/Object.h"
#include "mindustry/type/unit/NeoplasmUnitType_2.h"
#include "mindustry/type/Liquid.h"
#include "mindustry/type/unit/NeoplasmUnitType.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/content/Liquids.h"

extern "C" {


void mark_mindustry_type_unit_NeoplasmUnitType$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_abilities_LiquidExplodeAbility(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_type_unit_NeoplasmUnitType$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_type_unit_NeoplasmUnitType$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_LiquidExplodeAbility(ctx);
}

void init_mindustry_type_unit_NeoplasmUnitType$2_mindustry_type_unit_NeoplasmUnitType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/type/unit/NeoplasmUnitType$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_type_unit_NeoplasmUnitType$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(25);
	((mindustry_type_unit_NeoplasmUnitType$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_entities_abilities_LiquidExplodeAbility(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Liquids(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Liquids_neoplasm;
	((mindustry_entities_abilities_LiquidExplodeAbility *) NULL_CHECK(sp[0].o))->F_liquid = (jref) sp[1].o;
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_type_unit_NeoplasmUnitType$2[] {
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
	(void *) M_mindustry_entities_abilities_Ability_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_LiquidExplodeAbility_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_Ability_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_LiquidExplodeAbility_addStats_arc_scene_ui_layout_Table,
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
	{ "this$0", &class_mindustry_type_unit_NeoplasmUnitType, offsetof(mindustry_type_unit_NeoplasmUnitType$2, F_this$0), "Lmindustry/type/unit/NeoplasmUnitType;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_type_unit_NeoplasmUnitType$2_mindustry_type_unit_NeoplasmUnitType, 0, "(Lmindustry/type/unit/NeoplasmUnitType;)V", 0 },
};

Class class_mindustry_type_unit_NeoplasmUnitType$2{
		.nativeName = (intptr_t) "mindustry/type/unit/NeoplasmUnitType$2",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_LiquidExplodeAbility,
		.size = sizeof(mindustry_type_unit_NeoplasmUnitType$2),
		.classVtable = (intptr_t) vtable_mindustry_type_unit_NeoplasmUnitType$2,
		.staticInitializer = (intptr_t) clinit_mindustry_type_unit_NeoplasmUnitType$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_type_unit_NeoplasmUnitType$2,
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
static bool registered_mindustry_type_unit_NeoplasmUnitType$2 = registerClass(&class_mindustry_type_unit_NeoplasmUnitType$2);

}

