#include "mindustry/game/Schematics.h"
#include "java/lang/Integer.h"
#include "arc/func/Prov.h"
#include "mindustry/world/blocks/distribution/ItemBridge.h"
#include "arc/util/Eachable.h"
#include "arc/graphics/Color.h"
#include "java/lang/Runnable.h"
#include "arc/graphics/g2d/Draw.h"
#include "java/io/DataOutput.h"
#include "arc/graphics/Pixmap.h"
#include "mindustry/mod/Mods.h"
#include "arc/util/serialization/Json.h"
#include "arc/util/pooling/Pools.h"
#include "arc/util/Tmp.h"
#include "arc/func/Intf.h"
#include "arc/struct/Seq.h"
#include "java/util/zip/InflaterInputStream.h"
#include "java/lang/reflect/Method.h"
#include "mindustry/world/Tile.h"
#include "mindustry/entities/units/BuildPlan.h"
#include "arc/util/ScreenUtils.h"
#include "mindustry/game/EventType_ClientLoadEvent.h"
#include "arc/func/Boolf.h"
#include "arc/math/Mathf.h"
#include "arc/func/Floatf.h"
#include "arc/Core.h"
#include "java/util/Iterator.h"
#include "arc/util/Log.h"
#include "mindustry/world/blocks/sandbox/LiquidSource.h"
#include "java/io/DataInputStream.h"
#include "mindustry/input/Placement.h"
#include "arc/util/Time.h"
#include "arc/math/Mat.h"
#include "arc/util/Nullable.h"
#include "arc/graphics/Texture.h"
#include "mindustry/game/Schematics_invoke_arc_func_Intf_1.h"
#include "mindustry/gen/Building.h"
#include "java/io/BufferedInputStream.h"
#include "java/lang/Object.h"
#include "mindustry/game/Universe.h"
#include "mindustry/world/meta/BuildVisibility.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons_17.h"
#include "java/io/DataOutputStream.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons_16.h"
#include "arc/struct/ObjectSet.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons_19.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons_18.h"
#include "mindustry/io/TypeIO.h"
#include "arc/struct/ObjectMap.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons_13.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons_12.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons_15.h"
#include "mindustry/game/Schematics_invoke_arc_func_Func_2.h"
#include "mindustry/world/blocks/storage/CoreBlock.h"
#include "arc/util/io/Writes.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons_14.h"
#include "mindustry/game/Schematics_invoke_arc_func_Func_3.h"
#include "mindustry/type/ItemSeq.h"
#include "arc/graphics/GLTexture.h"
#include "arc/struct/OrderedMap.h"
#include "arc/util/io/Streams_OptimizedByteArrayOutputStream.h"
#include "mindustry/game/Rules.h"
#include "arc/struct/ObjectMap_Entry.h"
#include "arc/graphics/g2d/Fill.h"
#include "arc/func/Cons.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons_20.h"
#include "mindustry/world/blocks/power/LightBlock.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons_22.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons_21.h"
#include "java/io/IOException.h"
#include "arc/struct/OrderedSet.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons_23.h"
#include "mindustry/game/Schematics_invoke_java_lang_Runnable_1.h"
#include "arc/graphics/g2d/TextureRegion.h"
#include "java/lang/AutoCloseable.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/IllegalArgumentException.h"
#include "arc/assets/Loadable.h"
#include "mindustry/core/Platform.h"
#include "java/io/ByteArrayInputStream.h"
#include "mindustry/io/JsonIO.h"
#include "arc/struct/ObjectMap_Entries.h"
#include "arc/struct/IntMap_Entry.h"
#include "java/io/OutputStream.h"
#include "mindustry/input/Placement_NormalizeResult.h"
#include "arc/util/io/Reads.h"
#include "mindustry/game/Teams.h"
#include "mindustry/Vars.h"
#include "mindustry/core/World.h"
#include "arc/struct/ObjectIntMap.h"
#include "mindustry/game/Schematics_invoke_arc_func_Prov_6.h"
#include "mindustry/game/Schematics_invoke_arc_func_Prov_5.h"
#include "arc/graphics/gl/FrameBuffer.h"
#include "arc/Events.h"
#include "arc/util/serialization/Base64Coder.h"
#include "arc/math/geom/Point2.h"
#include "mindustry/world/blocks/ConstructBlock_ConstructBuild.h"
#include "mindustry/ctype/UnlockableContent.h"
#include "mindustry/game/Schematics_invoke_arc_func_Prov_9.h"
#include "mindustry/game/Schematics_invoke_arc_func_Prov_8.h"
#include "java/lang/reflect/Constructor.h"
#include "mindustry/game/Schematics_invoke_arc_func_Prov_7.h"
#include "mindustry/game/Schematics_invoke_arc_func_Boolf_5.h"
#include "mindustry/world/blocks/distribution/MassDriver.h"
#include "arc/graphics/gl/GLFrameBuffer.h"
#include "arc/struct/StringMap.h"
#include "mindustry/game/Schematics_invoke_arc_func_Boolf_8.h"
#include "mindustry/game/Schematics_invoke_arc_func_Boolf_9.h"
#include "mindustry/core/ContentLoader.h"
#include "mindustry/game/Schematics_invoke_arc_func_Boolf_6.h"
#include "mindustry/game/Schematics_invoke_arc_func_Boolf_7.h"
#include "mindustry/ctype/MappableContent.h"
#include "mindustry/input/InputHandler_QueryEachable.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "arc/func/Func.h"
#include "mindustry/type/Liquid.h"
#include "arc/math/geom/QuadTree.h"
#include "arc/util/Structs.h"
#include "mindustry/type/Item.h"
#include "java/io/DataInput.h"
#include "arc/func/Cons2.h"
#include "mindustry/world/modules/ItemModule.h"
#include "mindustry/io/TypeIO_ContentMapper.h"
#include "arc/struct/ObjectIntMap_Entry.h"
#include "mindustry/game/Schematics.h"
#include "mindustry/world/blocks/sandbox/ItemSource.h"
#include "java/lang/RuntimeException.h"
#include "mindustry/world/blocks/storage/Unloader.h"
#include "java/io/ByteArrayOutputStream.h"
#include "mindustry/world/blocks/distribution/Sorter.h"
#include "mindustry/world/Block.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons2_5.h"
#include "mindustry/world/blocks/storage/CoreBlock_CoreBuild.h"
#include "arc/struct/IntMap.h"
#include "arc/files/Fi.h"
#include "arc/Application.h"
#include "java/io/InputStream.h"
#include "arc/struct/IntSet.h"
#include "java/lang/String.h"
#include "mindustry/game/Schematics_invoke_mindustry_io_TypeIO_ContentMapper_1.h"
#include "mindustry/game/Schematic.h"
#include "arc/struct/ObjectIntMap_Entries.h"
#include "java/util/Comparator.h"
#include "mindustry/io/SaveFileReader.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons2_4.h"
#include "mindustry/game/Schematics_invoke_arc_func_Cons2_3.h"
#include "mindustry/game/Schematics_1.h"
#include "java/lang/Math.h"
#include "mindustry/content/Loadouts.h"
#include "java/lang/Enum.h"
#include "mindustry/core/UI.h"
#include "mindustry/world/blocks/legacy/LegacyBlock.h"
#include "mindustry/game/Schematic_Stile.h"
#include "arc/util/Strings.h"
#include "mindustry/content/Blocks.h"
#include "mindustry/gen/Player.h"
#include "mindustry/ctype/Content.h"
#include "mindustry/mod/Mods_LoadedMod.h"
#include "java/util/zip/DeflaterOutputStream.h"
#include "mindustry/game/Schematics_invoke_arc_func_Floatf_1.h"
#include "java/lang/Class.h"
#include "mindustry/game/Team.h"
#include "mindustry/ctype/ContentType.h"
#include "mindustry/core/GameState.h"
#include "mindustry/world/Build.h"

extern "C" {

jobject SF_mindustry_game_Schematics_tmpSchem;
jobject SF_mindustry_game_Schematics_tmpSchem2;
jobject SF_mindustry_game_Schematics_header;
jbyte SF_mindustry_game_Schematics_version;
jbool SF_mindustry_game_Schematics_limitSchematicSize;
jint SF_mindustry_game_Schematics_padding;
jint SF_mindustry_game_Schematics_maxPreviewsMobile;
jint SF_mindustry_game_Schematics_resolution;

void mark_mindustry_game_Schematics(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_game_Schematics_tmpSchem)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Schematics_tmpSchem)->clazz)->markFunction)((jobject) SF_mindustry_game_Schematics_tmpSchem, mark, depth + 1);
		if (SF_mindustry_game_Schematics_tmpSchem2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Schematics_tmpSchem2)->clazz)->markFunction)((jobject) SF_mindustry_game_Schematics_tmpSchem2, mark, depth + 1);
		if (SF_mindustry_game_Schematics_header)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_game_Schematics_header)->clazz)->markFunction)((jobject) SF_mindustry_game_Schematics_header, mark, depth + 1);
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
	auto self = (mindustry_game_Schematics *) object;
	if (self->F_out)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_out)->clazz)->markFunction)((jobject) self->F_out, mark, depth + 1);
	if (self->F_all)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_all)->clazz)->markFunction)((jobject) self->F_all, mark, depth + 1);
	if (self->F_previews)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previews)->clazz)->markFunction)((jobject) self->F_previews, mark, depth + 1);
	if (self->F_errored)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errored)->clazz)->markFunction)((jobject) self->F_errored, mark, depth + 1);
	if (self->F_loadouts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loadouts)->clazz)->markFunction)((jobject) self->F_loadouts, mark, depth + 1);
	if (self->F_defaultLoadouts)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultLoadouts)->clazz)->markFunction)((jobject) self->F_defaultLoadouts, mark, depth + 1);
	if (self->F_shadowBuffer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_shadowBuffer)->clazz)->markFunction)((jobject) self->F_shadowBuffer, mark, depth + 1);
	if (self->F_errorTexture)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errorTexture)->clazz)->markFunction)((jobject) self->F_errorTexture, mark, depth + 1);
}

void init_mindustry_game_Schematics(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(68);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(58);
	sp[0].o = frame[0].o;
	clinit_arc_util_io_Streams$OptimizedByteArrayOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_util_io_Streams$OptimizedByteArrayOutputStream);
	init_arc_util_io_Streams$OptimizedByteArrayOutputStream_int(ctx, sp[1].o, (1024));
	((mindustry_game_Schematics *) NULL_CHECK(sp[0].o))->F_out = (jref) sp[1].o;
	LINE_NUMBER(59);
	sp[0].o = frame[0].o;
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	((mindustry_game_Schematics *) NULL_CHECK(sp[0].o))->F_all = (jref) sp[1].o;
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_arc_struct_OrderedMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_OrderedMap);
	init_arc_struct_OrderedMap(ctx, sp[1].o);
	((mindustry_game_Schematics *) NULL_CHECK(sp[0].o))->F_previews = (jref) sp[1].o;
	LINE_NUMBER(61);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectSet(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectSet);
	init_arc_struct_ObjectSet(ctx, sp[1].o);
	((mindustry_game_Schematics *) NULL_CHECK(sp[0].o))->F_errored = (jref) sp[1].o;
	LINE_NUMBER(62);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_game_Schematics *) NULL_CHECK(sp[0].o))->F_loadouts = (jref) sp[1].o;
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_arc_struct_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[1].o);
	((mindustry_game_Schematics *) NULL_CHECK(sp[0].o))->F_defaultLoadouts = (jref) sp[1].o;
	LINE_NUMBER(69);
	sp[0].o = ((jobject) &class_mindustry_game_EventType$ClientLoadEvent);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons_12(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons_12 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons_12);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	SM_arc_Events_on_java_lang_Class_arc_func_Cons(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_loadSync(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:loadSync", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	((func_mindustry_game_Schematics_load) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematics_load])(ctx, (frame[0].o));
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_load(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:load", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(83);
	((func_mindustry_game_Schematics_loadLoadouts) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematics_loadLoadouts])(ctx, (frame[0].o));
	LINE_NUMBER(85);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematicDirectory;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons_13(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons_13 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons_13);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_files_Fi_walk_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_walk_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(91);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_platform;
	sp[0].o = (jobject)((func_mindustry_core_Platform_getWorkshopContent_java_lang_Class_R_arc_struct_Seq) resolveInterfaceMethod(ctx, &class_mindustry_core_Platform, INDEX_mindustry_core_Platform_getWorkshopContent_java_lang_Class_R_arc_struct_Seq, sp[0].o))(ctx, sp[0].o, (((jobject) &class_mindustry_game_Schematic)));
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons_14(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons_14 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons_14);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(94);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_mods;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"schematics"_j));
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons2_3(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons2_3 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons2_3);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[2].o = (jobject) proxy;
	}
	((func_mindustry_mod_Mods_listFiles_java_lang_String_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_mod_Mods_listFiles_java_lang_String_arc_func_Cons2])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(101);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(103);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_shadowBuffer;
	if (sp[0].o != nullptr) goto label_7;
	}
	clinit_mindustry_Vars(ctx);
	(sp++)->i = SF_mindustry_Vars_headless;
	if ((--sp)->i != 0) goto label_7;
	{
	LINE_NUMBER(104);
	clinit_arc_Core(ctx);
	sp[0].o = (jobject)SF_arc_Core_app;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_java_lang_Runnable_1(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_java_lang_Runnable_1 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_java_lang_Runnable_1);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_Application_post_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_arc_Application, INDEX_arc_Application_post_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	LINE_NUMBER(106);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_loadLoadouts(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:loadLoadouts", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)createArray(ctx, &class_mindustry_game_Schematic, (jint(4)));
	jint temp0 = jint(0);
	clinit_mindustry_content_Loadouts(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Loadouts_basicShard;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_mindustry_content_Loadouts(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Loadouts_basicFoundation;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_mindustry_content_Loadouts(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Loadouts_basicNucleus;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_mindustry_content_Loadouts(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Loadouts_basicBastion;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	sp[0].o = (jobject)SM_arc_struct_Seq_with_Array1_java_lang_Object_R_arc_struct_Seq(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons_15(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons_15 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons_15);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(110);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_overwrite_mindustry_game_Schematic_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:overwrite", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	jint temp0 = (jint)((func_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_gl_FrameBuffer, sp[0].o)))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, (checkCast(ctx, &class_arc_graphics_gl_FrameBuffer, sp[0].o)));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(119);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_tiles;
	sp[1].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[2].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(120);
	((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_width = ((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[2].o)))->F_width);
	LINE_NUMBER(121);
	((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_height = ((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[2].o)))->F_height);
	LINE_NUMBER(122);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_labels;
	((mindustry_game_Schematic *) NULL_CHECK(sp[0].o))->F_labels = (jref) sp[1].o;
	LINE_NUMBER(123);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[2].o)))->F_tags;
	sp[1].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_tags;
	((func_arc_struct_StringMap_putAll_arc_struct_ObjectMap) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_putAll_arc_struct_ObjectMap])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(124);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_file;
	((mindustry_game_Schematic *) NULL_CHECK(sp[0].o))->F_file = (jref) sp[1].o;
	LINE_NUMBER(126);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_loadouts;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons2_4(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons2_4 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons2_4);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(127);
	((func_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(130);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_file;
	SM_mindustry_game_Schematics_write_mindustry_game_Schematic_arc_files_Fi(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(135);
	goto label_16;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(131);
	frame[3].o = sp[0].o;
	LINE_NUMBER(132);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Failed to overwrite schematic '@' (@)"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_mindustry_game_Schematic_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_mindustry_game_Schematic_name_R_java_lang_String])(ctx, (frame[2].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_file;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(133);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[3].o));
	LINE_NUMBER(134);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[3].o));
	}
label_16:;
	LINE_NUMBER(136);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics_loadFile_arc_files_Fi_R_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:loadFile", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((func_arc_files_Fi_extension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_extension_R_java_lang_String])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"msch"_j))));
	if (temp0 != 0) goto label_0;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_read_arc_files_Fi_R_mindustry_game_Schematic(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(143);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(144);
	((func_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean])(ctx, (frame[0].o), (frame[2].o), (jint(1)));
	LINE_NUMBER(147);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[2].o)))->F_file;
	sp[0].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, sp[0].o);
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_schematicDirectory;
	jint temp0 = (jint)((func_arc_files_Fi_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[2].o)))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"steamid"_j));
	sp[2].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[2].o)))->F_file;
	sp[2].o = (jobject)((func_arc_files_Fi_parent_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_files_Fi_parent_R_arc_files_Fi])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_arc_files_Fi_name_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_files_Fi_name_R_java_lang_String])(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_8:;
	LINE_NUMBER(151);
	INST_ALOAD(2);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(152);
	frame[2].o = sp[0].o;
	LINE_NUMBER(153);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Failed to read schematic from file '@'"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[1].o, (jint(0))) = (frame[1].o);
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(154);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(156);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics_all_R_arc_struct_Seq(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:all", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_all;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_saveChanges_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:saveChanges", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_file;
	if (sp[0].o == nullptr) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(166);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_file;
	SM_mindustry_game_Schematics_write_mindustry_game_Schematic_arc_files_Fi(ctx, sp[0].o, sp[1].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(169);
	goto label_5;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(167);
	frame[2].o = sp[0].o;
	LINE_NUMBER(168);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[2].o));
	}
