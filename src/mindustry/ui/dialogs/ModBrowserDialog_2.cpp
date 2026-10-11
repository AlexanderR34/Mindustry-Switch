#include "mindustry/ui/dialogs/ModBrowserDialog_2.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_2.h"
#include "arc/util/Http_HttpRequest.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_2_invoke_arc_func_Cons_3.h"
#include "arc/graphics/GLTexture.h"
#include "arc/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "mindustry/ui/BorderImage.h"
#include "mindustry/ui/dialogs/ModBrowserDialog.h"
#include "arc/util/Http_HttpStatus.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_2_invoke_arc_func_Cons_2.h"
#include "java/util/concurrent/Future.h"
#include "arc/func/ConsT.h"
#include "arc/graphics/Color.h"
#include "arc/files/Fi.h"
#include "arc/Application.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_2_invoke_java_lang_Runnable_3.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_2_invoke_java_lang_Runnable_4.h"
#include "arc/scene/ui/Image.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_2_invoke_java_lang_Runnable_5.h"
#include "java/lang/String.h"
#include "mindustry/ui/dialogs/ModBrowserDialog_2_invoke_arc_func_ConsT_1.h"
#include "arc/scene/style/Drawable.h"
#include "java/lang/Throwable.h"
#include "arc/scene/ui/layout/Scl.h"
#include "arc/graphics/g2d/TextureAtlas.h"
#include "java/lang/Exception.h"
#include "mindustry/gen/Tex.h"
#include "arc/Core.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/util/concurrent/ExecutorService.h"
#include "arc/util/Log.h"
#include "arc/Files.h"
#include "arc/graphics/Texture.h"
#include "arc/util/Http_HttpStatusException.h"
#include "mindustry/mod/ModListing.h"
#include "java/lang/CharSequence.h"
#include "arc/util/Strings.h"
#include "java/lang/Object.h"
#include "mindustry/graphics/Pal.h"
#include "arc/scene/Element.h"
#include "arc/util/Http.h"
#include "arc/graphics/Texture_TextureFilter.h"
#include "arc/struct/ObjectSet.h"
#include "arc/struct/ObjectMap.h"
#include "arc/util/Http_HttpResponse.h"
#include "mindustry/Vars.h"

extern "C" {


void mark_mindustry_ui_dialogs_ModBrowserDialog$2(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_mindustry_ui_BorderImage(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_ui_dialogs_ModBrowserDialog$2 *) object;
	if (self->F_last)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_last)->clazz)->markFunction)((jobject) self->F_last, mark, depth + 1);
	if (self->F_val$installed)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$installed)->clazz)->markFunction)((jobject) self->F_val$installed, mark, depth + 1);
	if (self->F_val$repo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$repo)->clazz)->markFunction)((jobject) self->F_val$repo, mark, depth + 1);
	if (self->F_val$mod)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$mod)->clazz)->markFunction)((jobject) self->F_val$mod, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_mindustry_ui_dialogs_ModBrowserDialog$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_mindustry_ui_BorderImage(ctx);
}

