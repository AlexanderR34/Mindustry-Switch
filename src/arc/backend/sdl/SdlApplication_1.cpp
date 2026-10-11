#include "arc/backend/sdl/SdlApplication_1.h"
#include "arc/backend/sdl/SdlApplication_1.h"
#include "arc/scene/Scene.h"
#include "arc/math/geom/Vec2.h"
#include "arc/Graphics.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "arc/scene/Element.h"
#include "arc/scene/ui/TextField.h"
#include "arc/ApplicationListener.h"
#include "arc/backend/sdl/SdlApplication.h"
#include "arc/backend/sdl/jni/SDL.h"
#include "arc/util/Tmp.h"

extern "C" {


void mark_arc_backend_sdl_SdlApplication$1(jobject object, jint mark, jint depth) {
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
	auto self = (arc_backend_sdl_SdlApplication$1 *) object;
	if (self->F_lastFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_lastFocus)->clazz)->markFunction)((jobject) self->F_lastFocus, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_arc_backend_sdl_SdlApplication$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_arc_backend_sdl_SdlApplication$1_arc_backend_sdl_SdlApplication(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_arc_backend_sdl_SdlApplication$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(71);
	((arc_backend_sdl_SdlApplication$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_arc_backend_sdl_SdlApplication$1_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "arc/backend/sdl/SdlApplication$1:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	if ((isInstance(ctx, sp[0].o, &class_arc_scene_ui_TextField)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(77);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_scene;
	sp[0].o = (jobject)((func_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_Scene_getKeyboardFocus_R_arc_scene_Element])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_arc_scene_ui_TextField, sp[0].o));
	LINE_NUMBER(78);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication$1 *) NULL_CHECK((frame[0].o)))->F_lastFocus;
	if (sp[0].o != nullptr) goto label_4;
	}
	LINE_NUMBER(79);
	SM_arc_backend_sdl_jni_SDL_SDL_StartTextInput(ctx);
label_4:;
	{
	LINE_NUMBER(81);
	((arc_backend_sdl_SdlApplication$1 *) NULL_CHECK((frame[0].o)))->F_lastFocus = (jref) (frame[1].o);
	LINE_NUMBER(82);
	goto label_7;
	}
label_1:;
	{
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication$1 *) NULL_CHECK((frame[0].o)))->F_lastFocus;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(83);
	SM_arc_backend_sdl_jni_SDL_SDL_StopTextInput(ctx);
	LINE_NUMBER(84);
	((arc_backend_sdl_SdlApplication$1 *) NULL_CHECK((frame[0].o)))->F_lastFocus = (jref) (jobject(nullptr));
	}
label_7:;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication$1 *) NULL_CHECK((frame[0].o)))->F_lastFocus;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(88);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication$1 *) NULL_CHECK((frame[0].o)))->F_lastFocus;
	clinit_arc_util_Tmp(ctx);
	sp[1].o = (jobject)SF_arc_util_Tmp_v1;
	sp[1].o = (jobject)((func_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_math_geom_Vec2_setZero_R_arc_math_geom_Vec2])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_scene_ui_TextField_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(89);
	jint temp0 = jint(((jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_x));
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_graphics;
	jint temp1 = (jint)((func_arc_Graphics_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Graphics_getHeight_R_int])(ctx, sp[0].o);
	jint temp2 = temp1 - (jint(1));
	jfloat temp3 = (jfloat)((arc_math_geom_Vec2 *) NULL_CHECK((frame[1].o)))->F_y;
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication$1 *) NULL_CHECK((frame[0].o)))->F_lastFocus;
	jfloat temp4 = (jfloat)((func_arc_scene_ui_TextField_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getHeight_R_float])(ctx, sp[0].o);
	jint temp5 = temp2 - (jint((temp3 + temp4)));
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication$1 *) NULL_CHECK((frame[0].o)))->F_lastFocus;
	jfloat temp6 = (jfloat)((func_arc_scene_ui_TextField_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getWidth_R_float])(ctx, sp[0].o);
	jint temp7 = jint(temp6);
	sp[0].o = (jobject)((arc_backend_sdl_SdlApplication$1 *) NULL_CHECK((frame[0].o)))->F_lastFocus;
	jfloat temp8 = (jfloat)((func_arc_scene_ui_TextField_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_scene_ui_TextField_getHeight_R_float])(ctx, sp[0].o);
	SM_arc_backend_sdl_jni_SDL_SDL_SetTextInputRect_int_int_int_int(ctx, temp0, temp5, temp7, (jint(temp8)));
	}
label_10:;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_arc_backend_sdl_SdlApplication$1[] {
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
	(void *) M_arc_ApplicationListener_init,
	(void *) M_arc_ApplicationListener_resize_int_int,
	(void *) M_arc_backend_sdl_SdlApplication$1_update,
	(void *) M_arc_ApplicationListener_pause,
	(void *) M_arc_ApplicationListener_resume,
	(void *) M_arc_ApplicationListener_dispose,
	(void *) M_arc_ApplicationListener_exit,
	(void *) M_arc_ApplicationListener_fileDropped_arc_files_Fi,
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
	{ "init", "()V" },
	{ "resize", "(II)V" },
	{ "update", "()V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
	{ "dispose", "()V" },
	{ "exit", "()V" },
	{ "fileDropped", "(Larc/files/Fi;)V" },
};

static jclass interfaces[] { &class_arc_ApplicationListener, };

static FieldMetadata fields[] {
	{ "lastFocus", &class_arc_scene_ui_TextField, offsetof(arc_backend_sdl_SdlApplication$1, F_lastFocus), "Larc/scene/ui/TextField;", 0 },
	{ "this$0", &class_arc_backend_sdl_SdlApplication, offsetof(arc_backend_sdl_SdlApplication$1, F_this$0), "Larc/backend/sdl/SdlApplication;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_arc_backend_sdl_SdlApplication$1_arc_backend_sdl_SdlApplication, 0, "(Larc/backend/sdl/SdlApplication;)V", 0 },
	{ "update", (intptr_t) M_arc_backend_sdl_SdlApplication$1_update, VTABLE_arc_backend_sdl_SdlApplication$1_update, "()V", 1 },
};

Class class_arc_backend_sdl_SdlApplication$1{
		.nativeName = (intptr_t) "arc/backend/sdl/SdlApplication$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(arc_backend_sdl_SdlApplication$1),
		.classVtable = (intptr_t) vtable_arc_backend_sdl_SdlApplication$1,
		.staticInitializer = (intptr_t) clinit_arc_backend_sdl_SdlApplication$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_arc_backend_sdl_SdlApplication$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_arc_backend_sdl_SdlApplication$1 = registerClass(&class_arc_backend_sdl_SdlApplication$1);

}

