#include "mindustry/game/Teams_BlockPlan.h"
#include "mindustry/game/Teams_BlockPlan.h"
#include "java/lang/Object.h"
#include "mindustry/game/Teams.h"
#include "mindustry/world/Block.h"
#include "java/lang/String.h"

extern "C" {


void mark_mindustry_game_Teams$BlockPlan(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_game_Teams$BlockPlan *) object;
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_config)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_config)->clazz)->markFunction)((jobject) self->F_config, mark, depth + 1);
}

void clinit_mindustry_game_Teams$BlockPlan(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_Teams$BlockPlan_int_int_short_mindustry_world_Block_java_lang_Object(jcontext ctx, jobject self, jint param0, jint param1, jshort param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$BlockPlan:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Teams$BlockPlan(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(521);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(522);
	((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[0].o)))->F_x = (jshort((frame[1].i)));
	LINE_NUMBER(523);
	((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[0].o)))->F_y = (jshort((frame[2].i)));
	LINE_NUMBER(524);
	((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[3].i);
	LINE_NUMBER(525);
	((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[4].o);
	LINE_NUMBER(526);
	((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[0].o)))->F_config = (jref) (frame[5].o);
	LINE_NUMBER(527);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Teams$BlockPlan_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Teams$BlockPlan:toString", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(531);
	jint temp0 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[0].o)))->F_y;
	jint temp2 = (jint)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[0].o)))->F_rotation;
	sp[0].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_game_Teams$BlockPlan *) NULL_CHECK((frame[0].o)))->F_config;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"BlockPlan{x=\u0001, y=\u0001, rotation=\u0001, block=\u0001, config=\u0001}"_j.string, 5, boxShort(ctx, temp0), boxShort(ctx, temp1), boxShort(ctx, temp2), sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Teams$BlockPlan[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_Teams$BlockPlan_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
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
};

static FieldMetadata fields[] {
	{ "x", &class_short, offsetof(mindustry_game_Teams$BlockPlan, F_x), "S", 17 },
	{ "y", &class_short, offsetof(mindustry_game_Teams$BlockPlan, F_y), "S", 17 },
	{ "rotation", &class_short, offsetof(mindustry_game_Teams$BlockPlan, F_rotation), "S", 17 },
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_game_Teams$BlockPlan, F_block), "Lmindustry/world/Block;", 17 },
	{ "config", &class_java_lang_Object, offsetof(mindustry_game_Teams$BlockPlan, F_config), "Ljava/lang/Object;", 17 },
	{ "removed", &class_boolean, offsetof(mindustry_game_Teams$BlockPlan, F_removed), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Teams$BlockPlan_int_int_short_mindustry_world_Block_java_lang_Object, 0, "(IISLmindustry/world/Block;Ljava/lang/Object;)V", 1 },
	{ "toString", (intptr_t) M_mindustry_game_Teams$BlockPlan_toString_R_java_lang_String, VTABLE_mindustry_game_Teams$BlockPlan_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_game_Teams$BlockPlan{
		.nativeName = (intptr_t) "mindustry/game/Teams$BlockPlan",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Teams$BlockPlan),
		.classVtable = (intptr_t) vtable_mindustry_game_Teams$BlockPlan,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Teams$BlockPlan,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Teams$BlockPlan,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_Teams,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Teams$BlockPlan = registerClass(&class_mindustry_game_Teams$BlockPlan);

}