label_5:;
	{
	LINE_NUMBER(171);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(172);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_savePreview_mindustry_game_Schematic_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:savePreview", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(175);
	sp[0].o = (jobject)((func_mindustry_game_Schematics_getBuffer_mindustry_game_Schematic_R_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematics_getBuffer_mindustry_game_Schematic_R_arc_graphics_gl_FrameBuffer])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(176);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(177);
	((func_arc_graphics_gl_FrameBuffer_begin) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin])(ctx, (frame[3].o));
	LINE_NUMBER(178);
	jint temp0 = jint(0);
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, (frame[3].o));
	jint temp3 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, (frame[3].o));
	sp[0].o = (jobject)SM_arc_util_ScreenUtils_getFrameBufferPixmap_int_int_int_int_R_arc_graphics_Pixmap(ctx, temp0, temp1, temp2, temp3);
	frame[4].o = sp[0].o;
	LINE_NUMBER(179);
	((func_arc_files_Fi_writePng_arc_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_writePng_arc_graphics_Pixmap])(ctx, (frame[2].o), (frame[4].o));
	LINE_NUMBER(180);
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, (frame[3].o));
	LINE_NUMBER(181);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics_getPreview_mindustry_game_Schematic_R_arc_graphics_Texture(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:getPreview", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(184);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_errored;
	jint temp0 = (jint)((func_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_0;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_errorTexture;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((func_mindustry_game_Schematics_getBuffer_mindustry_game_Schematic_R_arc_graphics_gl_FrameBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematics_getBuffer_mindustry_game_Schematic_R_arc_graphics_gl_FrameBuffer])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[0].o);
	sp[0].o = checkCast(ctx, &class_arc_graphics_Texture, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(188);
	frame[2].o = sp[0].o;
	LINE_NUMBER(189);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"Failed to get preview for schematic '@' (@)"_j));
	sp[1].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(2)));
	jint temp0 = jint(0);
	sp[2].o = (jobject)((func_mindustry_game_Schematic_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Schematic_name_R_java_lang_String])(ctx, (frame[1].o));
	ARRAY_ACCESS(jobject, sp[1].o, temp0) = sp[2].o;
	jint temp1 = jint(1);
	sp[2].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_file;
	ARRAY_ACCESS(jobject, sp[1].o, temp1) = sp[2].o;
	SM_arc_util_Log_err_java_lang_String_Array1_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(190);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	LINE_NUMBER(191);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_errored;
	jint temp2 = (jint)((func_arc_struct_ObjectSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(192);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_errorTexture;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Schematics_hasPreview_mindustry_game_Schematic_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:hasPreview", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	jint temp0 = (jint)((func_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics_getBuffer_mindustry_game_Schematic_R_arc_graphics_gl_FrameBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:getBuffer", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(203);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_mobile) == 0) goto label_1;
	}
	{
	jlong temp0 = (jlong)SM_arc_util_Time_timeSinceMillis_long_R_long(ctx, ((jlong)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_lastClearTime));
	if ((longCompare(temp0, (jlong(2000ll)))) <= 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	if (((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) <= (32)) goto label_1;
	}
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_orderedKeys_R_arc_struct_Seq])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(205);
	frame[3].i = (jint(0));
	}
label_4:;
	{
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	if (temp0 >= (((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[0].o))->F_size) - (32))) goto label_5;
	}
	{
	LINE_NUMBER(207);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_game_Schematic, sp[1].o)));
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_gl_FrameBuffer, sp[0].o)))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, (checkCast(ctx, &class_arc_graphics_gl_FrameBuffer, sp[0].o)));
	LINE_NUMBER(205);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(210);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_arc_util_Time_millis_R_long(ctx);
	((mindustry_game_Schematics *) NULL_CHECK(sp[0].o))->F_lastClearTime = temp0;
	}
label_1:;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	jint temp0 = (jint)((func_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(214);
	SM_arc_graphics_g2d_Draw_blend(ctx);
	LINE_NUMBER(215);
	SM_arc_graphics_g2d_Draw_reset(ctx);
	LINE_NUMBER(216);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m1;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(217);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m2;
	sp[1].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_set_arc_math_Mat_R_arc_math_Mat])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(218);
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer_int_int(ctx, sp[0].o, ((((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_width) + (jint(2))) * (32)), ((((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_height) + (jint(2))) * (32)));
	frame[2].o = sp[0].o;
	LINE_NUMBER(220);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_shadowBuffer;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(222);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_idt_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_idt_R_arc_math_Mat])(ctx, sp[0].o);
	LINE_NUMBER(223);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	sp[1].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_shadowBuffer;
	jint temp2 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, sp[1].o);
	jfloat temp3 = jfloat(temp2);
	sp[1].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_shadowBuffer;
	jint temp4 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, temp0, temp1, temp3, (jfloat(temp4)));
	LINE_NUMBER(225);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(226);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons_16(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons_16 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons_16);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(239);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_shadowBuffer;
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, sp[0].o);
	LINE_NUMBER(241);
	sp[0].o = frame[2].o;
	clinit_arc_graphics_Color(ctx);
	sp[1].o = (jobject)SF_arc_graphics_Color_clear;
	((func_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_begin_arc_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(243);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_proj_R_arc_math_Mat(ctx);
	jfloat temp5 = jfloat(0);
	jint temp6 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, (frame[2].o));
	jfloat temp7 = jfloat(temp6);
	jint temp8 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, (frame[2].o));
	jfloat temp9 = jfloat(temp8);
	jint temp10 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_setOrtho_float_float_float_float_R_arc_math_Mat])(ctx, sp[0].o, temp5, temp7, temp9, (jfloat((-temp10))));
	LINE_NUMBER(245);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	sp[1].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_shadowBuffer;
	sp[1].o = (jobject)((func_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getTexture_R_arc_graphics_GLTexture])(ctx, sp[1].o);
	((func_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_graphics_g2d_TextureRegion_set_arc_graphics_Texture_int_int_int_int])(ctx, sp[0].o, (checkCast(ctx, &class_arc_graphics_Texture, sp[1].o)), (jint(0)), (jint(0)), (((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_width) + (jint(2))), (((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_height) + (jint(2))));
	LINE_NUMBER(246);
	SM_arc_graphics_g2d_Draw_color_float_float_float_float(ctx, (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	LINE_NUMBER(247);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_tr1;
	jint temp11 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, (frame[2].o));
	jfloat temp12 = (jfloat(temp11)) / (jfloat(2));
	jint temp13 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, (frame[2].o));
	jfloat temp14 = (jfloat(temp13)) / (jfloat(2));
	jint temp15 = (jint)((func_arc_graphics_gl_FrameBuffer_getWidth_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getWidth_R_int])(ctx, (frame[2].o));
	jfloat temp16 = jfloat(temp15);
	jint temp17 = (jint)((func_arc_graphics_gl_FrameBuffer_getHeight_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_getHeight_R_int])(ctx, (frame[2].o));
	SM_arc_graphics_g2d_Draw_rect_arc_graphics_g2d_TextureRegion_float_float_float_float(ctx, sp[0].o, temp12, temp14, temp16, (jfloat((-temp17))));
	LINE_NUMBER(248);
	SM_arc_graphics_g2d_Draw_color(ctx);
	LINE_NUMBER(250);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Func_2(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Func_2 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Func_2);
		proxy->F_field0 = (jref) (frame[0].o);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(260);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(262);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_scale_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_scale_float_float_R_arc_math_Mat])(ctx, sp[0].o, (jfloat(4.0f)), (jfloat(4.0f)));
	sp[0].o = (jobject)((func_arc_math_Mat_translate_float_float_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_translate_float_float_R_arc_math_Mat])(ctx, sp[0].o, (jfloat(12.0f)), (jfloat(12.0f)));
	LINE_NUMBER(264);
	clinit_mindustry_input_InputHandler$QueryEachable(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_input_InputHandler$QueryEachable);
	sp[1].o = jobject(nullptr);
	sp[2].o = (jobject)createArray(ctx, &class_arc_struct_Seq, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[3].o);
	init_mindustry_input_InputHandler$QueryEachable_arc_math_geom_QuadTree_Array1_arc_struct_Seq(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(267);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons_17(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons_17 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons_17);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(273);
	sp[0].o = frame[3].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons_18(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons_18 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons_18);
		proxy->F_field0 = (jref) (frame[4].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(276);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_emptyTile;
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_x = (jint(0));
	LINE_NUMBER(277);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_emptyTile;
	((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_y = (jint(0));
	LINE_NUMBER(279);
	SM_arc_graphics_g2d_Draw_flush(ctx);
	LINE_NUMBER(280);
	sp[0].o = (jobject)SM_arc_graphics_g2d_Draw_trans_R_arc_math_Mat(ctx);
	sp[0].o = (jobject)((func_arc_math_Mat_idt_R_arc_math_Mat) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_Mat_idt_R_arc_math_Mat])(ctx, sp[0].o);
	LINE_NUMBER(282);
	((func_arc_graphics_gl_FrameBuffer_end) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_end])(ctx, (frame[2].o));
	LINE_NUMBER(284);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m1;
	SM_arc_graphics_g2d_Draw_proj_arc_math_Mat(ctx, sp[0].o);
	LINE_NUMBER(285);
	clinit_arc_util_Tmp(ctx);
	sp[0].o = (jobject)SF_arc_util_Tmp_m2;
	SM_arc_graphics_g2d_Draw_trans_arc_math_Mat(ctx, sp[0].o);
	LINE_NUMBER(287);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	}
label_8:;
	{
	LINE_NUMBER(290);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_graphics_gl_FrameBuffer, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:toPlans", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(295);
	sp[0].o = (jobject)((func_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_boolean_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_boolean_R_arc_struct_Seq])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (frame[3].i), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_boolean_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:toPlans", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(300);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Func_3(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Func_3 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Func_3);
		proxy->F_field2 = (frame[3].i);
		proxy->F_field1 = (jref) (frame[1].o);
		proxy->F_field0 = (frame[2].i);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_map_arc_func_Func_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Boolf_5(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Boolf_5 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Boolf_5);
		proxy->F_field0 = (frame[4].i);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(301);
	sp[0].o = (jobject)((func_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_removeAll_arc_func_Boolf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Intf_1(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Intf_1 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Intf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_Structs_comparingInt_arc_func_Intf_R_java_util_Comparator(ctx, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_java_util_Comparator_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(300);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics_getLoadouts_mindustry_world_blocks_storage_CoreBlock_R_arc_struct_Seq(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:getLoadouts", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_loadouts;
	sp[1].o = frame[1].o;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Prov_5(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Prov_5 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Prov_5);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_arc_struct_Seq, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics_getLoadouts_R_arc_struct_ObjectMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:getLoadouts", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_loadouts;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics_getDefaultLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:getDefaultLoadout", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(314);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_defaultLoadouts;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_game_Schematic, sp[0].o));
	}

	popStackFrame(ctx);
}

jbool M_mindustry_game_Schematics_isDefaultLoadout_mindustry_game_Schematic_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:isDefaultLoadout", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(318);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_defaultLoadouts;
	jint temp0 = (jint)((func_arc_struct_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_containsValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:checkLoadout", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Boolf_6(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Boolf_6 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Boolf_6);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[3].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(324);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Boolf_7(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Boolf_7 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Boolf_7);
		sp[1].o = (jobject) proxy;
	}
	jint temp0 = (jint)((func_arc_struct_Seq_count_arc_func_Boolf_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_count_arc_func_Boolf_R_int])(ctx, sp[0].o, sp[1].o);
	frame[4].i = temp0;
	LINE_NUMBER(326);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_block;
	jint temp1 = (jint)((func_mindustry_game_Schematics_getMaxLaunchSize_mindustry_world_Block_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_getMaxLaunchSize_mindustry_world_Block_R_int])(ctx, sp[0].o, sp[1].o);
	frame[5].i = temp1;
	LINE_NUMBER(329);
	if ((frame[2].i) == 0) goto label_5;
	}
	{
	if (((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_width) > (frame[5].i)) goto label_6;
	}
	{
	if (((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_height) > (frame[5].i)) goto label_6;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Boolf_8(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Boolf_8 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Boolf_8);
		sp[1].o = (jobject) proxy;
	}
	LINE_NUMBER(330);
	jint temp0 = (jint)((func_arc_struct_Seq_contains_arc_func_Boolf_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_contains_arc_func_Boolf_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_6;
	}
	{
	if ((frame[4].i) <= (jint(1))) goto label_5;
	}
label_6:;
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_loadouts;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_block;
	sp[1].o = checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Prov_6(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Prov_6 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Prov_6);
		sp[2].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)))->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, (checkCast(ctx, &class_arc_struct_Seq, sp[0].o)), (frame[1].o));
	LINE_NUMBER(336);
	if ((frame[2].i) != 0) goto label_9;
	}
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_defaultLoadouts;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_block;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock, sp[1].o)), (frame[1].o));
	}
