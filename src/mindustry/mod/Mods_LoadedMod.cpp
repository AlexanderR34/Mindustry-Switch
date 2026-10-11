#include "mindustry/mod/Mods_LoadedMod.h"
#include "arc/graphics/GLTexture.h"
#include "mindustry/core/Version.h"
#include "arc/files/Fi.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "mindustry/mod/Mods.h"
#include "arc/struct/Seq.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/mod/Mods_ModMeta.h"
#include "arc/Settings.h"
#include "mindustry/mod/Mod.h"
#include "java/util/Locale.h"
#include "mindustry/mod/Mods_ModState.h"
#include "arc/util/Disposable.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "java/lang/annotation/Annotation.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/Texture.h"
#include "mindustry/core/UI.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Object.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "mindustry/type/Publishable.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/Vars.h"
#include "java/lang/ClassLoader.h"

extern "C" {


void mark_mindustry_mod_Mods$LoadedMod(jobject object, jint mark, jint depth) {
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
	auto self = (mindustry_mod_Mods$LoadedMod *) object;
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
	if (self->F_root)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_root)->clazz)->markFunction)((jobject) self->F_root, mark, depth + 1);
	if (self->F_main)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_main)->clazz)->markFunction)((jobject) self->F_main, mark, depth + 1);
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_meta)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_meta)->clazz)->markFunction)((jobject) self->F_meta, mark, depth + 1);
	if (self->F_dependencies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dependencies)->clazz)->markFunction)((jobject) self->F_dependencies, mark, depth + 1);
	if (self->F_softDependencies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_softDependencies)->clazz)->markFunction)((jobject) self->F_softDependencies, mark, depth + 1);
	if (self->F_missingDependencies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_missingDependencies)->clazz)->markFunction)((jobject) self->F_missingDependencies, mark, depth + 1);
	if (self->F_missingSoftDependencies)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_missingSoftDependencies)->clazz)->markFunction)((jobject) self->F_missingSoftDependencies, mark, depth + 1);
	if (self->F_erroredContent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_erroredContent)->clazz)->markFunction)((jobject) self->F_erroredContent, mark, depth + 1);
	if (self->F_state)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_state)->clazz)->markFunction)((jobject) self->F_state, mark, depth + 1);
	if (self->F_iconTexture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_iconTexture)->clazz)->markFunction)((jobject) self->F_iconTexture, mark, depth + 1);
	if (self->F_loader)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loader)->clazz)->markFunction)((jobject) self->F_loader, mark, depth + 1);
}

