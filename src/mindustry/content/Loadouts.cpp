#include "mindustry/content/Loadouts.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/game/Schematic.h"
#include "mindustry/content/Loadouts.h"

extern "C" {

jobject SF_mindustry_content_Loadouts_basicShard;
jobject SF_mindustry_content_Loadouts_basicFoundation;
jobject SF_mindustry_content_Loadouts_basicNucleus;
jobject SF_mindustry_content_Loadouts_basicBastion;

void mark_mindustry_content_Loadouts(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_content_Loadouts_basicShard)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Loadouts_basicShard)->clazz)->markFunction)((jobject) SF_mindustry_content_Loadouts_basicShard, mark, depth + 1);
		if (SF_mindustry_content_Loadouts_basicFoundation)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Loadouts_basicFoundation)->clazz)->markFunction)((jobject) SF_mindustry_content_Loadouts_basicFoundation, mark, depth + 1);
		if (SF_mindustry_content_Loadouts_basicNucleus)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Loadouts_basicNucleus)->clazz)->markFunction)((jobject) SF_mindustry_content_Loadouts_basicNucleus, mark, depth + 1);
		if (SF_mindustry_content_Loadouts_basicBastion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_content_Loadouts_basicBastion)->clazz)->markFunction)((jobject) SF_mindustry_content_Loadouts_basicBastion, mark, depth + 1);
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
	auto self = (mindustry_content_Loadouts *) object;
}

void clinit_mindustry_content_Loadouts(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_content_Loadouts(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Loadouts:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Loadouts(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_content_Loadouts_load(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/content/Loadouts:load", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_content_Loadouts(ctx);
	{
	LINE_NUMBER(13);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_readBase64_java_lang_String_R_mindustry_game_Schematic(ctx, (((jobject) createStringLiteral(ctx, u8"bXNjaAF4nGNgZmBmZmDJS8xNZZDJKCkpKLbS16/MLy0p1UtK1XcNi/Q3cKwwyqkyYOBOSS1OLsosKMnMz2NgYGDLSUxKzSlmYIqOZWTgSs4vStUtzkgsSgFKMYIQkAAAhSEXTA=="_j))));
	clinit_mindustry_content_Loadouts(ctx);
	SF_mindustry_content_Loadouts_basicShard = sp[0].o;
	LINE_NUMBER(14);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_readBase64_java_lang_String_R_mindustry_game_Schematic(ctx, (((jobject) createStringLiteral(ctx, u8"bXNjaAF4nGNgYWBhZmDJS8xNZWBNSk3MK2bgTkktTi7KLCjJzM9jYGBgy0lMSs0pZmCKjmVk4E/OL0rVTcsvzUtJhMozghCQAACx6RHB"_j))));
	clinit_mindustry_content_Loadouts(ctx);
	SF_mindustry_content_Loadouts_basicFoundation = sp[0].o;
	LINE_NUMBER(15);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_readBase64_java_lang_String_R_mindustry_game_Schematic(ctx, (((jobject) createStringLiteral(ctx, u8"bXNjaAF4nA3CwQ2AIBAEwAXFjxRBA1ZkfCDcgwh3BiTG7iUzMDATZvaFYGOK7pPuLpYXa6QWarqfJAxVsGR/Um7Q+6Fgg1TauIdMvQFQgB7wAza8E4M="_j))));
	clinit_mindustry_content_Loadouts(ctx);
	SF_mindustry_content_Loadouts_basicNucleus = sp[0].o;
	LINE_NUMBER(16);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_readBase64_java_lang_String_R_mindustry_game_Schematic(ctx, (((jobject) createStringLiteral(ctx, u8"bXNjaAF4nGNgYWBhZmDJS8xNZWBNzMsEUtwpqcXJRZkFJZn5eQyClfmlCin5Cnn5JQqpFZnFJVwMbDmJSak5xQxM0bGMDDzJ+UWpukmJxWDVDAyMIAQkACMdFqE="_j))));
	clinit_mindustry_content_Loadouts(ctx);
	SF_mindustry_content_Loadouts_basicBastion = sp[0].o;
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_content_Loadouts[] {
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
	{ "basicShard", &class_mindustry_game_Schematic, (intptr_t) &SF_mindustry_content_Loadouts_basicShard, "Lmindustry/game/Schematic;", 9 },
	{ "basicFoundation", &class_mindustry_game_Schematic, (intptr_t) &SF_mindustry_content_Loadouts_basicFoundation, "Lmindustry/game/Schematic;", 9 },
	{ "basicNucleus", &class_mindustry_game_Schematic, (intptr_t) &SF_mindustry_content_Loadouts_basicNucleus, "Lmindustry/game/Schematic;", 9 },
	{ "basicBastion", &class_mindustry_game_Schematic, (intptr_t) &SF_mindustry_content_Loadouts_basicBastion, "Lmindustry/game/Schematic;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_content_Loadouts, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_content_Loadouts_load, 0, "()V", 9 },
};

Class class_mindustry_content_Loadouts{
		.nativeName = (intptr_t) "mindustry/content/Loadouts",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_content_Loadouts),
		.classVtable = (intptr_t) vtable_mindustry_content_Loadouts,
		.staticInitializer = (intptr_t) clinit_mindustry_content_Loadouts,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_content_Loadouts,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_content_Loadouts = registerClass(&class_mindustry_content_Loadouts);

}
