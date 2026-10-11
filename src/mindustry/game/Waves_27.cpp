#include "mindustry/game/Waves_27.h"
#include "java/lang/Object.h"
#include "mindustry/game/Waves_27.h"
#include "mindustry/game/Waves.h"
#include "mindustry/type/UnitType.h"
#include "mindustry/game/SpawnGroup.h"

extern "C" {


void mark_mindustry_game_Waves$27(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Waves$27 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_game_Waves$27(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_game_SpawnGroup(ctx);
}

void init_mindustry_game_Waves$27_mindustry_game_Waves_mindustry_type_UnitType(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Waves$27:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Waves$27(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(236);
	((mindustry_game_Waves$27 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_game_SpawnGroup_mindustry_type_UnitType(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(237);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_begin = (90);
	LINE_NUMBER(238);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitAmount = (jint(2));
	LINE_NUMBER(239);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_unitScaling = (jfloat(3.0f));
	LINE_NUMBER(240);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_spacing = (jint(4));
	LINE_NUMBER(241);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shields = (jfloat(40.0f));
	LINE_NUMBER(242);
	((mindustry_game_SpawnGroup *) NULL_CHECK((frame[0].o)))->F_shieldScaling = (jfloat(30.0f));
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Waves$27[] {
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
	{ "this$0", &class_mindustry_game_Waves, offsetof(mindustry_game_Waves$27, F_this$0), "Lmindustry/game/Waves;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Waves$27_mindustry_game_Waves_mindustry_type_UnitType, 0, "(Lmindustry/game/Waves;Lmindustry/type/UnitType;)V", 0 },
};

Class class_mindustry_game_Waves$27{
		.nativeName = (intptr_t) "mindustry/game/Waves$27",
		.parentClass = (intptr_t) &class_mindustry_game_SpawnGroup,
		.size = sizeof(mindustry_game_Waves$27),
		.classVtable = (intptr_t) vtable_mindustry_game_Waves$27,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Waves$27,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Waves$27,
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
static bool registered_mindustry_game_Waves$27 = registerClass(&class_mindustry_game_Waves$27);

}

