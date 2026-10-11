#include "arc/scene/style/Drawable.h"
#include "java/lang/Object.h"
#include "arc/scene/style/Drawable.h"

extern "C" {


void mark_arc_scene_style_Drawable(jobject object, jint mark, jint depth) {
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
	auto self = (arc_scene_style_Drawable *) object;
}

void clinit_arc_scene_style_Drawable(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jfloat M_arc_scene_style_Drawable_imageSize_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/scene/style/Drawable:imageSize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(39);
	jfloat temp0 = (jfloat)((func_arc_scene_style_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_arc_scene_style_Drawable, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, (frame[0].o)))(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_arc_scene_style_Drawable[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_arc_scene_style_Drawable_imageSize_R_float,
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
	{ "draw", "(FFFF)V" },
	{ "draw", "(FFFFFFFFF)V" },
	{ "getLeftWidth", "()F" },
	{ "setLeftWidth", "(F)V" },
	{ "getRightWidth", "()F" },
	{ "setRightWidth", "(F)V" },
	{ "getTopHeight", "()F" },
	{ "setTopHeight", "(F)V" },
	{ "getBottomHeight", "()F" },
	{ "setBottomHeight", "(F)V" },
	{ "getMinWidth", "()F" },
	{ "setMinWidth", "(F)V" },
	{ "getMinHeight", "()F" },
	{ "setMinHeight", "(F)V" },
	{ "imageSize", "()F" },
};

static MethodMetadata methods[] {
	{ "draw", 0, INDEX_arc_scene_style_Drawable_draw_float_float_float_float, "(FFFF)V", 1025 },
	{ "draw", 0, INDEX_arc_scene_style_Drawable_draw_float_float_float_float_float_float_float_float_float, "(FFFFFFFFF)V", 1025 },
	{ "getLeftWidth", 0, INDEX_arc_scene_style_Drawable_getLeftWidth_R_float, "()F", 1025 },
	{ "setLeftWidth", 0, INDEX_arc_scene_style_Drawable_setLeftWidth_float, "(F)V", 1025 },
	{ "getRightWidth", 0, INDEX_arc_scene_style_Drawable_getRightWidth_R_float, "()F", 1025 },
	{ "setRightWidth", 0, INDEX_arc_scene_style_Drawable_setRightWidth_float, "(F)V", 1025 },
	{ "getTopHeight", 0, INDEX_arc_scene_style_Drawable_getTopHeight_R_float, "()F", 1025 },
	{ "setTopHeight", 0, INDEX_arc_scene_style_Drawable_setTopHeight_float, "(F)V", 1025 },
	{ "getBottomHeight", 0, INDEX_arc_scene_style_Drawable_getBottomHeight_R_float, "()F", 1025 },
	{ "setBottomHeight", 0, INDEX_arc_scene_style_Drawable_setBottomHeight_float, "(F)V", 1025 },
	{ "getMinWidth", 0, INDEX_arc_scene_style_Drawable_getMinWidth_R_float, "()F", 1025 },
	{ "setMinWidth", 0, INDEX_arc_scene_style_Drawable_setMinWidth_float, "(F)V", 1025 },
	{ "getMinHeight", 0, INDEX_arc_scene_style_Drawable_getMinHeight_R_float, "()F", 1025 },
	{ "setMinHeight", 0, INDEX_arc_scene_style_Drawable_setMinHeight_float, "(F)V", 1025 },
	{ "imageSize", (intptr_t) M_arc_scene_style_Drawable_imageSize_R_float, INDEX_arc_scene_style_Drawable_imageSize_R_float, "()F", 1 },
};

Class class_arc_scene_style_Drawable{
		.nativeName = (intptr_t) "arc/scene/style/Drawable",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_scene_style_Drawable),
		.classVtable = (intptr_t) vtable_arc_scene_style_Drawable,
		.staticInitializer = (intptr_t) clinit_arc_scene_style_Drawable,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_scene_style_Drawable,
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
		.methodCount = 15,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 26,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_scene_style_Drawable = registerClass(&class_arc_scene_style_Drawable);

}
