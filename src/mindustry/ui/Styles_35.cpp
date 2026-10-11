#include "mindustry/ui/Styles_35.h"
#include "arc/scene/ui/ScrollPane_ScrollPaneStyle.h"
#include "mindustry/gen/Tex.h"
#include "java/lang/Object.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/Styles_35.h"

extern "C" {


void mark_mindustry_ui_Styles$35(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_ScrollPane$ScrollPaneStyle(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_Styles$35 *) object;
}

void clinit_mindustry_ui_Styles$35(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx);
}

void init_mindustry_ui_Styles$35(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Styles$35:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Styles$35(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(362);
	init_arc_scene_ui_ScrollPane$ScrollPaneStyle(ctx, (frame[0].o));
	LINE_NUMBER(363);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_scroll;
	((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScroll = (jref) sp[1].o;
	LINE_NUMBER(364);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_scrollKnobVerticalBlack;
	((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_vScrollKnob = (jref) sp[1].o;
	LINE_NUMBER(365);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_scrollHorizontal;
	((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScroll = (jref) sp[1].o;
	LINE_NUMBER(366);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_scrollKnobHorizontalBlack;
	((arc_scene_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_hScrollKnob = (jref) sp[1].o;
	LINE_NUMBER(1);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Styles$35[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Styles$35, 0, "()V", 0 },
};

Class class_mindustry_ui_Styles$35{
		.nativeName = (intptr_t) "mindustry/ui/Styles$35",
		.parentClass = (intptr_t) &class_arc_scene_ui_ScrollPane$ScrollPaneStyle,
		.size = sizeof(mindustry_ui_Styles$35),
		.classVtable = (intptr_t) vtable_mindustry_ui_Styles$35,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Styles$35,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Styles$35,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_Styles$35 = registerClass(&class_mindustry_ui_Styles$35);

}