label_9:;
	LINE_NUMBER(339);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_mindustry_game_Schematics_getMaxLaunchSize_mindustry_world_Block_R_int(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:getMaxLaunchSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(342);
	popStackFrame(ctx);
	return (((jint)((mindustry_world_Block *) NULL_CHECK((frame[1].o)))->F_size) + (10));
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics_findFile_java_lang_String_R_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:findFile", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(346);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"empty"_j));
	INST_ASTORE(1);
label_1:;
	{
	LINE_NUMBER(347);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(348);
	frame[3].i = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(350);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	jint temp0 = (jint)((func_arc_files_Fi_exists_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_files_Fi_exists_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	LINE_NUMBER(351);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_schematicDirectory;
	sp[1].o = frame[1].o;
	sp += 2;
	if ((frame[3].i) != 0) goto label_6;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_7;
label_6:;
	INST_ILOAD(3);
	POP_N(1); // Pop string concat args
	(sp++)->o = (jobject)concatStringsRecipe(ctx, u8"_\u0001"_j.string, 1, boxInteger(ctx, sp[0].i));
label_7:;
	{
	sp -= 3;
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"\u0001\u0001.msch"_j.string, 2, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_arc_files_Fi_child_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_child_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(352);
	INST_IINC(3, 1);
	goto label_3;
	}
label_5:;
	{
	LINE_NUMBER(355);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_add_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:add", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(360);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[1].o));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(362);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_mindustry_game_Schematic_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_game_Schematic_name_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)SM_arc_util_Strings_sanitizeFilename_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_mindustry_game_Schematics_findFile_java_lang_String_R_arc_files_Fi) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Schematics_findFile_java_lang_String_R_arc_files_Fi])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(363);
	SM_mindustry_game_Schematics_write_mindustry_game_Schematic_arc_files_Fi(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(364);
	((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_file = (jref) (frame[2].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(368);
	goto label_7;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(365);
	frame[2].o = sp[0].o;
	LINE_NUMBER(366);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_ui;
	((func_mindustry_core_UI_showException_java_lang_Throwable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_UI_showException_java_lang_Throwable])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(367);
	SM_arc_util_Log_err_java_lang_Throwable(ctx, (frame[2].o));
	}
label_7:;
	{
	LINE_NUMBER(370);
	((func_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(371);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_remove_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(375);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_all;
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(376);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_loadouts;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons2_5(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons2_5 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons2_5);
		proxy->F_field0 = (jref) (frame[1].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_ObjectMap_each_arc_func_Cons2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_each_arc_func_Cons2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(377);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_file;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(378);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_file;
	jint temp0 = (jint)((func_arc_files_Fi_delete_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_files_Fi_delete_R_boolean])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	jint temp0 = (jint)((func_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(382);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	((func_arc_graphics_gl_FrameBuffer_dispose) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_graphics_gl_FrameBuffer, sp[0].o)))->vtable)[VTABLE_arc_graphics_gl_FrameBuffer_dispose])(ctx, (checkCast(ctx, &class_arc_graphics_gl_FrameBuffer, sp[0].o)));
	LINE_NUMBER(383);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_previews;
	sp[0].o = (jobject)((func_arc_struct_OrderedMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedMap_remove_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	}
label_5:;
	{
	LINE_NUMBER(385);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_all;
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(386);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics_create_int_int_int_int_R_mindustry_game_Schematic(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[36];
	auto stack = &frame[28];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:create", 36 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(390);
	if ((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_headless) == 0) goto label_1;
	}
	INST_ACONST_NULL();
	goto label_2;
label_1:;
	clinit_mindustry_Vars(ctx);
	(sp++)->o = SF_mindustry_Vars_player;
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_gen_Player_team_R_mindustry_game_Team) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Player_team_R_mindustry_game_Team])(ctx, sp[0].o);
	sp++;
label_2:;
	{
	sp -= 1;
	frame[5].o = sp[0].o;
	LINE_NUMBER(391);
	sp[0].o = (jobject)SM_mindustry_input_Placement_normalizeArea_int_int_int_int_int_boolean_int_R_mindustry_input_Placement$NormalizeResult(ctx, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (jint(0)), (jint(0)), (clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_maxSchematicSize));
	frame[6].o = sp[0].o;
	LINE_NUMBER(392);
	frame[1].i = ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[6].o)))->F_x);
	LINE_NUMBER(393);
	frame[2].i = ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[6].o)))->F_y);
	LINE_NUMBER(394);
	frame[3].i = ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[6].o)))->F_x2);
	LINE_NUMBER(395);
	frame[4].i = ((jint)((mindustry_input_Placement$NormalizeResult *) NULL_CHECK((frame[6].o)))->F_y2);
	LINE_NUMBER(397);
	frame[7].i = (frame[1].i);
	frame[8].i = (frame[2].i);
	frame[9].i = (frame[3].i);
	frame[10].i = (frame[4].i);
	LINE_NUMBER(399);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(401);
	frame[12].i = (frame[3].i);
	frame[13].i = (frame[4].i);
	frame[14].i = (frame[1].i);
	frame[15].i = (frame[2].i);
	LINE_NUMBER(402);
	frame[16].i = (jint(0));
	LINE_NUMBER(403);
	frame[17].i = (frame[1].i);
	}
label_19:;
	{
	if ((frame[17].i) > (frame[3].i)) goto label_20;
	}
	{
	LINE_NUMBER(404);
	frame[18].i = (frame[2].i);
	}
label_22:;
	{
	if ((frame[18].i) > (frame[4].i)) goto label_23;
	}
	{
	LINE_NUMBER(405);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[17].i), (frame[18].i));
	frame[19].o = sp[0].o;
	LINE_NUMBER(406);
	if ((frame[19].o) == nullptr) goto label_26;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean])(ctx, (frame[19].o), (frame[5].o));
	if (temp0 == 0) goto label_27;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[19].o)))->F_wasVisible) != 0) goto label_26;
	}
	goto label_27;
label_26:;
	{
	LINE_NUMBER(408);
	if ((frame[19].o) != nullptr) goto label_28;
	}
	INST_ACONST_NULL();
	goto label_29;
label_28:;
	{
	if ((isInstance(ctx, (frame[19].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_30;
	}
	{
	frame[21].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[19].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[21].o)))->F_current;
	sp += 1;
	goto label_29;
	}
label_30:;
	INST_ALOAD(19);
	sp[-1].o = (jobject) ((mindustry_gen_Building *) NULL_CHECK(sp[-1].o))->F_block;
label_29:;
	{
	sp -= 1;
	frame[20].o = sp[0].o;
	LINE_NUMBER(410);
	if ((frame[19].o) == nullptr) goto label_27;
	}
	INST_ALOAD(20);
	if ((--sp)->o == nullptr) goto label_27;
	{
	jint temp0 = (jint)((func_mindustry_world_Block_isVisible_R_boolean) ((void **) nullCheck(ctx, (frame[20].o))->vtable)[VTABLE_mindustry_world_Block_isVisible_R_boolean])(ctx, (frame[20].o));
	if (temp0 != 0) goto label_33;
	}
	{
	if ((isInstance(ctx, (frame[20].o), &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_27;
	}
label_33:;
	{
	LINE_NUMBER(411);
	frame[21].i = (((jint)((mindustry_world_Block *) NULL_CHECK((frame[20].o)))->F_size) / (jint(2)));
	LINE_NUMBER(412);
	if ((((jint)((mindustry_world_Block *) NULL_CHECK((frame[20].o)))->F_size) % (jint(2))) != (jint(1))) goto label_35;
	}
	{
	jint temp0 = (-((jint)((mindustry_world_Block *) NULL_CHECK((frame[20].o)))->F_size)) / (jint(2));
	sp[0].i = temp0;
	sp += 1;
	goto label_36;
	}
label_35:;
	{
	jint temp0 = (-(((jint)((mindustry_world_Block *) NULL_CHECK((frame[20].o)))->F_size) - (jint(1)))) / (jint(2));
	sp[0].i = temp0;
	sp += 1;
	}
label_36:;
	{
	sp -= 1;
	frame[22].i = sp[0].i;
	LINE_NUMBER(413);
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[19].o));
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (temp0 + (frame[22].i)), (frame[12].i));
	frame[12].i = temp1;
	LINE_NUMBER(414);
	jint temp2 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[19].o));
	jint temp3 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, (temp2 + (frame[22].i)), (frame[13].i));
	frame[13].i = temp3;
	LINE_NUMBER(415);
	jint temp4 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[19].o));
	jint temp5 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (temp4 + (frame[21].i)), (frame[14].i));
	frame[14].i = temp5;
	LINE_NUMBER(416);
	jint temp6 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[19].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[19].o));
	jint temp7 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (temp6 + (frame[21].i)), (frame[15].i));
	frame[15].i = temp7;
	LINE_NUMBER(417);
	frame[16].i = (jint(1));
	}
label_27:;
	{
	LINE_NUMBER(404);
	INST_IINC(18, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(403);
	INST_IINC(17, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(422);
	if ((frame[16].i) == 0) goto label_42;
	}
	{
	LINE_NUMBER(423);
	frame[1].i = (frame[12].i);
	LINE_NUMBER(424);
	frame[2].i = (frame[13].i);
	LINE_NUMBER(425);
	frame[3].i = (frame[14].i);
	LINE_NUMBER(426);
	frame[4].i = (frame[15].i);
	goto label_47;
	}
label_42:;
	{
	LINE_NUMBER(428);
	clinit_mindustry_game_Schematic(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Schematic);
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	clinit_arc_struct_StringMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[2].o);
	init_mindustry_game_Schematic_arc_struct_Seq_arc_struct_StringMap_int_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(1)), (jint(1)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_47:;
	{
	LINE_NUMBER(431);
	frame[17].i = (((frame[3].i) - (frame[1].i)) + (jint(1)));
	frame[18].i = (((frame[4].i) - (frame[2].i)) + (jint(1)));
	LINE_NUMBER(432);
	frame[19].i = (-(frame[1].i));
	frame[20].i = (-(frame[2].i));
	LINE_NUMBER(433);
	clinit_arc_struct_IntSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntSet);
	init_arc_struct_IntSet(ctx, sp[0].o);
	frame[21].o = sp[0].o;
	LINE_NUMBER(434);
	frame[22].i = (frame[7].i);
	}
label_53:;
	{
	if ((frame[22].i) > (frame[9].i)) goto label_54;
	}
	{
	LINE_NUMBER(435);
	frame[23].i = (frame[8].i);
	}
label_56:;
	{
	if ((frame[23].i) > (frame[10].i)) goto label_57;
	}
	{
	LINE_NUMBER(436);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_build_int_int_R_mindustry_gen_Building) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_build_int_int_R_mindustry_gen_Building])(ctx, sp[0].o, (frame[22].i), (frame[23].i));
	frame[24].o = sp[0].o;
	LINE_NUMBER(437);
	if ((frame[24].o) == nullptr) goto label_60;
	}
	{
	jint temp0 = (jint)((func_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_mindustry_gen_Building_isDiscovered_mindustry_game_Team_R_boolean])(ctx, (frame[24].o), (frame[5].o));
	if (temp0 == 0) goto label_61;
	}
	{
	if (((jint)((mindustry_gen_Building *) NULL_CHECK((frame[24].o)))->F_wasVisible) != 0) goto label_60;
	}
	goto label_61;
label_60:;
	{
	LINE_NUMBER(438);
	if ((frame[24].o) != nullptr) goto label_62;
	}
	INST_ACONST_NULL();
	goto label_63;
label_62:;
	{
	if ((isInstance(ctx, (frame[24].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_64;
	}
	{
	frame[26].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[24].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[26].o)))->F_current;
	sp += 1;
	goto label_63;
	}
label_64:;
	INST_ALOAD(24);
	sp[-1].o = (jobject) ((mindustry_gen_Building *) NULL_CHECK(sp[-1].o))->F_block;
label_63:;
	{
	sp -= 1;
	frame[25].o = sp[0].o;
	LINE_NUMBER(440);
	if ((frame[24].o) == nullptr) goto label_61;
	}
	{
	sp[0].o = frame[21].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[24].o));
	jint temp1 = (jint)((func_arc_struct_IntSet_contains_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_contains_int_R_boolean])(ctx, sp[0].o, temp0);
	if (temp1 != 0) goto label_61;
	}
	INST_ALOAD(25);
	if ((--sp)->o == nullptr) goto label_61;
	{
	sp[0].o = frame[25].o;
	LINE_NUMBER(441);
	jint temp0 = (jint)((func_mindustry_world_Block_isVisible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isVisible_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_68;
	}
	{
	if ((isInstance(ctx, (frame[25].o), &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_61;
	}
label_68:;
	{
	LINE_NUMBER(442);
	if ((isInstance(ctx, (frame[24].o), &class_mindustry_world_blocks_ConstructBlock$ConstructBuild)) == 0) goto label_69;
	}
	{
	frame[27].o = (checkCast(ctx, &class_mindustry_world_blocks_ConstructBlock$ConstructBuild, (frame[24].o)));
	sp[0].o = (jobject)((mindustry_world_blocks_ConstructBlock$ConstructBuild *) NULL_CHECK((frame[27].o)))->F_lastConfig;
	sp += 1;
	goto label_71;
	}
label_69:;
	INST_ALOAD(24);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_mindustry_gen_Building_config_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_config_R_java_lang_Object])(ctx, sp[0].o);
	sp++;
label_71:;
	{
	sp -= 1;
	frame[26].o = sp[0].o;
	LINE_NUMBER(444);
	sp[0].o = frame[11].o;
	clinit_mindustry_game_Schematic$Stile(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Schematic$Stile);
	sp[2].o = frame[25].o;
	jint temp0 = (jint)((func_mindustry_gen_Building_tileX_R_int) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_mindustry_gen_Building_tileX_R_int])(ctx, (frame[24].o));
	jint temp1 = temp0 + (frame[19].i);
	jint temp2 = (jint)((func_mindustry_gen_Building_tileY_R_int) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_mindustry_gen_Building_tileY_R_int])(ctx, (frame[24].o));
	init_mindustry_game_Schematic$Stile_mindustry_world_Block_int_int_java_lang_Object_byte(ctx, sp[1].o, sp[2].o, temp1, (temp2 + (frame[20].i)), (frame[26].o), (jbyte(((jint)((mindustry_gen_Building *) NULL_CHECK((frame[24].o)))->F_rotation))));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(445);
	sp[0].o = frame[21].o;
	jint temp3 = (jint)((func_mindustry_gen_Building_pos_R_int) ((void **) nullCheck(ctx, (frame[24].o))->vtable)[VTABLE_mindustry_gen_Building_pos_R_int])(ctx, (frame[24].o));
	jint temp4 = (jint)((func_arc_struct_IntSet_add_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntSet_add_int_R_boolean])(ctx, sp[0].o, temp3);
	}
label_61:;
	{
	LINE_NUMBER(435);
	INST_IINC(23, 1);
	goto label_56;
	}
label_57:;
	{
	LINE_NUMBER(434);
	INST_IINC(22, 1);
	goto label_53;
	}
label_54:;
	{
	LINE_NUMBER(450);
	clinit_mindustry_game_Schematic(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Schematic);
	sp[1].o = frame[11].o;
	clinit_arc_struct_StringMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[2].o);
	init_mindustry_game_Schematic_arc_struct_Seq_arc_struct_StringMap_int_int(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[17].i), (frame[18].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics_writeBase64_mindustry_game_Schematic_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:writeBase64", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_out;
	((func_arc_util_io_Streams$OptimizedByteArrayOutputStream_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_io_Streams$OptimizedByteArrayOutputStream_reset])(ctx, sp[0].o);
	LINE_NUMBER(457);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_out;
	SM_mindustry_game_Schematics_write_mindustry_game_Schematic_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(458);
	clinit_java_lang_String(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_String);
	sp[1].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_out;
	sp[1].o = (jobject)((func_arc_util_io_Streams$OptimizedByteArrayOutputStream_getBuffer_R_Array1_byte) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_util_io_Streams$OptimizedByteArrayOutputStream_getBuffer_R_Array1_byte])(ctx, sp[1].o);
	sp[2].o = (jobject)((mindustry_game_Schematics *) NULL_CHECK((frame[0].o)))->F_out;
	jint temp0 = (jint)((func_arc_util_io_Streams$OptimizedByteArrayOutputStream_size_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_util_io_Streams$OptimizedByteArrayOutputStream_size_R_int])(ctx, sp[2].o);
	sp[1].o = (jobject)SM_arc_util_serialization_Base64Coder_encode_Array1_byte_int_R_Array1_char(ctx, sp[1].o, temp0);
	init_java_lang_String_Array1_char(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(459);
	frame[2].o = sp[0].o;
	LINE_NUMBER(460);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_placeLaunchLoadout_int_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:placeLaunchLoadout", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(466);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_universe;
	sp[0].o = (jobject)((func_mindustry_game_Universe_getLastLoadout_R_mindustry_game_Schematic) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Universe_getLastLoadout_R_mindustry_game_Schematic])(ctx, sp[0].o);
	jint temp0 = frame[0].i;
	jint temp1 = frame[1].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	SM_mindustry_game_Schematics_placeLoadout_mindustry_game_Schematic_int_int_mindustry_game_Team(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(467);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	if (sp[0].o != nullptr) goto label_2;
	}
	{
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"No core at loadout coordinates!"_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(468);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (frame[0].i), (frame[1].i));
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK(sp[0].o))->F_build;
	sp[0].o = (jobject)((mindustry_gen_Building *) NULL_CHECK(sp[0].o))->F_items;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_universe;
	sp[1].o = (jobject)((func_mindustry_game_Universe_getLaunchResources_R_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_game_Universe_getLaunchResources_R_mindustry_type_ItemSeq])(ctx, sp[1].o);
	((func_mindustry_world_modules_ItemModule_add_mindustry_type_ItemSeq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_modules_ItemModule_add_mindustry_type_ItemSeq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_placeLoadout_mindustry_game_Schematic_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:placeLoadout", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(472);
	sp[0].o = frame[0].o;
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_state;
	sp[1].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[1].o))->F_rules;
	sp[1].o = (jobject)((mindustry_game_Rules *) NULL_CHECK(sp[1].o))->F_defaultTeam;
	SM_mindustry_game_Schematics_placeLoadout_mindustry_game_Schematic_int_int_mindustry_game_Team(ctx, sp[0].o, temp0, temp1, sp[1].o);
	LINE_NUMBER(473);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_placeLoadout_mindustry_game_Schematic_int_int_mindustry_game_Team(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:placeLoadout", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(476);
	SM_mindustry_game_Schematics_placeLoadout_mindustry_game_Schematic_int_int_mindustry_game_Team_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o), (jint(1)));
	LINE_NUMBER(477);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_placeLoadout_mindustry_game_Schematic_int_int_mindustry_game_Team_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4) {
	jtype frame[15];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:placeLoadout", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Boolf_9(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Boolf_9 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Boolf_9);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_find_arc_func_Boolf_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[5].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(481);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(482);
	if ((frame[5].o) != nullptr) goto label_3;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Loadout schematic has no core tile!"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(483);
	frame[7].i = ((frame[1].i) - ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[5].o)))->F_x));
	frame[8].i = ((frame[2].i) - ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[5].o)))->F_y));
	LINE_NUMBER(484);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_copy_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_copy_R_arc_struct_Seq])(ctx, sp[0].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Floatf_1(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Floatf_1 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Floatf_1);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_sort_arc_func_Floatf_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons_19(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons_19 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons_19);
		proxy->F_field4 = (jref) (frame[3].o);
		proxy->F_field3 = (jref) (frame[6].o);
		proxy->F_field2 = (frame[4].i);
		proxy->F_field1 = (frame[8].i);
		proxy->F_field0 = (frame[7].i);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(514);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_place_mindustry_game_Schematic_int_int_mindustry_game_Team(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:place", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(517);
	SM_mindustry_game_Schematics_place_mindustry_game_Schematic_int_int_mindustry_game_Team_boolean(ctx, (frame[0].o), (frame[1].i), (frame[2].i), (frame[3].o), (jint(1)));
	LINE_NUMBER(518);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_place_mindustry_game_Schematic_int_int_mindustry_game_Team_boolean(jcontext ctx, jobject param0, jint param1, jint param2, jobject param3, jbool param4) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:place", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].i = param4;
	{
	LINE_NUMBER(521);
	frame[5].i = ((frame[1].i) - (((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_width) / (jint(2))));
	frame[6].i = ((frame[2].i) - (((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_height) / (jint(2))));
	LINE_NUMBER(522);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons_20(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons_20 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons_20);
		proxy->F_field3 = (jref) (frame[3].o);
		proxy->F_field2 = (frame[4].i);
		proxy->F_field1 = (frame[6].i);
		proxy->F_field0 = (frame[5].i);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Schematics_isSchematic_arc_files_Fi_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:isSchematic", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[3]{};

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	if (bypasses[2]) { goto label_3; }
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((func_arc_files_Fi_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_read_R_java_io_InputStream])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_16; } // goto label_2
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_17; }
	{
	LINE_NUMBER(540);
	clinit_mindustry_game_Schematics(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Schematics_header;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_17:;
	{
	if ((frame[4].i) >= (frame[3].i)) { popExceptionFrames(frameRef, 2); bypasses[1] = true; goto label_16; } // goto label_5
	}
	{
	frame[5].i = ((jint)ARRAY_ACCESS(jbyte, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(541);
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, (frame[1].o));
	if (temp0 == (frame[5].i)) { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(542);
	frame[6].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(545);
	if ((frame[1].o) == nullptr) goto label_12;
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
label_12:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return (frame[6].i);
	}
label_4:;
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
	if (bypasses[1]) { goto label_6; }
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_5; }
	{
	LINE_NUMBER(540);
	INST_IINC(4, 1);
	{ popExceptionFrames(frameRef, 2); bypasses[2] = true; goto label_14; } // goto label_17
	}
label_5:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(545);
	if ((frame[1].o) == nullptr) goto label_20;
	}
	{
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_InputStream_close])(ctx, (frame[1].o));
	goto label_20;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(539);
	frame[2].o = sp[0].o;
	if ((frame[1].o) == nullptr) goto label_21;
	}
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_9; }
	}
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	((func_java_io_InputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_InputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_21;
label_9:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[2].o), (frame[3].o));
	}
