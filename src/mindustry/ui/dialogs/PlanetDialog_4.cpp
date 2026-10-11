#include "mindustry/ui/dialogs/PlanetDialog_4.h"
#include "mindustry/ui/dialogs/PlanetDialog_4.h"
#include "java/lang/Object.h"
#include "arc/assets/loaders/TextureLoader_TextureParameter.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "mindustry/ui/dialogs/PlanetDialog.h"

extern "C" {


void mark_mindustry_ui_dialogs_PlanetDialog$4(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_loaders_TextureLoader$TextureParameter(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_PlanetDialog$4 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_PlanetDialog$4(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_TextureLoader$TextureParameter(ctx);
}

void init_mindustry_ui_dialogs_PlanetDialog$4_mindustry_ui_dialogs_PlanetDialog(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/PlanetDialog$4:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_PlanetDialog$4(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	((mindustry_ui_dialogs_PlanetDialog$4 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_arc_assets_loaders_TextureLoader$TextureParameter(ctx, (frame[0].o));
	LINE_NUMBER(230);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[2].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[1].o))->F_magFilter = (jref) sp[2].o;
	((arc_assets_loaders_TextureLoader$TextureParameter *) NULL_CHECK(sp[0].o))->F_minFilter = (jref) sp[2].o;
	LINE_NUMBER(229);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_PlanetDialog$4[] {
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
	{ "this$0", &class_mindustry_ui_dialogs_PlanetDialog, offsetof(mindustry_ui_dialogs_PlanetDialog$4, F_this$0), "Lmindustry/ui/dialogs/PlanetDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_PlanetDialog$4_mindustry_ui_dialogs_PlanetDialog, 0, "(Lmindustry/ui/dialogs/PlanetDialog;)V", 0 },
};

Class class_mindustry_ui_dialogs_PlanetDialog$4{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/PlanetDialog$4",
		.parentClass = (intptr_t) &class_arc_assets_loaders_TextureLoader$TextureParameter,
		.size = sizeof(mindustry_ui_dialogs_PlanetDialog$4),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_PlanetDialog$4,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_PlanetDialog$4,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_PlanetDialog$4,
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
static bool registered_mindustry_ui_dialogs_PlanetDialog$4 = registerClass(&class_mindustry_ui_dialogs_PlanetDialog$4);

}

