#include "mindustry/game/FogControl_FogData.h"
#include "java/lang/Object.h"
#include "arc/struct/Bits.h"
#include "mindustry/game/FogControl_FogData.h"
#include "mindustry/game/FogControl.h"

extern "C" {


void mark_mindustry_game_FogControl$FogData(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_FogControl$FogData *) object;
	if (self->F_read)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_read)->clazz)->markFunction)((jobject) self->F_read, mark, depth + 1);
	if (self->F_write)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_write)->clazz)->markFunction)((jobject) self->F_write, mark, depth + 1);
	if (self->F_staticData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_staticData)->clazz)->markFunction)((jobject) self->F_staticData, mark, depth + 1);
}

void clinit_mindustry_game_FogControl$FogData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_FogControl$FogData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/FogControl$FogData:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_FogControl$FogData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(571);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(567);
	((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[0].o)))->F_lastDynamicMs = (jlong(0));
	LINE_NUMBER(569);
	((mindustry_game_FogControl$FogData *) NULL_CHECK((frame[0].o)))->F_dynamicUpdated = (jint(1));
	LINE_NUMBER(572);
	frame[1].i = ((clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_ww) * (clinit_mindustry_game_FogControl(ctx), (jint)SF_mindustry_game_FogControl_wh));
	LINE_NUMBER(574);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Bits(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits_int(ctx, sp[1].o, (frame[1].i));
	((mindustry_game_FogControl$FogData *) NULL_CHECK(sp[0].o))->F_read = (jref) sp[1].o;
	LINE_NUMBER(575);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Bits(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits_int(ctx, sp[1].o, (frame[1].i));
	((mindustry_game_FogControl$FogData *) NULL_CHECK(sp[0].o))->F_write = (jref) sp[1].o;
	LINE_NUMBER(576);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Bits(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Bits);
	init_arc_struct_Bits_int(ctx, sp[1].o, (frame[1].i));
	((mindustry_game_FogControl$FogData *) NULL_CHECK(sp[0].o))->F_staticData = (jref) sp[1].o;
	LINE_NUMBER(577);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_FogControl$FogData[] {
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
	{ "read", &class_arc_struct_Bits, offsetof(mindustry_game_FogControl$FogData, F_read), "Larc/struct/Bits;", 64 },
	{ "write", &class_arc_struct_Bits, offsetof(mindustry_game_FogControl$FogData, F_write), "Larc/struct/Bits;", 64 },
	{ "staticData", &class_arc_struct_Bits, offsetof(mindustry_game_FogControl$FogData, F_staticData), "Larc/struct/Bits;", 16 },
	{ "lastDynamicMs", &class_long, offsetof(mindustry_game_FogControl$FogData, F_lastDynamicMs), "J", 0 },
	{ "dynamicUpdated", &class_boolean, offsetof(mindustry_game_FogControl$FogData, F_dynamicUpdated), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_FogControl$FogData, 0, "()V", 0 },
};

Class class_mindustry_game_FogControl$FogData{
		.nativeName = (intptr_t) "mindustry/game/FogControl$FogData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_FogControl$FogData),
		.classVtable = (intptr_t) vtable_mindustry_game_FogControl$FogData,
		.staticInitializer = (intptr_t) clinit_mindustry_game_FogControl$FogData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_FogControl$FogData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_FogControl,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_FogControl$FogData = registerClass(&class_mindustry_game_FogControl$FogData);

}