label_21:;
	INST_ALOAD(2);
	INST_ATHROW();
	label_20:;
	LINE_NUMBER(546);
	INST_ICONST(1);
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	sp -= 1;
	LINE_NUMBER(547);
	frame[1].o = sp[0].o;
	LINE_NUMBER(548);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Schematics_readBase64_java_lang_String_R_mindustry_game_Schematic(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:readBase64", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(555);
	clinit_java_io_ByteArrayInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayInputStream);
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)SM_arc_util_serialization_Base64Coder_decode_java_lang_String_R_Array1_byte(ctx, sp[1].o);
	init_java_io_ByteArrayInputStream_Array1_byte(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_read_java_io_InputStream_R_mindustry_game_Schematic(ctx, sp[0].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(556);
	frame[1].o = sp[0].o;
	LINE_NUMBER(557);
	clinit_java_lang_RuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_RuntimeException);
	init_java_lang_RuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Schematics_read_arc_files_Fi_R_mindustry_game_Schematic(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(562);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	sp[1].o = (jobject)((func_arc_files_Fi_read_int_R_java_io_BufferedInputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_read_int_R_java_io_BufferedInputStream])(ctx, (frame[0].o), (1024));
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_read_java_io_InputStream_R_mindustry_game_Schematic(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(563);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_tags;
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name"_j))));
	if (temp0 != 0) goto label_2;
	}
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"name"_j));
	sp[2].o = (jobject)((func_arc_files_Fi_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_arc_files_Fi_nameWithoutExtension_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
label_2:;
	{
	LINE_NUMBER(566);
	((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_file = (jref) (frame[0].o);
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Schematics_read_java_io_InputStream_R_mindustry_game_Schematic(jcontext ctx, jobject param0) {
	jtype frame[27];
	auto stack = &frame[19];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:read", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(571);
	clinit_mindustry_game_Schematics(ctx);
	sp[0].o = (jobject)SF_mindustry_game_Schematics_header;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_13:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_14;
	}
	{
	frame[4].i = ((jint)ARRAY_ACCESS(jbyte, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(572);
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, (frame[0].o));
	if (temp0 == (frame[4].i)) goto label_16;
	}
	{
	LINE_NUMBER(573);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Not a schematic file (missing header)."_j))));
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(571);
	INST_IINC(3, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(577);
	jint temp0 = (jint)((func_java_io_InputStream_read_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_InputStream_read_R_int])(ctx, (frame[0].o));
	frame[1].i = temp0;
	LINE_NUMBER(579);
	if ((frame[1].i) <= (jint(1))) goto label_19;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	sp[1].o = (jobject)concatStringsRecipe(ctx, u8"Unknown version: \u0001 (are you trying to load a schematic from a newer version of the game?)"_j.string, 1, boxInteger(ctx, (frame[1].i)));
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_19:;
	{
	LINE_NUMBER(581);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	clinit_java_util_zip_InflaterInputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_InflaterInputStream);
	init_java_util_zip_InflaterInputStream_java_io_InputStream(ctx, sp[1].o, (frame[0].o));
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(582);
	jint temp0 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[2].o));
	frame[3].i = temp0;
	jint temp1 = (jint)((func_java_io_DataInputStream_readShort_R_short) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readShort_R_short])(ctx, (frame[2].o));
	frame[4].i = temp1;
	LINE_NUMBER(584);
	if ((frame[3].i) > (128)) goto label_22;
	}
	{
	if ((frame[4].i) <= (128)) goto label_23;
	}
label_22:;
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid schematic: Too large (max possible size is 128x128)"_j))));
	throwException(ctx, sp[0].o);	}
label_23:;
	{
	LINE_NUMBER(586);
	clinit_arc_struct_StringMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(587);
	jint temp0 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[2].o));
	frame[6].i = temp0;
	LINE_NUMBER(588);
	frame[7].i = (jint(0));
	}
label_26:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_27;
	}
	{
	LINE_NUMBER(589);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[2].o));
	sp[2].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(588);
	INST_IINC(7, 1);
	goto label_26;
	}
label_27:;
	{
	LINE_NUMBER(592);
	frame[7].o = (jobject(nullptr));
	LINE_NUMBER(595);
	jint temp0 = (jint)((func_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_StringMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"contentMap"_j))));
	if (temp0 == 0) goto label_31;
	}
	{
	LINE_NUMBER(596);
	clinit_mindustry_io_JsonIO(ctx);
	sp[0].o = (jobject)SF_mindustry_io_JsonIO_json;
	sp[1].o = ((jobject) &class_arc_struct_IntMap);
	sp[2].o = ((jobject) &class_arc_struct_ObjectIntMap);
	sp[3].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"contentMap"_j))), (((jobject) createStringLiteral(ctx, u8"{}"_j))));
	sp[0].o = (jobject)((func_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_util_serialization_Json_fromJson_java_lang_Class_java_lang_Class_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o, (checkCast(ctx, &class_java_lang_String, sp[3].o)));
	frame[8].o = (checkCast(ctx, &class_arc_struct_IntMap, sp[0].o));
	LINE_NUMBER(597);
	clinit_arc_struct_IntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(598);
	sp[0].o = (jobject)((func_arc_struct_IntMap_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_arc_struct_IntMap_iterator_R_java_util_Iterator])(ctx, (frame[8].o));
	frame[10].o = sp[0].o;
	}
label_35:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[10].o)))(ctx, (frame[10].o));
	if (temp0 == 0) goto label_36;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[10].o)))(ctx, (frame[10].o));
	frame[11].o = (checkCast(ctx, &class_arc_struct_IntMap$Entry, sp[0].o));
	LINE_NUMBER(599);
	clinit_arc_struct_IntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(600);
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, (frame[9].o), ((jint)((arc_struct_IntMap$Entry *) NULL_CHECK((frame[11].o)))->F_key), (frame[12].o));
	LINE_NUMBER(601);
	sp[0].o = (jobject)((arc_struct_IntMap$Entry *) NULL_CHECK((frame[11].o)))->F_value;
	sp[0].o = (jobject)((func_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_ObjectIntMap, sp[0].o)))->vtable)[VTABLE_arc_struct_ObjectIntMap_iterator_R_arc_struct_ObjectIntMap$Entries])(ctx, (checkCast(ctx, &class_arc_struct_ObjectIntMap, sp[0].o)));
	frame[13].o = sp[0].o;
	}
label_40:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[13].o)))(ctx, (frame[13].o));
	if (temp0 == 0) goto label_41;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o));
	frame[14].o = (checkCast(ctx, &class_arc_struct_ObjectIntMap$Entry, sp[0].o));
	LINE_NUMBER(602);
	sp[0].o = frame[12].o;
	jint temp0 = (jint)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[14].o)))->F_value;
	clinit_mindustry_Vars(ctx);
	sp[1].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[2].o = (jobject)SF_mindustry_ctype_ContentType_all;
	sp[2].o = (jobject)ARRAY_ACCESS(jobject, sp[2].o, ((jint)((arc_struct_IntMap$Entry *) NULL_CHECK((frame[11].o)))->F_key));
	sp[3].o = (jobject)((arc_struct_ObjectIntMap$Entry *) NULL_CHECK((frame[14].o)))->F_key;
	sp[1].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[1].o, sp[2].o, (checkCast(ctx, &class_java_lang_String, sp[3].o)));
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(603);
	goto label_40;
	}
label_41:;
	LINE_NUMBER(604);
	goto label_35;
label_36:;
	{
	LINE_NUMBER(605);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_mindustry_io_TypeIO$ContentMapper_1);
		proxy->F_field0 = (jref) (frame[9].o);
		sp[0].o = (jobject) proxy;
	}
	frame[7].o = sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(608);
	frame[8].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(612);
	sp[0].o = ((jobject) getArrayClass(&class_java_lang_String, 1));
	sp[1].o = (jobject)((func_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_StringMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"labels"_j))), (((jobject) createStringLiteral(ctx, u8"[]"_j))));
	sp[0].o = (jobject)SM_mindustry_io_JsonIO_read_java_lang_Class_java_lang_String_R_java_lang_Object(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	frame[8].o = (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(613);
	goto label_44;
label_2:;
	INST_ASTORE(9);
label_44:;
	{
	LINE_NUMBER(615);
	clinit_arc_struct_IntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[0].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(616);
	jint temp0 = (jint)((func_java_io_DataInputStream_readUnsignedByte_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readUnsignedByte_R_int])(ctx, (frame[2].o));
	frame[10].i = temp0;
	LINE_NUMBER(617);
	frame[11].i = (jint(0));
	}
label_47:;
	{
	if ((frame[11].i) >= (frame[10].i)) goto label_48;
	}
	{
	LINE_NUMBER(618);
	sp[0].o = (jobject)((func_java_io_DataInputStream_readUTF_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readUTF_R_java_lang_String])(ctx, (frame[2].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(619);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	clinit_mindustry_ctype_ContentType(ctx);
	sp[1].o = (jobject)SF_mindustry_ctype_ContentType_block;
	clinit_mindustry_io_SaveFileReader(ctx);
	sp[2].o = (jobject)SF_mindustry_io_SaveFileReader_fallback;
	sp[2].o = (jobject)((func_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_ObjectMap_get_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[2].o, (frame[12].o), (frame[12].o));
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_getByName_mindustry_ctype_ContentType_java_lang_String_R_mindustry_ctype_MappableContent])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_java_lang_String, sp[2].o)));
	frame[13].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(620);
	sp[0].o = frame[9].o;
	jint temp0 = frame[11].i;
	sp[1].i = temp0;
	sp += 2;
	if ((frame[13].o) == nullptr) goto label_52;
	}
	{
	if ((isInstance(ctx, (frame[13].o), &class_mindustry_world_blocks_legacy_LegacyBlock)) == 0) goto label_53;
	}
label_52:;
	clinit_mindustry_content_Blocks(ctx);
	(sp++)->o = SF_mindustry_content_Blocks_air;
	goto label_54;
label_53:;
	INST_ALOAD(13);
label_54:;
	{
	sp -= 3;
	sp[0].o = (jobject)((func_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_put_int_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].i, sp[2].o);
	LINE_NUMBER(617);
	INST_IINC(11, 1);
	goto label_47;
	}
label_48:;
	{
	LINE_NUMBER(623);
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[2].o));
	frame[11].i = temp0;
	LINE_NUMBER(625);
	if ((frame[11].i) <= (16384)) goto label_57;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Invalid schematic: Too many blocks."_j))));
	throwException(ctx, sp[0].o);	}
