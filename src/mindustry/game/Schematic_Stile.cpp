#include "mindustry/game/Schematic_Stile.h"
#include "mindustry/game/Schematic_Stile.h"
#include "mindustry/content/Blocks.h"
#include "java/lang/Object.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Schematic.h"

extern "C" {


void mark_mindustry_game_Schematic$Stile(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_Schematic$Stile *) object;
	if (self->F_block)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_block)->clazz)->markFunction)((jobject) self->F_block, mark, depth + 1);
	if (self->F_config)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_config)->clazz)->markFunction)((jobject) self->F_config, mark, depth + 1);
}

void clinit_mindustry_game_Schematic$Stile(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_Schematic$Stile_mindustry_world_Block_int_int_java_lang_Object_byte(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jobject param3, jbyte param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic$Stile:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematic$Stile(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].o = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(132);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(133);
	((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block = (jref) (frame[1].o);
	LINE_NUMBER(134);
	((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_x = (jshort((frame[2].i)));
	LINE_NUMBER(135);
	((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_y = (jshort((frame[3].i)));
	LINE_NUMBER(136);
	((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_config = (jref) (frame[4].o);
	LINE_NUMBER(137);
	((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_rotation = (frame[5].i);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_game_Schematic$Stile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic$Stile:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematic$Stile(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(141);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	((mindustry_game_Schematic$Stile *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematic$Stile_set_mindustry_game_Schematic$Stile_R_mindustry_game_Schematic$Stile(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic$Stile:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(146);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[1].o)))->F_block;
	((mindustry_game_Schematic$Stile *) NULL_CHECK(sp[0].o))->F_block = (jref) sp[1].o;
	LINE_NUMBER(147);
	((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_x = ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[1].o)))->F_x);
	LINE_NUMBER(148);
	((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_y = ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(149);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[1].o)))->F_config;
	((mindustry_game_Schematic$Stile *) NULL_CHECK(sp[0].o))->F_config = (jref) sp[1].o;
	LINE_NUMBER(150);
	((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_rotation = ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[1].o)))->F_rotation);
	LINE_NUMBER(151);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematic$Stile_copy_R_mindustry_game_Schematic$Stile(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematic$Stile:copy", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(155);
	clinit_mindustry_game_Schematic$Stile(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Schematic$Stile);
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_y;
	sp[2].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_config;
	init_mindustry_game_Schematic$Stile_mindustry_world_Block_int_int_java_lang_Object_byte(ctx, sp[0].o, sp[1].o, temp0, temp1, sp[2].o, ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_rotation));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_Schematic$Stile[] {
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
	(void *) M_mindustry_game_Schematic$Stile_set_mindustry_game_Schematic$Stile_R_mindustry_game_Schematic$Stile,
	(void *) M_mindustry_game_Schematic$Stile_copy_R_mindustry_game_Schematic$Stile,
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
	{ "set", "(Lmindustry/game/Schematic$Stile;)Lmindustry/game/Schematic$Stile;" },
	{ "copy", "()Lmindustry/game/Schematic$Stile;" },
};

static FieldMetadata fields[] {
	{ "block", &class_mindustry_world_Block, offsetof(mindustry_game_Schematic$Stile, F_block), "Lmindustry/world/Block;", 1 },
	{ "x", &class_short, offsetof(mindustry_game_Schematic$Stile, F_x), "S", 1 },
	{ "y", &class_short, offsetof(mindustry_game_Schematic$Stile, F_y), "S", 1 },
	{ "config", &class_java_lang_Object, offsetof(mindustry_game_Schematic$Stile, F_config), "Ljava/lang/Object;", 1 },
	{ "rotation", &class_byte, offsetof(mindustry_game_Schematic$Stile, F_rotation), "B", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Schematic$Stile_mindustry_world_Block_int_int_java_lang_Object_byte, 0, "(Lmindustry/world/Block;IILjava/lang/Object;B)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_game_Schematic$Stile, 0, "()V", 1 },
	{ "set", (intptr_t) M_mindustry_game_Schematic$Stile_set_mindustry_game_Schematic$Stile_R_mindustry_game_Schematic$Stile, VTABLE_mindustry_game_Schematic$Stile_set_mindustry_game_Schematic$Stile_R_mindustry_game_Schematic$Stile, "(Lmindustry/game/Schematic$Stile;)Lmindustry/game/Schematic$Stile;", 1 },
	{ "copy", (intptr_t) M_mindustry_game_Schematic$Stile_copy_R_mindustry_game_Schematic$Stile, VTABLE_mindustry_game_Schematic$Stile_copy_R_mindustry_game_Schematic$Stile, "()Lmindustry/game/Schematic$Stile;", 1 },
};

Class class_mindustry_game_Schematic$Stile{
		.nativeName = (intptr_t) "mindustry/game/Schematic$Stile",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Schematic$Stile),
		.classVtable = (intptr_t) vtable_mindustry_game_Schematic$Stile,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Schematic$Stile,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_Schematic$Stile,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_Schematic,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Schematic$Stile = registerClass(&class_mindustry_game_Schematic$Stile);

}

