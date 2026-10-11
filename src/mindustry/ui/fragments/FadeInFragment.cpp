#include "mindustry/ui/fragments/FadeInFragment.h"
#include "java/lang/Object.h"
#include "arc/scene/Element.h"
#include "mindustry/ui/fragments/FadeInFragment.h"
#include "arc/scene/Group.h"
#include "mindustry/ui/fragments/FadeInFragment_1.h"

extern "C" {

jfloat SF_mindustry_ui_fragments_FadeInFragment_duration;

void mark_mindustry_ui_fragments_FadeInFragment(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_fragments_FadeInFragment *) object;
}

void clinit_mindustry_ui_fragments_FadeInFragment(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_ui_fragments_FadeInFragment_duration = jfloat(40.0f);
}

void init_mindustry_ui_fragments_FadeInFragment(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/FadeInFragment:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_fragments_FadeInFragment(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((mindustry_ui_fragments_FadeInFragment *) NULL_CHECK((frame[0].o)))->F_time = (jfloat(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_fragments_FadeInFragment_build_arc_scene_Group(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/fragments/FadeInFragment:build", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(15);
	sp[0].o = frame[1].o;
	clinit_mindustry_ui_fragments_FadeInFragment$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_fragments_FadeInFragment$1);
	init_mindustry_ui_fragments_FadeInFragment$1_mindustry_ui_fragments_FadeInFragment(ctx, sp[1].o, (frame[0].o));
	((func_arc_scene_Group_addChild_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Group_addChild_arc_scene_Element])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_fragments_FadeInFragment[] {
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
	(void *) M_mindustry_ui_fragments_FadeInFragment_build_arc_scene_Group,
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
	{ "build", "(Larc/scene/Group;)V" },
};

static FieldMetadata fields[] {
	{ "duration", &class_float, (intptr_t) &SF_mindustry_ui_fragments_FadeInFragment_duration, "F", 26 },
	{ "time", &class_float, offsetof(mindustry_ui_fragments_FadeInFragment, F_time), "F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_fragments_FadeInFragment, 0, "()V", 1 },
	{ "build", (intptr_t) M_mindustry_ui_fragments_FadeInFragment_build_arc_scene_Group, VTABLE_mindustry_ui_fragments_FadeInFragment_build_arc_scene_Group, "(Larc/scene/Group;)V", 1 },
};

Class class_mindustry_ui_fragments_FadeInFragment{
		.nativeName = (intptr_t) "mindustry/ui/fragments/FadeInFragment",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_fragments_FadeInFragment),
		.classVtable = (intptr_t) vtable_mindustry_ui_fragments_FadeInFragment,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_fragments_FadeInFragment,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_fragments_FadeInFragment,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_fragments_FadeInFragment = registerClass(&class_mindustry_ui_fragments_FadeInFragment);

}
