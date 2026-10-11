#include "mindustry/ai/Pathfinder_PathTileStruct.h"
#include "java/lang/Object.h"
#include "mindustry/ai/Pathfinder_PathTileStruct.h"
#include "mindustry/ai/Pathfinder.h"

extern "C" {


void mark_mindustry_ai_Pathfinder$PathTileStruct(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ai_Pathfinder$PathTileStruct *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ai_Pathfinder$PathTileStruct(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ai_Pathfinder$PathTileStruct_mindustry_ai_Pathfinder(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ai/Pathfinder$PathTileStruct:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ai_Pathfinder$PathTileStruct(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(717);
	((mindustry_ai_Pathfinder$PathTileStruct *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ai_Pathfinder$PathTileStruct[] {
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
	{ "health", &class_int, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_health), "I", 0 },
	{ "team", &class_int, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_team), "I", 0 },
	{ "solid", &class_boolean, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_solid), "Z", 0 },
	{ "liquid", &class_boolean, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_liquid), "Z", 0 },
	{ "legSolid", &class_boolean, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_legSolid), "Z", 0 },
	{ "nearLiquid", &class_boolean, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_nearLiquid), "Z", 0 },
	{ "nearGround", &class_boolean, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_nearGround), "Z", 0 },
	{ "nearSolid", &class_boolean, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_nearSolid), "Z", 0 },
	{ "nearLegSolid", &class_boolean, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_nearLegSolid), "Z", 0 },
	{ "deep", &class_boolean, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_deep), "Z", 0 },
	{ "damages", &class_boolean, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_damages), "Z", 0 },
	{ "allDeep", &class_boolean, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_allDeep), "Z", 0 },
	{ "nearDeep", &class_boolean, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_nearDeep), "Z", 0 },
	{ "teamPassable", &class_boolean, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_teamPassable), "Z", 0 },
	{ "this$0", &class_mindustry_ai_Pathfinder, offsetof(mindustry_ai_Pathfinder$PathTileStruct, F_this$0), "Lmindustry/ai/Pathfinder;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ai_Pathfinder$PathTileStruct_mindustry_ai_Pathfinder, 0, "(Lmindustry/ai/Pathfinder;)V", 0 },
};

Class class_mindustry_ai_Pathfinder$PathTileStruct{
		.nativeName = (intptr_t) "mindustry/ai/Pathfinder$PathTileStruct",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ai_Pathfinder$PathTileStruct),
		.classVtable = (intptr_t) vtable_mindustry_ai_Pathfinder$PathTileStruct,
		.staticInitializer = (intptr_t) clinit_mindustry_ai_Pathfinder$PathTileStruct,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ai_Pathfinder$PathTileStruct,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ai_Pathfinder,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ai_Pathfinder$PathTileStruct = registerClass(&class_mindustry_ai_Pathfinder$PathTileStruct);

}

