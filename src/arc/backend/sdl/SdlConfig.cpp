#include "arc/backend/sdl/SdlConfig.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "arc/graphics/gl/HdpiMode.h"
#include "arc/backend/sdl/SdlConfig.h"
#include "arc/graphics/Color.h"
#include "arc/Files_FileType.h"

extern "C" {


void mark_arc_backend_sdl_SdlConfig(jobject object, jint mark, jint depth) {
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
	auto self = (arc_backend_sdl_SdlConfig *) object;
	if (self->F_hdpiMode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hdpiMode)->clazz)->markFunction)((jobject) self->F_hdpiMode, mark, depth + 1);
	if (self->F_glVersions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_glVersions)->clazz)->markFunction)((jobject) self->F_glVersions, mark, depth + 1);
	if (self->F_title)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_title)->clazz)->markFunction)((jobject) self->F_title, mark, depth + 1);
	if (self->F_initialBackgroundColor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_initialBackgroundColor)->clazz)->markFunction)((jobject) self->F_initialBackgroundColor, mark, depth + 1);
	if (self->F_windowIconFileType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_windowIconFileType)->clazz)->markFunction)((jobject) self->F_windowIconFileType, mark, depth + 1);
	if (self->F_windowIconPaths)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_windowIconPaths)->clazz)->markFunction)((jobject) self->F_windowIconPaths, mark, depth + 1);
}

