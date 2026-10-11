#include "mindustry/content/UnitTypes_53_2.h"
#include "java/lang/Object.h"
#include "mindustry/entities/abilities/Ability.h"
#include "mindustry/content/UnitTypes_53_2.h"
#include "mindustry/entities/abilities/SuppressionFieldAbility.h"
#include "mindustry/content/UnitTypes_53.h"

extern "C" {


void mark_mindustry_content_UnitTypes$53$2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_content_UnitTypes$53$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_content_UnitTypes$53$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_entities_abilities_SuppressionFieldAbility(ctx);
}

void init_mindustry_content_UnitTypes$53$2_mindustry_content_UnitTypes$53_float_float_int_int(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/UnitTypes$53$2:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_UnitTypes$53$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(4183);
	((mindustry_content_UnitTypes$53$2 *) NULL_CHECK((frame[0].o)))->F_val$orbRad = (frame[2].f);
	((mindustry_content_UnitTypes$53$2 *) NULL_CHECK((frame[0].o)))->F_val$partRad = (frame[3].f);
	((mindustry_content_UnitTypes$53$2 *) NULL_CHECK((frame[0].o)))->F_val$i = (frame[4].i);
	((mindustry_content_UnitTypes$53$2 *) NULL_CHECK((frame[0].o)))->F_val$parts = (frame[5].i);
	((mindustry_content_UnitTypes$53$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_entities_abilities_SuppressionFieldAbility(ctx, (frame[0].o));
	LINE_NUMBER(4184);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_orbRadius = ((jfloat)((mindustry_content_UnitTypes$53$2 *) NULL_CHECK((frame[0].o)))->F_val$orbRad);
	LINE_NUMBER(4185);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particleSize = ((jfloat)((mindustry_content_UnitTypes$53$2 *) NULL_CHECK((frame[0].o)))->F_val$partRad);
	LINE_NUMBER(4186);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_y = (jfloat(-8.0f));
	LINE_NUMBER(4187);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_x = (((jfloat(43.0f)) * (jfloat(((jint)((mindustry_content_UnitTypes$53$2 *) NULL_CHECK((frame[0].o)))->F_val$i)))) / (jfloat(4.0f)));
	LINE_NUMBER(4188);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_particles = ((jint)((mindustry_content_UnitTypes$53$2 *) NULL_CHECK((frame[0].o)))->F_val$parts);
	LINE_NUMBER(4190);
	((mindustry_entities_abilities_SuppressionFieldAbility *) NULL_CHECK((frame[0].o)))->F_active = (jint(0));
	LINE_NUMBER(4183);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_UnitTypes$53$2[] {
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
	{ "val$orbRad", &class_float, offsetof(mindustry_content_UnitTypes$53$2, F_val$orbRad), "F", 4112 },
	{ "val$partRad", &class_float, offsetof(mindustry_content_UnitTypes$53$2, F_val$partRad), "F", 4112 },
	{ "val$i", &class_int, offsetof(mindustry_content_UnitTypes$53$2, F_val$i), "I", 4112 },
	{ "val$parts", &class_int, offsetof(mindustry_content_UnitTypes$53$2, F_val$parts), "I", 4112 },
	{ "this$0", &class_mindustry_content_UnitTypes$53, offsetof(mindustry_content_UnitTypes$53$2, F_this$0), "Lmindustry/content/UnitTypes$53;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_UnitTypes$53$2_mindustry_content_UnitTypes$53_float_float_int_int, 0, "(Lmindustry/content/UnitTypes$53;FFII)V", 0 },
};

Class class_mindustry_content_UnitTypes$53$2{
		.nativeName = (intptr_t) "mindustry/content/UnitTypes$53$2",
		.parentClass = (intptr_t) &class_mindustry_entities_abilities_SuppressionFieldAbility,
		.size = sizeof(mindustry_content_UnitTypes$53$2),
		.classVtable = (intptr_t) vtable_mindustry_content_UnitTypes$53$2,
		.staticInitializer = (intptr_t) clinit_mindustry_content_UnitTypes$53$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_UnitTypes$53$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 24,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_content_UnitTypes$53$2 = registerClass(&class_mindustry_content_UnitTypes$53$2);

}

