#include "mindustry/maps/MapPreviewLoader.h"
#include "arc/assets/AssetDescriptor.h"
#include "arc/assets/loaders/FileHandleResolver.h"
#include "mindustry/net/Net.h"
#include "arc/func/Prov.h"
#include "mindustry/game/EventType_ResetEvent.h"
#include "arc/assets/loaders/AssetLoader.h"
#include "java/nio/charset/Charset.h"
#include "arc/Events.h"
#include "java/lang/Boolean.h"
#include "arc/assets/AssetLoaderParameters.h"
#include "arc/files/Fi.h"
#include "mindustry/maps/MapPreviewLoader_invoke_arc_func_Prov_1.h"
#include "java/lang/Runnable.h"
#include "arc/func/Cons.h"
#include "java/lang/String.h"
#include "mindustry/maps/Maps.h"
#include "arc/assets/loaders/TextureLoader_TextureParameter.h"
#include "arc/assets/loaders/TextureLoader.h"
#include "mindustry/maps/MapPreviewLoader_invoke_java_lang_Runnable_3.h"
#include "mindustry/game/EventType_WorldLoadEvent.h"
#include "arc/struct/Seq.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "mindustry/maps/Map.h"
#include "arc/Core.h"
#include "java/lang/reflect/Field.h"
#include "arc/util/Log.h"
#include "mindustry/maps/MapPreviewLoader.h"
#include "arc/Files.h"
#include "mindustry/maps/MapPreviewLoader_invoke_java_lang_Runnable_2.h"
#include "arc/graphics/Texture.h"
#include "arc/assets/AssetManager.h"
#include "arc/util/Reflect.h"
#include "arc/util/Strings.h"
#include "mindustry/maps/MapPreviewLoader_invoke_arc_func_Cons_2.h"
#include "java/lang/Object.h"
#include "mindustry/maps/MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1.h"
#include "mindustry/game/EventType_Trigger.h"
#include "mindustry/ctype/Content.h"
#include "java/util/Objects.h"
#include "java/lang/Class.h"
#include "mindustry/maps/MapPreviewLoader_MapPreviewParameter.h"
#include "mindustry/Vars.h"
#include "mindustry/core/GameState.h"
#include "mindustry/maps/MapPreviewLoader_invoke_arc_func_Cons_3.h"

extern "C" {

jobject SF_mindustry_maps_MapPreviewLoader_check;

void mark_mindustry_maps_MapPreviewLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_maps_MapPreviewLoader_check)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_maps_MapPreviewLoader_check)->clazz)->markFunction)((jobject) SF_mindustry_maps_MapPreviewLoader_check, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_arc_assets_loaders_TextureLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_maps_MapPreviewLoader *) object;
}

void clinit_mindustry_maps_MapPreviewLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_arc_assets_loaders_TextureLoader(ctx);
}

