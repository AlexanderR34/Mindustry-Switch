#include "mindustry/gen/Musics.h"
#include "arc/assets/AssetDescriptor.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_19.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_18.h"
#include "mindustry/gen/Musics.h"
#include "arc/func/Cons.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_20.h"
#include "java/lang/String.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_26.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_25.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_28.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_27.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_22.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_21.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_24.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_23.h"
#include "arc/Core.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_29.h"
#include "arc/assets/AssetManager.h"
#include "java/lang/Object.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_31.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_30.h"
#include "arc/audio/Music.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_17.h"
#include "mindustry/gen/Musics_invoke_arc_func_Cons_16.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_mindustry_gen_Musics_boss1;
jobject SF_mindustry_gen_Musics_boss2;
jobject SF_mindustry_gen_Musics_editor;
jobject SF_mindustry_gen_Musics_fine;
jobject SF_mindustry_gen_Musics_game1;
jobject SF_mindustry_gen_Musics_game2;
jobject SF_mindustry_gen_Musics_game3;
jobject SF_mindustry_gen_Musics_game4;
jobject SF_mindustry_gen_Musics_game5;
jobject SF_mindustry_gen_Musics_game6;
jobject SF_mindustry_gen_Musics_game7;
jobject SF_mindustry_gen_Musics_game8;
jobject SF_mindustry_gen_Musics_game9;
jobject SF_mindustry_gen_Musics_land;
jobject SF_mindustry_gen_Musics_launch;
jobject SF_mindustry_gen_Musics_menu;

void mark_mindustry_gen_Musics(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_gen_Musics_boss1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_boss1)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_boss1, mark, depth + 1);
		if (SF_mindustry_gen_Musics_boss2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_boss2)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_boss2, mark, depth + 1);
		if (SF_mindustry_gen_Musics_editor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_editor)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_editor, mark, depth + 1);
		if (SF_mindustry_gen_Musics_fine)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_fine)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_fine, mark, depth + 1);
		if (SF_mindustry_gen_Musics_game1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_game1)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_game1, mark, depth + 1);
		if (SF_mindustry_gen_Musics_game2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_game2)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_game2, mark, depth + 1);
		if (SF_mindustry_gen_Musics_game3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_game3)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_game3, mark, depth + 1);
		if (SF_mindustry_gen_Musics_game4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_game4)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_game4, mark, depth + 1);
		if (SF_mindustry_gen_Musics_game5)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_game5)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_game5, mark, depth + 1);
		if (SF_mindustry_gen_Musics_game6)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_game6)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_game6, mark, depth + 1);
		if (SF_mindustry_gen_Musics_game7)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_game7)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_game7, mark, depth + 1);
		if (SF_mindustry_gen_Musics_game8)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_game8)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_game8, mark, depth + 1);
		if (SF_mindustry_gen_Musics_game9)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_game9)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_game9, mark, depth + 1);
		if (SF_mindustry_gen_Musics_land)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_land)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_land, mark, depth + 1);
		if (SF_mindustry_gen_Musics_launch)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_launch)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_launch, mark, depth + 1);
		if (SF_mindustry_gen_Musics_menu)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Musics_menu)->clazz)->markFunction)((jobject) SF_mindustry_gen_Musics_menu, mark, depth + 1);
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
	auto self = (mindustry_gen_Musics *) object;
}

