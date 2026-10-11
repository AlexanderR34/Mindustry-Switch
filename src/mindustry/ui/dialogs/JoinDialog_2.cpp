#include "mindustry/ui/dialogs/JoinDialog_2.h"
#include "mindustry/graphics/Pal.h"
#include "java/lang/Object.h"
#include "mindustry/ui/dialogs/JoinDialog.h"
#include "mindustry/ui/dialogs/JoinDialog_2.h"
#include "arc/graphics/Color.h"
#include "arc/scene/ui/ImageButton_ImageButtonStyle.h"

extern "C" {


void mark_mindustry_ui_dialogs_JoinDialog$2(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_dialogs_JoinDialog$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_JoinDialog$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_scene_ui_ImageButton$ImageButtonStyle(ctx);
}

void init_mindustry_ui_dialogs_JoinDialog$2_mindustry_ui_dialogs_JoinDialog_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/JoinDialog$2:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_JoinDialog$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(518);
	((mindustry_ui_dialogs_JoinDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$favorite = (frame[2].i);
	((mindustry_ui_dialogs_JoinDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_scene_ui_ImageButton$ImageButtonStyle(ctx, (frame[0].o));
	LINE_NUMBER(519);
	sp[0].o = frame[0].o;
	sp += 1;
	if (((jint)((mindustry_ui_dialogs_JoinDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$favorite) == 0) goto label_2;
	}
	clinit_mindustry_graphics_Pal(ctx);
	(sp++)->o = SF_mindustry_graphics_Pal_accent;
	goto label_3;
label_2:;
	clinit_arc_graphics_Color(ctx);
	(sp++)->o = SF_arc_graphics_Color_lightGray;
label_3:;
	{
	sp -= 2;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageUpColor = (jref) sp[1].o;
	LINE_NUMBER(520);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_white;
	((arc_scene_ui_ImageButton$ImageButtonStyle *) NULL_CHECK(sp[0].o))->F_imageDownColor = (jref) sp[1].o;
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_JoinDialog$2[] {
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
	{ "val$favorite", &class_boolean, offsetof(mindustry_ui_dialogs_JoinDialog$2, F_val$favorite), "Z", 4112 },
	{ "this$0", &class_mindustry_ui_dialogs_JoinDialog, offsetof(mindustry_ui_dialogs_JoinDialog$2, F_this$0), "Lmindustry/ui/dialogs/JoinDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_JoinDialog$2_mindustry_ui_dialogs_JoinDialog_boolean, 0, "(Lmindustry/ui/dialogs/JoinDialog;Z)V", 0 },
};

Class class_mindustry_ui_dialogs_JoinDialog$2{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/JoinDialog$2",
		.parentClass = (intptr_t) &class_arc_scene_ui_ImageButton$ImageButtonStyle,
		.size = sizeof(mindustry_ui_dialogs_JoinDialog$2),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_JoinDialog$2,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_JoinDialog$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_JoinDialog$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_JoinDialog$2 = registerClass(&class_mindustry_ui_dialogs_JoinDialog$2);

}

