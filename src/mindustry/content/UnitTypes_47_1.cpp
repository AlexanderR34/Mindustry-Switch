#include "mindustry/content/UnitTypes_47_1.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/content/UnitTypes_47.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/content/UnitTypes_47_1.h"
#include "mindustry/entities/abilities/ShieldArcAbility.h"

extern "C" {


void mark_mindustry_content_UnitTypes$47$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_entities_abilities_ShieldArcAbility(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_content_UnitTypes$47$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$47$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_ShieldArcAbility(ctx);
}

void init_mindustry_content_UnitTypes$47$1_mindustry_content_UnitTypes$47(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$47$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$47$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(3526);
	((mindustry_content_UnitTypes$47$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_entities_abilities_ShieldArcAbility(ctx, (frame[0].o));
	LINE_NUMBER(3527);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_region = (jref) (((jobject) createStringLiteral(ctx, u8"tecta-shield"_j)));
	LINE_NUMBER(3528);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_radius = (jfloat(45.0f));
	LINE_NUMBER(3529);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_angle = (jfloat(82.0f));
	LINE_NUMBER(3530);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_regen = (jfloat(0.75f));
	LINE_NUMBER(3531);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_cooldown = (jfloat(480.0f));
	LINE_NUMBER(3532);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_max = (jfloat(2500.0f));
	LINE_NUMBER(3533);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(-20.0f));
	LINE_NUMBER(3534);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_width = (jfloat(8.0f));
	LINE_NUMBER(3535);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_whenShooting = (jint(0));
	LINE_NUMBER(3536);
	((mindustry_entities_abilities_ShieldArcAbility *) NULL_CHECK((frame[0].o)))->F_chanceDeflect = (jfloat(1));
	LINE_NUMBER(3526);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$47$1[] {
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
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_update_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_draw_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_death_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_created_mindustry_gen_Unit,
	(void *) M_mindustry_entities_abilities_Ability_init_mindustry_type_UnitType,
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_displayBars_mindustry_gen_Unit_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_display_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_addStats_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_Ability_abilityStat_java_lang_String_Array1_java_lang_Object_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_copy_R_mindustry_entities_abilities_Ability,
	(void *) M_mindustry_entities_abilities_Ability_localized_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_getBundle_R_java_lang_String,
	(void *) M_mindustry_entities_abilities_Ability_lambda$display$0_arc_scene_ui_layout_Table,
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_scaledMax_mindustry_gen_Unit_R_float,
	(void *) M_mindustry_entities_abilities_ShieldArcAbility_lambda$displayBars$0_mindustry_gen_Unit_R_float,
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
	{ "scaledMax", "(Lmindustry/gen/Unit;)F" },
	{ "lambda$displayBars$0", "(Lmindustry/gen/Unit;)F" },
};

static FieldMetadata fields[] {
	{ "this$0", &class_mindustry_content_UnitTypes$47, offsetof(mindustry_content_UnitTypes$47$1, F_this$0), "Lmindustry/content/UnitTypes$47;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$47$1_mindustry_content_UnitTypes$47, 0, "(Lmindustry/content/UnitTypes$47;)V", 0 },
};

Class class_mindustry_content_UnitTypes$47$1{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$47$1",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_ShieldArcAbility,
		.size = sizeof(mindustry_content_UnitTypes$47$1),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$47$1,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$47$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$47$1,
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
static bool registered_mindustry_content_UnitTypes$47$1 = registerClass(&class_mindustry_content_UnitTypes$47$1);

}

