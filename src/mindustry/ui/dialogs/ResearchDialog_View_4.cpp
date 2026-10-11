#include "mindustry/ui/dialogs/ResearchDialog_View_4.h"
#include "mindustry/ui/Fonts.h"
#include "mindustry/gen/Tex.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/Font.h"
#include "arc/scene/ui/TextButton_TextButtonStyle.h"
#include "mindustry/ui/dialogs/ResearchDialog_View_4.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/dialogs/ResearchDialog_View.h"
#include "arc/graphics/Color.h"

extern "C" {


void mark_mindustry_ui_dialogs_ResearchDialog$View$4(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_scene_ui_TextButton$TextButtonStyle(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_ResearchDialog$View$4 *) object;
	if (self->F_this$1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$1)->clazz)->markFunction)((jobject) self->F_this$1, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ResearchDialog$View$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_TextButton$TextButtonStyle(ctx);
}

void init_mindustry_ui_dialogs_ResearchDialog$View$4_mindustry_ui_dialogs_ResearchDialog$View(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ResearchDialog$View$4:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ResearchDialog$View$4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(760);
	((mindustry_ui_dialogs_ResearchDialog$View$4 *) NULL_CHECK((frame[0].o)))->F_this$1 = (jref) (frame[1].o);
	init_arc_scene_ui_TextButton$TextButtonStyle(ctx, (frame[0].o));
	LINE_NUMBER(761);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_button;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_disabled = (jref) sp[1].o;
	LINE_NUMBER(762);
	sp[0].o = frame[0].o;
	clinit_mindustry_ui_Fonts(ctx);
	sp[1].o = (jobject)SF_mindustry_ui_Fonts_def;
	((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK(sp[0].o))->F_font = (jref) sp[1].o;
	LINE_NUMBER(763);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK(sp[0].o))->F_fontColor = (jref) sp[1].o;
	LINE_NUMBER(764);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_gray;
	((arc_scene_ui_TextButton$TextButtonStyle *) NULL_CHECK(sp[0].o))->F_disabledFontColor = (jref) sp[1].o;
	LINE_NUMBER(765);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_buttonOver;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_up = (jref) sp[1].o;
	LINE_NUMBER(766);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_buttonDown;
	((arc_scene_ui_Button$ButtonStyle *) NULL_CHECK(sp[0].o))->F_over = (jref) sp[1].o;
	LINE_NUMBER(760);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ResearchDialog$View$4[] {
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
	{ "this$1", &class_mindustry_ui_dialogs_ResearchDialog$View, offsetof(mindustry_ui_dialogs_ResearchDialog$View$4, F_this$1), "Lmindustry/ui/dialogs/ResearchDialog$View;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ResearchDialog$View$4_mindustry_ui_dialogs_ResearchDialog$View, 0, "(Lmindustry/ui/dialogs/ResearchDialog$View;)V", 0 },
};

Class class_mindustry_ui_dialogs_ResearchDialog$View$4{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ResearchDialog$View$4",
		.parentClass = (intptr_t) &class_arc_scene_ui_TextButton$TextButtonStyle,
		.size = sizeof(mindustry_ui_dialogs_ResearchDialog$View$4),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ResearchDialog$View$4,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ResearchDialog$View$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ResearchDialog$View$4,
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
static bool registered_mindustry_ui_dialogs_ResearchDialog$View$4 = registerClass(&class_mindustry_ui_dialogs_ResearchDialog$View$4);

}