void clinit_arc_backend_sdl_SdlConfig(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_backend_sdl_SdlConfig(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlConfig:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlConfig(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(8);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_r = (8);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_g = (8);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_b = (8);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_a = (8);
	LINE_NUMBER(9);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_depth = (jint(0));
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_stencil = (jint(0));
	LINE_NUMBER(10);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_samples = (jint(0));
	LINE_NUMBER(11);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_HdpiMode(ctx);
	sp[1].o = (jobject)SF_arc_graphics_gl_HdpiMode_logical;
	((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_hdpiMode = (jref) sp[1].o;
	LINE_NUMBER(13);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_width = (640);
	LINE_NUMBER(14);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_height = (480);
	LINE_NUMBER(15);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_resizable = (jint(1));
	LINE_NUMBER(16);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_decorated = (jint(1));
	LINE_NUMBER(17);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_maximized = (jint(0));
	LINE_NUMBER(18);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_fullscreen = (jint(0));
	LINE_NUMBER(19);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_disableAudio = (jint(0));
	LINE_NUMBER(21);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_coreProfile = (jint(0));
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(1)));
	jint temp0 = jint(0);
	sp[2].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[2].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[2].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_glVersions = (jref) sp[1].o;
	LINE_NUMBER(25);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_allowGl30 = (jint(1));
	LINE_NUMBER(27);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_title = (jref) (((jobject) createStringLiteral(ctx, u8"Arc Application"_j)));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_black;
	((arc_backend_sdl_SdlConfig *) NULL_CHECK(sp[0].o))->F_initialBackgroundColor = (jref) sp[1].o;
	LINE_NUMBER(29);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_initialVisible = (jint(1));
	LINE_NUMBER(30);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_vSyncEnabled = (jint(1));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlConfig_setWindowIcon_arc_Files$FileType_Array1_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlConfig:setWindowIcon", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(36);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_windowIconFileType = (jref) (frame[1].o);
	LINE_NUMBER(37);
	((arc_backend_sdl_SdlConfig *) NULL_CHECK((frame[0].o)))->F_windowIconPaths = (jref) (frame[2].o);
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlConfig[] {
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
	(void *) M_arc_backend_sdl_SdlConfig_setWindowIcon_arc_Files$FileType_Array1_java_lang_String,
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
	{ "setWindowIcon", "(Larc/Files$FileType;[Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "r", &class_int, offsetof(arc_backend_sdl_SdlConfig, F_r), "I", 1 },
	{ "g", &class_int, offsetof(arc_backend_sdl_SdlConfig, F_g), "I", 1 },
	{ "b", &class_int, offsetof(arc_backend_sdl_SdlConfig, F_b), "I", 1 },
	{ "a", &class_int, offsetof(arc_backend_sdl_SdlConfig, F_a), "I", 1 },
	{ "depth", &class_int, offsetof(arc_backend_sdl_SdlConfig, F_depth), "I", 1 },
	{ "stencil", &class_int, offsetof(arc_backend_sdl_SdlConfig, F_stencil), "I", 1 },
	{ "samples", &class_int, offsetof(arc_backend_sdl_SdlConfig, F_samples), "I", 1 },
	{ "hdpiMode", &class_arc_graphics_gl_HdpiMode, offsetof(arc_backend_sdl_SdlConfig, F_hdpiMode), "Larc/graphics/gl/HdpiMode;", 1 },
	{ "width", &class_int, offsetof(arc_backend_sdl_SdlConfig, F_width), "I", 1 },
	{ "height", &class_int, offsetof(arc_backend_sdl_SdlConfig, F_height), "I", 1 },
	{ "resizable", &class_boolean, offsetof(arc_backend_sdl_SdlConfig, F_resizable), "Z", 1 },
	{ "decorated", &class_boolean, offsetof(arc_backend_sdl_SdlConfig, F_decorated), "Z", 1 },
	{ "maximized", &class_boolean, offsetof(arc_backend_sdl_SdlConfig, F_maximized), "Z", 1 },
	{ "fullscreen", &class_boolean, offsetof(arc_backend_sdl_SdlConfig, F_fullscreen), "Z", 1 },
	{ "disableAudio", &class_boolean, offsetof(arc_backend_sdl_SdlConfig, F_disableAudio), "Z", 1 },
	{ "coreProfile", &class_boolean, offsetof(arc_backend_sdl_SdlConfig, F_coreProfile), "Z", 1 },
	{ "glVersions", getArrayClass(&class_int, 2), offsetof(arc_backend_sdl_SdlConfig, F_glVersions), "[[I", 1 },
	{ "allowGl30", &class_boolean, offsetof(arc_backend_sdl_SdlConfig, F_allowGl30), "Z", 1 },
	{ "title", &class_java_lang_String, offsetof(arc_backend_sdl_SdlConfig, F_title), "Ljava/lang/String;", 1 },
	{ "initialBackgroundColor", &class_arc_graphics_Color, offsetof(arc_backend_sdl_SdlConfig, F_initialBackgroundColor), "Larc/graphics/Color;", 1 },
	{ "initialVisible", &class_boolean, offsetof(arc_backend_sdl_SdlConfig, F_initialVisible), "Z", 1 },
	{ "vSyncEnabled", &class_boolean, offsetof(arc_backend_sdl_SdlConfig, F_vSyncEnabled), "Z", 1 },
	{ "windowIconFileType", &class_arc_Files$FileType, offsetof(arc_backend_sdl_SdlConfig, F_windowIconFileType), "Larc/Files$FileType;", 1 },
	{ "windowIconPaths", getArrayClass(&class_java_lang_String, 1), offsetof(arc_backend_sdl_SdlConfig, F_windowIconPaths), "[Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlConfig, 0, "()V", 1 },
	{ "setWindowIcon", (intptr_t) M_arc_backend_sdl_SdlConfig_setWindowIcon_arc_Files$FileType_Array1_java_lang_String, VTABLE_arc_backend_sdl_SdlConfig_setWindowIcon_arc_Files$FileType_Array1_java_lang_String, "(Larc/Files$FileType;[Ljava/lang/String;)V", 129 },
};

Class class_arc_backend_sdl_SdlConfig{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlConfig",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_backend_sdl_SdlConfig),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlConfig,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlConfig,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlConfig,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 24,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlConfig = registerClass(&class_arc_backend_sdl_SdlConfig);

}