void init_mindustry_ui_dialogs_ModBrowserDialog$2_mindustry_ui_dialogs_ModBrowserDialog_arc_struct_ObjectSet_java_lang_String_mindustry_mod_ModListing(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog$2:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(237);
	((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$installed = (jref) (frame[2].o);
	((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$repo = (jref) (frame[3].o);
	((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$mod = (jref) (frame[4].o);
	((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_mindustry_ui_BorderImage(ctx, (frame[0].o));
	LINE_NUMBER(241);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$installed;
	sp[2].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$repo;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[1].o, sp[2].o);
	sp += 1;
	if (temp0 == 0) goto label_2;
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
	sp[0].o = (jobject)((func_mindustry_ui_dialogs_ModBrowserDialog$2_border_arc_graphics_Color_R_mindustry_ui_BorderImage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog$2_border_arc_graphics_Color_R_mindustry_ui_BorderImage])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	clinit_mindustry_gen_Tex(ctx);
	sp[1].o = (jobject)SF_mindustry_gen_Tex_nomap;
	((func_mindustry_ui_dialogs_ModBrowserDialog$2_setDrawable_arc_scene_style_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog$2_setDrawable_arc_scene_style_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(243);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_arc_scene_ui_layout_Scl_scl_float_R_float(ctx, (jfloat(4.0f)));
	((mindustry_ui_BorderImage *) NULL_CHECK(sp[0].o))->F_pad = temp0;
	LINE_NUMBER(237);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog$2_draw(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog$2:draw", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(248);
	M_mindustry_ui_BorderImage_draw(ctx, (frame[0].o));
	LINE_NUMBER(251);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK(sp[0].o))->F_textureCache;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$repo;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK(sp[0].o))->F_textureCache;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$repo;
	sp[2].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[3].o = (jobject)SF_arc_Core_atlas;
	sp[3].o = (jobject)((func_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_graphics_g2d_TextureAtlas_find_java_lang_String_R_arc_graphics_g2d_TextureAtlas$AtlasRegion])(ctx, sp[3].o, (((jobject) createStringLiteral(ctx, u8"nomap"_j))));
	((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK(sp[2].o))->F_last = (jref) sp[3].o;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[3].o);
	LINE_NUMBER(254);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$mod;
	if (((jint)((mindustry_mod_ModListing *) NULL_CHECK(sp[0].o))->F_hasIcon) == 0) goto label_2;
	}
	{
	LINE_NUMBER(255);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_6;
	}
	{
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_files;
	sp[0].o = (jobject)((func_arc_Files_cache_java_lang_String_R_arc_files_Fi) resolveInterfaceMethod(ctx, &class_arc_Files, INDEX_arc_Files_cache_java_lang_String_R_arc_files_Fi, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"modIconCache"_j))));
	sp += 1;
	goto label_7;
	}
label_6:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_dataDirectory;
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"modIconCache"_j))));
	sp += 1;
	}
label_7:;
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	LINE_NUMBER(256);
	jint temp0 = (jint)((func_arc_files_Fi_mkdirs_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_mkdirs_R_boolean])(ctx, (frame[1].o));
	LINE_NUMBER(257);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$mod;
	sp[1].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK(sp[1].o))->F_repo;
	sp[2].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$mod;
	sp[2].o = (jobject)((mindustry_mod_ModListing *) NULL_CHECK(sp[2].o))->F_iconHash;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001_\u0001"_j.string, 2, sp[1].o, sp[2].o);
	sp[1].o = (jobject)SM_arc_util_Strings_sanitizeFilename_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001.png"_j.string, 1, sp[1].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(259);
	jint temp1 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[2].o));
	if (temp1 != 0) goto label_11;
	}
	{
	LINE_NUMBER(260);
	sp[0].o = frame[0].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$repo;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog$2_invoke_arc_func_ConsT_1(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog$2_invoke_arc_func_ConsT_1 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog$2_invoke_arc_func_ConsT_1);
		proxy->F_field2 = (jref) sp[2].o;
		proxy->F_field1 = (jref) sp[1].o;
		proxy->F_field0 = (jref) sp[0].o;
		sp[0].o = (jobject) proxy;
	}
	frame[3].o = sp[0].o;
	LINE_NUMBER(276);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$repo;
	sp[0].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))), (((jobject) createStringLiteral(ctx, u8"_"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(278);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"https://raw.githubusercontent.com/Anuken/MindustryMods/master/icons/\u0001"_j.string, 1, (frame[4].o));
	sp[0].o = (jobject)SM_arc_util_Http_get_java_lang_String_R_arc_util_Http$HttpRequest(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog$2_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog$2_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog$2_invoke_arc_func_Cons_2);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(279);
	sp[0].o = (jobject)((func_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest])(ctx, sp[0].o, sp[1].o);
	jint temp0 = 15000;
	LINE_NUMBER(288);
	sp[0].o = (jobject)((func_arc_util_Http$HttpRequest_timeout_int_R_arc_util_Http$HttpRequest) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_timeout_int_R_arc_util_Http$HttpRequest])(ctx, sp[0].o, temp0);
	sp[1].o = frame[3].o;
	LINE_NUMBER(289);
	((func_arc_util_Http$HttpRequest_submit_arc_func_ConsT) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_submit_arc_func_ConsT])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(290);
	goto label_2;
	}