label_57:;
	{
	LINE_NUMBER(627);
	clinit_arc_util_io_Reads(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Reads);
	init_arc_util_io_Reads_java_io_DataInput(ctx, sp[0].o, (frame[2].o));
	frame[12].o = sp[0].o;
	LINE_NUMBER(629);
	clinit_arc_struct_Seq(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq_int(ctx, sp[0].o, (frame[11].i));
	frame[13].o = sp[0].o;
	LINE_NUMBER(630);
	frame[14].i = (jint(0));
	}
label_60:;
	{
	if ((frame[14].i) >= (frame[11].i)) goto label_61;
	}
	{
	LINE_NUMBER(631);
	sp[0].o = frame[9].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, sp[0].o, temp0);
	frame[15].o = (checkCast(ctx, &class_mindustry_world_Block, sp[0].o));
	LINE_NUMBER(632);
	jint temp1 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[2].o));
	frame[16].i = temp1;
	LINE_NUMBER(633);
	if ((frame[1].i) != 0) goto label_65;
	}
	{
	sp[0].o = frame[15].o;
	jint temp0 = (jint)((func_java_io_DataInputStream_readInt_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readInt_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)SM_mindustry_game_Schematics_mapConfig_mindustry_world_Block_int_int_R_java_lang_Object(ctx, sp[0].o, temp0, (frame[16].i));
	sp += 1;
	goto label_66;
	}
label_65:;
	{
	sp[0].o = (jobject)SM_mindustry_io_TypeIO_readObject_arc_util_io_Reads_boolean_mindustry_io_TypeIO$ContentMapper_R_java_lang_Object(ctx, (frame[12].o), (jint(0)), (frame[7].o));
	sp += 1;
	}
label_66:;
	{
	sp -= 1;
	frame[17].o = sp[0].o;
	LINE_NUMBER(634);
	jint temp0 = (jint)((func_java_io_DataInputStream_readByte_R_byte) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_readByte_R_byte])(ctx, (frame[2].o));
	frame[18].i = temp0;
	LINE_NUMBER(635);
	sp[0].o = frame[15].o;
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_69;
	}
	{
	LINE_NUMBER(636);
	sp[0].o = frame[13].o;
	clinit_mindustry_game_Schematic$Stile(ctx);
	sp[1].o = gcAlloc(ctx, &class_mindustry_game_Schematic$Stile);
	sp[2].o = frame[15].o;
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[16].i));
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[16].i));
	init_mindustry_game_Schematic$Stile_mindustry_world_Block_int_int_java_lang_Object_byte(ctx, sp[1].o, sp[2].o, temp0, temp1, (frame[17].o), (frame[18].i));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	}
label_69:;
	{
	LINE_NUMBER(630);
	INST_IINC(14, 1);
	goto label_60;
	}
label_61:;
	{
	LINE_NUMBER(640);
	clinit_mindustry_game_Schematic(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Schematic);
	init_mindustry_game_Schematic_arc_struct_Seq_arc_struct_StringMap_int_int(ctx, sp[0].o, (frame[13].o), (frame[5].o), (frame[3].i), (frame[4].i));
	frame[14].o = sp[0].o;
	LINE_NUMBER(641);
	if ((frame[8].o) == nullptr) goto label_72;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[14].o)))->F_labels;
	sp[0].o = (jobject)((func_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_addAll_Array1_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, (frame[8].o));
	}
label_72:;
	{
	LINE_NUMBER(642);
	frame[15].o = (frame[14].o);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(643);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[2].o));
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return (frame[15].o);
	}
label_6:;
	LINE_NUMBER(581);
	INST_ASTORE(3);
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_74;
label_10:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_74:;
	INST_ALOAD(3);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_write_mindustry_game_Schematic_arc_files_Fi(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:write", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(647);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_arc_files_Fi_write_boolean_int_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_write_boolean_int_R_java_io_OutputStream])(ctx, (frame[1].o), (jint(0)), (1024));
	SM_mindustry_game_Schematics_write_mindustry_game_Schematic_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_write_mindustry_game_Schematic_java_io_OutputStream(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:write", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(651);
	sp[0].o = frame[1].o;
	clinit_mindustry_game_Schematics(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Schematics_header;
	((func_java_io_OutputStream_write_Array1_byte) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(652);
	((func_java_io_OutputStream_write_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_OutputStream_write_int])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(654);
	clinit_java_io_DataOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataOutputStream);
	clinit_java_util_zip_DeflaterOutputStream(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_zip_DeflaterOutputStream);
	init_java_util_zip_DeflaterOutputStream_java_io_OutputStream(ctx, sp[1].o, (frame[1].o));
	init_java_io_DataOutputStream_java_io_OutputStream(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(655);
	clinit_arc_util_io_Writes(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_util_io_Writes);
	init_arc_util_io_Writes_java_io_DataOutput(ctx, sp[0].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(657);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, (frame[2].o), ((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_width));
	LINE_NUMBER(658);
	((func_java_io_DataOutputStream_writeShort_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeShort_int])(ctx, (frame[2].o), ((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(660);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"labels"_j));
	sp[2].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_labels;
	sp[2].o = (jobject)((func_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_arc_struct_Seq_toArray_java_lang_Class_R_Array1_java_lang_Object])(ctx, sp[2].o, (((jobject) &class_java_lang_String)));
	sp[2].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, sp[2].o);
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(663);
	clinit_arc_struct_IntMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_IntMap);
	init_arc_struct_IntMap(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(664);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_16:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_17;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(665);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[6].o)))->F_config;
	frame[8].o = sp[0].o;
	if ((isInstance(ctx, (frame[8].o), &class_mindustry_ctype_MappableContent)) == 0) goto label_19;
	}
	{
	frame[7].o = (checkCast(ctx, &class_mindustry_ctype_MappableContent, (frame[8].o)));
	LINE_NUMBER(666);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_mindustry_ctype_MappableContent_getContentType_R_mindustry_ctype_ContentType) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_mindustry_ctype_MappableContent_getContentType_R_mindustry_ctype_ContentType])(ctx, (frame[7].o));
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, sp[1].o);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Prov_7(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Prov_7 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Prov_7);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	sp[0].o = checkCast(ctx, &class_arc_struct_ObjectIntMap, sp[0].o);
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((frame[7].o)))->F_name;
	((func_arc_struct_ObjectIntMap_put_java_lang_Object_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectIntMap_put_java_lang_Object_int])(ctx, sp[0].o, sp[1].o, ((jint)((mindustry_ctype_Content *) NULL_CHECK((frame[7].o)))->F_id));
	}
label_19:;
	LINE_NUMBER(668);
	goto label_16;
label_17:;
	{
	LINE_NUMBER(670);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"contentMap"_j));
	sp[2].o = (jobject)SM_mindustry_io_JsonIO_write_java_lang_Object_R_java_lang_String(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(672);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tags;
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, ((jint)((arc_struct_ObjectMap *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(673);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tags;
	sp[0].o = (jobject)((func_arc_struct_StringMap_entries_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_StringMap_entries_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap$Entries_iterator_R_arc_struct_ObjectMap$Entries])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	}
label_23:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[5].o)))(ctx, (frame[5].o));
	if (temp0 == 0) goto label_24;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[5].o)))(ctx, (frame[5].o));
	frame[6].o = (checkCast(ctx, &class_arc_struct_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(674);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_key;
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(675);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((arc_struct_ObjectMap$Entry *) NULL_CHECK((frame[6].o)))->F_value;
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	LINE_NUMBER(676);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(678);
	clinit_arc_struct_OrderedSet(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_OrderedSet);
	init_arc_struct_OrderedSet(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(679);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons_21(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons_21 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons_21);
		proxy->F_field0 = (jref) (frame[5].o);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(682);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[2].o), ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[5].o)))->F_size));
	LINE_NUMBER(683);
	frame[6].i = (jint(0));
	}
label_31:;
	{
	if ((frame[6].i) >= ((jint)((arc_struct_ObjectSet *) NULL_CHECK((frame[5].o)))->F_size)) goto label_32;
	}
	{
	LINE_NUMBER(684);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq])(ctx, (frame[5].o));
	sp[1].o = (jobject)((func_arc_struct_Seq_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[6].i));
	sp[1].o = (jobject)((mindustry_ctype_MappableContent *) NULL_CHECK((checkCast(ctx, &class_mindustry_world_Block, sp[1].o))))->F_name;
	((func_java_io_DataOutputStream_writeUTF_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeUTF_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(683);
	INST_IINC(6, 1);
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(687);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles;
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, ((jint)((arc_struct_Seq *) NULL_CHECK(sp[1].o))->F_size));
	LINE_NUMBER(689);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_36:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[6].o)))(ctx, (frame[6].o));
	if (temp0 == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[6].o)))(ctx, (frame[6].o));
	frame[7].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(690);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_arc_struct_OrderedSet_orderedItems_R_arc_struct_Seq])(ctx, (frame[5].o));
	sp[2].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[7].o)))->F_block;
	jint temp0 = (jint)((func_arc_struct_Seq_indexOf_java_lang_Object_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_arc_struct_Seq_indexOf_java_lang_Object_R_int])(ctx, sp[1].o, sp[2].o);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, sp[0].o, temp0);
	LINE_NUMBER(691);
	sp[0].o = frame[2].o;
	jint temp1 = (jint)SM_arc_math_geom_Point2_pack_int_int_R_int(ctx, ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[7].o)))->F_x), ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[7].o)))->F_y));
	((func_java_io_DataOutputStream_writeInt_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_writeInt_int])(ctx, sp[0].o, temp1);
	LINE_NUMBER(692);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[7].o)))->F_config;
	SM_mindustry_io_TypeIO_writeObject_arc_util_io_Writes_java_lang_Object(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(693);
	((func_java_io_DataOutputStream_writeByte_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_writeByte_int])(ctx, (frame[2].o), ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[7].o)))->F_rotation));
	LINE_NUMBER(694);
	goto label_36;
	}
label_1:;
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(695);
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, (frame[2].o));
	goto label_42;
	}
label_2:;
	LINE_NUMBER(654);
	INST_ASTORE(3);
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_DataOutputStream_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_DataOutputStream_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_43;
label_6:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_43:;
	INST_ALOAD(3);
	INST_ATHROW();
	label_42:;
	LINE_NUMBER(696);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Schematics_mapConfig_mindustry_world_Block_int_int_R_java_lang_Object(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:mapConfig", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(700);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_Sorter)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_storage_Unloader)) != 0) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_sandbox_ItemSource)) == 0) goto label_2;
	}
label_1:;
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_item_int_R_mindustry_type_Item])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(701);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_sandbox_LiquidSource)) == 0) goto label_3;
	}
	{
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_content;
	sp[0].o = (jobject)((func_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_ContentLoader_liquid_int_R_mindustry_type_Liquid])(ctx, sp[0].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(702);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_MassDriver)) != 0) goto label_4;
	}
	{
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_distribution_ItemBridge)) == 0) goto label_5;
	}
label_4:;
	{
	sp[0].o = (jobject)SM_arc_math_geom_Point2_unpack_int_R_arc_math_geom_Point2(ctx, (frame[1].i));
	jint temp0 = (jint)SM_arc_math_geom_Point2_x_int_R_short(ctx, (frame[2].i));
	jint temp1 = (jint)SM_arc_math_geom_Point2_y_int_R_short(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_math_geom_Point2_sub_int_int_R_arc_math_geom_Point2])(ctx, sp[0].o, temp0, temp1);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(703);
	if ((isInstance(ctx, (frame[0].o), &class_mindustry_world_blocks_power_LightBlock)) == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(705);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Schematics_rotate_mindustry_game_Schematic_int_R_mindustry_game_Schematic(jcontext ctx, jobject param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:rotate", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(713);
	if ((frame[1].i) != 0) goto label_1;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(715);
	if ((frame[1].i) <= 0) goto label_2;
	}
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	{
	sp -= 1;
	frame[2].i = sp[0].i;
	LINE_NUMBER(716);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	jint temp0 = frame[3].i;
	jint temp1 = (jint)SM_java_lang_Math_abs_int_R_int(ctx, (frame[1].i));
	if (temp0 >= temp1) goto label_6;
	}
	{
	LINE_NUMBER(717);
	sp[0].o = (jobject)SM_mindustry_game_Schematics_rotated_mindustry_game_Schematic_boolean_R_mindustry_game_Schematic(ctx, (frame[0].o), (frame[2].i));
	frame[0].o = sp[0].o;
	LINE_NUMBER(716);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(719);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Schematics_rotated_mindustry_game_Schematic_boolean_R_mindustry_game_Schematic(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:rotated", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(723);
	jint temp0 = (jint)SM_arc_math_Mathf_sign_boolean_R_int(ctx, (frame[1].i));
	frame[2].i = temp0;
	LINE_NUMBER(724);
	sp[0].o = frame[0].o;
	clinit_mindustry_game_Schematics(ctx);
	sp[1].o = (jobject)SF_mindustry_game_Schematics_tmpSchem;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	clinit_mindustry_game_Schematics(ctx);
	(sp++)->o = SF_mindustry_game_Schematics_tmpSchem2;
	goto label_3;
label_2:;
	clinit_mindustry_game_Schematics(ctx);
	(sp++)->o = SF_mindustry_game_Schematics_tmpSchem;
label_3:;
	{
	sp -= 1;
	frame[3].o = sp[0].o;
	LINE_NUMBER(725);
	((mindustry_game_Schematic *) NULL_CHECK((frame[3].o)))->F_width = ((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_width);
	LINE_NUMBER(726);
	((mindustry_game_Schematic *) NULL_CHECK((frame[3].o)))->F_height = ((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_height);
	LINE_NUMBER(727);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[3].o)))->F_tiles;
	SM_arc_util_pooling_Pools_freeAll_arc_struct_Seq(ctx, sp[0].o);
	LINE_NUMBER(728);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[3].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, sp[0].o);
	LINE_NUMBER(729);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_tiles;
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[0].o));
	LINE_NUMBER(730);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[3].o)))->F_tiles;
	sp[1].o = ((jobject) &class_mindustry_game_Schematic$Stile);
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Prov_8(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Prov_8 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Prov_8);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_arc_util_pooling_Pools_obtain_java_lang_Class_arc_func_Prov_R_java_lang_Object(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_mindustry_game_Schematic$Stile_set_mindustry_game_Schematic$Stile_R_mindustry_game_Schematic$Stile) ((void **) nullCheck(ctx, (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[1].o)))->vtable)[VTABLE_mindustry_game_Schematic$Stile_set_mindustry_game_Schematic$Stile_R_mindustry_game_Schematic$Stile])(ctx, (checkCast(ctx, &class_mindustry_game_Schematic$Stile, sp[1].o)), (frame[5].o));
	sp[0].o = (jobject)((func_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_add_java_lang_Object_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(731);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(733);
	frame[4].i = (((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[3].o)))->F_width) / (jint(2)));
	frame[5].i = (((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[3].o)))->F_height) / (jint(2)));
	LINE_NUMBER(735);
	sp[0].o = (jobject)((mindustry_game_Schematic *) NULL_CHECK((frame[3].o)))->F_tiles;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons_22(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons_22 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons_22);
		proxy->F_field2 = (frame[5].i);
		proxy->F_field1 = (frame[4].i);
		proxy->F_field0 = (frame[2].i);
		sp[1].o = (jobject) proxy;
	}
	((func_arc_struct_Seq_each_arc_func_Cons) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_Seq_each_arc_func_Cons])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(766);
	((mindustry_game_Schematic *) NULL_CHECK((frame[3].o)))->F_width = ((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_height);
	LINE_NUMBER(767);
	((mindustry_game_Schematic *) NULL_CHECK((frame[3].o)))->F_height = ((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[0].o)))->F_width);
	LINE_NUMBER(769);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_lambda$rotated$0_int_int_int_mindustry_game_Schematic$Stile(jcontext ctx, jint param0, jint param1, jint param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$rotated$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(736);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_block;
	sp[2].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_config;
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Cons_23(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Cons_23 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Cons_23);
		proxy->F_field0 = (frame[0].i);
		sp[3].o = (jobject) proxy;
	}
	sp[1].o = (jobject)SM_mindustry_entities_units_BuildPlan_pointConfig_mindustry_world_Block_java_lang_Object_arc_func_Cons_R_java_lang_Object(ctx, sp[1].o, sp[2].o, sp[3].o);
	((mindustry_game_Schematic$Stile *) NULL_CHECK(sp[0].o))->F_config = (jref) sp[1].o;
	LINE_NUMBER(751);
	jfloat temp0 = jfloat(((((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_x) - (frame[1].i)) * (8)));
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_block;
	frame[4].f = (temp0 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset));
	jfloat temp1 = jfloat(((((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_y) - (frame[2].i)) * (8)));
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_block;
	frame[5].f = (temp1 + ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_offset));
	LINE_NUMBER(752);
	frame[6].f = (frame[4].f);
	LINE_NUMBER(753);
	if ((frame[0].i) < 0) goto label_5;
	}
	{
	LINE_NUMBER(754);
	frame[4].f = (-(frame[5].f));
	LINE_NUMBER(755);
	frame[5].f = (frame[6].f);
	goto label_8;
	}
