#include "mindustry/game/SectorInfo_ExportStat.h"
#include "java/lang/Object.h"
#include "arc/math/WindowedMean.h"
#include "java/lang/String.h"
#include "mindustry/game/SectorInfo_ExportStat.h"
#include "mindustry/game/SectorInfo.h"

extern "C" {


void mark_mindustry_game_SectorInfo$ExportStat(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_game_SectorInfo$ExportStat *) object;
	if (self->F_means)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_means)->clazz)->markFunction)((jobject) self->F_means, mark, depth + 1);
}

void clinit_mindustry_game_SectorInfo$ExportStat(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_game_SectorInfo$ExportStat(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo$ExportStat:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_SectorInfo$ExportStat(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(354);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(356);
	sp[0].o = frame[0].o;
	clinit_arc_math_WindowedMean(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_math_WindowedMean);
	init_arc_math_WindowedMean_int(ctx, sp[1].o, (60));
	((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK(sp[0].o))->F_means = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_SectorInfo$ExportStat_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/SectorInfo$ExportStat:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"\u0001"_j.string, 1, boxFloat(ctx, ((jfloat)((mindustry_game_SectorInfo$ExportStat *) NULL_CHECK((frame[0].o)))->F_mean)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_game_SectorInfo$ExportStat[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_game_SectorInfo$ExportStat_toString_R_java_lang_String,
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
	{ "counter", &class_float, offsetof(mindustry_game_SectorInfo$ExportStat, F_counter), "F", 129 },
	{ "means", &class_arc_math_WindowedMean, offsetof(mindustry_game_SectorInfo$ExportStat, F_means), "Larc/math/WindowedMean;", 129 },
	{ "loaded", &class_boolean, offsetof(mindustry_game_SectorInfo$ExportStat, F_loaded), "Z", 129 },
	{ "mean", &class_float, offsetof(mindustry_game_SectorInfo$ExportStat, F_mean), "F", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_SectorInfo$ExportStat, 0, "()V", 1 },
	{ "toString", (intptr_t) M_mindustry_game_SectorInfo$ExportStat_toString_R_java_lang_String, VTABLE_mindustry_game_SectorInfo$ExportStat_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_game_SectorInfo$ExportStat{
		.nativeName = (intptr_t) "mindustry/game/SectorInfo$ExportStat",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_SectorInfo$ExportStat),
		.classVtable = (intptr_t) vtable_mindustry_game_SectorInfo$ExportStat,
		.staticInitializer = (intptr_t) clinit_mindustry_game_SectorInfo$ExportStat,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_game_SectorInfo$ExportStat,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_game_SectorInfo,
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
static bool registered_mindustry_game_SectorInfo$ExportStat = registerClass(&class_mindustry_game_SectorInfo$ExportStat);

}