void clinit_mindustry_mod_Mods$LoadedMod(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_mindustry_mod_Mods$LoadedMod_arc_files_Fi_arc_files_Fi_mindustry_mod_Mod_java_lang_ClassLoader_mindustry_mod_Mods$ModMeta(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_mod_Mods$LoadedMod(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(1270);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(1254);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_dependencies = (jref) sp[1].o;
	LINE_NUMBER(1256);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_softDependencies = (jref) sp[1].o;
	LINE_NUMBER(1258);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_missingDependencies = (jref) sp[1].o;
	LINE_NUMBER(1260);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_missingSoftDependencies = (jref) sp[1].o;
	LINE_NUMBER(1262);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_erroredContent = (jref) sp[1].o;
	LINE_NUMBER(1264);
	sp[0].o = frame[0].o;
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_enabled;
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_state = (jref) sp[1].o;
	LINE_NUMBER(1271);
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_root = (jref) (frame[2].o);
	LINE_NUMBER(1272);
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(1273);
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_loader = (jref) (frame[4].o);
	LINE_NUMBER(1274);
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_main = (jref) (frame[3].o);
	LINE_NUMBER(1275);
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_meta = (jref) (frame[5].o);
	LINE_NUMBER(1276);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK((frame[5].o)))->F_name;
	clinit_java_util_Locale(ctx);
	sp[2].o = (jobject)SF_java_util_Locale_ROOT;
	sp[1].o = (jobject)((func_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_toLowerCase_java_util_Locale_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" "_j))), (((jobject) createStringLiteral(ctx, u8"-"_j))));
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(1277);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Mods$LoadedMod_isJava_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:isJava", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1281);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_meta;
	if (((jint)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_java) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_main;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_main;
	if (sp[0].o == nullptr) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:getRepo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1286);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"mod-\u0001-repo"_j.string, 1, sp[1].o);
	sp[2].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_meta;
	sp[2].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[2].o))->F_repo;
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_Mods$LoadedMod_setRepo_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:setRepo", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1290);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"mod-\u0001-repo"_j.string, 1, sp[1].o);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(1291);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Mods$LoadedMod_enabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:enabled", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1294);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_enabled;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_state;
	clinit_mindustry_mod_Mods$ModState(ctx);
	sp[1].o = (jobject)SF_mindustry_mod_Mods$ModState_contentErrors;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Mods$LoadedMod_shouldBeEnabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:shouldBeEnabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1298);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"mod-\u0001-enabled"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Mods$LoadedMod_failed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:failed", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1302);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"mod-\u0001-failed"_j.string, 1, sp[1].o);
	jint temp0 = (jint)((func_arc_Settings_getBool_java_lang_String_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getBool_java_lang_String_boolean_R_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Mods$LoadedMod_hasUnmetDependencies_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:hasUnmetDependencies", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1306);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_missingDependencies;
	jint temp0 = (jint)((func_arc_struct_Seq_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Mods$LoadedMod_hasContentErrors_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:hasContentErrors", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1310);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_erroredContent;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:isSupported", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1316);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(1318);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_isOutdated_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isOutdated_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
	{
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_isBlacklisted_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isBlacklisted_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(1320);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_minGameVersion;
	jint temp0 = (jint)SM_mindustry_core_Version_isAtLeast_java_lang_String_R_boolean(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Mods$LoadedMod_isBlacklisted_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:isBlacklisted", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1325);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_meta;
	jint temp0 = (jint)((func_mindustry_mod_Mods$ModMeta_isBlacklisted_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods$ModMeta_isBlacklisted_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Mods$LoadedMod_isOutdated_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:isOutdated", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1330);
	jint temp0 = (jint)((func_mindustry_mod_Mods$LoadedMod_getMinMajor_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_getMinMajor_R_int])(ctx, (frame[0].o));
	jint temp1 = (jint)((func_mindustry_mod_Mods$LoadedMod_isJava_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_mod_Mods$LoadedMod_isJava_R_boolean])(ctx, (frame[0].o));
	sp[0].i = temp0;
	sp += 1;
	if (temp1 == 0) goto label_1;
	}
	INST_SIPUSH(154);
	goto label_2;
label_1:;
	INST_SIPUSH(136);
label_2:;
	sp -= 2; if (sp[0].i >= sp[1].i) goto label_3;
	{
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_meta;
	if (((jint)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_legacyCompatible) != 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_mindustry_mod_Mods$LoadedMod_getMinMajor_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:getMinMajor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1334);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_meta;
	jint temp0 = (jint)((func_mindustry_mod_Mods$ModMeta_getMinMajor_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods$ModMeta_getMinMajor_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_Mods$LoadedMod_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1339);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_iconTexture;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(1340);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_iconTexture;
	((func_arc_graphics_Texture_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_dispose])(ctx, sp[0].o);
	LINE_NUMBER(1341);
	((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_iconTexture = (jref) (jobject(nullptr));
	}
label_1:;
	LINE_NUMBER(1343);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$LoadedMod_getSteamID_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:getSteamID", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1347);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-steamid"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_getString_java_lang_String_java_lang_String_R_java_lang_String])(ctx, sp[0].o, sp[1].o, (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_Mods$LoadedMod_addSteamID_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:addSteamID", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1352);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-steamid"_j.string, 1, sp[1].o);
	((func_arc_Settings_put_java_lang_String_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_put_java_lang_String_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[1].o));
	LINE_NUMBER(1353);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_mod_Mods$LoadedMod_removeSteamID(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:removeSteamID", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1357);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_settings;
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_name;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001-steamid"_j.string, 1, sp[1].o);
	((func_arc_Settings_remove_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_Settings_remove_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1358);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$LoadedMod_steamTitle_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:steamTitle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1362);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_name;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$LoadedMod_steamDescription_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:steamDescription", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1367);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_meta;
	sp[0].o = (jobject)((mindustry_mod_Mods$ModMeta *) NULL_CHECK(sp[0].o))->F_description;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$LoadedMod_steamTag_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:steamTag", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1372);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"mod"_j)));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$LoadedMod_createSteamFolder_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:createSteamFolder", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1377);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_file;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$LoadedMod_createSteamPreview_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:createSteamPreview", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1382);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"preview.png"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_mod_Mods$LoadedMod_prePublish_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:prePublish", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1387);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_file;
	jint temp0 = (jint)((func_arc_files_Fi_isDirectory_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_isDirectory_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(1388);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@mod.folder.missing"_j))));
	LINE_NUMBER(1389);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(1392);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"preview.png"_j))));
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_4;
	}
	{
	LINE_NUMBER(1393);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showErrorMessage_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showErrorMessage_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"@mod.preview.missing"_j))));
	LINE_NUMBER(1394);
	popStackFrame(ctx);
	return (jint(0));
	}