void init_mindustry_gen_Musics(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_load(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:load", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	{
	LINE_NUMBER(40);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/boss1.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_16);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(41);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/boss2.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_17);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(42);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/editor.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_18);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(43);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/fine.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_19);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(44);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/game1.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_20);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(45);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/game2.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_21);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(46);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/game3.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_22);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(47);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/game4.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_23);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(48);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/game5.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_24(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_24 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_24);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(49);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/game6.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_25(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_25 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_25);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(50);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/game7.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_26(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_26 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_26);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(51);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/game8.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_27(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_27 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_27);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(52);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/game9.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_28(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_28 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_28);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(53);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/land.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_29(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_29 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_29);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(54);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/launch.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_30(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_30 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_30);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(55);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_assets;
	sp[0].o = (jobject)((func_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_assets_AssetManager_load_java_lang_String_java_lang_Class_R_arc_assets_AssetDescriptor])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"music/menu.ogg"_j))), (((jobject) &class_arc_audio_Music)));
	{ /* InvokeDynamic */
		clinit_mindustry_gen_Musics_invoke_arc_func_Cons_31(ctx);
		auto proxy = (mindustry_gen_Musics_invoke_arc_func_Cons_31 *) gcAlloc(ctx, &class_mindustry_gen_Musics_invoke_arc_func_Cons_31);
		sp[1].o = (jobject) proxy;
	}
	((arc_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_loaded = (jref) sp[1].o;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$15_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$15", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(55);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_menu = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$14_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$14", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(54);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_launch = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$13_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$13", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(53);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_land = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$12_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$12", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(52);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game9 = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$11_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$11", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(51);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game8 = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$10_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$10", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(50);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game7 = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$9_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$9", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(49);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game6 = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$8_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$8", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(48);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game5 = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$7_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$7", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(47);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game4 = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$6_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$6", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(46);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game3 = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$5_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$5", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(45);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game2 = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$4_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(44);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game1 = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$3_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$3", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(43);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_fine = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$2_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(42);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_editor = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$1_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(41);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_boss2 = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Musics_lambda$load$0_arc_audio_Music(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:lambda$load$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(40);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_boss1 = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_gen_Musics(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Musics:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Musics(ctx);
	{
	LINE_NUMBER(7);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_boss1 = sp[0].o;
	LINE_NUMBER(9);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_boss2 = sp[0].o;
	LINE_NUMBER(11);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_editor = sp[0].o;
	LINE_NUMBER(13);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_fine = sp[0].o;
	LINE_NUMBER(15);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game1 = sp[0].o;
	LINE_NUMBER(17);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game2 = sp[0].o;
	LINE_NUMBER(19);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game3 = sp[0].o;
	LINE_NUMBER(21);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game4 = sp[0].o;
	LINE_NUMBER(23);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game5 = sp[0].o;
	LINE_NUMBER(25);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game6 = sp[0].o;
	LINE_NUMBER(27);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game7 = sp[0].o;
	LINE_NUMBER(29);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game8 = sp[0].o;
	LINE_NUMBER(31);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_game9 = sp[0].o;
	LINE_NUMBER(33);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_land = sp[0].o;
	LINE_NUMBER(35);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_launch = sp[0].o;
	LINE_NUMBER(37);
	clinit_arc_audio_Music(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_audio_Music);
	init_arc_audio_Music(ctx, sp[0].o);
	clinit_mindustry_gen_Musics(ctx);
	SF_mindustry_gen_Musics_menu = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_Musics[] {
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
	{ "boss1", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_boss1, "Larc/audio/Music;", 9 },
	{ "boss2", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_boss2, "Larc/audio/Music;", 9 },
	{ "editor", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_editor, "Larc/audio/Music;", 9 },
	{ "fine", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_fine, "Larc/audio/Music;", 9 },
	{ "game1", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_game1, "Larc/audio/Music;", 9 },
	{ "game2", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_game2, "Larc/audio/Music;", 9 },
	{ "game3", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_game3, "Larc/audio/Music;", 9 },
	{ "game4", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_game4, "Larc/audio/Music;", 9 },
	{ "game5", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_game5, "Larc/audio/Music;", 9 },
	{ "game6", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_game6, "Larc/audio/Music;", 9 },
	{ "game7", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_game7, "Larc/audio/Music;", 9 },
	{ "game8", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_game8, "Larc/audio/Music;", 9 },
	{ "game9", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_game9, "Larc/audio/Music;", 9 },
	{ "land", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_land, "Larc/audio/Music;", 9 },
	{ "launch", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_launch, "Larc/audio/Music;", 9 },
	{ "menu", &class_arc_audio_Music, (intptr_t) &SF_mindustry_gen_Musics_menu, "Larc/audio/Music;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_Musics, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_gen_Musics_load, 0, "()V", 9 },
	{ "lambda$load$15", (intptr_t) SM_mindustry_gen_Musics_lambda$load$15_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$14", (intptr_t) SM_mindustry_gen_Musics_lambda$load$14_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$13", (intptr_t) SM_mindustry_gen_Musics_lambda$load$13_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$12", (intptr_t) SM_mindustry_gen_Musics_lambda$load$12_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$11", (intptr_t) SM_mindustry_gen_Musics_lambda$load$11_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$10", (intptr_t) SM_mindustry_gen_Musics_lambda$load$10_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$9", (intptr_t) SM_mindustry_gen_Musics_lambda$load$9_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$8", (intptr_t) SM_mindustry_gen_Musics_lambda$load$8_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$7", (intptr_t) SM_mindustry_gen_Musics_lambda$load$7_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$6", (intptr_t) SM_mindustry_gen_Musics_lambda$load$6_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$5", (intptr_t) SM_mindustry_gen_Musics_lambda$load$5_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$4", (intptr_t) SM_mindustry_gen_Musics_lambda$load$4_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$3", (intptr_t) SM_mindustry_gen_Musics_lambda$load$3_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$2", (intptr_t) SM_mindustry_gen_Musics_lambda$load$2_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$1", (intptr_t) SM_mindustry_gen_Musics_lambda$load$1_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "lambda$load$0", (intptr_t) SM_mindustry_gen_Musics_lambda$load$0_arc_audio_Music, 0, "(Larc/audio/Music;)V", 4106 },
	{ "<clinit>", (intptr_t) clinit_mindustry_gen_Musics, 0, "()V", 8 },
};

Class class_mindustry_gen_Musics{
		.nativeName = (intptr_t) "mindustry/gen/Musics",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Musics),
		.classVtable = (intptr_t) vtable_mindustry_gen_Musics,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Musics,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_Musics,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 19,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Musics = registerClass(&class_mindustry_gen_Musics);

}