label_11:;
	{
	LINE_NUMBER(291);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mainExecutor;
	sp[1].o = frame[0].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$repo;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog$2_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog$2_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog$2_invoke_java_lang_Runnable_3);
		proxy->F_field2 = (jref) sp[3].o;
		proxy->F_field1 = (jref) sp[2].o;
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future) resolveInterfaceMethod(ctx, &class_java_util_concurrent_ExecutorService, INDEX_java_util_concurrent_ExecutorService_submit_java_lang_Runnable_R_java_util_concurrent_Future, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(313);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK(sp[0].o))->F_textureCache;
	sp[1].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_val$repo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[1].o = (checkCast(ctx, &class_arc_graphics_g2d_TextureRegion, sp[0].o));
	LINE_NUMBER(314);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_last;
	if (sp[0].o == (frame[1].o)) goto label_20;
	}
	{
	LINE_NUMBER(315);
	((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_last = (jref) (frame[1].o);
	LINE_NUMBER(316);
	((func_mindustry_ui_dialogs_ModBrowserDialog$2_setDrawable_arc_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_ui_dialogs_ModBrowserDialog$2_setDrawable_arc_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	}
label_20:;
	LINE_NUMBER(318);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$4_arc_files_Fi_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog$2:lambda$draw$4", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(293);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_arc_files_Fi(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(294);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog$2_invoke_java_lang_Runnable_4(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog$2_invoke_java_lang_Runnable_4 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog$2_invoke_java_lang_Runnable_4);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[3].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(307);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(304);
	frame[3].o = sp[0].o;
	LINE_NUMBER(305);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[3].o));
	LINE_NUMBER(306);
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, (frame[1].o));
	}
label_5:;
	LINE_NUMBER(308);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$5_arc_graphics_Pixmap_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog$2:lambda$draw$5", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(296);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_graphics_Pixmap(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(297);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(298);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK(sp[0].o))->F_textureCache;
	sp[1].o = frame[2].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[2].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(299);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(302);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(300);
	frame[3].o = sp[0].o;
	LINE_NUMBER(301);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[3].o));
	}
label_7:;
	LINE_NUMBER(303);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$2_java_lang_String_arc_func_ConsT_java_lang_Throwable(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog$2:lambda$draw$2", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog$2(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(281);
	if ((isInstance(ctx, (frame[2].o), &class_arc_util_Http$HttpStatusException)) == 0) goto label_1;
	}
	{
	frame[3].o = (checkCast(ctx, &class_arc_util_Http$HttpStatusException, (frame[2].o)));
	sp[0].o = (jobject)((arc_util_Http$HttpStatusException *) NULL_CHECK((frame[3].o)))->F_status;
	clinit_arc_util_Http$HttpStatus(ctx);
	sp[1].o = (jobject)SF_arc_util_Http$HttpStatus_NOT_FOUND;
	if (sp[0].o == sp[1].o) goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(282);
	sp[0].o = (jobject)concatStringsRecipe(ctx, u8"https://cdn.jsdelivr.net/gh/anuken/mindustrymods/icons/\u0001"_j.string, 1, (frame[0].o));
	sp[0].o = (jobject)SM_arc_util_Http_get_java_lang_String_R_arc_util_Http$HttpRequest(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog$2_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog$2_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog$2_invoke_arc_func_Cons_3);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(283);
	sp[0].o = (jobject)((func_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_error_arc_func_Cons_R_arc_util_Http$HttpRequest])(ctx, sp[0].o, sp[1].o);
	jint temp0 = 15000;
	LINE_NUMBER(284);
	sp[0].o = (jobject)((func_arc_util_Http$HttpRequest_timeout_int_R_arc_util_Http$HttpRequest) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_timeout_int_R_arc_util_Http$HttpRequest])(ctx, sp[0].o, temp0);
	sp[1].o = frame[1].o;
	LINE_NUMBER(285);
	((func_arc_util_Http$HttpRequest_submit_arc_func_ConsT) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_Http$HttpRequest_submit_arc_func_ConsT])(ctx, sp[0].o, sp[1].o);
	}