label_5:;
	{
	LINE_NUMBER(757);
	frame[4].f = (frame[5].f);
	LINE_NUMBER(758);
	frame[5].f = (-(frame[6].f));
	}
label_8:;
	{
	LINE_NUMBER(760);
	sp[0].o = frame[3].o;
	jfloat temp0 = frame[4].f;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_block;
	jint temp1 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp0 - ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)));
	((mindustry_game_Schematic$Stile *) NULL_CHECK(sp[0].o))->F_x = (jshort((temp1 + (frame[1].i))));
	LINE_NUMBER(761);
	sp[0].o = frame[3].o;
	jfloat temp2 = frame[5].f;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_block;
	jint temp3 = (jint)SM_mindustry_core_World_toTile_float_R_int(ctx, (temp2 - ((jfloat)((mindustry_world_Block *) NULL_CHECK(sp[1].o))->F_offset)));
	((mindustry_game_Schematic$Stile *) NULL_CHECK(sp[0].o))->F_y = (jshort((temp3 + (frame[2].i))));
	LINE_NUMBER(762);
	sp[0].o = frame[3].o;
	jint temp4 = (jint)SM_arc_math_Mathf_mod_int_int_R_int(ctx, (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_rotation) + (frame[0].i)), (jint(4)));
	((mindustry_game_Schematic$Stile *) NULL_CHECK(sp[0].o))->F_rotation = (jbyte(temp4));
	LINE_NUMBER(763);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_lambda$rotated$1_int_arc_math_geom_Point2(jcontext ctx, jint param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$rotated$1", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(737);
	frame[2].i = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_x);
	frame[3].i = ((jint)((arc_math_geom_Point2 *) NULL_CHECK((frame[1].o)))->F_y);
	LINE_NUMBER(738);
	frame[4].i = (frame[2].i);
	LINE_NUMBER(740);
	if ((frame[0].i) < 0) goto label_4;
	}
	{
	LINE_NUMBER(741);
	frame[2].i = (-(frame[3].i));
	LINE_NUMBER(742);
	frame[3].i = (frame[4].i);
	goto label_7;
	}
label_4:;
	{
	LINE_NUMBER(744);
	frame[2].i = (frame[3].i);
	LINE_NUMBER(745);
	frame[3].i = (-(frame[4].i));
	}
label_7:;
	{
	LINE_NUMBER(747);
	sp[0].o = (jobject)((func_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_math_geom_Point2_set_int_int_R_arc_math_geom_Point2])(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(748);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_lambda$write$0_arc_struct_OrderedSet_mindustry_game_Schematic$Stile(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$write$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(679);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp0 = (jint)((func_arc_struct_OrderedSet_add_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_OrderedSet_add_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Schematics_lambda$read$0_arc_struct_IntMap_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content(jcontext ctx, jobject param0, jobject param1, jint param2) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$read$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(605);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)((func_mindustry_ctype_ContentType_ordinal_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_mindustry_ctype_ContentType_ordinal_R_int])(ctx, (frame[1].o));
	{ /* InvokeDynamic */
		clinit_mindustry_game_Schematics_invoke_arc_func_Prov_9(ctx);
		auto proxy = (mindustry_game_Schematics_invoke_arc_func_Prov_9 *) gcAlloc(ctx, &class_mindustry_game_Schematics_invoke_arc_func_Prov_9);
		sp[1].o = (jobject) proxy;
	}
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_arc_func_Prov_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_IntMap_get_int_arc_func_Prov_R_java_lang_Object])(ctx, sp[0].o, temp0, sp[1].o);
	sp[0].o = (jobject)((func_arc_struct_IntMap_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (checkCast(ctx, &class_arc_struct_IntMap, sp[0].o)))->vtable)[VTABLE_arc_struct_IntMap_get_int_R_java_lang_Object])(ctx, (checkCast(ctx, &class_arc_struct_IntMap, sp[0].o)), (frame[2].i));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_mindustry_ctype_Content, sp[0].o));
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_lambda$place$0_int_int_boolean_mindustry_game_Team_mindustry_game_Schematic$Stile(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3, jobject param4) {
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$place$0", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(523);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[4].o)))->F_x) + (frame[0].i)), (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[4].o)))->F_y) + (frame[1].i)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(524);
	if ((frame[5].o) == nullptr) goto label_2;
	}
	INST_ILOAD(2);
	if ((--sp)->i != 0) goto label_3;
	{
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[4].o)))->F_block;
	jint temp0 = (jint)SM_mindustry_world_Build_validPlace_mindustry_world_Block_mindustry_game_Team_int_int_int_R_boolean(ctx, sp[0].o, (frame[3].o), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_x), ((jint)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_y), ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[4].o)))->F_rotation));
	if (temp0 != 0) goto label_3;
	}
label_2:;
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(526);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[4].o)))->F_block;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, sp[0].o, sp[1].o, (frame[3].o), ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[4].o)))->F_rotation));
	LINE_NUMBER(528);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[4].o)))->F_config;
	frame[6].o = sp[0].o;
	LINE_NUMBER(529);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_build;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(530);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[5].o)))->F_build;
	((func_mindustry_gen_Building_configureAny_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_configureAny_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	}
label_6:;
	LINE_NUMBER(532);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_lambda$placeLoadout$2_int_int_boolean_arc_struct_Seq_mindustry_game_Team_mindustry_game_Schematic$Stile(jcontext ctx, jint param0, jint param1, jbool param2, jobject param3, jobject param4, jobject param5) {
	jtype frame[14];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$placeLoadout$2", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	{
	LINE_NUMBER(485);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_world;
	sp[0].o = (jobject)((func_mindustry_core_World_tile_int_int_R_mindustry_world_Tile) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_core_World_tile_int_int_R_mindustry_world_Tile])(ctx, sp[0].o, (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[5].o)))->F_x) + (frame[0].i)), (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[5].o)))->F_y) + (frame[1].i)));
	frame[6].o = sp[0].o;
	LINE_NUMBER(486);
	if ((frame[6].o) != nullptr) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(489);
	if ((frame[2].i) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[5].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) != 0) goto label_3;
	}
	{
	LINE_NUMBER(490);
	sp[0].o = (jobject)((func_arc_struct_Seq_clear_R_arc_struct_Seq) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_clear_R_arc_struct_Seq])(ctx, (frame[3].o));
	LINE_NUMBER(491);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[5].o)))->F_block;
	sp[0].o = (jobject)((func_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_getLinkedTilesAs_mindustry_world_Block_arc_struct_Seq_R_arc_struct_Seq])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	LINE_NUMBER(496);
	sp[0].o = (jobject)((func_arc_struct_Seq_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_arc_struct_Seq_iterator_R_java_util_Iterator])(ctx, (frame[3].o));
	frame[7].o = sp[0].o;
	}
label_7:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[7].o)))(ctx, (frame[7].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[7].o)))(ctx, (frame[7].o));
	frame[8].o = (checkCast(ctx, &class_mindustry_world_Tile, sp[0].o));
	LINE_NUMBER(497);
	sp[0].o = (jobject)((func_mindustry_world_Tile_block_R_mindustry_world_Block) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_block_R_mindustry_world_Block])(ctx, (frame[8].o));
	clinit_mindustry_content_Blocks(ctx);
	sp[1].o = (jobject)SF_mindustry_content_Blocks_air;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	LINE_NUMBER(498);
	((func_mindustry_world_Tile_remove) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_mindustry_world_Tile_remove])(ctx, (frame[8].o));
	}
label_9:;
	LINE_NUMBER(500);
	goto label_7;
label_3:;
	{
	LINE_NUMBER(503);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[5].o)))->F_block;
	((func_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Tile_setBlock_mindustry_world_Block_mindustry_game_Team_int])(ctx, sp[0].o, sp[1].o, (frame[4].o), ((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[5].o)))->F_rotation));
	LINE_NUMBER(505);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[5].o)))->F_config;
	frame[7].o = sp[0].o;
	LINE_NUMBER(506);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	LINE_NUMBER(507);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	((func_mindustry_gen_Building_configureAny_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_gen_Building_configureAny_java_lang_Object])(ctx, sp[0].o, (frame[7].o));
	}
label_13:;
	{
	LINE_NUMBER(510);
	sp[0].o = (jobject)((mindustry_world_Tile *) NULL_CHECK((frame[6].o)))->F_build;
	frame[9].o = sp[0].o;
	if ((isInstance(ctx, (frame[9].o), &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild)) == 0) goto label_16;
	}
	{
	frame[8].o = (checkCast(ctx, &class_mindustry_world_blocks_storage_CoreBlock$CoreBuild, (frame[9].o)));
	LINE_NUMBER(511);
	clinit_mindustry_Vars(ctx);
	sp[0].o = (jobject)SF_mindustry_Vars_state;
	sp[0].o = (jobject)((mindustry_core_GameState *) NULL_CHECK(sp[0].o))->F_teams;
	((func_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_game_Teams_registerCore_mindustry_world_blocks_storage_CoreBlock$CoreBuild])(ctx, sp[0].o, (frame[8].o));
	}
label_16:;
	LINE_NUMBER(513);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat SM_mindustry_game_Schematics_lambda$placeLoadout$1_mindustry_game_Schematic$Stile_R_float(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$placeLoadout$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return (jfloat((-((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_schematicPriority))));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Schematics_lambda$placeLoadout$0_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$placeLoadout$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(480);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock));
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_lambda$remove$0_mindustry_game_Schematic_mindustry_world_blocks_storage_CoreBlock_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$remove$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(376);
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Schematics_lambda$checkLoadout$2_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$checkLoadout$2", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(330);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	sp[0].o = (jobject)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_buildVisibility;
	clinit_mindustry_world_meta_BuildVisibility(ctx);
	sp[1].o = (jobject)SF_mindustry_world_meta_BuildVisibility_sandboxOnly;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_unlocked_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_unlocked_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_2;
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

jbool SM_mindustry_game_Schematics_lambda$checkLoadout$1_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$checkLoadout$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Schematics_lambda$checkLoadout$0_mindustry_game_Schematic$Stile_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$checkLoadout$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(323);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return (isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock));
	}

	popStackFrame(ctx);
}

jint SM_mindustry_game_Schematics_lambda$toPlans$2_mindustry_entities_units_BuildPlan_R_int(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$toPlans$2", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[0].o)))->F_block;
	popStackFrame(ctx);
	return (-((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_schematicPriority));
	}

	popStackFrame(ctx);
}