void init_mindustry_maps_MapPreviewLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_MapPreviewLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(21);
	sp[0].o = frame[0].o;
	clinit_arc_Core(ctx);
	sp[1].o = (jobject)SF_arc_Core_files;
	sp[2].o = (jobject)SM_java_util_Objects_requireNonNull_java_lang_Object_R_java_lang_Object(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1(ctx);
		auto proxy = (mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1 *) gcAlloc(ctx, &class_mindustry_maps_MapPreviewLoader_invoke_arc_assets_loaders_FileHandleResolver_1);
		proxy->F_field0 = (jref) sp[1].o;
		sp[1].o = (jobject) proxy;
	}
	init_arc_assets_loaders_TextureLoader_arc_assets_loaders_FileHandleResolver(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(22);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_MapPreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:loadAsync", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = frame[3].o;
	sp[4].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, (frame[3].o));
	sp[3].o = (jobject)((func_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_arc_files_Fi_sibling_java_lang_String_R_arc_files_Fi])(ctx, sp[3].o, sp[4].o);
	M_arc_assets_loaders_TextureLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, (frame[4].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(32);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(28);
	frame[5].o = sp[0].o;
	LINE_NUMBER(29);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[5].o));
	LINE_NUMBER(30);
	frame[6].o = (checkCast(ctx, &class_mindustry_maps_MapPreviewLoader$MapPreviewParameter, (frame[4].o)));
	LINE_NUMBER(31);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_maps;
	sp[1].o = (jobject)((mindustry_maps_MapPreviewLoader$MapPreviewParameter *) NULL_CHECK((frame[6].o)))->F_map;
	((func_mindustry_maps_Maps_queueNewPreview_mindustry_maps_Map) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_maps_Maps_queueNewPreview_mindustry_maps_Map])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_maps_MapPreviewLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:loadSync", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)M_arc_assets_loaders_TextureLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_graphics_Texture(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (frame[4].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(39);
	frame[5].o = sp[0].o;
	LINE_NUMBER(40);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[5].o));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(42);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_arc_files_Fi(ctx, sp[0].o, (frame[3].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	sp -= 1;
	LINE_NUMBER(43);
	frame[6].o = sp[0].o;
	LINE_NUMBER(44);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[6].o));
	LINE_NUMBER(45);
	clinit_arc_graphics_Texture(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"sprites/error.png"_j))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_MapPreviewLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:getDependencies", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)createArray(ctx, &class_arc_assets_AssetDescriptor, (jint(1)));
	jint temp0 = jint(0);
	clinit_arc_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_assets_AssetDescriptor);
	init_arc_assets_AssetDescriptor_java_lang_String_java_lang_Class(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"contentcreate"_j))), (((jobject) &class_mindustry_ctype_Content)));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_MapPreviewLoader_setupLoaders(jcontext ctx) {
	jtype frame[15];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:setupLoaders", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_MapPreviewLoader(ctx);
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(67);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject) createArray(ctx, &class_byte, (20));
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(0))) = (109);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(1))) = (105);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(2))) = (110);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(3))) = (100);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(4))) = (117);
	ARRAY_ACCESS(jbyte, sp[1].o, (jint(5))) = (115);
	ARRAY_ACCESS(jbyte, sp[1].o, (6)) = (116);
	ARRAY_ACCESS(jbyte, sp[1].o, (7)) = (114);
	ARRAY_ACCESS(jbyte, sp[1].o, (8)) = (121);
	ARRAY_ACCESS(jbyte, sp[1].o, (9)) = (46);
	ARRAY_ACCESS(jbyte, sp[1].o, (10)) = (103);
	ARRAY_ACCESS(jbyte, sp[1].o, (11)) = (97);
	ARRAY_ACCESS(jbyte, sp[1].o, (12)) = (109);
	ARRAY_ACCESS(jbyte, sp[1].o, (13)) = (101);
	ARRAY_ACCESS(jbyte, sp[1].o, (14)) = (46);
	ARRAY_ACCESS(jbyte, sp[1].o, (15)) = (82);
	ARRAY_ACCESS(jbyte, sp[1].o, (16)) = (117);
	ARRAY_ACCESS(jbyte, sp[1].o, (17)) = (108);
	ARRAY_ACCESS(jbyte, sp[1].o, (18)) = (101);
	ARRAY_ACCESS(jbyte, sp[1].o, (19)) = (115);
	clinit_arc_util_Strings(ctx);
	sp[2].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)SM_java_lang_Class_forName_java_lang_String_R_java_lang_Class(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject) createArray(ctx, &class_byte, (jint(3)));
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(0))) = (102);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(1))) = (111);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(2))) = (103);
	init_java_lang_String_Array1_byte(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	sp[0].o = ((jobject) &class_mindustry_core_GameState);
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject) createArray(ctx, &class_byte, (jint(5)));
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(0))) = (114);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(1))) = (117);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(2))) = (108);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(3))) = (101);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(4))) = (115);
	clinit_arc_util_Strings(ctx);
	sp[3].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject) createArray(ctx, &class_byte, (17));
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(0))) = (115);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(1))) = (99);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(2))) = (104);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(3))) = (101);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(4))) = (109);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(5))) = (97);
	ARRAY_ACCESS(jbyte, sp[2].o, (6)) = (116);
	ARRAY_ACCESS(jbyte, sp[2].o, (7)) = (105);
	ARRAY_ACCESS(jbyte, sp[2].o, (8)) = (99);
	ARRAY_ACCESS(jbyte, sp[2].o, (9)) = (115);
	ARRAY_ACCESS(jbyte, sp[2].o, (10)) = (65);
	ARRAY_ACCESS(jbyte, sp[2].o, (11)) = (108);
	ARRAY_ACCESS(jbyte, sp[2].o, (12)) = (108);
	ARRAY_ACCESS(jbyte, sp[2].o, (13)) = (111);
	ARRAY_ACCESS(jbyte, sp[2].o, (14)) = (119);
	ARRAY_ACCESS(jbyte, sp[2].o, (15)) = (101);
	ARRAY_ACCESS(jbyte, sp[2].o, (16)) = (100);
	clinit_arc_util_Strings(ctx);
	sp[3].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	sp[0].o = frame[0].o;
	clinit_java_lang_String(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_String);
	sp[2].o = (jobject) createArray(ctx, &class_byte, (9));
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(0))) = (115);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(1))) = (116);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(2))) = (97);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(3))) = (116);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(4))) = (105);
	ARRAY_ACCESS(jbyte, sp[2].o, (jint(5))) = (99);
	ARRAY_ACCESS(jbyte, sp[2].o, (6)) = (70);
	ARRAY_ACCESS(jbyte, sp[2].o, (7)) = (111);
	ARRAY_ACCESS(jbyte, sp[2].o, (8)) = (103);
	clinit_arc_util_Strings(ctx);
	sp[3].o = (jobject)SF_arc_util_Strings_utf8;
	init_java_lang_String_Array1_byte_java_nio_charset_Charset(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getField_java_lang_String_R_java_lang_reflect_Field])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(69);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(3)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(0));
	frame[5].o = sp[0].o;
	LINE_NUMBER(70);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_MapPreviewLoader_invoke_arc_func_Prov_1(ctx);
		auto proxy = (mindustry_maps_MapPreviewLoader_invoke_arc_func_Prov_1 *) gcAlloc(ctx, &class_mindustry_maps_MapPreviewLoader_invoke_arc_func_Prov_1);
		proxy->F_field0 = (jref) (frame[2].o);
		sp[0].o = (jobject) proxy;
	}
	frame[6].o = sp[0].o;
	LINE_NUMBER(71);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$WorldLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_MapPreviewLoader_invoke_arc_func_Cons_2(ctx);
		auto proxy = (mindustry_maps_MapPreviewLoader_invoke_arc_func_Cons_2 *) gcAlloc(ctx, &class_mindustry_maps_MapPreviewLoader_invoke_arc_func_Cons_2);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(76);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ResetEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_maps_MapPreviewLoader_invoke_arc_func_Cons_3(ctx);
		auto proxy = (mindustry_maps_MapPreviewLoader_invoke_arc_func_Cons_3 *) gcAlloc(ctx, &class_mindustry_maps_MapPreviewLoader_invoke_arc_func_Cons_3);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(81);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_update;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_MapPreviewLoader_invoke_java_lang_Runnable_2(ctx);
		auto proxy = (mindustry_maps_MapPreviewLoader_invoke_java_lang_Runnable_2 *) gcAlloc(ctx, &class_mindustry_maps_MapPreviewLoader_invoke_java_lang_Runnable_2);
		proxy->F_field4 = (jref) (frame[4].o);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (jref) (frame[1].o);
		proxy->F_field1 = (jref) (frame[6].o);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	clinit_mindustry_maps_MapPreviewLoader(ctx);
	SF_mindustry_maps_MapPreviewLoader_check = sp[1].o;
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(86);
	clinit_mindustry_maps_MapPreviewLoader(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_MapPreviewLoader_check;
	frame[7].o = sp[0].o;
	LINE_NUMBER(87);
	clinit_mindustry_game_EventType$Trigger(ctx);
	sp[0].o = (jobject)SF_mindustry_game_EventType$Trigger_update;
	{ /* InvokeDynamic */
		clinit_mindustry_maps_MapPreviewLoader_invoke_java_lang_Runnable_3(ctx);
		auto proxy = (mindustry_maps_MapPreviewLoader_invoke_java_lang_Runnable_3 *) gcAlloc(ctx, &class_mindustry_maps_MapPreviewLoader_invoke_java_lang_Runnable_3);
		proxy->F_field0 = (jref) (frame[7].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_run_java_lang_Object_java_lang_Runnable(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(90);
	goto label_15;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(88);
	frame[0].o = sp[0].o;
	LINE_NUMBER(89);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[0].o));
	}
label_15:;
	LINE_NUMBER(91);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_maps_MapPreviewLoader_checkPreviews(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:checkPreviews", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_MapPreviewLoader(ctx);
	{
	LINE_NUMBER(94);
	clinit_mindustry_maps_MapPreviewLoader(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_MapPreviewLoader_check;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(95);
	clinit_mindustry_maps_MapPreviewLoader(ctx);
	sp[0].o = (jobject)SF_mindustry_maps_MapPreviewLoader_check;
	((func_java_lang_Runnable_run) resolveInterfaceMethod(ctx, &class_java_lang_Runnable, INDEX_java_lang_Runnable_run, sp[0].o))(ctx, sp[0].o);
	}
label_1:;
	LINE_NUMBER(97);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_maps_MapPreviewLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:loadSync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((func_mindustry_maps_MapPreviewLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_graphics_Texture) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_MapPreviewLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_graphics_Texture])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_TextureLoader$TextureParameter, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_maps_MapPreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:loadAsync", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(18);
	((func_mindustry_maps_MapPreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_MapPreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_arc_assets_loaders_TextureLoader$TextureParameter, (frame[4].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_maps_MapPreviewLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(18);
	sp[0].o = (jobject)((func_mindustry_maps_MapPreviewLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_maps_MapPreviewLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_arc_assets_loaders_TextureLoader$TextureParameter, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_MapPreviewLoader_lambda$setupLoaders$4_java_lang_Runnable(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:lambda$setupLoaders$4", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_MapPreviewLoader(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(87);
	clinit_mindustry_maps_MapPreviewLoader(ctx);
	SF_mindustry_maps_MapPreviewLoader_check = (frame[0].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_MapPreviewLoader_lambda$setupLoaders$3_Array1_boolean_arc_func_Prov_java_lang_reflect_Field_java_lang_reflect_Field_java_lang_reflect_Field(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:lambda$setupLoaders$3", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_MapPreviewLoader(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(82);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0)))) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	SM_arc_util_Reflect_set_java_lang_Object_java_lang_reflect_Field_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_1:;
	{
	LINE_NUMBER(83);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(1)))) == 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = frame[3].o;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(0)));
	SM_arc_util_Reflect_set_java_lang_Object_java_lang_reflect_Field_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_2:;
	{
	LINE_NUMBER(84);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[0].o), (jint(2)))) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (jint(1)));
	SM_arc_util_Reflect_set_java_lang_Object_java_lang_reflect_Field_java_lang_Object(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_3:;
	LINE_NUMBER(85);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_maps_MapPreviewLoader_lambda$setupLoaders$2_Array1_boolean_mindustry_game_EventType$ResetEvent(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:lambda$setupLoaders$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_MapPreviewLoader(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(77);
	ARRAY_ACCESS(jbyte, (frame[0].o), (jint(0))) = (jint(0));
	LINE_NUMBER(78);
	ARRAY_ACCESS(jbyte, (frame[0].o), (jint(1))) = (jint(0));
	LINE_NUMBER(79);
	ARRAY_ACCESS(jbyte, (frame[0].o), (jint(2))) = (jint(0));
	LINE_NUMBER(80);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_maps_MapPreviewLoader_lambda$setupLoaders$1_Array1_boolean_arc_func_Prov_java_lang_reflect_Field_java_lang_reflect_Field_java_lang_reflect_Field_mindustry_game_EventType$WorldLoadEvent(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:lambda$setupLoaders$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_MapPreviewLoader(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(72);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_net;
	jint temp1 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[1].o);
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(ctx, sp[0].o, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)));
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 3;
	ARRAY_ACCESS(jbyte, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(73);
	sp[0].o = frame[0].o;
	jint temp0 = jint(1);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_net;
	jint temp1 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[1].o);
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(ctx, sp[0].o, (frame[3].o));
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)));
	if (temp0 != 0) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	{
	sp -= 3;
	ARRAY_ACCESS(jbyte, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(74);
	sp[0].o = frame[0].o;
	jint temp0 = jint(2);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_net;
	jint temp1 = (jint)((func_mindustry_net_Net_client_R_boolean) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_net_Net_client_R_boolean])(ctx, sp[1].o);
	sp[1].i = temp0;
	sp += 2;
	if (temp1 == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((func_arc_func_Prov_get_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_arc_func_Prov, INDEX_arc_func_Prov_get_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(ctx, sp[0].o, (frame[4].o));
	jint temp0 = (jint)((func_java_lang_Boolean_booleanValue_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)))->vtable)[VTABLE_java_lang_Boolean_booleanValue_R_boolean])(ctx, (checkCast(ctx, &class_java_lang_Boolean, sp[0].o)));
	if (temp0 == 0) goto label_7;
	}
	INST_ICONST(1);
	goto label_8;
label_7:;
	INST_ICONST(0);
label_8:;
	{
	sp -= 3;
	ARRAY_ACCESS(jbyte, sp[0].o, sp[1].i) = sp[2].i;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_maps_MapPreviewLoader_lambda$setupLoaders$0_java_lang_reflect_Field_R_java_lang_Object(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/maps/MapPreviewLoader:lambda$setupLoaders$0", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_maps_MapPreviewLoader(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(70);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)SM_arc_util_Reflect_get_java_lang_Object_java_lang_reflect_Field_R_java_lang_Object(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_maps_MapPreviewLoader[] {
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
	(void *) M_arc_assets_loaders_AssetLoader_resolve_java_lang_String_R_arc_files_Fi,
	(void *) M_mindustry_maps_MapPreviewLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq,
	(void *) M_mindustry_maps_MapPreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters,
	(void *) M_mindustry_maps_MapPreviewLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_mindustry_maps_MapPreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter,
	(void *) M_mindustry_maps_MapPreviewLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_graphics_Texture,
	(void *) M_mindustry_maps_MapPreviewLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_struct_Seq,
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
	{ "resolve", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;" },
	{ "loadAsync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V" },
	{ "loadSync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;" },
	{ "loadAsync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureLoader$TextureParameter;)V" },
	{ "loadSync", "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureLoader$TextureParameter;)Larc/graphics/Texture;" },
	{ "getDependencies", "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureLoader$TextureParameter;)Larc/struct/Seq;" },
};

static jclass innerClasses[] {
	&class_mindustry_maps_MapPreviewLoader$MapPreviewParameter,
};

static FieldMetadata fields[] {
	{ "check", &class_java_lang_Runnable, (intptr_t) &SF_mindustry_maps_MapPreviewLoader_check, "Ljava/lang/Runnable;", 10 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_maps_MapPreviewLoader, 0, "()V", 1 },
	{ "loadAsync", (intptr_t) M_mindustry_maps_MapPreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter, VTABLE_mindustry_maps_MapPreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureLoader$TextureParameter;)V", 1 },
	{ "loadSync", (intptr_t) M_mindustry_maps_MapPreviewLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_graphics_Texture, VTABLE_mindustry_maps_MapPreviewLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_graphics_Texture, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureLoader$TextureParameter;)Larc/graphics/Texture;", 1 },
	{ "getDependencies", (intptr_t) M_mindustry_maps_MapPreviewLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_struct_Seq, VTABLE_mindustry_maps_MapPreviewLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_loaders_TextureLoader$TextureParameter_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/loaders/TextureLoader$TextureParameter;)Larc/struct/Seq;", 1 },
	{ "setupLoaders", (intptr_t) SM_mindustry_maps_MapPreviewLoader_setupLoaders, 0, "()V", 9 },
	{ "checkPreviews", (intptr_t) SM_mindustry_maps_MapPreviewLoader_checkPreviews, 0, "()V", 9 },
	{ "loadSync", (intptr_t) M_mindustry_maps_MapPreviewLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_mindustry_maps_MapPreviewLoader_loadSync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_java_lang_Object, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "loadAsync", (intptr_t) M_mindustry_maps_MapPreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, VTABLE_mindustry_maps_MapPreviewLoader_loadAsync_arc_assets_AssetManager_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters, "(Larc/assets/AssetManager;Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)V", 4161 },
	{ "getDependencies", (intptr_t) M_mindustry_maps_MapPreviewLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, VTABLE_mindustry_maps_MapPreviewLoader_getDependencies_java_lang_String_arc_files_Fi_arc_assets_AssetLoaderParameters_R_arc_struct_Seq, "(Ljava/lang/String;Larc/files/Fi;Larc/assets/AssetLoaderParameters;)Larc/struct/Seq;", 4161 },
	{ "lambda$setupLoaders$4", (intptr_t) SM_mindustry_maps_MapPreviewLoader_lambda$setupLoaders$4_java_lang_Runnable, 0, "(Ljava/lang/Runnable;)V", 4106 },
	{ "lambda$setupLoaders$3", (intptr_t) SM_mindustry_maps_MapPreviewLoader_lambda$setupLoaders$3_Array1_boolean_arc_func_Prov_java_lang_reflect_Field_java_lang_reflect_Field_java_lang_reflect_Field, 0, "([ZLarc/func/Prov;Ljava/lang/reflect/Field;Ljava/lang/reflect/Field;Ljava/lang/reflect/Field;)V", 4106 },
	{ "lambda$setupLoaders$2", (intptr_t) SM_mindustry_maps_MapPreviewLoader_lambda$setupLoaders$2_Array1_boolean_mindustry_game_EventType$ResetEvent, 0, "([ZLmindustry/game/EventType$ResetEvent;)V", 4106 },
	{ "lambda$setupLoaders$1", (intptr_t) SM_mindustry_maps_MapPreviewLoader_lambda$setupLoaders$1_Array1_boolean_arc_func_Prov_java_lang_reflect_Field_java_lang_reflect_Field_java_lang_reflect_Field_mindustry_game_EventType$WorldLoadEvent, 0, "([ZLarc/func/Prov;Ljava/lang/reflect/Field;Ljava/lang/reflect/Field;Ljava/lang/reflect/Field;Lmindustry/game/EventType$WorldLoadEvent;)V", 4106 },
	{ "lambda$setupLoaders$0", (intptr_t) SM_mindustry_maps_MapPreviewLoader_lambda$setupLoaders$0_java_lang_reflect_Field_R_java_lang_Object, 0, "(Ljava/lang/reflect/Field;)Ljava/lang/Object;", 4106 },
};

Class class_mindustry_maps_MapPreviewLoader{
		.nativeName = (intptr_t) "mindustry/maps/MapPreviewLoader",
		.parentClass = (intptr_t) &class_arc_assets_loaders_TextureLoader,
		.size = sizeof(mindustry_maps_MapPreviewLoader),
		.classVtable = (intptr_t) vtable_mindustry_maps_MapPreviewLoader,
		.staticInitializer = (intptr_t) clinit_mindustry_maps_MapPreviewLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_maps_MapPreviewLoader,
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
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 18,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_maps_MapPreviewLoader = registerClass(&class_mindustry_maps_MapPreviewLoader);

}
