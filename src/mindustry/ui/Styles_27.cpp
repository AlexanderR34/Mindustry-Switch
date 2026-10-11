#include "mindustry/ui/Styles_27.h"
#include "mindustry/gen/Tex.h"
#include "java/lang/Object.h"
#include "mindustry/ui/Styles_27.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/Styles.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"

extern "C" {


void mark_mindustry_ui_Styles$27(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_ImageButton$ImageButtonStyle(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_Styles$27 *) object;
	if (self->F_val$whiteui)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$whiteui)->clazz)->markFunction)((jobject) self->F_val$whiteui, mark, depth + 1);
}

void clinit_mindustry_ui_Styles$27(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_ImageButton$ImageButtonStyle(ctx);
}

void init_mindustry_ui_Styles$27_arc_scene_style_TextureRegionDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Styles$27:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Styles$27(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(311);
	((mindustry_ui_Styles$27 *) NULL_CHECK((frame[0].o)))->F_val$whiteui = (jref) (frame[1].o);
	init_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, (frame[0].o));
	LINE_NUMBER(312);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_Styles$27 *) NULL_CHECK((frame[0].o)))->F_val$whiteui;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_down = (jref) sp[1].o;
	LINE_NUMBER(313);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_pane;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up = (jref) sp[1].o;
	LINE_NUMBER(314);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_Styles(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Styles_flatDown;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_over = (jref) sp[1].o;
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Styles$27[] {
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
	{ "val$whiteui", &class_arc_scene_style_TextureRegionDrawable, offsetof(mindustry_ui_Styles$27, F_val$whiteui), "Larc/scene/style/TextureRegionDrawable;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Styles$27_arc_scene_style_TextureRegionDrawable, 0, "(Larc/scene/style/TextureRegionDrawable;)V", 0 },
};

Class class_mindustry_ui_Styles$27{
		.nativeName = (intptr_t) "mindustry/ui/Styles$27",
		.parentClass = (intptr_t) &class_arc_scene_ui_ImageButton$ImageButtonStyle,
		.size = sizeof(mindustry_ui_Styles$27),
		.classVtable = (intptr_t) vtable_mindustry_ui_Styles$27,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Styles$27,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Styles$27,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_Styles$27 = registerClass(&class_mindustry_ui_Styles$27);

}