label_3:;
	LINE_NUMBER(287);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$3_java_lang_Throwable(jcontext ctx, jobject param0) {
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog$2:lambda$draw$3", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_ui_dialogs_ModBrowserDialog$2(ctx);
	frame[0].o = param0;
	LINE_NUMBER(283);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$0_arc_files_Fi_java_lang_String_arc_util_Http$HttpResponse(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog$2:lambda$draw$0", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((func_arc_util_Http$HttpResponse_getResult_R_Array1_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_util_Http$HttpResponse_getResult_R_Array1_byte])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(262);
	clinit_arc_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Pixmap);
	init_arc_graphics_Pixmap_Array1_byte(ctx, sp[0].o, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(263);
	((func_arc_files_Fi_writeBytes_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_writeBytes_Array1_byte])(ctx, (frame[1].o), (frame[4].o));
	LINE_NUMBER(264);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_ui_dialogs_ModBrowserDialog$2_invoke_java_lang_Runnable_5(ctx);
		auto proxy = (mindustry_ui_dialogs_ModBrowserDialog$2_invoke_java_lang_Runnable_5 *) gcAlloc(ctx, &class_mindustry_ui_dialogs_ModBrowserDialog$2_invoke_java_lang_Runnable_5);
		proxy->F_field2 = (jref) (frame[2].o);
		proxy->F_field1 = (jref) (frame[5].o);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(274);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$1_arc_graphics_Pixmap_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/ui/dialogs/ModBrowserDialog$2:lambda$draw$1", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(266);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_graphics_Pixmap(ctx, sp[0].o, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(267);
	sp[0].o = frame[3].o;
	clinit_arc_graphics_Texture$TextureFilter(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Texture$TextureFilter_linear;
	((func_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_Texture_setFilter_arc_graphics_Texture$TextureFilter])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(268);
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((mindustry_ui_dialogs_ModBrowserDialog *) NULL_CHECK(sp[0].o))->F_textureCache;
	sp[1].o = frame[2].o;
	clinit_arc_graphics_g2d_TextureRegion(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_graphics_g2d_TextureRegion);
	init_arc_graphics_g2d_TextureRegion_arc_graphics_Texture(ctx, sp[2].o, (frame[3].o));
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(269);
	((func_arc_graphics_Pixmap_dispose) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_graphics_Pixmap_dispose])(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(272);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(270);
	frame[3].o = sp[0].o;
	LINE_NUMBER(271);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[3].o));
	}
