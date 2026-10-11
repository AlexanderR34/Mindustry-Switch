#include "mindustry/game/Waves_35.h"
#include "java/lang/Object.h"
#include "mindustry/game/Waves_35.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/SpawnGroup.h"

extern "C" {


void mark_mindustry_game_Waves$35(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_game_SpawnGroup(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_Waves$35 *) object;
}

void clinit_mindustry_game_Waves$35(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_SpawnGroup(ctx);
}

void init_mindustry_game_Waves$35_mindustry_type_UnitType_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves$35:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Waves$35(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(426);
	((mindustry_game_Waves$35 *) NULL_CHECK((frame[0].o)))->F_val$wave = (frame[2].i);
	init_mindustry_game_SpawnGroup_mindustry_type_UnitType(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(427);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitAmount = (jint(1));
	LINE_NUMBER(428);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin = ((jint)((mindustry_game_Waves$35 *) NULL_CHECK((frame[0].o)))->F_val$wave);
	LINE_NUMBER(429);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_end = ((jint)((mindustry_game_Waves$35 *) NULL_CHECK((frame[0].o)))->F_val$wave);
	LINE_NUMBER(430);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_max = (16);
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Waves$35[] {
	(void *) M_mindustry_game_SpawnGroup_hashCode_R_int,
	(void *) M_mindustry_game_SpawnGroup_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_SpawnGroup_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_game_SpawnGroup_write_arc_util_serialization_Json,
	(void *) M_mindustry_game_SpawnGroup_read_arc_util_serialization_Json_arc_util_serialization_JsonValue,
	(void *) M_mindustry_game_SpawnGroup_canSpawn_int_R_boolean,
	(void *) M_mindustry_game_SpawnGroup_getSpawned_int_R_int,
	(void *) M_mindustry_game_SpawnGroup_getShield_int_R_float,
	(void *) M_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_float_float_float_int_arc_func_Cons_R_mindustry_gen_Unit,
	(void *) M_mindustry_game_SpawnGroup_createUnit_mindustry_game_Team_int_R_mindustry_gen_Unit,
	(void *) M_mindustry_game_SpawnGroup_copy_R_mindustry_game_SpawnGroup,
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
	{ "write", "(Larc/util/serialization/Json;)V" },
	{ "read", "(Larc/util/serialization/Json;Larc/util/serialization/JsonValue;)V" },
	{ "canSpawn", "(I)Z" },
	{ "getSpawned", "(I)I" },
	{ "getShield", "(I)F" },
	{ "createUnit", "(Lmindustry/game/Team;FFFILarc/func/Cons;)Lmindustry/gen/Unit;" },
	{ "createUnit", "(Lmindustry/game/Team;I)Lmindustry/gen/Unit;" },
	{ "copy", "()Lmindustry/game/SpawnGroup;" },
};

static FieldMetadata fields[] {
	{ "val$wave", &class_int, offsetof(mindustry_game_Waves$35, F_val$wave), "I", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Waves$35_mindustry_type_UnitType_int, 0, "(Lmindustry/type/UnitType;I)V", 0 },
};

Class class_mindustry_game_Waves$35{
		.nativeName = (intptr_t) "mindustry/game/Waves$35",
		.parentClass = (intptr_t) &class_mindustry_game_SpawnGroup,
		.size = sizeof(mindustry_game_Waves$35),
		.classVtable = (intptr_t) vtable_mindustry_game_Waves$35,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Waves$35,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Waves$35,
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
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_game_Waves$35 = registerClass(&class_mindustry_game_Waves$35);

}

