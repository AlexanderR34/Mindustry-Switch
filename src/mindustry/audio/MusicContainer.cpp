#include "mindustry/audio/MusicContainer.h"
#include "java/lang/Object.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/String.h"
#include "mindustry/audio/MusicContainer.h"
#include "arc/audio/Music.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/reflect/Method.h"
#include "arc/util/Nullable.h"
#include "mindustry/audio/SoundControl.h"
#include "java/lang/reflect/Constructor.h"

extern "C" {


void mark_mindustry_audio_MusicContainer(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_audio_MusicContainer *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_cached)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cached)->clazz)->markFunction)((jobject) self->F_cached, mark, depth + 1);
}

void clinit_mindustry_audio_MusicContainer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_audio_MusicContainer_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/MusicContainer:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_MusicContainer(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((mindustry_audio_MusicContainer *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(14);
	((mindustry_audio_MusicContainer *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_mindustry_audio_MusicContainer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/MusicContainer:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_audio_MusicContainer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(17);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((mindustry_audio_MusicContainer *) NULL_CHECK((frame[0].o)))->F_name = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_audio_MusicContainer_get_R_arc_audio_Music(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/MusicContainer:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	if (((jint)((mindustry_audio_MusicContainer *) NULL_CHECK((frame[0].o)))->F_accessed) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_audio_MusicContainer *) NULL_CHECK((frame[0].o)))->F_cached;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(23);
	((mindustry_audio_MusicContainer *) NULL_CHECK((frame[0].o)))->F_accessed = (jint(1));
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_audio_MusicContainer *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)SM_mindustry_audio_SoundControl_findMusic_java_lang_String_R_arc_audio_Music(ctx, sp[1].o);
	((mindustry_audio_MusicContainer *) NULL_CHECK(sp[0].o))->F_cached = (jref) sp[1].o;
	popStackFrame(ctx);
	return sp[1].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_audio_MusicContainer_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/audio/MusicContainer:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)((mindustry_audio_MusicContainer *) NULL_CHECK((frame[0].o)))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_audio_MusicContainer;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field cached
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_audio_MusicContainer[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_audio_MusicContainer_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_audio_MusicContainer_get_R_arc_audio_Music,
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
	{ "get", "()Larc/audio/Music;" },
};

static FieldMetadata fields[] {
	{ "name", &class_java_lang_String, offsetof(mindustry_audio_MusicContainer, F_name), "Ljava/lang/String;", 1 },
	{ "cached", &class_arc_audio_Music, offsetof(mindustry_audio_MusicContainer, F_cached), "Larc/audio/Music;", 2 },
	{ "accessed", &class_boolean, offsetof(mindustry_audio_MusicContainer, F_accessed), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_audio_MusicContainer_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_mindustry_audio_MusicContainer, 0, "()V", 1 },
	{ "get", (intptr_t) M_mindustry_audio_MusicContainer_get_R_arc_audio_Music, VTABLE_mindustry_audio_MusicContainer_get_R_arc_audio_Music, "()Larc/audio/Music;", 1 },
	{ "toString", (intptr_t) M_mindustry_audio_MusicContainer_toString_R_java_lang_String, VTABLE_mindustry_audio_MusicContainer_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_audio_MusicContainer{
		.nativeName = (intptr_t) "mindustry/audio/MusicContainer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_audio_MusicContainer),
		.classVtable = (intptr_t) vtable_mindustry_audio_MusicContainer,
		.staticInitializer = (intptr_t) clinit_mindustry_audio_MusicContainer,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_audio_MusicContainer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_audio_MusicContainer = registerClass(&class_mindustry_audio_MusicContainer);

}
