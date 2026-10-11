#include "mindustry/ui/Fonts_8.h"
#include "arc/freetype/FreeTypeFontGenerator_FreeTypeFontParameter.h"
#include "java/lang/Object.h"
#include "mindustry/ui/Fonts_8.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_mindustry_ui_Fonts$8(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_Fonts$8 *) object;
}

void clinit_mindustry_ui_Fonts$8(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx);
}

void init_mindustry_ui_Fonts$8(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Fonts$8:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Fonts$8(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(265);
	init_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter(ctx, (frame[0].o));
	LINE_NUMBER(266);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_darkGray;
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK(sp[0].o))->F_borderColor = (jref) sp[1].o;
	LINE_NUMBER(267);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_incremental = (jint(1));
	LINE_NUMBER(268);
	((arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter *) NULL_CHECK((frame[0].o)))->F_size = (18);
	LINE_NUMBER(244);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Fonts$8[] {
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
	{ "<init>", (intptr_t) init_mindustry_ui_Fonts$8, 0, "()V", 0 },
};

Class class_mindustry_ui_Fonts$8{
		.nativeName = (intptr_t) "mindustry/ui/Fonts$8",
		.parentClass = (intptr_t) &class_arc_freetype_FreeTypeFontGenerator$FreeTypeFontParameter,
		.size = sizeof(mindustry_ui_Fonts$8),
		.classVtable = (intptr_t) vtable_mindustry_ui_Fonts$8,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Fonts$8,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Fonts$8,
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
static bool registered_mindustry_ui_Fonts$8 = registerClass(&class_mindustry_ui_Fonts$8);

}

