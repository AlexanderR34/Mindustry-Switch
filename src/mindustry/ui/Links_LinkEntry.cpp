#include "mindustry/ui/Links_LinkEntry.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "arc/Core.h"
#include "java/lang/String.h"
#include "mindustry/ui/Links_LinkEntry.h"
#include "arc/util/I18NBundle.h"
#include "arc/scene/style/Drawable.h"
#include "mindustry/ui/Links.h"
#include "arc/graphics/Color.h"
#include "java/lang/CharSequence.h"

extern "C" {


void mark_mindustry_ui_Links$LinkEntry(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_ui_Links$LinkEntry *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_title)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_title)->clazz)->markFunction)((jobject) self->F_title, mark, depth + 1);
	if (self->F_description)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_description)->clazz)->markFunction)((jobject) self->F_description, mark, depth + 1);
	if (self->F_link)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_link)->clazz)->markFunction)((jobject) self->F_link, mark, depth + 1);
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
	if (self->F_icon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_icon)->clazz)->markFunction)((jobject) self->F_icon, mark, depth + 1);
}

void clinit_mindustry_ui_Links$LinkEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Links$LinkEntry:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Links$LinkEntry(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(46);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(47);
	((mindustry_ui_Links$LinkEntry *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[1].o);
	LINE_NUMBER(48);
	((mindustry_ui_Links$LinkEntry *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[4].o);
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"link.\u0001.description"_j.string, 1, (frame[1].o));
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	((mindustry_ui_Links$LinkEntry *) NULL_CHECK(sp[0].o))->F_description = (jref) sp[1].o;
	LINE_NUMBER(50);
	((mindustry_ui_Links$LinkEntry *) NULL_CHECK((frame[0].o)))->F_link = (jref) (frame[2].o);
	LINE_NUMBER(51);
	((mindustry_ui_Links$LinkEntry *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (frame[3].o);
	LINE_NUMBER(52);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_bundle;
	sp[2].o = (jobject)concatStringsRecipe(ctx, u8"link.\u0001.title"_j.string, 1, (frame[1].o));
	sp[3].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"-"_j))), (((jobject) createStringLiteral(ctx, u8" "_j))));
	sp[3].o = (jobject)SM_arc_util_Strings_capitalize_java_lang_String_R_java_lang_String(ctx, sp[3].o);
	sp[1].o = (jobject)((func_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_I18NBundle_get_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_ui_Links$LinkEntry *) NULL_CHECK(sp[0].o))->F_title = (jref) sp[1].o;
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Links$LinkEntry[] {
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
	{ "name", &class_java_lang_String, offsetof(mindustry_ui_Links$LinkEntry, F_name), "Ljava/lang/String;", 17 },
	{ "title", &class_java_lang_String, offsetof(mindustry_ui_Links$LinkEntry, F_title), "Ljava/lang/String;", 17 },
	{ "description", &class_java_lang_String, offsetof(mindustry_ui_Links$LinkEntry, F_description), "Ljava/lang/String;", 17 },
	{ "link", &class_java_lang_String, offsetof(mindustry_ui_Links$LinkEntry, F_link), "Ljava/lang/String;", 17 },
	{ "color", &class_arc_graphics_Color, offsetof(mindustry_ui_Links$LinkEntry, F_color), "Larc/graphics/Color;", 17 },
	{ "icon", &class_arc_scene_style_Drawable, offsetof(mindustry_ui_Links$LinkEntry, F_icon), "Larc/scene/style/Drawable;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color, 0, "(Ljava/lang/String;Ljava/lang/String;Larc/scene/style/Drawable;Larc/graphics/Color;)V", 1 },
};

Class class_mindustry_ui_Links$LinkEntry{
		.nativeName = (intptr_t) "mindustry/ui/Links$LinkEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_Links$LinkEntry),
		.classVtable = (intptr_t) vtable_mindustry_ui_Links$LinkEntry,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Links$LinkEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Links$LinkEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_ui_Links,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_Links$LinkEntry = registerClass(&class_mindustry_ui_Links$LinkEntry);

}