label_7:;
	LINE_NUMBER(273);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_mindustry_ui_dialogs_ModBrowserDialog$2[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_arc_scene_Element_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog$2_draw,
	(void *) M_arc_scene_Element_act_float,
	(void *) M_arc_scene_Element_updateVisibility,
	(void *) M_arc_scene_Element_hasMouse_R_boolean,
	(void *) M_arc_scene_Element_hasKeyboard_R_boolean,
	(void *) M_arc_scene_Element_hasScroll_R_boolean,
	(void *) M_arc_scene_Element_requestKeyboard,
	(void *) M_arc_scene_Element_requestScroll,
	(void *) M_arc_scene_Element_fire_arc_scene_event_SceneEvent_R_boolean,
	(void *) M_arc_scene_Element_notify_arc_scene_event_SceneEvent_boolean_R_boolean,
	(void *) M_arc_scene_Element_hit_float_float_boolean_R_arc_scene_Element,
	(void *) M_arc_scene_Element_remove_R_boolean,
	(void *) M_arc_scene_Element_dragged_arc_func_Floatc2,
	(void *) M_arc_scene_Element_scrolled_arc_func_Floatc,
	(void *) M_arc_scene_Element_addListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_removeCaptureListener_arc_scene_event_EventListener_R_boolean,
	(void *) M_arc_scene_Element_getCaptureListeners_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_addAction_arc_scene_Action,
	(void *) M_arc_scene_Element_actions_Array1_arc_scene_Action,
	(void *) M_arc_scene_Element_removeAction_arc_scene_Action,
	(void *) M_arc_scene_Element_getActions_R_arc_struct_Seq,
	(void *) M_arc_scene_Element_hasActions_R_boolean,
	(void *) M_arc_scene_Element_clearActions,
	(void *) M_arc_scene_Element_clearListeners,
	(void *) M_arc_scene_Element_clear,
	(void *) M_arc_scene_Element_getScene_R_arc_scene_Scene,
	(void *) M_arc_scene_Element_setScene_arc_scene_Scene,
	(void *) M_arc_scene_Element_isDescendantOf_arc_func_Boolf_R_boolean,
	(void *) M_arc_scene_Element_isDescendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_isAscendantOf_arc_scene_Element_R_boolean,
	(void *) M_arc_scene_Element_hasParent_R_boolean,
	(void *) M_arc_scene_Element_isTouchable_R_boolean,
	(void *) M_arc_scene_Element_getX_int_R_float,
	(void *) M_arc_scene_Element_getY_int_R_float,
	(void *) M_arc_scene_Element_setPosition_float_float,
	(void *) M_arc_scene_Element_setPosition_float_float_int,
	(void *) M_arc_scene_Element_moveBy_float_float,
	(void *) M_arc_scene_Element_getWidth_R_float,
	(void *) M_arc_scene_Element_setWidth_float,
	(void *) M_arc_scene_Element_getHeight_R_float,
	(void *) M_arc_scene_Element_setHeight_float,
	(void *) M_arc_scene_Element_getTop_R_float,
	(void *) M_arc_scene_Element_getRight_R_float,
	(void *) M_arc_scene_Element_sizeChanged,
	(void *) M_arc_scene_Element_rotationChanged,
	(void *) M_arc_scene_Element_setSize_float,
	(void *) M_arc_scene_Element_setSize_float_float,
	(void *) M_arc_scene_Element_sizeBy_float,
	(void *) M_arc_scene_Element_sizeBy_float_float,
	(void *) M_arc_scene_Element_setBounds_float_float_float_float,
	(void *) M_arc_scene_Element_setOrigin_float_float,
	(void *) M_arc_scene_Element_setOrigin_int,
	(void *) M_arc_scene_Element_setScale_float,
	(void *) M_arc_scene_Element_setScale_float_float,
	(void *) M_arc_scene_Element_scaleBy_float,
	(void *) M_arc_scene_Element_scaleBy_float_float,
	(void *) M_arc_scene_Element_getRotation_R_float,
	(void *) M_arc_scene_Element_setRotation_float,
	(void *) M_arc_scene_Element_setRotationOrigin_float_int,
	(void *) M_arc_scene_Element_rotateBy_float,
	(void *) M_arc_scene_Element_setColor_float_float_float_float,
	(void *) M_arc_scene_Element_setColor_arc_graphics_Color,
	(void *) M_arc_scene_Element_toFront,
	(void *) M_arc_scene_Element_toBack,
	(void *) M_arc_scene_Element_getZIndex_R_int,
	(void *) M_arc_scene_Element_setZIndex_int,
	(void *) M_arc_scene_Element_clipBegin_R_boolean,
	(void *) M_arc_scene_Element_clipBegin_float_float_float_float_R_boolean,
	(void *) M_arc_scene_Element_clipEnd,
	(void *) M_arc_scene_Element_screenToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_stageToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToStageCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToParentCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_localToAscendantCoordinates_arc_scene_Element_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_Element_parentToLocalCoordinates_arc_math_geom_Vec2_R_arc_math_geom_Vec2,
	(void *) M_arc_scene_ui_Image_getMinWidth_R_float,
	(void *) M_arc_scene_ui_Image_getMinHeight_R_float,
	(void *) M_arc_scene_ui_Image_getPrefWidth_R_float,
	(void *) M_arc_scene_ui_Image_getPrefHeight_R_float,
	(void *) M_arc_scene_Element_getMaxWidth_R_float,
	(void *) M_arc_scene_Element_getMaxHeight_R_float,
	(void *) M_arc_scene_Element_setLayoutEnabled_boolean,
	(void *) M_arc_scene_Element_validate,
	(void *) M_arc_scene_Element_needsLayout_R_boolean,
	(void *) M_arc_scene_Element_invalidate,
	(void *) M_arc_scene_Element_invalidateHierarchy,
	(void *) M_arc_scene_Element_pack,
	(void *) M_arc_scene_Element_setFillParent_boolean,
	(void *) M_arc_scene_ui_Image_layout,
	(void *) M_arc_scene_Element_keepInStage,
	(void *) M_arc_scene_Element_setTranslation_float_float,
	(void *) M_arc_scene_Element_keyDown_arc_input_KeyCode_java_lang_Runnable,
	(void *) M_arc_scene_Element_keyDown_arc_func_Cons,
	(void *) M_arc_scene_Element_fireClick,
	(void *) M_arc_scene_Element_clicked_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_input_KeyCode_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_java_lang_Runnable_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_clicked_arc_func_Cons_arc_func_Cons_R_arc_scene_event_ClickListener,
	(void *) M_arc_scene_Element_tapped_java_lang_Runnable_R_arc_scene_event_InputListener,
	(void *) M_arc_scene_Element_hovered_java_lang_Runnable,
	(void *) M_arc_scene_Element_exited_java_lang_Runnable,
	(void *) M_arc_scene_Element_released_java_lang_Runnable,
	(void *) M_arc_scene_Element_change,
	(void *) M_arc_scene_Element_changed_java_lang_Runnable,
	(void *) M_arc_scene_Element_update_java_lang_Runnable_R_arc_scene_Element,
	(void *) M_arc_scene_Element_visible_arc_func_Boolp_R_arc_scene_Element,
	(void *) M_arc_scene_Element_touchable_arc_func_Prov,
	(void *) M_arc_scene_ui_Image_getRegion_R_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_scene_ui_Image_getDrawable_R_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_Image_setDrawable_arc_graphics_g2d_TextureRegion,
	(void *) M_arc_scene_ui_Image_setDrawable_arc_scene_style_Drawable,
	(void *) M_arc_scene_ui_Image_setScaling_arc_util_Scaling_R_arc_scene_ui_Image,
	(void *) M_arc_scene_ui_Image_setAlign_int,
	(void *) M_arc_scene_ui_Image_getImageX_R_float,
	(void *) M_arc_scene_ui_Image_getImageY_R_float,
	(void *) M_arc_scene_ui_Image_getImageWidth_R_float,
	(void *) M_arc_scene_ui_Image_getImageHeight_R_float,
	(void *) M_mindustry_ui_BorderImage_border_arc_graphics_Color_R_mindustry_ui_BorderImage,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$4_arc_files_Fi_java_lang_String,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$5_arc_graphics_Pixmap_java_lang_String,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$0_arc_files_Fi_java_lang_String_arc_util_Http$HttpResponse,
	(void *) M_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$1_arc_graphics_Pixmap_java_lang_String,
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
	{ "draw", "()V" },
	{ "act", "(F)V" },
	{ "updateVisibility", "()V" },
	{ "hasMouse", "()Z" },
	{ "hasKeyboard", "()Z" },
	{ "hasScroll", "()Z" },
	{ "requestKeyboard", "()V" },
	{ "requestScroll", "()V" },
	{ "fire", "(Larc/scene/event/SceneEvent;)Z" },
	{ "notify", "(Larc/scene/event/SceneEvent;Z)Z" },
	{ "hit", "(FFZ)Larc/scene/Element;" },
	{ "remove", "()Z" },
	{ "dragged", "(Larc/func/Floatc2;)V" },
	{ "scrolled", "(Larc/func/Floatc;)V" },
	{ "addListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getListeners", "()Larc/struct/Seq;" },
	{ "addCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "removeCaptureListener", "(Larc/scene/event/EventListener;)Z" },
	{ "getCaptureListeners", "()Larc/struct/Seq;" },
	{ "addAction", "(Larc/scene/Action;)V" },
	{ "actions", "([Larc/scene/Action;)V" },
	{ "removeAction", "(Larc/scene/Action;)V" },
	{ "getActions", "()Larc/struct/Seq;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getScene", "()Larc/scene/Scene;" },
	{ "setScene", "(Larc/scene/Scene;)V" },
	{ "isDescendantOf", "(Larc/func/Boolf;)Z" },
	{ "isDescendantOf", "(Larc/scene/Element;)Z" },
	{ "isAscendantOf", "(Larc/scene/Element;)Z" },
	{ "hasParent", "()Z" },
	{ "isTouchable", "()Z" },
	{ "getX", "(I)F" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "sizeChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(F)V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "setRotationOrigin", "(FI)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Larc/graphics/Color;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "getZIndex", "()I" },
	{ "setZIndex", "(I)V" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "stageToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToStageCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToParentCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "localToAscendantCoordinates", "(Larc/scene/Element;Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "parentToLocalCoordinates", "(Larc/math/geom/Vec2;)Larc/math/geom/Vec2;" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "validate", "()V" },
	{ "needsLayout", "()Z" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "layout", "()V" },
	{ "keepInStage", "()V" },
	{ "setTranslation", "(FF)V" },
	{ "keyDown", "(Larc/input/KeyCode;Ljava/lang/Runnable;)V" },
	{ "keyDown", "(Larc/func/Cons;)V" },
	{ "fireClick", "()V" },
	{ "clicked", "(Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/input/KeyCode;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Ljava/lang/Runnable;)Larc/scene/event/ClickListener;" },
	{ "clicked", "(Larc/func/Cons;Larc/func/Cons;)Larc/scene/event/ClickListener;" },
	{ "tapped", "(Ljava/lang/Runnable;)Larc/scene/event/InputListener;" },
	{ "hovered", "(Ljava/lang/Runnable;)V" },
	{ "exited", "(Ljava/lang/Runnable;)V" },
	{ "released", "(Ljava/lang/Runnable;)V" },
	{ "change", "()V" },
	{ "changed", "(Ljava/lang/Runnable;)V" },
	{ "update", "(Ljava/lang/Runnable;)Larc/scene/Element;" },
	{ "visible", "(Larc/func/Boolp;)Larc/scene/Element;" },
	{ "touchable", "(Larc/func/Prov;)V" },
	{ "getRegion", "()Larc/graphics/g2d/TextureRegion;" },
	{ "getDrawable", "()Larc/scene/style/Drawable;" },
	{ "setDrawable", "(Larc/graphics/g2d/TextureRegion;)V" },
	{ "setDrawable", "(Larc/scene/style/Drawable;)V" },
	{ "setScaling", "(Larc/util/Scaling;)Larc/scene/ui/Image;" },
	{ "setAlign", "(I)V" },
	{ "getImageX", "()F" },
	{ "getImageY", "()F" },
	{ "getImageWidth", "()F" },
	{ "getImageHeight", "()F" },
	{ "border", "(Larc/graphics/Color;)Lmindustry/ui/BorderImage;" },
	{ "lambda$draw$4", "(Larc/files/Fi;Ljava/lang/String;)V" },
	{ "lambda$draw$5", "(Larc/graphics/Pixmap;Ljava/lang/String;)V" },
	{ "lambda$draw$0", "(Larc/files/Fi;Ljava/lang/String;Larc/util/Http$HttpResponse;)V" },
	{ "lambda$draw$1", "(Larc/graphics/Pixmap;Ljava/lang/String;)V" },
};

static FieldMetadata fields[] {
	{ "last", &class_arc_graphics_g2d_TextureRegion, offsetof(mindustry_ui_dialogs_ModBrowserDialog$2, F_last), "Larc/graphics/g2d/TextureRegion;", 0 },
	{ "val$installed", &class_arc_struct_ObjectSet, offsetof(mindustry_ui_dialogs_ModBrowserDialog$2, F_val$installed), "Larc/struct/ObjectSet;", 4112 },
	{ "val$repo", &class_java_lang_String, offsetof(mindustry_ui_dialogs_ModBrowserDialog$2, F_val$repo), "Ljava/lang/String;", 4112 },
	{ "val$mod", &class_mindustry_mod_ModListing, offsetof(mindustry_ui_dialogs_ModBrowserDialog$2, F_val$mod), "Lmindustry/mod/ModListing;", 4112 },
	{ "this$0", &class_mindustry_ui_dialogs_ModBrowserDialog, offsetof(mindustry_ui_dialogs_ModBrowserDialog$2, F_this$0), "Lmindustry/ui/dialogs/ModBrowserDialog;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_ui_dialogs_ModBrowserDialog$2_mindustry_ui_dialogs_ModBrowserDialog_arc_struct_ObjectSet_java_lang_String_mindustry_mod_ModListing, 0, "(Lmindustry/ui/dialogs/ModBrowserDialog;Larc/struct/ObjectSet;Ljava/lang/String;Lmindustry/mod/ModListing;)V", 0 },
	{ "draw", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog$2_draw, VTABLE_mindustry_ui_dialogs_ModBrowserDialog$2_draw, "()V", 1 },
	{ "lambda$draw$4", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$4_arc_files_Fi_java_lang_String, VTABLE_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$4_arc_files_Fi_java_lang_String, "(Larc/files/Fi;Ljava/lang/String;)V", 4098 },
	{ "lambda$draw$5", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$5_arc_graphics_Pixmap_java_lang_String, VTABLE_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$5_arc_graphics_Pixmap_java_lang_String, "(Larc/graphics/Pixmap;Ljava/lang/String;)V", 4098 },
	{ "lambda$draw$2", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$2_java_lang_String_arc_func_ConsT_java_lang_Throwable, 0, "(Ljava/lang/String;Larc/func/ConsT;Ljava/lang/Throwable;)V", 4106 },
	{ "lambda$draw$3", (intptr_t) SM_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$3_java_lang_Throwable, 0, "(Ljava/lang/Throwable;)V", 4106 },
	{ "lambda$draw$0", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$0_arc_files_Fi_java_lang_String_arc_util_Http$HttpResponse, VTABLE_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$0_arc_files_Fi_java_lang_String_arc_util_Http$HttpResponse, "(Larc/files/Fi;Ljava/lang/String;Larc/util/Http$HttpResponse;)V", 4098 },
	{ "lambda$draw$1", (intptr_t) M_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$1_arc_graphics_Pixmap_java_lang_String, VTABLE_mindustry_ui_dialogs_ModBrowserDialog$2_lambda$draw$1_arc_graphics_Pixmap_java_lang_String, "(Larc/graphics/Pixmap;Ljava/lang/String;)V", 4098 },
};

Class class_mindustry_ui_dialogs_ModBrowserDialog$2{
		.nativeName = (intptr_t) "mindustry/ui/dialogs/ModBrowserDialog$2",
		.parentClass = (intptr_t) &class_mindustry_ui_BorderImage,
		.size = sizeof(mindustry_ui_dialogs_ModBrowserDialog$2),
		.classVtable = (intptr_t) vtable_mindustry_ui_dialogs_ModBrowserDialog$2,
		.staticInitializer = (intptr_t) clinit_mindustry_ui_dialogs_ModBrowserDialog$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_ui_dialogs_ModBrowserDialog$2,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 136,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_mindustry_ui_dialogs_ModBrowserDialog$2 = registerClass(&class_mindustry_ui_dialogs_ModBrowserDialog$2);

}

