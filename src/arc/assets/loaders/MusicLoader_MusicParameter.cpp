#include "arc/assets/loaders/MusicLoader_MusicParameter.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/Object.h"
#include "arc/audio/Music.h"
#include "arc/assets/loaders/MusicLoader.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/assets/AssetLoaderParameters_LoadedCallback.h"
#include "arc/util/Nullable.h"
#include "arc/assets/loaders/MusicLoader_MusicParameter.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_arc_assets_loaders_MusicLoader$MusicParameter(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_AssetLoaderParameters(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (arc_assets_loaders_MusicLoader$MusicParameter *) object;
	if (self->F_music)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_music)->clazz)->markFunction)((jobject) self->F_music, mark, depth + 1);
}

void clinit_arc_assets_loaders_MusicLoader$MusicParameter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_AssetLoaderParameters(ctx);
}

void init_arc_assets_loaders_MusicLoader$MusicParameter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/MusicLoader$MusicParameter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_MusicLoader$MusicParameter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(59);
	init_arc_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_assets_loaders_MusicLoader$MusicParameter_arc_audio_Music(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/MusicLoader$MusicParameter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_MusicLoader$MusicParameter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(62);
	init_arc_assets_AssetLoaderParameters(ctx, (frame[0].o));
	LINE_NUMBER(63);
	((arc_assets_loaders_MusicLoader$MusicParameter *) NULL_CHECK((frame[0].o)))->F_music = (jref) (frame[1].o);
	LINE_NUMBER(64);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_arc_assets_loaders_MusicLoader$MusicParameter_arc_assets_AssetLoaderParameters$LoadedCallback(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/assets/loaders/MusicLoader$MusicParameter:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_assets_loaders_MusicLoader$MusicParameter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(67);
	init_arc_assets_AssetLoaderParameters_arc_assets_AssetLoaderParameters$LoadedCallback(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_arc_assets_loaders_MusicLoader$MusicParameter;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	{ // Field music
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[0]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_arc_assets_loaders_MusicLoader$MusicParameter[] {
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
	{ "music", &class_arc_audio_Music, offsetof(arc_assets_loaders_MusicLoader$MusicParameter, F_music), "Larc/audio/Music;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_assets_loaders_MusicLoader$MusicParameter, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_arc_assets_loaders_MusicLoader$MusicParameter_arc_audio_Music, 0, "(Larc/audio/Music;)V", 1 },
	{ "<init>", (intptr_t) init_arc_assets_loaders_MusicLoader$MusicParameter_arc_assets_AssetLoaderParameters$LoadedCallback, 0, "(Larc/assets/AssetLoaderParameters$LoadedCallback;)V", 1 },
};

Class class_arc_assets_loaders_MusicLoader$MusicParameter{
		.nativeName = (intptr_t) "arc/assets/loaders/MusicLoader$MusicParameter",
		.parentClass = (intptr_t) &class_arc_assets_AssetLoaderParameters,
		.size = sizeof(arc_assets_loaders_MusicLoader$MusicParameter),
		.classVtable = (intptr_t) vtable_arc_assets_loaders_MusicLoader$MusicParameter,
		.staticInitializer = (intptr_t) clinit_arc_assets_loaders_MusicLoader$MusicParameter,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_arc_assets_loaders_MusicLoader$MusicParameter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_arc_assets_loaders_MusicLoader,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_assets_loaders_MusicLoader$MusicParameter = registerClass(&class_arc_assets_loaders_MusicLoader$MusicParameter);

}