label_4:;
	{
	LINE_NUMBER(1397);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_mod_Mods$LoadedMod_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/mod/Mods$LoadedMod:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1402);
	sp[0].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[0].o);
	sp[1].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_root;
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_mod_Mods$LoadedMod *) NULL_CHECK((frame[0].o)))->F_name;
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"LoadedMod{file=\u0001, root=\u0001, name='\u0001'}"_j.string, 3, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_mod_Mods$LoadedMod;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field main
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[2]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Field iconTexture
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[11]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	{ // Field loader
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		fields[12]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getRepo
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[1]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_mod_Mods$LoadedMod[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_mindustry_mod_Mods$LoadedMod_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_mod_Mods$LoadedMod_getSteamID_R_java_lang_String,
	(void *) M_mindustry_mod_Mods$LoadedMod_addSteamID_java_lang_String,
	(void *) M_mindustry_mod_Mods$LoadedMod_removeSteamID,
	(void *) M_mindustry_mod_Mods$LoadedMod_steamTitle_R_java_lang_String,
	(void *) M_mindustry_mod_Mods$LoadedMod_steamDescription_R_java_lang_String,
	(void *) M_mindustry_mod_Mods$LoadedMod_steamTag_R_java_lang_String,
	(void *) M_mindustry_mod_Mods$LoadedMod_createSteamFolder_java_lang_String_R_arc_files_Fi,
	(void *) M_mindustry_mod_Mods$LoadedMod_createSteamPreview_java_lang_String_R_arc_files_Fi,
	(void *) M_mindustry_type_Publishable_extraTags_R_arc_struct_Seq,
	(void *) M_mindustry_type_Publishable_hasSteamID_R_boolean,
	(void *) M_mindustry_mod_Mods$LoadedMod_prePublish_R_boolean,
	(void *) M_mindustry_mod_Mods$LoadedMod_dispose,
	(void *) M_arc_util_Disposable_isDisposed_R_boolean,
	(void *) M_mindustry_mod_Mods$LoadedMod_isJava_R_boolean,
	(void *) M_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String,
	(void *) M_mindustry_mod_Mods$LoadedMod_setRepo_java_lang_String,
	(void *) M_mindustry_mod_Mods$LoadedMod_enabled_R_boolean,
	(void *) M_mindustry_mod_Mods$LoadedMod_shouldBeEnabled_R_boolean,
	(void *) M_mindustry_mod_Mods$LoadedMod_failed_R_boolean,
	(void *) M_mindustry_mod_Mods$LoadedMod_hasUnmetDependencies_R_boolean,
	(void *) M_mindustry_mod_Mods$LoadedMod_hasContentErrors_R_boolean,
	(void *) M_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean,
	(void *) M_mindustry_mod_Mods$LoadedMod_isBlacklisted_R_boolean,
	(void *) M_mindustry_mod_Mods$LoadedMod_isOutdated_R_boolean,
	(void *) M_mindustry_mod_Mods$LoadedMod_getMinMajor_R_int,
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
	{ "getSteamID", "()Ljava/lang/String;" },
	{ "addSteamID", "(Ljava/lang/String;)V" },
	{ "removeSteamID", "()V" },
	{ "steamTitle", "()Ljava/lang/String;" },
	{ "steamDescription", "()Ljava/lang/String;" },
	{ "steamTag", "()Ljava/lang/String;" },
	{ "createSteamFolder", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "createSteamPreview", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "extraTags", "()Larc/struct/Seq;" },
	{ "hasSteamID", "()Z" },
	{ "prePublish", "()Z" },
	{ "dispose", "()V" },
	{ "isDisposed", "()Z" },
	{ "isJava", "()Z" },
	{ "getRepo", "()Ljava/lang/String;" },
	{ "setRepo", "(Ljava/lang/String;)V" },
	{ "enabled", "()Z" },
	{ "shouldBeEnabled", "()Z" },
	{ "failed", "()Z" },
	{ "hasUnmetDependencies", "()Z" },
	{ "hasContentErrors", "()Z" },
	{ "isSupported", "()Z" },
	{ "isBlacklisted", "()Z" },
	{ "isOutdated", "()Z" },
	{ "getMinMajor", "()I" },
};

static jclass interfaces[] { &class_mindustry_type_Publishable, &class_arc_util_Disposable, };

static FieldMetadata fields[] {
	{ "file", &class_arc_files_Fi, offsetof(mindustry_mod_Mods$LoadedMod, F_file), "Larc/files/Fi;", 17 },
	{ "root", &class_arc_files_Fi, offsetof(mindustry_mod_Mods$LoadedMod, F_root), "Larc/files/Fi;", 17 },
	{ "main", &class_mindustry_mod_Mod, offsetof(mindustry_mod_Mods$LoadedMod, F_main), "Lmindustry/mod/Mod;", 17 },
	{ "name", &class_java_lang_String, offsetof(mindustry_mod_Mods$LoadedMod, F_name), "Ljava/lang/String;", 17 },
	{ "meta", &class_mindustry_mod_Mods$ModMeta, offsetof(mindustry_mod_Mods$LoadedMod, F_meta), "Lmindustry/mod/Mods$ModMeta;", 17 },
	{ "dependencies", &class_arc_struct_Seq, offsetof(mindustry_mod_Mods$LoadedMod, F_dependencies), "Larc/struct/Seq;", 1 },
	{ "softDependencies", &class_arc_struct_Seq, offsetof(mindustry_mod_Mods$LoadedMod, F_softDependencies), "Larc/struct/Seq;", 1 },
	{ "missingDependencies", &class_arc_struct_Seq, offsetof(mindustry_mod_Mods$LoadedMod, F_missingDependencies), "Larc/struct/Seq;", 1 },
	{ "missingSoftDependencies", &class_arc_struct_Seq, offsetof(mindustry_mod_Mods$LoadedMod, F_missingSoftDependencies), "Larc/struct/Seq;", 1 },
	{ "erroredContent", &class_arc_struct_ObjectSet, offsetof(mindustry_mod_Mods$LoadedMod, F_erroredContent), "Larc/struct/ObjectSet;", 1 },
	{ "state", &class_mindustry_mod_Mods$ModState, offsetof(mindustry_mod_Mods$LoadedMod, F_state), "Lmindustry/mod/Mods$ModState;", 1 },
	{ "iconTexture", &class_arc_graphics_Texture, offsetof(mindustry_mod_Mods$LoadedMod, F_iconTexture), "Larc/graphics/Texture;", 1 },
	{ "loader", &class_java_lang_ClassLoader, offsetof(mindustry_mod_Mods$LoadedMod, F_loader), "Ljava/lang/ClassLoader;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_mod_Mods$LoadedMod_arc_files_Fi_arc_files_Fi_mindustry_mod_Mod_java_lang_ClassLoader_mindustry_mod_Mods$ModMeta, 0, "(Larc/files/Fi;Larc/files/Fi;Lmindustry/mod/Mod;Ljava/lang/ClassLoader;Lmindustry/mod/Mods$ModMeta;)V", 1 },
	{ "isJava", (intptr_t) M_mindustry_mod_Mods$LoadedMod_isJava_R_boolean, VTABLE_mindustry_mod_Mods$LoadedMod_isJava_R_boolean, "()Z", 1 },
	{ "getRepo", (intptr_t) M_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String, VTABLE_mindustry_mod_Mods$LoadedMod_getRepo_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "setRepo", (intptr_t) M_mindustry_mod_Mods$LoadedMod_setRepo_java_lang_String, VTABLE_mindustry_mod_Mods$LoadedMod_setRepo_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "enabled", (intptr_t) M_mindustry_mod_Mods$LoadedMod_enabled_R_boolean, VTABLE_mindustry_mod_Mods$LoadedMod_enabled_R_boolean, "()Z", 1 },
	{ "shouldBeEnabled", (intptr_t) M_mindustry_mod_Mods$LoadedMod_shouldBeEnabled_R_boolean, VTABLE_mindustry_mod_Mods$LoadedMod_shouldBeEnabled_R_boolean, "()Z", 1 },
	{ "failed", (intptr_t) M_mindustry_mod_Mods$LoadedMod_failed_R_boolean, VTABLE_mindustry_mod_Mods$LoadedMod_failed_R_boolean, "()Z", 1 },
	{ "hasUnmetDependencies", (intptr_t) M_mindustry_mod_Mods$LoadedMod_hasUnmetDependencies_R_boolean, VTABLE_mindustry_mod_Mods$LoadedMod_hasUnmetDependencies_R_boolean, "()Z", 1 },
	{ "hasContentErrors", (intptr_t) M_mindustry_mod_Mods$LoadedMod_hasContentErrors_R_boolean, VTABLE_mindustry_mod_Mods$LoadedMod_hasContentErrors_R_boolean, "()Z", 1 },
	{ "isSupported", (intptr_t) M_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean, VTABLE_mindustry_mod_Mods$LoadedMod_isSupported_R_boolean, "()Z", 1 },
	{ "isBlacklisted", (intptr_t) M_mindustry_mod_Mods$LoadedMod_isBlacklisted_R_boolean, VTABLE_mindustry_mod_Mods$LoadedMod_isBlacklisted_R_boolean, "()Z", 1 },
	{ "isOutdated", (intptr_t) M_mindustry_mod_Mods$LoadedMod_isOutdated_R_boolean, VTABLE_mindustry_mod_Mods$LoadedMod_isOutdated_R_boolean, "()Z", 1 },
	{ "getMinMajor", (intptr_t) M_mindustry_mod_Mods$LoadedMod_getMinMajor_R_int, VTABLE_mindustry_mod_Mods$LoadedMod_getMinMajor_R_int, "()I", 1 },
	{ "dispose", (intptr_t) M_mindustry_mod_Mods$LoadedMod_dispose, VTABLE_mindustry_mod_Mods$LoadedMod_dispose, "()V", 1 },
	{ "getSteamID", (intptr_t) M_mindustry_mod_Mods$LoadedMod_getSteamID_R_java_lang_String, VTABLE_mindustry_mod_Mods$LoadedMod_getSteamID_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "addSteamID", (intptr_t) M_mindustry_mod_Mods$LoadedMod_addSteamID_java_lang_String, VTABLE_mindustry_mod_Mods$LoadedMod_addSteamID_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "removeSteamID", (intptr_t) M_mindustry_mod_Mods$LoadedMod_removeSteamID, VTABLE_mindustry_mod_Mods$LoadedMod_removeSteamID, "()V", 1 },
	{ "steamTitle", (intptr_t) M_mindustry_mod_Mods$LoadedMod_steamTitle_R_java_lang_String, VTABLE_mindustry_mod_Mods$LoadedMod_steamTitle_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "steamDescription", (intptr_t) M_mindustry_mod_Mods$LoadedMod_steamDescription_R_java_lang_String, VTABLE_mindustry_mod_Mods$LoadedMod_steamDescription_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "steamTag", (intptr_t) M_mindustry_mod_Mods$LoadedMod_steamTag_R_java_lang_String, VTABLE_mindustry_mod_Mods$LoadedMod_steamTag_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "createSteamFolder", (intptr_t) M_mindustry_mod_Mods$LoadedMod_createSteamFolder_java_lang_String_R_arc_files_Fi, VTABLE_mindustry_mod_Mods$LoadedMod_createSteamFolder_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "createSteamPreview", (intptr_t) M_mindustry_mod_Mods$LoadedMod_createSteamPreview_java_lang_String_R_arc_files_Fi, VTABLE_mindustry_mod_Mods$LoadedMod_createSteamPreview_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 1 },
	{ "prePublish", (intptr_t) M_mindustry_mod_Mods$LoadedMod_prePublish_R_boolean, VTABLE_mindustry_mod_Mods$LoadedMod_prePublish_R_boolean, "()Z", 1 },
	{ "toString", (intptr_t) M_mindustry_mod_Mods$LoadedMod_toString_R_java_lang_String, VTABLE_mindustry_mod_Mods$LoadedMod_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_mindustry_mod_Mods$LoadedMod{
		.nativeName = (intptr_t) "mindustry/mod/Mods$LoadedMod",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_mod_Mods$LoadedMod),
		.classVtable = (intptr_t) vtable_mindustry_mod_Mods$LoadedMod,
		.staticInitializer = (intptr_t) clinit_mindustry_mod_Mods$LoadedMod,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_mod_Mods$LoadedMod,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_mindustry_mod_Mods,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 2,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 24,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 36,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_mod_Mods$LoadedMod = registerClass(&class_mindustry_mod_Mods$LoadedMod);

}

