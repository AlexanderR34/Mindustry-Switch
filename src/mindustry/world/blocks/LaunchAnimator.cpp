#include "mindustry/world/blocks/LaunchAnimator.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "mindustry/world/blocks/LaunchAnimator.h"
#include "arc/audio/Music.h"
#include "java/lang/annotation/Annotation.h"
#include "mindustry/gen/Musics.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/Nullable.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_world_blocks_LaunchAnimator(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_world_blocks_LaunchAnimator *) object;
}

void clinit_mindustry_world_blocks_LaunchAnimator(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_mindustry_world_blocks_LaunchAnimator_drawLaunchGlobalZ(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/LaunchAnimator:drawLaunchGlobalZ", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(11);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_world_blocks_LaunchAnimator_landMusic_R_arc_audio_Music(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/world/blocks/LaunchAnimator:landMusic", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	clinit_mindustry_gen_Musics(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Musics_land;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_world_blocks_LaunchAnimator;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method landMusic
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[6]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_world_blocks_LaunchAnimator[] {
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
	(void *) nullptr,
	(void *) M_mindustry_world_blocks_LaunchAnimator_drawLaunchGlobalZ,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_mindustry_world_blocks_LaunchAnimator_landMusic_R_arc_audio_Music,
	(void *) nullptr,
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
	{ "drawLaunch", "()V" },
	{ "drawLaunchGlobalZ", "()V" },
	{ "beginLaunch", "(Z)V" },
	{ "endLaunch", "()V" },
	{ "updateLaunch", "()V" },
	{ "launchDuration", "()F" },
	{ "landMusic", "()Larc/audio/Music;" },
	{ "zoomLaunch", "()F" },
};

static MethodMetadata methods[] {
	{ "drawLaunch", 0, INDEX_mindustry_world_blocks_LaunchAnimator_drawLaunch, "()V", 1025 },
	{ "drawLaunchGlobalZ", (intptr_t) M_mindustry_world_blocks_LaunchAnimator_drawLaunchGlobalZ, INDEX_mindustry_world_blocks_LaunchAnimator_drawLaunchGlobalZ, "()V", 1 },
	{ "beginLaunch", 0, INDEX_mindustry_world_blocks_LaunchAnimator_beginLaunch_boolean, "(Z)V", 1025 },
	{ "endLaunch", 0, INDEX_mindustry_world_blocks_LaunchAnimator_endLaunch, "()V", 1025 },
	{ "updateLaunch", 0, INDEX_mindustry_world_blocks_LaunchAnimator_updateLaunch, "()V", 1025 },
	{ "launchDuration", 0, INDEX_mindustry_world_blocks_LaunchAnimator_launchDuration_R_float, "()F", 1025 },
	{ "landMusic", (intptr_t) M_mindustry_world_blocks_LaunchAnimator_landMusic_R_arc_audio_Music, INDEX_mindustry_world_blocks_LaunchAnimator_landMusic_R_arc_audio_Music, "()Larc/audio/Music;", 1 },
	{ "zoomLaunch", 0, INDEX_mindustry_world_blocks_LaunchAnimator_zoomLaunch_R_float, "()F", 1025 },
};

Class class_mindustry_world_blocks_LaunchAnimator{
		.nativeName = (intptr_t) "mindustry/world/blocks/LaunchAnimator",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_world_blocks_LaunchAnimator),
		.classVtable = (intptr_t) vtable_mindustry_world_blocks_LaunchAnimator,
		.staticInitializer = (intptr_t) clinit_mindustry_world_blocks_LaunchAnimator,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_world_blocks_LaunchAnimator,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1537,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_world_blocks_LaunchAnimator = registerClass(&class_mindustry_world_blocks_LaunchAnimator);

}