jbool SM_mindustry_game_Schematics_lambda$toPlans$1_boolean_mindustry_entities_units_BuildPlan_R_boolean(jcontext ctx, jbool param0, jobject param1) {
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$toPlans$1", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(301);
	if ((frame[0].i) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_isVisible_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_isVisible_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	if ((isInstance(ctx, sp[0].o, &class_mindustry_world_blocks_storage_CoreBlock)) == 0) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	jint temp0 = (jint)((func_mindustry_world_Block_unlockedNow_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_unlockedNow_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_mindustry_game_Schematics_lambda$toPlans$0_int_mindustry_game_Schematic_int_mindustry_game_Schematic$Stile_R_mindustry_entities_units_BuildPlan(jcontext ctx, jint param0, jobject param1, jint param2, jobject param3) {
	jtype frame[11];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$toPlans$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].i = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].o = param3;
	{
	LINE_NUMBER(300);
	clinit_mindustry_entities_units_BuildPlan(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_entities_units_BuildPlan);
	jint temp0 = (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_x) + (frame[0].i)) - (((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_width) / (jint(2)));
	jint temp1 = (((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_y) + (frame[2].i)) - (((jint)((mindustry_game_Schematic *) NULL_CHECK((frame[1].o)))->F_height) / (jint(2)));
	jint temp2 = (jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_rotation;
	sp[1].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_block;
	sp[2].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[3].o)))->F_config;
	init_mindustry_entities_units_BuildPlan_int_int_int_mindustry_world_Block_java_lang_Object(ctx, sp[0].o, temp0, temp1, temp2, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_lambda$getBuffer$3_mindustry_input_InputHandler$QueryEachable_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$getBuffer$3", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(273);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	((func_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlanConfigTop_mindustry_entities_units_BuildPlan_arc_util_Eachable])(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_lambda$getBuffer$2_mindustry_input_InputHandler$QueryEachable_mindustry_entities_units_BuildPlan(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$getBuffer$2", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(268);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_animScale = (jfloat(1));
	LINE_NUMBER(269);
	((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_worldContext = (jint(0));
	LINE_NUMBER(270);
	sp[0].o = (jobject)((mindustry_entities_units_BuildPlan *) NULL_CHECK((frame[1].o)))->F_block;
	((func_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_mindustry_world_Block_drawPlanRegion_mindustry_entities_units_BuildPlan_arc_util_Eachable])(ctx, sp[0].o, (frame[1].o), (frame[0].o));
	LINE_NUMBER(271);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_mindustry_game_Schematics_lambda$getBuffer$1_mindustry_game_Schematic$Stile_R_mindustry_entities_units_BuildPlan(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$getBuffer$1", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(250);
	clinit_mindustry_game_Schematics$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Schematics$1);
	sp[1].o = frame[0].o;
	jint temp0 = (jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[1].o)))->F_x;
	jint temp1 = (jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[1].o)))->F_y;
	jint temp2 = (jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[1].o)))->F_rotation;
	sp[2].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[1].o)))->F_block;
	sp[3].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[1].o)))->F_config;
	init_mindustry_game_Schematics$1_mindustry_game_Schematics_int_int_int_mindustry_world_Block_java_lang_Object(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, sp[2].o, sp[3].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_lambda$getBuffer$0_mindustry_game_Schematic$Stile(jcontext ctx, jobject param0) {
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$getBuffer$0", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(227);
	sp[0].o = (jobject)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_block;
	frame[1].i = ((jint)((mindustry_world_Block *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(228);
	frame[2].i = ((-((frame[1].i) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(229);
	frame[3].i = ((-((frame[1].i) - (jint(1)))) / (jint(2)));
	LINE_NUMBER(230);
	frame[4].i = (jint(0));
	}
label_4:;
	{
	if ((frame[4].i) >= (frame[1].i)) goto label_5;
	}
	{
	LINE_NUMBER(231);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[1].i)) goto label_8;
	}
	{
	LINE_NUMBER(232);
	frame[6].i = ((((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_x) + (frame[4].i)) + (frame[2].i));
	LINE_NUMBER(233);
	frame[7].i = ((((jint)((mindustry_game_Schematic$Stile *) NULL_CHECK((frame[0].o)))->F_y) + (frame[5].i)) + (frame[3].i));
	LINE_NUMBER(234);
	SM_arc_graphics_g2d_Fill_square_float_float_float(ctx, (((jfloat(1)) + (jfloat((frame[6].i)))) + (jfloat(0.5f))), (((jfloat(1)) + (jfloat((frame[7].i)))) + (jfloat(0.5f))), (jfloat(0.5f)));
	LINE_NUMBER(231);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(230);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(237);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_mindustry_game_Schematics_lambda$overwrite$0_mindustry_game_Schematic_mindustry_world_blocks_storage_CoreBlock_arc_struct_Seq(jcontext ctx, jobject param0, jobject param1, jobject param2) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$overwrite$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	{
	LINE_NUMBER(126);
	jint temp0 = (jint)((func_arc_struct_Seq_remove_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_arc_struct_Seq_remove_java_lang_Object_R_boolean])(ctx, (frame[2].o), (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_lambda$loadLoadouts$0_mindustry_game_Schematic(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$loadLoadouts$0", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(109);
	((func_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(0)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_lambda$load$2(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$load$2", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_gl_FrameBuffer(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_gl_FrameBuffer);
	init_arc_graphics_gl_FrameBuffer_int_int(ctx, sp[1].o, (((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_maxSchematicSize) + (jint(2))) + (8)), (((clinit_mindustry_Vars(ctx), (jint)SF_mindustry_Vars_maxSchematicSize) + (jint(2))) + (8)));
	((mindustry_game_Schematics *) NULL_CHECK(sp[0].o))->F_shadowBuffer = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$load$1", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((func_mindustry_game_Schematics_loadFile_arc_files_Fi_R_mindustry_game_Schematic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematics_loadFile_arc_files_Fi_R_mindustry_game_Schematic])(ctx, (frame[0].o), (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(96);
	if ((frame[3].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(97);
	((mindustry_game_Schematic *) NULL_CHECK((frame[3].o)))->F_mod = (jref) (frame[1].o);
	}
label_2:;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_lambda$load$0_arc_files_Fi(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$load$0", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(86);
	jint temp0 = (jint)((func_arc_files_Fi_extEquals_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_arc_files_Fi_extEquals_java_lang_String_R_boolean])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"msch"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((func_mindustry_game_Schematics_loadFile_arc_files_Fi_R_mindustry_game_Schematic) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_mindustry_game_Schematics_loadFile_arc_files_Fi_R_mindustry_game_Schematic])(ctx, (frame[0].o), (frame[1].o));
	}
label_1:;
	LINE_NUMBER(89);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_mindustry_game_Schematics_lambda$new$0_mindustry_game_EventType$ClientLoadEvent(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:lambda$new$0", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_arc_graphics_Texture(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_graphics_Texture);
	init_arc_graphics_Texture_java_lang_String(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"sprites/error.png"_j))));
	((mindustry_game_Schematics *) NULL_CHECK(sp[0].o))->F_errorTexture = (jref) sp[1].o;
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_game_Schematics(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_mindustry_game_Schematics_version = jint(1);
	SF_mindustry_game_Schematics_limitSchematicSize = jint(1);
	SF_mindustry_game_Schematics_padding = jint(2);
	SF_mindustry_game_Schematics_maxPreviewsMobile = jint(32);
	SF_mindustry_game_Schematics_resolution = jint(32);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/game/Schematics:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_game_Schematics(ctx);
	{
	LINE_NUMBER(47);
	clinit_mindustry_game_Schematic(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Schematic);
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	clinit_arc_struct_StringMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[2].o);
	init_mindustry_game_Schematic_arc_struct_Seq_arc_struct_StringMap_int_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), (jint(0)));
	clinit_mindustry_game_Schematics(ctx);
	SF_mindustry_game_Schematics_tmpSchem = sp[0].o;
	LINE_NUMBER(48);
	clinit_mindustry_game_Schematic(ctx);
	sp[0].o = gcAlloc(ctx, &class_mindustry_game_Schematic);
	clinit_arc_struct_Seq(ctx);
	sp[1].o = gcAlloc(ctx, &class_arc_struct_Seq);
	init_arc_struct_Seq(ctx, sp[1].o);
	clinit_arc_struct_StringMap(ctx);
	sp[2].o = gcAlloc(ctx, &class_arc_struct_StringMap);
	init_arc_struct_StringMap(ctx, sp[2].o);
	init_mindustry_game_Schematic_arc_struct_Seq_arc_struct_StringMap_int_int(ctx, sp[0].o, sp[1].o, sp[2].o, (jint(0)), (jint(0)));
	clinit_mindustry_game_Schematics(ctx);
	SF_mindustry_game_Schematics_tmpSchem2 = sp[0].o;
	LINE_NUMBER(50);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (jint(4)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (109);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (115);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (99);
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (104);
	clinit_mindustry_game_Schematics(ctx);
	SF_mindustry_game_Schematics_header = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_mindustry_game_Schematics;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method loadFile
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[4]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

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

	{ // Method getDefaultLoadout
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[15]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_arc_util_Nullable);
	}

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[28]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[55]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[56]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[57]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[58]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[59]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[60]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[61]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[62]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[63]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[64]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_mindustry_game_Schematics[] {
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
	(void *) M_arc_assets_Loadable_loadAsync,
	(void *) M_mindustry_game_Schematics_loadSync,
	(void *) M_arc_assets_Loadable_getName_R_java_lang_String,
	(void *) M_arc_assets_Loadable_getDependencies_R_arc_struct_Seq,
	(void *) M_mindustry_game_Schematics_load,
	(void *) M_mindustry_game_Schematics_loadLoadouts,
	(void *) M_mindustry_game_Schematics_overwrite_mindustry_game_Schematic_mindustry_game_Schematic,
	(void *) M_mindustry_game_Schematics_loadFile_arc_files_Fi_R_mindustry_game_Schematic,
	(void *) M_mindustry_game_Schematics_all_R_arc_struct_Seq,
	(void *) M_mindustry_game_Schematics_saveChanges_mindustry_game_Schematic,
	(void *) M_mindustry_game_Schematics_savePreview_mindustry_game_Schematic_arc_files_Fi,
	(void *) M_mindustry_game_Schematics_getPreview_mindustry_game_Schematic_R_arc_graphics_Texture,
	(void *) M_mindustry_game_Schematics_hasPreview_mindustry_game_Schematic_R_boolean,
	(void *) M_mindustry_game_Schematics_getBuffer_mindustry_game_Schematic_R_arc_graphics_gl_FrameBuffer,
	(void *) M_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_R_arc_struct_Seq,
	(void *) M_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_boolean_R_arc_struct_Seq,
	(void *) M_mindustry_game_Schematics_getLoadouts_mindustry_world_blocks_storage_CoreBlock_R_arc_struct_Seq,
	(void *) M_mindustry_game_Schematics_getLoadouts_R_arc_struct_ObjectMap,
	(void *) M_mindustry_game_Schematics_getDefaultLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic,
	(void *) M_mindustry_game_Schematics_isDefaultLoadout_mindustry_game_Schematic_R_boolean,
	(void *) M_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean,
	(void *) M_mindustry_game_Schematics_getMaxLaunchSize_mindustry_world_Block_R_int,
	(void *) M_mindustry_game_Schematics_findFile_java_lang_String_R_arc_files_Fi,
	(void *) M_mindustry_game_Schematics_add_mindustry_game_Schematic,
	(void *) M_mindustry_game_Schematics_remove_mindustry_game_Schematic,
	(void *) M_mindustry_game_Schematics_create_int_int_int_int_R_mindustry_game_Schematic,
	(void *) M_mindustry_game_Schematics_writeBase64_mindustry_game_Schematic_R_java_lang_String,
	(void *) M_mindustry_game_Schematics_lambda$getBuffer$1_mindustry_game_Schematic$Stile_R_mindustry_entities_units_BuildPlan,
	(void *) M_mindustry_game_Schematics_lambda$loadLoadouts$0_mindustry_game_Schematic,
	(void *) M_mindustry_game_Schematics_lambda$load$2,
	(void *) M_mindustry_game_Schematics_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi,
	(void *) M_mindustry_game_Schematics_lambda$load$0_arc_files_Fi,
	(void *) M_mindustry_game_Schematics_lambda$new$0_mindustry_game_EventType$ClientLoadEvent,
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
	{ "loadAsync", "()V" },
	{ "loadSync", "()V" },
	{ "getName", "()Ljava/lang/String;" },
	{ "getDependencies", "()Larc/struct/Seq;" },
	{ "load", "()V" },
	{ "loadLoadouts", "()V" },
	{ "overwrite", "(Lmindustry/game/Schematic;Lmindustry/game/Schematic;)V" },
	{ "loadFile", "(Larc/files/Fi;)Lmindustry/game/Schematic;" },
	{ "all", "()Larc/struct/Seq;" },
	{ "saveChanges", "(Lmindustry/game/Schematic;)V" },
	{ "savePreview", "(Lmindustry/game/Schematic;Larc/files/Fi;)V" },
	{ "getPreview", "(Lmindustry/game/Schematic;)Larc/graphics/Texture;" },
	{ "hasPreview", "(Lmindustry/game/Schematic;)Z" },
	{ "getBuffer", "(Lmindustry/game/Schematic;)Larc/graphics/gl/FrameBuffer;" },
	{ "toPlans", "(Lmindustry/game/Schematic;II)Larc/struct/Seq;" },
	{ "toPlans", "(Lmindustry/game/Schematic;IIZ)Larc/struct/Seq;" },
	{ "getLoadouts", "(Lmindustry/world/blocks/storage/CoreBlock;)Larc/struct/Seq;" },
	{ "getLoadouts", "()Larc/struct/ObjectMap;" },
	{ "getDefaultLoadout", "(Lmindustry/world/blocks/storage/CoreBlock;)Lmindustry/game/Schematic;" },
	{ "isDefaultLoadout", "(Lmindustry/game/Schematic;)Z" },
	{ "checkLoadout", "(Lmindustry/game/Schematic;Z)V" },
	{ "getMaxLaunchSize", "(Lmindustry/world/Block;)I" },
	{ "findFile", "(Ljava/lang/String;)Larc/files/Fi;" },
	{ "add", "(Lmindustry/game/Schematic;)V" },
	{ "remove", "(Lmindustry/game/Schematic;)V" },
	{ "create", "(IIII)Lmindustry/game/Schematic;" },
	{ "writeBase64", "(Lmindustry/game/Schematic;)Ljava/lang/String;" },
	{ "lambda$getBuffer$1", "(Lmindustry/game/Schematic$Stile;)Lmindustry/entities/units/BuildPlan;" },
	{ "lambda$loadLoadouts$0", "(Lmindustry/game/Schematic;)V" },
	{ "lambda$load$2", "()V" },
	{ "lambda$load$1", "(Lmindustry/mod/Mods$LoadedMod;Larc/files/Fi;)V" },
	{ "lambda$load$0", "(Larc/files/Fi;)V" },
	{ "lambda$new$0", "(Lmindustry/game/EventType$ClientLoadEvent;)V" },
};

static jclass interfaces[] { &class_arc_assets_Loadable, };

static FieldMetadata fields[] {
	{ "tmpSchem", &class_mindustry_game_Schematic, (intptr_t) &SF_mindustry_game_Schematics_tmpSchem, "Lmindustry/game/Schematic;", 26 },
	{ "tmpSchem2", &class_mindustry_game_Schematic, (intptr_t) &SF_mindustry_game_Schematics_tmpSchem2, "Lmindustry/game/Schematic;", 26 },
	{ "header", getArrayClass(&class_byte, 1), (intptr_t) &SF_mindustry_game_Schematics_header, "[B", 26 },
	{ "version", &class_byte, (intptr_t) &SF_mindustry_game_Schematics_version, "B", 26 },
	{ "limitSchematicSize", &class_boolean, (intptr_t) &SF_mindustry_game_Schematics_limitSchematicSize, "Z", 26 },
	{ "padding", &class_int, (intptr_t) &SF_mindustry_game_Schematics_padding, "I", 26 },
	{ "maxPreviewsMobile", &class_int, (intptr_t) &SF_mindustry_game_Schematics_maxPreviewsMobile, "I", 26 },
	{ "resolution", &class_int, (intptr_t) &SF_mindustry_game_Schematics_resolution, "I", 26 },
	{ "out", &class_arc_util_io_Streams$OptimizedByteArrayOutputStream, offsetof(mindustry_game_Schematics, F_out), "Larc/util/io/Streams$OptimizedByteArrayOutputStream;", 2 },
	{ "all", &class_arc_struct_Seq, offsetof(mindustry_game_Schematics, F_all), "Larc/struct/Seq;", 2 },
	{ "previews", &class_arc_struct_OrderedMap, offsetof(mindustry_game_Schematics, F_previews), "Larc/struct/OrderedMap;", 2 },
	{ "errored", &class_arc_struct_ObjectSet, offsetof(mindustry_game_Schematics, F_errored), "Larc/struct/ObjectSet;", 2 },
	{ "loadouts", &class_arc_struct_ObjectMap, offsetof(mindustry_game_Schematics, F_loadouts), "Larc/struct/ObjectMap;", 2 },
	{ "defaultLoadouts", &class_arc_struct_ObjectMap, offsetof(mindustry_game_Schematics, F_defaultLoadouts), "Larc/struct/ObjectMap;", 2 },
	{ "shadowBuffer", &class_arc_graphics_gl_FrameBuffer, offsetof(mindustry_game_Schematics, F_shadowBuffer), "Larc/graphics/gl/FrameBuffer;", 2 },
	{ "errorTexture", &class_arc_graphics_Texture, offsetof(mindustry_game_Schematics, F_errorTexture), "Larc/graphics/Texture;", 2 },
	{ "lastClearTime", &class_long, offsetof(mindustry_game_Schematics, F_lastClearTime), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_game_Schematics, 0, "()V", 1 },
	{ "loadSync", (intptr_t) M_mindustry_game_Schematics_loadSync, VTABLE_mindustry_game_Schematics_loadSync, "()V", 1 },
	{ "load", (intptr_t) M_mindustry_game_Schematics_load, VTABLE_mindustry_game_Schematics_load, "()V", 1 },
	{ "loadLoadouts", (intptr_t) M_mindustry_game_Schematics_loadLoadouts, VTABLE_mindustry_game_Schematics_loadLoadouts, "()V", 2 },
	{ "overwrite", (intptr_t) M_mindustry_game_Schematics_overwrite_mindustry_game_Schematic_mindustry_game_Schematic, VTABLE_mindustry_game_Schematics_overwrite_mindustry_game_Schematic_mindustry_game_Schematic, "(Lmindustry/game/Schematic;Lmindustry/game/Schematic;)V", 1 },
	{ "loadFile", (intptr_t) M_mindustry_game_Schematics_loadFile_arc_files_Fi_R_mindustry_game_Schematic, VTABLE_mindustry_game_Schematics_loadFile_arc_files_Fi_R_mindustry_game_Schematic, "(Larc/files/Fi;)Lmindustry/game/Schematic;", 2 },
	{ "all", (intptr_t) M_mindustry_game_Schematics_all_R_arc_struct_Seq, VTABLE_mindustry_game_Schematics_all_R_arc_struct_Seq, "()Larc/struct/Seq;", 1 },
	{ "saveChanges", (intptr_t) M_mindustry_game_Schematics_saveChanges_mindustry_game_Schematic, VTABLE_mindustry_game_Schematics_saveChanges_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 1 },
	{ "savePreview", (intptr_t) M_mindustry_game_Schematics_savePreview_mindustry_game_Schematic_arc_files_Fi, VTABLE_mindustry_game_Schematics_savePreview_mindustry_game_Schematic_arc_files_Fi, "(Lmindustry/game/Schematic;Larc/files/Fi;)V", 1 },
	{ "getPreview", (intptr_t) M_mindustry_game_Schematics_getPreview_mindustry_game_Schematic_R_arc_graphics_Texture, VTABLE_mindustry_game_Schematics_getPreview_mindustry_game_Schematic_R_arc_graphics_Texture, "(Lmindustry/game/Schematic;)Larc/graphics/Texture;", 1 },
	{ "hasPreview", (intptr_t) M_mindustry_game_Schematics_hasPreview_mindustry_game_Schematic_R_boolean, VTABLE_mindustry_game_Schematics_hasPreview_mindustry_game_Schematic_R_boolean, "(Lmindustry/game/Schematic;)Z", 1 },
	{ "getBuffer", (intptr_t) M_mindustry_game_Schematics_getBuffer_mindustry_game_Schematic_R_arc_graphics_gl_FrameBuffer, VTABLE_mindustry_game_Schematics_getBuffer_mindustry_game_Schematic_R_arc_graphics_gl_FrameBuffer, "(Lmindustry/game/Schematic;)Larc/graphics/gl/FrameBuffer;", 1 },
	{ "toPlans", (intptr_t) M_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_R_arc_struct_Seq, VTABLE_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_R_arc_struct_Seq, "(Lmindustry/game/Schematic;II)Larc/struct/Seq;", 1 },
	{ "toPlans", (intptr_t) M_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_boolean_R_arc_struct_Seq, VTABLE_mindustry_game_Schematics_toPlans_mindustry_game_Schematic_int_int_boolean_R_arc_struct_Seq, "(Lmindustry/game/Schematic;IIZ)Larc/struct/Seq;", 1 },
	{ "getLoadouts", (intptr_t) M_mindustry_game_Schematics_getLoadouts_mindustry_world_blocks_storage_CoreBlock_R_arc_struct_Seq, VTABLE_mindustry_game_Schematics_getLoadouts_mindustry_world_blocks_storage_CoreBlock_R_arc_struct_Seq, "(Lmindustry/world/blocks/storage/CoreBlock;)Larc/struct/Seq;", 1 },
	{ "getLoadouts", (intptr_t) M_mindustry_game_Schematics_getLoadouts_R_arc_struct_ObjectMap, VTABLE_mindustry_game_Schematics_getLoadouts_R_arc_struct_ObjectMap, "()Larc/struct/ObjectMap;", 1 },
	{ "getDefaultLoadout", (intptr_t) M_mindustry_game_Schematics_getDefaultLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic, VTABLE_mindustry_game_Schematics_getDefaultLoadout_mindustry_world_blocks_storage_CoreBlock_R_mindustry_game_Schematic, "(Lmindustry/world/blocks/storage/CoreBlock;)Lmindustry/game/Schematic;", 1 },
	{ "isDefaultLoadout", (intptr_t) M_mindustry_game_Schematics_isDefaultLoadout_mindustry_game_Schematic_R_boolean, VTABLE_mindustry_game_Schematics_isDefaultLoadout_mindustry_game_Schematic_R_boolean, "(Lmindustry/game/Schematic;)Z", 1 },
	{ "checkLoadout", (intptr_t) M_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean, VTABLE_mindustry_game_Schematics_checkLoadout_mindustry_game_Schematic_boolean, "(Lmindustry/game/Schematic;Z)V", 2 },
	{ "getMaxLaunchSize", (intptr_t) M_mindustry_game_Schematics_getMaxLaunchSize_mindustry_world_Block_R_int, VTABLE_mindustry_game_Schematics_getMaxLaunchSize_mindustry_world_Block_R_int, "(Lmindustry/world/Block;)I", 1 },
	{ "findFile", (intptr_t) M_mindustry_game_Schematics_findFile_java_lang_String_R_arc_files_Fi, VTABLE_mindustry_game_Schematics_findFile_java_lang_String_R_arc_files_Fi, "(Ljava/lang/String;)Larc/files/Fi;", 0 },
	{ "add", (intptr_t) M_mindustry_game_Schematics_add_mindustry_game_Schematic, VTABLE_mindustry_game_Schematics_add_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 1 },
	{ "remove", (intptr_t) M_mindustry_game_Schematics_remove_mindustry_game_Schematic, VTABLE_mindustry_game_Schematics_remove_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 1 },
	{ "create", (intptr_t) M_mindustry_game_Schematics_create_int_int_int_int_R_mindustry_game_Schematic, VTABLE_mindustry_game_Schematics_create_int_int_int_int_R_mindustry_game_Schematic, "(IIII)Lmindustry/game/Schematic;", 1 },
	{ "writeBase64", (intptr_t) M_mindustry_game_Schematics_writeBase64_mindustry_game_Schematic_R_java_lang_String, VTABLE_mindustry_game_Schematics_writeBase64_mindustry_game_Schematic_R_java_lang_String, "(Lmindustry/game/Schematic;)Ljava/lang/String;", 1 },
	{ "placeLaunchLoadout", (intptr_t) SM_mindustry_game_Schematics_placeLaunchLoadout_int_int, 0, "(II)V", 9 },
	{ "placeLoadout", (intptr_t) SM_mindustry_game_Schematics_placeLoadout_mindustry_game_Schematic_int_int, 0, "(Lmindustry/game/Schematic;II)V", 9 },
	{ "placeLoadout", (intptr_t) SM_mindustry_game_Schematics_placeLoadout_mindustry_game_Schematic_int_int_mindustry_game_Team, 0, "(Lmindustry/game/Schematic;IILmindustry/game/Team;)V", 9 },
	{ "placeLoadout", (intptr_t) SM_mindustry_game_Schematics_placeLoadout_mindustry_game_Schematic_int_int_mindustry_game_Team_boolean, 0, "(Lmindustry/game/Schematic;IILmindustry/game/Team;Z)V", 9 },
	{ "place", (intptr_t) SM_mindustry_game_Schematics_place_mindustry_game_Schematic_int_int_mindustry_game_Team, 0, "(Lmindustry/game/Schematic;IILmindustry/game/Team;)V", 9 },
	{ "place", (intptr_t) SM_mindustry_game_Schematics_place_mindustry_game_Schematic_int_int_mindustry_game_Team_boolean, 0, "(Lmindustry/game/Schematic;IILmindustry/game/Team;Z)V", 9 },
	{ "isSchematic", (intptr_t) SM_mindustry_game_Schematics_isSchematic_arc_files_Fi_R_boolean, 0, "(Larc/files/Fi;)Z", 9 },
	{ "readBase64", (intptr_t) SM_mindustry_game_Schematics_readBase64_java_lang_String_R_mindustry_game_Schematic, 0, "(Ljava/lang/String;)Lmindustry/game/Schematic;", 9 },
	{ "read", (intptr_t) SM_mindustry_game_Schematics_read_arc_files_Fi_R_mindustry_game_Schematic, 0, "(Larc/files/Fi;)Lmindustry/game/Schematic;", 9 },
	{ "read", (intptr_t) SM_mindustry_game_Schematics_read_java_io_InputStream_R_mindustry_game_Schematic, 0, "(Ljava/io/InputStream;)Lmindustry/game/Schematic;", 9 },
	{ "write", (intptr_t) SM_mindustry_game_Schematics_write_mindustry_game_Schematic_arc_files_Fi, 0, "(Lmindustry/game/Schematic;Larc/files/Fi;)V", 9 },
	{ "write", (intptr_t) SM_mindustry_game_Schematics_write_mindustry_game_Schematic_java_io_OutputStream, 0, "(Lmindustry/game/Schematic;Ljava/io/OutputStream;)V", 9 },
	{ "mapConfig", (intptr_t) SM_mindustry_game_Schematics_mapConfig_mindustry_world_Block_int_int_R_java_lang_Object, 0, "(Lmindustry/world/Block;II)Ljava/lang/Object;", 10 },
	{ "rotate", (intptr_t) SM_mindustry_game_Schematics_rotate_mindustry_game_Schematic_int_R_mindustry_game_Schematic, 0, "(Lmindustry/game/Schematic;I)Lmindustry/game/Schematic;", 9 },
	{ "rotated", (intptr_t) SM_mindustry_game_Schematics_rotated_mindustry_game_Schematic_boolean_R_mindustry_game_Schematic, 0, "(Lmindustry/game/Schematic;Z)Lmindustry/game/Schematic;", 10 },
	{ "lambda$rotated$0", (intptr_t) SM_mindustry_game_Schematics_lambda$rotated$0_int_int_int_mindustry_game_Schematic$Stile, 0, "(IIILmindustry/game/Schematic$Stile;)V", 4106 },
	{ "lambda$rotated$1", (intptr_t) SM_mindustry_game_Schematics_lambda$rotated$1_int_arc_math_geom_Point2, 0, "(ILarc/math/geom/Point2;)V", 4106 },
	{ "lambda$write$0", (intptr_t) SM_mindustry_game_Schematics_lambda$write$0_arc_struct_OrderedSet_mindustry_game_Schematic$Stile, 0, "(Larc/struct/OrderedSet;Lmindustry/game/Schematic$Stile;)V", 4106 },
	{ "lambda$read$0", (intptr_t) SM_mindustry_game_Schematics_lambda$read$0_arc_struct_IntMap_mindustry_ctype_ContentType_int_R_mindustry_ctype_Content, 0, "(Larc/struct/IntMap;Lmindustry/ctype/ContentType;I)Lmindustry/ctype/Content;", 4106 },
	{ "lambda$place$0", (intptr_t) SM_mindustry_game_Schematics_lambda$place$0_int_int_boolean_mindustry_game_Team_mindustry_game_Schematic$Stile, 0, "(IIZLmindustry/game/Team;Lmindustry/game/Schematic$Stile;)V", 4106 },
	{ "lambda$placeLoadout$2", (intptr_t) SM_mindustry_game_Schematics_lambda$placeLoadout$2_int_int_boolean_arc_struct_Seq_mindustry_game_Team_mindustry_game_Schematic$Stile, 0, "(IIZLarc/struct/Seq;Lmindustry/game/Team;Lmindustry/game/Schematic$Stile;)V", 4106 },
	{ "lambda$placeLoadout$1", (intptr_t) SM_mindustry_game_Schematics_lambda$placeLoadout$1_mindustry_game_Schematic$Stile_R_float, 0, "(Lmindustry/game/Schematic$Stile;)F", 4106 },
	{ "lambda$placeLoadout$0", (intptr_t) SM_mindustry_game_Schematics_lambda$placeLoadout$0_mindustry_game_Schematic$Stile_R_boolean, 0, "(Lmindustry/game/Schematic$Stile;)Z", 4106 },
	{ "lambda$remove$0", (intptr_t) SM_mindustry_game_Schematics_lambda$remove$0_mindustry_game_Schematic_mindustry_world_blocks_storage_CoreBlock_arc_struct_Seq, 0, "(Lmindustry/game/Schematic;Lmindustry/world/blocks/storage/CoreBlock;Larc/struct/Seq;)V", 4106 },
	{ "lambda$checkLoadout$2", (intptr_t) SM_mindustry_game_Schematics_lambda$checkLoadout$2_mindustry_game_Schematic$Stile_R_boolean, 0, "(Lmindustry/game/Schematic$Stile;)Z", 4106 },
	{ "lambda$checkLoadout$1", (intptr_t) SM_mindustry_game_Schematics_lambda$checkLoadout$1_mindustry_game_Schematic$Stile_R_boolean, 0, "(Lmindustry/game/Schematic$Stile;)Z", 4106 },
	{ "lambda$checkLoadout$0", (intptr_t) SM_mindustry_game_Schematics_lambda$checkLoadout$0_mindustry_game_Schematic$Stile_R_boolean, 0, "(Lmindustry/game/Schematic$Stile;)Z", 4106 },
	{ "lambda$toPlans$2", (intptr_t) SM_mindustry_game_Schematics_lambda$toPlans$2_mindustry_entities_units_BuildPlan_R_int, 0, "(Lmindustry/entities/units/BuildPlan;)I", 4106 },
	{ "lambda$toPlans$1", (intptr_t) SM_mindustry_game_Schematics_lambda$toPlans$1_boolean_mindustry_entities_units_BuildPlan_R_boolean, 0, "(ZLmindustry/entities/units/BuildPlan;)Z", 4106 },
	{ "lambda$toPlans$0", (intptr_t) SM_mindustry_game_Schematics_lambda$toPlans$0_int_mindustry_game_Schematic_int_mindustry_game_Schematic$Stile_R_mindustry_entities_units_BuildPlan, 0, "(ILmindustry/game/Schematic;ILmindustry/game/Schematic$Stile;)Lmindustry/entities/units/BuildPlan;", 4106 },
	{ "lambda$getBuffer$3", (intptr_t) SM_mindustry_game_Schematics_lambda$getBuffer$3_mindustry_input_InputHandler$QueryEachable_mindustry_entities_units_BuildPlan, 0, "(Lmindustry/input/InputHandler$QueryEachable;Lmindustry/entities/units/BuildPlan;)V", 4106 },
	{ "lambda$getBuffer$2", (intptr_t) SM_mindustry_game_Schematics_lambda$getBuffer$2_mindustry_input_InputHandler$QueryEachable_mindustry_entities_units_BuildPlan, 0, "(Lmindustry/input/InputHandler$QueryEachable;Lmindustry/entities/units/BuildPlan;)V", 4106 },
	{ "lambda$getBuffer$1", (intptr_t) M_mindustry_game_Schematics_lambda$getBuffer$1_mindustry_game_Schematic$Stile_R_mindustry_entities_units_BuildPlan, VTABLE_mindustry_game_Schematics_lambda$getBuffer$1_mindustry_game_Schematic$Stile_R_mindustry_entities_units_BuildPlan, "(Lmindustry/game/Schematic$Stile;)Lmindustry/entities/units/BuildPlan;", 4098 },
	{ "lambda$getBuffer$0", (intptr_t) SM_mindustry_game_Schematics_lambda$getBuffer$0_mindustry_game_Schematic$Stile, 0, "(Lmindustry/game/Schematic$Stile;)V", 4106 },
	{ "lambda$overwrite$0", (intptr_t) SM_mindustry_game_Schematics_lambda$overwrite$0_mindustry_game_Schematic_mindustry_world_blocks_storage_CoreBlock_arc_struct_Seq, 0, "(Lmindustry/game/Schematic;Lmindustry/world/blocks/storage/CoreBlock;Larc/struct/Seq;)V", 4106 },
	{ "lambda$loadLoadouts$0", (intptr_t) M_mindustry_game_Schematics_lambda$loadLoadouts$0_mindustry_game_Schematic, VTABLE_mindustry_game_Schematics_lambda$loadLoadouts$0_mindustry_game_Schematic, "(Lmindustry/game/Schematic;)V", 4098 },
	{ "lambda$load$2", (intptr_t) M_mindustry_game_Schematics_lambda$load$2, VTABLE_mindustry_game_Schematics_lambda$load$2, "()V", 4098 },
	{ "lambda$load$1", (intptr_t) M_mindustry_game_Schematics_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi, VTABLE_mindustry_game_Schematics_lambda$load$1_mindustry_mod_Mods$LoadedMod_arc_files_Fi, "(Lmindustry/mod/Mods$LoadedMod;Larc/files/Fi;)V", 4098 },
	{ "lambda$load$0", (intptr_t) M_mindustry_game_Schematics_lambda$load$0_arc_files_Fi, VTABLE_mindustry_game_Schematics_lambda$load$0_arc_files_Fi, "(Larc/files/Fi;)V", 4098 },
	{ "lambda$new$0", (intptr_t) M_mindustry_game_Schematics_lambda$new$0_mindustry_game_EventType$ClientLoadEvent, VTABLE_mindustry_game_Schematics_lambda$new$0_mindustry_game_EventType$ClientLoadEvent, "(Lmindustry/game/EventType$ClientLoadEvent;)V", 4098 },
	{ "<clinit>", (intptr_t) clinit_mindustry_game_Schematics, 0, "()V", 8 },
};

Class class_mindustry_game_Schematics{
		.nativeName = (intptr_t) "mindustry/game/Schematics",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_game_Schematics),
		.classVtable = (intptr_t) vtable_mindustry_game_Schematics,
		.staticInitializer = (intptr_t) clinit_mindustry_game_Schematics,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_mindustry_game_Schematics,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 66,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_game_Schematics = registerClass(&class_mindustry_game_Schematics);

}
