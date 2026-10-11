#include "mindustry/ui/Links.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "mindustry/gen/Icon.h"
#include "java/lang/String.h"
#include "mindustry/ui/Links_LinkEntry.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/scene/style/Drawable.h"
#include "arc/graphics/Color.h"
#include "mindustry/ui/Links.h"

extern "C" {

jobject SF_mindustry_ui_Links_links;

void mark_mindustry_ui_Links(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_ui_Links_links)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_ui_Links_links)->clazz)->markFunction)((jobject) SF_mindustry_ui_Links_links, mark, depth + 1);
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
	auto self = (mindustry_ui_Links *) object;
}

void clinit_mindustry_ui_Links(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_ui_Links(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Links:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Links(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(13);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_ui_Links_createLinks(jcontext ctx) {
	jtype frame[9];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Links:createLinks", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Links(ctx);
	{
	LINE_NUMBER(17);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_ui_Links$LinkEntry, (12));
	jint temp0 = jint(0);
	clinit_mindustry_ui_Links$LinkEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Links$LinkEntry);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"discord"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"https://discord.gg/mindustry"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_discord;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"7289da"_j));
	LINE_NUMBER(18);
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[5].o);
	init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_ui_Links$LinkEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Links$LinkEntry);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"changelog"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"https://github.com/Anuken/Mindustry/releases"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_list;
	clinit_mindustry_graphics_Pal(ctx);
	sp[5].o = (jobject)SF_mindustry_graphics_Pal_accent;
	LINE_NUMBER(19);
	sp[5].o = (jobject)((func_arc_graphics_Color_cpy_R_arc_graphics_Color) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_arc_graphics_Color_cpy_R_arc_graphics_Color])(ctx, sp[5].o);
	init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_ui_Links$LinkEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Links$LinkEntry);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"trello"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"https://trello.com/b/aE2tcUwF"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_trello;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"026aa7"_j));
	LINE_NUMBER(20);
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[5].o);
	init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_ui_Links$LinkEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Links$LinkEntry);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"wiki"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"https://mindustrygame.github.io/wiki/"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_book;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"0f142f"_j));
	LINE_NUMBER(21);
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[5].o);
	init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_mindustry_ui_Links$LinkEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Links$LinkEntry);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"suggestions"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"https://github.com/Anuken/Mindustry-Suggestions/issues/new/choose/"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_add;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"ebebeb"_j));
	LINE_NUMBER(22);
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[5].o);
	init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_mindustry_ui_Links$LinkEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Links$LinkEntry);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"reddit"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"https://www.reddit.com/r/Mindustry/"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_redditAlien;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"ee593b"_j));
	LINE_NUMBER(23);
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[5].o);
	init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_mindustry_ui_Links$LinkEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Links$LinkEntry);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"itch.io"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"https://anuke.itch.io/mindustry"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_itchio;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"fa5c5c"_j));
	LINE_NUMBER(24);
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[5].o);
	init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	jint temp7 = 7;
	clinit_mindustry_ui_Links$LinkEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Links$LinkEntry);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"google-play"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"https://play.google.com/store/apps/details?id=io.anuke.mindustry"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_googleplay;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"689f38"_j));
	LINE_NUMBER(25);
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[5].o);
	init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp7) = sp[1].o;
	jint temp8 = 8;
	clinit_mindustry_ui_Links$LinkEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Links$LinkEntry);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"f-droid"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"https://f-droid.org/packages/io.anuke.mindustry/"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_android;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"026aa7"_j));
	LINE_NUMBER(26);
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[5].o);
	init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp8) = sp[1].o;
	jint temp9 = 9;
	clinit_mindustry_ui_Links$LinkEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Links$LinkEntry);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"github"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"https://github.com/Anuken/Mindustry/"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_github;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"24292e"_j));
	LINE_NUMBER(27);
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[5].o);
	init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp9) = sp[1].o;
	jint temp10 = 10;
	clinit_mindustry_ui_Links$LinkEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Links$LinkEntry);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"dev-builds"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"https://github.com/Anuken/MindustryBuilds"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_githubSquare;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"fafbfc"_j));
	LINE_NUMBER(28);
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[5].o);
	init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp10) = sp[1].o;
	jint temp11 = 11;
	clinit_mindustry_ui_Links$LinkEntry(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_ui_Links$LinkEntry);
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"bug"_j));
	sp[3].o = ((jobject) createStringLiteral(ctx, u8"https://github.com/Anuken/Mindustry/issues/new?assignees=&labels=bug&projects=&template=bug_report.yml"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[4].o = (jobject)SF_mindustry_gen_Icon_wrench;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"cbd97f"_j));
	LINE_NUMBER(29);
	sp[5].o = (jobject)SM_arc_graphics_Color_valueOf_java_lang_String_R_arc_graphics_Color(ctx, sp[5].o);
	init_mindustry_ui_Links$LinkEntry_java_lang_String_java_lang_String_arc_scene_style_Drawable_arc_graphics_Color(ctx, sp[1].o, sp[2].o, sp[3].o, sp[4].o, sp[5].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp11) = sp[1].o;
	clinit_mindustry_ui_Links(ctx);
	SF_mindustry_ui_Links_links = sp[0].o;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_ui_Links_getLinks_R_Array1_mindustry_ui_Links$LinkEntry(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/Links:getLinks", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_Links(ctx);
	{
	LINE_NUMBER(34);
	clinit_mindustry_ui_Links(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Links_links;
	if (sp[0].o != nullptr) goto label_1;
	}
	LINE_NUMBER(35);
	SM_mindustry_ui_Links_createLinks(ctx);
label_1:;
	{
	LINE_NUMBER(38);
	clinit_mindustry_ui_Links(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Links_links;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_Links[] {
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

static jclass innerClasses[] {
	&class_mindustry_ui_Links$LinkEntry,
};

static FieldMetadata fields[] {
	{ "links", getArrayClass(&class_mindustry_ui_Links$LinkEntry, 1), (intptr_t) &SF_mindustry_ui_Links_links, "[Lmindustry/ui/Links$LinkEntry;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_Links, 0, "()V", 1 },
	{ "createLinks", (intptr_t) SM_mindustry_ui_Links_createLinks, 0, "()V", 10 },
	{ "getLinks", (intptr_t) SM_mindustry_ui_Links_getLinks_R_Array1_mindustry_ui_Links$LinkEntry, 0, "()[Lmindustry/ui/Links$LinkEntry;", 9 },
};

Class class_mindustry_ui_Links{
		.nativeName = (intptr_t) "mindustry/ui/Links",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_ui_Links),
		.classVtable = (intptr_t) vtable_mindustry_ui_Links,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_Links,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_Links,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_ui_Links = registerClass(&class_mindustry_ui_Links);

}
